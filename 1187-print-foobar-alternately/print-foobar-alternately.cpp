class FooBar {
private:
    int n;
    sem_t foosem;
    sem_t barsem;

public:
    FooBar(int n) {
        this->n = n;
        sem_init(&foosem,0,1);
        sem_init(&barsem,0,0);
    }

    void foo(function<void()> printFoo) {
        
        for (int i = 0; i < n; i++) {
            
        	// printFoo() outputs "foo". Do not change or remove this line.
            sem_wait(&foosem);
        	printFoo();
            sem_post(&barsem);
        }

    }

    void bar(function<void()> printBar) {
        
        for (int i = 0; i < n; i++) {
            
        	// printBar() outputs "bar". Do not change or remove this line.
            sem_wait(&barsem);
        	printBar();
            sem_post(&foosem);
        }
    }
    ~FooBar(){
        sem_destroy(&foosem);
        sem_destroy(&barsem);
    }
};