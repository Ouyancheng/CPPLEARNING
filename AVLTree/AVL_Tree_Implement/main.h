/*
 * main.h
 *
 *  Created on: Sep 1, 2016
 *      Author: ouyan
 */

#ifndef MAIN_H_
#define MAIN_H_

//#include "AVL_TREE.hpp"
//static int arr[] = { 3,2,1,4,5,6,7,16,15,14,13,12,11,10,8,9 };
//#define TBL_SIZE(a) ( (sizeof(a)) / (sizeof(a[0])) )
#include "Vector.hpp"
//#include "avltree_R.hpp"

void test2() {
	//avltree<int> avlt;
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
	/*avlt.insert(3);
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
	 cout << endl;*/
}

/*void test3() {
 int i, ilen;
 AVLTree<int>* tree = new AVLTree<int>();

 cout << "== �������: ";
 ilen = TBL_SIZE(arr);
 for (i = 0; i < ilen; i++) {
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
 }*/

/*void testV() {
	Vector<int> v(2);
	v.push_back(3);
	v.push_back(6);
	v.push_back(8);
	v.push_back(9);
	cout << v.capacity() << endl;
	cout << v.size() << endl;
	cout << v.back() << endl;
	v.pop_back();
	cout << v.back() << endl;
	cout << v.size() << endl;
	for (unsigned int i=0;i<v.size();i++) {
		cout << v[i] << " ";
	}
}*/




#endif /* MAIN_H_ */
