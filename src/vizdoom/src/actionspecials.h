// special name, special number, min script args, max script args, num args on a line
DEFINE_SPECIAL(Polyobj_StartLine, 1, -1, -1, 4)
DEFINE_SPECIAL(Polyobj_RotateLeft, 2, 3, 3, 3)
DEFINE_SPECIAL(Polyobj_RotateRight, 3, 3, 3, 3)
DEFINE_SPECIAL(Polyobj_Move, 4, 4, 4, 4)
DEFINE_SPECIAL(Polyobj_ExplicitLine, 5, -1, -1, 5)
DEFINE_SPECIAL(Polyobj_MoveTimes8, 6, 4, 4, 4)
DEFINE_SPECIAL(Polyobj_DoorSwing, 7, 4, 4, 4)
DEFINE_SPECIAL(Polyobj_DoorSlide, 8, 5, 5, 5)
DEFINE_SPECIAL(Line_Horizon, 9, -1, 0, 0)   // [RH] draw one-sided wall at horizon
DEFINE_SPECIAL(Door_Close, 10, 2, 3, 3)
DEFINE_SPECIAL(Door_Open, 11, 2, 3, 3)
DEFINE_SPECIAL(Door_Raise, 12, 3, 4, 4)
DEFINE_SPECIAL(Door_LockedRaise, 13, 4, 5, 5)
DEFINE_SPECIAL(Door_Animated, 14, 4, 4, 4)
DEFINE_SPECIAL(Autosave, 15, 0, 0, 0)   // [RH] Save the game *now*
DEFINE_SPECIAL(Transfer_WallLight, 16, -1, -1, 2)
DEFINE_SPECIAL(Thing_Raise, 17, 1, 1, 1)
DEFINE_SPECIAL(StartConversation, 18, 1, 2, 2)
DEFINE_SPECIAL(Thing_Stop, 19, 1, 1, 1)
DEFINE_SPECIAL(Floor_LowerByValue, 20, 3, 3, 3)
DEFINE_SPECIAL(Floor_LowerToLowest, 21, 2, 2, 2)
DEFINE_SPECIAL(Floor_LowerToNearest, 22, 2, 2, 2)
DEFINE_SPECIAL(Floor_RaiseByValue, 23, 3, 3, 3)
DEFINE_SPECIAL(Floor_RaiseToHighest, 24, 2, 2, 2)
DEFINE_SPECIAL(Floor_RaiseToNearest, 25, 2, 2, 2)
DEFINE_SPECIAL(Stairs_BuildDown, 26, 5, 5, 5)
DEFINE_SPECIAL(Stairs_BuildUp, 27, 5, 5, 5)
DEFINE_SPECIAL(Floor_RaiseAndCrush, 28, 3, 4, 4)
DEFINE_SPECIAL(Pillar_Build, 29, 3, 3, 3)
DEFINE_SPECIAL(Pillar_Open, 30, 4, 4, 4)
DEFINE_SPECIAL(Stairs_BuildDownSync, 31, 4, 4, 4)
DEFINE_SPECIAL(Stairs_BuildUpSync, 32, 4, 4, 4)
DEFINE_SPECIAL(ForceField, 33, 0, 0, 0) // [RH] Strife's forcefield special (148)
DEFINE_SPECIAL(ClearForceField, 34, 1, 1, 1)    // [RH] Remove Strife's forcefield from tagged sectors
DEFINE_SPECIAL(Floor_RaiseByValueTimes8, 35, 3, 3, 3)
DEFINE_SPECIAL(Floor_LowerByValueTimes8, 36, 3, 3, 3)
DEFINE_SPECIAL(Floor_MoveToValue, 37, 3, 4, 4)
DEFINE_SPECIAL(Ceiling_Waggle, 38, 5, 5, 5) // [RH] Complement of Floor_Waggle
DEFINE_SPECIAL(Teleport_ZombieChanger, 39, 2, 2, 2) // [RH] Needed for Strife
DEFINE_SPECIAL(Ceiling_LowerByValue, 40, 3, 3, 3)
DEFINE_SPECIAL(Ceiling_RaiseByValue, 41, 3, 3, 3)
DEFINE_SPECIAL(Ceiling_CrushAndRaise, 42, 3, 4, 4)
DEFINE_SPECIAL(Ceiling_LowerAndCrush, 43, 3, 4, 4)
DEFINE_SPECIAL(Ceiling_CrushStop, 44, 1, 1, 1)
DEFINE_SPECIAL(Ceiling_CrushRaiseAndStay, 45, 3, 4, 4)
DEFINE_SPECIAL(Floor_CrushStop, 46, 1, 1, 1)
DEFINE_SPECIAL(Ceiling_MoveToValue, 47, 3, 4, 4)
DEFINE_SPECIAL(Sector_Attach3dMidtex, 48, -1, -1, 3)
DEFINE_SPECIAL(GlassBreak, 49, 0, 1, 1)
DEFINE_SPECIAL(ExtraFloor_LightOnly, 50, -1, -1, 2)
DEFINE_SPECIAL(Sector_SetLink, 51, 4, 4, 4)
DEFINE_SPECIAL(Scroll_Wall, 52, 5, 5, 5)
DEFINE_SPECIAL(Line_SetTextureOffset, 53, 5, 5, 5)
DEFINE_SPECIAL(Sector_ChangeFlags, 54, 3, 3, 3)
DEFINE_SPECIAL(Line_SetBlocking, 55, 3, 3, 3)
DEFINE_SPECIAL(Line_SetTextureScale, 56, 5, 5, 5)
DEFINE_SPECIAL(Sector_SetPortal, 57, -1, -1, 5)
DEFINE_SPECIAL(Sector_CopyScroller, 58, -1, -1, 2)
DEFINE_SPECIAL(Polyobj_OR_MoveToSpot, 59, 3, 3, 3)
DEFINE_SPECIAL(Plat_PerpetualRaise, 60, 3, 3, 3)
DEFINE_SPECIAL(Plat_Stop, 61, 1, 1, 1)
DEFINE_SPECIAL(Plat_DownWaitUpStay, 62, 3, 3, 3)
DEFINE_SPECIAL(Plat_DownByValue, 63, 4, 4, 4)
DEFINE_SPECIAL(Plat_UpWaitDownStay, 64, 3, 3, 3)
DEFINE_SPECIAL(Plat_UpByValue, 65, 4, 4, 4)
DEFINE_SPECIAL(Floor_LowerInstant, 66, 3, 3, 3)
DEFINE_SPECIAL(Floor_RaiseInstant, 67, 3, 3, 3)
DEFINE_SPECIAL(Floor_MoveToValueTimes8, 68, 4, 4, 4)
DEFINE_SPECIAL(Ceiling_MoveToValueTimes8, 69, 4, 4, 4)
DEFINE_SPECIAL(Teleport, 70, 1, 3, 3)
DEFINE_SPECIAL(Teleport_NoFog, 71, 1, 4, 4)
DEFINE_SPECIAL(ThrustThing, 72, 2, 4, 4)
DEFINE_SPECIAL(DamageThing, 73, 1, 2, 2)
DEFINE_SPECIAL(Teleport_NewMap, 74, 2, 3, 3)
DEFINE_SPECIAL(Teleport_EndGame, 75, 0, 0, 0)
DEFINE_SPECIAL(TeleportOther, 76, 3, 3, 3)
DEFINE_SPECIAL(TeleportGroup, 77, 5, 5, 5)
DEFINE_SPECIAL(TeleportInSector, 78, 4, 5, 5)
DEFINE_SPECIAL(Thing_SetConversation, 79, 2, 2, 2)
DEFINE_SPECIAL(ACS_Execute, 80, 1, 5, 5)
DEFINE_SPECIAL(ACS_Suspend, 81, 2, 2, 2)
DEFINE_SPECIAL(ACS_Terminate, 82, 2, 2, 2)
DEFINE_SPECIAL(ACS_LockedExecute, 83, 5, 5, 5)
DEFINE_SPECIAL(ACS_ExecuteWithResult, 84, 1, 5, 5)
DEFINE_SPECIAL(ACS_LockedExecuteDoor, 85, 5, 5, 5)
DEFINE_SPECIAL(Polyobj_MoveToSpot, 86, 3, 3, 3)
DEFINE_SPECIAL(Polyobj_Stop, 87, 1, 1, 1)
DEFINE_SPECIAL(Polyobj_MoveTo, 88, 4, 4, 4)
DEFINE_SPECIAL(Polyobj_OR_MoveTo, 89, 4, 4, 4)
DEFINE_SPECIAL(Polyobj_OR_RotateLeft, 90, 3, 3, 3)
DEFINE_SPECIAL(Polyobj_OR_RotateRight, 91, 3, 3, 3)
DEFINE_SPECIAL(Polyobj_OR_Move, 92, 4, 4, 4)
DEFINE_SPECIAL(Polyobj_OR_MoveTimes8, 93, 4, 4, 4)
DEFINE_SPECIAL(Pillar_BuildAndCrush, 94, 4, 5, 5)
DEFINE_SPECIAL(FloorAndCeiling_LowerByValue, 95, 3, 3, 3)
DEFINE_SPECIAL(FloorAndCeiling_RaiseByValue, 96, 3, 3, 3)
DEFINE_SPECIAL(Ceiling_LowerAndCrushDist, 97, 3, 5, 5)
DEFINE_SPECIAL(Sector_SetTranslucent, 98, 3, 4, 4)
DEFINE_SPECIAL(Floor_RaiseAndCrushDoom, 99, 3, 4, 4)
DEFINE_SPECIAL(Scroll_Texture_Left, 100, -1, -1, 2)
DEFINE_SPECIAL(Scroll_Texture_Right, 101, -1, -1, 2)
DEFINE_SPECIAL(Scroll_Texture_Up, 102, -1, -1, 2)
DEFINE_SPECIAL(Scroll_Texture_Down, 103, -1, -1, 2)
DEFINE_SPECIAL(Ceiling_CrushAndRaiseSilentDist, 104, 3, 5, 5)

DEFINE_SPECIAL(Light_ForceLightning, 109, 1, 1, 1)
DEFINE_SPECIAL(Light_RaiseByValue, 110, 2, 2, 2)
DEFINE_SPECIAL(Light_LowerByValue, 111, 2, 2, 2)
DEFINE_SPECIAL(Light_ChangeToValue, 112, 2, 2, 2)
DEFINE_SPECIAL(Light_Fade, 113, 3, 3, 3)
DEFINE_SPECIAL(Light_Glow, 114, 4, 4, 4)
DEFINE_SPECIAL(Light_Flicker, 115, 3, 3, 3)
DEFINE_SPECIAL(Light_Strobe, 116, 5, 5, 5)
DEFINE_SPECIAL(Light_Stop, 117, 1, 1, 1)
DEFINE_SPECIAL(Plane_Copy, 118, -1, -1, 5)
DEFINE_SPECIAL(Thing_Damage, 119, 2, 3, 3)
DEFINE_SPECIAL(Radius_Quake, 120, 5, 5, 5)  // Earthquake
DEFINE_SPECIAL(Line_SetIdentification, 121, -1, -1, 5)

DEFINE_SPECIAL(Thing_Move, 125, 2, 3, 3)

DEFINE_SPECIAL(Thing_SetSpecial, 127, 5, 5, 5)
DEFINE_SPECIAL(ThrustThingZ, 128, 4, 4, 4)
DEFINE_SPECIAL(UsePuzzleItem, 129, 2, 5, 5)
DEFINE_SPECIAL(Thing_Activate, 130, 1, 1, 1)
DEFINE_SPECIAL(Thing_Deactivate, 131, 1, 1, 1)
DEFINE_SPECIAL(Thing_Remove, 132, 1, 1, 1)
DEFINE_SPECIAL(Thing_Destroy, 133, 1, 3, 3)
DEFINE_SPECIAL(Thing_Projectile, 134, 5, 5, 5)
DEFINE_SPECIAL(Thing_Spawn, 135, 3, 4, 4)
DEFINE_SPECIAL(Thing_ProjectileGravity, 136, 5, 5, 5)
DEFINE_SPECIAL(Thing_SpawnNoFog, 137, 3, 4, 4)
DEFINE_SPECIAL(Floor_Waggle, 138, 5, 5, 5)
DEFINE_SPECIAL(Thing_SpawnFacing, 139, 2, 4, 4)
DEFINE_SPECIAL(Sector_ChangeSound, 140, 2, 2, 2)

DEFINE_SPECIAL(Teleport_NoStop, 154, 2, 3, 3)
// GZDoom/Vavoom specials 
// Although ZDoom doesn't support them it's better to have them defined so that
// WADs using them somewhere can at least be started without aborting due
// to an error message.
DEFINE_SPECIAL(SetGlobalFogParameter, 157, 2, 2, 2)
DEFINE_SPECIAL(FS_Execute, 158, 1, 4, 4)
DEFINE_SPECIAL(Sector_SetPlaneReflection, 159, 3, 3, 3)
DEFINE_SPECIAL(Sector_Set3DFloor, 160, -1, -1, 5)
DEFINE_SPECIAL(Sector_SetContents, 161, -1, -1, 3)

// [RH] Begin new specials for ZDoom
DEFINE_SPECIAL(Ceiling_CrushAndRaiseDist, 168, 3, 5, 5)
DEFINE_SPECIAL(Generic_Crusher2, 169, 5, 5, 5)
DEFINE_SPECIAL(Sector_SetCeilingScale2, 170, 3, 3, 3)
DEFINE_SPECIAL(Sector_SetFloorScale2, 171, 3, 3, 3)
DEFINE_SPECIAL(Plat_UpNearestWaitDownStay, 172, 3, 3, 3)
DEFINE_SPECIAL(NoiseAlert, 173, 2, 2, 2)
DEFINE_SPECIAL(SendToCommunicator, 174, 4, 4, 4)
DEFINE_SPECIAL(Thing_ProjectileIntercept, 175, 5, 5, 5)
DEFINE_SPECIAL(Thing_ChangeTID, 176, 2, 2, 2)
DEFINE_SPECIAL(Thing_Hate, 177, 2, 3, 3)
DEFINE_SPECIAL(Thing_ProjectileAimed, 178, 4, 5, 5)
DEFINE_SPECIAL(ChangeSkill, 179, 1, 1, 1)
DEFINE_SPECIAL(Thing_SetTranslation, 180, 2, 2, 2)
DEFINE_SPECIAL(Plane_Align, 181, -1, -1, 3)
DEFINE_SPECIAL(Line_Mirror, 182, -1, 0, 0)
DEFINE_SPECIAL(Line_AlignCeiling, 183, 2, 2, 2)
DEFINE_SPECIAL(Line_AlignFloor, 184, 2, 2, 2)
DEFINE_SPECIAL(Sector_SetRotation, 185, 3, 3, 3)
DEFINE_SPECIAL(Sector_SetCeilingPanning, 186, 5, 5, 5)
DEFINE_SPECIAL(Sector_SetFloorPanning, 187, 5, 5, 5)
DEFINE_SPECIAL(Sector_SetCeilingScale, 188, 5, 5, 5)
DEFINE_SPECIAL(Sector_SetFloorScale, 189, 5, 5, 5)
DEFINE_SPECIAL(Static_Init, 190, -1, -1, 4)
DEFINE_SPECIAL(SetPlayerProperty, 191, 3, 3, 3)
DEFINE_SPECIAL(Ceiling_LowerToHighestFloor, 192, 2, 2, 2)
DEFINE_SPECIAL(Ceiling_LowerInstant, 193, 3, 3, 3)
DEFINE_SPECIAL(Ceiling_RaiseInstant, 194, 3, 3, 3)
DEFINE_SPECIAL(Ceiling_CrushRaiseAndStayA, 195, 4, 5, 5)
DEFINE_SPECIAL(Ceiling_CrushAndRaiseA, 196, 4, 5, 5)
DEFINE_SPECIAL(Ceiling_CrushAndRaiseSilentA, 197, 4, 5, 5)
DEFINE_SPECIAL(Ceiling_RaiseByValueTimes8, 198, 3, 3, 3)
DEFINE_SPECIAL(Ceiling_LowerByValueTimes8, 199, 3, 3, 3)
DEFINE_SPECIAL(Generic_Floor, 200, 5, 5, 5)
DEFINE_SPECIAL(Generic_Ceiling, 201, 5, 5, 5)
DEFINE_SPECIAL(Generic_Door, 202, 5, 5, 5)
DEFINE_SPECIAL(Generic_Lift, 203, 5, 5, 5)
DEFINE_SPECIAL(Generic_Stairs, 204, 5, 5, 5)
DEFINE_SPECIAL(Generic_Crusher, 205, 5, 5, 5)
DEFINE_SPECIAL(Plat_DownWaitUpStayLip, 206, 4, 5, 5)
DEFINE_SPECIAL(Plat_PerpetualRaiseLip, 207, 4, 4, 4)
DEFINE_SPECIAL(TranslucentLine, 208, 2, 3, 3)
DEFINE_SPECIAL(Transfer_Heights, 209, -1, -1, 2)
DEFINE_SPECIAL(Transfer_FloorLight, 210, -1, -1, 1)
DEFINE_SPECIAL(Transfer_CeilingLight, 211, -1, -1, 1)
DEFINE_SPECIAL(Sector_SetColor, 212, 4, 5, 5)
DEFINE_SPECIAL(Sector_SetFade, 213,  4, 4, 4)
DEFINE_SPECIAL(Sector_SetDamage, 214, 3, 5, 5)
DEFINE_SPECIAL(Teleport_Line, 215, 2, 3, 3)
DEFINE_SPECIAL(Sector_SetGravity, 216, 3, 3, 3)
DEFINE_SPECIAL(Stairs_BuildUpDoom, 217, 5, 5, 5)
DEFINE_SPECIAL(Sector_SetWind, 218, 4, 4, 4)
DEFINE_SPECIAL(Sector_SetFriction, 219, 2, 2, 2)
DEFINE_SPECIAL(Sector_SetCurrent, 220, 4, 4, 4)
DEFINE_SPECIAL(Scroll_Texture_Both, 221, 5, 5, 5)
DEFINE_SPECIAL(Scroll_Texture_Model, 222, -1, -1, 2)
DEFINE_SPECIAL(Scroll_Floor, 223, 4, 4, 5)
DEFINE_SPECIAL(Scroll_Ceiling, 224, 4, 4, 5)
DEFINE_SPECIAL(Scroll_Texture_Offsets, 225, -1, -1, 1)
DEFINE_SPECIAL(ACS_ExecuteAlways, 226, 1, 5, 5)
DEFINE_SPECIAL(PointPush_SetForce, 227, -1, -1, 4)
DEFINE_SPECIAL(Plat_RaiseAndStayTx0, 228, 2, 3, 3)
DEFINE_SPECIAL(Thing_SetGoal, 229, 3, 4, 4)
DEFINE_SPECIAL(Plat_UpByValueStayTx, 230, 3, 3, 3)
DEFINE_SPECIAL(Plat_ToggleCeiling, 231, 1, 1, 1)
DEFINE_SPECIAL(Light_StrobeDoom, 232, 3, 3, 3)
DEFINE_SPECIAL(Light_MinNeighbor, 233, 1, 1, 1)
DEFINE_SPECIAL(Light_MaxNeighbor, 234, 1, 1, 1)
DEFINE_SPECIAL(Floor_TransferTrigger, 235, 1, 1, 1)
DEFINE_SPECIAL(Floor_TransferNumeric, 236, 1, 1, 1)
DEFINE_SPECIAL(ChangeCamera, 237, 3, 3, 3)
DEFINE_SPECIAL(Floor_RaiseToLowestCeiling, 238, 2, 2, 2)
DEFINE_SPECIAL(Floor_RaiseByValueTxTy, 239, 3, 3, 3)
DEFINE_SPECIAL(Floor_RaiseByTexture, 240, 2, 2, 2)
DEFINE_SPECIAL(Floor_LowerToLowestTxTy, 241, 2, 2, 2)
DEFINE_SPECIAL(Floor_LowerToHighest, 242, 3, 4, 4)
DEFINE_SPECIAL(Exit_Normal, 243, 1, 1, 1)
DEFINE_SPECIAL(Exit_Secret, 244, 1, 1, 1)
DEFINE_SPECIAL(Elevator_RaiseToNearest, 245, 2, 2, 2)
DEFINE_SPECIAL(Elevator_MoveToFloor, 246, 2, 2, 2)
DEFINE_SPECIAL(Elevator_LowerToNearest, 247, 2, 2, 2)
DEFINE_SPECIAL(HealThing, 248, 1, 2, 2)
DEFINE_SPECIAL(Door_CloseWaitOpen, 249, 3, 4, 4)
DEFINE_SPECIAL(Floor_Donut, 250, 3, 3, 3)
DEFINE_SPECIAL(FloorAndCeiling_LowerRaise, 251, 3, 4, 4)
DEFINE_SPECIAL(Ceiling_RaiseToNearest, 252, 2, 2, 2)
DEFINE_SPECIAL(Ceiling_LowerToLowest, 253, 2, 2, 2)
DEFINE_SPECIAL(Ceiling_LowerToFloor, 254, 2, 2, 2)
DEFINE_SPECIAL(Ceiling_CrushRaiseAndStaySilA, 255, 4, 5, 5)

#undef DEFINE_SPECIAL
