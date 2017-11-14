#include "avltree.hpp"
#include "AVL_TREE.hpp"
#include <cstdlib>
#include "main.h"
int main()
{
	Test();

	//Test2();
	cout << "Hello" << endl;
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	sort(arr, arr+9);
	vector<int> vec(arr, arr+9);
	sort(vec.begin(), vec.end());
	string a;
	queue<int> Queue;
	for (auto &i : vec) {
		cout << i << " ";
	}

	system("pause");

	return 0;
}

void Test() {
	avltree<int> avlt;
	/*avlt.addElem(6);
	avlt.addElem(8);
	avlt.addElem(7);
	avlt.addElem(9);
	avlt.addElem(4);
	avlt.addElem(5);
	avlt.addElem(2);
	avlt.addElem(1);

	avlt.addElem(1);
	avlt.addElem(3);
	avlt.addElem(2);*/

	/*avlt.addElem(3);
	avlt.addElem(2);
	avlt.addElem(1);
	avlt.addElem(4);
	avlt.addElem(5);
	avlt.addElem(6);
	avlt.addElem(7);
	avlt.addElem(10);
	avlt.addElem(9);
	avlt.addElem(8);*/
	avlt.insert(3);
	avlt.insert(2);
	avlt.insert(1);
	avlt.insert(4);
	avlt.insert(5);
	avlt.insert(6);
	avlt.insert(7);
	avlt.insert(10);
	avlt.insert(9);
	avlt.insert(8);

	avlt.remove(7);


	cout << "Added! " << endl;

	cout << "\nInorder: " << endl;
	//avlt.InorderTraverse(avlt.getRoot());
	avlt.inorder();
	cout << "\nPreorder: " << endl;
	//avlt.PreorderTraverse(avlt.getRoot());
	avlt.preorder();
	cout << "\nPostorder: " << endl;
	//avlt.PostorderTraverse(avlt.getRoot());
	avlt.postorder();
	cout << "\nLayer: " << endl;
	//avlt.LayerTraverse(avlt.getRoot());
	avlt.layerorder();
	cout << endl;
}

void Test2() {
	int i, ilen;
	AVLTree<int>* tree = new AVLTree<int>();

	cout << "== �������: ";
	ilen = TBL_SIZE(arr);
	for (i = 0; i<ilen; i++) {
		cout << arr[i] << " ";
		tree->insert(arr[i]);
	}

	cout << "\n== ǰ�����: ";
	tree->preOrder();

	cout << "\n== �������: ";
	tree->inOrder();

	cout << "\n== �������: ";
	tree->postOrder();
	cout << endl;

	cout << "== �߶�: " << tree->height() << endl;
	cout << "== ��Сֵ: " << tree->minimum() << endl;
	cout << "== ���ֵ: " << tree->maximum() << endl;
	cout << "== ������ϸ��Ϣ: " << endl;
	tree->print();

	i = 13;
	cout << "\n== ɾ�����ڵ�: " << i;
	tree->remove(i);

	cout << "\n== �߶�: " << tree->height();
	cout << "\n== �������: ";
	tree->inOrder();
	cout << "\n== ������ϸ��Ϣ: " << endl;
	tree->print();

	// ���ٶ�����
	tree->destroy();
}

