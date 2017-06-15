//
//  main.c
//  Algorithm
//
//  Created by 谢果冻 on 2017/6/13.
//  Copyright © 2017年 谢果冻. All rights reserved.
//

#include <stdio.h>
#include <string.h>

//

int a[101], n;

void quickSort(int left, int right) {
    int i, j, t, temp;
    if (left > right) {
        return;
    }
    temp = a[left];
    i = left;
    j = right;
    while (i != j) {
        while (a[j] >= temp && i < j) {
            j--;
        }
        while (a[i] <= temp && i < j) {
            i++;
        }
        if (i < j) {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    a[left] = a[i];
    a[i] = temp;
    
    quickSort(left, i - 1);
    quickSort(i + 1, right);
    
}

void quickSortAlgorithm() {
    int i;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    quickSort(1, n);
    for (i = 1; i <= n; i++) {
        printf("%d ", a[i]);
    }
    getchar();
    getchar();
}

//

struct student {
    char name[21];
    char score;
};

void bubbleSortAlgorithm() {
    struct student a[100], t;
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%s %c", a[i].name, &a[i].score);
    }
    for (i = 1; i <= n - 1; i++) {
        for (j = 1; j <= n - i; j++) {
            if (a[j].score < a[j + 1].score) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1]= t;
            }
        }
    }
    for (i = 1; i <= n; i++) {
        printf("%s\n", a[i].name);
    }
    getchar();
    getchar();
}

//

void quitRepeatBubbleSortAlgorithm() {
    int a[101], i, j, t, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= n - 1; i++) {
        for (j = 1; j <= n - i; j++) {
            if (a[j] < a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1]= t;
            }
        }
    }
    printf("%d ", a[1]);
    for (i = 2; i <= n; i++) {
        if (a[i] != a[i - 1]) {
            printf("%d ", a[i]);
        }
    }
    getchar();
    getchar();
}

//

void bucketAlgorithm() {
    int  book[1001], i, j, t, n;
    for (i = 0; i <= 1000; i++) {
        book[i] = 0;
    }
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &t);
        book[t]++;
    }
    for (i = 1000; i >= 0; i--) {
        for (j = 1; j <= book[i]; j++) {
            printf("%d ", i);
        }
    }
    getchar();
    getchar();
}

//

void quitRepeatBucketAlgorithm() {
    int  book[1001], i, t, n;
    for (i = 1; i <= 1000; i++) {
        book[i] = 0;
    }
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &t);
        book[t] = 1;
    }
    for (i = 1; i <= 1000; i++) {
        if (book[i] == 1) {
            printf("%d ", i);
        }
    }
    getchar();
    getchar();

}

//

void queueAlgorithm() {
    int q[102] = {0, 6, 3, 1, 7, 5, 8, 9, 2, 4}, head = 1, tail = 10;
    while (head < tail) {
        printf("%d ", q[head]);
        head++;
        
        q[tail] = q[head];
        tail++;
        
        head++;
    }
    getchar();
    getchar();
}

//

struct queue {
    int data[100], head, tail;
};

void structQueueAlgorithm() {
    struct queue q;
    int i;
    q.head = 1;
    q.tail = 1;
    for (i = 1; i <= 9; i++) {
        scanf("%d", &q.data[q.tail]);
        q.tail++;
    }
    
    while (q.head < q.tail) {
        printf("%d ", q.data[q.head]);
        q.head++;
        
        q.data[q.tail] = q.data[q.head];
        q.tail++;
        q.head++;
    }
    getchar();
    getchar();
    
}

//

void stackAlgorithm() {
    char a[101], s[101];
    int i, len, mid, next, top;
//    gets(a);
    fgets(a, (sizeof a / sizeof a[0]), stdin);
//    len = (int)strlen(a);
    len = (int)strlen(a) - 1;

    mid = len / 2 - 1;
    
    top = 0;
    for (i = 0; i <= mid; i++) {
        s[++top] = a[i];
    }
    
    if (len % 2 == 0) {
        next = mid + 1;
    } else {
        next = mid + 2;
    }
    
    for (i = next; i <= len -1; i++) {
        if (a[i] != s[top])
            break;
        top--;
    }
    if (top == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
//    getchar();
//    getchar();
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
//    bucketAlgorithm();
//    quitRepeatBucketAlgorithm();
//    bubbleSortAlgorithm();
//    quitRepeatBubbleSortAlgorithm();
//    quickSortAlgorithm();
//    queueAlgorithm();
//    structQueueAlgorithm();
    stackAlgorithm();
    return 0;
}

