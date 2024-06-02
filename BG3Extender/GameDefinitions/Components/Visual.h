#pragma once

BEGIN_SE()

struct CustomIconComponent : public BaseComponent
{
	DEFINE_COMPONENT(CustomIcon, "eoc::CustomIconComponent")

	ScratchBuffer Buffer;
};

struct IconComponent : public BaseComponent
{
	DEFINE_COMPONENT(Icon, "eoc::IconComponent")

	FixedString Icon;
};

struct ActiveCharacterLightComponent : public BaseComponent
{
	DEFINE_COMPONENT(ActiveCharacterLight, "eoc::light::ActiveCharacterLightComponent")

	FixedString Light;
};

struct VisualComponent : public BaseComponent
{
	DEFINE_COMPONENT(Visual, "ls::VisualComponent")

	Visual* Visual;
	uint8_t field_8;
	uint8_t field_9;
	bool NotClustered;
};

struct GameObjectVisualData
{
	struct AppearanceElement
	{
		Guid Material;
		Guid Color;
		float ColorIntensity;
		uint32_t MetallicTint;
		float GlossyTint;
	};

	[[bg3::hidden]]
	ScratchBuffer Buffer;
	Guid HairColor;
	Guid SkinColor;
	Guid EyeColor;
	Guid SecondEyeColor;
	[[bg3::legacy(field_98)]] Guid AccessorySet;
	Array<Guid> Visuals;
	Array<AppearanceElement> Elements;
	Array<float> AdditionalChoices;
};

struct GameObjectVisualComponent : public BaseComponent
{
	DEFINE_COMPONENT(GameObjectVisual, "eoc::GameObjectVisualComponent")

	FixedString RootTemplateId;
	uint8_t RootTemplateType;
	FixedString Icon;
	float Scale;
	uint8_t Type;
};

struct AppearanceOverrideComponent : public BaseComponent
{
	DEFINE_COMPONENT(AppearanceOverride, "eoc::object_visual::AppearanceOverrideComponent")

	GameObjectVisualData Visual;
};

struct CharacterCreationTemplateOverrideComponent : public BaseComponent
{
	DEFINE_COMPONENT(CharacterCreationTemplateOverride, "eoc::object_visual::CharacterCreationTemplateOverrideComponent")

	FixedString Template;
};

struct DisplayNameComponent : public BaseComponent
{
	DEFINE_COMPONENT(DisplayName, "eoc::DisplayNameComponent")

	TranslatedString NameKey;
	TranslatedString UnknownKey;
};

struct CustomNameComponent : public BaseComponent
{
	DEFINE_COMPONENT(CustomName, "eoc::CustomNameComponent")

	STDString Name;
};

struct GameplayLightComponent : public BaseComponent
{
	DEFINE_COMPONENT(GameplayLight, "eoc::GameplayLightComponent")

	int field_18;
	uint8_t field_1C;
	int field_20;
	int field_24;
	int field_28;
};

struct StaticPhysicsComponent : public BaseComponent
{
	DEFINE_COMPONENT(StaticPhysics, "ls::StaticPhysicsComponent")

	[[bg3::hidden]]
	void* field_0;
};

struct PhysicsComponent : public BaseComponent
{
	DEFINE_COMPONENT(Physics, "ls::PhysicsComponent")

	[[bg3::hidden]]
	void* Physics;
	int field_8;
	int field_C;
	int field_10;
	uint8_t field_14;
	uint8_t field_15;
	uint8_t field_16;
};

struct CharacterCreationAppearanceComponent : public BaseComponent
{
	DEFINE_COMPONENT(CharacterCreationAppearance, "eoc::character_creation::AppearanceComponent")

	Array<Guid> Visuals;
	Array<GameObjectVisualData::AppearanceElement> Elements;
	Array<float> AdditionalChoices;
	Guid SkinColor;
	Guid EyeColor;
	Guid SecondEyeColor;
	Guid HairColor;
};

END_SE()

BEGIN_NS(esv)

struct DisplayName
{
	TranslatedString NameKey;
	uint8_t field_10;
	STDString Name;
};

struct DisplayNameTranslatedString
{
	TranslatedString NameKey;
	uint8_t field_10;
};

struct DisplayNameListComponent : public BaseComponent
{
	DEFINE_COMPONENT(ServerDisplayNameList, "esv::DisplayNameListComponent")

	Array<DisplayName> Names;
	Array<DisplayNameTranslatedString> TranslatedStrings;
};

struct IconListComponent : public BaseComponent
{
	DEFINE_COMPONENT(ServerIconList, "esv::IconListComponent")

	struct Icon
	{
		FixedString Icon;
		uint32_t field_4;
	};

	Array<Icon> Icons;
};

END_NS()

BEGIN_NS(ecl)


struct EquipmentVisualData
{
	Array<FixedString> VisualTemplates;
	FixedString BoneSheathed;
	FixedString SourceBoneSheathed;
	FixedString field_18;
	EntityHandle field_20;
	Array<resource::PresetData::ScalarParameter> ScalarParameters;
	Array<resource::PresetData::Vector3Parameter> Vector3Parameters;
	uint8_t HairType;
	ecs::EntityRef Item;
	uint32_t Flags_60;
	uint16_t Flags_64;
	uint32_t SlotAndFlags;
	uint8_t Flags_6C;
};


struct EquipmentVisualRequest
{
	struct SubVisualRequest
	{
		FixedString VisualTemplate;
		EntityHandle VisualEntity;
		[[bg3::hidden]] void* LoadRequest_M;
		bool Processed;
	};

	Array<EntityHandle> Item;
	Array<SubVisualRequest> SubRequests;
	EquipmentVisualData Data;
	EntityHandle field_90;
};


struct EquipmentVisualsComponent : public BaseComponent
{
	DEFINE_COMPONENT(ClientEquipmentVisuals, "ecl::EquipmentVisualsComponent")

	struct VisualElement
	{
		EntityHandle Item;
		Array<EntityHandle> SubVisuals;
		EquipmentVisualRequest* VisualRequest;
		bool field_20;
	};

	EntityHandle Entity;
	std::array<VisualElement, 19> Equipment;
};


END_NS()
