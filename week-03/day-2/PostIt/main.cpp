#include <iostream>
#include <string>

class PostIt {
private:
    std::string backgroundColor;
    std::string text;
    std::string textColor;
public:
    void getBackgroundColor()
    {
        std::cout << backgroundColor << std::endl;
    }
    void getText()
    {
        std::cout << text << std::endl;
    }
    void getTextColor()
    {
        std::cout << textColor << std::endl;
    }
    void setBackgroundColor(std::string color)
    {
        backgroundColor = color;
    }
    void setText(std::string post)
    {
        text = post;
    }
    void setTextColor(std::string postColor)
    {
        textColor = postColor;
    }
};

int main() {
    PostIt PostIt1;
    PostIt1.setBackgroundColor("orange");
    PostIt1.setText("Idea 1");
    PostIt1.setTextColor("blue");
    PostIt PostIt2;
    PostIt2.setBackgroundColor("pink");
    PostIt2.setText("Awesome");
    PostIt2.setTextColor("black");
    PostIt PostIt3;
    PostIt3.setBackgroundColor("yellow");
    PostIt3.setText("Superb!");
    PostIt3.setTextColor("green");

    PostIt1.getBackgroundColor();
    PostIt1.getText();
    PostIt1.getTextColor();


    return 0;
}