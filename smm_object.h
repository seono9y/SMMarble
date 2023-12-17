//
//  smm_object.h
//  SMMarble object
//
//  Created by seoyeon chu on 2023/11/05.
//

#ifndef smm_object_h
#define smm_object_h

#define SMMNODE_TYPE_LECTURE            0
#define SMMNODE_TYPE_RESTAURANT         1
#define SMMNODE_TYPE_LABORATORY         2
#define SMMNODE_TYPE_HOME               3
#define SMMNODE_TYPE_GOTOLAB            4
#define SMMNODE_TYPE_FOODCHANCE         5
#define SMMNODE_TYPE_FESTIVAL           6

#define SMMNODE_TYPE_MAX                7

typedef enum smmObjType {
    smmObjType_board = 0,
    smmObjType_card,
    smmObjType_grade
} smmObjType_e;

/* node type :
    lecture,
    restaurant,
    laboratory,
    home,
    experiment,
    foodChance,
    festival
*/


/* grade :
    A+,
    A0,
    A-,
    B+,
    B0,
    B-,
    C+,
    C0,
    C-
*/



//object generation
void* smmObj_genObject(char* name, smmObjType_e objType, int type, int credit, int energy, int grade); 
// 원래 기존 코드에는 smmObjGrade_e로 되어 있었는데, 해당 헤더 파일에는 smmObjGrade_e의 enum 타입이 선언되어 있지 않고 smm_object.c에 선언되어 있기 때문에 에러가 나는 것 같아서 결국 enum타입은 int로 표현할 수 있어 그렇게 해봤습니다.

//member retrieving
char* smmObj_getNodeName(int node_nr);
int smmObj_getNodeType(int node_nr);
int smmObj_getNodeCredit(int node_nr);
int smmObj_getNodeEnergy(int node_nr);

//element to string
char* smmObj_getTypeName(int type);

char* smmObj_getNodeGrade(int node_nr);


#endif /* smm_object_h */


