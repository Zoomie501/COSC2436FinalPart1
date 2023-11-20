#include <iostream>
#include <string>

class Record {
public:
  // Constructor
  Record(const std::string &album, int year, const std::string &artist,
         const std::string &genre)
      : album(album), year(year), artist(artist), genre(genre) {}

  // Member functions to access attributes
  std::string getAlbum() const { return album; }

  int getYear() const { return year; }

  std::string getArtist() const { return artist; }

  std::string getGenre() const { return genre; }

  // Display information about the record
  void displayInfo() const {
    std::cout << "Artist: " << artist << "\n";
    std::cout << "Album: " << album << "\n";
    std::cout << "Year: " << year << "\n";
    std::cout << "Genre: " << genre << "\n";
  }

private:
  // Attributes
  std::string album;
  int year;
  std::string artist;
  std::string genre;
};

int main() {
  // Example usage
  Record myRecord("Lullabies to Paralyze", 2005, "Queens of the Stone Age", "Rock");
  myRecord.displayInfo();

  return 0;
}
