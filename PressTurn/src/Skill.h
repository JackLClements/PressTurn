
class Skill 
{
private:
	unsigned short baseDamage;
	unsigned char element;
	char* name;
	char* description;
	//Linked List status effects
public:

	unsigned short getBaseDamage();
	unsigned char getElement();
	char* getName();
	char* getDescription();
	//void readSkill(char * skillInfo); //look at JSON Parsing, or csv parsing 
};