#include <string>
#include <iostream>
using namespace std;
class Book
{
public: int bookNumber;
public :string Author;
public: int year;
public :string Category;
};

  class Library;
 {
	private List<Book> _Library;

	public void AddBook(Book book)
	{
		_Library.Add(book);
	}

	public Book FindBookByBookNumber(int number)
	{
		return _Library.Where(i = > i.bookNumber == number).FirstOrDefault();
	}

	public void DeleteBookByBookNumber(int number)
	{
		var book = _Library.Where(i = > i.bookNumber == number).FirstOrDefault();
		if (book != null)
		{
			_Library.Remove(book);
		}
	}
}