//
// shapes.h
//

#define	PLAYFIELD_RELATIVE	true
#define	SCREEN_RELATIVE		false


ObjNode	*MakeNewShape(long groupNum, long type, long subType, short x, short y, short z, void (*moveCall)(void), Boolean pfRelativeFlag);
extern void	LoadShapeTable(Str255, long, Boolean);
extern void	DrawFrameToScreen(long, long, long, long, long);
extern void	DrawFrameToScreen_NoMask(long, long, long, long, long);
extern void	ZapShapeTable(long);
extern Boolean	CheckFootPriority(unsigned long, unsigned long, long);
extern void	DrawASprite(ObjNode *);
extern void	EraseASprite(ObjNode *);
