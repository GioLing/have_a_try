#include<stdio.h>	
#include<string.h> 
struct candidate {
int id; 
char name[30]; 
char gender; 
unsigned votes; 
};

int main() {
struct candidate candidates[100];
int numCandidates = 0;
int voteId;
char voteName[30];
int choice;
printf("请输入候选人的数量: ");
scanf("%d", &numCandidates);
for (int i = 0; i < numCandidates; i++) {
printf("请输入第%d位候选人的编号,姓名,性别: ", i + 1);
scanf("%d %s %c", &candidates[i].id, candidates[i].name, &candidates[i].gender);
candidates[i].votes = 0;
}

do {
printf("按编号投票请输入0，按姓名投票请输入1，结束投票请输入10: ");
scanf("%d", &choice);
if (choice == 0) {
scanf("%d", &voteId);
for (int i = 0; i < numCandidates; i++) {
if (candidates[i].id == voteId) {
candidates[i].votes++;
break;
}}}
 else if (choice == 1) {
scanf("%s", voteName);
for (int i = 0; i < numCandidates; i++) {
if (strcmp(candidates[i].name, voteName) == 0) {
candidates[i].votes++;
break;
}}}}
 while (choice != 10);
printf("投票结果：\n");
for (int i = 0; i < numCandidates; i++) {
printf("编号：%d, 姓名：%s, 得票数：%u\n", candidates[i].id, candidates[i].name, candidates[i].votes);
}

return 0;
}

