class Rectangle {
    public:
    int width;
    int height;
    void Display(){
        cout<<width<<" "<<height<<"\n";
    }
    
};
class RectangleArea : public Rectangle {
    public:
    void Input(){
        cin>>width>>height;
    }
    void Display(){
        cout<<width*height;
    }
};
