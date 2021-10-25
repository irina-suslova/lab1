#include <iostream>
#include <sequence.h>
#include <listsequence.h>
#include <listsequence.cpp>
#include <isorter.h>
#include <isorter.cpp>
#include <fstream>
#include <extrafunctions.h>
#include <graphtests.cpp>
#include <string.h>

using namespace std;

// Код из ArrayReversedBubbleSort.exe
// В *argv[] передаются: количество элементов; тип структуры, на которой
// строится последоватльность; тип генерируемых данных; тип сортировки

int main(int argc, char *argv[]) {
    if (argc < 5) return 0;
    int n = atoi(argv[1]);
    string SequenceType = argv[2];
    string GenerationType = argv[3];
    string SortType = argv[4];

    Sequence<int> *seq;

    if (SequenceType == "ArraySequence") {
        if (GenerationType == "Random") {
            if (SortType == "BubbleSort") {
                seq = (Sequence<int> *) new ArraySequence<int>;
                generateRand(seq, n, max(n, 100));
                writeBubbleSortInFile(seq, cmp);
            }
            else if (SortType == "ShakerSort") {
                seq = (Sequence<int> *) new ArraySequence<int>;
                generateRand(seq, n, max(n, 100));
                writeShakerSortInFile(seq, cmp);
            }
            else if (SortType == "MergeSort") {
                seq = (Sequence<int> *) new ArraySequence<int>;
                generateRand(seq, n, max(n, 100));
                writeMergeSortInFile(seq, cmp);
            }
            else if (SortType == "HeapSort") {
                seq = (Sequence<int> *) new ArraySequence<int>;
                generateRand(seq, n, max(n, 100));
                writeHeapSortInFile(seq, cmp);
            }
            else if (SortType == "QuickSort") {
                seq = (Sequence<int> *) new ArraySequence<int>;
                generateRand(seq, n, max(n, 100));
                writeQuickSortInFile(seq, cmp);
            }
        }
        else if (GenerationType == "Sorted") {
            if (SortType == "BubbleSort") {
                seq = (Sequence<int> *) new ArraySequence<int>;
                generateSorted(seq, n);
                writeBubbleSortInFile(seq, cmp);
            }
            else if (SortType == "ShakerSort") {
                seq = (Sequence<int> *) new ArraySequence<int>;
                generateSorted(seq, n);
                writeShakerSortInFile(seq, cmp);
            }
            else if (SortType == "MergeSort") {
                seq = (Sequence<int> *) new ArraySequence<int>;
                generateSorted(seq, n);
                writeMergeSortInFile(seq, cmp);
            }
            else if (SortType == "HeapSort") {
                seq = (Sequence<int> *) new ArraySequence<int>;
                generateSorted(seq, n);
                writeHeapSortInFile(seq, cmp);
            }
            else if (SortType == "QuickSort") {
                seq = (Sequence<int> *) new ArraySequence<int>;
                generateSorted(seq, n);
                writeQuickSortInFile(seq, cmp);
            }
        }
        else if (GenerationType == "Reversed") {
            if (SortType == "BubbleSort") {
                seq = (Sequence<int> *) new ArraySequence<int>;
                generateReversed(seq, n);
                writeBubbleSortInFile(seq, cmp);
            }
            else if (SortType == "ShakerSort") {
                seq = (Sequence<int> *) new ArraySequence<int>;
                generateReversed(seq, n);
                writeShakerSortInFile(seq, cmp);
            }
            else if (SortType == "MergeSort") {
                seq = (Sequence<int> *) new ArraySequence<int>;
                generateReversed(seq, n);
                writeMergeSortInFile(seq, cmp);
            }
            else if (SortType == "HeapSort") {
                seq = (Sequence<int> *) new ArraySequence<int>;
                generateReversed(seq, n);
                writeHeapSortInFile(seq, cmp);
            }
            else if (SortType == "QuickSort") {
                seq = (Sequence<int> *) new ArraySequence<int>;
                generateReversed(seq, n);
                writeQuickSortInFile(seq, cmp);
            }
        }
    }
    else if (SequenceType == "ListSequence") {
        if (GenerationType == "Random") {
            if (SortType == "BubbleSort") {
                seq = (Sequence<int> *) new ListSequence<int>;
                generateRand(seq, n, max(n, 100));
                writeBubbleSortInFile(seq, cmp);
            }
            else if (SortType == "ShakerSort") {
                seq = (Sequence<int> *) new ListSequence<int>;
                generateRand(seq, n, max(n, 100));
                writeShakerSortInFile(seq, cmp);
            }
            else if (SortType == "MergeSort") {
                seq = (Sequence<int> *) new ListSequence<int>;
                generateRand(seq, n, max(n, 100));
                writeMergeSortInFile(seq, cmp);
            }
            else if (SortType == "HeapSort") {
                seq = (Sequence<int> *) new ListSequence<int>;
                generateRand(seq, n, max(n, 100));
                writeHeapSortInFile(seq, cmp);
            }
            else if (SortType == "QuickSort") {
                seq = (Sequence<int> *) new ListSequence<int>;
                generateRand(seq, n, max(n, 100));
                writeQuickSortInFile(seq, cmp);
            }
        }
        else if (GenerationType == "Sorted") {
            if (SortType == "BubbleSort") {
                seq = (Sequence<int> *) new ListSequence<int>;
                generateSorted(seq, n);
                writeBubbleSortInFile(seq, cmp);
            }
            else if (SortType == "ShakerSort") {
                seq = (Sequence<int> *) new ListSequence<int>;
                generateSorted(seq, n);
                writeShakerSortInFile(seq, cmp);
            }
            else if (SortType == "MergeSort") {
                seq = (Sequence<int> *) new ListSequence<int>;
                generateSorted(seq, n);
                writeMergeSortInFile(seq, cmp);
            }
            else if (SortType == "HeapSort") {
                seq = (Sequence<int> *) new ListSequence<int>;
                generateSorted(seq, n);
                writeHeapSortInFile(seq, cmp);
            }
            else if (SortType == "QuickSort") {
                seq = (Sequence<int> *) new ListSequence<int>;
                generateSorted(seq, n);
                writeQuickSortInFile(seq, cmp);
            }
        }
        else if (GenerationType == "Reversed") {
            if (SortType == "BubbleSort") {
                seq = (Sequence<int> *) new ListSequence<int>;
                generateReversed(seq, n);
                writeBubbleSortInFile(seq, cmp);
            }
            else if (SortType == "ShakerSort") {
                seq = (Sequence<int> *) new ListSequence<int>;
                generateReversed(seq, n);
                writeShakerSortInFile(seq, cmp);
            }
            else if (SortType == "MergeSort") {
                seq = (Sequence<int> *) new ListSequence<int>;
                generateReversed(seq, n);
                writeMergeSortInFile(seq, cmp);
            }
            else if (SortType == "HeapSort") {
                seq = (Sequence<int> *) new ListSequence<int>;
                generateReversed(seq, n);
                writeHeapSortInFile(seq, cmp);
            }
            else if (SortType == "QuickSort") {
                seq = (Sequence<int> *) new ListSequence<int>;
                generateReversed(seq, n);
                writeQuickSortInFile(seq, cmp);
            }
        }
    }

    seq->~Sequence();
    cout << "Success!";
    return 0;
}
