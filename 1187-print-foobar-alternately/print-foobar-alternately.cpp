class FooBar {
private:
    int n;
    mutex mtx;
    bool fooTurn = true;

public:
    FooBar(int n) {
        this->n = n;
    }

    void foo(function<void()> printFoo) {
        
        for (int i = 0; i < n; i++) {
            while(true){
                unique_lock<mutex> lock(mtx);
                if(fooTurn){
                    printFoo();
                    fooTurn = false;
                    break;
                }
            }
        }
    }

    void bar(function<void()> printBar) {
        
        for (int i = 0; i < n; i++) {
            while(true){
                unique_lock<mutex> lock(mtx);
                if(!fooTurn){
                    printBar();
                    fooTurn = true;
                    break;
                }
            }
        }
    }
};