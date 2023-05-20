
class SpinLock
{
private:
    bool locked;
    int value;

public:
    void SetValue(int n);
    SpinLock();
};