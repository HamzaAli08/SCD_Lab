#include <iostream>
using namespace std;
class Node {
	private:
		int data;
		Node *next;
	public:
		void set (int data){
			this->data=data;
		}
		int get (){
			return data;
		}
		void setNext (Node *next){
			this->next=next;
		}
		Node *getNext(){
			return next;
		}
};

int main(){
	Node obj;
	obj.set(7);
	obj.get();
}
