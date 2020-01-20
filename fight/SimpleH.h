namespace nmspace
{
	class DL
	{
	public:
		static __declspec(dllexport) void turn(int x,int y,int x1,int y1,int &a,int &b,bool ice);
		static __declspec(dllexport) int choose(int mp,int me,int hp,int he,int arp,int are,int x,int y,int x1,int y1,int sk,bool prop,bool ice,bool nomagic);
	};
}