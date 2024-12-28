//#include <iostream>
//using namespace std;
//
//template <typename T>
//class Box {
//private:
//    T value;
//
//public:
//    Box(T val) : value(val) {}
//
//    // Option 1: Template-specific friend function
//    friend void showBox(const Box<T>& box) {
//        static int instanceCount = 0; // Tracks instantiation count
//        cout << "Box<" << typeid(T).name() << "> showBox instance #" << ++instanceCount << endl;
//        cout << "Box value: " << box.value << endl;
//    }
//
//    template<class U>
//    friend void showBox2(const Box<U>& box);
//
//    //// Uncomment Option 2 to test single non-templated friend function
//    //
//    //friend void showBox(const Box& box) {
//    //    static int instanceCount = 0; // Tracks a single instance
//    //    cout << "General showBox instance #" << ++instanceCount << endl;
//    //    cout << "Box value: " << box.value << endl;
//    //}
//};
//
//template<class U>
//void showBox2(const Box<U>& box)
//{
//    cout << box.value << endl;
//}
//
//int main() {
//    Box<int> intBox(42);
//    Box<double> dblBox(3.14);
//
//    showBox(intBox);  // Calls showBox for Box<int>
//    showBox(dblBox);  // Calls showBox for Box<double>
//
//    showBox2(intBox);
//
//    return 0;
//}
