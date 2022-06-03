#include<iostream>
#include<list>
using namespace std;

class YoutubeChannel {
private:
	string Name;
	int Subs;
	list<string> PublishedVids;

protected:
	string Owner;
	int ContentQuality;

public:
	YoutubeChannel(string name, string ownername) {
		Name = name;
		Owner = ownername;
		Subs = 0;
		ContentQuality = 0;
	}

	void Subscribe() {
		Subs++;
	}

	void Unsubscribe() {
		Subs--;
	}

	void Published(string title) {
		PublishedVids.push_back(title);
	}

	void CheckAnalytics() {
		if (ContentQuality < 5)
			cout << Name << " has not good stuff" << endl;
		else
			cout << Name << " is aight" << endl;
	}

	void print() {
		cout << "Youtube Channal: " << Name << endl;
		cout << "Channel Owner: " << Owner << endl;
		cout << "Subscribers: " << Subs << endl;
		cout << "Published Videos:" << endl;
		for (string VidName : PublishedVids) {
			cout << VidName << endl;
		}
	}
};

class CookingYtVids : public YoutubeChannel {
public:
	CookingYtVids(string name, string ownername) :YoutubeChannel(name, ownername) {

	}
	void Practice() {
		cout << Owner << " Cooks, and bakes, and eats...." << endl;
		ContentQuality++;
	}
};

class SingingYtVids : public YoutubeChannel {
public:
	SingingYtVids(string name, string ownername) :YoutubeChannel(name, ownername) {

	}
	void Practice() {
		cout << Owner << " Sings, PLays musics and Flails arms...." << endl;
		ContentQuality++;
	}
};

int main() {
	CookingYtVids YT("Someone's Cooking Channel", "Bunch of Guys");
	SingingYtVids YT2("Bunch of Guys' Cooking Channel", "Some singular person");
	//cookYT.Published("Crack Eggs");
	//cookYT.Published("Mixing Eggs");
	//cookYT.Published("Frying Eggs");
	//cookYT.Published("Layering the Perfect Parfait with an echoline crisp");
	//int counter = 0;
	//while (counter < 15) {
	//	cookYT.Subscribe();
	//	counter++;
	//}

	//cookYT.print();
	YT.Practice();
	int counter = 0;
	while (counter < 6) {
		YT2.Practice();
		counter++;
	}
	YoutubeChannel* y1 = &YT;
	YoutubeChannel* y2 = &YT2;

	y1->CheckAnalytics();
	y2->CheckAnalytics();

	system("pause>0");
}