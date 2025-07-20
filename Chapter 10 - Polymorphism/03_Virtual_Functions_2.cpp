#include <iostream>
#include <cstring>
using namespace std;

class CWH{
	protected:
		string title;
		float rating;
	public:
		CWH(string s, float r){
			title = s;
			rating = r;
		}
		virtual void display(){}
};


class CWHVideo : public CWH{
	float video_length;
	public :
		CWHVideo(string s, float r, float vl) : CWH(s,r){
			video_length = vl;
		}
		void display(){
			cout<<"This is a video with title "<<title<<endl
				<<"This video has rating "<<rating<<endl;
			cout<<"Length of this video is : "<<video_length<<endl;
		}
};

class CWHText : public CWH{
	int words;
	public :
		CWHText(string s, float r, int wc) : CWH(s,r){
			words = wc;
		}
		void display(){
			cout<<"This is a text with title "<<title<<endl
				<<"This video has rating "<<rating<<endl;
			cout<<"This text has word count : "<<words<<endl;
		}
};

int main()
{
	string title;
	float rating, vlen;
	int words;

	title = "Django tutorial";
	vlen = 4.56;
	rating = 4.8;
	CWHVideo djVideo(title, rating, vlen);
	// djVideo.display();

	title = "Django tutorial Text";
	words = 433;
	rating = 4.5;
	CWHText djText(title, rating, words);
	// djText.display();



	CWH* tut[2];
	tut[0] = &djVideo;
	tut[1] = &djText;

	tut[0]->display();
	tut[1]->display();

	// if display() in CWH class is not virtual then both the display will show the contents of the CWH class and not their individual ones
	return 0;
}

// Rules for virtual functions :
/*
1. They cannot be static
2. They are accessed by object pointers
3. Virtual functions can be a friend of another class
4. A virtual function in base class might not be used
5. If a virtual function is defined in base class, it need not be redefined in derived class
*/
