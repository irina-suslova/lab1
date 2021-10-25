#include <iostream>
#include <sequence.h>
#include <arraysequence.h>
#include <arraysequence.cpp>
#include <listsequence.h>
#include <listsequence.cpp>
#include <isorter.h>
#include <extrafunctions.h>
#include <gtest/gtest.h>
using namespace std;

Sequence<int> *seq;
Sequence<int> *sorted;

void setListSeqs() {
    seq = new ListSequence<int>;
    sorted = new ListSequence<int>;
}

void setArraySeqs() {
    seq = new ArraySequence<int>;
    sorted = new ArraySequence<int>;
}

void freeSeqs() {
    seq->~Sequence();
    sorted->~Sequence();
}

void setSeqs() {
    srand(time(NULL));
    for (int i = 0; i < 50; ++i) {
        seq->Append(i);
        sorted->Append(i);
    }
    for (int i = 0; i < 10 + rand() % 50; ++i) {
        int index1 = rand() % 50;
        int index2 = rand() % 50;
        seq->Swap((*seq)[index1], (*seq)[index2]);
    }
}

TEST( TestBubbleSort, testList) {
    setListSeqs();
    setSeqs();
    ASSERT_TRUE(seq->GetLength() == sorted->GetLength());
    BubbleSort<int> Sorter;
    Sorter.Sort(seq, cmp);
    for (int i = 0; i < seq->GetLength(); ++i) {
        ASSERT_EQ(((*seq)[i] - (*sorted)[i]), 0);
    }
}

TEST( TestBubbleSort, testArray) {
    setArraySeqs();
    setSeqs();
    ASSERT_TRUE(seq->GetLength() == sorted->GetLength());
    BubbleSort<int> Sorter;
    Sorter.Sort(seq, cmp);
    for (int i = 0; i < seq->GetLength(); ++i) {
        ASSERT_EQ(((*seq)[i] - (*sorted)[i]), 0);
    }
}

TEST( TestShakerSort, testList) {
    setListSeqs();
    setSeqs();
    ASSERT_TRUE(seq->GetLength() == sorted->GetLength());
    ShakerSort<int> Sorter;
    Sorter.Sort(seq, cmp);
    for (int i = 0; i < seq->GetLength(); ++i) {
        ASSERT_EQ(((*seq)[i] - (*sorted)[i]), 0);
    }
}

TEST( TestShakerSort, testArray) {
    setArraySeqs();
    setSeqs();
    ASSERT_TRUE(seq->GetLength() == sorted->GetLength());
    ShakerSort<int> Sorter;
    Sorter.Sort(seq, cmp);
    for (int i = 0; i < seq->GetLength(); ++i) {
        ASSERT_EQ(((*seq)[i] - (*sorted)[i]), 0);
    }
}

TEST( TestMergeSort, testList) {
    setListSeqs();
    setSeqs();
    ASSERT_TRUE(seq->GetLength() == sorted->GetLength());
    MergeSort<int> Sorter;
    Sorter.Sort(seq, cmp);
    for (int i = 0; i < seq->GetLength(); ++i) {
        ASSERT_EQ(((*seq)[i] - (*sorted)[i]), 0);
    }
}

TEST( TestMergeSort, testArray) {
    setArraySeqs();
    setSeqs();
    ASSERT_TRUE(seq->GetLength() == sorted->GetLength());
    MergeSort<int> Sorter;
    Sorter.Sort(seq, cmp);
    for (int i = 0; i < seq->GetLength(); ++i) {
        ASSERT_EQ(((*seq)[i] - (*sorted)[i]), 0);
    }
}

TEST( TestHeapSort, testList) {
    setListSeqs();
    setSeqs();
    ASSERT_TRUE(seq->GetLength() == sorted->GetLength());
    HeapSort<int> Sorter;
    Sorter.Sort(seq, cmp);
    for (int i = 0; i < seq->GetLength(); ++i) {
        ASSERT_EQ(((*seq)[i] - (*sorted)[i]), 0);
    }
}

TEST( TestHeapSort, testArray) {
    setArraySeqs();
    setSeqs();
    ASSERT_TRUE(seq->GetLength() == sorted->GetLength());
    HeapSort<int> Sorter;
    Sorter.Sort(seq, cmp);
    for (int i = 0; i < seq->GetLength(); ++i) {
        ASSERT_EQ(((*seq)[i] - (*sorted)[i]), 0);
    }
}

TEST( TestQuickSort, testList) {
    setListSeqs();
    setSeqs();
    ASSERT_TRUE(seq->GetLength() == sorted->GetLength());
    QuickSort<int> Sorter;
    Sorter.Sort(seq, cmp);
    for (int i = 0; i < seq->GetLength(); ++i) {
        ASSERT_EQ(((*seq)[i] - (*sorted)[i]), 0);
    }
}

TEST( TestQuickSort, testArray) {
    setArraySeqs();
    setSeqs();
    ASSERT_TRUE(seq->GetLength() == sorted->GetLength());
    QuickSort<int> Sorter;
    Sorter.Sort(seq, cmp);
    for (int i = 0; i < seq->GetLength(); ++i) {
        ASSERT_EQ(((*seq)[i] - (*sorted)[i]), 0);
    }
}

int main(int argc, char *argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
