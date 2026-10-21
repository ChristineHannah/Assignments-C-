#include <iostream>
#include <string>
using namespace std;
class Media
{
public:
    virtual void play() const
    {
        cout << "Play media..." << endl;
    }
    virtual ~Media() = default;
};
class Movie : public Media
{
private:
    string movie_name;
    double duration;

public:
    Movie(string name, double dur) : movie_name(name), duration(dur) {};
    void play() const override
    {
        cout << "Playing movie: " << movie_name << endl
             << "Duration: " << duration << endl;
    }
};
class Song : public Media
{
private:
    string song_title;
    string artist_name;

public:
    Song(string t, string a) : song_title(t), artist_name(a) {};
    void play() const override
    {
        cout << "Current song: " << song_title << endl
             << "Artist: " << artist_name << endl;
    }
};
int main()
{

    Media *media1 = new Movie("Inception", 148);
    Media *media2 = new Song("Buffalo Soldier", "Bob Marely");

    media1->play();
    media2->play();

    delete media1;
    delete media2;

    return 0;
}