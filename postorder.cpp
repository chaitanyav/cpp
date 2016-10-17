#include <iostream>
#include <stack>

template<typename tVal>
class BinaryTree {
public:
  tVal v_;
  BinaryTree<tVal> *left;
  BinaryTree<tVal> *right;

  BinaryTree(tVal v): v_(v), left(NULL), right(NULL) {}
};


template<typename  tVal>
void nonRecursivePostOrder(BinaryTree<tVal> *root) {
  std::stack<BinaryTree <tVal> *> s;
  while(true) {
    if(root) {
      s.push(root);
      root = root->left;
    } else {
      if(s.empty()) {
	break;
      } else {
	if(!s.top()->right) {
	  root = s.top();
	  s.pop();
	  std::cout << "v=" << root->v_;
	  if(root == s.top()->right) {
	    std::cout << "v=" << s.top()->v_;
	    s.pop();
	  }
	}
	if(!s.empty()) {
	  root = s.top()->right;
	} else {
	  root = NULL;
	}
      }
    }
  }
}


int main() {
  BinaryTree<int> s(6);
  s.left = new BinaryTree<int>(4);
  s.right = new BinaryTree<int>(3);
  nonRecursivePostOrder(&s);
  return 0;
}
