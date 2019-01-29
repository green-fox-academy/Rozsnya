#include <iostream>
#include <string>

class BlogPost{
    std::string authorName;
    std::string title;
    std::string text;
    std::string publicationDate;
public:
    void getAuthorName()
    {
        std::cout << authorName << std::endl;
    }
    void getTitle()
    {
        std::cout << title << std::endl;
    }
    void getText()
    {
        std::cout << text << std::endl;
    }
    void getPublicationDate()
    {
        std::cout << publicationDate << std::endl;
    }
    void setAuthorName(std::string name)
    {
        authorName = name;
    }
    void setTitle(std::string mainTitle)
    {
        title = mainTitle;
    }
    void setText(std::string post)
    {
        text = post;
    }
    void setPublicationDate(std::string date)
    {
        publicationDate = date;
    }
};

int main() {
    BlogPost Post1;
    Post1.setAuthorName("John Doe");
    Post1.setTitle("Lorem Ipsum");
    Post1.setText("Lorem ipsum dolor sit amet.");
    Post1.setPublicationDate("2000.05.04");
    BlogPost Post2;
    Post2.setAuthorName("Tim Urban");
    Post2.setTitle("Wait but why");
    Post2.setText("A popular long-form, stick-figure-illustrated blog about almost everything.");
    Post2.setPublicationDate("2010.10.10.");
    BlogPost Post3;
    Post3.setAuthorName("William Turton");
    Post3.setTitle("One Engineer Is Trying to Get IBM to Reckon With Trump");
    Post3.setText("Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention."
                  " When I asked to take his picture outside one of IBM’s New York City offices, "
                  "he told me that he wasn’t really into the whole organizer profile thing.");
    Post3.setPublicationDate("2017.03.28.");

    Post1.getText();
    Post1.getAuthorName();
    Post1.getPublicationDate();
    Post1.getTitle();
    return 0;
}