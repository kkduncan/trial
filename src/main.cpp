
#include <iostream>
#include <cstdlib>
#include "collections/linked_list.h"
#include "collections/bst.h"

int main(int argc, char *argv[])
{
	std::cout << "[  Commencing Linked List Eval  ]" << std::endl;
	kd::SinglyLinkedList<int> list;

	list.pushToFront(1);
	list.pushToFront(2);
	list.pushToFront(3);
	list.pushToFront(4);
 	list.pushToFront(5);
	list.print();

	kd::SinglyLinkedList<int>::Node head = list.head();	
	std::cout << "Head value (1): " << head.value() << std::endl;
	head.value() = 3;
	std::cout << "Head value (2): " << head.value() << std::endl;

	list.remove(1);
	list.print();

	kd::SinglyLinkedList<int>::Node tail = list.tail();
	std::cout << "Tail value (1): " << tail.value() << std::endl;
	tail.value() = 3;
	std::cout << "Tail value (2): " << tail.value() << std::endl;
	
	list.remove(5);
	list.print();

	list.remove(4);
	list.print();
 
 	list.remove(0);

	list.print();
	list.clear();
	list.print();
    
    std::cout << "---- DONE WITH LINKED LIST ----" << std::endl << std::endl;
    
	////////////////////////////////////////////////////////////////////////////

    std::cout << "[  Commencing BST Eval  ]" << std::endl;
    kd::BSTree<int> bst;
    
    bst.insert(2);
	bst.insert(1);
	bst.insert(3);
	bst.insert(11);
	bst.insert(4);
	bst.insert(5);
    
    auto elemList = bst.getElementList(kd::TreeTraversal::PostOrder);

	std::cout << "Is the value 11 in the list? --> " << std::boolalpha << bst.find(11) << std::endl;
	std::cout << "Is the value 13 in the list? --> " << std::boolalpha << bst.find(13) << std::endl;
    
    std::cout << "Tree Height: " << bst.height() << std::endl;    
    std::cout << "Tree contents:" << std::endl;
    for (auto e : elemList)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;

	std::cout << "Max value in the tree is --> " << bst.getMax() << std::endl;
	std::cout << "Min value in the tree is --> " << bst.getMin() << std::endl;

	std::cout << "Delete the value 11 --> " << std::boolalpha << bst.remove(11) << std::endl;
	
	std::cout << "Tree contents after deletion:" << std::endl;
	elemList = bst.getElementList(kd::TreeTraversal::PostOrder);
	for (auto e : elemList)
	{
		std::cout << e << " ";
	}
	std::cout << std::endl;

	std::cout << "Clearing tree of size: " << bst.size() << std::endl;
	bst.clear();
	std::cout << "Current tree size: " << bst.size() << std::endl;    
    
	////////////////////////////////////////////////////////////////////////////

	std::cout << "[  Commencing Red-Black Tree Eval  ]" << std::endl;
	kd::RBTree<int> rbTree;

	std::cout << std::endl << std::endl << "> Done...press enter to exit" << std::endl;
	std::cin.get();

	return 0;
}
