
/*
An "Actor" is a meta-class that encapsualtes both player characters and friendly/enemy daemons.
Since both behave on the same logic.

Each "Actor" has a position on the field, a set of strengths/weaknesses and statistics, as well as a list of common skills
*/

class Actor
{
private: //Note - may not want to make these protected, define behaviour entirely and just access via protected methods
	//elemental - NOTE - we use bit masking to determine properties
	//In order: hama 0x01, mudo 0x02, zan 0x04, zio 0x08, bufu 0x10, agi 0x20, gun 0x4, sword 0x80
	unsigned char strong;
	unsigned char weak;
	unsigned char reflect;
	unsigned char absorb; //Can we use absorb to store details for health regen or healing spells?

	//fixed values
	unsigned short hp; //note to self - unsigned 16 bit
	unsigned char mp; //TODO - determine whether to use these for chars

	//individual stats
	unsigned char strength;
	unsigned char magic;
	unsigned char vitality;
	unsigned char agility;
	unsigned char luck;

	//TODO - array listing attack objects, we want these to be serialised and read from a structured format e.g. csv, xml, json
	//Remember, phys attacks drain HP rather than MP
	//Skill* skillList //Note, need to use new keyword? Probably not, this would be out of scope.
	
public:
	 Actor();
	virtual ~Actor() = 0;

	virtual void takeTurn(); //we can probably define behaviour here generically, no need to be pure
	//Think about how each Actor on the field would interact with one another
	
protected:
	
};