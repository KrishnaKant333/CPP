#include <iostream>
using namespace std;

// a class whose purpose is to inherit to others and contains atleast one pure virtual function is called abstract base class

class CWH{
	protected:
		string title;
		float rating;
	public:
		CWH(string s, float r){
			title = s;
			rating = r;
		}
		virtual void display() = 0 ; // do nothing function or pure virtual function
		// class containing atleast one pure virtual function is called abstract base class which is used to inherit to other derived classes

		// it means the display() function in each of the derived classes has to be overwritten
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

	return 0;
}
