#pragma once

namespace SpawnControl
{
#define SPControlFileName (System::Environment::GetFolderPath(System::Environment::SpecialFolder::ApplicationData) + "\\Waty\\WatyBotSPControl.xml")
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace System::Xml::Serialization;

	public ref class SPControlLocation sealed
	{
	public:
		[XmlAttribute]
		property String^ Name;
		property int MapId;
		property int X;
		property int Y;
	};

	public ref class SPControl : List<SPControlLocation^>
	{
	public:
		SPControl^ Load();
		void Save();
		void EditLocation(int index, System::String^ name, int mapid, int x, int y);
		void AddLocation(String^ Name, int MapId, int X, int Y);
	};
}
