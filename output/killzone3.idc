#include <idc.idc>

static main() {
	// AIATACTurretWeaponInterface
	set_name(0x13758a8, "RTTI_AIATACTurretWeaponInterface");
	apply_type(0x13758a8, "RTTICompound");
	del_items(0x1375e88, DELIT_SIMPLE, 8);
	apply_type(0x1375e88, "RTTIBase[1]");
	set_name(0x1375e88, "AIATACTurretWeaponInterface::sBases");

	// AIAgent
	set_name(0x134ad4c, "RTTI_AIAgent");
	apply_type(0x134ad4c, "RTTICompound");
	del_items(0x134c964, DELIT_SIMPLE, 16);
	apply_type(0x134c964, "RTTIBase[2]");
	set_name(0x134c964, "AIAgent::sBases");
	del_items(0x134c974, DELIT_SIMPLE, 72);
	apply_type(0x134c974, "RTTIFunction[3]");
	set_name(0x134c974, "AIAgent::sFunctions");

	// AIArea
	set_name(0x1352754, "RTTI_AIArea");
	apply_type(0x1352754, "RTTICompound");
	del_items(0x1352870, DELIT_SIMPLE, 8);
	apply_type(0x1352870, "RTTIBase[1]");
	set_name(0x1352870, "AIArea::sBases");
	del_items(0x1352878, DELIT_SIMPLE, 252);
	apply_type(0x1352878, "RTTIAttr[9]");
	set_name(0x1352878, "AIArea::sAttrs");

	// AIAreaFilter
	set_name(0x134aeac, "RTTI_AIAreaFilter");
	apply_type(0x134aeac, "RTTICompound");
	del_items(0x134c280, DELIT_SIMPLE, 56);
	apply_type(0x134c280, "RTTIAttr[2]");
	set_name(0x134c280, "AIAreaFilter::sAttrs");

	// AIAreaGraph
	set_name(0x135281c, "RTTI_AIAreaGraph");
	apply_type(0x135281c, "RTTICompound");
	del_items(0x13529ac, DELIT_SIMPLE, 8);
	apply_type(0x13529ac, "RTTIBase[1]");
	set_name(0x13529ac, "AIAreaGraph::sBases");
	del_items(0x13529b4, DELIT_SIMPLE, 84);
	apply_type(0x13529b4, "RTTIAttr[3]");
	set_name(0x13529b4, "AIAreaGraph::sAttrs");

	// AIAreaPortal
	set_name(0x13527b8, "RTTI_AIAreaPortal");
	apply_type(0x13527b8, "RTTICompound");
	del_items(0x1352974, DELIT_SIMPLE, 56);
	apply_type(0x1352974, "RTTIAttr[2]");
	set_name(0x1352974, "AIAreaPortal::sAttrs");

	// AIAreaRestrictions
	set_name(0x134ae58, "RTTI_AIAreaRestrictions");
	apply_type(0x134ae58, "RTTICompound");
	del_items(0x134c210, DELIT_SIMPLE, 112);
	apply_type(0x134c210, "RTTIAttr[4]");
	set_name(0x134c210, "AIAreaRestrictions::sAttrs");

	// AIAtmosphereBox
	set_name(0x134af00, "RTTI_AIAtmosphereBox");
	apply_type(0x134af00, "RTTICompound");
	del_items(0x134d61c, DELIT_SIMPLE, 8);
	apply_type(0x134d61c, "RTTIBase[1]");
	set_name(0x134d61c, "AIAtmosphereBox::sBases");
	del_items(0x134d624, DELIT_SIMPLE, 56);
	apply_type(0x134d624, "RTTIAttr[2]");
	set_name(0x134d624, "AIAtmosphereBox::sAttrs");

	// AIAtmosphereBoxResource
	set_name(0x134af64, "RTTI_AIAtmosphereBoxResource");
	apply_type(0x134af64, "RTTICompound");
	del_items(0x134d660, DELIT_SIMPLE, 8);
	apply_type(0x134d660, "RTTIBase[1]");
	set_name(0x134d660, "AIAtmosphereBoxResource::sBases");
	del_items(0x134d668, DELIT_SIMPLE, 168);
	apply_type(0x134d668, "RTTIAttr[6]");
	set_name(0x134d668, "AIAtmosphereBoxResource::sAttrs");

	// AIAttackPositionPickerResource
	set_name(0x1352f0c, "RTTI_AIAttackPositionPickerResource");
	apply_type(0x1352f0c, "RTTICompound");
	del_items(0x1354e00, DELIT_SIMPLE, 8);
	apply_type(0x1354e00, "RTTIBase[1]");
	set_name(0x1354e00, "AIAttackPositionPickerResource::sBases");
	del_items(0x1354e08, DELIT_SIMPLE, 28);
	apply_type(0x1354e08, "RTTIAttr[1]");
	set_name(0x1354e08, "AIAttackPositionPickerResource::sAttrs");

	// AIAvoidanceComponent
	set_name(0x135dbd4, "RTTI_AIAvoidanceComponent");
	apply_type(0x135dbd4, "RTTICompound");
	del_items(0x1360ff0, DELIT_SIMPLE, 8);
	apply_type(0x1360ff0, "RTTIBase[1]");
	set_name(0x1360ff0, "AIAvoidanceComponent::sBases");

	// AIAvoidanceComponentResource
	set_name(0x135dc28, "RTTI_AIAvoidanceComponentResource");
	apply_type(0x135dc28, "RTTICompound");
	del_items(0x1360f90, DELIT_SIMPLE, 8);
	apply_type(0x1360f90, "RTTIBase[1]");
	set_name(0x1360f90, "AIAvoidanceComponentResource::sBases");
	del_items(0x1360f98, DELIT_SIMPLE, 84);
	apply_type(0x1360f98, "RTTIAttr[3]");
	set_name(0x1360f98, "AIAvoidanceComponentResource::sAttrs");

	// AIBodyAirVehicle
	set_name(0x1371cb0, "RTTI_AIBodyAirVehicle");
	apply_type(0x1371cb0, "RTTICompound");
	del_items(0x1372478, DELIT_SIMPLE, 8);
	apply_type(0x1372478, "RTTIBase[1]");
	set_name(0x1372478, "AIBodyAirVehicle::sBases");

	// AIBodyControlledVehicle
	set_name(0x1371c5c, "RTTI_AIBodyControlledVehicle");
	apply_type(0x1371c5c, "RTTICompound");
	del_items(0x1372468, DELIT_SIMPLE, 8);
	apply_type(0x1372468, "RTTIBase[1]");
	set_name(0x1372468, "AIBodyControlledVehicle::sBases");

	// AIBodyExoSkeleton
	set_name(0x1371bb4, "RTTI_AIBodyExoSkeleton");
	apply_type(0x1371bb4, "RTTICompound");
	del_items(0x1372460, DELIT_SIMPLE, 8);
	apply_type(0x1372460, "RTTIBase[1]");
	set_name(0x1372460, "AIBodyExoSkeleton::sBases");

	// AIBodyExplosiveLocation
	set_name(0x1371e54, "RTTI_AIBodyExplosiveLocation");
	apply_type(0x1371e54, "RTTICompound");
	del_items(0x13724a0, DELIT_SIMPLE, 8);
	apply_type(0x13724a0, "RTTIBase[1]");
	set_name(0x13724a0, "AIBodyExplosiveLocation::sBases");

	// AIBodyGoal
	set_name(0x134e918, "RTTI_AIBodyGoal");
	apply_type(0x134e918, "RTTICompound");
	del_items(0x134f81c, DELIT_SIMPLE, 8);
	apply_type(0x134f81c, "RTTIBase[1]");
	set_name(0x134f81c, "AIBodyGoal::sBases");

	// AIBodyGoalAimAt
	set_name(0x134e96c, "RTTI_AIBodyGoalAimAt");
	apply_type(0x134e96c, "RTTICompound");
	del_items(0x134f960, DELIT_SIMPLE, 8);
	apply_type(0x134f960, "RTTIBase[1]");
	set_name(0x134f960, "AIBodyGoalAimAt::sBases");

	// AIBodyGoalAttack
	set_name(0x134e9c0, "RTTI_AIBodyGoalAttack");
	apply_type(0x134e9c0, "RTTICompound");
	del_items(0x134f968, DELIT_SIMPLE, 8);
	apply_type(0x134f968, "RTTIBase[1]");
	set_name(0x134f968, "AIBodyGoalAttack::sBases");

	// AIBodyGoalCarry
	set_name(0x134ea14, "RTTI_AIBodyGoalCarry");
	apply_type(0x134ea14, "RTTICompound");
	del_items(0x134f970, DELIT_SIMPLE, 8);
	apply_type(0x134f970, "RTTIBase[1]");
	set_name(0x134f970, "AIBodyGoalCarry::sBases");

	// AIBodyGoalCarryBG
	set_name(0x134ea68, "RTTI_AIBodyGoalCarryBG");
	apply_type(0x134ea68, "RTTICompound");
	del_items(0x134f978, DELIT_SIMPLE, 8);
	apply_type(0x134f978, "RTTIBase[1]");
	set_name(0x134f978, "AIBodyGoalCarryBG::sBases");

	// AIBodyGoalCloseCombat
	set_name(0x1373894, "RTTI_AIBodyGoalCloseCombat");
	apply_type(0x1373894, "RTTICompound");
	del_items(0x1373f08, DELIT_SIMPLE, 8);
	apply_type(0x1373f08, "RTTIBase[1]");
	set_name(0x1373f08, "AIBodyGoalCloseCombat::sBases");

	// AIBodyGoalCollectObject
	set_name(0x134eabc, "RTTI_AIBodyGoalCollectObject");
	apply_type(0x134eabc, "RTTICompound");
	del_items(0x134f980, DELIT_SIMPLE, 8);
	apply_type(0x134f980, "RTTIBase[1]");
	set_name(0x134f980, "AIBodyGoalCollectObject::sBases");

	// AIBodyGoalCustomAction
	set_name(0x137393c, "RTTI_AIBodyGoalCustomAction");
	apply_type(0x137393c, "RTTICompound");
	del_items(0x1373f18, DELIT_SIMPLE, 8);
	apply_type(0x1373f18, "RTTIBase[1]");
	set_name(0x1373f18, "AIBodyGoalCustomAction::sBases");

	// AIBodyGoalDrive
	set_name(0x134eb10, "RTTI_AIBodyGoalDrive");
	apply_type(0x134eb10, "RTTICompound");
	del_items(0x134f990, DELIT_SIMPLE, 8);
	apply_type(0x134f990, "RTTIBase[1]");
	set_name(0x134f990, "AIBodyGoalDrive::sBases");

	// AIBodyGoalFaceTowards
	set_name(0x134eb64, "RTTI_AIBodyGoalFaceTowards");
	apply_type(0x134eb64, "RTTICompound");
	del_items(0x134f998, DELIT_SIMPLE, 8);
	apply_type(0x134f998, "RTTIBase[1]");
	set_name(0x134f998, "AIBodyGoalFaceTowards::sBases");

	// AIBodyGoalFacialExpression
	set_name(0x134ebb8, "RTTI_AIBodyGoalFacialExpression");
	apply_type(0x134ebb8, "RTTICompound");
	del_items(0x134f824, DELIT_SIMPLE, 8);
	apply_type(0x134f824, "RTTIBase[1]");
	set_name(0x134f824, "AIBodyGoalFacialExpression::sBases");

	// AIBodyGoalFloat
	set_name(0x134ec0c, "RTTI_AIBodyGoalFloat");
	apply_type(0x134ec0c, "RTTICompound");
	del_items(0x134f9a0, DELIT_SIMPLE, 8);
	apply_type(0x134f9a0, "RTTIBase[1]");
	set_name(0x134f9a0, "AIBodyGoalFloat::sBases");

	// AIBodyGoalGesture
	set_name(0x134ec60, "RTTI_AIBodyGoalGesture");
	apply_type(0x134ec60, "RTTICompound");
	del_items(0x134f9a8, DELIT_SIMPLE, 8);
	apply_type(0x134f9a8, "RTTIBase[1]");
	set_name(0x134f9a8, "AIBodyGoalGesture::sBases");

	// AIBodyGoalGlance
	set_name(0x134ecb4, "RTTI_AIBodyGoalGlance");
	apply_type(0x134ecb4, "RTTICompound");
	del_items(0x134f9b8, DELIT_SIMPLE, 8);
	apply_type(0x134f9b8, "RTTIBase[1]");
	set_name(0x134f9b8, "AIBodyGoalGlance::sBases");

	// AIBodyGoalLapaAction
	set_name(0x13737ec, "RTTI_AIBodyGoalLapaAction");
	apply_type(0x13737ec, "RTTICompound");
	del_items(0x1373ef8, DELIT_SIMPLE, 8);
	apply_type(0x1373ef8, "RTTIBase[1]");
	set_name(0x1373ef8, "AIBodyGoalLapaAction::sBases");

	// AIBodyGoalListen
	set_name(0x134ed08, "RTTI_AIBodyGoalListen");
	apply_type(0x134ed08, "RTTICompound");
	del_items(0x134f9c0, DELIT_SIMPLE, 8);
	apply_type(0x134f9c0, "RTTIBase[1]");
	set_name(0x134f9c0, "AIBodyGoalListen::sBases");

	// AIBodyGoalLookAt
	set_name(0x134ed5c, "RTTI_AIBodyGoalLookAt");
	apply_type(0x134ed5c, "RTTICompound");
	del_items(0x134f9b0, DELIT_SIMPLE, 8);
	apply_type(0x134f9b0, "RTTIBase[1]");
	set_name(0x134f9b0, "AIBodyGoalLookAt::sBases");

	// AIBodyGoalMountObject
	set_name(0x134edb0, "RTTI_AIBodyGoalMountObject");
	apply_type(0x134edb0, "RTTICompound");
	del_items(0x134f9c8, DELIT_SIMPLE, 8);
	apply_type(0x134f9c8, "RTTIBase[1]");
	set_name(0x134f9c8, "AIBodyGoalMountObject::sBases");

	// AIBodyGoalMove
	set_name(0x134ee04, "RTTI_AIBodyGoalMove");
	apply_type(0x134ee04, "RTTICompound");
	del_items(0x134f988, DELIT_SIMPLE, 8);
	apply_type(0x134f988, "RTTIBase[1]");
	set_name(0x134f988, "AIBodyGoalMove::sBases");

	// AIBodyGoalPosture
	set_name(0x134ee58, "RTTI_AIBodyGoalPosture");
	apply_type(0x134ee58, "RTTICompound");
	del_items(0x134f9d0, DELIT_SIMPLE, 8);
	apply_type(0x134f9d0, "RTTIBase[1]");
	set_name(0x134f9d0, "AIBodyGoalPosture::sBases");

	// AIBodyGoalSelectWeapon
	set_name(0x134eeac, "RTTI_AIBodyGoalSelectWeapon");
	apply_type(0x134eeac, "RTTICompound");
	del_items(0x134f9d8, DELIT_SIMPLE, 8);
	apply_type(0x134f9d8, "RTTIBase[1]");
	set_name(0x134f9d8, "AIBodyGoalSelectWeapon::sBases");

	// AIBodyGoalShieldSelf
	set_name(0x134ef00, "RTTI_AIBodyGoalShieldSelf");
	apply_type(0x134ef00, "RTTICompound");
	del_items(0x134f9e0, DELIT_SIMPLE, 8);
	apply_type(0x134f9e0, "RTTIBase[1]");
	set_name(0x134f9e0, "AIBodyGoalShieldSelf::sBases");

	// AIBodyGoalSpecialMove
	set_name(0x1373840, "RTTI_AIBodyGoalSpecialMove");
	apply_type(0x1373840, "RTTICompound");
	del_items(0x1373f00, DELIT_SIMPLE, 8);
	apply_type(0x1373f00, "RTTIBase[1]");
	set_name(0x1373f00, "AIBodyGoalSpecialMove::sBases");

	// AIBodyGoalTalk
	set_name(0x134ef54, "RTTI_AIBodyGoalTalk");
	apply_type(0x134ef54, "RTTICompound");
	del_items(0x134f9e8, DELIT_SIMPLE, 8);
	apply_type(0x134f9e8, "RTTIBase[1]");
	set_name(0x134f9e8, "AIBodyGoalTalk::sBases");

	// AIBodyGoalTarget
	set_name(0x134efa8, "RTTI_AIBodyGoalTarget");
	apply_type(0x134efa8, "RTTICompound");
	del_items(0x134f958, DELIT_SIMPLE, 8);
	apply_type(0x134f958, "RTTIBase[1]");
	set_name(0x134f958, "AIBodyGoalTarget::sBases");

	// AIBodyGoalUnmountObject
	set_name(0x134effc, "RTTI_AIBodyGoalUnmountObject");
	apply_type(0x134effc, "RTTICompound");
	del_items(0x134f9f0, DELIT_SIMPLE, 8);
	apply_type(0x134f9f0, "RTTIBase[1]");
	set_name(0x134f9f0, "AIBodyGoalUnmountObject::sBases");

	// AIBodyGoalUseIdleObject
	set_name(0x134f050, "RTTI_AIBodyGoalUseIdleObject");
	apply_type(0x134f050, "RTTICompound");
	del_items(0x134f9f8, DELIT_SIMPLE, 8);
	apply_type(0x134f9f8, "RTTIBase[1]");
	set_name(0x134f9f8, "AIBodyGoalUseIdleObject::sBases");

	// AIBodyGoalUseInventoryItem
	set_name(0x13738e8, "RTTI_AIBodyGoalUseInventoryItem");
	apply_type(0x13738e8, "RTTICompound");
	del_items(0x1373f10, DELIT_SIMPLE, 8);
	apply_type(0x1373f10, "RTTIBase[1]");
	set_name(0x1373f10, "AIBodyGoalUseInventoryItem::sBases");

	// AIBodyGoalUseOrderedObject
	set_name(0x134f0a4, "RTTI_AIBodyGoalUseOrderedObject");
	apply_type(0x134f0a4, "RTTICompound");
	del_items(0x134fa00, DELIT_SIMPLE, 8);
	apply_type(0x134fa00, "RTTIBase[1]");
	set_name(0x134fa00, "AIBodyGoalUseOrderedObject::sBases");

	// AIBodyGoalWeaponLoad
	set_name(0x134f0f8, "RTTI_AIBodyGoalWeaponLoad");
	apply_type(0x134f0f8, "RTTICompound");
	del_items(0x134fa08, DELIT_SIMPLE, 8);
	apply_type(0x134fa08, "RTTIBase[1]");
	set_name(0x134fa08, "AIBodyGoalWeaponLoad::sBases");

	// AIBodyHumanoid
	set_name(0x1371ab8, "RTTI_AIBodyHumanoid");
	apply_type(0x1371ab8, "RTTICompound");
	del_items(0x1371f78, DELIT_SIMPLE, 8);
	apply_type(0x1371f78, "RTTIBase[1]");
	set_name(0x1371f78, "AIBodyHumanoid::sBases");

	// AIBodyInterface
	set_name(0x13525d0, "RTTI_AIBodyInterface");
	apply_type(0x13525d0, "RTTICompound");
	del_items(0x1352a18, DELIT_SIMPLE, 8);
	apply_type(0x1352a18, "RTTIBase[1]");
	set_name(0x1352a18, "AIBodyInterface::sBases");

	// AIBodyInterfaceGame
	set_name(0x1371a64, "RTTI_AIBodyInterfaceGame");
	apply_type(0x1371a64, "RTTICompound");
	del_items(0x1371f70, DELIT_SIMPLE, 8);
	apply_type(0x1371f70, "RTTIBase[1]");
	set_name(0x1371f70, "AIBodyInterfaceGame::sBases");

	// AIBodyLadder
	set_name(0x1371b0c, "RTTI_AIBodyLadder");
	apply_type(0x1371b0c, "RTTICompound");
	del_items(0x1372450, DELIT_SIMPLE, 8);
	apply_type(0x1372450, "RTTIBase[1]");
	set_name(0x1372450, "AIBodyLadder::sBases");

	// AIBodyLandVehicle
	set_name(0x1371b60, "RTTI_AIBodyLandVehicle");
	apply_type(0x1371b60, "RTTICompound");
	del_items(0x1372458, DELIT_SIMPLE, 8);
	apply_type(0x1372458, "RTTIBase[1]");
	set_name(0x1372458, "AIBodyLandVehicle::sBases");

	// AIBodyMountedGun
	set_name(0x1371d04, "RTTI_AIBodyMountedGun");
	apply_type(0x1371d04, "RTTICompound");
	del_items(0x1372480, DELIT_SIMPLE, 8);
	apply_type(0x1372480, "RTTIBase[1]");
	set_name(0x1372480, "AIBodyMountedGun::sBases");

	// AIBodyPlayAnimationObject
	set_name(0x1371d58, "RTTI_AIBodyPlayAnimationObject");
	apply_type(0x1371d58, "RTTICompound");
	del_items(0x1372488, DELIT_SIMPLE, 8);
	apply_type(0x1372488, "RTTIBase[1]");
	set_name(0x1372488, "AIBodyPlayAnimationObject::sBases");

	// AIBodySoldier
	set_name(0x1371dac, "RTTI_AIBodySoldier");
	apply_type(0x1371dac, "RTTICompound");
	del_items(0x1372490, DELIT_SIMPLE, 8);
	apply_type(0x1372490, "RTTIBase[1]");
	set_name(0x1372490, "AIBodySoldier::sBases");

	// AIBodyTroopCarrier
	set_name(0x1371c08, "RTTI_AIBodyTroopCarrier");
	apply_type(0x1371c08, "RTTICompound");
	del_items(0x1372470, DELIT_SIMPLE, 8);
	apply_type(0x1372470, "RTTIBase[1]");
	set_name(0x1372470, "AIBodyTroopCarrier::sBases");

	// AIBodyTurret
	set_name(0x1371e00, "RTTI_AIBodyTurret");
	apply_type(0x1371e00, "RTTICompound");
	del_items(0x1372498, DELIT_SIMPLE, 8);
	apply_type(0x1372498, "RTTIBase[1]");
	set_name(0x1372498, "AIBodyTurret::sBases");

	// AICapsule
	set_name(0x134b33c, "RTTI_AICapsule");
	apply_type(0x134b33c, "RTTICompound");
	del_items(0x134d330, DELIT_SIMPLE, 112);
	apply_type(0x134d330, "RTTIAttr[4]");
	set_name(0x134d330, "AICapsule::sAttrs");

	// AICloseCombatWeaponInterface
	set_name(0x13758fc, "RTTI_AICloseCombatWeaponInterface");
	apply_type(0x13758fc, "RTTICompound");
	del_items(0x1375b0c, DELIT_SIMPLE, 8);
	apply_type(0x1375b0c, "RTTIBase[1]");
	set_name(0x1375b0c, "AICloseCombatWeaponInterface::sBases");

	// AICollectableObject
	set_name(0x134b00c, "RTTI_AICollectableObject");
	apply_type(0x134b00c, "RTTICompound");

	// AIConditional
	set_name(0x134b134, "RTTI_AIConditional");
	apply_type(0x134b134, "RTTICompound");
	del_items(0x134c948, DELIT_SIMPLE, 28);
	apply_type(0x134c948, "RTTIAttr[1]");
	set_name(0x134c948, "AIConditional::sAttrs");

	// AIContextResource
	set_name(0x134bed0, "RTTI_AIContextResource");
	apply_type(0x134bed0, "RTTICompound");
	del_items(0x134db3c, DELIT_SIMPLE, 8);
	apply_type(0x134db3c, "RTTIBase[1]");
	set_name(0x134db3c, "AIContextResource::sBases");
	del_items(0x134db44, DELIT_SIMPLE, 1344);
	apply_type(0x134db44, "RTTIAttr[48]");
	set_name(0x134db44, "AIContextResource::sAttrs");
	del_items(0x134e084, DELIT_SIMPLE, 12);
	apply_type(0x134e084, "RTTIMessageHandler[1]");
	set_name(0x134e084, "AIContextResource::sMessageHandlers");

	// AICoverManager
	set_name(0x1353620, "RTTI_AICoverManager");
	apply_type(0x1353620, "RTTICompound");
	del_items(0x1355050, DELIT_SIMPLE, 8);
	apply_type(0x1355050, "RTTIBase[1]");
	set_name(0x1355050, "AICoverManager::sBases");
	del_items(0x1355058, DELIT_SIMPLE, 56);
	apply_type(0x1355058, "RTTIAttr[2]");
	set_name(0x1355058, "AICoverManager::sAttrs");

	// AICoverPositionPickerResource
	set_name(0x1352fb4, "RTTI_AICoverPositionPickerResource");
	apply_type(0x1352fb4, "RTTICompound");
	del_items(0x1354e2c, DELIT_SIMPLE, 8);
	apply_type(0x1354e2c, "RTTIBase[1]");
	set_name(0x1354e2c, "AICoverPositionPickerResource::sBases");

	// AIDangerArea
	set_name(0x134b198, "RTTI_AIDangerArea");
	apply_type(0x134b198, "RTTICompound");
	del_items(0x134d3a0, DELIT_SIMPLE, 8);
	apply_type(0x134d3a0, "RTTIBase[1]");
	set_name(0x134d3a0, "AIDangerArea::sBases");
	del_items(0x134d3a8, DELIT_SIMPLE, 112);
	apply_type(0x134d3a8, "RTTIAttr[4]");
	set_name(0x134d3a8, "AIDangerArea::sAttrs");

	// AIDangerAreaCapsule
	set_name(0x134b240, "RTTI_AIDangerAreaCapsule");
	apply_type(0x134b240, "RTTICompound");
	del_items(0x134d428, DELIT_SIMPLE, 16);
	apply_type(0x134d428, "RTTIBase[2]");
	set_name(0x134d428, "AIDangerAreaCapsule::sBases");

	// AIDangerAreaOrientedBoudingBox
	set_name(0x134b294, "RTTI_AIDangerAreaOrientedBoudingBox");
	apply_type(0x134b294, "RTTICompound");
	del_items(0x134d438, DELIT_SIMPLE, 8);
	apply_type(0x134d438, "RTTIBase[1]");
	set_name(0x134d438, "AIDangerAreaOrientedBoudingBox::sBases");

	// AIDangerAreaSphere
	set_name(0x134b1ec, "RTTI_AIDangerAreaSphere");
	apply_type(0x134b1ec, "RTTICompound");
	del_items(0x134d418, DELIT_SIMPLE, 16);
	apply_type(0x134d418, "RTTIBase[2]");
	set_name(0x134d418, "AIDangerAreaSphere::sBases");

	// AIDarkBox
	set_name(0x134afb8, "RTTI_AIDarkBox");
	apply_type(0x134afb8, "RTTICompound");
	del_items(0x134d49c, DELIT_SIMPLE, 8);
	apply_type(0x134d49c, "RTTIBase[1]");
	set_name(0x134d49c, "AIDarkBox::sBases");
	del_items(0x134d4a4, DELIT_SIMPLE, 56);
	apply_type(0x134d4a4, "RTTIAttr[2]");
	set_name(0x134d4a4, "AIDarkBox::sAttrs");

	// AIDirectableAgent
	set_name(0x134b390, "RTTI_AIDirectableAgent");
	apply_type(0x134b390, "RTTICompound");
	del_items(0x134c9bc, DELIT_SIMPLE, 8);
	apply_type(0x134c9bc, "RTTIBase[1]");
	set_name(0x134c9bc, "AIDirectableAgent::sBases");
	del_items(0x134c9c4, DELIT_SIMPLE, 456);
	apply_type(0x134c9c4, "RTTIFunction[19]");
	set_name(0x134c9c4, "AIDirectableAgent::sFunctions");

	// AIDynamicWaypointGrid
	set_name(0x13533a8, "RTTI_AIDynamicWaypointGrid");
	apply_type(0x13533a8, "RTTICompound");
	del_items(0x1353b00, DELIT_SIMPLE, 8);
	apply_type(0x1353b00, "RTTIBase[1]");
	set_name(0x1353b00, "AIDynamicWaypointGrid::sBases");
	del_items(0x1353b08, DELIT_SIMPLE, 28);
	apply_type(0x1353b08, "RTTIAttr[1]");
	set_name(0x1353b08, "AIDynamicWaypointGrid::sAttrs");
	del_items(0x1353b24, DELIT_SIMPLE, 12);
	apply_type(0x1353b24, "RTTIMessageHandler[1]");
	set_name(0x1353b24, "AIDynamicWaypointGrid::sMessageHandlers");

	// AIEmplacedWeaponObject
	set_name(0x134b3e4, "RTTI_AIEmplacedWeaponObject");
	apply_type(0x134b3e4, "RTTICompound");

	// AIEscortPositionPickerResource
	set_name(0x1352f60, "RTTI_AIEscortPositionPickerResource");
	apply_type(0x1352f60, "RTTICompound");
	del_items(0x1354e24, DELIT_SIMPLE, 8);
	apply_type(0x1354e24, "RTTIBase[1]");
	set_name(0x1354e24, "AIEscortPositionPickerResource::sBases");

	// AIFaction
	set_name(0x134b478, "RTTI_AIFaction");
	apply_type(0x134b478, "RTTICompound");
	del_items(0x134da50, DELIT_SIMPLE, 8);
	apply_type(0x134da50, "RTTIBase[1]");
	set_name(0x134da50, "AIFaction::sBases");
	del_items(0x134da58, DELIT_SIMPLE, 168);
	apply_type(0x134da58, "RTTIAttr[6]");
	set_name(0x134da58, "AIFaction::sAttrs");
	del_items(0x134db00, DELIT_SIMPLE, 48);
	apply_type(0x134db00, "RTTIFunction[2]");
	set_name(0x134db00, "AIFaction::sFunctions");
	del_items(0x134db30, DELIT_SIMPLE, 12);
	apply_type(0x134db30, "RTTIMessageHandler[1]");
	set_name(0x134db30, "AIFaction::sMessageHandlers");

	// AIFleeDangerAreaPositionPickerResource
	set_name(0x1353018, "RTTI_AIFleeDangerAreaPositionPickerResource");
	apply_type(0x1353018, "RTTICompound");
	del_items(0x1354e34, DELIT_SIMPLE, 8);
	apply_type(0x1354e34, "RTTIBase[1]");
	set_name(0x1354e34, "AIFleeDangerAreaPositionPickerResource::sBases");

	// AIFormation
	set_name(0x134f774, "RTTI_AIFormation");
	apply_type(0x134f774, "RTTICompound");
	del_items(0x1350124, DELIT_SIMPLE, 8);
	apply_type(0x1350124, "RTTIBase[1]");
	set_name(0x1350124, "AIFormation::sBases");
	del_items(0x135012c, DELIT_SIMPLE, 84);
	apply_type(0x135012c, "RTTIAttr[3]");
	set_name(0x135012c, "AIFormation::sAttrs");

	// AIFormationPosition
	set_name(0x134f720, "RTTI_AIFormationPosition");
	apply_type(0x134f720, "RTTICompound");
	del_items(0x13500d0, DELIT_SIMPLE, 84);
	apply_type(0x13500d0, "RTTIAttr[3]");
	set_name(0x13500d0, "AIFormationPosition::sAttrs");

	// AIGroup
	set_name(0x135388c, "RTTI_AIGroup");
	apply_type(0x135388c, "RTTICompound");
	del_items(0x135547c, DELIT_SIMPLE, 16);
	apply_type(0x135547c, "RTTIBase[2]");
	set_name(0x135547c, "AIGroup::sBases");
	del_items(0x135548c, DELIT_SIMPLE, 84);
	apply_type(0x135548c, "RTTIAttr[3]");
	set_name(0x135548c, "AIGroup::sAttrs");
	del_items(0x13554e0, DELIT_SIMPLE, 720);
	apply_type(0x13554e0, "RTTIFunction[30]");
	set_name(0x13554e0, "AIGroup::sFunctions");

	// AIGroupGame
	set_name(0x1371598, "RTTI_AIGroupGame");
	apply_type(0x1371598, "RTTICompound");
	del_items(0x1371ea8, DELIT_SIMPLE, 8);
	apply_type(0x1371ea8, "RTTIBase[1]");
	set_name(0x1371ea8, "AIGroupGame::sBases");
	del_items(0x1371eb0, DELIT_SIMPLE, 192);
	apply_type(0x1371eb0, "RTTIFunction[8]");
	set_name(0x1371eb0, "AIGroupGame::sFunctions");

	// AIHTNPlannerDaemon
	set_name(0x13504a8, "RTTI_AIHTNPlannerDaemon");
	apply_type(0x13504a8, "RTTICompound");
	del_items(0x13507a0, DELIT_SIMPLE, 8);
	apply_type(0x13507a0, "RTTIBase[1]");
	set_name(0x13507a0, "AIHTNPlannerDaemon::sBases");

	// AIHTNPlannerDaemonAirStrafe
	set_name(0x13505a4, "RTTI_AIHTNPlannerDaemonAirStrafe");
	apply_type(0x13505a4, "RTTICompound");
	del_items(0x13508c8, DELIT_SIMPLE, 8);
	apply_type(0x13508c8, "RTTIBase[1]");
	set_name(0x13508c8, "AIHTNPlannerDaemonAirStrafe::sBases");

	// AIHTNPlannerDaemonAlertLevel
	set_name(0x13505f8, "RTTI_AIHTNPlannerDaemonAlertLevel");
	apply_type(0x13505f8, "RTTICompound");
	del_items(0x13508d0, DELIT_SIMPLE, 8);
	apply_type(0x13508d0, "RTTIBase[1]");
	set_name(0x13508d0, "AIHTNPlannerDaemonAlertLevel::sBases");

	// AIHTNPlannerDaemonBodyState
	set_name(0x1372994, "RTTI_AIHTNPlannerDaemonBodyState");
	apply_type(0x1372994, "RTTICompound");
	del_items(0x1373540, DELIT_SIMPLE, 8);
	apply_type(0x1373540, "RTTIBase[1]");
	set_name(0x1373540, "AIHTNPlannerDaemonBodyState::sBases");

	// AIHTNPlannerDaemonCallForReinforcements
	set_name(0x1372a3c, "RTTI_AIHTNPlannerDaemonCallForReinforcements");
	apply_type(0x1372a3c, "RTTICompound");
	del_items(0x1373550, DELIT_SIMPLE, 8);
	apply_type(0x1373550, "RTTIBase[1]");
	set_name(0x1373550, "AIHTNPlannerDaemonCallForReinforcements::sBases");

	// AIHTNPlannerDaemonCaptureTrooper
	set_name(0x13727f0, "RTTI_AIHTNPlannerDaemonCaptureTrooper");
	apply_type(0x13727f0, "RTTICompound");
	del_items(0x1373518, DELIT_SIMPLE, 8);
	apply_type(0x1373518, "RTTIBase[1]");
	set_name(0x1373518, "AIHTNPlannerDaemonCaptureTrooper::sBases");

	// AIHTNPlannerDaemonDestructibles
	set_name(0x1372748, "RTTI_AIHTNPlannerDaemonDestructibles");
	apply_type(0x1372748, "RTTICompound");
	del_items(0x1373508, DELIT_SIMPLE, 8);
	apply_type(0x1373508, "RTTIBase[1]");
	set_name(0x1373508, "AIHTNPlannerDaemonDestructibles::sBases");

	// AIHTNPlannerDaemonFindAttackLocation
	set_name(0x13508e0, "RTTI_AIHTNPlannerDaemonFindAttackLocation");
	apply_type(0x13508e0, "RTTICompound");
	del_items(0x1351f40, DELIT_SIMPLE, 8);
	apply_type(0x1351f40, "RTTIBase[1]");
	set_name(0x1351f40, "AIHTNPlannerDaemonFindAttackLocation::sBases");

	// AIHTNPlannerDaemonFindCoverLocation
	set_name(0x1350934, "RTTI_AIHTNPlannerDaemonFindCoverLocation");
	apply_type(0x1350934, "RTTICompound");
	del_items(0x1351f70, DELIT_SIMPLE, 8);
	apply_type(0x1351f70, "RTTIBase[1]");
	set_name(0x1351f70, "AIHTNPlannerDaemonFindCoverLocation::sBases");

	// AIHTNPlannerDaemonFindGrenadeTarget
	set_name(0x13728ec, "RTTI_AIHTNPlannerDaemonFindGrenadeTarget");
	apply_type(0x13728ec, "RTTICompound");
	del_items(0x1373530, DELIT_SIMPLE, 8);
	apply_type(0x1373530, "RTTIBase[1]");
	set_name(0x1373530, "AIHTNPlannerDaemonFindGrenadeTarget::sBases");

	// AIHTNPlannerDaemonFindLapaIdle
	set_name(0x1350988, "RTTI_AIHTNPlannerDaemonFindLapaIdle");
	apply_type(0x1350988, "RTTICompound");
	del_items(0x1351f78, DELIT_SIMPLE, 8);
	apply_type(0x1351f78, "RTTIBase[1]");
	set_name(0x1351f78, "AIHTNPlannerDaemonFindLapaIdle::sBases");

	// AIHTNPlannerDaemonFindLocation
	set_name(0x13509dc, "RTTI_AIHTNPlannerDaemonFindLocation");
	apply_type(0x13509dc, "RTTICompound");
	del_items(0x1351f38, DELIT_SIMPLE, 8);
	apply_type(0x1351f38, "RTTIBase[1]");
	set_name(0x1351f38, "AIHTNPlannerDaemonFindLocation::sBases");

	// AIHTNPlannerDaemonFindLocationShared
	set_name(0x1350a30, "RTTI_AIHTNPlannerDaemonFindLocationShared");
	apply_type(0x1350a30, "RTTICompound");
	del_items(0x1351f30, DELIT_SIMPLE, 8);
	apply_type(0x1351f30, "RTTIBase[1]");
	set_name(0x1351f30, "AIHTNPlannerDaemonFindLocationShared::sBases");

	// AIHTNPlannerDaemonFindPlayerDeathCamLocation
	set_name(0x1372898, "RTTI_AIHTNPlannerDaemonFindPlayerDeathCamLocation");
	apply_type(0x1372898, "RTTICompound");
	del_items(0x1373528, DELIT_SIMPLE, 8);
	apply_type(0x1373528, "RTTIBase[1]");
	set_name(0x1373528, "AIHTNPlannerDaemonFindPlayerDeathCamLocation::sBases");

	// AIHTNPlannerDaemonFindSearchLocation
	set_name(0x1350a84, "RTTI_AIHTNPlannerDaemonFindSearchLocation");
	apply_type(0x1350a84, "RTTICompound");
	del_items(0x1351f88, DELIT_SIMPLE, 8);
	apply_type(0x1351f88, "RTTIBase[1]");
	set_name(0x1351f88, "AIHTNPlannerDaemonFindSearchLocation::sBases");

	// AIHTNPlannerDaemonFleeDangerAreaLocation
	set_name(0x1350b2c, "RTTI_AIHTNPlannerDaemonFleeDangerAreaLocation");
	apply_type(0x1350b2c, "RTTICompound");
	del_items(0x1351f98, DELIT_SIMPLE, 8);
	apply_type(0x1351f98, "RTTIBase[1]");
	set_name(0x1351f98, "AIHTNPlannerDaemonFleeDangerAreaLocation::sBases");

	// AIHTNPlannerDaemonFriendlies
	set_name(0x1350c28, "RTTI_AIHTNPlannerDaemonFriendlies");
	apply_type(0x1350c28, "RTTICompound");
	del_items(0x1351fa8, DELIT_SIMPLE, 8);
	apply_type(0x1351fa8, "RTTIBase[1]");
	set_name(0x1351fa8, "AIHTNPlannerDaemonFriendlies::sBases");

	// AIHTNPlannerDaemonGameInfo
	set_name(0x137279c, "RTTI_AIHTNPlannerDaemonGameInfo");
	apply_type(0x137279c, "RTTICompound");
	del_items(0x1373510, DELIT_SIMPLE, 8);
	apply_type(0x1373510, "RTTIBase[1]");
	set_name(0x1373510, "AIHTNPlannerDaemonGameInfo::sBases");

	// AIHTNPlannerDaemonIndividual
	set_name(0x13504fc, "RTTI_AIHTNPlannerDaemonIndividual");
	apply_type(0x13504fc, "RTTICompound");
	del_items(0x13507a8, DELIT_SIMPLE, 8);
	apply_type(0x13507a8, "RTTIBase[1]");
	set_name(0x13507a8, "AIHTNPlannerDaemonIndividual::sBases");

	// AIHTNPlannerDaemonInventory
	set_name(0x1372940, "RTTI_AIHTNPlannerDaemonInventory");
	apply_type(0x1372940, "RTTICompound");
	del_items(0x1373538, DELIT_SIMPLE, 8);
	apply_type(0x1373538, "RTTIBase[1]");
	set_name(0x1373538, "AIHTNPlannerDaemonInventory::sBases");

	// AIHTNPlannerDaemonLeanAndPeekAreas
	set_name(0x13724fc, "RTTI_AIHTNPlannerDaemonLeanAndPeekAreas");
	apply_type(0x13724fc, "RTTICompound");
	del_items(0x13734c8, DELIT_SIMPLE, 8);
	apply_type(0x13734c8, "RTTIBase[1]");
	set_name(0x13734c8, "AIHTNPlannerDaemonLeanAndPeekAreas::sBases");

	// AIHTNPlannerDaemonMiniDrone
	set_name(0x13729e8, "RTTI_AIHTNPlannerDaemonMiniDrone");
	apply_type(0x13729e8, "RTTICompound");
	del_items(0x1373548, DELIT_SIMPLE, 8);
	apply_type(0x1373548, "RTTIBase[1]");
	set_name(0x1373548, "AIHTNPlannerDaemonMiniDrone::sBases");

	// AIHTNPlannerDaemonMountedGuns
	set_name(0x1350dcc, "RTTI_AIHTNPlannerDaemonMountedGuns");
	apply_type(0x1350dcc, "RTTICompound");
	del_items(0x1351fd0, DELIT_SIMPLE, 8);
	apply_type(0x1351fd0, "RTTIBase[1]");
	set_name(0x1351fd0, "AIHTNPlannerDaemonMountedGuns::sBases");

	// AIHTNPlannerDaemonMultiplayerMissionInfo
	set_name(0x1372550, "RTTI_AIHTNPlannerDaemonMultiplayerMissionInfo");
	apply_type(0x1372550, "RTTICompound");
	del_items(0x13734d0, DELIT_SIMPLE, 8);
	apply_type(0x13734d0, "RTTIBase[1]");
	set_name(0x13734d0, "AIHTNPlannerDaemonMultiplayerMissionInfo::sBases");

	// AIHTNPlannerDaemonMultiplayerTerrainInfo
	set_name(0x13725a4, "RTTI_AIHTNPlannerDaemonMultiplayerTerrainInfo");
	apply_type(0x13725a4, "RTTICompound");
	del_items(0x13734d8, DELIT_SIMPLE, 8);
	apply_type(0x13734d8, "RTTIBase[1]");
	set_name(0x13734d8, "AIHTNPlannerDaemonMultiplayerTerrainInfo::sBases");

	// AIHTNPlannerDaemonObjectStates
	set_name(0x13725f8, "RTTI_AIHTNPlannerDaemonObjectStates");
	apply_type(0x13725f8, "RTTICompound");
	del_items(0x13734e0, DELIT_SIMPLE, 8);
	apply_type(0x13734e0, "RTTIBase[1]");
	set_name(0x13734e0, "AIHTNPlannerDaemonObjectStates::sBases");

	// AIHTNPlannerDaemonPathFinder
	set_name(0x1350b80, "RTTI_AIHTNPlannerDaemonPathFinder");
	apply_type(0x1350b80, "RTTICompound");
	del_items(0x1351f48, DELIT_SIMPLE, 8);
	apply_type(0x1351f48, "RTTIBase[1]");
	set_name(0x1351f48, "AIHTNPlannerDaemonPathFinder::sBases");

	// AIHTNPlannerDaemonPlayerInfo
	set_name(0x137264c, "RTTI_AIHTNPlannerDaemonPlayerInfo");
	apply_type(0x137264c, "RTTICompound");
	del_items(0x13734e8, DELIT_SIMPLE, 8);
	apply_type(0x13734e8, "RTTIBase[1]");
	set_name(0x13734e8, "AIHTNPlannerDaemonPlayerInfo::sBases");

	// AIHTNPlannerDaemonSpecialMoves
	set_name(0x13726a0, "RTTI_AIHTNPlannerDaemonSpecialMoves");
	apply_type(0x13726a0, "RTTICompound");
	del_items(0x13734f0, DELIT_SIMPLE, 8);
	apply_type(0x13734f0, "RTTIBase[1]");
	set_name(0x13734f0, "AIHTNPlannerDaemonSpecialMoves::sBases");

	// AIHTNPlannerDaemonSquad
	set_name(0x1350550, "RTTI_AIHTNPlannerDaemonSquad");
	apply_type(0x1350550, "RTTICompound");
	del_items(0x13507b0, DELIT_SIMPLE, 8);
	apply_type(0x13507b0, "RTTIBase[1]");
	set_name(0x13507b0, "AIHTNPlannerDaemonSquad::sBases");

	// AIHTNPlannerDaemonSquadState
	set_name(0x1350d24, "RTTI_AIHTNPlannerDaemonSquadState");
	apply_type(0x1350d24, "RTTICompound");
	del_items(0x1351fc0, DELIT_SIMPLE, 8);
	apply_type(0x1351fc0, "RTTIBase[1]");
	set_name(0x1351fc0, "AIHTNPlannerDaemonSquadState::sBases");

	// AIHTNPlannerDaemonSquadStrategy
	set_name(0x1350d78, "RTTI_AIHTNPlannerDaemonSquadStrategy");
	apply_type(0x1350d78, "RTTICompound");
	del_items(0x1351fc8, DELIT_SIMPLE, 8);
	apply_type(0x1351fc8, "RTTIBase[1]");
	set_name(0x1351fc8, "AIHTNPlannerDaemonSquadStrategy::sBases");

	// AIHTNPlannerDaemonTeamMember
	set_name(0x1350bd4, "RTTI_AIHTNPlannerDaemonTeamMember");
	apply_type(0x1350bd4, "RTTICompound");
	del_items(0x1351fa0, DELIT_SIMPLE, 8);
	apply_type(0x1351fa0, "RTTIBase[1]");
	set_name(0x1351fa0, "AIHTNPlannerDaemonTeamMember::sBases");

	// AIHTNPlannerDaemonTerrainInfo
	set_name(0x1350c7c, "RTTI_AIHTNPlannerDaemonTerrainInfo");
	apply_type(0x1350c7c, "RTTICompound");
	del_items(0x1351fb0, DELIT_SIMPLE, 8);
	apply_type(0x1351fb0, "RTTIBase[1]");
	set_name(0x1351fb0, "AIHTNPlannerDaemonTerrainInfo::sBases");

	// AIHTNPlannerDaemonThreatReappearanceLocation
	set_name(0x1350cd0, "RTTI_AIHTNPlannerDaemonThreatReappearanceLocation");
	apply_type(0x1350cd0, "RTTICompound");
	del_items(0x1351fb8, DELIT_SIMPLE, 8);
	apply_type(0x1351fb8, "RTTIBase[1]");
	set_name(0x1351fb8, "AIHTNPlannerDaemonThreatReappearanceLocation::sBases");

	// AIHTNPlannerDaemonTroopCarrier
	set_name(0x1372844, "RTTI_AIHTNPlannerDaemonTroopCarrier");
	apply_type(0x1372844, "RTTICompound");
	del_items(0x1373520, DELIT_SIMPLE, 8);
	apply_type(0x1373520, "RTTIBase[1]");
	set_name(0x1373520, "AIHTNPlannerDaemonTroopCarrier::sBases");

	// AIHTNPlannerDaemonUseLocations
	set_name(0x13726f4, "RTTI_AIHTNPlannerDaemonUseLocations");
	apply_type(0x13726f4, "RTTICompound");
	del_items(0x1373500, DELIT_SIMPLE, 8);
	apply_type(0x1373500, "RTTIBase[1]");
	set_name(0x1373500, "AIHTNPlannerDaemonUseLocations::sBases");

	// AIHTNPlannerDaemonVisibility
	set_name(0x1350e20, "RTTI_AIHTNPlannerDaemonVisibility");
	apply_type(0x1350e20, "RTTICompound");
	del_items(0x1351fd8, DELIT_SIMPLE, 8);
	apply_type(0x1351fd8, "RTTIBase[1]");
	set_name(0x1351fd8, "AIHTNPlannerDaemonVisibility::sBases");

	// AIHTNPlannerResource
	set_name(0x1350304, "RTTI_AIHTNPlannerResource");
	apply_type(0x1350304, "RTTICompound");
	del_items(0x13507c0, DELIT_SIMPLE, 8);
	apply_type(0x13507c0, "RTTIBase[1]");
	set_name(0x13507c0, "AIHTNPlannerResource::sBases");
	del_items(0x13507c8, DELIT_SIMPLE, 112);
	apply_type(0x13507c8, "RTTIAttr[4]");
	set_name(0x13507c8, "AIHTNPlannerResource::sAttrs");

	// AIHTNPrimitiveTask
	set_name(0x1350e74, "RTTI_AIHTNPrimitiveTask");
	apply_type(0x1350e74, "RTTICompound");
	del_items(0x1351f50, DELIT_SIMPLE, 8);
	apply_type(0x1351f50, "RTTIBase[1]");
	set_name(0x1351f50, "AIHTNPrimitiveTask::sBases");

	// AIHTNPrimitiveTaskAgent
	set_name(0x1350ec8, "RTTI_AIHTNPrimitiveTaskAgent");
	apply_type(0x1350ec8, "RTTICompound");
	del_items(0x1351f58, DELIT_SIMPLE, 8);
	apply_type(0x1351f58, "RTTIBase[1]");
	set_name(0x1351f58, "AIHTNPrimitiveTaskAgent::sBases");

	// AIHTNPrimitiveTaskAimAtEntity
	set_name(0x1350fc4, "RTTI_AIHTNPrimitiveTaskAimAtEntity");
	apply_type(0x1350fc4, "RTTICompound");
	del_items(0x1351fe0, DELIT_SIMPLE, 8);
	apply_type(0x1351fe0, "RTTIBase[1]");
	set_name(0x1351fe0, "AIHTNPrimitiveTaskAimAtEntity::sBases");

	// AIHTNPrimitiveTaskAimInHeading
	set_name(0x1351018, "RTTI_AIHTNPrimitiveTaskAimInHeading");
	apply_type(0x1351018, "RTTICompound");
	del_items(0x1351fe8, DELIT_SIMPLE, 8);
	apply_type(0x1351fe8, "RTTIBase[1]");
	set_name(0x1351fe8, "AIHTNPrimitiveTaskAimInHeading::sBases");

	// AIHTNPrimitiveTaskAirStrafe
	set_name(0x1372a94, "RTTI_AIHTNPrimitiveTaskAirStrafe");
	apply_type(0x1372a94, "RTTICompound");
	del_items(0x1373558, DELIT_SIMPLE, 8);
	apply_type(0x1373558, "RTTIBase[1]");
	set_name(0x1373558, "AIHTNPrimitiveTaskAirStrafe::sBases");

	// AIHTNPrimitiveTaskAssumePosture
	set_name(0x135106c, "RTTI_AIHTNPrimitiveTaskAssumePosture");
	apply_type(0x135106c, "RTTICompound");
	del_items(0x1351ff0, DELIT_SIMPLE, 8);
	apply_type(0x1351ff0, "RTTIBase[1]");
	set_name(0x1351ff0, "AIHTNPrimitiveTaskAssumePosture::sBases");

	// AIHTNPrimitiveTaskBroadcast
	set_name(0x13510c0, "RTTI_AIHTNPrimitiveTaskBroadcast");
	apply_type(0x13510c0, "RTTICompound");
	del_items(0x1351ff8, DELIT_SIMPLE, 8);
	apply_type(0x1351ff8, "RTTIBase[1]");
	set_name(0x1351ff8, "AIHTNPrimitiveTaskBroadcast::sBases");

	// AIHTNPrimitiveTaskClaimWaypoint
	set_name(0x1351114, "RTTI_AIHTNPrimitiveTaskClaimWaypoint");
	apply_type(0x1351114, "RTTICompound");
	del_items(0x1352000, DELIT_SIMPLE, 8);
	apply_type(0x1352000, "RTTIBase[1]");
	set_name(0x1352000, "AIHTNPrimitiveTaskClaimWaypoint::sBases");

	// AIHTNPrimitiveTaskClearAreaRestrictions
	set_name(0x1351168, "RTTI_AIHTNPrimitiveTaskClearAreaRestrictions");
	apply_type(0x1351168, "RTTICompound");
	del_items(0x1352008, DELIT_SIMPLE, 8);
	apply_type(0x1352008, "RTTIBase[1]");
	set_name(0x1352008, "AIHTNPrimitiveTaskClearAreaRestrictions::sBases");

	// AIHTNPrimitiveTaskClearOrder
	set_name(0x13511bc, "RTTI_AIHTNPrimitiveTaskClearOrder");
	apply_type(0x13511bc, "RTTICompound");
	del_items(0x1352010, DELIT_SIMPLE, 8);
	apply_type(0x1352010, "RTTIBase[1]");
	set_name(0x1352010, "AIHTNPrimitiveTaskClearOrder::sBases");

	// AIHTNPrimitiveTaskConfirmThreatLost
	set_name(0x1351210, "RTTI_AIHTNPrimitiveTaskConfirmThreatLost");
	apply_type(0x1351210, "RTTICompound");
	del_items(0x1352018, DELIT_SIMPLE, 8);
	apply_type(0x1352018, "RTTIBase[1]");
	set_name(0x1352018, "AIHTNPrimitiveTaskConfirmThreatLost::sBases");

	// AIHTNPrimitiveTaskCoverMountedGun
	set_name(0x1372ae8, "RTTI_AIHTNPrimitiveTaskCoverMountedGun");
	apply_type(0x1372ae8, "RTTICompound");
	del_items(0x1373560, DELIT_SIMPLE, 8);
	apply_type(0x1373560, "RTTIBase[1]");
	set_name(0x1373560, "AIHTNPrimitiveTaskCoverMountedGun::sBases");

	// AIHTNPrimitiveTaskDelayDeathCamFade
	set_name(0x13736f0, "RTTI_AIHTNPrimitiveTaskDelayDeathCamFade");
	apply_type(0x13736f0, "RTTICompound");
	del_items(0x1373ee0, DELIT_SIMPLE, 8);
	apply_type(0x1373ee0, "RTTIBase[1]");
	set_name(0x1373ee0, "AIHTNPrimitiveTaskDelayDeathCamFade::sBases");

	// AIHTNPrimitiveTaskDismountObject
	set_name(0x1351264, "RTTI_AIHTNPrimitiveTaskDismountObject");
	apply_type(0x1351264, "RTTICompound");
	del_items(0x1352020, DELIT_SIMPLE, 8);
	apply_type(0x1352020, "RTTIBase[1]");
	set_name(0x1352020, "AIHTNPrimitiveTaskDismountObject::sBases");

	// AIHTNPrimitiveTaskDoCustomAction
	set_name(0x1373370, "RTTI_AIHTNPrimitiveTaskDoCustomAction");
	apply_type(0x1373370, "RTTICompound");
	del_items(0x1373628, DELIT_SIMPLE, 8);
	apply_type(0x1373628, "RTTIBase[1]");
	set_name(0x1373628, "AIHTNPrimitiveTaskDoCustomAction::sBases");

	// AIHTNPrimitiveTaskDodgeGame
	set_name(0x1372b3c, "RTTI_AIHTNPrimitiveTaskDodgeGame");
	apply_type(0x1372b3c, "RTTICompound");
	del_items(0x13734f8, DELIT_SIMPLE, 8);
	apply_type(0x13734f8, "RTTIBase[1]");
	set_name(0x13734f8, "AIHTNPrimitiveTaskDodgeGame::sBases");

	// AIHTNPrimitiveTaskDraw
	set_name(0x13512b8, "RTTI_AIHTNPrimitiveTaskDraw");
	apply_type(0x13512b8, "RTTICompound");
	del_items(0x1352028, DELIT_SIMPLE, 8);
	apply_type(0x1352028, "RTTIBase[1]");
	set_name(0x1352028, "AIHTNPrimitiveTaskDraw::sBases");

	// AIHTNPrimitiveTaskDriveSegment
	set_name(0x135130c, "RTTI_AIHTNPrimitiveTaskDriveSegment");
	apply_type(0x135130c, "RTTICompound");
	del_items(0x1352038, DELIT_SIMPLE, 8);
	apply_type(0x1352038, "RTTIBase[1]");
	set_name(0x1352038, "AIHTNPrimitiveTaskDriveSegment::sBases");

	// AIHTNPrimitiveTaskDriveToCloseCombat
	set_name(0x1372b90, "RTTI_AIHTNPrimitiveTaskDriveToCloseCombat");
	apply_type(0x1372b90, "RTTICompound");
	del_items(0x1373568, DELIT_SIMPLE, 8);
	apply_type(0x1373568, "RTTIBase[1]");
	set_name(0x1373568, "AIHTNPrimitiveTaskDriveToCloseCombat::sBases");

	// AIHTNPrimitiveTaskEndCommandSequence
	set_name(0x1351360, "RTTI_AIHTNPrimitiveTaskEndCommandSequence");
	apply_type(0x1351360, "RTTICompound");
	del_items(0x1352040, DELIT_SIMPLE, 8);
	apply_type(0x1352040, "RTTIBase[1]");
	set_name(0x1352040, "AIHTNPrimitiveTaskEndCommandSequence::sBases");

	// AIHTNPrimitiveTaskError
	set_name(0x13513b4, "RTTI_AIHTNPrimitiveTaskError");
	apply_type(0x13513b4, "RTTICompound");
	del_items(0x1352048, DELIT_SIMPLE, 8);
	apply_type(0x1352048, "RTTIBase[1]");
	set_name(0x1352048, "AIHTNPrimitiveTaskError::sBases");

	// AIHTNPrimitiveTaskFaceEntityGame
	set_name(0x1372be4, "RTTI_AIHTNPrimitiveTaskFaceEntityGame");
	apply_type(0x1372be4, "RTTICompound");
	del_items(0x1373570, DELIT_SIMPLE, 8);
	apply_type(0x1373570, "RTTIBase[1]");
	set_name(0x1373570, "AIHTNPrimitiveTaskFaceEntityGame::sBases");

	// AIHTNPrimitiveTaskFail
	set_name(0x1351408, "RTTI_AIHTNPrimitiveTaskFail");
	apply_type(0x1351408, "RTTICompound");
	del_items(0x1352050, DELIT_SIMPLE, 8);
	apply_type(0x1352050, "RTTIBase[1]");
	set_name(0x1352050, "AIHTNPrimitiveTaskFail::sBases");

	// AIHTNPrimitiveTaskFireBurstAtEntity
	set_name(0x135145c, "RTTI_AIHTNPrimitiveTaskFireBurstAtEntity");
	apply_type(0x135145c, "RTTICompound");
	del_items(0x1352058, DELIT_SIMPLE, 8);
	apply_type(0x1352058, "RTTIBase[1]");
	set_name(0x1352058, "AIHTNPrimitiveTaskFireBurstAtEntity::sBases");

	// AIHTNPrimitiveTaskFireBurstAtEntityAndMiss
	set_name(0x13514b0, "RTTI_AIHTNPrimitiveTaskFireBurstAtEntityAndMiss");
	apply_type(0x13514b0, "RTTICompound");
	del_items(0x1352060, DELIT_SIMPLE, 8);
	apply_type(0x1352060, "RTTIBase[1]");
	set_name(0x1352060, "AIHTNPrimitiveTaskFireBurstAtEntityAndMiss::sBases");

	// AIHTNPrimitiveTaskFireBurstAtWaypoint
	set_name(0x1351504, "RTTI_AIHTNPrimitiveTaskFireBurstAtWaypoint");
	apply_type(0x1351504, "RTTICompound");
	del_items(0x1352068, DELIT_SIMPLE, 8);
	apply_type(0x1352068, "RTTIBase[1]");
	set_name(0x1352068, "AIHTNPrimitiveTaskFireBurstAtWaypoint::sBases");

	// AIHTNPrimitiveTaskFireBurstInDirection
	set_name(0x1351558, "RTTI_AIHTNPrimitiveTaskFireBurstInDirection");
	apply_type(0x1351558, "RTTICompound");
	del_items(0x1352070, DELIT_SIMPLE, 8);
	apply_type(0x1352070, "RTTIBase[1]");
	set_name(0x1352070, "AIHTNPrimitiveTaskFireBurstInDirection::sBases");

	// AIHTNPrimitiveTaskForget
	set_name(0x13515ac, "RTTI_AIHTNPrimitiveTaskForget");
	apply_type(0x13515ac, "RTTICompound");
	del_items(0x1352078, DELIT_SIMPLE, 8);
	apply_type(0x1352078, "RTTIBase[1]");
	set_name(0x1352078, "AIHTNPrimitiveTaskForget::sBases");

	// AIHTNPrimitiveTaskGlanceAtEntity
	set_name(0x1351654, "RTTI_AIHTNPrimitiveTaskGlanceAtEntity");
	apply_type(0x1351654, "RTTICompound");
	del_items(0x1352088, DELIT_SIMPLE, 8);
	apply_type(0x1352088, "RTTIBase[1]");
	set_name(0x1352088, "AIHTNPrimitiveTaskGlanceAtEntity::sBases");

	// AIHTNPrimitiveTaskHoverSegment
	set_name(0x13516a8, "RTTI_AIHTNPrimitiveTaskHoverSegment");
	apply_type(0x13516a8, "RTTICompound");
	del_items(0x1352090, DELIT_SIMPLE, 8);
	apply_type(0x1352090, "RTTIBase[1]");
	set_name(0x1352090, "AIHTNPrimitiveTaskHoverSegment::sBases");

	// AIHTNPrimitiveTaskIndividual
	set_name(0x1350f1c, "RTTI_AIHTNPrimitiveTaskIndividual");
	apply_type(0x1350f1c, "RTTICompound");
	del_items(0x1351f60, DELIT_SIMPLE, 8);
	apply_type(0x1351f60, "RTTIBase[1]");
	set_name(0x1351f60, "AIHTNPrimitiveTaskIndividual::sBases");

	// AIHTNPrimitiveTaskLapaAimInHeading
	set_name(0x1372c38, "RTTI_AIHTNPrimitiveTaskLapaAimInHeading");
	apply_type(0x1372c38, "RTTICompound");
	del_items(0x1373578, DELIT_SIMPLE, 8);
	apply_type(0x1373578, "RTTIBase[1]");
	set_name(0x1373578, "AIHTNPrimitiveTaskLapaAimInHeading::sBases");

	// AIHTNPrimitiveTaskLapaDoAction
	set_name(0x1372c8c, "RTTI_AIHTNPrimitiveTaskLapaDoAction");
	apply_type(0x1372c8c, "RTTICompound");
	del_items(0x1373580, DELIT_SIMPLE, 8);
	apply_type(0x1373580, "RTTIBase[1]");
	set_name(0x1373580, "AIHTNPrimitiveTaskLapaDoAction::sBases");

	// AIHTNPrimitiveTaskLapaLeanAim
	set_name(0x1372ce0, "RTTI_AIHTNPrimitiveTaskLapaLeanAim");
	apply_type(0x1372ce0, "RTTICompound");
	del_items(0x1373588, DELIT_SIMPLE, 8);
	apply_type(0x1373588, "RTTIBase[1]");
	set_name(0x1373588, "AIHTNPrimitiveTaskLapaLeanAim::sBases");

	// AIHTNPrimitiveTaskLapaLeanFire
	set_name(0x1372d34, "RTTI_AIHTNPrimitiveTaskLapaLeanFire");
	apply_type(0x1372d34, "RTTICompound");
	del_items(0x1373590, DELIT_SIMPLE, 8);
	apply_type(0x1373590, "RTTIBase[1]");
	set_name(0x1373590, "AIHTNPrimitiveTaskLapaLeanFire::sBases");

	// AIHTNPrimitiveTaskLapaPeekAtEntity
	set_name(0x1372d88, "RTTI_AIHTNPrimitiveTaskLapaPeekAtEntity");
	apply_type(0x1372d88, "RTTICompound");
	del_items(0x1373598, DELIT_SIMPLE, 8);
	apply_type(0x1373598, "RTTIBase[1]");
	set_name(0x1373598, "AIHTNPrimitiveTaskLapaPeekAtEntity::sBases");

	// AIHTNPrimitiveTaskLapaPeekInHeading
	set_name(0x1372ddc, "RTTI_AIHTNPrimitiveTaskLapaPeekInHeading");
	apply_type(0x1372ddc, "RTTICompound");
	del_items(0x13735a0, DELIT_SIMPLE, 8);
	apply_type(0x13735a0, "RTTIBase[1]");
	set_name(0x13735a0, "AIHTNPrimitiveTaskLapaPeekInHeading::sBases");

	// AIHTNPrimitiveTaskLapaStayInCover
	set_name(0x1372e30, "RTTI_AIHTNPrimitiveTaskLapaStayInCover");
	apply_type(0x1372e30, "RTTICompound");
	del_items(0x13735a8, DELIT_SIMPLE, 8);
	apply_type(0x13735a8, "RTTIBase[1]");
	set_name(0x13735a8, "AIHTNPrimitiveTaskLapaStayInCover::sBases");

	// AIHTNPrimitiveTaskLapaSuppressWaypointList
	set_name(0x1372e84, "RTTI_AIHTNPrimitiveTaskLapaSuppressWaypointList");
	apply_type(0x1372e84, "RTTICompound");
	del_items(0x13735b0, DELIT_SIMPLE, 8);
	apply_type(0x13735b0, "RTTIBase[1]");
	set_name(0x13735b0, "AIHTNPrimitiveTaskLapaSuppressWaypointList::sBases");

	// AIHTNPrimitiveTaskLapaToCover
	set_name(0x1372ed8, "RTTI_AIHTNPrimitiveTaskLapaToCover");
	apply_type(0x1372ed8, "RTTICompound");
	del_items(0x13735b8, DELIT_SIMPLE, 8);
	apply_type(0x13735b8, "RTTIBase[1]");
	set_name(0x13735b8, "AIHTNPrimitiveTaskLapaToCover::sBases");

	// AIHTNPrimitiveTaskLog
	set_name(0x13516fc, "RTTI_AIHTNPrimitiveTaskLog");
	apply_type(0x13516fc, "RTTICompound");
	del_items(0x1352098, DELIT_SIMPLE, 8);
	apply_type(0x1352098, "RTTIBase[1]");
	set_name(0x1352098, "AIHTNPrimitiveTaskLog::sBases");

	// AIHTNPrimitiveTaskLookAtEntityGame
	set_name(0x1372f2c, "RTTI_AIHTNPrimitiveTaskLookAtEntityGame");
	apply_type(0x1372f2c, "RTTICompound");
	del_items(0x13735c0, DELIT_SIMPLE, 8);
	apply_type(0x13735c0, "RTTIBase[1]");
	set_name(0x13735c0, "AIHTNPrimitiveTaskLookAtEntityGame::sBases");

	// AIHTNPrimitiveTaskLookAtMarker
	set_name(0x1351750, "RTTI_AIHTNPrimitiveTaskLookAtMarker");
	apply_type(0x1351750, "RTTICompound");
	del_items(0x13520a0, DELIT_SIMPLE, 8);
	apply_type(0x13520a0, "RTTIBase[1]");
	set_name(0x13520a0, "AIHTNPrimitiveTaskLookAtMarker::sBases");

	// AIHTNPrimitiveTaskLookAtThreat
	set_name(0x13517a4, "RTTI_AIHTNPrimitiveTaskLookAtThreat");
	apply_type(0x13517a4, "RTTICompound");
	del_items(0x13520a8, DELIT_SIMPLE, 8);
	apply_type(0x13520a8, "RTTIBase[1]");
	set_name(0x13520a8, "AIHTNPrimitiveTaskLookAtThreat::sBases");

	// AIHTNPrimitiveTaskLookInHeading
	set_name(0x13517f8, "RTTI_AIHTNPrimitiveTaskLookInHeading");
	apply_type(0x13517f8, "RTTICompound");
	del_items(0x13520b0, DELIT_SIMPLE, 8);
	apply_type(0x13520b0, "RTTIBase[1]");
	set_name(0x13520b0, "AIHTNPrimitiveTaskLookInHeading::sBases");

	// AIHTNPrimitiveTaskLowCrouchGame
	set_name(0x1372f80, "RTTI_AIHTNPrimitiveTaskLowCrouchGame");
	apply_type(0x1372f80, "RTTICompound");
	del_items(0x13735c8, DELIT_SIMPLE, 8);
	apply_type(0x13735c8, "RTTIBase[1]");
	set_name(0x13735c8, "AIHTNPrimitiveTaskLowCrouchGame::sBases");

	// AIHTNPrimitiveTaskMessage
	set_name(0x135184c, "RTTI_AIHTNPrimitiveTaskMessage");
	apply_type(0x135184c, "RTTICompound");
	del_items(0x13520b8, DELIT_SIMPLE, 8);
	apply_type(0x13520b8, "RTTIBase[1]");
	set_name(0x13520b8, "AIHTNPrimitiveTaskMessage::sBases");

	// AIHTNPrimitiveTaskMiniDroneAttack
	set_name(0x1372fd4, "RTTI_AIHTNPrimitiveTaskMiniDroneAttack");
	apply_type(0x1372fd4, "RTTICompound");
	del_items(0x13735d8, DELIT_SIMPLE, 8);
	apply_type(0x13735d8, "RTTIBase[1]");
	set_name(0x13735d8, "AIHTNPrimitiveTaskMiniDroneAttack::sBases");

	// AIHTNPrimitiveTaskMiniDroneFly
	set_name(0x1373028, "RTTI_AIHTNPrimitiveTaskMiniDroneFly");
	apply_type(0x1373028, "RTTICompound");
	del_items(0x13735d0, DELIT_SIMPLE, 8);
	apply_type(0x13735d0, "RTTIBase[1]");
	set_name(0x13735d0, "AIHTNPrimitiveTaskMiniDroneFly::sBases");

	// AIHTNPrimitiveTaskMiniDroneScan
	set_name(0x137307c, "RTTI_AIHTNPrimitiveTaskMiniDroneScan");
	apply_type(0x137307c, "RTTICompound");
	del_items(0x13735e0, DELIT_SIMPLE, 8);
	apply_type(0x13735e0, "RTTIBase[1]");
	set_name(0x13735e0, "AIHTNPrimitiveTaskMiniDroneScan::sBases");

	// AIHTNPrimitiveTaskMountObject
	set_name(0x13518a0, "RTTI_AIHTNPrimitiveTaskMountObject");
	apply_type(0x13518a0, "RTTICompound");
	del_items(0x13520c0, DELIT_SIMPLE, 8);
	apply_type(0x13520c0, "RTTIBase[1]");
	set_name(0x13520c0, "AIHTNPrimitiveTaskMountObject::sBases");

	// AIHTNPrimitiveTaskMove
	set_name(0x13518f4, "RTTI_AIHTNPrimitiveTaskMove");
	apply_type(0x13518f4, "RTTICompound");
	del_items(0x1352030, DELIT_SIMPLE, 8);
	apply_type(0x1352030, "RTTIBase[1]");
	set_name(0x1352030, "AIHTNPrimitiveTaskMove::sBases");

	// AIHTNPrimitiveTaskNotifyRevivingPlayer
	set_name(0x1373798, "RTTI_AIHTNPrimitiveTaskNotifyRevivingPlayer");
	apply_type(0x1373798, "RTTICompound");
	del_items(0x1373ef0, DELIT_SIMPLE, 8);
	apply_type(0x1373ef0, "RTTIBase[1]");
	set_name(0x1373ef0, "AIHTNPrimitiveTaskNotifyRevivingPlayer::sBases");

	// AIHTNPrimitiveTaskNotifyStrategyGame
	set_name(0x1373744, "RTTI_AIHTNPrimitiveTaskNotifyStrategyGame");
	apply_type(0x1373744, "RTTICompound");
	del_items(0x1373ee8, DELIT_SIMPLE, 8);
	apply_type(0x1373ee8, "RTTIBase[1]");
	set_name(0x1373ee8, "AIHTNPrimitiveTaskNotifyStrategyGame::sBases");

	// AIHTNPrimitiveTaskPauseGame
	set_name(0x13730d0, "RTTI_AIHTNPrimitiveTaskPauseGame");
	apply_type(0x13730d0, "RTTICompound");
	del_items(0x13735e8, DELIT_SIMPLE, 8);
	apply_type(0x13735e8, "RTTIBase[1]");
	set_name(0x13735e8, "AIHTNPrimitiveTaskPauseGame::sBases");

	// AIHTNPrimitiveTaskPlaceHolder
	set_name(0x1351948, "RTTI_AIHTNPrimitiveTaskPlaceHolder");
	apply_type(0x1351948, "RTTICompound");
	del_items(0x13520c8, DELIT_SIMPLE, 8);
	apply_type(0x13520c8, "RTTIBase[1]");
	set_name(0x13520c8, "AIHTNPrimitiveTaskPlaceHolder::sBases");

	// AIHTNPrimitiveTaskPlayAnimGame
	set_name(0x1373124, "RTTI_AIHTNPrimitiveTaskPlayAnimGame");
	apply_type(0x1373124, "RTTICompound");
	del_items(0x13735f0, DELIT_SIMPLE, 8);
	apply_type(0x13735f0, "RTTIBase[1]");
	set_name(0x13735f0, "AIHTNPrimitiveTaskPlayAnimGame::sBases");

	// AIHTNPrimitiveTaskReloadWeapon
	set_name(0x135199c, "RTTI_AIHTNPrimitiveTaskReloadWeapon");
	apply_type(0x135199c, "RTTICompound");
	del_items(0x13520d0, DELIT_SIMPLE, 8);
	apply_type(0x13520d0, "RTTIBase[1]");
	set_name(0x13520d0, "AIHTNPrimitiveTaskReloadWeapon::sBases");

	// AIHTNPrimitiveTaskRemember
	set_name(0x13519f0, "RTTI_AIHTNPrimitiveTaskRemember");
	apply_type(0x13519f0, "RTTICompound");
	del_items(0x13520d8, DELIT_SIMPLE, 8);
	apply_type(0x13520d8, "RTTIBase[1]");
	set_name(0x13520d8, "AIHTNPrimitiveTaskRemember::sBases");

	// AIHTNPrimitiveTaskRememberOnFail
	set_name(0x1351a98, "RTTI_AIHTNPrimitiveTaskRememberOnFail");
	apply_type(0x1351a98, "RTTICompound");
	del_items(0x13520e8, DELIT_SIMPLE, 8);
	apply_type(0x13520e8, "RTTIBase[1]");
	set_name(0x13520e8, "AIHTNPrimitiveTaskRememberOnFail::sBases");

	// AIHTNPrimitiveTaskRequestHealing
	set_name(0x13733c4, "RTTI_AIHTNPrimitiveTaskRequestHealing");
	apply_type(0x13733c4, "RTTICompound");
	del_items(0x1373630, DELIT_SIMPLE, 8);
	apply_type(0x1373630, "RTTIBase[1]");
	set_name(0x1373630, "AIHTNPrimitiveTaskRequestHealing::sBases");

	// AIHTNPrimitiveTaskScanWaypointList
	set_name(0x1351aec, "RTTI_AIHTNPrimitiveTaskScanWaypointList");
	apply_type(0x1351aec, "RTTICompound");
	del_items(0x1351f80, DELIT_SIMPLE, 8);
	apply_type(0x1351f80, "RTTIBase[1]");
	set_name(0x1351f80, "AIHTNPrimitiveTaskScanWaypointList::sBases");

	// AIHTNPrimitiveTaskScanWaypointListLapa
	set_name(0x13731cc, "RTTI_AIHTNPrimitiveTaskScanWaypointListLapa");
	apply_type(0x13731cc, "RTTICompound");
	del_items(0x1373600, DELIT_SIMPLE, 8);
	apply_type(0x1373600, "RTTIBase[1]");
	set_name(0x1373600, "AIHTNPrimitiveTaskScanWaypointListLapa::sBases");

	// AIHTNPrimitiveTaskSelectTarget
	set_name(0x1351b40, "RTTI_AIHTNPrimitiveTaskSelectTarget");
	apply_type(0x1351b40, "RTTICompound");
	del_items(0x13520f0, DELIT_SIMPLE, 8);
	apply_type(0x13520f0, "RTTIBase[1]");
	set_name(0x13520f0, "AIHTNPrimitiveTaskSelectTarget::sBases");

	// AIHTNPrimitiveTaskSelectWeapon
	set_name(0x1351b94, "RTTI_AIHTNPrimitiveTaskSelectWeapon");
	apply_type(0x1351b94, "RTTICompound");
	del_items(0x13520f8, DELIT_SIMPLE, 8);
	apply_type(0x13520f8, "RTTIBase[1]");
	set_name(0x13520f8, "AIHTNPrimitiveTaskSelectWeapon::sBases");

	// AIHTNPrimitiveTaskSendScriptMessageGame
	set_name(0x1373648, "RTTI_AIHTNPrimitiveTaskSendScriptMessageGame");
	apply_type(0x1373648, "RTTICompound");
	del_items(0x1373ed0, DELIT_SIMPLE, 8);
	apply_type(0x1373ed0, "RTTIBase[1]");
	set_name(0x1373ed0, "AIHTNPrimitiveTaskSendScriptMessageGame::sBases");

	// AIHTNPrimitiveTaskSetAooCenter
	set_name(0x1351be8, "RTTI_AIHTNPrimitiveTaskSetAooCenter");
	apply_type(0x1351be8, "RTTICompound");
	del_items(0x1352100, DELIT_SIMPLE, 8);
	apply_type(0x1352100, "RTTIBase[1]");
	set_name(0x1352100, "AIHTNPrimitiveTaskSetAooCenter::sBases");

	// AIHTNPrimitiveTaskSetAooRadius
	set_name(0x1351c3c, "RTTI_AIHTNPrimitiveTaskSetAooRadius");
	apply_type(0x1351c3c, "RTTICompound");
	del_items(0x1352108, DELIT_SIMPLE, 8);
	apply_type(0x1352108, "RTTIBase[1]");
	set_name(0x1352108, "AIHTNPrimitiveTaskSetAooRadius::sBases");

	// AIHTNPrimitiveTaskSetAreaFilter
	set_name(0x1351c90, "RTTI_AIHTNPrimitiveTaskSetAreaFilter");
	apply_type(0x1351c90, "RTTICompound");
	del_items(0x1352110, DELIT_SIMPLE, 8);
	apply_type(0x1352110, "RTTIBase[1]");
	set_name(0x1352110, "AIHTNPrimitiveTaskSetAreaFilter::sBases");

	// AIHTNPrimitiveTaskSetDeathCamTarget
	set_name(0x137369c, "RTTI_AIHTNPrimitiveTaskSetDeathCamTarget");
	apply_type(0x137369c, "RTTICompound");
	del_items(0x1373ed8, DELIT_SIMPLE, 8);
	apply_type(0x1373ed8, "RTTIBase[1]");
	set_name(0x1373ed8, "AIHTNPrimitiveTaskSetDeathCamTarget::sBases");

	// AIHTNPrimitiveTaskSetLockUser
	set_name(0x1373178, "RTTI_AIHTNPrimitiveTaskSetLockUser");
	apply_type(0x1373178, "RTTICompound");
	del_items(0x13735f8, DELIT_SIMPLE, 8);
	apply_type(0x13735f8, "RTTIBase[1]");
	set_name(0x13735f8, "AIHTNPrimitiveTaskSetLockUser::sBases");

	// AIHTNPrimitiveTaskSetSuppressionLevel
	set_name(0x1351ce4, "RTTI_AIHTNPrimitiveTaskSetSuppressionLevel");
	apply_type(0x1351ce4, "RTTICompound");
	del_items(0x1352118, DELIT_SIMPLE, 8);
	apply_type(0x1352118, "RTTIBase[1]");
	set_name(0x1352118, "AIHTNPrimitiveTaskSetSuppressionLevel::sBases");

	// AIHTNPrimitiveTaskSignal
	set_name(0x1351d38, "RTTI_AIHTNPrimitiveTaskSignal");
	apply_type(0x1351d38, "RTTICompound");
	del_items(0x1352120, DELIT_SIMPLE, 8);
	apply_type(0x1352120, "RTTIBase[1]");
	set_name(0x1352120, "AIHTNPrimitiveTaskSignal::sBases");

	// AIHTNPrimitiveTaskSignalSuppression
	set_name(0x1351d8c, "RTTI_AIHTNPrimitiveTaskSignalSuppression");
	apply_type(0x1351d8c, "RTTICompound");
	del_items(0x1352128, DELIT_SIMPLE, 8);
	apply_type(0x1352128, "RTTIBase[1]");
	set_name(0x1352128, "AIHTNPrimitiveTaskSignalSuppression::sBases");

	// AIHTNPrimitiveTaskSquad
	set_name(0x1350f70, "RTTI_AIHTNPrimitiveTaskSquad");
	apply_type(0x1350f70, "RTTICompound");
	del_items(0x1351f68, DELIT_SIMPLE, 8);
	apply_type(0x1351f68, "RTTIBase[1]");
	set_name(0x1351f68, "AIHTNPrimitiveTaskSquad::sBases");

	// AIHTNPrimitiveTaskSquadForget
	set_name(0x1351600, "RTTI_AIHTNPrimitiveTaskSquadForget");
	apply_type(0x1351600, "RTTICompound");
	del_items(0x1352080, DELIT_SIMPLE, 8);
	apply_type(0x1352080, "RTTIBase[1]");
	set_name(0x1352080, "AIHTNPrimitiveTaskSquadForget::sBases");

	// AIHTNPrimitiveTaskSquadMemberMessage
	set_name(0x1351de0, "RTTI_AIHTNPrimitiveTaskSquadMemberMessage");
	apply_type(0x1351de0, "RTTICompound");
	del_items(0x1352130, DELIT_SIMPLE, 8);
	apply_type(0x1352130, "RTTIBase[1]");
	set_name(0x1352130, "AIHTNPrimitiveTaskSquadMemberMessage::sBases");

	// AIHTNPrimitiveTaskSquadOrder
	set_name(0x1352528, "RTTI_AIHTNPrimitiveTaskSquadOrder");
	apply_type(0x1352528, "RTTICompound");
	del_items(0x1352a68, DELIT_SIMPLE, 8);
	apply_type(0x1352a68, "RTTIBase[1]");
	set_name(0x1352a68, "AIHTNPrimitiveTaskSquadOrder::sBases");

	// AIHTNPrimitiveTaskSquadOrderCustom
	set_name(0x135257c, "RTTI_AIHTNPrimitiveTaskSquadOrderCustom");
	apply_type(0x135257c, "RTTICompound");
	del_items(0x1352a70, DELIT_SIMPLE, 8);
	apply_type(0x1352a70, "RTTIBase[1]");
	set_name(0x1352a70, "AIHTNPrimitiveTaskSquadOrderCustom::sBases");

	// AIHTNPrimitiveTaskSquadRemember
	set_name(0x1351a44, "RTTI_AIHTNPrimitiveTaskSquadRemember");
	apply_type(0x1351a44, "RTTICompound");
	del_items(0x13520e0, DELIT_SIMPLE, 8);
	apply_type(0x13520e0, "RTTIBase[1]");
	set_name(0x13520e0, "AIHTNPrimitiveTaskSquadRemember::sBases");

	// AIHTNPrimitiveTaskStaggerFire
	set_name(0x1373220, "RTTI_AIHTNPrimitiveTaskStaggerFire");
	apply_type(0x1373220, "RTTICompound");
	del_items(0x1373608, DELIT_SIMPLE, 8);
	apply_type(0x1373608, "RTTIBase[1]");
	set_name(0x1373608, "AIHTNPrimitiveTaskStaggerFire::sBases");

	// AIHTNPrimitiveTaskStartCommandSequence
	set_name(0x1351e34, "RTTI_AIHTNPrimitiveTaskStartCommandSequence");
	apply_type(0x1351e34, "RTTICompound");
	del_items(0x1352138, DELIT_SIMPLE, 8);
	apply_type(0x1352138, "RTTIBase[1]");
	set_name(0x1352138, "AIHTNPrimitiveTaskStartCommandSequence::sBases");

	// AIHTNPrimitiveTaskStayInCover
	set_name(0x1351e88, "RTTI_AIHTNPrimitiveTaskStayInCover");
	apply_type(0x1351e88, "RTTICompound");
	del_items(0x1352140, DELIT_SIMPLE, 8);
	apply_type(0x1352140, "RTTIBase[1]");
	set_name(0x1352140, "AIHTNPrimitiveTaskStayInCover::sBases");

	// AIHTNPrimitiveTaskStepAside
	set_name(0x1351edc, "RTTI_AIHTNPrimitiveTaskStepAside");
	apply_type(0x1351edc, "RTTICompound");
	del_items(0x1352148, DELIT_SIMPLE, 8);
	apply_type(0x1352148, "RTTIBase[1]");
	set_name(0x1352148, "AIHTNPrimitiveTaskStepAside::sBases");

	// AIHTNPrimitiveTaskSuppressWaypointList
	set_name(0x1352234, "RTTI_AIHTNPrimitiveTaskSuppressWaypointList");
	apply_type(0x1352234, "RTTICompound");
	del_items(0x1352a10, DELIT_SIMPLE, 8);
	apply_type(0x1352a10, "RTTIBase[1]");
	set_name(0x1352a10, "AIHTNPrimitiveTaskSuppressWaypointList::sBases");

	// AIHTNPrimitiveTaskTeleport
	set_name(0x1373274, "RTTI_AIHTNPrimitiveTaskTeleport");
	apply_type(0x1373274, "RTTICompound");
	del_items(0x1373610, DELIT_SIMPLE, 8);
	apply_type(0x1373610, "RTTIBase[1]");
	set_name(0x1373610, "AIHTNPrimitiveTaskTeleport::sBases");

	// AIHTNPrimitiveTaskThrowGrenade
	set_name(0x1373418, "RTTI_AIHTNPrimitiveTaskThrowGrenade");
	apply_type(0x1373418, "RTTICompound");
	del_items(0x1373638, DELIT_SIMPLE, 8);
	apply_type(0x1373638, "RTTIBase[1]");
	set_name(0x1373638, "AIHTNPrimitiveTaskThrowGrenade::sBases");

	// AIHTNPrimitiveTaskUseAttachableObject
	set_name(0x1352288, "RTTI_AIHTNPrimitiveTaskUseAttachableObject");
	apply_type(0x1352288, "RTTICompound");
	del_items(0x1352a28, DELIT_SIMPLE, 8);
	apply_type(0x1352a28, "RTTIBase[1]");
	set_name(0x1352a28, "AIHTNPrimitiveTaskUseAttachableObject::sBases");

	// AIHTNPrimitiveTaskUseInventoryItem
	set_name(0x13732c8, "RTTI_AIHTNPrimitiveTaskUseInventoryItem");
	apply_type(0x13732c8, "RTTICompound");
	del_items(0x1373618, DELIT_SIMPLE, 8);
	apply_type(0x1373618, "RTTIBase[1]");
	set_name(0x1373618, "AIHTNPrimitiveTaskUseInventoryItem::sBases");

	// AIHTNPrimitiveTaskUseItemOnEntity
	set_name(0x13522dc, "RTTI_AIHTNPrimitiveTaskUseItemOnEntity");
	apply_type(0x13522dc, "RTTICompound");
	del_items(0x1352a30, DELIT_SIMPLE, 8);
	apply_type(0x1352a30, "RTTIBase[1]");
	set_name(0x1352a30, "AIHTNPrimitiveTaskUseItemOnEntity::sBases");

	// AIHTNPrimitiveTaskUseJetpack
	set_name(0x137346c, "RTTI_AIHTNPrimitiveTaskUseJetpack");
	apply_type(0x137346c, "RTTICompound");
	del_items(0x1373640, DELIT_SIMPLE, 8);
	apply_type(0x1373640, "RTTIBase[1]");
	set_name(0x1373640, "AIHTNPrimitiveTaskUseJetpack::sBases");

	// AIHTNPrimitiveTaskUseOrderedObject
	set_name(0x1352330, "RTTI_AIHTNPrimitiveTaskUseOrderedObject");
	apply_type(0x1352330, "RTTICompound");
	del_items(0x1352a38, DELIT_SIMPLE, 8);
	apply_type(0x1352a38, "RTTIBase[1]");
	set_name(0x1352a38, "AIHTNPrimitiveTaskUseOrderedObject::sBases");

	// AIHTNPrimitiveTaskUseOrderedObjects
	set_name(0x1352384, "RTTI_AIHTNPrimitiveTaskUseOrderedObjects");
	apply_type(0x1352384, "RTTICompound");
	del_items(0x1352a40, DELIT_SIMPLE, 8);
	apply_type(0x1352a40, "RTTIBase[1]");
	set_name(0x1352a40, "AIHTNPrimitiveTaskUseOrderedObjects::sBases");

	// AIHTNPrimitiveTaskWait
	set_name(0x13523d8, "RTTI_AIHTNPrimitiveTaskWait");
	apply_type(0x13523d8, "RTTICompound");
	del_items(0x1352a48, DELIT_SIMPLE, 8);
	apply_type(0x1352a48, "RTTIBase[1]");
	set_name(0x1352a48, "AIHTNPrimitiveTaskWait::sBases");

	// AIHTNPrimitiveTaskWalk
	set_name(0x135242c, "RTTI_AIHTNPrimitiveTaskWalk");
	apply_type(0x135242c, "RTTICompound");
	del_items(0x1352a58, DELIT_SIMPLE, 8);
	apply_type(0x1352a58, "RTTIBase[1]");
	set_name(0x1352a58, "AIHTNPrimitiveTaskWalk::sBases");

	// AIHTNPrimitiveTaskWalkSegment
	set_name(0x1352480, "RTTI_AIHTNPrimitiveTaskWalkSegment");
	apply_type(0x1352480, "RTTICompound");
	del_items(0x1352a50, DELIT_SIMPLE, 8);
	apply_type(0x1352a50, "RTTIBase[1]");
	set_name(0x1352a50, "AIHTNPrimitiveTaskWalkSegment::sBases");

	// AIHTNPrimitiveTaskWalkToCloseCombat
	set_name(0x137331c, "RTTI_AIHTNPrimitiveTaskWalkToCloseCombat");
	apply_type(0x137331c, "RTTICompound");
	del_items(0x1373620, DELIT_SIMPLE, 8);
	apply_type(0x1373620, "RTTIBase[1]");
	set_name(0x1373620, "AIHTNPrimitiveTaskWalkToCloseCombat::sBases");

	// AIHTNPrimitiveTaskWalkToUseLocationSegment
	set_name(0x13524d4, "RTTI_AIHTNPrimitiveTaskWalkToUseLocationSegment");
	apply_type(0x13524d4, "RTTICompound");
	del_items(0x1352a60, DELIT_SIMPLE, 8);
	apply_type(0x1352a60, "RTTIBase[1]");
	set_name(0x1352a60, "AIHTNPrimitiveTaskWalkToUseLocationSegment::sBases");

	// AIHintToContextMapping
	set_name(0x134bf84, "RTTI_AIHintToContextMapping");
	apply_type(0x134bf84, "RTTICompound");
	del_items(0x134e750, DELIT_SIMPLE, 56);
	apply_type(0x134e750, "RTTIAttr[2]");
	set_name(0x134e750, "AIHintToContextMapping::sAttrs");

	// AIHtnPlannerDaemonFindWanderLocation
	set_name(0x1350ad8, "RTTI_AIHtnPlannerDaemonFindWanderLocation");
	apply_type(0x1350ad8, "RTTICompound");
	del_items(0x1351f90, DELIT_SIMPLE, 8);
	apply_type(0x1351f90, "RTTIBase[1]");
	set_name(0x1351f90, "AIHtnPlannerDaemonFindWanderLocation::sBases");

	// AIHtnPlannerDaemonIndividualCallTerms
	set_name(0x135064c, "RTTI_AIHtnPlannerDaemonIndividualCallTerms");
	apply_type(0x135064c, "RTTICompound");
	del_items(0x13508d8, DELIT_SIMPLE, 8);
	apply_type(0x13508d8, "RTTIBase[1]");
	set_name(0x13508d8, "AIHtnPlannerDaemonIndividualCallTerms::sBases");

	// AIHtnPlannerDaemonUtilityCallTerms
	set_name(0x13502a0, "RTTI_AIHtnPlannerDaemonUtilityCallTerms");
	apply_type(0x13502a0, "RTTICompound");
	del_items(0x13507b8, DELIT_SIMPLE, 8);
	apply_type(0x13507b8, "RTTIBase[1]");
	set_name(0x13507b8, "AIHtnPlannerDaemonUtilityCallTerms::sBases");

	// AIHtnPlannerDaemonUtilityCallTermsGame
	set_name(0x13724a8, "RTTI_AIHtnPlannerDaemonUtilityCallTermsGame");
	apply_type(0x13724a8, "RTTICompound");
	del_items(0x13734c0, DELIT_SIMPLE, 8);
	apply_type(0x13734c0, "RTTIBase[1]");
	set_name(0x13734c0, "AIHtnPlannerDaemonUtilityCallTermsGame::sBases");

	// AIIdleObject
	set_name(0x134b4cc, "RTTI_AIIdleObject");
	apply_type(0x134b4cc, "RTTICompound");

	// AIIndividual
	set_name(0x134b524, "RTTI_AIIndividual");
	apply_type(0x134b524, "RTTICompound");
	del_items(0x134cda8, DELIT_SIMPLE, 8);
	apply_type(0x134cda8, "RTTIBase[1]");
	set_name(0x134cda8, "AIIndividual::sBases");

	// AIIndividualConfig
	set_name(0x134bfe8, "RTTI_AIIndividualConfig");
	apply_type(0x134bfe8, "RTTICompound");
	del_items(0x134cdb0, DELIT_SIMPLE, 8);
	apply_type(0x134cdb0, "RTTIBase[1]");
	set_name(0x134cdb0, "AIIndividualConfig::sBases");
	del_items(0x134cdb8, DELIT_SIMPLE, 1344);
	apply_type(0x134cdb8, "RTTIAttr[48]");
	set_name(0x134cdb8, "AIIndividualConfig::sAttrs");

	// AIIndividualConfigGame
	set_name(0x13715ec, "RTTI_AIIndividualConfigGame");
	apply_type(0x13715ec, "RTTICompound");
	del_items(0x1371fb8, DELIT_SIMPLE, 8);
	apply_type(0x1371fb8, "RTTIBase[1]");
	set_name(0x1371fb8, "AIIndividualConfigGame::sBases");
	del_items(0x1371fc0, DELIT_SIMPLE, 364);
	apply_type(0x1371fc0, "RTTIAttr[13]");
	set_name(0x1371fc0, "AIIndividualConfigGame::sAttrs");

	// AIIndividualHook
	set_name(0x134c03c, "RTTI_AIIndividualHook");
	apply_type(0x134c03c, "RTTICompound");
	del_items(0x134d5fc, DELIT_SIMPLE, 8);
	apply_type(0x134d5fc, "RTTIBase[1]");
	set_name(0x134d5fc, "AIIndividualHook::sBases");

	// AIIndividualHookHtnPlanner
	set_name(0x1350358, "RTTI_AIIndividualHookHtnPlanner");
	apply_type(0x1350358, "RTTICompound");
	del_items(0x1350878, DELIT_SIMPLE, 8);
	apply_type(0x1350878, "RTTIBase[1]");
	set_name(0x1350878, "AIIndividualHookHtnPlanner::sBases");

	// AIIndividualHookHtnPlannerResource
	set_name(0x13503ac, "RTTI_AIIndividualHookHtnPlannerResource");
	apply_type(0x13503ac, "RTTICompound");
	del_items(0x1350838, DELIT_SIMPLE, 8);
	apply_type(0x1350838, "RTTIBase[1]");
	set_name(0x1350838, "AIIndividualHookHtnPlannerResource::sBases");
	del_items(0x1350840, DELIT_SIMPLE, 56);
	apply_type(0x1350840, "RTTIAttr[2]");
	set_name(0x1350840, "AIIndividualHookHtnPlannerResource::sAttrs");

	// AIIndividualHookResource
	set_name(0x134c0a0, "RTTI_AIIndividualHookResource");
	apply_type(0x134c0a0, "RTTICompound");
	del_items(0x134d604, DELIT_SIMPLE, 8);
	apply_type(0x134d604, "RTTIBase[1]");
	set_name(0x134d604, "AIIndividualHookResource::sBases");

	// AIIndividualResource
	set_name(0x134c0f4, "RTTI_AIIndividualResource");
	apply_type(0x134c0f4, "RTTICompound");
	del_items(0x134cb8c, DELIT_SIMPLE, 8);
	apply_type(0x134cb8c, "RTTIBase[1]");
	set_name(0x134cb8c, "AIIndividualResource::sBases");
	del_items(0x134cb94, DELIT_SIMPLE, 532);
	apply_type(0x134cb94, "RTTIAttr[19]");
	set_name(0x134cb94, "AIIndividualResource::sAttrs");

	// AIInventoryAmmoEjectorInterface
	set_name(0x1375eb0, "RTTI_AIInventoryAmmoEjectorInterface");
	apply_type(0x1375eb0, "RTTICompound");
	del_items(0x13773b4, DELIT_SIMPLE, 8);
	apply_type(0x13773b4, "RTTIBase[1]");
	set_name(0x13773b4, "AIInventoryAmmoEjectorInterface::sBases");

	// AIInventoryBadgeAbilityInterface
	set_name(0x1375f58, "RTTI_AIInventoryBadgeAbilityInterface");
	apply_type(0x1375f58, "RTTICompound");
	del_items(0x13773c4, DELIT_SIMPLE, 8);
	apply_type(0x13773c4, "RTTIBase[1]");
	set_name(0x13773c4, "AIInventoryBadgeAbilityInterface::sBases");

	// AIInventoryPlaceableInterface
	set_name(0x1375a4c, "RTTI_AIInventoryPlaceableInterface");
	apply_type(0x1375a4c, "RTTICompound");
	del_items(0x1375ea0, DELIT_SIMPLE, 8);
	apply_type(0x1375ea0, "RTTIBase[1]");
	set_name(0x1375ea0, "AIInventoryPlaceableInterface::sBases");

	// AIInventoryRocketLauncherInterface
	set_name(0x1375aa0, "RTTI_AIInventoryRocketLauncherInterface");
	apply_type(0x1375aa0, "RTTICompound");
	del_items(0x1375ea8, DELIT_SIMPLE, 8);
	apply_type(0x1375ea8, "RTTIBase[1]");
	set_name(0x1375ea8, "AIInventoryRocketLauncherInterface::sBases");

	// AIInventoryThrowableInterface
	set_name(0x1375f04, "RTTI_AIInventoryThrowableInterface");
	apply_type(0x1375f04, "RTTICompound");
	del_items(0x13773bc, DELIT_SIMPLE, 8);
	apply_type(0x13773bc, "RTTIBase[1]");
	set_name(0x13773bc, "AIInventoryThrowableInterface::sBases");

	// AIInventoryWeaponInterface
	set_name(0x1375950, "RTTI_AIInventoryWeaponInterface");
	apply_type(0x1375950, "RTTICompound");
	del_items(0x1375b04, DELIT_SIMPLE, 8);
	apply_type(0x1375b04, "RTTIBase[1]");
	set_name(0x1375b04, "AIInventoryWeaponInterface::sBases");

	// AILinkTypeInfo
	set_name(0x1352c80, "RTTI_AILinkTypeInfo");
	apply_type(0x1352c80, "RTTICompound");
	del_items(0x1355090, DELIT_SIMPLE, 8);
	apply_type(0x1355090, "RTTIBase[1]");
	set_name(0x1355090, "AILinkTypeInfo::sBases");

	// AILinkTypeInfoJump
	set_name(0x1352d28, "RTTI_AILinkTypeInfoJump");
	apply_type(0x1352d28, "RTTICompound");
	del_items(0x13550d8, DELIT_SIMPLE, 8);
	apply_type(0x13550d8, "RTTIBase[1]");
	set_name(0x13550d8, "AILinkTypeInfoJump::sBases");
	del_items(0x13550e0, DELIT_SIMPLE, 28);
	apply_type(0x13550e0, "RTTIAttr[1]");
	set_name(0x13550e0, "AILinkTypeInfoJump::sAttrs");

	// AILinkTypeInfoSpecialObject
	set_name(0x1352cd4, "RTTI_AILinkTypeInfoSpecialObject");
	apply_type(0x1352cd4, "RTTICompound");
	del_items(0x1355098, DELIT_SIMPLE, 8);
	apply_type(0x1355098, "RTTIBase[1]");
	set_name(0x1355098, "AILinkTypeInfoSpecialObject::sBases");
	del_items(0x13550a0, DELIT_SIMPLE, 56);
	apply_type(0x13550a0, "RTTIAttr[2]");
	set_name(0x13550a0, "AILinkTypeInfoSpecialObject::sAttrs");

	// AIManager
	set_name(0x134b5e4, "RTTI_AIManager");
	apply_type(0x134b5e4, "RTTICompound");
	del_items(0x134d4e0, DELIT_SIMPLE, 8);
	apply_type(0x134d4e0, "RTTIBase[1]");
	set_name(0x134d4e0, "AIManager::sBases");
	del_items(0x134d4e8, DELIT_SIMPLE, 264);
	apply_type(0x134d4e8, "RTTIFunction[11]");
	set_name(0x134d4e8, "AIManager::sFunctions");
	del_items(0x134d5f0, DELIT_SIMPLE, 12);
	apply_type(0x134d5f0, "RTTIMessageHandler[1]");
	set_name(0x134d5f0, "AIManager::sMessageHandlers");

	// AIManagerGame
	set_name(0x1371644, "RTTI_AIManagerGame");
	apply_type(0x1371644, "RTTICompound");
	del_items(0x1371f80, DELIT_SIMPLE, 8);
	apply_type(0x1371f80, "RTTIBase[1]");
	set_name(0x1371f80, "AIManagerGame::sBases");
	del_items(0x1371f88, DELIT_SIMPLE, 48);
	apply_type(0x1371f88, "RTTIFunction[2]");
	set_name(0x1371f88, "AIManagerGame::sFunctions");

	// AIMarker
	set_name(0x134b91c, "RTTI_AIMarker");
	apply_type(0x134b91c, "RTTICompound");
	del_items(0x134c808, DELIT_SIMPLE, 8);
	apply_type(0x134c808, "RTTIBase[1]");
	set_name(0x134c808, "AIMarker::sBases");
	del_items(0x134c810, DELIT_SIMPLE, 168);
	apply_type(0x134c810, "RTTIAttr[6]");
	set_name(0x134c810, "AIMarker::sAttrs");

	// AIMarkerLocatorInstance
	set_name(0x139a29c, "RTTI_AIMarkerLocatorInstance");
	apply_type(0x139a29c, "RTTICompound");
	del_items(0x139bad4, DELIT_SIMPLE, 8);
	apply_type(0x139bad4, "RTTIBase[1]");
	set_name(0x139bad4, "AIMarkerLocatorInstance::sBases");

	// AIMarkerLocatorResource
	set_name(0x139a248, "RTTI_AIMarkerLocatorResource");
	apply_type(0x139a248, "RTTICompound");
	del_items(0x139ba78, DELIT_SIMPLE, 8);
	apply_type(0x139ba78, "RTTIBase[1]");
	set_name(0x139ba78, "AIMarkerLocatorResource::sBases");
	del_items(0x139ba80, DELIT_SIMPLE, 84);
	apply_type(0x139ba80, "RTTIAttr[3]");
	set_name(0x139ba80, "AIMarkerLocatorResource::sAttrs");

	// AIMountableObject
	set_name(0x134b970, "RTTI_AIMountableObject");
	apply_type(0x134b970, "RTTICompound");

	// AIMountedGunInterface
	set_name(0x13759a4, "RTTI_AIMountedGunInterface");
	apply_type(0x13759a4, "RTTICompound");
	del_items(0x1375e90, DELIT_SIMPLE, 8);
	apply_type(0x1375e90, "RTTIBase[1]");
	set_name(0x1375e90, "AIMountedGunInterface::sBases");

	// AINearestWaypoint
	set_name(0x1352df0, "RTTI_AINearestWaypoint");
	apply_type(0x1352df0, "RTTICompound");
	del_items(0x1354f40, DELIT_SIMPLE, 8);
	apply_type(0x1354f40, "RTTIBase[1]");
	set_name(0x1354f40, "AINearestWaypoint::sBases");
	del_items(0x1354f48, DELIT_SIMPLE, 56);
	apply_type(0x1354f48, "RTTIAttr[2]");
	set_name(0x1354f48, "AINearestWaypoint::sAttrs");

	// AINullWeaponInterface
	set_name(0x13759f8, "RTTI_AINullWeaponInterface");
	apply_type(0x13759f8, "RTTICompound");
	del_items(0x1375e98, DELIT_SIMPLE, 8);
	apply_type(0x1375e98, "RTTIBase[1]");
	set_name(0x1375e98, "AINullWeaponInterface::sBases");

	// AIObstacleAvoidanceCostsLookup
	set_name(0x1352d8c, "RTTI_AIObstacleAvoidanceCostsLookup");
	apply_type(0x1352d8c, "RTTICompound");
	del_items(0x1353a44, DELIT_SIMPLE, 56);
	apply_type(0x1353a44, "RTTIAttr[2]");
	set_name(0x1353a44, "AIObstacleAvoidanceCostsLookup::sAttrs");

	// AIParameterId
	set_name(0x134b07c, "RTTI_AIParameterId");
	apply_type(0x134b07c, "RTTICompound");
	del_items(0x134c8bc, DELIT_SIMPLE, 56);
	apply_type(0x134c8bc, "RTTIAttr[2]");
	set_name(0x134c8bc, "AIParameterId::sAttrs");

	// AIPerception
	set_name(0x134b9d8, "RTTI_AIPerception");
	apply_type(0x134b9d8, "RTTICompound");
	del_items(0x134d710, DELIT_SIMPLE, 8);
	apply_type(0x134d710, "RTTIBase[1]");
	set_name(0x134d710, "AIPerception::sBases");
	del_items(0x134d718, DELIT_SIMPLE, 812);
	apply_type(0x134d718, "RTTIAttr[29]");
	set_name(0x134d718, "AIPerception::sAttrs");
	del_items(0x134da44, DELIT_SIMPLE, 12);
	apply_type(0x134da44, "RTTIMessageHandler[1]");
	set_name(0x134da44, "AIPerception::sMessageHandlers");

	// AIPersonalSpacePositionPickerSettings
	set_name(0x1352e44, "RTTI_AIPersonalSpacePositionPickerSettings");
	apply_type(0x1352e44, "RTTICompound");
	del_items(0x135405c, DELIT_SIMPLE, 224);
	apply_type(0x135405c, "RTTIAttr[8]");
	set_name(0x135405c, "AIPersonalSpacePositionPickerSettings::sAttrs");

	// AIPlayerBehaviorCategories
	set_name(0x13526e0, "RTTI_AIPlayerBehaviorCategories");
	apply_type(0x13526e0, "RTTICompound");
	del_items(0x1352ad0, DELIT_SIMPLE, 8);
	apply_type(0x1352ad0, "RTTIBase[1]");
	set_name(0x1352ad0, "AIPlayerBehaviorCategories::sBases");
	del_items(0x1352ad8, DELIT_SIMPLE, 56);
	apply_type(0x1352ad8, "RTTIAttr[2]");
	set_name(0x1352ad8, "AIPlayerBehaviorCategories::sAttrs");
	del_items(0x1352b10, DELIT_SIMPLE, 12);
	apply_type(0x1352b10, "RTTIMessageHandler[1]");
	set_name(0x1352b10, "AIPlayerBehaviorCategories::sMessageHandlers");

	// AIPlayerBehaviorCategory
	set_name(0x135268c, "RTTI_AIPlayerBehaviorCategory");
	apply_type(0x135268c, "RTTICompound");
	del_items(0x1352a7c, DELIT_SIMPLE, 84);
	apply_type(0x1352a7c, "RTTIAttr[3]");
	set_name(0x1352a7c, "AIPlayerBehaviorCategory::sAttrs");

	// AIPlayerPerformanceFeedbackResource
	set_name(0x1371968, "RTTI_AIPlayerPerformanceFeedbackResource");
	apply_type(0x1371968, "RTTICompound");
	del_items(0x13721fc, DELIT_SIMPLE, 8);
	apply_type(0x13721fc, "RTTIBase[1]");
	set_name(0x13721fc, "AIPlayerPerformanceFeedbackResource::sBases");
	del_items(0x1372204, DELIT_SIMPLE, 588);
	apply_type(0x1372204, "RTTIAttr[21]");
	set_name(0x1372204, "AIPlayerPerformanceFeedbackResource::sAttrs");

	// AIPlayerSquadGame
	set_name(0x13719bc, "RTTI_AIPlayerSquadGame");
	apply_type(0x13719bc, "RTTICompound");
	del_items(0x13721f4, DELIT_SIMPLE, 8);
	apply_type(0x13721f4, "RTTIBase[1]");
	set_name(0x13721f4, "AIPlayerSquadGame::sBases");

	// AIPositionPickerResource
	set_name(0x1352eb8, "RTTI_AIPositionPickerResource");
	apply_type(0x1352eb8, "RTTICompound");
	del_items(0x135413c, DELIT_SIMPLE, 8);
	apply_type(0x135413c, "RTTIBase[1]");
	set_name(0x135413c, "AIPositionPickerResource::sBases");
	del_items(0x1354144, DELIT_SIMPLE, 3248);
	apply_type(0x1354144, "RTTIAttr[116]");
	set_name(0x1354144, "AIPositionPickerResource::sAttrs");
	del_items(0x1354df4, DELIT_SIMPLE, 12);
	apply_type(0x1354df4, "RTTIMessageHandler[1]");
	set_name(0x1354df4, "AIPositionPickerResource::sMessageHandlers");

	// AIPursuePositionPickerResource
	set_name(0x135306c, "RTTI_AIPursuePositionPickerResource");
	apply_type(0x135306c, "RTTICompound");
	del_items(0x1354e3c, DELIT_SIMPLE, 8);
	apply_type(0x1354e3c, "RTTIBase[1]");
	set_name(0x1354e3c, "AIPursuePositionPickerResource::sBases");

	// AIReservedObject
	set_name(0x134ba2c, "RTTI_AIReservedObject");
	apply_type(0x134ba2c, "RTTICompound");

	// AIScanContextResource
	set_name(0x134c158, "RTTI_AIScanContextResource");
	apply_type(0x134c158, "RTTICompound");
	del_items(0x134e56c, DELIT_SIMPLE, 8);
	apply_type(0x134e56c, "RTTIBase[1]");
	set_name(0x134e56c, "AIScanContextResource::sBases");
	del_items(0x134e574, DELIT_SIMPLE, 476);
	apply_type(0x134e574, "RTTIAttr[17]");
	set_name(0x134e574, "AIScanContextResource::sAttrs");

	// AISearchPositionPickerResource
	set_name(0x13530c0, "RTTI_AISearchPositionPickerResource");
	apply_type(0x13530c0, "RTTICompound");
	del_items(0x1354e44, DELIT_SIMPLE, 8);
	apply_type(0x1354e44, "RTTIBase[1]");
	set_name(0x1354e44, "AISearchPositionPickerResource::sBases");

	// AISectors16
	set_name(0x134ba80, "RTTI_AISectors16");
	apply_type(0x134ba80, "RTTICompound");
	del_items(0x134e090, DELIT_SIMPLE, 28);
	apply_type(0x134e090, "RTTIAttr[1]");
	set_name(0x134e090, "AISectors16::sAttrs");

	// AISequencedAimRow
	set_name(0x134bae4, "RTTI_AISequencedAimRow");
	apply_type(0x134bae4, "RTTICompound");
	del_items(0x134e0b4, DELIT_SIMPLE, 112);
	apply_type(0x134e0b4, "RTTIAttr[4]");
	set_name(0x134e0b4, "AISequencedAimRow::sAttrs");

	// AISequencedWeaponOperationInstance
	set_name(0x134bb8c, "RTTI_AISequencedWeaponOperationInstance");
	apply_type(0x134bb8c, "RTTICompound");
	del_items(0x134e1e0, DELIT_SIMPLE, 8);
	apply_type(0x134e1e0, "RTTIBase[1]");
	set_name(0x134e1e0, "AISequencedWeaponOperationInstance::sBases");

	// AISequencedWeaponOperationResource
	set_name(0x134bb38, "RTTI_AISequencedWeaponOperationResource");
	apply_type(0x134bb38, "RTTICompound");
	del_items(0x134e124, DELIT_SIMPLE, 8);
	apply_type(0x134e124, "RTTIBase[1]");
	set_name(0x134e124, "AISequencedWeaponOperationResource::sBases");
	del_items(0x134e12c, DELIT_SIMPLE, 168);
	apply_type(0x134e12c, "RTTIAttr[6]");
	set_name(0x134e12c, "AISequencedWeaponOperationResource::sAttrs");
	del_items(0x134e1d4, DELIT_SIMPLE, 12);
	apply_type(0x134e1d4, "RTTIMessageHandler[1]");
	set_name(0x134e1d4, "AISequencedWeaponOperationResource::sMessageHandlers");

	// AISignalManager
	set_name(0x134bc54, "RTTI_AISignalManager");
	apply_type(0x134bc54, "RTTICompound");
	del_items(0x134c5e8, DELIT_SIMPLE, 8);
	apply_type(0x134c5e8, "RTTIBase[1]");
	set_name(0x134c5e8, "AISignalManager::sBases");

	// AISignalType
	set_name(0x134bc00, "RTTI_AISignalType");
	apply_type(0x134bc00, "RTTICompound");
	del_items(0x134c2b8, DELIT_SIMPLE, 8);
	apply_type(0x134c2b8, "RTTIBase[1]");
	set_name(0x134c2b8, "AISignalType::sBases");
	del_items(0x134c2c0, DELIT_SIMPLE, 700);
	apply_type(0x134c2c0, "RTTIAttr[25]");
	set_name(0x134c2c0, "AISignalType::sAttrs");
	del_items(0x134c57c, DELIT_SIMPLE, 96);
	apply_type(0x134c57c, "RTTIFunction[4]");
	set_name(0x134c57c, "AISignalType::sFunctions");
	del_items(0x134c5dc, DELIT_SIMPLE, 12);
	apply_type(0x134c5dc, "RTTIMessageHandler[1]");
	set_name(0x134c5dc, "AISignalType::sMessageHandlers");

	// AISkillAimAt
	set_name(0x134f14c, "RTTI_AISkillAimAt");
	apply_type(0x134f14c, "RTTICompound");
	del_items(0x134fa10, DELIT_SIMPLE, 8);
	apply_type(0x134fa10, "RTTIBase[1]");
	set_name(0x134fa10, "AISkillAimAt::sBases");

	// AISkillAimGame
	set_name(0x1373990, "RTTI_AISkillAimGame");
	apply_type(0x1373990, "RTTICompound");
	del_items(0x1373f20, DELIT_SIMPLE, 8);
	apply_type(0x1373f20, "RTTIBase[1]");
	set_name(0x1373f20, "AISkillAimGame::sBases");

	// AISkillAimTurnOnSpot
	set_name(0x13739e4, "RTTI_AISkillAimTurnOnSpot");
	apply_type(0x13739e4, "RTTICompound");
	del_items(0x1373f28, DELIT_SIMPLE, 8);
	apply_type(0x1373f28, "RTTIBase[1]");
	set_name(0x1373f28, "AISkillAimTurnOnSpot::sBases");

	// AISkillAimTurnOnSpotAirVehicle
	set_name(0x13749d4, "RTTI_AISkillAimTurnOnSpotAirVehicle");
	apply_type(0x13749d4, "RTTICompound");
	del_items(0x1375b3c, DELIT_SIMPLE, 8);
	apply_type(0x1375b3c, "RTTIBase[1]");
	set_name(0x1375b3c, "AISkillAimTurnOnSpotAirVehicle::sBases");

	// AISkillAimTurnTroopCarrier
	set_name(0x1374b24, "RTTI_AISkillAimTurnTroopCarrier");
	apply_type(0x1374b24, "RTTICompound");
	del_items(0x1375b5c, DELIT_SIMPLE, 8);
	apply_type(0x1375b5c, "RTTIBase[1]");
	set_name(0x1375b5c, "AISkillAimTurnTroopCarrier::sBases");

	// AISkillBase
	set_name(0x134f1a0, "RTTI_AISkillBase");
	apply_type(0x134f1a0, "RTTICompound");
	del_items(0x134f82c, DELIT_SIMPLE, 8);
	apply_type(0x134f82c, "RTTIBase[1]");
	set_name(0x134f82c, "AISkillBase::sBases");

	// AISkillChangeCarry
	set_name(0x1374788, "RTTI_AISkillChangeCarry");
	apply_type(0x1374788, "RTTICompound");
	del_items(0x1375af4, DELIT_SIMPLE, 8);
	apply_type(0x1375af4, "RTTIBase[1]");
	set_name(0x1375af4, "AISkillChangeCarry::sBases");

	// AISkillCloseCombat
	set_name(0x13747dc, "RTTI_AISkillCloseCombat");
	apply_type(0x13747dc, "RTTICompound");
	del_items(0x1375afc, DELIT_SIMPLE, 8);
	apply_type(0x1375afc, "RTTIBase[1]");
	set_name(0x1375afc, "AISkillCloseCombat::sBases");

	// AISkillCoverMountedGun
	set_name(0x1373a38, "RTTI_AISkillCoverMountedGun");
	apply_type(0x1373a38, "RTTICompound");
	del_items(0x1373f30, DELIT_SIMPLE, 8);
	apply_type(0x1373f30, "RTTIBase[1]");
	set_name(0x1373f30, "AISkillCoverMountedGun::sBases");

	// AISkillCustomAction
	set_name(0x137510c, "RTTI_AISkillCustomAction");
	apply_type(0x137510c, "RTTICompound");
	del_items(0x1375bec, DELIT_SIMPLE, 8);
	apply_type(0x1375bec, "RTTIBase[1]");
	set_name(0x1375bec, "AISkillCustomAction::sBases");

	// AISkillDismount
	set_name(0x1373a8c, "RTTI_AISkillDismount");
	apply_type(0x1373a8c, "RTTICompound");
	del_items(0x1373f38, DELIT_SIMPLE, 8);
	apply_type(0x1373f38, "RTTIBase[1]");
	set_name(0x1373f38, "AISkillDismount::sBases");

	// AISkillDodge
	set_name(0x1373ae0, "RTTI_AISkillDodge");
	apply_type(0x1373ae0, "RTTICompound");
	del_items(0x1373f40, DELIT_SIMPLE, 8);
	apply_type(0x1373f40, "RTTIBase[1]");
	set_name(0x1373f40, "AISkillDodge::sBases");

	// AISkillDrive
	set_name(0x134f278, "RTTI_AISkillDrive");
	apply_type(0x134f278, "RTTICompound");
	del_items(0x134fd4c, DELIT_SIMPLE, 8);
	apply_type(0x134fd4c, "RTTIBase[1]");
	set_name(0x134fd4c, "AISkillDrive::sBases");

	// AISkillDriveAlongPathBase
	set_name(0x1373b34, "RTTI_AISkillDriveAlongPathBase");
	apply_type(0x1373b34, "RTTICompound");
	del_items(0x1373f48, DELIT_SIMPLE, 8);
	apply_type(0x1373f48, "RTTIBase[1]");
	set_name(0x1373f48, "AISkillDriveAlongPathBase::sBases");

	// AISkillDriveBackup
	set_name(0x134f2cc, "RTTI_AISkillDriveBackup");
	apply_type(0x134f2cc, "RTTICompound");
	del_items(0x134fd54, DELIT_SIMPLE, 8);
	apply_type(0x134fd54, "RTTIBase[1]");
	set_name(0x134fd54, "AISkillDriveBackup::sBases");

	// AISkillDriveBackupGame
	set_name(0x1373b88, "RTTI_AISkillDriveBackupGame");
	apply_type(0x1373b88, "RTTICompound");
	del_items(0x1373f50, DELIT_SIMPLE, 8);
	apply_type(0x1373f50, "RTTIBase[1]");
	set_name(0x1373f50, "AISkillDriveBackupGame::sBases");

	// AISkillDriveBackwardGame
	set_name(0x1373bdc, "RTTI_AISkillDriveBackwardGame");
	apply_type(0x1373bdc, "RTTICompound");
	del_items(0x1373f58, DELIT_SIMPLE, 8);
	apply_type(0x1373f58, "RTTIBase[1]");
	set_name(0x1373f58, "AISkillDriveBackwardGame::sBases");

	// AISkillDriveForwardGame
	set_name(0x1373c30, "RTTI_AISkillDriveForwardGame");
	apply_type(0x1373c30, "RTTICompound");
	del_items(0x1373f60, DELIT_SIMPLE, 8);
	apply_type(0x1373f60, "RTTIBase[1]");
	set_name(0x1373f60, "AISkillDriveForwardGame::sBases");

	// AISkillDriveHoldGame
	set_name(0x1373c84, "RTTI_AISkillDriveHoldGame");
	apply_type(0x1373c84, "RTTICompound");
	del_items(0x1373f68, DELIT_SIMPLE, 8);
	apply_type(0x1373f68, "RTTIBase[1]");
	set_name(0x1373f68, "AISkillDriveHoldGame::sBases");

	// AISkillDriveMidAir
	set_name(0x1373cd8, "RTTI_AISkillDriveMidAir");
	apply_type(0x1373cd8, "RTTICompound");
	del_items(0x1373f70, DELIT_SIMPLE, 8);
	apply_type(0x1373f70, "RTTIBase[1]");
	set_name(0x1373f70, "AISkillDriveMidAir::sBases");

	// AISkillDriveQuickTurn
	set_name(0x134f320, "RTTI_AISkillDriveQuickTurn");
	apply_type(0x134f320, "RTTICompound");
	del_items(0x1350070, DELIT_SIMPLE, 8);
	apply_type(0x1350070, "RTTIBase[1]");
	set_name(0x1350070, "AISkillDriveQuickTurn::sBases");

	// AISkillDriveQuickTurnGame
	set_name(0x1373d2c, "RTTI_AISkillDriveQuickTurnGame");
	apply_type(0x1373d2c, "RTTICompound");
	del_items(0x1373f78, DELIT_SIMPLE, 8);
	apply_type(0x1373f78, "RTTIBase[1]");
	set_name(0x1373f78, "AISkillDriveQuickTurnGame::sBases");

	// AISkillDriveResource
	set_name(0x134f224, "RTTI_AISkillDriveResource");
	apply_type(0x134f224, "RTTICompound");
	del_items(0x134fa18, DELIT_SIMPLE, 8);
	apply_type(0x134fa18, "RTTIBase[1]");
	set_name(0x134fa18, "AISkillDriveResource::sBases");
	del_items(0x134fa20, DELIT_SIMPLE, 812);
	apply_type(0x134fa20, "RTTIAttr[29]");
	set_name(0x134fa20, "AISkillDriveResource::sAttrs");

	// AISkillDriveSideWays
	set_name(0x134f374, "RTTI_AISkillDriveSideWays");
	apply_type(0x134f374, "RTTICompound");
	del_items(0x1350078, DELIT_SIMPLE, 8);
	apply_type(0x1350078, "RTTIBase[1]");
	set_name(0x1350078, "AISkillDriveSideWays::sBases");

	// AISkillDriveTurnOnSpot
	set_name(0x134f3c8, "RTTI_AISkillDriveTurnOnSpot");
	apply_type(0x134f3c8, "RTTICompound");
	del_items(0x1350080, DELIT_SIMPLE, 8);
	apply_type(0x1350080, "RTTIBase[1]");
	set_name(0x1350080, "AISkillDriveTurnOnSpot::sBases");

	// AISkillDriveTurnOnSpotGame
	set_name(0x1373d80, "RTTI_AISkillDriveTurnOnSpotGame");
	apply_type(0x1373d80, "RTTICompound");
	del_items(0x1373f80, DELIT_SIMPLE, 8);
	apply_type(0x1373f80, "RTTIBase[1]");
	set_name(0x1373f80, "AISkillDriveTurnOnSpotGame::sBases");

	// AISkillFaceGame
	set_name(0x1373dd4, "RTTI_AISkillFaceGame");
	apply_type(0x1373dd4, "RTTICompound");
	del_items(0x1373f88, DELIT_SIMPLE, 8);
	apply_type(0x1373f88, "RTTIBase[1]");
	set_name(0x1373f88, "AISkillFaceGame::sBases");

	// AISkillFaceTowards
	set_name(0x134f41c, "RTTI_AISkillFaceTowards");
	apply_type(0x134f41c, "RTTICompound");
	del_items(0x1350088, DELIT_SIMPLE, 8);
	apply_type(0x1350088, "RTTIBase[1]");
	set_name(0x1350088, "AISkillFaceTowards::sBases");

	// AISkillFaceTurnOnSpot
	set_name(0x1373e28, "RTTI_AISkillFaceTurnOnSpot");
	apply_type(0x1373e28, "RTTICompound");
	del_items(0x1373f90, DELIT_SIMPLE, 8);
	apply_type(0x1373f90, "RTTIBase[1]");
	set_name(0x1373f90, "AISkillFaceTurnOnSpot::sBases");

	// AISkillFacialExpression
	set_name(0x134f470, "RTTI_AISkillFacialExpression");
	apply_type(0x134f470, "RTTICompound");
	del_items(0x1350090, DELIT_SIMPLE, 8);
	apply_type(0x1350090, "RTTIBase[1]");
	set_name(0x1350090, "AISkillFacialExpression::sBases");

	// AISkillFacialExpressionGame
	set_name(0x1373e7c, "RTTI_AISkillFacialExpressionGame");
	apply_type(0x1373e7c, "RTTICompound");
	del_items(0x1373f98, DELIT_SIMPLE, 8);
	apply_type(0x1373f98, "RTTIBase[1]");
	set_name(0x1373f98, "AISkillFacialExpressionGame::sBases");

	// AISkillFire
	set_name(0x1373fa0, "RTTI_AISkillFire");
	apply_type(0x1373fa0, "RTTICompound");
	del_items(0x13746d8, DELIT_SIMPLE, 8);
	apply_type(0x13746d8, "RTTIBase[1]");
	set_name(0x13746d8, "AISkillFire::sBases");

	// AISkillFireMountedGun
	set_name(0x1373ff4, "RTTI_AISkillFireMountedGun");
	apply_type(0x1373ff4, "RTTICompound");
	del_items(0x13746e0, DELIT_SIMPLE, 8);
	apply_type(0x13746e0, "RTTIBase[1]");
	set_name(0x13746e0, "AISkillFireMountedGun::sBases");

	// AISkillFireTurnOnSpot
	set_name(0x1374048, "RTTI_AISkillFireTurnOnSpot");
	apply_type(0x1374048, "RTTICompound");
	del_items(0x13746e8, DELIT_SIMPLE, 8);
	apply_type(0x13746e8, "RTTIBase[1]");
	set_name(0x13746e8, "AISkillFireTurnOnSpot::sBases");

	// AISkillFireTurnOnSpotAirVehicle
	set_name(0x1374a7c, "RTTI_AISkillFireTurnOnSpotAirVehicle");
	apply_type(0x1374a7c, "RTTICompound");
	del_items(0x1375b4c, DELIT_SIMPLE, 8);
	apply_type(0x1375b4c, "RTTIBase[1]");
	set_name(0x1375b4c, "AISkillFireTurnOnSpotAirVehicle::sBases");

	// AISkillFireTurnTroopCarrier
	set_name(0x1374b78, "RTTI_AISkillFireTurnTroopCarrier");
	apply_type(0x1374b78, "RTTICompound");
	del_items(0x1375b64, DELIT_SIMPLE, 8);
	apply_type(0x1375b64, "RTTIBase[1]");
	set_name(0x1375b64, "AISkillFireTurnTroopCarrier::sBases");

	// AISkillFloat
	set_name(0x13740f0, "RTTI_AISkillFloat");
	apply_type(0x13740f0, "RTTICompound");
	del_items(0x13746f8, DELIT_SIMPLE, 8);
	apply_type(0x13746f8, "RTTIBase[1]");
	set_name(0x13746f8, "AISkillFloat::sBases");

	// AISkillFloatBase
	set_name(0x137409c, "RTTI_AISkillFloatBase");
	apply_type(0x137409c, "RTTICompound");
	del_items(0x13746f0, DELIT_SIMPLE, 8);
	apply_type(0x13746f0, "RTTIBase[1]");
	set_name(0x13746f0, "AISkillFloatBase::sBases");

	// AISkillGesture
	set_name(0x1374144, "RTTI_AISkillGesture");
	apply_type(0x1374144, "RTTICompound");
	del_items(0x1374700, DELIT_SIMPLE, 8);
	apply_type(0x1374700, "RTTIBase[1]");
	set_name(0x1374700, "AISkillGesture::sBases");

	// AISkillGlance
	set_name(0x1374198, "RTTI_AISkillGlance");
	apply_type(0x1374198, "RTTICompound");
	del_items(0x1374718, DELIT_SIMPLE, 8);
	apply_type(0x1374718, "RTTIBase[1]");
	set_name(0x1374718, "AISkillGlance::sBases");

	// AISkillGlanceUpperBody
	set_name(0x13741ec, "RTTI_AISkillGlanceUpperBody");
	apply_type(0x13741ec, "RTTICompound");
	del_items(0x1374720, DELIT_SIMPLE, 8);
	apply_type(0x1374720, "RTTIBase[1]");
	set_name(0x1374720, "AISkillGlanceUpperBody::sBases");

	// AISkillLapaAction
	set_name(0x1374240, "RTTI_AISkillLapaAction");
	apply_type(0x1374240, "RTTICompound");
	del_items(0x1374728, DELIT_SIMPLE, 8);
	apply_type(0x1374728, "RTTIBase[1]");
	set_name(0x1374728, "AISkillLapaAction::sBases");

	// AISkillLeanFire
	set_name(0x1374294, "RTTI_AISkillLeanFire");
	apply_type(0x1374294, "RTTICompound");
	del_items(0x1374730, DELIT_SIMPLE, 8);
	apply_type(0x1374730, "RTTIBase[1]");
	set_name(0x1374730, "AISkillLeanFire::sBases");

	// AISkillLeanLook
	set_name(0x13742e8, "RTTI_AISkillLeanLook");
	apply_type(0x13742e8, "RTTICompound");
	del_items(0x1374738, DELIT_SIMPLE, 8);
	apply_type(0x1374738, "RTTIBase[1]");
	set_name(0x1374738, "AISkillLeanLook::sBases");

	// AISkillLoadWeapon
	set_name(0x134f4c4, "RTTI_AISkillLoadWeapon");
	apply_type(0x134f4c4, "RTTICompound");
	del_items(0x1350098, DELIT_SIMPLE, 8);
	apply_type(0x1350098, "RTTIBase[1]");
	set_name(0x1350098, "AISkillLoadWeapon::sBases");

	// AISkillLoadWeaponGame
	set_name(0x137433c, "RTTI_AISkillLoadWeaponGame");
	apply_type(0x137433c, "RTTICompound");
	del_items(0x1374740, DELIT_SIMPLE, 8);
	apply_type(0x1374740, "RTTIBase[1]");
	set_name(0x1374740, "AISkillLoadWeaponGame::sBases");

	// AISkillLookAt
	set_name(0x134f518, "RTTI_AISkillLookAt");
	apply_type(0x134f518, "RTTICompound");
	del_items(0x13500a0, DELIT_SIMPLE, 8);
	apply_type(0x13500a0, "RTTIBase[1]");
	set_name(0x13500a0, "AISkillLookAt::sBases");

	// AISkillLookFullBody
	set_name(0x1374534, "RTTI_AISkillLookFullBody");
	apply_type(0x1374534, "RTTICompound");
	del_items(0x1374760, DELIT_SIMPLE, 8);
	apply_type(0x1374760, "RTTIBase[1]");
	set_name(0x1374760, "AISkillLookFullBody::sBases");

	// AISkillLookGame
	set_name(0x1374390, "RTTI_AISkillLookGame");
	apply_type(0x1374390, "RTTICompound");
	del_items(0x1374708, DELIT_SIMPLE, 8);
	apply_type(0x1374708, "RTTIBase[1]");
	set_name(0x1374708, "AISkillLookGame::sBases");

	// AISkillLookMountedGun
	set_name(0x1374438, "RTTI_AISkillLookMountedGun");
	apply_type(0x1374438, "RTTICompound");
	del_items(0x1374748, DELIT_SIMPLE, 8);
	apply_type(0x1374748, "RTTIBase[1]");
	set_name(0x1374748, "AISkillLookMountedGun::sBases");

	// AISkillLookTalk
	set_name(0x134f56c, "RTTI_AISkillLookTalk");
	apply_type(0x134f56c, "RTTICompound");
	del_items(0x13500b0, DELIT_SIMPLE, 8);
	apply_type(0x13500b0, "RTTIBase[1]");
	set_name(0x13500b0, "AISkillLookTalk::sBases");

	// AISkillLookTalkGame
	set_name(0x137448c, "RTTI_AISkillLookTalkGame");
	apply_type(0x137448c, "RTTICompound");
	del_items(0x1374750, DELIT_SIMPLE, 8);
	apply_type(0x1374750, "RTTIBase[1]");
	set_name(0x1374750, "AISkillLookTalkGame::sBases");

	// AISkillLookTurnOnSpot
	set_name(0x13744e0, "RTTI_AISkillLookTurnOnSpot");
	apply_type(0x13744e0, "RTTICompound");
	del_items(0x1374758, DELIT_SIMPLE, 8);
	apply_type(0x1374758, "RTTIBase[1]");
	set_name(0x1374758, "AISkillLookTurnOnSpot::sBases");

	// AISkillLookTurnOnSpotAirVehicle
	set_name(0x1374a28, "RTTI_AISkillLookTurnOnSpotAirVehicle");
	apply_type(0x1374a28, "RTTICompound");
	del_items(0x1375b44, DELIT_SIMPLE, 8);
	apply_type(0x1375b44, "RTTIBase[1]");
	set_name(0x1375b44, "AISkillLookTurnOnSpotAirVehicle::sBases");

	// AISkillLookTurnTroopCarrier
	set_name(0x1374bcc, "RTTI_AISkillLookTurnTroopCarrier");
	apply_type(0x1374bcc, "RTTICompound");
	del_items(0x1375b6c, DELIT_SIMPLE, 8);
	apply_type(0x1375b6c, "RTTIBase[1]");
	set_name(0x1375b6c, "AISkillLookTurnTroopCarrier::sBases");

	// AISkillLookUpperBody
	set_name(0x13743e4, "RTTI_AISkillLookUpperBody");
	apply_type(0x13743e4, "RTTICompound");
	del_items(0x1374710, DELIT_SIMPLE, 8);
	apply_type(0x1374710, "RTTIBase[1]");
	set_name(0x1374710, "AISkillLookUpperBody::sBases");

	// AISkillLowCrouch
	set_name(0x1374588, "RTTI_AISkillLowCrouch");
	apply_type(0x1374588, "RTTICompound");
	del_items(0x1374768, DELIT_SIMPLE, 8);
	apply_type(0x1374768, "RTTIBase[1]");
	set_name(0x1374768, "AISkillLowCrouch::sBases");

	// AISkillMountObject
	set_name(0x13745dc, "RTTI_AISkillMountObject");
	apply_type(0x13745dc, "RTTICompound");
	del_items(0x1374770, DELIT_SIMPLE, 8);
	apply_type(0x1374770, "RTTIBase[1]");
	set_name(0x1374770, "AISkillMountObject::sBases");

	// AISkillPickUp
	set_name(0x1374684, "RTTI_AISkillPickUp");
	apply_type(0x1374684, "RTTICompound");
	del_items(0x1374780, DELIT_SIMPLE, 8);
	apply_type(0x1374780, "RTTIBase[1]");
	set_name(0x1374780, "AISkillPickUp::sBases");

	// AISkillPostureChange
	set_name(0x1374830, "RTTI_AISkillPostureChange");
	apply_type(0x1374830, "RTTICompound");
	del_items(0x1375b14, DELIT_SIMPLE, 8);
	apply_type(0x1375b14, "RTTIBase[1]");
	set_name(0x1375b14, "AISkillPostureChange::sBases");

	// AISkillRelocateToLapa
	set_name(0x1374630, "RTTI_AISkillRelocateToLapa");
	apply_type(0x1374630, "RTTICompound");
	del_items(0x1374778, DELIT_SIMPLE, 8);
	apply_type(0x1374778, "RTTIBase[1]");
	set_name(0x1374778, "AISkillRelocateToLapa::sBases");

	// AISkillResource
	set_name(0x134c1bc, "RTTI_AISkillResource");
	apply_type(0x134c1bc, "RTTICompound");
	del_items(0x134e788, DELIT_SIMPLE, 8);
	apply_type(0x134e788, "RTTIBase[1]");
	set_name(0x134e788, "AISkillResource::sBases");
	del_items(0x134e790, DELIT_SIMPLE, 84);
	apply_type(0x134e790, "RTTIAttr[3]");
	set_name(0x134e790, "AISkillResource::sAttrs");
	del_items(0x134e7e4, DELIT_SIMPLE, 12);
	apply_type(0x134e7e4, "RTTIMessageHandler[1]");
	set_name(0x134e7e4, "AISkillResource::sMessageHandlers");

	// AISkillSprint
	set_name(0x1374fbc, "RTTI_AISkillSprint");
	apply_type(0x1374fbc, "RTTICompound");
	del_items(0x1375bcc, DELIT_SIMPLE, 8);
	apply_type(0x1375bcc, "RTTIBase[1]");
	set_name(0x1375bcc, "AISkillSprint::sBases");

	// AISkillSprintDebug
	set_name(0x1375064, "RTTI_AISkillSprintDebug");
	apply_type(0x1375064, "RTTICompound");
	del_items(0x1375bdc, DELIT_SIMPLE, 8);
	apply_type(0x1375bdc, "RTTIBase[1]");
	set_name(0x1375bdc, "AISkillSprintDebug::sBases");

	// AISkillSwitchWeapon
	set_name(0x134f5c0, "RTTI_AISkillSwitchWeapon");
	apply_type(0x134f5c0, "RTTICompound");
	del_items(0x13500b8, DELIT_SIMPLE, 8);
	apply_type(0x13500b8, "RTTIBase[1]");
	set_name(0x13500b8, "AISkillSwitchWeapon::sBases");

	// AISkillSwitchWeaponGame
	set_name(0x1374884, "RTTI_AISkillSwitchWeaponGame");
	apply_type(0x1374884, "RTTICompound");
	del_items(0x1375b1c, DELIT_SIMPLE, 8);
	apply_type(0x1375b1c, "RTTIBase[1]");
	set_name(0x1375b1c, "AISkillSwitchWeaponGame::sBases");

	// AISkillTalk
	set_name(0x134f614, "RTTI_AISkillTalk");
	apply_type(0x134f614, "RTTICompound");
	del_items(0x13500a8, DELIT_SIMPLE, 8);
	apply_type(0x13500a8, "RTTIBase[1]");
	set_name(0x13500a8, "AISkillTalk::sBases");

	// AISkillTalkGame
	set_name(0x13748d8, "RTTI_AISkillTalkGame");
	apply_type(0x13748d8, "RTTICompound");
	del_items(0x1375b24, DELIT_SIMPLE, 8);
	apply_type(0x1375b24, "RTTIBase[1]");
	set_name(0x1375b24, "AISkillTalkGame::sBases");

	// AISkillTeleport
	set_name(0x137492c, "RTTI_AISkillTeleport");
	apply_type(0x137492c, "RTTICompound");
	del_items(0x1375b2c, DELIT_SIMPLE, 8);
	apply_type(0x1375b2c, "RTTIBase[1]");
	set_name(0x1375b2c, "AISkillTeleport::sBases");

	// AISkillTurnOnSpot
	set_name(0x134f668, "RTTI_AISkillTurnOnSpot");
	apply_type(0x134f668, "RTTICompound");
	del_items(0x13500c0, DELIT_SIMPLE, 8);
	apply_type(0x13500c0, "RTTIBase[1]");
	set_name(0x13500c0, "AISkillTurnOnSpot::sBases");

	// AISkillTurnOnSpotAirVehicle
	set_name(0x1374980, "RTTI_AISkillTurnOnSpotAirVehicle");
	apply_type(0x1374980, "RTTICompound");
	del_items(0x1375b34, DELIT_SIMPLE, 8);
	apply_type(0x1375b34, "RTTIBase[1]");
	set_name(0x1375b34, "AISkillTurnOnSpotAirVehicle::sBases");

	// AISkillTurnOnSpotGame
	set_name(0x1374ad0, "RTTI_AISkillTurnOnSpotGame");
	apply_type(0x1374ad0, "RTTICompound");
	del_items(0x1375b54, DELIT_SIMPLE, 8);
	apply_type(0x1375b54, "RTTIBase[1]");
	set_name(0x1375b54, "AISkillTurnOnSpotGame::sBases");

	// AISkillUseAttachable
	set_name(0x1374c20, "RTTI_AISkillUseAttachable");
	apply_type(0x1374c20, "RTTICompound");
	del_items(0x1375b74, DELIT_SIMPLE, 8);
	apply_type(0x1375b74, "RTTIBase[1]");
	set_name(0x1375b74, "AISkillUseAttachable::sBases");

	// AISkillUseDisguise
	set_name(0x1374c74, "RTTI_AISkillUseDisguise");
	apply_type(0x1374c74, "RTTICompound");
	del_items(0x1375b7c, DELIT_SIMPLE, 8);
	apply_type(0x1375b7c, "RTTIBase[1]");
	set_name(0x1375b7c, "AISkillUseDisguise::sBases");

	// AISkillUseDoor
	set_name(0x1374cc8, "RTTI_AISkillUseDoor");
	apply_type(0x1374cc8, "RTTICompound");
	del_items(0x1375b84, DELIT_SIMPLE, 8);
	apply_type(0x1375b84, "RTTIBase[1]");
	set_name(0x1375b84, "AISkillUseDoor::sBases");

	// AISkillUseExplosiveLocation
	set_name(0x1374d1c, "RTTI_AISkillUseExplosiveLocation");
	apply_type(0x1374d1c, "RTTICompound");
	del_items(0x1375b8c, DELIT_SIMPLE, 8);
	apply_type(0x1375b8c, "RTTIBase[1]");
	set_name(0x1375b8c, "AISkillUseExplosiveLocation::sBases");

	// AISkillUseGun
	set_name(0x134f6bc, "RTTI_AISkillUseGun");
	apply_type(0x134f6bc, "RTTICompound");
	del_items(0x13500c8, DELIT_SIMPLE, 8);
	apply_type(0x13500c8, "RTTIBase[1]");
	set_name(0x13500c8, "AISkillUseGun::sBases");

	// AISkillUseInventoryItem
	set_name(0x1374d70, "RTTI_AISkillUseInventoryItem");
	apply_type(0x1374d70, "RTTICompound");
	del_items(0x1375b94, DELIT_SIMPLE, 8);
	apply_type(0x1375b94, "RTTIBase[1]");
	set_name(0x1375b94, "AISkillUseInventoryItem::sBases");

	// AISkillUseJetpack
	set_name(0x1374dc4, "RTTI_AISkillUseJetpack");
	apply_type(0x1374dc4, "RTTICompound");
	del_items(0x1375b9c, DELIT_SIMPLE, 8);
	apply_type(0x1375b9c, "RTTIBase[1]");
	set_name(0x1375b9c, "AISkillUseJetpack::sBases");

	// AISkillUseLadder
	set_name(0x1374e18, "RTTI_AISkillUseLadder");
	apply_type(0x1374e18, "RTTICompound");
	del_items(0x1375ba4, DELIT_SIMPLE, 8);
	apply_type(0x1375ba4, "RTTIBase[1]");
	set_name(0x1375ba4, "AISkillUseLadder::sBases");

	// AISkillUsePlayAnimationObject
	set_name(0x1374e6c, "RTTI_AISkillUsePlayAnimationObject");
	apply_type(0x1374e6c, "RTTICompound");
	del_items(0x1375bac, DELIT_SIMPLE, 8);
	apply_type(0x1375bac, "RTTIBase[1]");
	set_name(0x1375bac, "AISkillUsePlayAnimationObject::sBases");

	// AISkillUseSimpleTrackAnimator
	set_name(0x1374ec0, "RTTI_AISkillUseSimpleTrackAnimator");
	apply_type(0x1374ec0, "RTTICompound");
	del_items(0x1375bb4, DELIT_SIMPLE, 8);
	apply_type(0x1375bb4, "RTTIBase[1]");
	set_name(0x1375bb4, "AISkillUseSimpleTrackAnimator::sBases");

	// AISkillUseSwitch
	set_name(0x1374f14, "RTTI_AISkillUseSwitch");
	apply_type(0x1374f14, "RTTICompound");
	del_items(0x1375bbc, DELIT_SIMPLE, 8);
	apply_type(0x1375bbc, "RTTIBase[1]");
	set_name(0x1375bbc, "AISkillUseSwitch::sBases");

	// AISkillWalk
	set_name(0x1374f68, "RTTI_AISkillWalk");
	apply_type(0x1374f68, "RTTICompound");
	del_items(0x1375bc4, DELIT_SIMPLE, 8);
	apply_type(0x1375bc4, "RTTIBase[1]");
	set_name(0x1375bc4, "AISkillWalk::sBases");

	// AISkillWalkDebug
	set_name(0x1375010, "RTTI_AISkillWalkDebug");
	apply_type(0x1375010, "RTTICompound");
	del_items(0x1375bd4, DELIT_SIMPLE, 8);
	apply_type(0x1375bd4, "RTTIBase[1]");
	set_name(0x1375bd4, "AISkillWalkDebug::sBases");

	// AISkillWalkExoSkeleton
	set_name(0x13750b8, "RTTI_AISkillWalkExoSkeleton");
	apply_type(0x13750b8, "RTTICompound");
	del_items(0x1375be4, DELIT_SIMPLE, 8);
	apply_type(0x1375be4, "RTTIBase[1]");
	set_name(0x1375be4, "AISkillWalkExoSkeleton::sBases");

	// AISniperWeaponOperationInstance
	set_name(0x134bcb8, "RTTI_AISniperWeaponOperationInstance");
	apply_type(0x134bcb8, "RTTICompound");
	del_items(0x134e308, DELIT_SIMPLE, 8);
	apply_type(0x134e308, "RTTIBase[1]");
	set_name(0x134e308, "AISniperWeaponOperationInstance::sBases");

	// AISniperWeaponOperationResource
	set_name(0x134bd0c, "RTTI_AISniperWeaponOperationResource");
	apply_type(0x134bd0c, "RTTICompound");
	del_items(0x134e1e8, DELIT_SIMPLE, 8);
	apply_type(0x134e1e8, "RTTIBase[1]");
	set_name(0x134e1e8, "AISniperWeaponOperationResource::sBases");
	del_items(0x134e1f0, DELIT_SIMPLE, 280);
	apply_type(0x134e1f0, "RTTIAttr[10]");
	set_name(0x134e1f0, "AISniperWeaponOperationResource::sAttrs");

	// AISphere
	set_name(0x134b2e8, "RTTI_AISphere");
	apply_type(0x134b2e8, "RTTICompound");
	del_items(0x134d2f8, DELIT_SIMPLE, 56);
	apply_type(0x134d2f8, "RTTIAttr[2]");
	set_name(0x134d2f8, "AISphere::sAttrs");

	// AISpreadWeaponOperationInstance
	set_name(0x134bd60, "RTTI_AISpreadWeaponOperationInstance");
	apply_type(0x134bd60, "RTTICompound");
	del_items(0x134e564, DELIT_SIMPLE, 8);
	apply_type(0x134e564, "RTTIBase[1]");
	set_name(0x134e564, "AISpreadWeaponOperationInstance::sBases");

	// AISpreadWeaponOperationResource
	set_name(0x134bdb4, "RTTI_AISpreadWeaponOperationResource");
	apply_type(0x134bdb4, "RTTICompound");
	del_items(0x134e310, DELIT_SIMPLE, 8);
	apply_type(0x134e310, "RTTIBase[1]");
	set_name(0x134e310, "AISpreadWeaponOperationResource::sBases");
	del_items(0x134e318, DELIT_SIMPLE, 588);
	apply_type(0x134e318, "RTTIAttr[21]");
	set_name(0x134e318, "AISpreadWeaponOperationResource::sAttrs");

	// AISquad
	set_name(0x134f7c8, "RTTI_AISquad");
	apply_type(0x134f7c8, "RTTICompound");
	del_items(0x134fd5c, DELIT_SIMPLE, 8);
	apply_type(0x134fd5c, "RTTIBase[1]");
	set_name(0x134fd5c, "AISquad::sBases");
	del_items(0x134fd64, DELIT_SIMPLE, 84);
	apply_type(0x134fd64, "RTTIAttr[3]");
	set_name(0x134fd64, "AISquad::sAttrs");
	del_items(0x134fdb8, DELIT_SIMPLE, 696);
	apply_type(0x134fdb8, "RTTIFunction[29]");
	set_name(0x134fdb8, "AISquad::sFunctions");

	// AISquadGame
	set_name(0x1371a10, "RTTI_AISquadGame");
	apply_type(0x1371a10, "RTTICompound");
	del_items(0x137212c, DELIT_SIMPLE, 8);
	apply_type(0x137212c, "RTTIBase[1]");
	set_name(0x137212c, "AISquadGame::sBases");
	del_items(0x1372134, DELIT_SIMPLE, 192);
	apply_type(0x1372134, "RTTIFunction[8]");
	set_name(0x1372134, "AISquadGame::sFunctions");

	// AISquadHook
	set_name(0x1350180, "RTTI_AISquadHook");
	apply_type(0x1350180, "RTTICompound");
	del_items(0x1350750, DELIT_SIMPLE, 8);
	apply_type(0x1350750, "RTTIBase[1]");
	set_name(0x1350750, "AISquadHook::sBases");

	// AISquadHookHtnPlanner
	set_name(0x1350400, "RTTI_AISquadHookHtnPlanner");
	apply_type(0x1350400, "RTTICompound");
	del_items(0x13508c0, DELIT_SIMPLE, 8);
	apply_type(0x13508c0, "RTTIBase[1]");
	set_name(0x13508c0, "AISquadHookHtnPlanner::sBases");

	// AISquadHookHtnPlannerResource
	set_name(0x1350454, "RTTI_AISquadHookHtnPlannerResource");
	apply_type(0x1350454, "RTTICompound");
	del_items(0x1350880, DELIT_SIMPLE, 8);
	apply_type(0x1350880, "RTTIBase[1]");
	set_name(0x1350880, "AISquadHookHtnPlannerResource::sBases");
	del_items(0x1350888, DELIT_SIMPLE, 56);
	apply_type(0x1350888, "RTTIAttr[2]");
	set_name(0x1350888, "AISquadHookHtnPlannerResource::sAttrs");

	// AISquadHookResource
	set_name(0x13501e4, "RTTI_AISquadHookResource");
	apply_type(0x13501e4, "RTTICompound");
	del_items(0x1350758, DELIT_SIMPLE, 8);
	apply_type(0x1350758, "RTTIBase[1]");
	set_name(0x1350758, "AISquadHookResource::sBases");

	// AISquadResource
	set_name(0x1350248, "RTTI_AISquadResource");
	apply_type(0x1350248, "RTTICompound");
	del_items(0x1350760, DELIT_SIMPLE, 8);
	apply_type(0x1350760, "RTTIBase[1]");
	set_name(0x1350760, "AISquadResource::sBases");
	del_items(0x1350768, DELIT_SIMPLE, 56);
	apply_type(0x1350768, "RTTIAttr[2]");
	set_name(0x1350768, "AISquadResource::sAttrs");

	// AIStatement
	set_name(0x134b0e0, "RTTI_AIStatement");
	apply_type(0x134b0e0, "RTTICompound");
	del_items(0x134c8f4, DELIT_SIMPLE, 84);
	apply_type(0x134c8f4, "RTTIAttr[3]");
	set_name(0x134c8f4, "AIStatement::sAttrs");

	// AIStaticCoverMap
	set_name(0x13537f4, "RTTI_AIStaticCoverMap");
	apply_type(0x13537f4, "RTTICompound");
	del_items(0x13551d0, DELIT_SIMPLE, 8);
	apply_type(0x13551d0, "RTTIBase[1]");
	set_name(0x13551d0, "AIStaticCoverMap::sBases");
	del_items(0x13551d8, DELIT_SIMPLE, 504);
	apply_type(0x13551d8, "RTTIAttr[18]");
	set_name(0x13551d8, "AIStaticCoverMap::sAttrs");
	del_items(0x13553d0, DELIT_SIMPLE, 24);
	apply_type(0x13553d0, "RTTIMessageHandler[2]");
	set_name(0x13553d0, "AIStaticCoverMap::sMessageHandlers");

	// AIStaticCoverMapObjectMapping
	set_name(0x135372c, "RTTI_AIStaticCoverMapObjectMapping");
	apply_type(0x135372c, "RTTICompound");
	del_items(0x135543c, DELIT_SIMPLE, 8);
	apply_type(0x135543c, "RTTIBase[1]");
	set_name(0x135543c, "AIStaticCoverMapObjectMapping::sBases");
	del_items(0x1355444, DELIT_SIMPLE, 56);
	apply_type(0x1355444, "RTTIAttr[2]");
	set_name(0x1355444, "AIStaticCoverMapObjectMapping::sAttrs");

	// AIStaticCoverMapObjectMappingEntry
	set_name(0x13536d8, "RTTI_AIStaticCoverMapObjectMappingEntry");
	apply_type(0x13536d8, "RTTICompound");
	del_items(0x13553e8, DELIT_SIMPLE, 84);
	apply_type(0x13553e8, "RTTIAttr[3]");
	set_name(0x13553e8, "AIStaticCoverMapObjectMappingEntry::sAttrs");

	// AIStaticWaypointGrid
	set_name(0x1353354, "RTTI_AIStaticWaypointGrid");
	apply_type(0x1353354, "RTTICompound");
	del_items(0x1353ac0, DELIT_SIMPLE, 8);
	apply_type(0x1353ac0, "RTTIBase[1]");
	set_name(0x1353ac0, "AIStaticWaypointGrid::sBases");
	del_items(0x1353ac8, DELIT_SIMPLE, 56);
	apply_type(0x1353ac8, "RTTIAttr[2]");
	set_name(0x1353ac8, "AIStaticWaypointGrid::sAttrs");

	// AIStrategicGraph
	set_name(0x1353934, "RTTI_AIStrategicGraph");
	apply_type(0x1353934, "RTTICompound");
	del_items(0x13557b0, DELIT_SIMPLE, 8);
	apply_type(0x13557b0, "RTTIBase[1]");
	set_name(0x13557b0, "AIStrategicGraph::sBases");

	// AIStrategicObjective
	set_name(0x137565c, "RTTI_AIStrategicObjective");
	apply_type(0x137565c, "RTTICompound");
	del_items(0x1375bf4, DELIT_SIMPLE, 8);
	apply_type(0x1375bf4, "RTTIBase[1]");
	set_name(0x1375bf4, "AIStrategicObjective::sBases");

	// AIStrategicObjectiveAdvanceWaypoint
	set_name(0x1375704, "RTTI_AIStrategicObjectiveAdvanceWaypoint");
	apply_type(0x1375704, "RTTICompound");
	del_items(0x1375bfc, DELIT_SIMPLE, 8);
	apply_type(0x1375bfc, "RTTIBase[1]");
	set_name(0x1375bfc, "AIStrategicObjectiveAdvanceWaypoint::sBases");

	// AIStrategicObjectiveAttackEntity
	set_name(0x1375758, "RTTI_AIStrategicObjectiveAttackEntity");
	apply_type(0x1375758, "RTTICompound");
	del_items(0x1375c0c, DELIT_SIMPLE, 8);
	apply_type(0x1375c0c, "RTTIBase[1]");
	set_name(0x1375c0c, "AIStrategicObjectiveAttackEntity::sBases");

	// AIStrategicObjectiveCaptureSpawnArea
	set_name(0x1375854, "RTTI_AIStrategicObjectiveCaptureSpawnArea");
	apply_type(0x1375854, "RTTICompound");
	del_items(0x1375c24, DELIT_SIMPLE, 8);
	apply_type(0x1375c24, "RTTIBase[1]");
	set_name(0x1375c24, "AIStrategicObjectiveCaptureSpawnArea::sBases");

	// AIStrategicObjectiveDefendMarker
	set_name(0x13757ac, "RTTI_AIStrategicObjectiveDefendMarker");
	apply_type(0x13757ac, "RTTICompound");
	del_items(0x1375c14, DELIT_SIMPLE, 8);
	apply_type(0x1375c14, "RTTIBase[1]");
	set_name(0x1375c14, "AIStrategicObjectiveDefendMarker::sBases");

	// AIStrategicObjectiveEscortEntity
	set_name(0x1375800, "RTTI_AIStrategicObjectiveEscortEntity");
	apply_type(0x1375800, "RTTICompound");
	del_items(0x1375c1c, DELIT_SIMPLE, 8);
	apply_type(0x1375c1c, "RTTIBase[1]");
	set_name(0x1375c1c, "AIStrategicObjectiveEscortEntity::sBases");

	// AIStrategicObjectiveExoHarass
	set_name(0x13756b0, "RTTI_AIStrategicObjectiveExoHarass");
	apply_type(0x13756b0, "RTTICompound");
	del_items(0x1375c04, DELIT_SIMPLE, 8);
	apply_type(0x1375c04, "RTTIBase[1]");
	set_name(0x1375c04, "AIStrategicObjectiveExoHarass::sBases");

	// AIStrategicPathFinder
	set_name(0x13538e0, "RTTI_AIStrategicPathFinder");
	apply_type(0x13538e0, "RTTICompound");
	del_items(0x13557b8, DELIT_SIMPLE, 8);
	apply_type(0x13557b8, "RTTIBase[1]");
	set_name(0x13557b8, "AIStrategicPathFinder::sBases");

	// AIStrategyAssassinationInstance
	set_name(0x1375208, "RTTI_AIStrategyAssassinationInstance");
	apply_type(0x1375208, "RTTICompound");
	del_items(0x1375c8c, DELIT_SIMPLE, 8);
	apply_type(0x1375c8c, "RTTIBase[1]");
	set_name(0x1375c8c, "AIStrategyAssassinationInstance::sBases");

	// AIStrategyAssassinationResource
	set_name(0x137525c, "RTTI_AIStrategyAssassinationResource");
	apply_type(0x137525c, "RTTICompound");
	del_items(0x1375c94, DELIT_SIMPLE, 8);
	apply_type(0x1375c94, "RTTIBase[1]");
	set_name(0x1375c94, "AIStrategyAssassinationResource::sBases");
	del_items(0x1375c9c, DELIT_SIMPLE, 112);
	apply_type(0x1375c9c, "RTTIAttr[4]");
	set_name(0x1375c9c, "AIStrategyAssassinationResource::sAttrs");

	// AIStrategyBodyCountInstance
	set_name(0x1375400, "RTTI_AIStrategyBodyCountInstance");
	apply_type(0x1375400, "RTTICompound");
	del_items(0x1375dd4, DELIT_SIMPLE, 8);
	apply_type(0x1375dd4, "RTTIBase[1]");
	set_name(0x1375dd4, "AIStrategyBodyCountInstance::sBases");

	// AIStrategyBodyCountResource
	set_name(0x1375454, "RTTI_AIStrategyBodyCountResource");
	apply_type(0x1375454, "RTTICompound");
	del_items(0x1375ddc, DELIT_SIMPLE, 8);
	apply_type(0x1375ddc, "RTTIBase[1]");
	set_name(0x1375ddc, "AIStrategyBodyCountResource::sBases");
	del_items(0x1375de4, DELIT_SIMPLE, 56);
	apply_type(0x1375de4, "RTTIAttr[2]");
	set_name(0x1375de4, "AIStrategyBodyCountResource::sAttrs");

	// AIStrategyCaptureAndHoldInstance
	set_name(0x1375160, "RTTI_AIStrategyCaptureAndHoldInstance");
	apply_type(0x1375160, "RTTICompound");
	del_items(0x1375c3c, DELIT_SIMPLE, 8);
	apply_type(0x1375c3c, "RTTIBase[1]");
	set_name(0x1375c3c, "AIStrategyCaptureAndHoldInstance::sBases");

	// AIStrategyCaptureAndHoldResource
	set_name(0x13751b4, "RTTI_AIStrategyCaptureAndHoldResource");
	apply_type(0x13751b4, "RTTICompound");
	del_items(0x1375c84, DELIT_SIMPLE, 8);
	apply_type(0x1375c84, "RTTIBase[1]");
	set_name(0x1375c84, "AIStrategyCaptureAndHoldResource::sBases");

	// AIStrategyInstance
	set_name(0x1375550, "RTTI_AIStrategyInstance");
	apply_type(0x1375550, "RTTICompound");
	del_items(0x1375c2c, DELIT_SIMPLE, 8);
	apply_type(0x1375c2c, "RTTIBase[1]");
	set_name(0x1375c2c, "AIStrategyInstance::sBases");

	// AIStrategyManager
	set_name(0x13755a4, "RTTI_AIStrategyManager");
	apply_type(0x13755a4, "RTTICompound");
	del_items(0x1375e80, DELIT_SIMPLE, 8);
	apply_type(0x1375e80, "RTTIBase[1]");
	set_name(0x1375e80, "AIStrategyManager::sBases");

	// AIStrategyResource
	set_name(0x1375608, "RTTI_AIStrategyResource");
	apply_type(0x1375608, "RTTICompound");
	del_items(0x1375c44, DELIT_SIMPLE, 8);
	apply_type(0x1375c44, "RTTIBase[1]");
	set_name(0x1375c44, "AIStrategyResource::sBases");
	del_items(0x1375c4c, DELIT_SIMPLE, 56);
	apply_type(0x1375c4c, "RTTIAttr[2]");
	set_name(0x1375c4c, "AIStrategyResource::sAttrs");

	// AIStrategyScavengeAndRetrieveInstance
	set_name(0x13754a8, "RTTI_AIStrategyScavengeAndRetrieveInstance");
	apply_type(0x13754a8, "RTTICompound");
	del_items(0x1375e1c, DELIT_SIMPLE, 8);
	apply_type(0x1375e1c, "RTTIBase[1]");
	set_name(0x1375e1c, "AIStrategyScavengeAndRetrieveInstance::sBases");

	// AIStrategyScavengeAndRetrieveResource
	set_name(0x13754fc, "RTTI_AIStrategyScavengeAndRetrieveResource");
	apply_type(0x13754fc, "RTTICompound");
	del_items(0x1375e24, DELIT_SIMPLE, 8);
	apply_type(0x1375e24, "RTTIBase[1]");
	set_name(0x1375e24, "AIStrategyScavengeAndRetrieveResource::sBases");
	del_items(0x1375e2c, DELIT_SIMPLE, 84);
	apply_type(0x1375e2c, "RTTIAttr[3]");
	set_name(0x1375e2c, "AIStrategyScavengeAndRetrieveResource::sAttrs");

	// AIStrategySearchAndDestroyInstance
	set_name(0x1375358, "RTTI_AIStrategySearchAndDestroyInstance");
	apply_type(0x1375358, "RTTICompound");
	del_items(0x1375d70, DELIT_SIMPLE, 8);
	apply_type(0x1375d70, "RTTIBase[1]");
	set_name(0x1375d70, "AIStrategySearchAndDestroyInstance::sBases");

	// AIStrategySearchAndDestroyResource
	set_name(0x13753ac, "RTTI_AIStrategySearchAndDestroyResource");
	apply_type(0x13753ac, "RTTICompound");
	del_items(0x1375d78, DELIT_SIMPLE, 8);
	apply_type(0x1375d78, "RTTIBase[1]");
	set_name(0x1375d78, "AIStrategySearchAndDestroyResource::sBases");
	del_items(0x1375d80, DELIT_SIMPLE, 84);
	apply_type(0x1375d80, "RTTIAttr[3]");
	set_name(0x1375d80, "AIStrategySearchAndDestroyResource::sAttrs");

	// AIStrategySearchAndRetrieveInstance
	set_name(0x13752b0, "RTTI_AIStrategySearchAndRetrieveInstance");
	apply_type(0x13752b0, "RTTICompound");
	del_items(0x1375d0c, DELIT_SIMPLE, 8);
	apply_type(0x1375d0c, "RTTIBase[1]");
	set_name(0x1375d0c, "AIStrategySearchAndRetrieveInstance::sBases");

	// AIStrategySearchAndRetrieveResource
	set_name(0x1375304, "RTTI_AIStrategySearchAndRetrieveResource");
	apply_type(0x1375304, "RTTICompound");
	del_items(0x1375d14, DELIT_SIMPLE, 8);
	apply_type(0x1375d14, "RTTIBase[1]");
	set_name(0x1375d14, "AIStrategySearchAndRetrieveResource::sBases");
	del_items(0x1375d1c, DELIT_SIMPLE, 84);
	apply_type(0x1375d1c, "RTTIAttr[3]");
	set_name(0x1375d1c, "AIStrategySearchAndRetrieveResource::sAttrs");

	// AITerrainManager
	set_name(0x135316c, "RTTI_AITerrainManager");
	apply_type(0x135316c, "RTTICompound");
	del_items(0x1354e4c, DELIT_SIMPLE, 8);
	apply_type(0x1354e4c, "RTTIBase[1]");
	set_name(0x1354e4c, "AITerrainManager::sBases");
	del_items(0x1354e54, DELIT_SIMPLE, 224);
	apply_type(0x1354e54, "RTTIAttr[8]");
	set_name(0x1354e54, "AITerrainManager::sAttrs");
	del_items(0x1354f34, DELIT_SIMPLE, 12);
	apply_type(0x1354f34, "RTTIMessageHandler[1]");
	set_name(0x1354f34, "AITerrainManager::sMessageHandlers");

	// AITurretWeaponInterface
	set_name(0x1375fac, "RTTI_AITurretWeaponInterface");
	apply_type(0x1375fac, "RTTICompound");
	del_items(0x13773cc, DELIT_SIMPLE, 8);
	apply_type(0x13773cc, "RTTIBase[1]");
	set_name(0x13773cc, "AITurretWeaponInterface::sBases");

	// AIUsableObject
	set_name(0x134be08, "RTTI_AIUsableObject");
	apply_type(0x134be08, "RTTICompound");

	// AIVehicleWeaponInterface
	set_name(0x1376000, "RTTI_AIVehicleWeaponInterface");
	apply_type(0x1376000, "RTTICompound");
	del_items(0x13773d4, DELIT_SIMPLE, 8);
	apply_type(0x13773d4, "RTTIBase[1]");
	set_name(0x13773d4, "AIVehicleWeaponInterface::sBases");

	// AIVisualStimulusComponent
	set_name(0x1389368, "RTTI_AIVisualStimulusComponent");
	apply_type(0x1389368, "RTTICompound");
	del_items(0x138c620, DELIT_SIMPLE, 8);
	apply_type(0x138c620, "RTTIBase[1]");
	set_name(0x138c620, "AIVisualStimulusComponent::sBases");

	// AIVisualStimulusComponentResource
	set_name(0x13893bc, "RTTI_AIVisualStimulusComponentResource");
	apply_type(0x13893bc, "RTTICompound");
	del_items(0x138c56c, DELIT_SIMPLE, 8);
	apply_type(0x138c56c, "RTTIBase[1]");
	set_name(0x138c56c, "AIVisualStimulusComponentResource::sBases");
	del_items(0x138c574, DELIT_SIMPLE, 168);
	apply_type(0x138c574, "RTTIAttr[6]");
	set_name(0x138c574, "AIVisualStimulusComponentResource::sAttrs");

	// AIWaypoint
	set_name(0x1353238, "RTTI_AIWaypoint");
	apply_type(0x1353238, "RTTICompound");
	del_items(0x1353a7c, DELIT_SIMPLE, 56);
	apply_type(0x1353a7c, "RTTIAttr[2]");
	set_name(0x1353a7c, "AIWaypoint::sAttrs");

	// AIWaypointAreaRadius
	set_name(0x135329c, "RTTI_AIWaypointAreaRadius");
	apply_type(0x135329c, "RTTICompound");
	del_items(0x1355104, DELIT_SIMPLE, 56);
	apply_type(0x1355104, "RTTIAttr[2]");
	set_name(0x1355104, "AIWaypointAreaRadius::sAttrs");

	// AIWaypointAreaRadiusTable
	set_name(0x1353300, "RTTI_AIWaypointAreaRadiusTable");
	apply_type(0x1353300, "RTTICompound");
	del_items(0x135513c, DELIT_SIMPLE, 8);
	apply_type(0x135513c, "RTTIBase[1]");
	set_name(0x135513c, "AIWaypointAreaRadiusTable::sBases");
	del_items(0x1355144, DELIT_SIMPLE, 84);
	apply_type(0x1355144, "RTTIAttr[3]");
	set_name(0x1355144, "AIWaypointAreaRadiusTable::sAttrs");

	// AIWaypointBufferManager
	set_name(0x1353118, "RTTI_AIWaypointBufferManager");
	apply_type(0x1353118, "RTTICompound");

	// AIWaypointGrid
	set_name(0x135340c, "RTTI_AIWaypointGrid");
	apply_type(0x135340c, "RTTICompound");
	del_items(0x1353b30, DELIT_SIMPLE, 8);
	apply_type(0x1353b30, "RTTIBase[1]");
	set_name(0x1353b30, "AIWaypointGrid::sBases");

	// AIWaypointNeighborIds
	set_name(0x1353470, "RTTI_AIWaypointNeighborIds");
	apply_type(0x1353470, "RTTICompound");
	del_items(0x1353cdc, DELIT_SIMPLE, 448);
	apply_type(0x1353cdc, "RTTIAttr[16]");
	set_name(0x1353cdc, "AIWaypointNeighborIds::sAttrs");

	// AIWaypointNeighborLinkTypeInfo
	set_name(0x13534d4, "RTTI_AIWaypointNeighborLinkTypeInfo");
	apply_type(0x13534d4, "RTTICompound");
	del_items(0x1353b38, DELIT_SIMPLE, 420);
	apply_type(0x1353b38, "RTTIAttr[15]");
	set_name(0x1353b38, "AIWaypointNeighborLinkTypeInfo::sAttrs");

	// AIWaypointNeighborTravel
	set_name(0x135359c, "RTTI_AIWaypointNeighborTravel");
	apply_type(0x135359c, "RTTICompound");
	del_items(0x1353e9c, DELIT_SIMPLE, 448);
	apply_type(0x1353e9c, "RTTIAttr[16]");
	set_name(0x1353e9c, "AIWaypointNeighborTravel::sAttrs");

	// AIWaypointNeighbors
	set_name(0x1353538, "RTTI_AIWaypointNeighbors");
	apply_type(0x1353538, "RTTICompound");
	del_items(0x1354f84, DELIT_SIMPLE, 8);
	apply_type(0x1354f84, "RTTIBase[1]");
	set_name(0x1354f84, "AIWaypointNeighbors::sBases");
	del_items(0x1354f8c, DELIT_SIMPLE, 196);
	apply_type(0x1354f8c, "RTTIAttr[7]");
	set_name(0x1354f8c, "AIWaypointNeighbors::sAttrs");

	// AIWaypointVisibility
	set_name(0x134b578, "RTTI_AIWaypointVisibility");
	apply_type(0x134b578, "RTTICompound");
	del_items(0x134e0ac, DELIT_SIMPLE, 8);
	apply_type(0x134e0ac, "RTTIBase[1]");
	set_name(0x134e0ac, "AIWaypointVisibility::sBases");

	// AIWeaponInterface
	set_name(0x1352624, "RTTI_AIWeaponInterface");
	apply_type(0x1352624, "RTTICompound");
	del_items(0x1352a08, DELIT_SIMPLE, 8);
	apply_type(0x1352a08, "RTTIBase[1]");
	set_name(0x1352a08, "AIWeaponInterface::sBases");

	// AIWeaponInterfaceGame
	set_name(0x1376054, "RTTI_AIWeaponInterfaceGame");
	apply_type(0x1376054, "RTTICompound");
	del_items(0x13773ac, DELIT_SIMPLE, 8);
	apply_type(0x13773ac, "RTTIBase[1]");
	set_name(0x13773ac, "AIWeaponInterfaceGame::sBases");

	// AIWeaponOperationInstance
	set_name(0x134ae04, "RTTI_AIWeaponOperationInstance");
	apply_type(0x134ae04, "RTTICompound");
	del_items(0x134d60c, DELIT_SIMPLE, 8);
	apply_type(0x134d60c, "RTTIBase[1]");
	set_name(0x134d60c, "AIWeaponOperationInstance::sBases");

	// AIWeaponOperationResource
	set_name(0x134adb0, "RTTI_AIWeaponOperationResource");
	apply_type(0x134adb0, "RTTICompound");
	del_items(0x134d614, DELIT_SIMPLE, 8);
	apply_type(0x134d614, "RTTIBase[1]");
	set_name(0x134d614, "AIWeaponOperationResource::sBases");

	// AIWeaponPreference
	set_name(0x134e850, "RTTI_AIWeaponPreference");
	apply_type(0x134e850, "RTTICompound");
	del_items(0x134f834, DELIT_SIMPLE, 8);
	apply_type(0x134f834, "RTTIBase[1]");
	set_name(0x134f834, "AIWeaponPreference::sBases");
	del_items(0x134f83c, DELIT_SIMPLE, 84);
	apply_type(0x134f83c, "RTTIAttr[3]");
	set_name(0x134f83c, "AIWeaponPreference::sAttrs");
	del_items(0x134f890, DELIT_SIMPLE, 12);
	apply_type(0x134f890, "RTTIMessageHandler[1]");
	set_name(0x134f890, "AIWeaponPreference::sMessageHandlers");

	// AIWeaponPreferenceSettings
	set_name(0x134e8c4, "RTTI_AIWeaponPreferenceSettings");
	apply_type(0x134e8c4, "RTTICompound");
	del_items(0x134f89c, DELIT_SIMPLE, 8);
	apply_type(0x134f89c, "RTTIBase[1]");
	set_name(0x134f89c, "AIWeaponPreferenceSettings::sBases");
	del_items(0x134f8a4, DELIT_SIMPLE, 168);
	apply_type(0x134f8a4, "RTTIAttr[6]");
	set_name(0x134f8a4, "AIWeaponPreferenceSettings::sAttrs");
	del_items(0x134f94c, DELIT_SIMPLE, 12);
	apply_type(0x134f94c, "RTTIMessageHandler[1]");
	set_name(0x134f94c, "AIWeaponPreferenceSettings::sMessageHandlers");

	// ATAC
	set_name(0x137f970, "RTTI_ATAC");
	apply_type(0x137f970, "RTTICompound");
	del_items(0x1380b58, DELIT_SIMPLE, 8);
	apply_type(0x1380b58, "RTTIBase[1]");
	set_name(0x1380b58, "ATAC::sBases");

	// ATACAiController
	set_name(0x137f9c4, "RTTI_ATACAiController");
	apply_type(0x137f9c4, "RTTICompound");
	del_items(0x1380b68, DELIT_SIMPLE, 8);
	apply_type(0x1380b68, "RTTIBase[1]");
	set_name(0x1380b68, "ATACAiController::sBases");

	// ATACController
	set_name(0x137fa18, "RTTI_ATACController");
	apply_type(0x137fa18, "RTTICompound");
	del_items(0x1380b60, DELIT_SIMPLE, 8);
	apply_type(0x1380b60, "RTTIBase[1]");
	set_name(0x1380b60, "ATACController::sBases");

	// ATACResource
	set_name(0x137fa6c, "RTTI_ATACResource");
	apply_type(0x137fa6c, "RTTICompound");
	del_items(0x1380a00, DELIT_SIMPLE, 8);
	apply_type(0x1380a00, "RTTIBase[1]");
	set_name(0x1380a00, "ATACResource::sBases");
	del_items(0x1380a08, DELIT_SIMPLE, 336);
	apply_type(0x1380a08, "RTTIAttr[12]");
	set_name(0x1380a08, "ATACResource::sAttrs");

	// Ability
	set_name(0x135e638, "RTTI_Ability");
	apply_type(0x135e638, "RTTICompound");
	del_items(0x1360058, DELIT_SIMPLE, 8);
	apply_type(0x1360058, "RTTIBase[1]");
	set_name(0x1360058, "Ability::sBases");

	// AbilityAnimatedByParent
	set_name(0x135e68c, "RTTI_AbilityAnimatedByParent");
	apply_type(0x135e68c, "RTTICompound");
	del_items(0x13615b8, DELIT_SIMPLE, 8);
	apply_type(0x13615b8, "RTTIBase[1]");
	set_name(0x13615b8, "AbilityAnimatedByParent::sBases");

	// AbilityAnimatedByParentResource
	set_name(0x135e6f0, "RTTI_AbilityAnimatedByParentResource");
	apply_type(0x135e6f0, "RTTICompound");
	del_items(0x13615c0, DELIT_SIMPLE, 8);
	apply_type(0x13615c0, "RTTIBase[1]");
	set_name(0x13615c0, "AbilityAnimatedByParentResource::sBases");
	del_items(0x13615c8, DELIT_SIMPLE, 84);
	apply_type(0x13615c8, "RTTIAttr[3]");
	set_name(0x13615c8, "AbilityAnimatedByParentResource::sAttrs");

	// AbilityAnimation
	set_name(0x135e744, "RTTI_AbilityAnimation");
	apply_type(0x135e744, "RTTICompound");
	del_items(0x13608fc, DELIT_SIMPLE, 16);
	apply_type(0x13608fc, "RTTIBase[2]");
	set_name(0x13608fc, "AbilityAnimation::sBases");

	// AbilityAnimationResource
	set_name(0x135e7b8, "RTTI_AbilityAnimationResource");
	apply_type(0x135e7b8, "RTTICompound");
	del_items(0x136161c, DELIT_SIMPLE, 8);
	apply_type(0x136161c, "RTTIBase[1]");
	set_name(0x136161c, "AbilityAnimationResource::sBases");
	del_items(0x1361624, DELIT_SIMPLE, 196);
	apply_type(0x1361624, "RTTIAttr[7]");
	set_name(0x1361624, "AbilityAnimationResource::sAttrs");

	// AbilityFootPlacement
	set_name(0x135e8c4, "RTTI_AbilityFootPlacement");
	apply_type(0x135e8c4, "RTTICompound");
	del_items(0x1361730, DELIT_SIMPLE, 8);
	apply_type(0x1361730, "RTTIBase[1]");
	set_name(0x1361730, "AbilityFootPlacement::sBases");

	// AbilityFootPlacementResource
	set_name(0x135e928, "RTTI_AbilityFootPlacementResource");
	apply_type(0x135e928, "RTTICompound");
	del_items(0x1361a8c, DELIT_SIMPLE, 8);
	apply_type(0x1361a8c, "RTTIBase[1]");
	set_name(0x1361a8c, "AbilityFootPlacementResource::sBases");
	del_items(0x1361a94, DELIT_SIMPLE, 644);
	apply_type(0x1361a94, "RTTIAttr[23]");
	set_name(0x1361a94, "AbilityFootPlacementResource::sAttrs");

	// AbilityLookAt
	set_name(0x135f150, "RTTI_AbilityLookAt");
	apply_type(0x135f150, "RTTICompound");
	del_items(0x13622dc, DELIT_SIMPLE, 8);
	apply_type(0x13622dc, "RTTIBase[1]");
	set_name(0x13622dc, "AbilityLookAt::sBases");

	// AbilityLookAtResource
	set_name(0x135f1a4, "RTTI_AbilityLookAtResource");
	apply_type(0x135f1a4, "RTTICompound");
	del_items(0x136222c, DELIT_SIMPLE, 8);
	apply_type(0x136222c, "RTTIBase[1]");
	set_name(0x136222c, "AbilityLookAtResource::sBases");
	del_items(0x1362234, DELIT_SIMPLE, 168);
	apply_type(0x1362234, "RTTIAttr[6]");
	set_name(0x1362234, "AbilityLookAtResource::sAttrs");

	// AbilityPBDTwoJointIk
	set_name(0x135ea34, "RTTI_AbilityPBDTwoJointIk");
	apply_type(0x135ea34, "RTTICompound");
	del_items(0x1361efc, DELIT_SIMPLE, 8);
	apply_type(0x1361efc, "RTTIBase[1]");
	set_name(0x1361efc, "AbilityPBDTwoJointIk::sBases");

	// AbilityPBDTwoJointIkResource
	set_name(0x135e9e0, "RTTI_AbilityPBDTwoJointIkResource");
	apply_type(0x135e9e0, "RTTICompound");
	del_items(0x1361e84, DELIT_SIMPLE, 8);
	apply_type(0x1361e84, "RTTIBase[1]");
	set_name(0x1361e84, "AbilityPBDTwoJointIkResource::sBases");
	del_items(0x1361e8c, DELIT_SIMPLE, 112);
	apply_type(0x1361e8c, "RTTIAttr[4]");
	set_name(0x1361e8c, "AbilityPBDTwoJointIkResource::sAttrs");

	// AbilityPhonemeAnimation
	set_name(0x135ea88, "RTTI_AbilityPhonemeAnimation");
	apply_type(0x135ea88, "RTTICompound");
	del_items(0x1361f04, DELIT_SIMPLE, 8);
	apply_type(0x1361f04, "RTTIBase[1]");
	set_name(0x1361f04, "AbilityPhonemeAnimation::sBases");

	// AbilityPhonemeAnimationRep
	set_name(0x135eadc, "RTTI_AbilityPhonemeAnimationRep");
	apply_type(0x135eadc, "RTTICompound");
	del_items(0x1362034, DELIT_SIMPLE, 8);
	apply_type(0x1362034, "RTTIBase[1]");
	set_name(0x1362034, "AbilityPhonemeAnimationRep::sBases");

	// AbilityPhonemeAnimationResource
	set_name(0x135ec18, "RTTI_AbilityPhonemeAnimationResource");
	apply_type(0x135ec18, "RTTICompound");
	del_items(0x1361fd8, DELIT_SIMPLE, 8);
	apply_type(0x1361fd8, "RTTIBase[1]");
	set_name(0x1361fd8, "AbilityPhonemeAnimationResource::sBases");
	del_items(0x1361fe0, DELIT_SIMPLE, 84);
	apply_type(0x1361fe0, "RTTIAttr[3]");
	set_name(0x1361fe0, "AbilityPhonemeAnimationResource::sAttrs");

	// AbilityRagdoll
	set_name(0x135ec6c, "RTTI_AbilityRagdoll");
	apply_type(0x135ec6c, "RTTICompound");
	del_items(0x1360060, DELIT_SIMPLE, 8);
	apply_type(0x1360060, "RTTIBase[1]");
	set_name(0x1360060, "AbilityRagdoll::sBases");

	// AbilityRagdollConstraintMotorData
	set_name(0x135ecd0, "RTTI_AbilityRagdollConstraintMotorData");
	apply_type(0x135ecd0, "RTTICompound");
	del_items(0x1361738, DELIT_SIMPLE, 140);
	apply_type(0x1361738, "RTTIAttr[5]");
	set_name(0x1361738, "AbilityRagdollConstraintMotorData::sAttrs");

	// AbilityRagdollResource
	set_name(0x135edfc, "RTTI_AbilityRagdollResource");
	apply_type(0x135edfc, "RTTICompound");
	del_items(0x136183c, DELIT_SIMPLE, 8);
	apply_type(0x136183c, "RTTIBase[1]");
	set_name(0x136183c, "AbilityRagdollResource::sBases");
	del_items(0x1361844, DELIT_SIMPLE, 560);
	apply_type(0x1361844, "RTTIAttr[20]");
	set_name(0x1361844, "AbilityRagdollResource::sAttrs");
	del_items(0x1361a74, DELIT_SIMPLE, 24);
	apply_type(0x1361a74, "RTTIMessageHandler[2]");
	set_name(0x1361a74, "AbilityRagdollResource::sMessageHandlers");

	// AbilityRep
	set_name(0x13622e4, "RTTI_AbilityRep");
	apply_type(0x13622e4, "RTTICompound");
	del_items(0x1363a18, DELIT_SIMPLE, 8);
	apply_type(0x1363a18, "RTTIBase[1]");
	set_name(0x1363a18, "AbilityRep::sBases");

	// AbilityResource
	set_name(0x135ee70, "RTTI_AbilityResource");
	apply_type(0x135ee70, "RTTICompound");
	del_items(0x13615b0, DELIT_SIMPLE, 8);
	apply_type(0x13615b0, "RTTIBase[1]");
	set_name(0x13615b0, "AbilityResource::sBases");

	// AbilityShaderAnimation
	set_name(0x135ef7c, "RTTI_AbilityShaderAnimation");
	apply_type(0x135ef7c, "RTTICompound");
	del_items(0x13620a0, DELIT_SIMPLE, 8);
	apply_type(0x13620a0, "RTTIBase[1]");
	set_name(0x13620a0, "AbilityShaderAnimation::sBases");

	// AbilityShaderAnimationRep
	set_name(0x136238c, "RTTI_AbilityShaderAnimationRep");
	apply_type(0x136238c, "RTTICompound");
	del_items(0x1363e34, DELIT_SIMPLE, 8);
	apply_type(0x1363e34, "RTTIBase[1]");
	set_name(0x1363e34, "AbilityShaderAnimationRep::sBases");

	// AbilityShaderAnimationResource
	set_name(0x135f044, "RTTI_AbilityShaderAnimationResource");
	apply_type(0x135f044, "RTTICompound");
	del_items(0x13620e0, DELIT_SIMPLE, 8);
	apply_type(0x13620e0, "RTTIBase[1]");
	set_name(0x13620e0, "AbilityShaderAnimationResource::sBases");
	del_items(0x13620e8, DELIT_SIMPLE, 56);
	apply_type(0x13620e8, "RTTIAttr[2]");
	set_name(0x13620e8, "AbilityShaderAnimationResource::sAttrs");

	// AbilityShaderAnimationResourceLink
	set_name(0x135efe0, "RTTI_AbilityShaderAnimationResourceLink");
	apply_type(0x135efe0, "RTTICompound");
	del_items(0x13620a8, DELIT_SIMPLE, 56);
	apply_type(0x13620a8, "RTTIAttr[2]");
	set_name(0x13620a8, "AbilityShaderAnimationResourceLink::sAttrs");

	// AbilitySimpleAnimation
	set_name(0x135e80c, "RTTI_AbilitySimpleAnimation");
	apply_type(0x135e80c, "RTTICompound");
	del_items(0x13616e8, DELIT_SIMPLE, 8);
	apply_type(0x13616e8, "RTTIBase[1]");
	set_name(0x13616e8, "AbilitySimpleAnimation::sBases");

	// AbilitySimpleAnimationRep
	set_name(0x1362338, "RTTI_AbilitySimpleAnimationRep");
	apply_type(0x1362338, "RTTICompound");
	del_items(0x1363a20, DELIT_SIMPLE, 8);
	apply_type(0x1363a20, "RTTIBase[1]");
	set_name(0x1363a20, "AbilitySimpleAnimationRep::sBases");

	// AbilitySimpleAnimationResource
	set_name(0x135e870, "RTTI_AbilitySimpleAnimationResource");
	apply_type(0x135e870, "RTTICompound");
	del_items(0x13616f0, DELIT_SIMPLE, 8);
	apply_type(0x13616f0, "RTTIBase[1]");
	set_name(0x13616f0, "AbilitySimpleAnimationResource::sBases");
	del_items(0x13616f8, DELIT_SIMPLE, 56);
	apply_type(0x13616f8, "RTTIAttr[2]");
	set_name(0x13616f8, "AbilitySimpleAnimationResource::sAttrs");

	// AbilityTwoBoneIK
	set_name(0x135eec4, "RTTI_AbilityTwoBoneIK");
	apply_type(0x135eec4, "RTTICompound");
	del_items(0x136203c, DELIT_SIMPLE, 8);
	apply_type(0x136203c, "RTTIBase[1]");
	set_name(0x136203c, "AbilityTwoBoneIK::sBases");

	// AbilityTwoBoneIKResource
	set_name(0x135ef28, "RTTI_AbilityTwoBoneIKResource");
	apply_type(0x135ef28, "RTTICompound");
	del_items(0x1362044, DELIT_SIMPLE, 8);
	apply_type(0x1362044, "RTTIBase[1]");
	set_name(0x1362044, "AbilityTwoBoneIKResource::sBases");
	del_items(0x136204c, DELIT_SIMPLE, 84);
	apply_type(0x136204c, "RTTIAttr[3]");
	set_name(0x136204c, "AbilityTwoBoneIKResource::sAttrs");

	// AbilityWindAnimation
	set_name(0x135f098, "RTTI_AbilityWindAnimation");
	apply_type(0x135f098, "RTTICompound");
	del_items(0x1362224, DELIT_SIMPLE, 8);
	apply_type(0x1362224, "RTTIBase[1]");
	set_name(0x1362224, "AbilityWindAnimation::sBases");

	// AbilityWindAnimationRep
	set_name(0x13623e0, "RTTI_AbilityWindAnimationRep");
	apply_type(0x13623e0, "RTTICompound");
	del_items(0x1363e3c, DELIT_SIMPLE, 8);
	apply_type(0x1363e3c, "RTTIBase[1]");
	set_name(0x1363e3c, "AbilityWindAnimationRep::sBases");

	// AbilityWindAnimationResource
	set_name(0x135f0fc, "RTTI_AbilityWindAnimationResource");
	apply_type(0x135f0fc, "RTTICompound");
	del_items(0x1362120, DELIT_SIMPLE, 8);
	apply_type(0x1362120, "RTTIBase[1]");
	set_name(0x1362120, "AbilityWindAnimationResource::sBases");
	del_items(0x1362128, DELIT_SIMPLE, 252);
	apply_type(0x1362128, "RTTIAttr[9]");
	set_name(0x1362128, "AbilityWindAnimationResource::sAttrs");

	// AccuracySettings
	set_name(0x139c748, "RTTI_AccuracySettings");
	apply_type(0x139c748, "RTTICompound");
	del_items(0x139e304, DELIT_SIMPLE, 8);
	apply_type(0x139e304, "RTTIBase[1]");
	set_name(0x139e304, "AccuracySettings::sBases");
	del_items(0x139e30c, DELIT_SIMPLE, 308);
	apply_type(0x139e30c, "RTTIAttr[11]");
	set_name(0x139e30c, "AccuracySettings::sAttrs");

	// Achievement
	set_name(0x136d1dc, "RTTI_Achievement");
	apply_type(0x136d1dc, "RTTICompound");
	del_items(0x13709c8, DELIT_SIMPLE, 140);
	apply_type(0x13709c8, "RTTIAttr[5]");
	set_name(0x13709c8, "Achievement::sAttrs");

	// AchievementsResource
	set_name(0x136d230, "RTTI_AchievementsResource");
	apply_type(0x136d230, "RTTICompound");
	del_items(0x1370a54, DELIT_SIMPLE, 8);
	apply_type(0x1370a54, "RTTIBase[1]");
	set_name(0x1370a54, "AchievementsResource::sBases");
	del_items(0x1370a5c, DELIT_SIMPLE, 56);
	apply_type(0x1370a5c, "RTTIAttr[2]");
	set_name(0x1370a5c, "AchievementsResource::sAttrs");

	// ActionPerAnimationEvent
	set_name(0x1389474, "RTTI_ActionPerAnimationEvent");
	apply_type(0x1389474, "RTTICompound");
	del_items(0x138c62c, DELIT_SIMPLE, 56);
	apply_type(0x138c62c, "RTTIAttr[2]");
	set_name(0x138c62c, "ActionPerAnimationEvent::sAttrs");

	// ActivateWindBoxEventInstance
	set_name(0x1396b24, "RTTI_ActivateWindBoxEventInstance");
	apply_type(0x1396b24, "RTTICompound");
	del_items(0x1398a8c, DELIT_SIMPLE, 8);
	apply_type(0x1398a8c, "RTTIBase[1]");
	set_name(0x1398a8c, "ActivateWindBoxEventInstance::sBases");

	// ActivateWindBoxEventResource
	set_name(0x1396ad0, "RTTI_ActivateWindBoxEventResource");
	apply_type(0x1396ad0, "RTTICompound");
	del_items(0x1398a30, DELIT_SIMPLE, 8);
	apply_type(0x1398a30, "RTTIBase[1]");
	set_name(0x1398a30, "ActivateWindBoxEventResource::sBases");
	del_items(0x1398a38, DELIT_SIMPLE, 84);
	apply_type(0x1398a38, "RTTIAttr[3]");
	set_name(0x1398a38, "ActivateWindBoxEventResource::sAttrs");

	// ActorInstance
	set_name(0x139a364, "RTTI_ActorInstance");
	apply_type(0x139a364, "RTTICompound");
	del_items(0x139b7b8, DELIT_SIMPLE, 8);
	apply_type(0x139b7b8, "RTTIBase[1]");
	set_name(0x139b7b8, "ActorInstance::sBases");

	// ActorResource
	set_name(0x139a310, "RTTI_ActorResource");
	apply_type(0x139a310, "RTTICompound");
	del_items(0x139b7b0, DELIT_SIMPLE, 8);
	apply_type(0x139b7b0, "RTTIBase[1]");
	set_name(0x139b7b0, "ActorResource::sBases");

	// AimAtEventInstance
	set_name(0x13938ec, "RTTI_AimAtEventInstance");
	apply_type(0x13938ec, "RTTICompound");
	del_items(0x13957b0, DELIT_SIMPLE, 8);
	apply_type(0x13957b0, "RTTIBase[1]");
	set_name(0x13957b0, "AimAtEventInstance::sBases");

	// AimAtEventResource
	set_name(0x1393898, "RTTI_AimAtEventResource");
	apply_type(0x1393898, "RTTICompound");
	del_items(0x1395700, DELIT_SIMPLE, 8);
	apply_type(0x1395700, "RTTIBase[1]");
	set_name(0x1395700, "AimAtEventResource::sBases");
	del_items(0x1395708, DELIT_SIMPLE, 168);
	apply_type(0x1395708, "RTTIAttr[6]");
	set_name(0x1395708, "AimAtEventResource::sAttrs");

	// AimDeviation
	set_name(0x139c7ac, "RTTI_AimDeviation");
	apply_type(0x139c7ac, "RTTICompound");

	// AimDeviationResource
	set_name(0x139c810, "RTTI_AimDeviationResource");
	apply_type(0x139c810, "RTTICompound");
	del_items(0x139e44c, DELIT_SIMPLE, 8);
	apply_type(0x139e44c, "RTTIBase[1]");
	set_name(0x139e44c, "AimDeviationResource::sBases");
	del_items(0x139e454, DELIT_SIMPLE, 504);
	apply_type(0x139e454, "RTTIAttr[18]");
	set_name(0x139e454, "AimDeviationResource::sAttrs");
	del_items(0x139e64c, DELIT_SIMPLE, 12);
	apply_type(0x139e64c, "RTTIMessageHandler[1]");
	set_name(0x139e64c, "AimDeviationResource::sMessageHandlers");

	// AimLagSettings
	set_name(0x138d3d8, "RTTI_AimLagSettings");
	apply_type(0x138d3d8, "RTTICompound");
	del_items(0x138ede8, DELIT_SIMPLE, 8);
	apply_type(0x138ede8, "RTTIBase[1]");
	set_name(0x138ede8, "AimLagSettings::sBases");
	del_items(0x138edf0, DELIT_SIMPLE, 196);
	apply_type(0x138edf0, "RTTIAttr[7]");
	set_name(0x138edf0, "AimLagSettings::sAttrs");

	// AimLimitsEventInstance
	set_name(0x1393994, "RTTI_AimLimitsEventInstance");
	apply_type(0x1393994, "RTTICompound");
	del_items(0x139584c, DELIT_SIMPLE, 8);
	apply_type(0x139584c, "RTTIBase[1]");
	set_name(0x139584c, "AimLimitsEventInstance::sBases");

	// AimLimitsEventResource
	set_name(0x1393940, "RTTI_AimLimitsEventResource");
	apply_type(0x1393940, "RTTICompound");
	del_items(0x13957b8, DELIT_SIMPLE, 8);
	apply_type(0x13957b8, "RTTIBase[1]");
	set_name(0x13957b8, "AimLimitsEventResource::sBases");
	del_items(0x13957c0, DELIT_SIMPLE, 140);
	apply_type(0x13957c0, "RTTIAttr[5]");
	set_name(0x13957c0, "AimLimitsEventResource::sAttrs");

	// AirSupportGrenade
	set_name(0x1391ec8, "RTTI_AirSupportGrenade");
	apply_type(0x1391ec8, "RTTICompound");
	del_items(0x1392c28, DELIT_SIMPLE, 8);
	apply_type(0x1392c28, "RTTIBase[1]");
	set_name(0x1392c28, "AirSupportGrenade::sBases");

	// AirSupportGrenadeResource
	set_name(0x1391f80, "RTTI_AirSupportGrenadeResource");
	apply_type(0x1391f80, "RTTICompound");
	del_items(0x1392c74, DELIT_SIMPLE, 8);
	apply_type(0x1392c74, "RTTIBase[1]");
	set_name(0x1392c74, "AirSupportGrenadeResource::sBases");
	del_items(0x1392c7c, DELIT_SIMPLE, 224);
	apply_type(0x1392c7c, "RTTIAttr[8]");
	set_name(0x1392c7c, "AirSupportGrenadeResource::sAttrs");

	// AirVehicle
	set_name(0x137f7bc, "RTTI_AirVehicle");
	apply_type(0x137f7bc, "RTTICompound");
	del_items(0x13809c4, DELIT_SIMPLE, 8);
	apply_type(0x13809c4, "RTTIBase[1]");
	set_name(0x13809c4, "AirVehicle::sBases");
	del_items(0x13809cc, DELIT_SIMPLE, 24);
	apply_type(0x13809cc, "RTTIFunction[1]");
	set_name(0x13809cc, "AirVehicle::sFunctions");

	// AirVehicleController
	set_name(0x137f91c, "RTTI_AirVehicleController");
	apply_type(0x137f91c, "RTTICompound");
	del_items(0x13809ec, DELIT_SIMPLE, 8);
	apply_type(0x13809ec, "RTTIBase[1]");
	set_name(0x13809ec, "AirVehicleController::sBases");

	// AirVehicleMover
	set_name(0x13a6610, "RTTI_AirVehicleMover");
	apply_type(0x13a6610, "RTTICompound");
	del_items(0x13a70ac, DELIT_SIMPLE, 8);
	apply_type(0x13a70ac, "RTTIBase[1]");
	set_name(0x13a70ac, "AirVehicleMover::sBases");

	// AirVehicleMoverResource
	set_name(0x13a6664, "RTTI_AirVehicleMoverResource");
	apply_type(0x13a6664, "RTTICompound");
	del_items(0x13a70b4, DELIT_SIMPLE, 8);
	apply_type(0x13a70b4, "RTTIBase[1]");
	set_name(0x13a70b4, "AirVehicleMoverResource::sBases");
	del_items(0x13a70bc, DELIT_SIMPLE, 728);
	apply_type(0x13a70bc, "RTTIAttr[26]");
	set_name(0x13a70bc, "AirVehicleMoverResource::sAttrs");

	// AirVehiclePendulumResource
	set_name(0x137f820, "RTTI_AirVehiclePendulumResource");
	apply_type(0x137f820, "RTTICompound");
	del_items(0x1380708, DELIT_SIMPLE, 8);
	apply_type(0x1380708, "RTTIBase[1]");
	set_name(0x1380708, "AirVehiclePendulumResource::sBases");
	del_items(0x1380710, DELIT_SIMPLE, 196);
	apply_type(0x1380710, "RTTIAttr[7]");
	set_name(0x1380710, "AirVehiclePendulumResource::sAttrs");

	// AirVehicleRep
	set_name(0x137f8c8, "RTTI_AirVehicleRep");
	apply_type(0x137f8c8, "RTTICompound");
	del_items(0x13809e4, DELIT_SIMPLE, 8);
	apply_type(0x13809e4, "RTTIBase[1]");
	set_name(0x13809e4, "AirVehicleRep::sBases");

	// AirVehicleResource
	set_name(0x137f874, "RTTI_AirVehicleResource");
	apply_type(0x137f874, "RTTICompound");
	del_items(0x13807d4, DELIT_SIMPLE, 8);
	apply_type(0x13807d4, "RTTIBase[1]");
	set_name(0x13807d4, "AirVehicleResource::sBases");
	del_items(0x13807dc, DELIT_SIMPLE, 476);
	apply_type(0x13807dc, "RTTIAttr[17]");
	set_name(0x13807dc, "AirVehicleResource::sAttrs");
	del_items(0x13809b8, DELIT_SIMPLE, 12);
	apply_type(0x13809b8, "RTTIMessageHandler[1]");
	set_name(0x13809b8, "AirVehicleResource::sMessageHandlers");

	// AlphaPeg
	set_name(0x135c430, "RTTI_AlphaPeg");
	apply_type(0x135c430, "RTTICompound");
	del_items(0x135c858, DELIT_SIMPLE, 8);
	apply_type(0x135c858, "RTTIBase[1]");
	set_name(0x135c858, "AlphaPeg::sBases");
	del_items(0x135c860, DELIT_SIMPLE, 56);
	apply_type(0x135c860, "RTTIAttr[2]");
	set_name(0x135c860, "AlphaPeg::sAttrs");

	// AmbientSoundEventInstance
	set_name(0x1393a3c, "RTTI_AmbientSoundEventInstance");
	apply_type(0x1393a3c, "RTTICompound");
	del_items(0x13959d8, DELIT_SIMPLE, 8);
	apply_type(0x13959d8, "RTTIBase[1]");
	set_name(0x13959d8, "AmbientSoundEventInstance::sBases");

	// AmbientSoundEventResource
	set_name(0x13939e8, "RTTI_AmbientSoundEventResource");
	apply_type(0x13939e8, "RTTICompound");
	del_items(0x1395944, DELIT_SIMPLE, 8);
	apply_type(0x1395944, "RTTIBase[1]");
	set_name(0x1395944, "AmbientSoundEventResource::sBases");
	del_items(0x139594c, DELIT_SIMPLE, 140);
	apply_type(0x139594c, "RTTIAttr[5]");
	set_name(0x139594c, "AmbientSoundEventResource::sAttrs");

	// AmbientSoundPortal
	set_name(0x1358df0, "RTTI_AmbientSoundPortal");
	apply_type(0x1358df0, "RTTICompound");
	del_items(0x135be98, DELIT_SIMPLE, 8);
	apply_type(0x135be98, "RTTIBase[1]");
	set_name(0x135be98, "AmbientSoundPortal::sBases");

	// AmbientSoundPortalManager
	set_name(0x1358d4c, "RTTI_AmbientSoundPortalManager");
	apply_type(0x1358d4c, "RTTICompound");
	del_items(0x135be90, DELIT_SIMPLE, 8);
	apply_type(0x135be90, "RTTIBase[1]");
	set_name(0x135be90, "AmbientSoundPortalManager::sBases");

	// AmbientSoundZone
	set_name(0x1358e94, "RTTI_AmbientSoundZone");
	apply_type(0x1358e94, "RTTICompound");
	del_items(0x135bea0, DELIT_SIMPLE, 8);
	apply_type(0x135bea0, "RTTIBase[1]");
	set_name(0x135bea0, "AmbientSoundZone::sBases");

	// Ammo
	set_name(0x139c864, "RTTI_Ammo");
	apply_type(0x139c864, "RTTICompound");
	del_items(0x139e2d8, DELIT_SIMPLE, 16);
	apply_type(0x139e2d8, "RTTIBase[2]");
	set_name(0x139e2d8, "Ammo::sBases");
	del_items(0x139e2e8, DELIT_SIMPLE, 28);
	apply_type(0x139e2e8, "RTTIAttr[1]");
	set_name(0x139e2e8, "Ammo::sAttrs");

	// AmmoBeltAnimationSettings
	set_name(0x137d350, "RTTI_AmmoBeltAnimationSettings");
	apply_type(0x137d350, "RTTICompound");
	del_items(0x137e808, DELIT_SIMPLE, 56);
	apply_type(0x137e808, "RTTIAttr[2]");
	set_name(0x137e808, "AmmoBeltAnimationSettings::sAttrs");

	// AmmoBox
	set_name(0x137a7a0, "RTTI_AmmoBox");
	apply_type(0x137a7a0, "RTTICompound");
	del_items(0x137c620, DELIT_SIMPLE, 8);
	apply_type(0x137c620, "RTTIBase[1]");
	set_name(0x137c620, "AmmoBox::sBases");
	del_items(0x137c628, DELIT_SIMPLE, 12);
	apply_type(0x137c628, "RTTIMessageHandler[1]");
	set_name(0x137c628, "AmmoBox::sMessageHandlers");

	// AmmoBoxRep
	set_name(0x137a7f4, "RTTI_AmmoBoxRep");
	apply_type(0x137a7f4, "RTTICompound");
	del_items(0x137c644, DELIT_SIMPLE, 8);
	apply_type(0x137c644, "RTTIBase[1]");
	set_name(0x137c644, "AmmoBoxRep::sBases");

	// AmmoBoxResource
	set_name(0x137a8ac, "RTTI_AmmoBoxResource");
	apply_type(0x137a8ac, "RTTICompound");
	del_items(0x137c4a4, DELIT_SIMPLE, 8);
	apply_type(0x137c4a4, "RTTIBase[1]");
	set_name(0x137c4a4, "AmmoBoxResource::sBases");
	del_items(0x137c4ac, DELIT_SIMPLE, 112);
	apply_type(0x137c4ac, "RTTIAttr[4]");
	set_name(0x137c4ac, "AmmoBoxResource::sAttrs");

	// AmmoBoxResourceReloadSettings
	set_name(0x137a858, "RTTI_AmmoBoxResourceReloadSettings");
	apply_type(0x137a858, "RTTICompound");
	del_items(0x137c3e8, DELIT_SIMPLE, 8);
	apply_type(0x137c3e8, "RTTIBase[1]");
	set_name(0x137c3e8, "AmmoBoxResourceReloadSettings::sBases");
	del_items(0x137c3f0, DELIT_SIMPLE, 168);
	apply_type(0x137c3f0, "RTTIAttr[6]");
	set_name(0x137c3f0, "AmmoBoxResourceReloadSettings::sAttrs");

	// AmmoEjector
	set_name(0x139c8b8, "RTTI_AmmoEjector");
	apply_type(0x139c8b8, "RTTICompound");
	del_items(0x139e440, DELIT_SIMPLE, 8);
	apply_type(0x139e440, "RTTIBase[1]");
	set_name(0x139e440, "AmmoEjector::sBases");

	// AmmoEjectorRep
	set_name(0x139c90c, "RTTI_AmmoEjectorRep");
	apply_type(0x139c90c, "RTTICompound");
	del_items(0x139e658, DELIT_SIMPLE, 8);
	apply_type(0x139e658, "RTTIBase[1]");
	set_name(0x139e658, "AmmoEjectorRep::sBases");

	// AmmoEjectorResource
	set_name(0x139c980, "RTTI_AmmoEjectorResource");
	apply_type(0x139c980, "RTTICompound");
	del_items(0x139d7c8, DELIT_SIMPLE, 8);
	apply_type(0x139d7c8, "RTTIBase[1]");
	set_name(0x139d7c8, "AmmoEjectorResource::sBases");
	del_items(0x139d7d0, DELIT_SIMPLE, 2632);
	apply_type(0x139d7d0, "RTTIAttr[94]");
	set_name(0x139d7d0, "AmmoEjectorResource::sAttrs");
	del_items(0x139e218, DELIT_SIMPLE, 12);
	apply_type(0x139e218, "RTTIMessageHandler[1]");
	set_name(0x139e218, "AmmoEjectorResource::sMessageHandlers");

	// AmmoPickupSetting
	set_name(0x139378c, "RTTI_AmmoPickupSetting");
	apply_type(0x139378c, "RTTICompound");
	del_items(0x1395398, DELIT_SIMPLE, 56);
	apply_type(0x1395398, "RTTIAttr[2]");
	set_name(0x1395398, "AmmoPickupSetting::sAttrs");

	// AmmoResource
	set_name(0x139ca9c, "RTTI_AmmoResource");
	apply_type(0x139ca9c, "RTTICompound");
	del_items(0x139e228, DELIT_SIMPLE, 8);
	apply_type(0x139e228, "RTTIBase[1]");
	set_name(0x139e228, "AmmoResource::sBases");
	del_items(0x139e230, DELIT_SIMPLE, 168);
	apply_type(0x139e230, "RTTIAttr[6]");
	set_name(0x139e230, "AmmoResource::sAttrs");

	// AnimatedCameraEventInstance
	set_name(0x1393ae4, "RTTI_AnimatedCameraEventInstance");
	apply_type(0x1393ae4, "RTTICompound");
	del_items(0x1395ae4, DELIT_SIMPLE, 8);
	apply_type(0x1395ae4, "RTTIBase[1]");
	set_name(0x1395ae4, "AnimatedCameraEventInstance::sBases");

	// AnimatedCameraEventResource
	set_name(0x1393a90, "RTTI_AnimatedCameraEventResource");
	apply_type(0x1393a90, "RTTICompound");
	del_items(0x13959e0, DELIT_SIMPLE, 8);
	apply_type(0x13959e0, "RTTIBase[1]");
	set_name(0x13959e0, "AnimatedCameraEventResource::sBases");
	del_items(0x13959e8, DELIT_SIMPLE, 252);
	apply_type(0x13959e8, "RTTIAttr[9]");
	set_name(0x13959e8, "AnimatedCameraEventResource::sAttrs");

	// AnimatedEntityActorInstance
	set_name(0x139a41c, "RTTI_AnimatedEntityActorInstance");
	apply_type(0x139a41c, "RTTICompound");
	del_items(0x139b9e0, DELIT_SIMPLE, 8);
	apply_type(0x139b9e0, "RTTIBase[1]");
	set_name(0x139b9e0, "AnimatedEntityActorInstance::sBases");

	// AnimatedEntityActorResource
	set_name(0x139a3c8, "RTTI_AnimatedEntityActorResource");
	apply_type(0x139a3c8, "RTTICompound");
	del_items(0x139b9a0, DELIT_SIMPLE, 8);
	apply_type(0x139b9a0, "RTTIBase[1]");
	set_name(0x139b9a0, "AnimatedEntityActorResource::sBases");
	del_items(0x139b9a8, DELIT_SIMPLE, 56);
	apply_type(0x139b9a8, "RTTIAttr[2]");
	set_name(0x139b9a8, "AnimatedEntityActorResource::sAttrs");

	// AnimatedEntityEventInstance
	set_name(0x1396bcc, "RTTI_AnimatedEntityEventInstance");
	apply_type(0x1396bcc, "RTTICompound");
	del_items(0x1398bd8, DELIT_SIMPLE, 8);
	apply_type(0x1398bd8, "RTTIBase[1]");
	set_name(0x1398bd8, "AnimatedEntityEventInstance::sBases");

	// AnimatedEntityEventResource
	set_name(0x1396b78, "RTTI_AnimatedEntityEventResource");
	apply_type(0x1396b78, "RTTICompound");
	del_items(0x1398af0, DELIT_SIMPLE, 8);
	apply_type(0x1398af0, "RTTIBase[1]");
	set_name(0x1398af0, "AnimatedEntityEventResource::sBases");
	del_items(0x1398af8, DELIT_SIMPLE, 224);
	apply_type(0x1398af8, "RTTIAttr[8]");
	set_name(0x1398af8, "AnimatedEntityEventResource::sAttrs");

	// AnimatedMeshEventInstance
	set_name(0x1396c74, "RTTI_AnimatedMeshEventInstance");
	apply_type(0x1396c74, "RTTICompound");
	del_items(0x1398d2c, DELIT_SIMPLE, 8);
	apply_type(0x1398d2c, "RTTIBase[1]");
	set_name(0x1398d2c, "AnimatedMeshEventInstance::sBases");

	// AnimatedMeshEventResource
	set_name(0x1396c20, "RTTI_AnimatedMeshEventResource");
	apply_type(0x1396c20, "RTTICompound");
	del_items(0x1398c98, DELIT_SIMPLE, 8);
	apply_type(0x1398c98, "RTTIBase[1]");
	set_name(0x1398c98, "AnimatedMeshEventResource::sBases");
	del_items(0x1398ca0, DELIT_SIMPLE, 140);
	apply_type(0x1398ca0, "RTTIAttr[5]");
	set_name(0x1398ca0, "AnimatedMeshEventResource::sAttrs");

	// AnimatedModelActorInstance
	set_name(0x139a4c4, "RTTI_AnimatedModelActorInstance");
	apply_type(0x139a4c4, "RTTICompound");
	del_items(0x139bb1c, DELIT_SIMPLE, 8);
	apply_type(0x139bb1c, "RTTIBase[1]");
	set_name(0x139bb1c, "AnimatedModelActorInstance::sBases");

	// AnimatedModelActorResource
	set_name(0x139a470, "RTTI_AnimatedModelActorResource");
	apply_type(0x139a470, "RTTICompound");
	del_items(0x139badc, DELIT_SIMPLE, 8);
	apply_type(0x139badc, "RTTIBase[1]");
	set_name(0x139badc, "AnimatedModelActorResource::sBases");
	del_items(0x139bae4, DELIT_SIMPLE, 56);
	apply_type(0x139bae4, "RTTIAttr[2]");
	set_name(0x139bae4, "AnimatedModelActorResource::sAttrs");

	// AnimatedModelEntity
	set_name(0x139aea8, "RTTI_AnimatedModelEntity");
	apply_type(0x139aea8, "RTTICompound");
	del_items(0x139bed4, DELIT_SIMPLE, 8);
	apply_type(0x139bed4, "RTTIBase[1]");
	set_name(0x139bed4, "AnimatedModelEntity::sBases");

	// AnimatedModelEntityResource
	set_name(0x139aefc, "RTTI_AnimatedModelEntityResource");
	apply_type(0x139aefc, "RTTICompound");
	del_items(0x139bee8, DELIT_SIMPLE, 8);
	apply_type(0x139bee8, "RTTIBase[1]");
	set_name(0x139bee8, "AnimatedModelEntityResource::sBases");

	// AnimatedPlayerCameraEventInstance
	set_name(0x1393b8c, "RTTI_AnimatedPlayerCameraEventInstance");
	apply_type(0x1393b8c, "RTTICompound");
	del_items(0x1395b64, DELIT_SIMPLE, 8);
	apply_type(0x1395b64, "RTTIBase[1]");
	set_name(0x1395b64, "AnimatedPlayerCameraEventInstance::sBases");

	// AnimatedPlayerCameraEventResource
	set_name(0x1393b38, "RTTI_AnimatedPlayerCameraEventResource");
	apply_type(0x1393b38, "RTTICompound");
	del_items(0x1395aec, DELIT_SIMPLE, 8);
	apply_type(0x1395aec, "RTTIBase[1]");
	set_name(0x1395aec, "AnimatedPlayerCameraEventResource::sBases");
	del_items(0x1395af4, DELIT_SIMPLE, 112);
	apply_type(0x1395af4, "RTTIAttr[4]");
	set_name(0x1395af4, "AnimatedPlayerCameraEventResource::sAttrs");

	// AnimatedPositionLocatorEventInstance
	set_name(0x1396d1c, "RTTI_AnimatedPositionLocatorEventInstance");
	apply_type(0x1396d1c, "RTTICompound");
	del_items(0x1398d90, DELIT_SIMPLE, 8);
	apply_type(0x1398d90, "RTTIBase[1]");
	set_name(0x1398d90, "AnimatedPositionLocatorEventInstance::sBases");

	// AnimatedPositionLocatorEventResource
	set_name(0x1396cc8, "RTTI_AnimatedPositionLocatorEventResource");
	apply_type(0x1396cc8, "RTTICompound");
	del_items(0x1398d34, DELIT_SIMPLE, 8);
	apply_type(0x1398d34, "RTTIBase[1]");
	set_name(0x1398d34, "AnimatedPositionLocatorEventResource::sBases");
	del_items(0x1398d3c, DELIT_SIMPLE, 84);
	apply_type(0x1398d3c, "RTTIAttr[3]");
	set_name(0x1398d3c, "AnimatedPositionLocatorEventResource::sAttrs");

	// AnimatedRenderZoneEventInstance
	set_name(0x1393cdc, "RTTI_AnimatedRenderZoneEventInstance");
	apply_type(0x1393cdc, "RTTICompound");
	del_items(0x1395cb8, DELIT_SIMPLE, 8);
	apply_type(0x1395cb8, "RTTIBase[1]");
	set_name(0x1395cb8, "AnimatedRenderZoneEventInstance::sBases");

	// AnimatedRenderZoneEventResource
	set_name(0x1393c88, "RTTI_AnimatedRenderZoneEventResource");
	apply_type(0x1393c88, "RTTICompound");
	del_items(0x1395c24, DELIT_SIMPLE, 8);
	apply_type(0x1395c24, "RTTIBase[1]");
	set_name(0x1395c24, "AnimatedRenderZoneEventResource::sBases");
	del_items(0x1395c2c, DELIT_SIMPLE, 140);
	apply_type(0x1395c2c, "RTTIAttr[5]");
	set_name(0x1395c2c, "AnimatedRenderZoneEventResource::sAttrs");

	// AnimatedScreenEffectResource
	set_name(0x13aba28, "RTTI_AnimatedScreenEffectResource");
	apply_type(0x13aba28, "RTTICompound");
	del_items(0x13abf60, DELIT_SIMPLE, 8);
	apply_type(0x13abf60, "RTTIBase[1]");
	set_name(0x13abf60, "AnimatedScreenEffectResource::sBases");
	del_items(0x13abf68, DELIT_SIMPLE, 28);
	apply_type(0x13abf68, "RTTIAttr[1]");
	set_name(0x13abf68, "AnimatedScreenEffectResource::sAttrs");

	// AnimatedShaderEventInstance
	set_name(0x1393c34, "RTTI_AnimatedShaderEventInstance");
	apply_type(0x1393c34, "RTTICompound");
	del_items(0x1395c1c, DELIT_SIMPLE, 8);
	apply_type(0x1395c1c, "RTTIBase[1]");
	set_name(0x1395c1c, "AnimatedShaderEventInstance::sBases");

	// AnimatedShaderEventResource
	set_name(0x1393be0, "RTTI_AnimatedShaderEventResource");
	apply_type(0x1393be0, "RTTICompound");
	del_items(0x1395b6c, DELIT_SIMPLE, 8);
	apply_type(0x1395b6c, "RTTIBase[1]");
	set_name(0x1395b6c, "AnimatedShaderEventResource::sBases");
	del_items(0x1395b74, DELIT_SIMPLE, 168);
	apply_type(0x1395b74, "RTTIAttr[6]");
	set_name(0x1395b74, "AnimatedShaderEventResource::sAttrs");

	// AnimatedStaticMeshInstance
	set_name(0x13367a4, "RTTI_AnimatedStaticMeshInstance");
	apply_type(0x13367a4, "RTTICompound");
	del_items(0x1338644, DELIT_SIMPLE, 8);
	apply_type(0x1338644, "RTTIBase[1]");
	set_name(0x1338644, "AnimatedStaticMeshInstance::sBases");

	// AnimatedStaticMeshResource
	set_name(0x13367f8, "RTTI_AnimatedStaticMeshResource");
	apply_type(0x13367f8, "RTTICompound");
	del_items(0x133868c, DELIT_SIMPLE, 8);
	apply_type(0x133868c, "RTTIBase[1]");
	set_name(0x133868c, "AnimatedStaticMeshResource::sBases");
	del_items(0x1338694, DELIT_SIMPLE, 56);
	apply_type(0x1338694, "RTTIAttr[2]");
	set_name(0x1338694, "AnimatedStaticMeshResource::sAttrs");

	// AnimationActionEventInstance
	set_name(0x1393d84, "RTTI_AnimationActionEventInstance");
	apply_type(0x1393d84, "RTTICompound");
	del_items(0x1395d1c, DELIT_SIMPLE, 8);
	apply_type(0x1395d1c, "RTTIBase[1]");
	set_name(0x1395d1c, "AnimationActionEventInstance::sBases");

	// AnimationActionEventResource
	set_name(0x1393d30, "RTTI_AnimationActionEventResource");
	apply_type(0x1393d30, "RTTICompound");
	del_items(0x1395cc0, DELIT_SIMPLE, 8);
	apply_type(0x1395cc0, "RTTIBase[1]");
	set_name(0x1395cc0, "AnimationActionEventResource::sBases");
	del_items(0x1395cc8, DELIT_SIMPLE, 84);
	apply_type(0x1395cc8, "RTTIAttr[3]");
	set_name(0x1395cc8, "AnimationActionEventResource::sAttrs");

	// AnimationEvent
	set_name(0x133639c, "RTTI_AnimationEvent");
	apply_type(0x133639c, "RTTICompound");
	del_items(0x1337bd8, DELIT_SIMPLE, 84);
	apply_type(0x1337bd8, "RTTIAttr[3]");
	set_name(0x1337bd8, "AnimationEvent::sAttrs");

	// AnimationEventActionComponent
	set_name(0x1389410, "RTTI_AnimationEventActionComponent");
	apply_type(0x1389410, "RTTICompound");
	del_items(0x138c6a8, DELIT_SIMPLE, 8);
	apply_type(0x138c6a8, "RTTIBase[1]");
	set_name(0x138c6a8, "AnimationEventActionComponent::sBases");

	// AnimationEventActionComponentResource
	set_name(0x13894c8, "RTTI_AnimationEventActionComponentResource");
	apply_type(0x13894c8, "RTTICompound");
	del_items(0x138c664, DELIT_SIMPLE, 8);
	apply_type(0x138c664, "RTTIBase[1]");
	set_name(0x138c664, "AnimationEventActionComponentResource::sBases");
	del_items(0x138c66c, DELIT_SIMPLE, 56);
	apply_type(0x138c66c, "RTTIAttr[2]");
	set_name(0x138c66c, "AnimationEventActionComponentResource::sAttrs");

	// AnimationEventComponent
	set_name(0x138951c, "RTTI_AnimationEventComponent");
	apply_type(0x138951c, "RTTICompound");
	del_items(0x138c730, DELIT_SIMPLE, 8);
	apply_type(0x138c730, "RTTIBase[1]");
	set_name(0x138c730, "AnimationEventComponent::sBases");

	// AnimationEventComponentResource
	set_name(0x13895d4, "RTTI_AnimationEventComponentResource");
	apply_type(0x13895d4, "RTTICompound");
	del_items(0x138c6ec, DELIT_SIMPLE, 8);
	apply_type(0x138c6ec, "RTTIBase[1]");
	set_name(0x138c6ec, "AnimationEventComponentResource::sBases");
	del_items(0x138c6f4, DELIT_SIMPLE, 56);
	apply_type(0x138c6f4, "RTTIAttr[2]");
	set_name(0x138c6f4, "AnimationEventComponentResource::sAttrs");

	// AnimationEventResource
	set_name(0x13362d4, "RTTI_AnimationEventResource");
	apply_type(0x13362d4, "RTTICompound");
	del_items(0x1337c80, DELIT_SIMPLE, 8);
	apply_type(0x1337c80, "RTTIBase[1]");
	set_name(0x1337c80, "AnimationEventResource::sBases");
	del_items(0x1337c88, DELIT_SIMPLE, 84);
	apply_type(0x1337c88, "RTTIAttr[3]");
	set_name(0x1337c88, "AnimationEventResource::sAttrs");

	// AnimationExpressionCouple
	set_name(0x13b6614, "RTTI_AnimationExpressionCouple");
	apply_type(0x13b6614, "RTTICompound");
	del_items(0x13b7080, DELIT_SIMPLE, 56);
	apply_type(0x13b7080, "RTTIAttr[2]");
	set_name(0x13b7080, "AnimationExpressionCouple::sAttrs");

	// AnimationMotionBase
	set_name(0x13bc5b4, "RTTI_AnimationMotionBase");
	apply_type(0x13bc5b4, "RTTICompound");
	del_items(0x13bca18, DELIT_SIMPLE, 8);
	apply_type(0x13bca18, "RTTIBase[1]");
	set_name(0x13bca18, "AnimationMotionBase::sBases");

	// AnimationMotionCurve
	set_name(0x13bc608, "RTTI_AnimationMotionCurve");
	apply_type(0x13bc608, "RTTICompound");
	del_items(0x13bca20, DELIT_SIMPLE, 8);
	apply_type(0x13bca20, "RTTIBase[1]");
	set_name(0x13bca20, "AnimationMotionCurve::sBases");
	del_items(0x13bca28, DELIT_SIMPLE, 84);
	apply_type(0x13bca28, "RTTIAttr[3]");
	set_name(0x13bca28, "AnimationMotionCurve::sAttrs");

	// AnimationMotionDirectional
	set_name(0x13bc65c, "RTTI_AnimationMotionDirectional");
	apply_type(0x13bc65c, "RTTICompound");
	del_items(0x13bca7c, DELIT_SIMPLE, 8);
	apply_type(0x13bca7c, "RTTIBase[1]");
	set_name(0x13bca7c, "AnimationMotionDirectional::sBases");
	del_items(0x13bca84, DELIT_SIMPLE, 84);
	apply_type(0x13bca84, "RTTIAttr[3]");
	set_name(0x13bca84, "AnimationMotionDirectional::sAttrs");

	// AnimationPoseMatchingAnimationData
	set_name(0x1363888, "RTTI_AnimationPoseMatchingAnimationData");
	apply_type(0x1363888, "RTTICompound");
	del_items(0x1364dcc, DELIT_SIMPLE, 28);
	apply_type(0x1364dcc, "RTTIAttr[1]");
	set_name(0x1364dcc, "AnimationPoseMatchingAnimationData::sAttrs");

	// AnimationPoseMatchingBoneData
	set_name(0x136374c, "RTTI_AnimationPoseMatchingBoneData");
	apply_type(0x136374c, "RTTICompound");
	del_items(0x1364cd0, DELIT_SIMPLE, 56);
	apply_type(0x1364cd0, "RTTIAttr[2]");
	set_name(0x1364cd0, "AnimationPoseMatchingBoneData::sAttrs");

	// AnimationPoseMatchingConfigData
	set_name(0x1363814, "RTTI_AnimationPoseMatchingConfigData");
	apply_type(0x1363814, "RTTICompound");
	del_items(0x1364c0c, DELIT_SIMPLE, 196);
	apply_type(0x1364c0c, "RTTIAttr[7]");
	set_name(0x1364c0c, "AnimationPoseMatchingConfigData::sAttrs");

	// AnimationPoseMatchingDataBase
	set_name(0x13638ec, "RTTI_AnimationPoseMatchingDataBase");
	apply_type(0x13638ec, "RTTICompound");
	del_items(0x1364bd4, DELIT_SIMPLE, 56);
	apply_type(0x1364bd4, "RTTIAttr[2]");
	set_name(0x1364bd4, "AnimationPoseMatchingDataBase::sAttrs");

	// AnimationPoseMatchingHelperResource
	set_name(0x13639c4, "RTTI_AnimationPoseMatchingHelperResource");
	apply_type(0x13639c4, "RTTICompound");
	del_items(0x1364e3c, DELIT_SIMPLE, 8);
	apply_type(0x1364e3c, "RTTIBase[1]");
	set_name(0x1364e3c, "AnimationPoseMatchingHelperResource::sBases");
	del_items(0x1364e44, DELIT_SIMPLE, 252);
	apply_type(0x1364e44, "RTTIAttr[9]");
	set_name(0x1364e44, "AnimationPoseMatchingHelperResource::sAttrs");

	// AnimationPoseMatchingPose
	set_name(0x13637b0, "RTTI_AnimationPoseMatchingPose");
	apply_type(0x13637b0, "RTTICompound");
	del_items(0x1364d08, DELIT_SIMPLE, 196);
	apply_type(0x1364d08, "RTTIAttr[7]");
	set_name(0x1364d08, "AnimationPoseMatchingPose::sAttrs");

	// AnimationResource
	set_name(0x1336338, "RTTI_AnimationResource");
	apply_type(0x1336338, "RTTICompound");
	del_items(0x1337cdc, DELIT_SIMPLE, 8);
	apply_type(0x1337cdc, "RTTIBase[1]");
	set_name(0x1337cdc, "AnimationResource::sBases");
	del_items(0x1337ce4, DELIT_SIMPLE, 84);
	apply_type(0x1337ce4, "RTTIAttr[3]");
	set_name(0x1337ce4, "AnimationResource::sAttrs");

	// AnimationSoundEvent
	set_name(0x1336400, "RTTI_AnimationSoundEvent");
	apply_type(0x1336400, "RTTICompound");
	del_items(0x1337c2c, DELIT_SIMPLE, 84);
	apply_type(0x1337c2c, "RTTIAttr[3]");
	set_name(0x1337c2c, "AnimationSoundEvent::sAttrs");

	// AnimationState
	set_name(0x13365c0, "RTTI_AnimationState");
	apply_type(0x13365c0, "RTTICompound");
	del_items(0x1337f00, DELIT_SIMPLE, 8);
	apply_type(0x1337f00, "RTTIBase[1]");
	set_name(0x1337f00, "AnimationState::sBases");
	del_items(0x1337f08, DELIT_SIMPLE, 196);
	apply_type(0x1337f08, "RTTIAttr[7]");
	set_name(0x1337f08, "AnimationState::sAttrs");

	// AnimationStateEvents
	set_name(0x133652c, "RTTI_AnimationStateEvents");
	apply_type(0x133652c, "RTTICompound");
	del_items(0x1337e88, DELIT_SIMPLE, 8);
	apply_type(0x1337e88, "RTTIBase[1]");
	set_name(0x1337e88, "AnimationStateEvents::sBases");
	del_items(0x1337e90, DELIT_SIMPLE, 112);
	apply_type(0x1337e90, "RTTIAttr[4]");
	set_name(0x1337e90, "AnimationStateEvents::sAttrs");

	// AnimationStateGroup
	set_name(0x1336624, "RTTI_AnimationStateGroup");
	apply_type(0x1336624, "RTTICompound");
	del_items(0x1338004, DELIT_SIMPLE, 112);
	apply_type(0x1338004, "RTTIAttr[4]");
	set_name(0x1338004, "AnimationStateGroup::sAttrs");

	// AnimationStateGroupMask
	set_name(0x1336454, "RTTI_AnimationStateGroupMask");
	apply_type(0x1336454, "RTTICompound");
	del_items(0x1337d38, DELIT_SIMPLE, 28);
	apply_type(0x1337d38, "RTTIAttr[1]");
	set_name(0x1337d38, "AnimationStateGroupMask::sAttrs");

	// AnimationStateInterface
	set_name(0x1337210, "RTTI_AnimationStateInterface");
	apply_type(0x1337210, "RTTICompound");

	// AnimationStateManager
	set_name(0x1336750, "RTTI_AnimationStateManager");
	apply_type(0x1336750, "RTTICompound");
	del_items(0x13380bc, DELIT_SIMPLE, 8);
	apply_type(0x13380bc, "RTTIBase[1]");
	set_name(0x13380bc, "AnimationStateManager::sBases");
	del_items(0x13380c4, DELIT_SIMPLE, 308);
	apply_type(0x13380c4, "RTTIAttr[11]");
	set_name(0x13380c4, "AnimationStateManager::sAttrs");
	del_items(0x13381f8, DELIT_SIMPLE, 12);
	apply_type(0x13381f8, "RTTIMessageHandler[1]");
	set_name(0x13381f8, "AnimationStateManager::sMessageHandlers");

	// AnimationTrackBase
	set_name(0x1336af8, "RTTI_AnimationTrackBase");
	apply_type(0x1336af8, "RTTICompound");
	del_items(0x1338250, DELIT_SIMPLE, 8);
	apply_type(0x1338250, "RTTIBase[1]");
	set_name(0x1338250, "AnimationTrackBase::sBases");

	// AnimationTrackKeyFrame_FQuat
	set_name(0x1336a40, "RTTI_AnimationTrackKeyFrame_FQuat");
	apply_type(0x1336a40, "RTTICompound");
	del_items(0x1338304, DELIT_SIMPLE, 8);
	apply_type(0x1338304, "RTTIBase[1]");
	set_name(0x1338304, "AnimationTrackKeyFrame_FQuat::sBases");
	del_items(0x133830c, DELIT_SIMPLE, 28);
	apply_type(0x133830c, "RTTIAttr[1]");
	set_name(0x133830c, "AnimationTrackKeyFrame_FQuat::sAttrs");

	// AnimationTrackKeyFrame_FVector3
	set_name(0x1336978, "RTTI_AnimationTrackKeyFrame_FVector3");
	apply_type(0x1336978, "RTTICompound");
	del_items(0x13382bc, DELIT_SIMPLE, 8);
	apply_type(0x13382bc, "RTTIBase[1]");
	set_name(0x13382bc, "AnimationTrackKeyFrame_FVector3::sBases");
	del_items(0x13382c4, DELIT_SIMPLE, 28);
	apply_type(0x13382c4, "RTTIAttr[1]");
	set_name(0x13382c4, "AnimationTrackKeyFrame_FVector3::sAttrs");

	// AnimationTrackKeyFrame_FVector4
	set_name(0x13369dc, "RTTI_AnimationTrackKeyFrame_FVector4");
	apply_type(0x13369dc, "RTTICompound");
	del_items(0x13382e0, DELIT_SIMPLE, 8);
	apply_type(0x13382e0, "RTTIBase[1]");
	set_name(0x13382e0, "AnimationTrackKeyFrame_FVector4::sBases");
	del_items(0x13382e8, DELIT_SIMPLE, 28);
	apply_type(0x13382e8, "RTTIAttr[1]");
	set_name(0x13382e8, "AnimationTrackKeyFrame_FVector4::sAttrs");

	// AnimationTrackKeyFrame_RGBAColor
	set_name(0x1336aa4, "RTTI_AnimationTrackKeyFrame_RGBAColor");
	apply_type(0x1336aa4, "RTTICompound");
	del_items(0x1338328, DELIT_SIMPLE, 8);
	apply_type(0x1338328, "RTTIBase[1]");
	set_name(0x1338328, "AnimationTrackKeyFrame_RGBAColor::sBases");
	del_items(0x1338330, DELIT_SIMPLE, 28);
	apply_type(0x1338330, "RTTIAttr[1]");
	set_name(0x1338330, "AnimationTrackKeyFrame_RGBAColor::sAttrs");

	// AnimationTrackKeyFrame_bool
	set_name(0x13368b0, "RTTI_AnimationTrackKeyFrame_bool");
	apply_type(0x13368b0, "RTTICompound");
	del_items(0x1338274, DELIT_SIMPLE, 8);
	apply_type(0x1338274, "RTTIBase[1]");
	set_name(0x1338274, "AnimationTrackKeyFrame_bool::sBases");
	del_items(0x133827c, DELIT_SIMPLE, 28);
	apply_type(0x133827c, "RTTIAttr[1]");
	set_name(0x133827c, "AnimationTrackKeyFrame_bool::sAttrs");

	// AnimationTrackKeyFrame_float
	set_name(0x1336914, "RTTI_AnimationTrackKeyFrame_float");
	apply_type(0x1336914, "RTTICompound");
	del_items(0x1338298, DELIT_SIMPLE, 8);
	apply_type(0x1338298, "RTTIBase[1]");
	set_name(0x1338298, "AnimationTrackKeyFrame_float::sBases");
	del_items(0x13382a0, DELIT_SIMPLE, 28);
	apply_type(0x13382a0, "RTTIAttr[1]");
	set_name(0x13382a0, "AnimationTrackKeyFrame_float::sAttrs");

	// AnimationTrackKeyTime
	set_name(0x133684c, "RTTI_AnimationTrackKeyTime");
	apply_type(0x133684c, "RTTICompound");
	del_items(0x1338258, DELIT_SIMPLE, 28);
	apply_type(0x1338258, "RTTIAttr[1]");
	set_name(0x1338258, "AnimationTrackKeyTime::sAttrs");

	// AnimationTrackLinearBool
	set_name(0x1336c88, "RTTI_AnimationTrackLinearBool");
	apply_type(0x1336c88, "RTTICompound");
	del_items(0x133840c, DELIT_SIMPLE, 8);
	apply_type(0x133840c, "RTTIBase[1]");
	set_name(0x133840c, "AnimationTrackLinearBool::sBases");
	del_items(0x1338414, DELIT_SIMPLE, 56);
	apply_type(0x1338414, "RTTIAttr[2]");
	set_name(0x1338414, "AnimationTrackLinearBool::sAttrs");

	// AnimationTrackLinearFQuat
	set_name(0x1336cec, "RTTI_AnimationTrackLinearFQuat");
	apply_type(0x1336cec, "RTTICompound");
	del_items(0x133844c, DELIT_SIMPLE, 8);
	apply_type(0x133844c, "RTTIBase[1]");
	set_name(0x133844c, "AnimationTrackLinearFQuat::sBases");
	del_items(0x1338454, DELIT_SIMPLE, 56);
	apply_type(0x1338454, "RTTIAttr[2]");
	set_name(0x1338454, "AnimationTrackLinearFQuat::sAttrs");

	// AnimationTrackLinearFVector3
	set_name(0x1336bc0, "RTTI_AnimationTrackLinearFVector3");
	apply_type(0x1336bc0, "RTTICompound");
	del_items(0x133838c, DELIT_SIMPLE, 8);
	apply_type(0x133838c, "RTTIBase[1]");
	set_name(0x133838c, "AnimationTrackLinearFVector3::sBases");
	del_items(0x1338394, DELIT_SIMPLE, 56);
	apply_type(0x1338394, "RTTIAttr[2]");
	set_name(0x1338394, "AnimationTrackLinearFVector3::sAttrs");

	// AnimationTrackLinearFVector4
	set_name(0x1336c24, "RTTI_AnimationTrackLinearFVector4");
	apply_type(0x1336c24, "RTTICompound");
	del_items(0x13383cc, DELIT_SIMPLE, 8);
	apply_type(0x13383cc, "RTTIBase[1]");
	set_name(0x13383cc, "AnimationTrackLinearFVector4::sBases");
	del_items(0x13383d4, DELIT_SIMPLE, 56);
	apply_type(0x13383d4, "RTTIAttr[2]");
	set_name(0x13383d4, "AnimationTrackLinearFVector4::sAttrs");

	// AnimationTrackLinearFloat
	set_name(0x1336b5c, "RTTI_AnimationTrackLinearFloat");
	apply_type(0x1336b5c, "RTTICompound");
	del_items(0x133834c, DELIT_SIMPLE, 8);
	apply_type(0x133834c, "RTTIBase[1]");
	set_name(0x133834c, "AnimationTrackLinearFloat::sBases");
	del_items(0x1338354, DELIT_SIMPLE, 56);
	apply_type(0x1338354, "RTTIAttr[2]");
	set_name(0x1338354, "AnimationTrackLinearFloat::sAttrs");

	// AnimationTrackLinearRGBAColor
	set_name(0x1336d50, "RTTI_AnimationTrackLinearRGBAColor");
	apply_type(0x1336d50, "RTTICompound");
	del_items(0x133848c, DELIT_SIMPLE, 8);
	apply_type(0x133848c, "RTTIBase[1]");
	set_name(0x133848c, "AnimationTrackLinearRGBAColor::sBases");
	del_items(0x1338494, DELIT_SIMPLE, 56);
	apply_type(0x1338494, "RTTIAttr[2]");
	set_name(0x1338494, "AnimationTrackLinearRGBAColor::sAttrs");

	// AnimationVariableEventInstance
	set_name(0x1393e2c, "RTTI_AnimationVariableEventInstance");
	apply_type(0x1393e2c, "RTTICompound");
	del_items(0x1395dd4, DELIT_SIMPLE, 8);
	apply_type(0x1395dd4, "RTTIBase[1]");
	set_name(0x1395dd4, "AnimationVariableEventInstance::sBases");

	// AnimationVariableEventResource
	set_name(0x1393dd8, "RTTI_AnimationVariableEventResource");
	apply_type(0x1393dd8, "RTTICompound");
	del_items(0x1395d24, DELIT_SIMPLE, 8);
	apply_type(0x1395d24, "RTTIBase[1]");
	set_name(0x1395d24, "AnimationVariableEventResource::sBases");
	del_items(0x1395d2c, DELIT_SIMPLE, 168);
	apply_type(0x1395d2c, "RTTIAttr[6]");
	set_name(0x1395d2c, "AnimationVariableEventResource::sAttrs");

	// ApplyForceEntity
	set_name(0x1377024, "RTTI_ApplyForceEntity");
	apply_type(0x1377024, "RTTICompound");
	del_items(0x13784ec, DELIT_SIMPLE, 8);
	apply_type(0x13784ec, "RTTIBase[1]");
	set_name(0x13784ec, "ApplyForceEntity::sBases");

	// ApplyForceEntityResource
	set_name(0x1377078, "RTTI_ApplyForceEntityResource");
	apply_type(0x1377078, "RTTICompound");
	del_items(0x1378500, DELIT_SIMPLE, 8);
	apply_type(0x1378500, "RTTIBase[1]");
	set_name(0x1378500, "ApplyForceEntityResource::sBases");
	del_items(0x1378508, DELIT_SIMPLE, 84);
	apply_type(0x1378508, "RTTIAttr[3]");
	set_name(0x1378508, "ApplyForceEntityResource::sAttrs");

	// ApplyHealthContinuouslyComponent
	set_name(0x138a610, "RTTI_ApplyHealthContinuouslyComponent");
	apply_type(0x138a610, "RTTICompound");
	del_items(0x138cd20, DELIT_SIMPLE, 8);
	apply_type(0x138cd20, "RTTIBase[1]");
	set_name(0x138cd20, "ApplyHealthContinuouslyComponent::sBases");

	// ApplyPhysicsImpulseAction
	set_name(0x13768ec, "RTTI_ApplyPhysicsImpulseAction");
	apply_type(0x13768ec, "RTTICompound");
	del_items(0x1377ea8, DELIT_SIMPLE, 8);
	apply_type(0x1377ea8, "RTTIBase[1]");
	set_name(0x1377ea8, "ApplyPhysicsImpulseAction::sBases");
	del_items(0x1377eb0, DELIT_SIMPLE, 196);
	apply_type(0x1377eb0, "RTTIAttr[7]");
	set_name(0x1377eb0, "ApplyPhysicsImpulseAction::sAttrs");

	// Asset
	set_name(0x1338ad0, "RTTI_Asset");
	apply_type(0x1338ad0, "RTTICompound");
	del_items(0x1338cb4, DELIT_SIMPLE, 8);
	apply_type(0x1338cb4, "RTTIBase[1]");
	set_name(0x1338cb4, "Asset::sBases");
	del_items(0x1338cbc, DELIT_SIMPLE, 28);
	apply_type(0x1338cbc, "RTTIAttr[1]");
	set_name(0x1338cbc, "Asset::sAttrs");

	// AssetCollection
	set_name(0x1338c0c, "RTTI_AssetCollection");
	apply_type(0x1338c0c, "RTTICompound");
	del_items(0x1338d58, DELIT_SIMPLE, 8);
	apply_type(0x1338d58, "RTTIBase[1]");
	set_name(0x1338d58, "AssetCollection::sBases");
	del_items(0x1338d60, DELIT_SIMPLE, 28);
	apply_type(0x1338d60, "RTTIAttr[1]");
	set_name(0x1338d60, "AssetCollection::sAttrs");

	// AttachPhysicsRagdollToBoneMover
	set_name(0x13632bc, "RTTI_AttachPhysicsRagdollToBoneMover");
	apply_type(0x13632bc, "RTTICompound");
	del_items(0x13648ec, DELIT_SIMPLE, 8);
	apply_type(0x13648ec, "RTTIBase[1]");
	set_name(0x13648ec, "AttachPhysicsRagdollToBoneMover::sBases");

	// AttachPhysicsRagdollToBoneMoverResource
	set_name(0x1363310, "RTTI_AttachPhysicsRagdollToBoneMoverResource");
	apply_type(0x1363310, "RTTICompound");
	del_items(0x13648ac, DELIT_SIMPLE, 8);
	apply_type(0x13648ac, "RTTIBase[1]");
	set_name(0x13648ac, "AttachPhysicsRagdollToBoneMoverResource::sBases");
	del_items(0x13648b4, DELIT_SIMPLE, 56);
	apply_type(0x13648b4, "RTTIAttr[2]");
	set_name(0x13648b4, "AttachPhysicsRagdollToBoneMoverResource::sAttrs");

	// AttachToAimMatrixMover
	set_name(0x13a7a78, "RTTI_AttachToAimMatrixMover");
	apply_type(0x13a7a78, "RTTICompound");
	del_items(0x13a869c, DELIT_SIMPLE, 8);
	apply_type(0x13a869c, "RTTIBase[1]");
	set_name(0x13a869c, "AttachToAimMatrixMover::sBases");

	// AttachToAimMatrixMoverResource
	set_name(0x13a7acc, "RTTI_AttachToAimMatrixMoverResource");
	apply_type(0x13a7acc, "RTTICompound");
	del_items(0x13a86a4, DELIT_SIMPLE, 8);
	apply_type(0x13a86a4, "RTTIBase[1]");
	set_name(0x13a86a4, "AttachToAimMatrixMoverResource::sBases");

	// AttachToBoneMover
	set_name(0x1362ecc, "RTTI_AttachToBoneMover");
	apply_type(0x1362ecc, "RTTICompound");
	del_items(0x1364728, DELIT_SIMPLE, 8);
	apply_type(0x1364728, "RTTIBase[1]");
	set_name(0x1364728, "AttachToBoneMover::sBases");

	// AttachToBoneMoverResource
	set_name(0x1362f20, "RTTI_AttachToBoneMoverResource");
	apply_type(0x1362f20, "RTTICompound");
	del_items(0x13646dc, DELIT_SIMPLE, 8);
	apply_type(0x13646dc, "RTTIBase[1]");
	set_name(0x13646dc, "AttachToBoneMoverResource::sBases");
	del_items(0x13646e4, DELIT_SIMPLE, 56);
	apply_type(0x13646e4, "RTTIAttr[2]");
	set_name(0x13646e4, "AttachToBoneMoverResource::sAttrs");
	del_items(0x136471c, DELIT_SIMPLE, 12);
	apply_type(0x136471c, "RTTIMessageHandler[1]");
	set_name(0x136471c, "AttachToBoneMoverResource::sMessageHandlers");

	// AttachToEntityByPConstraintMover
	set_name(0x1363364, "RTTI_AttachToEntityByPConstraintMover");
	apply_type(0x1363364, "RTTICompound");
	del_items(0x13649f8, DELIT_SIMPLE, 8);
	apply_type(0x13649f8, "RTTIBase[1]");
	set_name(0x13649f8, "AttachToEntityByPConstraintMover::sBases");

	// AttachToEntityByPConstraintMoverResource
	set_name(0x136341c, "RTTI_AttachToEntityByPConstraintMoverResource");
	apply_type(0x136341c, "RTTICompound");
	del_items(0x13649b8, DELIT_SIMPLE, 8);
	apply_type(0x13649b8, "RTTIBase[1]");
	set_name(0x13649b8, "AttachToEntityByPConstraintMoverResource::sBases");
	del_items(0x13649c0, DELIT_SIMPLE, 56);
	apply_type(0x13649c0, "RTTIAttr[2]");
	set_name(0x13649c0, "AttachToEntityByPConstraintMoverResource::sAttrs");

	// AttachToEntityMover
	set_name(0x136301c, "RTTI_AttachToEntityMover");
	apply_type(0x136301c, "RTTICompound");
	del_items(0x13646d4, DELIT_SIMPLE, 8);
	apply_type(0x13646d4, "RTTIBase[1]");
	set_name(0x13646d4, "AttachToEntityMover::sBases");

	// AttachToEntityMoverResource
	set_name(0x1363070, "RTTI_AttachToEntityMoverResource");
	apply_type(0x1363070, "RTTICompound");
	del_items(0x1364678, DELIT_SIMPLE, 8);
	apply_type(0x1364678, "RTTIBase[1]");
	set_name(0x1364678, "AttachToEntityMoverResource::sBases");
	del_items(0x1364680, DELIT_SIMPLE, 84);
	apply_type(0x1364680, "RTTIAttr[3]");
	set_name(0x1364680, "AttachToEntityMoverResource::sAttrs");

	// AttachToHelperMover
	set_name(0x13630c4, "RTTI_AttachToHelperMover");
	apply_type(0x13630c4, "RTTICompound");
	del_items(0x1364820, DELIT_SIMPLE, 8);
	apply_type(0x1364820, "RTTIBase[1]");
	set_name(0x1364820, "AttachToHelperMover::sBases");
	del_items(0x1364828, DELIT_SIMPLE, 24);
	apply_type(0x1364828, "RTTIFunction[1]");
	set_name(0x1364828, "AttachToHelperMover::sFunctions");

	// AttachToHelperMoverResource
	set_name(0x1363118, "RTTI_AttachToHelperMoverResource");
	apply_type(0x1363118, "RTTICompound");
	del_items(0x13647d4, DELIT_SIMPLE, 8);
	apply_type(0x13647d4, "RTTIBase[1]");
	set_name(0x13647d4, "AttachToHelperMoverResource::sBases");
	del_items(0x13647dc, DELIT_SIMPLE, 56);
	apply_type(0x13647dc, "RTTIAttr[2]");
	set_name(0x13647dc, "AttachToHelperMoverResource::sAttrs");
	del_items(0x1364814, DELIT_SIMPLE, 12);
	apply_type(0x1364814, "RTTIMessageHandler[1]");
	set_name(0x1364814, "AttachToHelperMoverResource::sMessageHandlers");

	// AttachToPartMover
	set_name(0x1362f74, "RTTI_AttachToPartMover");
	apply_type(0x1362f74, "RTTICompound");
	del_items(0x1364770, DELIT_SIMPLE, 8);
	apply_type(0x1364770, "RTTIBase[1]");
	set_name(0x1364770, "AttachToPartMover::sBases");

	// AttachToPartMoverResource
	set_name(0x1362fc8, "RTTI_AttachToPartMoverResource");
	apply_type(0x1362fc8, "RTTICompound");
	del_items(0x1364730, DELIT_SIMPLE, 8);
	apply_type(0x1364730, "RTTIBase[1]");
	set_name(0x1364730, "AttachToPartMoverResource::sBases");
	del_items(0x1364738, DELIT_SIMPLE, 56);
	apply_type(0x1364738, "RTTIAttr[2]");
	set_name(0x1364738, "AttachToPartMoverResource::sAttrs");

	// AttachToSequenceLocatorMover
	set_name(0x13a5508, "RTTI_AttachToSequenceLocatorMover");
	apply_type(0x13a5508, "RTTICompound");
	del_items(0x13a5bc8, DELIT_SIMPLE, 8);
	apply_type(0x13a5bc8, "RTTIBase[1]");
	set_name(0x13a5bc8, "AttachToSequenceLocatorMover::sBases");

	// AttachToSequenceLocatorMoverResource
	set_name(0x13a555c, "RTTI_AttachToSequenceLocatorMoverResource");
	apply_type(0x13a555c, "RTTICompound");
	del_items(0x13a5bd0, DELIT_SIMPLE, 8);
	apply_type(0x13a5bd0, "RTTIBase[1]");
	set_name(0x13a5bd0, "AttachToSequenceLocatorMoverResource::sBases");
	del_items(0x13a5bd8, DELIT_SIMPLE, 84);
	apply_type(0x13a5bd8, "RTTIAttr[3]");
	set_name(0x13a5bd8, "AttachToSequenceLocatorMoverResource::sAttrs");
	del_items(0x13a5c2c, DELIT_SIMPLE, 12);
	apply_type(0x13a5c2c, "RTTIMessageHandler[1]");
	set_name(0x13a5c2c, "AttachToSequenceLocatorMoverResource::sMessageHandlers");

	// AttachToWorldMatrixMover
	set_name(0x136316c, "RTTI_AttachToWorldMatrixMover");
	apply_type(0x136316c, "RTTICompound");
	del_items(0x1364840, DELIT_SIMPLE, 8);
	apply_type(0x1364840, "RTTIBase[1]");
	set_name(0x1364840, "AttachToWorldMatrixMover::sBases");

	// AttachToWorldMatrixMoverResource
	set_name(0x13631c0, "RTTI_AttachToWorldMatrixMoverResource");
	apply_type(0x13631c0, "RTTICompound");
	del_items(0x1364778, DELIT_SIMPLE, 8);
	apply_type(0x1364778, "RTTIBase[1]");
	set_name(0x1364778, "AttachToWorldMatrixMoverResource::sBases");
	del_items(0x1364780, DELIT_SIMPLE, 84);
	apply_type(0x1364780, "RTTIAttr[3]");
	set_name(0x1364780, "AttachToWorldMatrixMoverResource::sAttrs");

	// AttachToWorldMatrixVerticalDampeningMover
	set_name(0x1363214, "RTTI_AttachToWorldMatrixVerticalDampeningMover");
	apply_type(0x1363214, "RTTICompound");
	del_items(0x1364848, DELIT_SIMPLE, 8);
	apply_type(0x1364848, "RTTIBase[1]");
	set_name(0x1364848, "AttachToWorldMatrixVerticalDampeningMover::sBases");

	// AttachToWorldMatrixVerticalDampeningMoverResource
	set_name(0x1363268, "RTTI_AttachToWorldMatrixVerticalDampeningMoverResource");
	apply_type(0x1363268, "RTTICompound");
	del_items(0x1364850, DELIT_SIMPLE, 8);
	apply_type(0x1364850, "RTTIBase[1]");
	set_name(0x1364850, "AttachToWorldMatrixVerticalDampeningMoverResource::sBases");
	del_items(0x1364858, DELIT_SIMPLE, 84);
	apply_type(0x1364858, "RTTIAttr[3]");
	set_name(0x1364858, "AttachToWorldMatrixVerticalDampeningMoverResource::sAttrs");

	// AttachableExplosive
	set_name(0x139caf0, "RTTI_AttachableExplosive");
	apply_type(0x139caf0, "RTTICompound");
	del_items(0x139e71c, DELIT_SIMPLE, 8);
	apply_type(0x139e71c, "RTTIBase[1]");
	set_name(0x139e71c, "AttachableExplosive::sBases");
	del_items(0x139e724, DELIT_SIMPLE, 48);
	apply_type(0x139e724, "RTTIFunction[2]");
	set_name(0x139e724, "AttachableExplosive::sFunctions");

	// AttachableExplosiveResource
	set_name(0x139cb54, "RTTI_AttachableExplosiveResource");
	apply_type(0x139cb54, "RTTICompound");
	del_items(0x139e66c, DELIT_SIMPLE, 8);
	apply_type(0x139e66c, "RTTIBase[1]");
	set_name(0x139e66c, "AttachableExplosiveResource::sBases");
	del_items(0x139e674, DELIT_SIMPLE, 168);
	apply_type(0x139e674, "RTTIAttr[6]");
	set_name(0x139e674, "AttachableExplosiveResource::sAttrs");

	// AttachableUseLocation
	set_name(0x139cba8, "RTTI_AttachableUseLocation");
	apply_type(0x139cba8, "RTTICompound");
	del_items(0x139e754, DELIT_SIMPLE, 8);
	apply_type(0x139e754, "RTTIBase[1]");
	set_name(0x139e754, "AttachableUseLocation::sBases");
	del_items(0x139e75c, DELIT_SIMPLE, 48);
	apply_type(0x139e75c, "RTTIFunction[2]");
	set_name(0x139e75c, "AttachableUseLocation::sFunctions");

	// AttachableUseLocationResource
	set_name(0x139e7bc, "RTTI_AttachableUseLocationResource");
	apply_type(0x139e7bc, "RTTICompound");
	del_items(0x139efb8, DELIT_SIMPLE, 8);
	apply_type(0x139efb8, "RTTIBase[1]");
	set_name(0x139efb8, "AttachableUseLocationResource::sBases");
	del_items(0x139efc0, DELIT_SIMPLE, 252);
	apply_type(0x139efc0, "RTTIAttr[9]");
	set_name(0x139efc0, "AttachableUseLocationResource::sAttrs");

	// AttachedLightBinding
	set_name(0x13896e0, "RTTI_AttachedLightBinding");
	apply_type(0x13896e0, "RTTICompound");
	del_items(0x138c73c, DELIT_SIMPLE, 140);
	apply_type(0x138c73c, "RTTIAttr[5]");
	set_name(0x138c73c, "AttachedLightBinding::sAttrs");

	// AttachedLightsComponent
	set_name(0x1389628, "RTTI_AttachedLightsComponent");
	apply_type(0x1389628, "RTTICompound");
	del_items(0x138c818, DELIT_SIMPLE, 8);
	apply_type(0x138c818, "RTTIBase[1]");
	set_name(0x138c818, "AttachedLightsComponent::sBases");

	// AttachedLightsComponentRep
	set_name(0x138967c, "RTTI_AttachedLightsComponentRep");
	apply_type(0x138967c, "RTTICompound");
	del_items(0x138c824, DELIT_SIMPLE, 8);
	apply_type(0x138c824, "RTTIBase[1]");
	set_name(0x138c824, "AttachedLightsComponentRep::sBases");

	// AttachedLightsComponentResource
	set_name(0x1389734, "RTTI_AttachedLightsComponentResource");
	apply_type(0x1389734, "RTTICompound");
	del_items(0x138c7c8, DELIT_SIMPLE, 8);
	apply_type(0x138c7c8, "RTTIBase[1]");
	set_name(0x138c7c8, "AttachedLightsComponentResource::sBases");
	del_items(0x138c7d0, DELIT_SIMPLE, 56);
	apply_type(0x138c7d0, "RTTIAttr[2]");
	set_name(0x138c7d0, "AttachedLightsComponentResource::sAttrs");
	del_items(0x138c808, DELIT_SIMPLE, 12);
	apply_type(0x138c808, "RTTIMessageHandler[1]");
	set_name(0x138c808, "AttachedLightsComponentResource::sMessageHandlers");

	// AttachmentPConstraint
	set_name(0x13633c8, "RTTI_AttachmentPConstraint");
	apply_type(0x13633c8, "RTTICompound");
	del_items(0x13648f4, DELIT_SIMPLE, 196);
	apply_type(0x13648f4, "RTTIAttr[7]");
	set_name(0x13648f4, "AttachmentPConstraint::sAttrs");

	// AttackEventInstance
	set_name(0x1393ed4, "RTTI_AttackEventInstance");
	apply_type(0x1393ed4, "RTTICompound");
	del_items(0x1395e54, DELIT_SIMPLE, 8);
	apply_type(0x1395e54, "RTTIBase[1]");
	set_name(0x1395e54, "AttackEventInstance::sBases");

	// AttackEventResource
	set_name(0x1393e80, "RTTI_AttackEventResource");
	apply_type(0x1393e80, "RTTICompound");
	del_items(0x1395ddc, DELIT_SIMPLE, 8);
	apply_type(0x1395ddc, "RTTIBase[1]");
	set_name(0x1395ddc, "AttackEventResource::sBases");
	del_items(0x1395de4, DELIT_SIMPLE, 112);
	apply_type(0x1395de4, "RTTIAttr[4]");
	set_name(0x1395de4, "AttackEventResource::sAttrs");

	// AttackerToVictimDamageModifier
	set_name(0x136c604, "RTTI_AttackerToVictimDamageModifier");
	apply_type(0x136c604, "RTTICompound");
	del_items(0x136f5d4, DELIT_SIMPLE, 252);
	apply_type(0x136f5d4, "RTTIAttr[9]");
	set_name(0x136f5d4, "AttackerToVictimDamageModifier::sAttrs");

	// AttributeAnimatorInstance
	set_name(0x13375dc, "RTTI_AttributeAnimatorInstance");
	apply_type(0x13375dc, "RTTICompound");
	del_items(0x13389ec, DELIT_SIMPLE, 8);
	apply_type(0x13389ec, "RTTIBase[1]");
	set_name(0x13389ec, "AttributeAnimatorInstance::sBases");

	// AttributeAnimatorResourceBase
	set_name(0x1337390, "RTTI_AttributeAnimatorResourceBase");
	apply_type(0x1337390, "RTTICompound");
	del_items(0x13387f4, DELIT_SIMPLE, 8);
	apply_type(0x13387f4, "RTTIBase[1]");
	set_name(0x13387f4, "AttributeAnimatorResourceBase::sBases");
	del_items(0x13387fc, DELIT_SIMPLE, 84);
	apply_type(0x13387fc, "RTTIAttr[3]");
	set_name(0x13387fc, "AttributeAnimatorResourceBase::sAttrs");

	// AttributeBoolAnimatorResource
	set_name(0x1337438, "RTTI_AttributeBoolAnimatorResource");
	apply_type(0x1337438, "RTTICompound");
	del_items(0x1338890, DELIT_SIMPLE, 8);
	apply_type(0x1338890, "RTTIBase[1]");
	set_name(0x1338890, "AttributeBoolAnimatorResource::sBases");
	del_items(0x1338898, DELIT_SIMPLE, 28);
	apply_type(0x1338898, "RTTIAttr[1]");
	set_name(0x1338898, "AttributeBoolAnimatorResource::sAttrs");

	// AttributeFVector3AnimatorResource
	set_name(0x133748c, "RTTI_AttributeFVector3AnimatorResource");
	apply_type(0x133748c, "RTTICompound");
	del_items(0x13388b4, DELIT_SIMPLE, 8);
	apply_type(0x13388b4, "RTTIBase[1]");
	set_name(0x13388b4, "AttributeFVector3AnimatorResource::sBases");
	del_items(0x13388bc, DELIT_SIMPLE, 56);
	apply_type(0x13388bc, "RTTIAttr[2]");
	set_name(0x13388bc, "AttributeFVector3AnimatorResource::sAttrs");

	// AttributeFVector4AnimatorResource
	set_name(0x13374e0, "RTTI_AttributeFVector4AnimatorResource");
	apply_type(0x13374e0, "RTTICompound");
	del_items(0x13388f4, DELIT_SIMPLE, 8);
	apply_type(0x13388f4, "RTTIBase[1]");
	set_name(0x13388f4, "AttributeFVector4AnimatorResource::sBases");
	del_items(0x13388fc, DELIT_SIMPLE, 56);
	apply_type(0x13388fc, "RTTIAttr[2]");
	set_name(0x13388fc, "AttributeFVector4AnimatorResource::sAttrs");

	// AttributeFloatAnimatorResource
	set_name(0x13373e4, "RTTI_AttributeFloatAnimatorResource");
	apply_type(0x13373e4, "RTTICompound");
	del_items(0x1338850, DELIT_SIMPLE, 8);
	apply_type(0x1338850, "RTTIBase[1]");
	set_name(0x1338850, "AttributeFloatAnimatorResource::sBases");
	del_items(0x1338858, DELIT_SIMPLE, 56);
	apply_type(0x1338858, "RTTIAttr[2]");
	set_name(0x1338858, "AttributeFloatAnimatorResource::sAttrs");

	// AttributeProjMatrixAnimatorInstance
	set_name(0x1337630, "RTTI_AttributeProjMatrixAnimatorInstance");
	apply_type(0x1337630, "RTTICompound");
	del_items(0x13389f4, DELIT_SIMPLE, 8);
	apply_type(0x13389f4, "RTTIBase[1]");
	set_name(0x13389f4, "AttributeProjMatrixAnimatorInstance::sBases");

	// AttributeProjMatrixAnimatorResource
	set_name(0x1337534, "RTTI_AttributeProjMatrixAnimatorResource");
	apply_type(0x1337534, "RTTICompound");
	del_items(0x1338934, DELIT_SIMPLE, 8);
	apply_type(0x1338934, "RTTIBase[1]");
	set_name(0x1338934, "AttributeProjMatrixAnimatorResource::sBases");
	del_items(0x133893c, DELIT_SIMPLE, 112);
	apply_type(0x133893c, "RTTIAttr[4]");
	set_name(0x133893c, "AttributeProjMatrixAnimatorResource::sAttrs");

	// AttributeRGBAColorAnimatorResource
	set_name(0x1337588, "RTTI_AttributeRGBAColorAnimatorResource");
	apply_type(0x1337588, "RTTICompound");
	del_items(0x13389ac, DELIT_SIMPLE, 8);
	apply_type(0x13389ac, "RTTIBase[1]");
	set_name(0x13389ac, "AttributeRGBAColorAnimatorResource::sBases");
	del_items(0x13389b4, DELIT_SIMPLE, 56);
	apply_type(0x13389b4, "RTTIAttr[2]");
	set_name(0x13389b4, "AttributeRGBAColorAnimatorResource::sAttrs");

	// AudioEventInstance
	set_name(0x1393f7c, "RTTI_AudioEventInstance");
	apply_type(0x1393f7c, "RTTICompound");
	del_items(0x139593c, DELIT_SIMPLE, 8);
	apply_type(0x139593c, "RTTIBase[1]");
	set_name(0x139593c, "AudioEventInstance::sBases");

	// AudioEventResource
	set_name(0x1393f28, "RTTI_AudioEventResource");
	apply_type(0x1393f28, "RTTICompound");
	del_items(0x1395854, DELIT_SIMPLE, 8);
	apply_type(0x1395854, "RTTIBase[1]");
	set_name(0x1395854, "AudioEventResource::sBases");
	del_items(0x139585c, DELIT_SIMPLE, 224);
	apply_type(0x139585c, "RTTIAttr[8]");
	set_name(0x139585c, "AudioEventResource::sAttrs");

	// AutoAimHull
	set_name(0x13b6484, "RTTI_AutoAimHull");
	apply_type(0x13b6484, "RTTICompound");
	del_items(0x13b6c48, DELIT_SIMPLE, 8);
	apply_type(0x13b6c48, "RTTIBase[1]");
	set_name(0x13b6c48, "AutoAimHull::sBases");
	del_items(0x13b6c50, DELIT_SIMPLE, 308);
	apply_type(0x13b6c50, "RTTIAttr[11]");
	set_name(0x13b6c50, "AutoAimHull::sAttrs");

	// AutoSelectNodeEntry
	set_name(0x1363960, "RTTI_AutoSelectNodeEntry");
	apply_type(0x1363960, "RTTICompound");
	del_items(0x1364de8, DELIT_SIMPLE, 84);
	apply_type(0x1364de8, "RTTIAttr[3]");
	set_name(0x1364de8, "AutoSelectNodeEntry::sAttrs");

	// AutoSelectSkeletonAnimationResource
	set_name(0x1355b14, "RTTI_AutoSelectSkeletonAnimationResource");
	apply_type(0x1355b14, "RTTICompound");
	del_items(0x135815c, DELIT_SIMPLE, 8);
	apply_type(0x135815c, "RTTIBase[1]");
	set_name(0x135815c, "AutoSelectSkeletonAnimationResource::sBases");
	del_items(0x1358164, DELIT_SIMPLE, 224);
	apply_type(0x1358164, "RTTIAttr[8]");
	set_name(0x1358164, "AutoSelectSkeletonAnimationResource::sAttrs");

	// BadgeIcon
	set_name(0x13ad174, "RTTI_BadgeIcon");
	apply_type(0x13ad174, "RTTICompound");
	del_items(0x13af66c, DELIT_SIMPLE, 56);
	apply_type(0x13af66c, "RTTIAttr[2]");
	set_name(0x13af66c, "BadgeIcon::sAttrs");

	// BaseConcreteAsset
	set_name(0x1338b44, "RTTI_BaseConcreteAsset");
	apply_type(0x1338b44, "RTTICompound");
	del_items(0x1338d50, DELIT_SIMPLE, 8);
	apply_type(0x1338d50, "RTTIBase[1]");
	set_name(0x1338d50, "BaseConcreteAsset::sBases");

	// BaseResource
	set_name(0x133938c, "RTTI_BaseResource");
	apply_type(0x133938c, "RTTICompound");
	del_items(0x13394f0, DELIT_SIMPLE, 8);
	apply_type(0x13394f0, "RTTIBase[1]");
	set_name(0x13394f0, "BaseResource::sBases");

	// BaselineTimes
	set_name(0x13a6a74, "RTTI_BaselineTimes");
	apply_type(0x13a6a74, "RTTICompound");
	del_items(0x13a7674, DELIT_SIMPLE, 8);
	apply_type(0x13a7674, "RTTIBase[1]");
	set_name(0x13a7674, "BaselineTimes::sBases");
	del_items(0x13a767c, DELIT_SIMPLE, 112);
	apply_type(0x13a767c, "RTTIAttr[4]");
	set_name(0x13a767c, "BaselineTimes::sAttrs");

	// BindEventInstance
	set_name(0x13940cc, "RTTI_BindEventInstance");
	apply_type(0x13940cc, "RTTICompound");
	del_items(0x1395f00, DELIT_SIMPLE, 8);
	apply_type(0x1395f00, "RTTIBase[1]");
	set_name(0x1395f00, "BindEventInstance::sBases");

	// BindEventResource
	set_name(0x1394078, "RTTI_BindEventResource");
	apply_type(0x1394078, "RTTICompound");
	del_items(0x1395ec0, DELIT_SIMPLE, 8);
	apply_type(0x1395ec0, "RTTIBase[1]");
	set_name(0x1395ec0, "BindEventResource::sBases");
	del_items(0x1395ec8, DELIT_SIMPLE, 56);
	apply_type(0x1395ec8, "RTTIAttr[2]");
	set_name(0x1395ec8, "BindEventResource::sAttrs");

	// BitstreamData
	set_name(0x1353780, "RTTI_BitstreamData");
	apply_type(0x1353780, "RTTICompound");
	del_items(0x13551b4, DELIT_SIMPLE, 28);
	apply_type(0x13551b4, "RTTIAttr[1]");
	set_name(0x13551b4, "BitstreamData::sAttrs");

	// BlendExpression
	set_name(0x1336e48, "RTTI_BlendExpression");
	apply_type(0x1336e48, "RTTICompound");
	del_items(0x1337af0, DELIT_SIMPLE, 8);
	apply_type(0x1337af0, "RTTIBase[1]");
	set_name(0x1337af0, "BlendExpression::sBases");
	del_items(0x1337af8, DELIT_SIMPLE, 84);
	apply_type(0x1337af8, "RTTIAttr[3]");
	set_name(0x1337af8, "BlendExpression::sAttrs");

	// BlendExpressionByteCode
	set_name(0x1336de4, "RTTI_BlendExpressionByteCode");
	apply_type(0x1336de4, "RTTICompound");
	del_items(0x1337a80, DELIT_SIMPLE, 112);
	apply_type(0x1337a80, "RTTIAttr[4]");
	set_name(0x1337a80, "BlendExpressionByteCode::sAttrs");

	// BlendInfo
	set_name(0x1336e9c, "RTTI_BlendInfo");
	apply_type(0x1336e9c, "RTTICompound");
	del_items(0x1337b4c, DELIT_SIMPLE, 140);
	apply_type(0x1337b4c, "RTTIAttr[5]");
	set_name(0x1337b4c, "BlendInfo::sAttrs");

	// BlendSkeletonAnimationResource
	set_name(0x13559f8, "RTTI_BlendSkeletonAnimationResource");
	apply_type(0x13559f8, "RTTICompound");
	del_items(0x1357fc4, DELIT_SIMPLE, 8);
	apply_type(0x1357fc4, "RTTIBase[1]");
	set_name(0x1357fc4, "BlendSkeletonAnimationResource::sBases");
	del_items(0x1357fcc, DELIT_SIMPLE, 140);
	apply_type(0x1357fcc, "RTTIAttr[5]");
	set_name(0x1357fcc, "BlendSkeletonAnimationResource::sAttrs");

	// BlendTargetDeformation
	set_name(0x1356274, "RTTI_BlendTargetDeformation");
	apply_type(0x1356274, "RTTICompound");
	del_items(0x1358504, DELIT_SIMPLE, 56);
	apply_type(0x1358504, "RTTIAttr[2]");
	set_name(0x1358504, "BlendTargetDeformation::sAttrs");

	// BlendedMeshEntry
	set_name(0x133ba78, "RTTI_BlendedMeshEntry");
	apply_type(0x133ba78, "RTTICompound");
	del_items(0x133c260, DELIT_SIMPLE, 84);
	apply_type(0x133c260, "RTTIAttr[3]");
	set_name(0x133c260, "BlendedMeshEntry::sAttrs");

	// BlendedMeshEventInstance
	set_name(0x1396e6c, "RTTI_BlendedMeshEventInstance");
	apply_type(0x1396e6c, "RTTICompound");
	del_items(0x1398e58, DELIT_SIMPLE, 8);
	apply_type(0x1398e58, "RTTIBase[1]");
	set_name(0x1398e58, "BlendedMeshEventInstance::sBases");

	// BlendedMeshEventResource
	set_name(0x1396e18, "RTTI_BlendedMeshEventResource");
	apply_type(0x1396e18, "RTTICompound");
	del_items(0x1398dc4, DELIT_SIMPLE, 8);
	apply_type(0x1398dc4, "RTTIBase[1]");
	set_name(0x1398dc4, "BlendedMeshEventResource::sBases");
	del_items(0x1398dcc, DELIT_SIMPLE, 140);
	apply_type(0x1398dcc, "RTTIAttr[5]");
	set_name(0x1398dcc, "BlendedMeshEventResource::sAttrs");

	// BlendedMeshInstance
	set_name(0x133ba14, "RTTI_BlendedMeshInstance");
	apply_type(0x133ba14, "RTTICompound");
	del_items(0x133c1dc, DELIT_SIMPLE, 8);
	apply_type(0x133c1dc, "RTTIBase[1]");
	set_name(0x133c1dc, "BlendedMeshInstance::sBases");
	del_items(0x133c1e4, DELIT_SIMPLE, 112);
	apply_type(0x133c1e4, "RTTIAttr[4]");
	set_name(0x133c1e4, "BlendedMeshInstance::sAttrs");
	del_items(0x133c254, DELIT_SIMPLE, 12);
	apply_type(0x133c254, "RTTIMessageHandler[1]");
	set_name(0x133c254, "BlendedMeshInstance::sMessageHandlers");

	// BlendedMeshResource
	set_name(0x133b9c0, "RTTI_BlendedMeshResource");
	apply_type(0x133b9c0, "RTTICompound");
	del_items(0x133c120, DELIT_SIMPLE, 8);
	apply_type(0x133c120, "RTTIBase[1]");
	set_name(0x133c120, "BlendedMeshResource::sBases");
	del_items(0x133c128, DELIT_SIMPLE, 168);
	apply_type(0x133c128, "RTTIAttr[6]");
	set_name(0x133c128, "BlendedMeshResource::sAttrs");
	del_items(0x133c1d0, DELIT_SIMPLE, 12);
	apply_type(0x133c1d0, "RTTIMessageHandler[1]");
	set_name(0x133c1d0, "BlendedMeshResource::sMessageHandlers");

	// BloodPuddleSettings
	set_name(0x1385d54, "RTTI_BloodPuddleSettings");
	apply_type(0x1385d54, "RTTICompound");
	del_items(0x1386238, DELIT_SIMPLE, 8);
	apply_type(0x1386238, "RTTIBase[1]");
	set_name(0x1386238, "BloodPuddleSettings::sBases");
	del_items(0x1386240, DELIT_SIMPLE, 140);
	apply_type(0x1386240, "RTTIAttr[5]");
	set_name(0x1386240, "BloodPuddleSettings::sAttrs");

	// BloodSplatterProperties
	set_name(0x13afe30, "RTTI_BloodSplatterProperties");
	apply_type(0x13afe30, "RTTICompound");
	del_items(0x13b0294, DELIT_SIMPLE, 84);
	apply_type(0x13b0294, "RTTIAttr[3]");
	set_name(0x13b0294, "BloodSplatterProperties::sAttrs");

	// BloomSettingsResource
	set_name(0x13480cc, "RTTI_BloomSettingsResource");
	apply_type(0x13480cc, "RTTICompound");
	del_items(0x1348e14, DELIT_SIMPLE, 8);
	apply_type(0x1348e14, "RTTIBase[1]");
	set_name(0x1348e14, "BloomSettingsResource::sBases");
	del_items(0x1348e1c, DELIT_SIMPLE, 168);
	apply_type(0x1348e1c, "RTTIAttr[6]");
	set_name(0x1348e1c, "BloomSettingsResource::sAttrs");

	// BlurSettingsResource
	set_name(0x1348134, "RTTI_BlurSettingsResource");
	apply_type(0x1348134, "RTTICompound");
	del_items(0x1348fec, DELIT_SIMPLE, 8);
	apply_type(0x1348fec, "RTTIBase[1]");
	set_name(0x1348fec, "BlurSettingsResource::sBases");
	del_items(0x1348ff4, DELIT_SIMPLE, 280);
	apply_type(0x1348ff4, "RTTIAttr[10]");
	set_name(0x1348ff4, "BlurSettingsResource::sAttrs");

	// BoneAttachedParticleSystem
	set_name(0x1362434, "RTTI_BoneAttachedParticleSystem");
	apply_type(0x1362434, "RTTICompound");
	del_items(0x1363e44, DELIT_SIMPLE, 8);
	apply_type(0x1363e44, "RTTIBase[1]");
	set_name(0x1363e44, "BoneAttachedParticleSystem::sBases");
	del_items(0x1363e4c, DELIT_SIMPLE, 24);
	apply_type(0x1363e4c, "RTTIMessageHandler[2]");
	set_name(0x1363e4c, "BoneAttachedParticleSystem::sMessageHandlers");

	// BoneAttachedParticleSystemLink
	set_name(0x1362498, "RTTI_BoneAttachedParticleSystemLink");
	apply_type(0x1362498, "RTTICompound");
	del_items(0x1363e64, DELIT_SIMPLE, 168);
	apply_type(0x1363e64, "RTTIAttr[6]");
	set_name(0x1363e64, "BoneAttachedParticleSystemLink::sAttrs");

	// BoneAttachedParticleSystemResource
	set_name(0x13624fc, "RTTI_BoneAttachedParticleSystemResource");
	apply_type(0x13624fc, "RTTICompound");
	del_items(0x1363f0c, DELIT_SIMPLE, 8);
	apply_type(0x1363f0c, "RTTIBase[1]");
	set_name(0x1363f0c, "BoneAttachedParticleSystemResource::sBases");
	del_items(0x1363f14, DELIT_SIMPLE, 84);
	apply_type(0x1363f14, "RTTIAttr[3]");
	set_name(0x1363f14, "BoneAttachedParticleSystemResource::sAttrs");

	// BoneLocatorInstance
	set_name(0x139a56c, "RTTI_BoneLocatorInstance");
	apply_type(0x139a56c, "RTTICompound");
	del_items(0x139bb9c, DELIT_SIMPLE, 8);
	apply_type(0x139bb9c, "RTTIBase[1]");
	set_name(0x139bb9c, "BoneLocatorInstance::sBases");

	// BoneLocatorResource
	set_name(0x139a518, "RTTI_BoneLocatorResource");
	apply_type(0x139a518, "RTTICompound");
	del_items(0x139bb24, DELIT_SIMPLE, 8);
	apply_type(0x139bb24, "RTTIBase[1]");
	set_name(0x139bb24, "BoneLocatorResource::sBases");
	del_items(0x139bb2c, DELIT_SIMPLE, 112);
	apply_type(0x139bb2c, "RTTIAttr[4]");
	set_name(0x139bb2c, "BoneLocatorResource::sAttrs");

	// BoneRemapEntry
	set_name(0x13565c8, "RTTI_BoneRemapEntry");
	apply_type(0x13565c8, "RTTICompound");
	del_items(0x1357184, DELIT_SIMPLE, 56);
	apply_type(0x1357184, "RTTIAttr[2]");
	set_name(0x1357184, "BoneRemapEntry::sAttrs");

	// BoneSetFlags
	set_name(0x135661c, "RTTI_BoneSetFlags");
	apply_type(0x135661c, "RTTICompound");
	del_items(0x1356da4, DELIT_SIMPLE, 28);
	apply_type(0x1356da4, "RTTIAttr[1]");
	set_name(0x1356da4, "BoneSetFlags::sAttrs");

	// BoneSetFlagsList
	set_name(0x13569d4, "RTTI_BoneSetFlagsList");
	apply_type(0x13569d4, "RTTICompound");
	del_items(0x13577cc, DELIT_SIMPLE, 28);
	apply_type(0x13577cc, "RTTIAttr[1]");
	set_name(0x13577cc, "BoneSetFlagsList::sAttrs");

	// BotNames
	set_name(0x13b64d8, "RTTI_BotNames");
	apply_type(0x13b64d8, "RTTICompound");
	del_items(0x13b6d84, DELIT_SIMPLE, 8);
	apply_type(0x13b6d84, "RTTIBase[1]");
	set_name(0x13b6d84, "BotNames::sBases");
	del_items(0x13b6d8c, DELIT_SIMPLE, 84);
	apply_type(0x13b6d8c, "RTTIAttr[3]");
	set_name(0x13b6d8c, "BotNames::sAttrs");

	// BoundingBox2
	set_name(0x132ade0, "RTTI_BoundingBox2");
	apply_type(0x132ade0, "RTTICompound");
	del_items(0x132b37c, DELIT_SIMPLE, 56);
	apply_type(0x132b37c, "RTTIAttr[2]");
	set_name(0x132b37c, "BoundingBox2::sAttrs");

	// BoundingBox3
	set_name(0x132ae44, "RTTI_BoundingBox3");
	apply_type(0x132ae44, "RTTICompound");
	del_items(0x132b240, DELIT_SIMPLE, 56);
	apply_type(0x132b240, "RTTIAttr[2]");
	set_name(0x132b240, "BoundingBox3::sAttrs");

	// BoundingSphere
	set_name(0x132aea8, "RTTI_BoundingSphere");
	apply_type(0x132aea8, "RTTICompound");
	del_items(0x132b278, DELIT_SIMPLE, 56);
	apply_type(0x132b278, "RTTIAttr[2]");
	set_name(0x132b278, "BoundingSphere::sAttrs");

	// BreakSuspensionAction
	set_name(0x13769e8, "RTTI_BreakSuspensionAction");
	apply_type(0x13769e8, "RTTICompound");
	del_items(0x1378010, DELIT_SIMPLE, 8);
	apply_type(0x1378010, "RTTIBase[1]");
	set_name(0x1378010, "BreakSuspensionAction::sBases");
	del_items(0x1378018, DELIT_SIMPLE, 56);
	apply_type(0x1378018, "RTTIAttr[2]");
	set_name(0x1378018, "BreakSuspensionAction::sAttrs");

	// BreakWheelAction
	set_name(0x1376940, "RTTI_BreakWheelAction");
	apply_type(0x1376940, "RTTICompound");
	del_items(0x1377f74, DELIT_SIMPLE, 8);
	apply_type(0x1377f74, "RTTIBase[1]");
	set_name(0x1377f74, "BreakWheelAction::sBases");
	del_items(0x1377f7c, DELIT_SIMPLE, 84);
	apply_type(0x1377f7c, "RTTIAttr[3]");
	set_name(0x1377f7c, "BreakWheelAction::sAttrs");

	// BrutalMeleeDeathSoundOverride
	set_name(0x1389a14, "RTTI_BrutalMeleeDeathSoundOverride");
	apply_type(0x1389a14, "RTTICompound");
	del_items(0x138abf4, DELIT_SIMPLE, 84);
	apply_type(0x138abf4, "RTTIAttr[3]");
	set_name(0x138abf4, "BrutalMeleeDeathSoundOverride::sAttrs");

	// BrutalMeleeRegionSettings
	set_name(0x1389adc, "RTTI_BrutalMeleeRegionSettings");
	apply_type(0x1389adc, "RTTICompound");
	del_items(0x138ac9c, DELIT_SIMPLE, 56);
	apply_type(0x138ac9c, "RTTIAttr[2]");
	set_name(0x138ac9c, "BrutalMeleeRegionSettings::sAttrs");

	// Buggy
	set_name(0x13804d8, "RTTI_Buggy");
	apply_type(0x13804d8, "RTTICompound");
	del_items(0x1382408, DELIT_SIMPLE, 8);
	apply_type(0x1382408, "RTTIBase[1]");
	set_name(0x1382408, "Buggy::sBases");

	// BuggyJoystickController
	set_name(0x1383358, "RTTI_BuggyJoystickController");
	apply_type(0x1383358, "RTTICompound");
	del_items(0x13850b4, DELIT_SIMPLE, 8);
	apply_type(0x13850b4, "RTTIBase[1]");
	set_name(0x13850b4, "BuggyJoystickController::sBases");

	// BuggyRep
	set_name(0x1383454, "RTTI_BuggyRep");
	apply_type(0x1383454, "RTTICompound");
	del_items(0x13850d0, DELIT_SIMPLE, 8);
	apply_type(0x13850d0, "RTTIBase[1]");
	set_name(0x13850d0, "BuggyRep::sBases");

	// BuggyResource
	set_name(0x1382b64, "RTTI_BuggyResource");
	apply_type(0x1382b64, "RTTICompound");
	del_items(0x138405c, DELIT_SIMPLE, 8);
	apply_type(0x138405c, "RTTIBase[1]");
	set_name(0x138405c, "BuggyResource::sBases");
	del_items(0x1384064, DELIT_SIMPLE, 56);
	apply_type(0x1384064, "RTTIAttr[2]");
	set_name(0x1384064, "BuggyResource::sAttrs");

	// BulletEjectorResource
	set_name(0x139e810, "RTTI_BulletEjectorResource");
	apply_type(0x139e810, "RTTICompound");
	del_items(0x139f26c, DELIT_SIMPLE, 8);
	apply_type(0x139f26c, "RTTIBase[1]");
	set_name(0x139f26c, "BulletEjectorResource::sBases");
	del_items(0x139f274, DELIT_SIMPLE, 1008);
	apply_type(0x139f274, "RTTIAttr[36]");
	set_name(0x139f274, "BulletEjectorResource::sAttrs");

	// BulletSystem
	set_name(0x139e864, "RTTI_BulletSystem");
	apply_type(0x139e864, "RTTICompound");
	del_items(0x139f89c, DELIT_SIMPLE, 8);
	apply_type(0x139f89c, "RTTIBase[1]");
	set_name(0x139f89c, "BulletSystem::sBases");
	del_items(0x139f8a4, DELIT_SIMPLE, 12);
	apply_type(0x139f8a4, "RTTIMessageHandler[1]");
	set_name(0x139f8a4, "BulletSystem::sMessageHandlers");

	// BulletSystemRep
	set_name(0x139e8b8, "RTTI_BulletSystemRep");
	apply_type(0x139e8b8, "RTTICompound");
	del_items(0x139f8b0, DELIT_SIMPLE, 8);
	apply_type(0x139f8b0, "RTTIBase[1]");
	set_name(0x139f8b0, "BulletSystemRep::sBases");
	del_items(0x139f8b8, DELIT_SIMPLE, 12);
	apply_type(0x139f8b8, "RTTIMessageHandler[1]");
	set_name(0x139f8b8, "BulletSystemRep::sMessageHandlers");

	// BulletSystemResource
	set_name(0x139e90c, "RTTI_BulletSystemResource");
	apply_type(0x139e90c, "RTTICompound");
	del_items(0x139f6b8, DELIT_SIMPLE, 8);
	apply_type(0x139f6b8, "RTTIBase[1]");
	set_name(0x139f6b8, "BulletSystemResource::sBases");
	del_items(0x139f6c0, DELIT_SIMPLE, 476);
	apply_type(0x139f6c0, "RTTIAttr[17]");
	set_name(0x139f6c0, "BulletSystemResource::sAttrs");

	// ButtonFunctionMapping
	set_name(0x1367f78, "RTTI_ButtonFunctionMapping");
	apply_type(0x1367f78, "RTTICompound");
	del_items(0x136a98c, DELIT_SIMPLE, 56);
	apply_type(0x136a98c, "RTTIAttr[2]");
	set_name(0x136a98c, "ButtonFunctionMapping::sAttrs");

	// ButtonIcon
	set_name(0x13ac7c8, "RTTI_ButtonIcon");
	apply_type(0x13ac7c8, "RTTICompound");
	del_items(0x13adaa0, DELIT_SIMPLE, 112);
	apply_type(0x13adaa0, "RTTIAttr[4]");
	set_name(0x13adaa0, "ButtonIcon::sAttrs");

	// ButtonIconCollection
	set_name(0x13ac82c, "RTTI_ButtonIconCollection");
	apply_type(0x13ac82c, "RTTICompound");
	del_items(0x13adb10, DELIT_SIMPLE, 8);
	apply_type(0x13adb10, "RTTIBase[1]");
	set_name(0x13adb10, "ButtonIconCollection::sBases");
	del_items(0x13adb18, DELIT_SIMPLE, 84);
	apply_type(0x13adb18, "RTTIAttr[3]");
	set_name(0x13adb18, "ButtonIconCollection::sAttrs");
	del_items(0x13adb6c, DELIT_SIMPLE, 12);
	apply_type(0x13adb6c, "RTTIMessageHandler[1]");
	set_name(0x13adb6c, "ButtonIconCollection::sMessageHandlers");

	// ButtonPressureDefinition
	set_name(0x1367e5c, "RTTI_ButtonPressureDefinition");
	apply_type(0x1367e5c, "RTTICompound");
	del_items(0x136a4dc, DELIT_SIMPLE, 56);
	apply_type(0x136a4dc, "RTTIAttr[2]");
	set_name(0x136a4dc, "ButtonPressureDefinition::sAttrs");

	// ButtonTag
	set_name(0x133cd10, "RTTI_ButtonTag");
	apply_type(0x133cd10, "RTTICompound");
	del_items(0x133f2b8, DELIT_SIMPLE, 8);
	apply_type(0x133f2b8, "RTTIBase[1]");
	set_name(0x133f2b8, "ButtonTag::sBases");

	// ButtonWidget
	set_name(0x133d5b8, "RTTI_ButtonWidget");
	apply_type(0x133d5b8, "RTTICompound");
	del_items(0x133f7b0, DELIT_SIMPLE, 8);
	apply_type(0x133f7b0, "RTTIBase[1]");
	set_name(0x133f7b0, "ButtonWidget::sBases");

	// C4
	set_name(0x139e960, "RTTI_C4");
	apply_type(0x139e960, "RTTICompound");
	del_items(0x139f9b8, DELIT_SIMPLE, 8);
	apply_type(0x139f9b8, "RTTIBase[1]");
	set_name(0x139f9b8, "C4::sBases");

	// C4Rep
	set_name(0x139e9b4, "RTTI_C4Rep");
	apply_type(0x139e9b4, "RTTICompound");
	del_items(0x139fbf4, DELIT_SIMPLE, 8);
	apply_type(0x139fbf4, "RTTIBase[1]");
	set_name(0x139fbf4, "C4Rep::sBases");

	// C4Resource
	set_name(0x139ea08, "RTTI_C4Resource");
	apply_type(0x139ea08, "RTTICompound");
	del_items(0x139f8d0, DELIT_SIMPLE, 8);
	apply_type(0x139f8d0, "RTTIBase[1]");
	set_name(0x139f8d0, "C4Resource::sBases");
	del_items(0x139f8d8, DELIT_SIMPLE, 224);
	apply_type(0x139f8d8, "RTTIAttr[8]");
	set_name(0x139f8d8, "C4Resource::sAttrs");

	// CaHObjective
	set_name(0x13a3404, "RTTI_CaHObjective");
	apply_type(0x13a3404, "RTTICompound");
	del_items(0x13a4d24, DELIT_SIMPLE, 28);
	apply_type(0x13a4d24, "RTTIAttr[1]");
	set_name(0x13a4d24, "CaHObjective::sAttrs");

	// CallScriptEventInstance
	set_name(0x1394174, "RTTI_CallScriptEventInstance");
	apply_type(0x1394174, "RTTICompound");
	del_items(0x1395f64, DELIT_SIMPLE, 8);
	apply_type(0x1395f64, "RTTIBase[1]");
	set_name(0x1395f64, "CallScriptEventInstance::sBases");

	// CallScriptEventResource
	set_name(0x1394120, "RTTI_CallScriptEventResource");
	apply_type(0x1394120, "RTTICompound");
	del_items(0x1395f08, DELIT_SIMPLE, 8);
	apply_type(0x1395f08, "RTTIBase[1]");
	set_name(0x1395f08, "CallScriptEventResource::sBases");
	del_items(0x1395f10, DELIT_SIMPLE, 84);
	apply_type(0x1395f10, "RTTIAttr[3]");
	set_name(0x1395f10, "CallScriptEventResource::sAttrs");

	// Camera
	set_name(0x135cd10, "RTTI_Camera");
	apply_type(0x135cd10, "RTTICompound");
	del_items(0x135cee4, DELIT_SIMPLE, 8);
	apply_type(0x135cee4, "RTTIBase[1]");
	set_name(0x135cee4, "Camera::sBases");
	del_items(0x135ceec, DELIT_SIMPLE, 448);
	apply_type(0x135ceec, "RTTIAttr[16]");
	set_name(0x135ceec, "Camera::sAttrs");

	// CameraCollisionRail
	set_name(0x1378da0, "RTTI_CameraCollisionRail");
	apply_type(0x1378da0, "RTTICompound");

	// CameraEntity
	set_name(0x135da20, "RTTI_CameraEntity");
	apply_type(0x135da20, "RTTICompound");
	del_items(0x1360450, DELIT_SIMPLE, 8);
	apply_type(0x1360450, "RTTIBase[1]");
	set_name(0x1360450, "CameraEntity::sBases");
	del_items(0x1360458, DELIT_SIMPLE, 336);
	apply_type(0x1360458, "RTTIAttr[12]");
	set_name(0x1360458, "CameraEntity::sAttrs");

	// CameraEntityRep
	set_name(0x135da74, "RTTI_CameraEntityRep");
	apply_type(0x135da74, "RTTICompound");
	del_items(0x13605ac, DELIT_SIMPLE, 8);
	apply_type(0x13605ac, "RTTIBase[1]");
	set_name(0x13605ac, "CameraEntityRep::sBases");

	// CameraEntityResource
	set_name(0x135dad8, "RTTI_CameraEntityResource");
	apply_type(0x135dad8, "RTTICompound");
	del_items(0x13601e0, DELIT_SIMPLE, 8);
	apply_type(0x13601e0, "RTTIBase[1]");
	set_name(0x13601e0, "CameraEntityResource::sBases");
	del_items(0x13601e8, DELIT_SIMPLE, 616);
	apply_type(0x13601e8, "RTTIAttr[22]");
	set_name(0x13601e8, "CameraEntityResource::sAttrs");

	// CameraEventInstance
	set_name(0x139421c, "RTTI_CameraEventInstance");
	apply_type(0x139421c, "RTTICompound");
	del_items(0x1396054, DELIT_SIMPLE, 8);
	apply_type(0x1396054, "RTTIBase[1]");
	set_name(0x1396054, "CameraEventInstance::sBases");

	// CameraEventResource
	set_name(0x13941c8, "RTTI_CameraEventResource");
	apply_type(0x13941c8, "RTTICompound");
	del_items(0x1395f6c, DELIT_SIMPLE, 8);
	apply_type(0x1395f6c, "RTTIBase[1]");
	set_name(0x1395f6c, "CameraEventResource::sBases");
	del_items(0x1395f74, DELIT_SIMPLE, 224);
	apply_type(0x1395f74, "RTTIAttr[8]");
	set_name(0x1395f74, "CameraEventResource::sAttrs");

	// CameraManager
	set_name(0x135cd64, "RTTI_CameraManager");
	apply_type(0x135cd64, "RTTICompound");
	del_items(0x135d0ac, DELIT_SIMPLE, 8);
	apply_type(0x135d0ac, "RTTIBase[1]");
	set_name(0x135d0ac, "CameraManager::sBases");
	del_items(0x135d0b4, DELIT_SIMPLE, 12);
	apply_type(0x135d0b4, "RTTIMessageHandler[1]");
	set_name(0x135d0b4, "CameraManager::sMessageHandlers");

	// CameraShakeEventInstance
	set_name(0x13942c4, "RTTI_CameraShakeEventInstance");
	apply_type(0x13942c4, "RTTICompound");
	del_items(0x13960d4, DELIT_SIMPLE, 8);
	apply_type(0x13960d4, "RTTIBase[1]");
	set_name(0x13960d4, "CameraShakeEventInstance::sBases");

	// CameraShakeEventResource
	set_name(0x1394270, "RTTI_CameraShakeEventResource");
	apply_type(0x1394270, "RTTICompound");
	del_items(0x139605c, DELIT_SIMPLE, 8);
	apply_type(0x139605c, "RTTIBase[1]");
	set_name(0x139605c, "CameraShakeEventResource::sBases");
	del_items(0x1396064, DELIT_SIMPLE, 112);
	apply_type(0x1396064, "RTTIAttr[4]");
	set_name(0x1396064, "CameraShakeEventResource::sAttrs");

	// CaptureAndHoldArea
	set_name(0x139b380, "RTTI_CaptureAndHoldArea");
	apply_type(0x139b380, "RTTICompound");
	del_items(0x139c270, DELIT_SIMPLE, 8);
	apply_type(0x139c270, "RTTIBase[1]");
	set_name(0x139c270, "CaptureAndHoldArea::sBases");
	del_items(0x139c278, DELIT_SIMPLE, 144);
	apply_type(0x139c278, "RTTIFunction[6]");
	set_name(0x139c278, "CaptureAndHoldArea::sFunctions");

	// CaptureAndHoldAreaFactionSettings
	set_name(0x139c328, "RTTI_CaptureAndHoldAreaFactionSettings");
	apply_type(0x139c328, "RTTICompound");
	del_items(0x139cdb4, DELIT_SIMPLE, 8);
	apply_type(0x139cdb4, "RTTIBase[1]");
	set_name(0x139cdb4, "CaptureAndHoldAreaFactionSettings::sBases");
	del_items(0x139cdbc, DELIT_SIMPLE, 168);
	apply_type(0x139cdbc, "RTTIAttr[6]");
	set_name(0x139cdbc, "CaptureAndHoldAreaFactionSettings::sAttrs");

	// CaptureAndHoldAreaRep
	set_name(0x139c3d0, "RTTI_CaptureAndHoldAreaRep");
	apply_type(0x139c3d0, "RTTICompound");
	del_items(0x139d05c, DELIT_SIMPLE, 8);
	apply_type(0x139d05c, "RTTIBase[1]");
	set_name(0x139d05c, "CaptureAndHoldAreaRep::sBases");

	// CaptureAndHoldAreaResource
	set_name(0x139c37c, "RTTI_CaptureAndHoldAreaResource");
	apply_type(0x139c37c, "RTTICompound");
	del_items(0x139ce70, DELIT_SIMPLE, 8);
	apply_type(0x139ce70, "RTTIBase[1]");
	set_name(0x139ce70, "CaptureAndHoldAreaResource::sBases");
	del_items(0x139ce78, DELIT_SIMPLE, 476);
	apply_type(0x139ce78, "RTTIAttr[17]");
	set_name(0x139ce78, "CaptureAndHoldAreaResource::sAttrs");

	// CaptureAndHoldMapZone
	set_name(0x13ac6f0, "RTTI_CaptureAndHoldMapZone");
	apply_type(0x13ac6f0, "RTTICompound");
	del_items(0x13ad92c, DELIT_SIMPLE, 8);
	apply_type(0x13ad92c, "RTTIBase[1]");
	set_name(0x13ad92c, "CaptureAndHoldMapZone::sBases");
	del_items(0x13ad934, DELIT_SIMPLE, 28);
	apply_type(0x13ad934, "RTTIAttr[1]");
	set_name(0x13ad934, "CaptureAndHoldMapZone::sAttrs");

	// CaptureTrooperComponent
	set_name(0x1389788, "RTTI_CaptureTrooperComponent");
	apply_type(0x1389788, "RTTICompound");
	del_items(0x138c934, DELIT_SIMPLE, 8);
	apply_type(0x138c934, "RTTIBase[1]");
	set_name(0x138c934, "CaptureTrooperComponent::sBases");
	del_items(0x138c93c, DELIT_SIMPLE, 24);
	apply_type(0x138c93c, "RTTIFunction[1]");
	set_name(0x138c93c, "CaptureTrooperComponent::sFunctions");

	// CaptureTrooperComponentResource
	set_name(0x13897dc, "RTTI_CaptureTrooperComponentResource");
	apply_type(0x13897dc, "RTTICompound");
	del_items(0x138c82c, DELIT_SIMPLE, 8);
	apply_type(0x138c82c, "RTTIBase[1]");
	set_name(0x138c82c, "CaptureTrooperComponentResource::sBases");
	del_items(0x138c834, DELIT_SIMPLE, 252);
	apply_type(0x138c834, "RTTIAttr[9]");
	set_name(0x138c834, "CaptureTrooperComponentResource::sAttrs");

	// Career
	set_name(0x13ba7fc, "RTTI_Career");
	apply_type(0x13ba7fc, "RTTICompound");
	del_items(0x13bbf24, DELIT_SIMPLE, 8);
	apply_type(0x13bbf24, "RTTIBase[1]");
	set_name(0x13bbf24, "Career::sBases");
	del_items(0x13bbf2c, DELIT_SIMPLE, 224);
	apply_type(0x13bbf2c, "RTTIAttr[8]");
	set_name(0x13bbf2c, "Career::sAttrs");

	// CareerAbility
	set_name(0x136bd80, "RTTI_CareerAbility");
	apply_type(0x136bd80, "RTTICompound");
	del_items(0x136d998, DELIT_SIMPLE, 8);
	apply_type(0x136d998, "RTTIBase[1]");
	set_name(0x136d998, "CareerAbility::sBases");

	// CareerAbilityExtraAmmoResource
	set_name(0x136be9c, "RTTI_CareerAbilityExtraAmmoResource");
	apply_type(0x136be9c, "RTTICompound");
	del_items(0x136ed60, DELIT_SIMPLE, 8);
	apply_type(0x136ed60, "RTTIBase[1]");
	set_name(0x136ed60, "CareerAbilityExtraAmmoResource::sBases");
	del_items(0x136ed68, DELIT_SIMPLE, 28);
	apply_type(0x136ed68, "RTTIAttr[1]");
	set_name(0x136ed68, "CareerAbilityExtraAmmoResource::sAttrs");

	// CareerAbilityExtraDamage
	set_name(0x136bef0, "RTTI_CareerAbilityExtraDamage");
	apply_type(0x136bef0, "RTTICompound");
	del_items(0x136ede0, DELIT_SIMPLE, 8);
	apply_type(0x136ede0, "RTTIBase[1]");
	set_name(0x136ede0, "CareerAbilityExtraDamage::sBases");

	// CareerAbilityExtraDamageResource
	set_name(0x136bfa8, "RTTI_CareerAbilityExtraDamageResource");
	apply_type(0x136bfa8, "RTTICompound");
	del_items(0x136edbc, DELIT_SIMPLE, 8);
	apply_type(0x136edbc, "RTTIBase[1]");
	set_name(0x136edbc, "CareerAbilityExtraDamageResource::sBases");
	del_items(0x136edc4, DELIT_SIMPLE, 28);
	apply_type(0x136edc4, "RTTIAttr[1]");
	set_name(0x136edc4, "CareerAbilityExtraDamageResource::sAttrs");

	// CareerAbilityExtraHealthResource
	set_name(0x136c248, "RTTI_CareerAbilityExtraHealthResource");
	apply_type(0x136c248, "RTTICompound");
	del_items(0x136ef8c, DELIT_SIMPLE, 8);
	apply_type(0x136ef8c, "RTTIBase[1]");
	set_name(0x136ef8c, "CareerAbilityExtraHealthResource::sBases");
	del_items(0x136ef94, DELIT_SIMPLE, 84);
	apply_type(0x136ef94, "RTTIAttr[3]");
	set_name(0x136ef94, "CareerAbilityExtraHealthResource::sAttrs");

	// CareerAbilityExtraPrimaryWeaponResource
	set_name(0x136bffc, "RTTI_CareerAbilityExtraPrimaryWeaponResource");
	apply_type(0x136bffc, "RTTICompound");
	del_items(0x136ede8, DELIT_SIMPLE, 8);
	apply_type(0x136ede8, "RTTIBase[1]");
	set_name(0x136ede8, "CareerAbilityExtraPrimaryWeaponResource::sBases");

	// CareerAbilityFasterActionsResource
	set_name(0x136c050, "RTTI_CareerAbilityFasterActionsResource");
	apply_type(0x136c050, "RTTICompound");
	del_items(0x136edf0, DELIT_SIMPLE, 8);
	apply_type(0x136edf0, "RTTIBase[1]");
	set_name(0x136edf0, "CareerAbilityFasterActionsResource::sBases");
	del_items(0x136edf8, DELIT_SIMPLE, 56);
	apply_type(0x136edf8, "RTTIAttr[2]");
	set_name(0x136edf8, "CareerAbilityFasterActionsResource::sAttrs");

	// CareerAbilityFasterZoomResource
	set_name(0x136c0a4, "RTTI_CareerAbilityFasterZoomResource");
	apply_type(0x136c0a4, "RTTICompound");
	del_items(0x136ee30, DELIT_SIMPLE, 8);
	apply_type(0x136ee30, "RTTIBase[1]");
	set_name(0x136ee30, "CareerAbilityFasterZoomResource::sBases");
	del_items(0x136ee38, DELIT_SIMPLE, 84);
	apply_type(0x136ee38, "RTTIAttr[3]");
	set_name(0x136ee38, "CareerAbilityFasterZoomResource::sAttrs");

	// CareerAbilityHealthAuraResource
	set_name(0x136c3ec, "RTTI_CareerAbilityHealthAuraResource");
	apply_type(0x136c3ec, "RTTICompound");
	del_items(0x136f0b0, DELIT_SIMPLE, 8);
	apply_type(0x136f0b0, "RTTIBase[1]");
	set_name(0x136f0b0, "CareerAbilityHealthAuraResource::sBases");
	del_items(0x136f0b8, DELIT_SIMPLE, 84);
	apply_type(0x136f0b8, "RTTIAttr[3]");
	set_name(0x136f0b8, "CareerAbilityHealthAuraResource::sAttrs");

	// CareerAbilityHigherAccuracyResource
	set_name(0x136c0f8, "RTTI_CareerAbilityHigherAccuracyResource");
	apply_type(0x136c0f8, "RTTICompound");
	del_items(0x136ee8c, DELIT_SIMPLE, 8);
	apply_type(0x136ee8c, "RTTIBase[1]");
	set_name(0x136ee8c, "CareerAbilityHigherAccuracyResource::sBases");
	del_items(0x136ee94, DELIT_SIMPLE, 56);
	apply_type(0x136ee94, "RTTIAttr[2]");
	set_name(0x136ee94, "CareerAbilityHigherAccuracyResource::sAttrs");

	// CareerAbilityIncreasedTurretRateResource
	set_name(0x136c440, "RTTI_CareerAbilityIncreasedTurretRateResource");
	apply_type(0x136c440, "RTTICompound");
	del_items(0x136f10c, DELIT_SIMPLE, 8);
	apply_type(0x136f10c, "RTTIBase[1]");
	set_name(0x136f10c, "CareerAbilityIncreasedTurretRateResource::sBases");

	// CareerAbilityRadarJamming
	set_name(0x136c29c, "RTTI_CareerAbilityRadarJamming");
	apply_type(0x136c29c, "RTTICompound");
	del_items(0x136f060, DELIT_SIMPLE, 8);
	apply_type(0x136f060, "RTTIBase[1]");
	set_name(0x136f060, "CareerAbilityRadarJamming::sBases");

	// CareerAbilityRadarJammingResource
	set_name(0x136c2f0, "RTTI_CareerAbilityRadarJammingResource");
	apply_type(0x136c2f0, "RTTICompound");
	del_items(0x136efe8, DELIT_SIMPLE, 8);
	apply_type(0x136efe8, "RTTIBase[1]");
	set_name(0x136efe8, "CareerAbilityRadarJammingResource::sBases");
	del_items(0x136eff0, DELIT_SIMPLE, 112);
	apply_type(0x136eff0, "RTTIAttr[4]");
	set_name(0x136eff0, "CareerAbilityRadarJammingResource::sAttrs");

	// CareerAbilityResource
	set_name(0x136bde4, "RTTI_CareerAbilityResource");
	apply_type(0x136bde4, "RTTICompound");
	del_items(0x136ec08, DELIT_SIMPLE, 8);
	apply_type(0x136ec08, "RTTIBase[1]");
	set_name(0x136ec08, "CareerAbilityResource::sBases");
	del_items(0x136ec10, DELIT_SIMPLE, 252);
	apply_type(0x136ec10, "RTTIAttr[9]");
	set_name(0x136ec10, "CareerAbilityResource::sAttrs");

	// CareerAbilitySilentFootstepsResource
	set_name(0x136c14c, "RTTI_CareerAbilitySilentFootstepsResource");
	apply_type(0x136c14c, "RTTICompound");
	del_items(0x136eecc, DELIT_SIMPLE, 8);
	apply_type(0x136eecc, "RTTIBase[1]");
	set_name(0x136eecc, "CareerAbilitySilentFootstepsResource::sBases");

	// CareerAbilitySpotAndMark
	set_name(0x136c344, "RTTI_CareerAbilitySpotAndMark");
	apply_type(0x136c344, "RTTICompound");
	del_items(0x136f0a8, DELIT_SIMPLE, 8);
	apply_type(0x136f0a8, "RTTIBase[1]");
	set_name(0x136f0a8, "CareerAbilitySpotAndMark::sBases");

	// CareerAbilitySpotAndMarkResource
	set_name(0x136c398, "RTTI_CareerAbilitySpotAndMarkResource");
	apply_type(0x136c398, "RTTICompound");
	del_items(0x136f068, DELIT_SIMPLE, 8);
	apply_type(0x136f068, "RTTIBase[1]");
	set_name(0x136f068, "CareerAbilitySpotAndMarkResource::sBases");
	del_items(0x136f070, DELIT_SIMPLE, 56);
	apply_type(0x136f070, "RTTIAttr[2]");
	set_name(0x136f070, "CareerAbilitySpotAndMarkResource::sAttrs");

	// CareerAbilitySprintSpeedMultiplierResource
	set_name(0x136c1f4, "RTTI_CareerAbilitySprintSpeedMultiplierResource");
	apply_type(0x136c1f4, "RTTICompound");
	del_items(0x136ef4c, DELIT_SIMPLE, 8);
	apply_type(0x136ef4c, "RTTIBase[1]");
	set_name(0x136ef4c, "CareerAbilitySprintSpeedMultiplierResource::sBases");
	del_items(0x136ef54, DELIT_SIMPLE, 56);
	apply_type(0x136ef54, "RTTIAttr[2]");
	set_name(0x136ef54, "CareerAbilitySprintSpeedMultiplierResource::sAttrs");

	// CareerAbilityStaminaMultiplierResource
	set_name(0x136c1a0, "RTTI_CareerAbilityStaminaMultiplierResource");
	apply_type(0x136c1a0, "RTTICompound");
	del_items(0x136eed4, DELIT_SIMPLE, 8);
	apply_type(0x136eed4, "RTTIBase[1]");
	set_name(0x136eed4, "CareerAbilityStaminaMultiplierResource::sBases");
	del_items(0x136eedc, DELIT_SIMPLE, 112);
	apply_type(0x136eedc, "RTTIAttr[4]");
	set_name(0x136eedc, "CareerAbilityStaminaMultiplierResource::sAttrs");

	// CareerAbilitySurviveBleedoutResource
	set_name(0x136c494, "RTTI_CareerAbilitySurviveBleedoutResource");
	apply_type(0x136c494, "RTTICompound");
	del_items(0x136f114, DELIT_SIMPLE, 8);
	apply_type(0x136f114, "RTTIBase[1]");
	set_name(0x136f114, "CareerAbilitySurviveBleedoutResource::sBases");
	del_items(0x136f11c, DELIT_SIMPLE, 112);
	apply_type(0x136f11c, "RTTIAttr[4]");
	set_name(0x136f11c, "CareerAbilitySurviveBleedoutResource::sAttrs");

	// CareerAbilityTimeLimited
	set_name(0x13b2d2c, "RTTI_CareerAbilityTimeLimited");
	apply_type(0x13b2d2c, "RTTICompound");
	del_items(0x13b3b24, DELIT_SIMPLE, 8);
	apply_type(0x13b3b24, "RTTIBase[1]");
	set_name(0x13b3b24, "CareerAbilityTimeLimited::sBases");

	// CareerAbilityTimeLimitedResource
	set_name(0x13b2d80, "RTTI_CareerAbilityTimeLimitedResource");
	apply_type(0x13b2d80, "RTTICompound");
	del_items(0x13b3a70, DELIT_SIMPLE, 8);
	apply_type(0x13b3a70, "RTTIBase[1]");
	set_name(0x13b3a70, "CareerAbilityTimeLimitedResource::sBases");
	del_items(0x13b3a78, DELIT_SIMPLE, 112);
	apply_type(0x13b3a78, "RTTIAttr[4]");
	set_name(0x13b3a78, "CareerAbilityTimeLimitedResource::sAttrs");

	// CareerAbilityXpMultiplier
	set_name(0x13b2dd4, "RTTI_CareerAbilityXpMultiplier");
	apply_type(0x13b2dd4, "RTTICompound");
	del_items(0x13b3b6c, DELIT_SIMPLE, 8);
	apply_type(0x13b3b6c, "RTTIBase[1]");
	set_name(0x13b3b6c, "CareerAbilityXpMultiplier::sBases");

	// CareerAbilityXpMultiplierResource
	set_name(0x13b2e28, "RTTI_CareerAbilityXpMultiplierResource");
	apply_type(0x13b2e28, "RTTICompound");
	del_items(0x13b3b2c, DELIT_SIMPLE, 8);
	apply_type(0x13b3b2c, "RTTIBase[1]");
	set_name(0x13b3b2c, "CareerAbilityXpMultiplierResource::sBases");
	del_items(0x13b3b34, DELIT_SIMPLE, 56);
	apply_type(0x13b3b34, "RTTIAttr[2]");
	set_name(0x13b3b34, "CareerAbilityXpMultiplierResource::sAttrs");

	// CareerUnlock
	set_name(0x13ba788, "RTTI_CareerUnlock");
	apply_type(0x13ba788, "RTTICompound");
	del_items(0x13bbe3c, DELIT_SIMPLE, 8);
	apply_type(0x13bbe3c, "RTTIBase[1]");
	set_name(0x13bbe3c, "CareerUnlock::sBases");
	del_items(0x13bbe44, DELIT_SIMPLE, 224);
	apply_type(0x13bbe44, "RTTIAttr[8]");
	set_name(0x13bbe44, "CareerUnlock::sAttrs");

	// CareerUnlockSystem
	set_name(0x136c4e8, "RTTI_CareerUnlockSystem");
	apply_type(0x136c4e8, "RTTICompound");
	del_items(0x136f18c, DELIT_SIMPLE, 8);
	apply_type(0x136f18c, "RTTIBase[1]");
	set_name(0x136f18c, "CareerUnlockSystem::sBases");
	del_items(0x136f194, DELIT_SIMPLE, 96);
	apply_type(0x136f194, "RTTIFunction[4]");
	set_name(0x136f194, "CareerUnlockSystem::sFunctions");

	// CareerUnlockSystemResource
	set_name(0x136c53c, "RTTI_CareerUnlockSystemResource");
	apply_type(0x136c53c, "RTTICompound");
	del_items(0x136f1f8, DELIT_SIMPLE, 8);
	apply_type(0x136f1f8, "RTTIBase[1]");
	set_name(0x136f1f8, "CareerUnlockSystemResource::sBases");
	del_items(0x136f200, DELIT_SIMPLE, 84);
	apply_type(0x136f200, "RTTIAttr[3]");
	set_name(0x136f200, "CareerUnlockSystemResource::sAttrs");
	del_items(0x136f254, DELIT_SIMPLE, 12);
	apply_type(0x136f254, "RTTIMessageHandler[1]");
	set_name(0x136f254, "CareerUnlockSystemResource::sMessageHandlers");

	// ChangeInvulnerabilityEventInstance
	set_name(0x139436c, "RTTI_ChangeInvulnerabilityEventInstance");
	apply_type(0x139436c, "RTTICompound");
	del_items(0x1396154, DELIT_SIMPLE, 8);
	apply_type(0x1396154, "RTTIBase[1]");
	set_name(0x1396154, "ChangeInvulnerabilityEventInstance::sBases");

	// ChangeInvulnerabilityEventResource
	set_name(0x1394318, "RTTI_ChangeInvulnerabilityEventResource");
	apply_type(0x1394318, "RTTICompound");
	del_items(0x13960dc, DELIT_SIMPLE, 8);
	apply_type(0x13960dc, "RTTIBase[1]");
	set_name(0x13960dc, "ChangeInvulnerabilityEventResource::sBases");
	del_items(0x13960e4, DELIT_SIMPLE, 112);
	apply_type(0x13960e4, "RTTIAttr[4]");
	set_name(0x13960e4, "ChangeInvulnerabilityEventResource::sAttrs");

	// ChapterListResource
	set_name(0x13ba054, "RTTI_ChapterListResource");
	apply_type(0x13ba054, "RTTICompound");
	del_items(0x13bb978, DELIT_SIMPLE, 8);
	apply_type(0x13bb978, "RTTIBase[1]");
	set_name(0x13bb978, "ChapterListResource::sBases");
	del_items(0x13bb980, DELIT_SIMPLE, 28);
	apply_type(0x13bb980, "RTTIAttr[1]");
	set_name(0x13bb980, "ChapterListResource::sAttrs");
	del_items(0x13bb99c, DELIT_SIMPLE, 432);
	apply_type(0x13bb99c, "RTTIFunction[18]");
	set_name(0x13bb99c, "ChapterListResource::sFunctions");

	// CharacterSelectTag
	set_name(0x13ba2b0, "RTTI_CharacterSelectTag");
	apply_type(0x13ba2b0, "RTTICompound");
	del_items(0x13bc08c, DELIT_SIMPLE, 8);
	apply_type(0x13bc08c, "RTTIBase[1]");
	set_name(0x13bc08c, "CharacterSelectTag::sBases");
	del_items(0x13bc094, DELIT_SIMPLE, 120);
	apply_type(0x13bc094, "RTTIFunction[5]");
	set_name(0x13bc094, "CharacterSelectTag::sFunctions");

	// CharacterSelectWidget
	set_name(0x13ba314, "RTTI_CharacterSelectWidget");
	apply_type(0x13ba314, "RTTICompound");
	del_items(0x13bc264, DELIT_SIMPLE, 8);
	apply_type(0x13bc264, "RTTIBase[1]");
	set_name(0x13bc264, "CharacterSelectWidget::sBases");

	// CharacterSelectWidgetResource
	set_name(0x13ba368, "RTTI_CharacterSelectWidgetResource");
	apply_type(0x13ba368, "RTTICompound");
	del_items(0x13bc26c, DELIT_SIMPLE, 8);
	apply_type(0x13bc26c, "RTTIBase[1]");
	set_name(0x13bc26c, "CharacterSelectWidgetResource::sBases");
	del_items(0x13bc274, DELIT_SIMPLE, 224);
	apply_type(0x13bc274, "RTTIAttr[8]");
	set_name(0x13bc274, "CharacterSelectWidgetResource::sAttrs");

	// CheckboxTag
	set_name(0x133cd64, "RTTI_CheckboxTag");
	apply_type(0x133cd64, "RTTICompound");
	del_items(0x133f35c, DELIT_SIMPLE, 8);
	apply_type(0x133f35c, "RTTIBase[1]");
	set_name(0x133f35c, "CheckboxTag::sBases");
	del_items(0x133f364, DELIT_SIMPLE, 48);
	apply_type(0x133f364, "RTTIFunction[2]");
	set_name(0x133f364, "CheckboxTag::sFunctions");

	// CheckboxWidget
	set_name(0x133d60c, "RTTI_CheckboxWidget");
	apply_type(0x133d60c, "RTTICompound");
	del_items(0x133f7b8, DELIT_SIMPLE, 8);
	apply_type(0x133f7b8, "RTTIBase[1]");
	set_name(0x133f7b8, "CheckboxWidget::sBases");

	// ChildEntityDescription
	set_name(0x135d82c, "RTTI_ChildEntityDescription");
	apply_type(0x135d82c, "RTTICompound");
	del_items(0x135f208, DELIT_SIMPLE, 56);
	apply_type(0x135f208, "RTTIAttr[2]");
	set_name(0x135f208, "ChildEntityDescription::sAttrs");

	// CinematicVehicleDeathAction
	set_name(0x1376d84, "RTTI_CinematicVehicleDeathAction");
	apply_type(0x1376d84, "RTTICompound");
	del_items(0x137835c, DELIT_SIMPLE, 8);
	apply_type(0x137835c, "RTTIBase[1]");
	set_name(0x137835c, "CinematicVehicleDeathAction::sBases");

	// CloseCombatComponent
	set_name(0x1389830, "RTTI_CloseCombatComponent");
	apply_type(0x1389830, "RTTICompound");
	del_items(0x138bc14, DELIT_SIMPLE, 8);
	apply_type(0x138bc14, "RTTIBase[1]");
	set_name(0x138bc14, "CloseCombatComponent::sBases");

	// CloseCombatComponentRep
	set_name(0x138992c, "RTTI_CloseCombatComponentRep");
	apply_type(0x138992c, "RTTICompound");
	del_items(0x138c1b0, DELIT_SIMPLE, 8);
	apply_type(0x138c1b0, "RTTIBase[1]");
	set_name(0x138c1b0, "CloseCombatComponentRep::sBases");

	// CloseCombatComponentResource
	set_name(0x1389b30, "RTTI_CloseCombatComponentResource");
	apply_type(0x1389b30, "RTTICompound");
	del_items(0x138acd4, DELIT_SIMPLE, 8);
	apply_type(0x138acd4, "RTTIBase[1]");
	set_name(0x138acd4, "CloseCombatComponentResource::sBases");
	del_items(0x138acdc, DELIT_SIMPLE, 980);
	apply_type(0x138acdc, "RTTIAttr[35]");
	set_name(0x138acdc, "CloseCombatComponentResource::sAttrs");

	// CloseCombatEffect
	set_name(0x13899b0, "RTTI_CloseCombatEffect");
	apply_type(0x13899b0, "RTTICompound");
	del_items(0x138ab30, DELIT_SIMPLE, 196);
	apply_type(0x138ab30, "RTTIAttr[7]");
	set_name(0x138ab30, "CloseCombatEffect::sAttrs");

	// CloseCombatStrike
	set_name(0x138d4a0, "RTTI_CloseCombatStrike");
	apply_type(0x138d4a0, "RTTICompound");
	del_items(0x138eeb4, DELIT_SIMPLE, 476);
	apply_type(0x138eeb4, "RTTIAttr[17]");
	set_name(0x138eeb4, "CloseCombatStrike::sAttrs");

	// CloseCombatVariation
	set_name(0x138d504, "RTTI_CloseCombatVariation");
	apply_type(0x138d504, "RTTICompound");
	del_items(0x138f090, DELIT_SIMPLE, 56);
	apply_type(0x138f090, "RTTIAttr[2]");
	set_name(0x138f090, "CloseCombatVariation::sAttrs");

	// ClusterGrenade
	set_name(0x13a04b4, "RTTI_ClusterGrenade");
	apply_type(0x13a04b4, "RTTICompound");
	del_items(0x13a164c, DELIT_SIMPLE, 8);
	apply_type(0x13a164c, "RTTIBase[1]");
	set_name(0x13a164c, "ClusterGrenade::sBases");

	// ClusterGrenadeFragmentResource
	set_name(0x13a0528, "RTTI_ClusterGrenadeFragmentResource");
	apply_type(0x13a0528, "RTTICompound");
	del_items(0x13a15a4, DELIT_SIMPLE, 8);
	apply_type(0x13a15a4, "RTTIBase[1]");
	set_name(0x13a15a4, "ClusterGrenadeFragmentResource::sBases");
	del_items(0x13a15ac, DELIT_SIMPLE, 84);
	apply_type(0x13a15ac, "RTTIAttr[3]");
	set_name(0x13a15ac, "ClusterGrenadeFragmentResource::sAttrs");

	// ClusterGrenadeResource
	set_name(0x13a057c, "RTTI_ClusterGrenadeResource");
	apply_type(0x13a057c, "RTTICompound");
	del_items(0x13a160c, DELIT_SIMPLE, 8);
	apply_type(0x13a160c, "RTTIBase[1]");
	set_name(0x13a160c, "ClusterGrenadeResource::sBases");
	del_items(0x13a1614, DELIT_SIMPLE, 56);
	apply_type(0x13a1614, "RTTIAttr[2]");
	set_name(0x13a1614, "ClusterGrenadeResource::sAttrs");

	// CollisionHullToRagdollMapping
	set_name(0x135ed34, "RTTI_CollisionHullToRagdollMapping");
	apply_type(0x135ed34, "RTTICompound");
	del_items(0x13617c4, DELIT_SIMPLE, 56);
	apply_type(0x13617c4, "RTTIAttr[2]");
	set_name(0x13617c4, "CollisionHullToRagdollMapping::sAttrs");

	// CollisionHullToRagdollMappingResource
	set_name(0x135ed98, "RTTI_CollisionHullToRagdollMappingResource");
	apply_type(0x135ed98, "RTTICompound");
	del_items(0x13617fc, DELIT_SIMPLE, 8);
	apply_type(0x13617fc, "RTTIBase[1]");
	set_name(0x13617fc, "CollisionHullToRagdollMappingResource::sBases");
	del_items(0x1361804, DELIT_SIMPLE, 56);
	apply_type(0x1361804, "RTTIAttr[2]");
	set_name(0x1361804, "CollisionHullToRagdollMappingResource::sAttrs");

	// CollisionMeshInstance
	set_name(0x1338e00, "RTTI_CollisionMeshInstance");
	apply_type(0x1338e00, "RTTICompound");
	del_items(0x1338ea8, DELIT_SIMPLE, 8);
	apply_type(0x1338ea8, "RTTIBase[1]");
	set_name(0x1338ea8, "CollisionMeshInstance::sBases");
	del_items(0x1338eb0, DELIT_SIMPLE, 56);
	apply_type(0x1338eb0, "RTTIAttr[2]");
	set_name(0x1338eb0, "CollisionMeshInstance::sAttrs");

	// CollisionTrigger
	set_name(0x1338e54, "RTTI_CollisionTrigger");
	apply_type(0x1338e54, "RTTICompound");
	del_items(0x1338ee8, DELIT_SIMPLE, 8);
	apply_type(0x1338ee8, "RTTIBase[1]");
	set_name(0x1338ee8, "CollisionTrigger::sBases");
	del_items(0x1338ef0, DELIT_SIMPLE, 168);
	apply_type(0x1338ef0, "RTTIAttr[6]");
	set_name(0x1338ef0, "CollisionTrigger::sAttrs");

	// ColorPeg
	set_name(0x135c3cc, "RTTI_ColorPeg");
	apply_type(0x135c3cc, "RTTICompound");
	del_items(0x135c818, DELIT_SIMPLE, 8);
	apply_type(0x135c818, "RTTIBase[1]");
	set_name(0x135c818, "ColorPeg::sBases");
	del_items(0x135c820, DELIT_SIMPLE, 56);
	apply_type(0x135c820, "RTTIAttr[2]");
	set_name(0x135c820, "ColorPeg::sAttrs");

	// ColorizeSettings
	set_name(0x13481a8, "RTTI_ColorizeSettings");
	apply_type(0x13481a8, "RTTICompound");
	del_items(0x1348948, DELIT_SIMPLE, 252);
	apply_type(0x1348948, "RTTIAttr[9]");
	set_name(0x1348948, "ColorizeSettings::sAttrs");

	// ColorizeSettingsResource
	set_name(0x13482c4, "RTTI_ColorizeSettingsResource");
	apply_type(0x13482c4, "RTTICompound");
	del_items(0x1348b5c, DELIT_SIMPLE, 8);
	apply_type(0x1348b5c, "RTTIBase[1]");
	set_name(0x1348b5c, "ColorizeSettingsResource::sBases");
	del_items(0x1348b64, DELIT_SIMPLE, 364);
	apply_type(0x1348b64, "RTTIAttr[13]");
	set_name(0x1348b64, "ColorizeSettingsResource::sAttrs");
	del_items(0x1348cd0, DELIT_SIMPLE, 12);
	apply_type(0x1348cd0, "RTTIMessageHandler[1]");
	set_name(0x1348cd0, "ColorizeSettingsResource::sMessageHandlers");

	// CompareScaleTag
	set_name(0x133d21c, "RTTI_CompareScaleTag");
	apply_type(0x133d21c, "RTTICompound");
	del_items(0x133f5d4, DELIT_SIMPLE, 8);
	apply_type(0x133f5d4, "RTTIBase[1]");
	set_name(0x133f5d4, "CompareScaleTag::sBases");

	// CompareScaleWidget
	set_name(0x133dba0, "RTTI_CompareScaleWidget");
	apply_type(0x133dba0, "RTTICompound");
	del_items(0x133f7c8, DELIT_SIMPLE, 8);
	apply_type(0x133f7c8, "RTTIBase[1]");
	set_name(0x133f7c8, "CompareScaleWidget::sBases");

	// ComponentPerAnimationEvent
	set_name(0x1389580, "RTTI_ComponentPerAnimationEvent");
	apply_type(0x1389580, "RTTICompound");
	del_items(0x138c6b4, DELIT_SIMPLE, 56);
	apply_type(0x138c6b4, "RTTIAttr[2]");
	set_name(0x138c6b4, "ComponentPerAnimationEvent::sAttrs");

	// CompositeAnimationInfo
	set_name(0x1355c94, "RTTI_CompositeAnimationInfo");
	apply_type(0x1355c94, "RTTICompound");
	del_items(0x1357cfc, DELIT_SIMPLE, 224);
	apply_type(0x1357cfc, "RTTIAttr[8]");
	set_name(0x1357cfc, "CompositeAnimationInfo::sAttrs");

	// CompositeSkeletonAnimationResource
	set_name(0x1355ce8, "RTTI_CompositeSkeletonAnimationResource");
	apply_type(0x1355ce8, "RTTICompound");
	del_items(0x1357ddc, DELIT_SIMPLE, 8);
	apply_type(0x1357ddc, "RTTIBase[1]");
	set_name(0x1357ddc, "CompositeSkeletonAnimationResource::sBases");
	del_items(0x1357de4, DELIT_SIMPLE, 84);
	apply_type(0x1357de4, "RTTIAttr[3]");
	set_name(0x1357de4, "CompositeSkeletonAnimationResource::sAttrs");

	// CompoundStatResource
	set_name(0x13ba8e4, "RTTI_CompoundStatResource");
	apply_type(0x13ba8e4, "RTTICompound");
	del_items(0x13bc4f4, DELIT_SIMPLE, 84);
	apply_type(0x13bc4f4, "RTTIAttr[3]");
	set_name(0x13bc4f4, "CompoundStatResource::sAttrs");

	// Compressed16Vector3
	set_name(0x1334c7c, "RTTI_Compressed16Vector3");
	apply_type(0x1334c7c, "RTTICompound");
	del_items(0x1335450, DELIT_SIMPLE, 84);
	apply_type(0x1335450, "RTTIAttr[3]");
	set_name(0x1335450, "Compressed16Vector3::sAttrs");

	// CompressedPathElement
	set_name(0x13372d8, "RTTI_CompressedPathElement");
	apply_type(0x13372d8, "RTTICompound");
	del_items(0x1338744, DELIT_SIMPLE, 112);
	apply_type(0x1338744, "RTTIAttr[4]");
	set_name(0x1338744, "CompressedPathElement::sAttrs");

	// CompressedSHVector4x9
	set_name(0x13452b0, "RTTI_CompressedSHVector4x9");
	apply_type(0x13452b0, "RTTICompound");
	del_items(0x13460f8, DELIT_SIMPLE, 252);
	apply_type(0x13460f8, "RTTIAttr[9]");
	set_name(0x13460f8, "CompressedSHVector4x9::sAttrs");

	// CompressedUnitVector3B
	set_name(0x1356b54, "RTTI_CompressedUnitVector3B");
	apply_type(0x1356b54, "RTTICompound");
	del_items(0x13571e4, DELIT_SIMPLE, 84);
	apply_type(0x13571e4, "RTTIAttr[3]");
	set_name(0x13571e4, "CompressedUnitVector3B::sAttrs");

	// ConcreteAsset
	set_name(0x1338bb8, "RTTI_ConcreteAsset");
	apply_type(0x1338bb8, "RTTICompound");
	del_items(0x1338cd8, DELIT_SIMPLE, 8);
	apply_type(0x1338cd8, "RTTIBase[1]");
	set_name(0x1338cd8, "ConcreteAsset::sBases");
	del_items(0x1338ce0, DELIT_SIMPLE, 112);
	apply_type(0x1338ce0, "RTTIAttr[4]");
	set_name(0x1338ce0, "ConcreteAsset::sAttrs");

	// ConditionalAction
	set_name(0x135dc7c, "RTTI_ConditionalAction");
	apply_type(0x135dc7c, "RTTICompound");
	del_items(0x136100c, DELIT_SIMPLE, 8);
	apply_type(0x136100c, "RTTIBase[1]");
	set_name(0x136100c, "ConditionalAction::sBases");
	del_items(0x1361014, DELIT_SIMPLE, 84);
	apply_type(0x1361014, "RTTIAttr[3]");
	set_name(0x1361014, "ConditionalAction::sAttrs");

	// ContentWidget
	set_name(0x133d660, "RTTI_ContentWidget");
	apply_type(0x133d660, "RTTICompound");
	del_items(0x133f8b0, DELIT_SIMPLE, 8);
	apply_type(0x133f8b0, "RTTIBase[1]");
	set_name(0x133f8b0, "ContentWidget::sBases");

	// ContinuousAmmoEjector
	set_name(0x139ea5c, "RTTI_ContinuousAmmoEjector");
	apply_type(0x139ea5c, "RTTICompound");
	del_items(0x139fbfc, DELIT_SIMPLE, 8);
	apply_type(0x139fbfc, "RTTIBase[1]");
	set_name(0x139fbfc, "ContinuousAmmoEjector::sBases");

	// ContinuousAmmoEjectorRep
	set_name(0x139eab0, "RTTI_ContinuousAmmoEjectorRep");
	apply_type(0x139eab0, "RTTICompound");
	del_items(0x139fc4c, DELIT_SIMPLE, 8);
	apply_type(0x139fc4c, "RTTIBase[1]");
	set_name(0x139fc4c, "ContinuousAmmoEjectorRep::sBases");

	// ContinuousAmmoEjectorResource
	set_name(0x139eb04, "RTTI_ContinuousAmmoEjectorResource");
	apply_type(0x139eb04, "RTTICompound");
	del_items(0x139fc08, DELIT_SIMPLE, 8);
	apply_type(0x139fc08, "RTTIBase[1]");
	set_name(0x139fc08, "ContinuousAmmoEjectorResource::sBases");
	del_items(0x139fc10, DELIT_SIMPLE, 56);
	apply_type(0x139fc10, "RTTIAttr[2]");
	set_name(0x139fc10, "ContinuousAmmoEjectorResource::sAttrs");

	// ControlledEntity
	set_name(0x137a900, "RTTI_ControlledEntity");
	apply_type(0x137a900, "RTTICompound");
	del_items(0x137b0b4, DELIT_SIMPLE, 8);
	apply_type(0x137b0b4, "RTTIBase[1]");
	set_name(0x137b0b4, "ControlledEntity::sBases");
	del_items(0x137b0bc, DELIT_SIMPLE, 140);
	apply_type(0x137b0bc, "RTTIAttr[5]");
	set_name(0x137b0bc, "ControlledEntity::sAttrs");
	del_items(0x137b148, DELIT_SIMPLE, 2640);
	apply_type(0x137b148, "RTTIFunction[110]");
	set_name(0x137b148, "ControlledEntity::sFunctions");
	del_items(0x137bb98, DELIT_SIMPLE, 12);
	apply_type(0x137bb98, "RTTIMessageHandler[1]");
	set_name(0x137bb98, "ControlledEntity::sMessageHandlers");

	// ControlledEntityActorInstance
	set_name(0x139a624, "RTTI_ControlledEntityActorInstance");
	apply_type(0x139a624, "RTTICompound");
	del_items(0x139ba60, DELIT_SIMPLE, 8);
	apply_type(0x139ba60, "RTTIBase[1]");
	set_name(0x139ba60, "ControlledEntityActorInstance::sBases");

	// ControlledEntityActorResource
	set_name(0x139a5d0, "RTTI_ControlledEntityActorResource");
	apply_type(0x139a5d0, "RTTICompound");
	del_items(0x139b9e8, DELIT_SIMPLE, 8);
	apply_type(0x139b9e8, "RTTIBase[1]");
	set_name(0x139b9e8, "ControlledEntityActorResource::sBases");
	del_items(0x139b9f0, DELIT_SIMPLE, 112);
	apply_type(0x139b9f0, "RTTIAttr[4]");
	set_name(0x139b9f0, "ControlledEntityActorResource::sAttrs");

	// ControlledEntityRep
	set_name(0x137a954, "RTTI_ControlledEntityRep");
	apply_type(0x137a954, "RTTICompound");
	del_items(0x137c63c, DELIT_SIMPLE, 8);
	apply_type(0x137c63c, "RTTIBase[1]");
	set_name(0x137c63c, "ControlledEntityRep::sBases");

	// ControlledEntityResource
	set_name(0x137a9a8, "RTTI_ControlledEntityResource");
	apply_type(0x137a9a8, "RTTICompound");
	del_items(0x137ac6c, DELIT_SIMPLE, 8);
	apply_type(0x137ac6c, "RTTIBase[1]");
	set_name(0x137ac6c, "ControlledEntityResource::sBases");
	del_items(0x137ac74, DELIT_SIMPLE, 1064);
	apply_type(0x137ac74, "RTTIAttr[38]");
	set_name(0x137ac74, "ControlledEntityResource::sAttrs");
	del_items(0x137b09c, DELIT_SIMPLE, 24);
	apply_type(0x137b09c, "RTTIMessageHandler[2]");
	set_name(0x137b09c, "ControlledEntityResource::sMessageHandlers");

	// ControlledFollowCameraEntity
	set_name(0x1378df4, "RTTI_ControlledFollowCameraEntity");
	apply_type(0x1378df4, "RTTICompound");
	del_items(0x1379c38, DELIT_SIMPLE, 8);
	apply_type(0x1379c38, "RTTIBase[1]");
	set_name(0x1379c38, "ControlledFollowCameraEntity::sBases");

	// ControlledFollowCameraEntityResource
	set_name(0x1378e48, "RTTI_ControlledFollowCameraEntityResource");
	apply_type(0x1378e48, "RTTICompound");
	del_items(0x1379a1c, DELIT_SIMPLE, 8);
	apply_type(0x1379a1c, "RTTIBase[1]");
	set_name(0x1379a1c, "ControlledFollowCameraEntityResource::sBases");
	del_items(0x1379a24, DELIT_SIMPLE, 532);
	apply_type(0x1379a24, "RTTIAttr[19]");
	set_name(0x1379a24, "ControlledFollowCameraEntityResource::sAttrs");

	// ControlledSoundInstance
	set_name(0x1358c24, "RTTI_ControlledSoundInstance");
	apply_type(0x1358c24, "RTTICompound");
	del_items(0x135b054, DELIT_SIMPLE, 8);
	apply_type(0x135b054, "RTTIBase[1]");
	set_name(0x135b054, "ControlledSoundInstance::sBases");
	del_items(0x135b05c, DELIT_SIMPLE, 12);
	apply_type(0x135b05c, "RTTIMessageHandler[1]");
	set_name(0x135b05c, "ControlledSoundInstance::sMessageHandlers");

	// ControlledSoundResource
	set_name(0x1358b80, "RTTI_ControlledSoundResource");
	apply_type(0x1358b80, "RTTICompound");
	del_items(0x135aff0, DELIT_SIMPLE, 8);
	apply_type(0x135aff0, "RTTIBase[1]");
	set_name(0x135aff0, "ControlledSoundResource::sBases");
	del_items(0x135aff8, DELIT_SIMPLE, 56);
	apply_type(0x135aff8, "RTTIAttr[2]");
	set_name(0x135aff8, "ControlledSoundResource::sAttrs");
	del_items(0x135b030, DELIT_SIMPLE, 36);
	apply_type(0x135b030, "RTTIMessageHandler[3]");
	set_name(0x135b030, "ControlledSoundResource::sMessageHandlers");

	// ControlledVehicle
	set_name(0x1382bbc, "RTTI_ControlledVehicle");
	apply_type(0x1382bbc, "RTTICompound");
	del_items(0x13845f0, DELIT_SIMPLE, 8);
	apply_type(0x13845f0, "RTTIBase[1]");
	set_name(0x13845f0, "ControlledVehicle::sBases");
	del_items(0x13845f8, DELIT_SIMPLE, 96);
	apply_type(0x13845f8, "RTTIFunction[4]");
	set_name(0x13845f8, "ControlledVehicle::sFunctions");

	// ControlledVehicleAIController
	set_name(0x1382c64, "RTTI_ControlledVehicleAIController");
	apply_type(0x1382c64, "RTTICompound");
	del_items(0x1384668, DELIT_SIMPLE, 8);
	apply_type(0x1384668, "RTTIBase[1]");
	set_name(0x1384668, "ControlledVehicleAIController::sBases");

	// ControlledVehicleController
	set_name(0x1382c10, "RTTI_ControlledVehicleController");
	apply_type(0x1382c10, "RTTICompound");
	del_items(0x1384660, DELIT_SIMPLE, 8);
	apply_type(0x1384660, "RTTIBase[1]");
	set_name(0x1384660, "ControlledVehicleController::sBases");

	// ControlledVehicleRep
	set_name(0x1382cb8, "RTTI_ControlledVehicleRep");
	apply_type(0x1382cb8, "RTTICompound");
	del_items(0x1384658, DELIT_SIMPLE, 8);
	apply_type(0x1384658, "RTTIBase[1]");
	set_name(0x1384658, "ControlledVehicleRep::sBases");

	// ControlledVehicleResource
	set_name(0x1382d0c, "RTTI_ControlledVehicleResource");
	apply_type(0x1382d0c, "RTTICompound");
	del_items(0x138382c, DELIT_SIMPLE, 8);
	apply_type(0x138382c, "RTTIBase[1]");
	set_name(0x138382c, "ControlledVehicleResource::sBases");
	del_items(0x1383834, DELIT_SIMPLE, 1064);
	apply_type(0x1383834, "RTTIAttr[38]");
	set_name(0x1383834, "ControlledVehicleResource::sAttrs");
	del_items(0x1383c5c, DELIT_SIMPLE, 12);
	apply_type(0x1383c5c, "RTTIMessageHandler[1]");
	set_name(0x1383c5c, "ControlledVehicleResource::sMessageHandlers");

	// Controller
	set_name(0x137aa2c, "RTTI_Controller");
	apply_type(0x137aa2c, "RTTICompound");
	del_items(0x137ac50, DELIT_SIMPLE, 16);
	apply_type(0x137ac50, "RTTIBase[2]");
	set_name(0x137ac50, "Controller::sBases");

	// ControllerConfigResource
	set_name(0x1368030, "RTTI_ControllerConfigResource");
	apply_type(0x1368030, "RTTICompound");
	del_items(0x136aa18, DELIT_SIMPLE, 8);
	apply_type(0x136aa18, "RTTIBase[1]");
	set_name(0x136aa18, "ControllerConfigResource::sBases");
	del_items(0x136aa20, DELIT_SIMPLE, 252);
	apply_type(0x136aa20, "RTTIAttr[9]");
	set_name(0x136aa20, "ControllerConfigResource::sAttrs");

	// ControllerLegend
	set_name(0x1367fdc, "RTTI_ControllerLegend");
	apply_type(0x1367fdc, "RTTICompound");
	del_items(0x136a9c4, DELIT_SIMPLE, 84);
	apply_type(0x136a9c4, "RTTIAttr[3]");
	set_name(0x136a9c4, "ControllerLegend::sAttrs");

	// ConvexHull
	set_name(0x132af64, "RTTI_ConvexHull");
	apply_type(0x132af64, "RTTICompound");
	del_items(0x132b344, DELIT_SIMPLE, 56);
	apply_type(0x132b344, "RTTIAttr[2]");
	set_name(0x132b344, "ConvexHull::sAttrs");

	// ConvexHullTriangle
	set_name(0x132af10, "RTTI_ConvexHullTriangle");
	apply_type(0x132af10, "RTTICompound");
	del_items(0x132b2d4, DELIT_SIMPLE, 112);
	apply_type(0x132b2d4, "RTTIAttr[4]");
	set_name(0x132b2d4, "ConvexHullTriangle::sAttrs");

	// CoreObject
	set_name(0x1339044, "RTTI_CoreObject");
	apply_type(0x1339044, "RTTICompound");
	del_items(0x13394d0, DELIT_SIMPLE, 8);
	apply_type(0x13394d0, "RTTIBase[1]");
	set_name(0x13394d0, "CoreObject::sBases");
	del_items(0x13394d8, DELIT_SIMPLE, 24);
	apply_type(0x13394d8, "RTTIFunction[1]");
	set_name(0x13394d8, "CoreObject::sFunctions");

	// CoreScript
	set_name(0x134a780, "RTTI_CoreScript");
	apply_type(0x134a780, "RTTICompound");
	del_items(0x134a994, DELIT_SIMPLE, 8);
	apply_type(0x134a994, "RTTIBase[1]");
	set_name(0x134a994, "CoreScript::sBases");
	del_items(0x134a99c, DELIT_SIMPLE, 84);
	apply_type(0x134a99c, "RTTIAttr[3]");
	set_name(0x134a99c, "CoreScript::sAttrs");
	del_items(0x134a9f0, DELIT_SIMPLE, 24);
	apply_type(0x134a9f0, "RTTIMessageHandler[2]");
	set_name(0x134a9f0, "CoreScript::sMessageHandlers");

	// CoronaInstance
	set_name(0x133971c, "RTTI_CoronaInstance");
	apply_type(0x133971c, "RTTICompound");
	del_items(0x133a334, DELIT_SIMPLE, 8);
	apply_type(0x133a334, "RTTIBase[1]");
	set_name(0x133a334, "CoronaInstance::sBases");
	del_items(0x133a33c, DELIT_SIMPLE, 56);
	apply_type(0x133a33c, "RTTIAttr[2]");
	set_name(0x133a33c, "CoronaInstance::sAttrs");
	del_items(0x133a374, DELIT_SIMPLE, 24);
	apply_type(0x133a374, "RTTIMessageHandler[2]");
	set_name(0x133a374, "CoronaInstance::sMessageHandlers");

	// CoronaManager
	set_name(0x13396c8, "RTTI_CoronaManager");
	apply_type(0x13396c8, "RTTICompound");
	del_items(0x133a3e8, DELIT_SIMPLE, 8);
	apply_type(0x133a3e8, "RTTIBase[1]");
	set_name(0x133a3e8, "CoronaManager::sBases");

	// CoronaResource
	set_name(0x1339780, "RTTI_CoronaResource");
	apply_type(0x1339780, "RTTICompound");
	del_items(0x133a048, DELIT_SIMPLE, 8);
	apply_type(0x133a048, "RTTIBase[1]");
	set_name(0x133a048, "CoronaResource::sBases");
	del_items(0x133a050, DELIT_SIMPLE, 728);
	apply_type(0x133a050, "RTTIAttr[26]");
	set_name(0x133a050, "CoronaResource::sAttrs");
	del_items(0x133a328, DELIT_SIMPLE, 12);
	apply_type(0x133a328, "RTTIMessageHandler[1]");
	set_name(0x133a328, "CoronaResource::sMessageHandlers");

	// CoverCompressionDepthTable
	set_name(0x1353674, "RTTI_CoverCompressionDepthTable");
	apply_type(0x1353674, "RTTICompound");
	del_items(0x1355198, DELIT_SIMPLE, 28);
	apply_type(0x1355198, "RTTIAttr[1]");
	set_name(0x1355198, "CoverCompressionDepthTable::sAttrs");

	// CoverConnection
	set_name(0x136d04c, "RTTI_CoverConnection");
	apply_type(0x136d04c, "RTTICompound");
	del_items(0x136fef4, DELIT_SIMPLE, 112);
	apply_type(0x136fef4, "RTTIAttr[4]");
	set_name(0x136fef4, "CoverConnection::sAttrs");

	// CoverGraphResource
	set_name(0x136cfd8, "RTTI_CoverGraphResource");
	apply_type(0x136cfd8, "RTTICompound");
	del_items(0x1370774, DELIT_SIMPLE, 8);
	apply_type(0x1370774, "RTTIBase[1]");
	set_name(0x1370774, "CoverGraphResource::sBases");
	del_items(0x137077c, DELIT_SIMPLE, 420);
	apply_type(0x137077c, "RTTIAttr[15]");
	set_name(0x137077c, "CoverGraphResource::sAttrs");

	// CoverResource
	set_name(0x136d104, "RTTI_CoverResource");
	apply_type(0x136d104, "RTTICompound");
	del_items(0x136ffd4, DELIT_SIMPLE, 8);
	apply_type(0x136ffd4, "RTTIBase[1]");
	set_name(0x136ffd4, "CoverResource::sBases");
	del_items(0x136ffdc, DELIT_SIMPLE, 84);
	apply_type(0x136ffdc, "RTTIAttr[3]");
	set_name(0x136ffdc, "CoverResource::sAttrs");

	// CoverWall
	set_name(0x136d0b0, "RTTI_CoverWall");
	apply_type(0x136d0b0, "RTTICompound");
	del_items(0x136ff64, DELIT_SIMPLE, 112);
	apply_type(0x136ff64, "RTTIAttr[4]");
	set_name(0x136ff64, "CoverWall::sAttrs");

	// CrashAction
	set_name(0x1376dd8, "RTTI_CrashAction");
	apply_type(0x1376dd8, "RTTICompound");
	del_items(0x1378364, DELIT_SIMPLE, 8);
	apply_type(0x1378364, "RTTIBase[1]");
	set_name(0x1378364, "CrashAction::sBases");
	del_items(0x137836c, DELIT_SIMPLE, 56);
	apply_type(0x137836c, "RTTIAttr[2]");
	set_name(0x137836c, "CrashAction::sAttrs");

	// CrashComponent
	set_name(0x138a664, "RTTI_CrashComponent");
	apply_type(0x138a664, "RTTICompound");
	del_items(0x138cd2c, DELIT_SIMPLE, 8);
	apply_type(0x138cd2c, "RTTIBase[1]");
	set_name(0x138cd2c, "CrashComponent::sBases");
	del_items(0x138cd34, DELIT_SIMPLE, 120);
	apply_type(0x138cd34, "RTTIFunction[5]");
	set_name(0x138cd34, "CrashComponent::sFunctions");

	// CrashComponentResource
	set_name(0x138a6b8, "RTTI_CrashComponentResource");
	apply_type(0x138a6b8, "RTTICompound");
	del_items(0x138cdb0, DELIT_SIMPLE, 8);
	apply_type(0x138cdb0, "RTTIBase[1]");
	set_name(0x138cdb0, "CrashComponentResource::sBases");

	// CrashMover
	set_name(0x13a5b00, "RTTI_CrashMover");
	apply_type(0x13a5b00, "RTTICompound");
	del_items(0x13a6298, DELIT_SIMPLE, 8);
	apply_type(0x13a6298, "RTTIBase[1]");
	set_name(0x13a6298, "CrashMover::sBases");

	// CrashMoverResource
	set_name(0x13a5b74, "RTTI_CrashMoverResource");
	apply_type(0x13a5b74, "RTTICompound");
	del_items(0x13a62a0, DELIT_SIMPLE, 8);
	apply_type(0x13a62a0, "RTTIBase[1]");
	set_name(0x13a62a0, "CrashMoverResource::sBases");
	del_items(0x13a62a8, DELIT_SIMPLE, 448);
	apply_type(0x13a62a8, "RTTIAttr[16]");
	set_name(0x13a62a8, "CrashMoverResource::sAttrs");

	// CreateComponentAction
	set_name(0x1376400, "RTTI_CreateComponentAction");
	apply_type(0x1376400, "RTTICompound");
	del_items(0x137769c, DELIT_SIMPLE, 8);
	apply_type(0x137769c, "RTTIBase[1]");
	set_name(0x137769c, "CreateComponentAction::sBases");
	del_items(0x13776a4, DELIT_SIMPLE, 84);
	apply_type(0x13776a4, "RTTIAttr[3]");
	set_name(0x13776a4, "CreateComponentAction::sAttrs");

	// CreateControlledEntityActorInstance
	set_name(0x139a6cc, "RTTI_CreateControlledEntityActorInstance");
	apply_type(0x139a6cc, "RTTICompound");
	del_items(0x139bc1c, DELIT_SIMPLE, 8);
	apply_type(0x139bc1c, "RTTIBase[1]");
	set_name(0x139bc1c, "CreateControlledEntityActorInstance::sBases");

	// CreateControlledEntityActorResource
	set_name(0x139a678, "RTTI_CreateControlledEntityActorResource");
	apply_type(0x139a678, "RTTICompound");
	del_items(0x139bba4, DELIT_SIMPLE, 8);
	apply_type(0x139bba4, "RTTIBase[1]");
	set_name(0x139bba4, "CreateControlledEntityActorResource::sBases");
	del_items(0x139bbac, DELIT_SIMPLE, 112);
	apply_type(0x139bbac, "RTTIAttr[4]");
	set_name(0x139bbac, "CreateControlledEntityActorResource::sAttrs");

	// CreateDangerAreaAction
	set_name(0x1376be0, "RTTI_CreateDangerAreaAction");
	apply_type(0x1376be0, "RTTICompound");
	del_items(0x1378190, DELIT_SIMPLE, 8);
	apply_type(0x1378190, "RTTIBase[1]");
	set_name(0x1378190, "CreateDangerAreaAction::sBases");
	del_items(0x1378198, DELIT_SIMPLE, 140);
	apply_type(0x1378198, "RTTIAttr[5]");
	set_name(0x1378198, "CreateDangerAreaAction::sAttrs");

	// CreateEffectComponentAction
	set_name(0x13764a8, "RTTI_CreateEffectComponentAction");
	apply_type(0x13764a8, "RTTICompound");
	del_items(0x1377738, DELIT_SIMPLE, 8);
	apply_type(0x1377738, "RTTIBase[1]");
	set_name(0x1377738, "CreateEffectComponentAction::sBases");
	del_items(0x1377740, DELIT_SIMPLE, 224);
	apply_type(0x1377740, "RTTIAttr[8]");
	set_name(0x1377740, "CreateEffectComponentAction::sAttrs");

	// CreateElectricityAction
	set_name(0x1376e80, "RTTI_CreateElectricityAction");
	apply_type(0x1376e80, "RTTICompound");
	del_items(0x13783ac, DELIT_SIMPLE, 8);
	apply_type(0x13783ac, "RTTIBase[1]");
	set_name(0x13783ac, "CreateElectricityAction::sBases");
	del_items(0x13783b4, DELIT_SIMPLE, 84);
	apply_type(0x13783b4, "RTTIAttr[3]");
	set_name(0x13783b4, "CreateElectricityAction::sAttrs");

	// CreateEntityAction
	set_name(0x13763ac, "RTTI_CreateEntityAction");
	apply_type(0x13763ac, "RTTICompound");
	del_items(0x1377820, DELIT_SIMPLE, 8);
	apply_type(0x1377820, "RTTIBase[1]");
	set_name(0x1377820, "CreateEntityAction::sBases");
	del_items(0x1377828, DELIT_SIMPLE, 392);
	apply_type(0x1377828, "RTTIAttr[14]");
	set_name(0x1377828, "CreateEntityAction::sAttrs");

	// CreateEntityActorInstance
	set_name(0x139a774, "RTTI_CreateEntityActorInstance");
	apply_type(0x139a774, "RTTICompound");
	del_items(0x139bcf0, DELIT_SIMPLE, 8);
	apply_type(0x139bcf0, "RTTIBase[1]");
	set_name(0x139bcf0, "CreateEntityActorInstance::sBases");

	// CreateEntityActorResource
	set_name(0x139a720, "RTTI_CreateEntityActorResource");
	apply_type(0x139a720, "RTTICompound");
	del_items(0x139bc24, DELIT_SIMPLE, 8);
	apply_type(0x139bc24, "RTTIBase[1]");
	set_name(0x139bc24, "CreateEntityActorResource::sBases");
	del_items(0x139bc2c, DELIT_SIMPLE, 196);
	apply_type(0x139bc2c, "RTTIAttr[7]");
	set_name(0x139bc2c, "CreateEntityActorResource::sAttrs");

	// CreateExplosionAction
	set_name(0x13764fc, "RTTI_CreateExplosionAction");
	apply_type(0x13764fc, "RTTICompound");
	del_items(0x13779b0, DELIT_SIMPLE, 8);
	apply_type(0x13779b0, "RTTIBase[1]");
	set_name(0x13779b0, "CreateExplosionAction::sBases");
	del_items(0x13779b8, DELIT_SIMPLE, 84);
	apply_type(0x13779b8, "RTTIAttr[3]");
	set_name(0x13779b8, "CreateExplosionAction::sAttrs");

	// Critter
	set_name(0x137fc20, "RTTI_Critter");
	apply_type(0x137fc20, "RTTICompound");
	del_items(0x138174c, DELIT_SIMPLE, 8);
	apply_type(0x138174c, "RTTIBase[1]");
	set_name(0x138174c, "Critter::sBases");
	del_items(0x1381754, DELIT_SIMPLE, 48);
	apply_type(0x1381754, "RTTIFunction[2]");
	set_name(0x1381754, "Critter::sFunctions");

	// CritterAiController
	set_name(0x137fc74, "RTTI_CritterAiController");
	apply_type(0x137fc74, "RTTICompound");
	del_items(0x1381784, DELIT_SIMPLE, 8);
	apply_type(0x1381784, "RTTIBase[1]");
	set_name(0x1381784, "CritterAiController::sBases");

	// CritterController
	set_name(0x137fcc8, "RTTI_CritterController");
	apply_type(0x137fcc8, "RTTICompound");
	del_items(0x1381104, DELIT_SIMPLE, 8);
	apply_type(0x1381104, "RTTIBase[1]");
	set_name(0x1381104, "CritterController::sBases");

	// CritterMover
	set_name(0x13a6568, "RTTI_CritterMover");
	apply_type(0x13a6568, "RTTICompound");
	del_items(0x13a709c, DELIT_SIMPLE, 8);
	apply_type(0x13a709c, "RTTIBase[1]");
	set_name(0x13a709c, "CritterMover::sBases");

	// CritterMoverResource
	set_name(0x13a65bc, "RTTI_CritterMoverResource");
	apply_type(0x13a65bc, "RTTICompound");
	del_items(0x13a70a4, DELIT_SIMPLE, 8);
	apply_type(0x13a70a4, "RTTIBase[1]");
	set_name(0x13a70a4, "CritterMoverResource::sBases");

	// CritterRep
	set_name(0x137fd1c, "RTTI_CritterRep");
	apply_type(0x137fd1c, "RTTICompound");
	del_items(0x138178c, DELIT_SIMPLE, 8);
	apply_type(0x138178c, "RTTIBase[1]");
	set_name(0x138178c, "CritterRep::sBases");

	// CritterResource
	set_name(0x137fd70, "RTTI_CritterResource");
	apply_type(0x137fd70, "RTTICompound");
	del_items(0x1381118, DELIT_SIMPLE, 8);
	apply_type(0x1381118, "RTTIBase[1]");
	set_name(0x1381118, "CritterResource::sBases");
	del_items(0x1381120, DELIT_SIMPLE, 1568);
	apply_type(0x1381120, "RTTIAttr[56]");
	set_name(0x1381120, "CritterResource::sAttrs");
	del_items(0x1381740, DELIT_SIMPLE, 12);
	apply_type(0x1381740, "RTTIMessageHandler[1]");
	set_name(0x1381740, "CritterResource::sMessageHandlers");

	// CrosshairWidget
	set_name(0x133d6b4, "RTTI_CrosshairWidget");
	apply_type(0x133d6b4, "RTTICompound");
	del_items(0x133f8a0, DELIT_SIMPLE, 8);
	apply_type(0x133f8a0, "RTTIBase[1]");
	set_name(0x133f8a0, "CrosshairWidget::sBases");

	// CrosshairWidgetResource
	set_name(0x133e058, "RTTI_CrosshairWidgetResource");
	apply_type(0x133e058, "RTTICompound");
	del_items(0x133f8b8, DELIT_SIMPLE, 8);
	apply_type(0x133f8b8, "RTTIBase[1]");
	set_name(0x133f8b8, "CrosshairWidgetResource::sBases");
	del_items(0x133f8c0, DELIT_SIMPLE, 84);
	apply_type(0x133f8c0, "RTTIAttr[3]");
	set_name(0x133f8c0, "CrosshairWidgetResource::sAttrs");

	// CursorWidget
	set_name(0x133d708, "RTTI_CursorWidget");
	apply_type(0x133d708, "RTTICompound");
	del_items(0x133f898, DELIT_SIMPLE, 8);
	apply_type(0x133f898, "RTTIBase[1]");
	set_name(0x133f898, "CursorWidget::sBases");

	// CursorWidgetResource
	set_name(0x133e004, "RTTI_CursorWidgetResource");
	apply_type(0x133e004, "RTTICompound");
	del_items(0x133f914, DELIT_SIMPLE, 8);
	apply_type(0x133f914, "RTTIBase[1]");
	set_name(0x133f914, "CursorWidgetResource::sBases");
	del_items(0x133f91c, DELIT_SIMPLE, 308);
	apply_type(0x133f91c, "RTTIAttr[11]");
	set_name(0x133f91c, "CursorWidgetResource::sAttrs");

	// CurveResource
	set_name(0x135c314, "RTTI_CurveResource");
	apply_type(0x135c314, "RTTICompound");
	del_items(0x135c6dc, DELIT_SIMPLE, 8);
	apply_type(0x135c6dc, "RTTIBase[1]");
	set_name(0x135c6dc, "CurveResource::sBases");
	del_items(0x135c6e4, DELIT_SIMPLE, 168);
	apply_type(0x135c6e4, "RTTIAttr[6]");
	set_name(0x135c6e4, "CurveResource::sAttrs");
	del_items(0x135c78c, DELIT_SIMPLE, 12);
	apply_type(0x135c78c, "RTTIMessageHandler[1]");
	set_name(0x135c78c, "CurveResource::sMessageHandlers");

	// CycleSkeletonAnimationResource
	set_name(0x1355994, "RTTI_CycleSkeletonAnimationResource");
	apply_type(0x1355994, "RTTICompound");
	del_items(0x1357f14, DELIT_SIMPLE, 8);
	apply_type(0x1357f14, "RTTIBase[1]");
	set_name(0x1357f14, "CycleSkeletonAnimationResource::sBases");
	del_items(0x1357f1c, DELIT_SIMPLE, 168);
	apply_type(0x1357f1c, "RTTIAttr[6]");
	set_name(0x1357f1c, "CycleSkeletonAnimationResource::sAttrs");

	// DRange
	set_name(0x132894c, "RTTI_DRange");
	apply_type(0x132894c, "RTTICompound");
	del_items(0x1328d8c, DELIT_SIMPLE, 56);
	apply_type(0x1328d8c, "RTTIAttr[2]");
	set_name(0x1328d8c, "DRange::sAttrs");

	// DamageActorEventInstance
	set_name(0x1394414, "RTTI_DamageActorEventInstance");
	apply_type(0x1394414, "RTTICompound");
	del_items(0x1396244, DELIT_SIMPLE, 8);
	apply_type(0x1396244, "RTTIBase[1]");
	set_name(0x1396244, "DamageActorEventInstance::sBases");

	// DamageActorEventResource
	set_name(0x13943c0, "RTTI_DamageActorEventResource");
	apply_type(0x13943c0, "RTTICompound");
	del_items(0x139615c, DELIT_SIMPLE, 8);
	apply_type(0x139615c, "RTTIBase[1]");
	set_name(0x139615c, "DamageActorEventResource::sBases");
	del_items(0x1396164, DELIT_SIMPLE, 224);
	apply_type(0x1396164, "RTTIAttr[8]");
	set_name(0x1396164, "DamageActorEventResource::sAttrs");

	// DamageArea
	set_name(0x13770cc, "RTTI_DamageArea");
	apply_type(0x13770cc, "RTTICompound");
	del_items(0x13787bc, DELIT_SIMPLE, 8);
	apply_type(0x13787bc, "RTTIBase[1]");
	set_name(0x13787bc, "DamageArea::sBases");
	del_items(0x13787c4, DELIT_SIMPLE, 280);
	apply_type(0x13787c4, "RTTIAttr[10]");
	set_name(0x13787c4, "DamageArea::sAttrs");
	del_items(0x13788dc, DELIT_SIMPLE, 12);
	apply_type(0x13788dc, "RTTIMessageHandler[1]");
	set_name(0x13788dc, "DamageArea::sMessageHandlers");

	// DamageAreaRep
	set_name(0x1377120, "RTTI_DamageAreaRep");
	apply_type(0x1377120, "RTTICompound");
	del_items(0x13788e8, DELIT_SIMPLE, 8);
	apply_type(0x13788e8, "RTTIBase[1]");
	set_name(0x13788e8, "DamageAreaRep::sBases");

	// DamageAreaResource
	set_name(0x1377184, "RTTI_DamageAreaResource");
	apply_type(0x1377184, "RTTICompound");
	del_items(0x1378568, DELIT_SIMPLE, 8);
	apply_type(0x1378568, "RTTIBase[1]");
	set_name(0x1378568, "DamageAreaResource::sBases");
	del_items(0x1378570, DELIT_SIMPLE, 588);
	apply_type(0x1378570, "RTTIAttr[21]");
	set_name(0x1378570, "DamageAreaResource::sAttrs");

	// DamageChildAction
	set_name(0x13766a0, "RTTI_DamageChildAction");
	apply_type(0x13766a0, "RTTICompound");
	del_items(0x1377b60, DELIT_SIMPLE, 8);
	apply_type(0x1377b60, "RTTIBase[1]");
	set_name(0x1377b60, "DamageChildAction::sBases");
	del_items(0x1377b68, DELIT_SIMPLE, 168);
	apply_type(0x1377b68, "RTTIAttr[6]");
	set_name(0x1377b68, "DamageChildAction::sAttrs");

	// DamageComponent
	set_name(0x1389e34, "RTTI_DamageComponent");
	apply_type(0x1389e34, "RTTICompound");
	del_items(0x138ca50, DELIT_SIMPLE, 8);
	apply_type(0x138ca50, "RTTIBase[1]");
	set_name(0x138ca50, "DamageComponent::sBases");

	// DamageComponentResource
	set_name(0x1389e88, "RTTI_DamageComponentResource");
	apply_type(0x1389e88, "RTTICompound");
	del_items(0x138c9d4, DELIT_SIMPLE, 8);
	apply_type(0x138c9d4, "RTTIBase[1]");
	set_name(0x138c9d4, "DamageComponentResource::sBases");
	del_items(0x138c9dc, DELIT_SIMPLE, 112);
	apply_type(0x138c9dc, "RTTIAttr[4]");
	set_name(0x138c9dc, "DamageComponentResource::sAttrs");

	// DamageModelResource
	set_name(0x13772b0, "RTTI_DamageModelResource");
	apply_type(0x13772b0, "RTTICompound");
	del_items(0x137897c, DELIT_SIMPLE, 8);
	apply_type(0x137897c, "RTTIBase[1]");
	set_name(0x137897c, "DamageModelResource::sBases");
	del_items(0x1378984, DELIT_SIMPLE, 56);
	apply_type(0x1378984, "RTTIAttr[2]");
	set_name(0x1378984, "DamageModelResource::sAttrs");
	del_items(0x13789bc, DELIT_SIMPLE, 12);
	apply_type(0x13789bc, "RTTIMessageHandler[1]");
	set_name(0x13789bc, "DamageModelResource::sMessageHandlers");

	// DamageModifierPerDamageType
	set_name(0x13771e8, "RTTI_DamageModifierPerDamageType");
	apply_type(0x13771e8, "RTTICompound");
	del_items(0x13788f0, DELIT_SIMPLE, 84);
	apply_type(0x13788f0, "RTTIAttr[3]");
	set_name(0x13788f0, "DamageModifierPerDamageType::sAttrs");

	// DamageModifierResource
	set_name(0x137724c, "RTTI_DamageModifierResource");
	apply_type(0x137724c, "RTTICompound");
	del_items(0x1378944, DELIT_SIMPLE, 56);
	apply_type(0x1378944, "RTTIAttr[2]");
	set_name(0x1378944, "DamageModifierResource::sAttrs");

	// DamageParentAction
	set_name(0x13766f4, "RTTI_DamageParentAction");
	apply_type(0x13766f4, "RTTICompound");
	del_items(0x1377c10, DELIT_SIMPLE, 8);
	apply_type(0x1377c10, "RTTIBase[1]");
	set_name(0x1377c10, "DamageParentAction::sBases");
	del_items(0x1377c18, DELIT_SIMPLE, 168);
	apply_type(0x1377c18, "RTTIAttr[6]");
	set_name(0x1377c18, "DamageParentAction::sAttrs");

	// DamagePassOnData
	set_name(0x135de70, "RTTI_DamagePassOnData");
	apply_type(0x135de70, "RTTICompound");
	del_items(0x1360a5c, DELIT_SIMPLE, 56);
	apply_type(0x1360a5c, "RTTIAttr[2]");
	set_name(0x1360a5c, "DamagePassOnData::sAttrs");

	// DamageTypeGroup
	set_name(0x138599c, "RTTI_DamageTypeGroup");
	apply_type(0x138599c, "RTTICompound");
	del_items(0x1385e60, DELIT_SIMPLE, 8);
	apply_type(0x1385e60, "RTTIBase[1]");
	set_name(0x1385e60, "DamageTypeGroup::sBases");
	del_items(0x1385e68, DELIT_SIMPLE, 28);
	apply_type(0x1385e68, "RTTIAttr[1]");
	set_name(0x1385e68, "DamageTypeGroup::sAttrs");

	// DamageTypeResource
	set_name(0x135d374, "RTTI_DamageTypeResource");
	apply_type(0x135d374, "RTTICompound");
	del_items(0x135f700, DELIT_SIMPLE, 8);
	apply_type(0x135f700, "RTTIBase[1]");
	set_name(0x135f700, "DamageTypeResource::sBases");
	del_items(0x135f708, DELIT_SIMPLE, 56);
	apply_type(0x135f708, "RTTIAttr[2]");
	set_name(0x135f708, "DamageTypeResource::sAttrs");

	// DamageTypeResourceSettings
	set_name(0x135d3c8, "RTTI_DamageTypeResourceSettings");
	apply_type(0x135d3c8, "RTTICompound");
	del_items(0x135f740, DELIT_SIMPLE, 8);
	apply_type(0x135f740, "RTTIBase[1]");
	set_name(0x135f740, "DamageTypeResourceSettings::sBases");
	del_items(0x135f748, DELIT_SIMPLE, 84);
	apply_type(0x135f748, "RTTIAttr[3]");
	set_name(0x135f748, "DamageTypeResourceSettings::sAttrs");

	// DamageTypeResourceSettingsGame
	set_name(0x136c590, "RTTI_DamageTypeResourceSettingsGame");
	apply_type(0x136c590, "RTTICompound");
	del_items(0x136f578, DELIT_SIMPLE, 8);
	apply_type(0x136f578, "RTTIBase[1]");
	set_name(0x136f578, "DamageTypeResourceSettingsGame::sBases");
	del_items(0x136f580, DELIT_SIMPLE, 84);
	apply_type(0x136f580, "RTTIAttr[3]");
	set_name(0x136f580, "DamageTypeResourceSettingsGame::sAttrs");

	// DamagerIDAction
	set_name(0x13760fc, "RTTI_DamagerIDAction");
	apply_type(0x13760fc, "RTTICompound");
	del_items(0x13774b8, DELIT_SIMPLE, 8);
	apply_type(0x13774b8, "RTTIBase[1]");
	set_name(0x13774b8, "DamagerIDAction::sBases");
	del_items(0x13774c0, DELIT_SIMPLE, 56);
	apply_type(0x13774c0, "RTTIAttr[2]");
	set_name(0x13774c0, "DamagerIDAction::sAttrs");

	// DataNode
	set_name(0x133ca0c, "RTTI_DataNode");
	apply_type(0x133ca0c, "RTTICompound");
	del_items(0x133f2c4, DELIT_SIMPLE, 8);
	apply_type(0x133f2c4, "RTTIBase[1]");
	set_name(0x133f2c4, "DataNode::sBases");

	// DataTag
	set_name(0x133ca60, "RTTI_DataTag");
	apply_type(0x133ca60, "RTTICompound");
	del_items(0x133f2cc, DELIT_SIMPLE, 8);
	apply_type(0x133f2cc, "RTTIBase[1]");
	set_name(0x133f2cc, "DataTag::sBases");
	del_items(0x133f2d4, DELIT_SIMPLE, 48);
	apply_type(0x133f2d4, "RTTIFunction[2]");
	set_name(0x133f2d4, "DataTag::sFunctions");

	// DeathCameraEntity
	set_name(0x1378f44, "RTTI_DeathCameraEntity");
	apply_type(0x1378f44, "RTTICompound");
	del_items(0x1379d60, DELIT_SIMPLE, 8);
	apply_type(0x1379d60, "RTTIBase[1]");
	set_name(0x1379d60, "DeathCameraEntity::sBases");

	// DeathCameraEntityRep
	set_name(0x1378f98, "RTTI_DeathCameraEntityRep");
	apply_type(0x1378f98, "RTTICompound");
	del_items(0x1379d68, DELIT_SIMPLE, 8);
	apply_type(0x1379d68, "RTTIBase[1]");
	set_name(0x1379d68, "DeathCameraEntityRep::sBases");

	// DeathCameraEntityResource
	set_name(0x1378fec, "RTTI_DeathCameraEntityResource");
	apply_type(0x1378fec, "RTTICompound");
	del_items(0x1379d04, DELIT_SIMPLE, 8);
	apply_type(0x1379d04, "RTTIBase[1]");
	set_name(0x1379d04, "DeathCameraEntityResource::sBases");
	del_items(0x1379d0c, DELIT_SIMPLE, 84);
	apply_type(0x1379d0c, "RTTIAttr[3]");
	set_name(0x1379d0c, "DeathCameraEntityResource::sAttrs");

	// DecalManager
	set_name(0x1339838, "RTTI_DecalManager");
	apply_type(0x1339838, "RTTICompound");
	del_items(0x133a650, DELIT_SIMPLE, 8);
	apply_type(0x133a650, "RTTIBase[1]");
	set_name(0x133a650, "DecalManager::sBases");

	// DecalResource
	set_name(0x13398bc, "RTTI_DecalResource");
	apply_type(0x13398bc, "RTTICompound");
	del_items(0x133a3f0, DELIT_SIMPLE, 8);
	apply_type(0x133a3f0, "RTTIBase[1]");
	set_name(0x133a3f0, "DecalResource::sBases");
	del_items(0x133a3f8, DELIT_SIMPLE, 588);
	apply_type(0x133a3f8, "RTTIAttr[21]");
	set_name(0x133a3f8, "DecalResource::sAttrs");
	del_items(0x133a644, DELIT_SIMPLE, 12);
	apply_type(0x133a644, "RTTIMessageHandler[1]");
	set_name(0x133a644, "DecalResource::sMessageHandlers");

	// DelayedAction
	set_name(0x135e42c, "RTTI_DelayedAction");
	apply_type(0x135e42c, "RTTICompound");
	del_items(0x1361410, DELIT_SIMPLE, 8);
	apply_type(0x1361410, "RTTIBase[1]");
	set_name(0x1361410, "DelayedAction::sBases");
	del_items(0x1361418, DELIT_SIMPLE, 112);
	apply_type(0x1361418, "RTTIAttr[4]");
	set_name(0x1361418, "DelayedAction::sAttrs");

	// DelayedScriptMessage
	set_name(0x134a898, "RTTI_DelayedScriptMessage");
	apply_type(0x134a898, "RTTICompound");
	del_items(0x134ac24, DELIT_SIMPLE, 8);
	apply_type(0x134ac24, "RTTIBase[1]");
	set_name(0x134ac24, "DelayedScriptMessage::sBases");

	// DependentConcreteAsset
	set_name(0x1338c60, "RTTI_DependentConcreteAsset");
	apply_type(0x1338c60, "RTTICompound");
	del_items(0x1338d7c, DELIT_SIMPLE, 8);
	apply_type(0x1338d7c, "RTTIBase[1]");
	set_name(0x1338d7c, "DependentConcreteAsset::sBases");
	del_items(0x1338d84, DELIT_SIMPLE, 56);
	apply_type(0x1338d84, "RTTIAttr[2]");
	set_name(0x1338d84, "DependentConcreteAsset::sAttrs");

	// DepthOfFieldSettings
	set_name(0x1347f9c, "RTTI_DepthOfFieldSettings");
	apply_type(0x1347f9c, "RTTICompound");
	del_items(0x1348ec4, DELIT_SIMPLE, 224);
	apply_type(0x1348ec4, "RTTIAttr[8]");
	set_name(0x1348ec4, "DepthOfFieldSettings::sAttrs");

	// DepthOfFieldSettingsResource
	set_name(0x1348000, "RTTI_DepthOfFieldSettingsResource");
	apply_type(0x1348000, "RTTICompound");
	del_items(0x1348fa4, DELIT_SIMPLE, 8);
	apply_type(0x1348fa4, "RTTIBase[1]");
	set_name(0x1348fa4, "DepthOfFieldSettingsResource::sBases");
	del_items(0x1348fac, DELIT_SIMPLE, 56);
	apply_type(0x1348fac, "RTTIAttr[2]");
	set_name(0x1348fac, "DepthOfFieldSettingsResource::sAttrs");

	// DerivedStatResource
	set_name(0x13ba938, "RTTI_DerivedStatResource");
	apply_type(0x13ba938, "RTTICompound");
	del_items(0x13bc548, DELIT_SIMPLE, 8);
	apply_type(0x13bc548, "RTTIBase[1]");
	set_name(0x13bc548, "DerivedStatResource::sBases");
	del_items(0x13bc550, DELIT_SIMPLE, 56);
	apply_type(0x13bc550, "RTTIAttr[2]");
	set_name(0x13bc550, "DerivedStatResource::sAttrs");
	del_items(0x13bc588, DELIT_SIMPLE, 12);
	apply_type(0x13bc588, "RTTIMessageHandler[1]");
	set_name(0x13bc588, "DerivedStatResource::sMessageHandlers");

	// DestroyComponentAction
	set_name(0x1376454, "RTTI_DestroyComponentAction");
	apply_type(0x1376454, "RTTICompound");
	del_items(0x13776f8, DELIT_SIMPLE, 8);
	apply_type(0x13776f8, "RTTIBase[1]");
	set_name(0x13776f8, "DestroyComponentAction::sBases");
	del_items(0x1377700, DELIT_SIMPLE, 56);
	apply_type(0x1377700, "RTTIAttr[2]");
	set_name(0x1377700, "DestroyComponentAction::sAttrs");

	// Destructibility
	set_name(0x135dce0, "RTTI_Destructibility");
	apply_type(0x135dce0, "RTTICompound");
	del_items(0x1360068, DELIT_SIMPLE, 16);
	apply_type(0x1360068, "RTTIBase[2]");
	set_name(0x1360068, "Destructibility::sBases");

	// DestructibilityConstraint
	set_name(0x135df38, "RTTI_DestructibilityConstraint");
	apply_type(0x135df38, "RTTICompound");
	del_items(0x1360a94, DELIT_SIMPLE, 168);
	apply_type(0x1360a94, "RTTIAttr[6]");
	set_name(0x1360a94, "DestructibilityConstraint::sAttrs");

	// DestructibilityConstraintState
	set_name(0x135e12c, "RTTI_DestructibilityConstraintState");
	apply_type(0x135e12c, "RTTICompound");
	del_items(0x13606e4, DELIT_SIMPLE, 8);
	apply_type(0x13606e4, "RTTIBase[1]");
	set_name(0x13606e4, "DestructibilityConstraintState::sBases");
	del_items(0x13606ec, DELIT_SIMPLE, 56);
	apply_type(0x13606ec, "RTTIAttr[2]");
	set_name(0x13606ec, "DestructibilityConstraintState::sAttrs");

	// DestructibilityHitReaction
	set_name(0x135dd44, "RTTI_DestructibilityHitReaction");
	apply_type(0x135dd44, "RTTICompound");
	del_items(0x1361068, DELIT_SIMPLE, 112);
	apply_type(0x1361068, "RTTIAttr[4]");
	set_name(0x1361068, "DestructibilityHitReaction::sAttrs");

	// DestructibilityPart
	set_name(0x135ded4, "RTTI_DestructibilityPart");
	apply_type(0x135ded4, "RTTICompound");
	del_items(0x136090c, DELIT_SIMPLE, 336);
	apply_type(0x136090c, "RTTIAttr[12]");
	set_name(0x136090c, "DestructibilityPart::sAttrs");

	// DestructibilityPartState
	set_name(0x135e0b8, "RTTI_DestructibilityPartState");
	apply_type(0x135e0b8, "RTTICompound");
	del_items(0x136066c, DELIT_SIMPLE, 8);
	apply_type(0x136066c, "RTTIBase[1]");
	set_name(0x136066c, "DestructibilityPartState::sBases");
	del_items(0x1360674, DELIT_SIMPLE, 112);
	apply_type(0x1360674, "RTTIAttr[4]");
	set_name(0x1360674, "DestructibilityPartState::sAttrs");

	// DestructibilityPartStateResource
	set_name(0x135ddb8, "RTTI_DestructibilityPartStateResource");
	apply_type(0x135ddb8, "RTTICompound");
	del_items(0x13610d8, DELIT_SIMPLE, 8);
	apply_type(0x13610d8, "RTTIBase[1]");
	set_name(0x13610d8, "DestructibilityPartStateResource::sBases");
	del_items(0x13610e0, DELIT_SIMPLE, 616);
	apply_type(0x13610e0, "RTTIAttr[22]");
	set_name(0x13610e0, "DestructibilityPartStateResource::sAttrs");

	// DestructibilityRep
	set_name(0x135de0c, "RTTI_DestructibilityRep");
	apply_type(0x135de0c, "RTTICompound");

	// DestructibilityResource
	set_name(0x135dff0, "RTTI_DestructibilityResource");
	apply_type(0x135dff0, "RTTICompound");
	del_items(0x1360b74, DELIT_SIMPLE, 8);
	apply_type(0x1360b74, "RTTIBase[1]");
	set_name(0x1360b74, "DestructibilityResource::sBases");
	del_items(0x1360b7c, DELIT_SIMPLE, 1036);
	apply_type(0x1360b7c, "RTTIAttr[37]");
	set_name(0x1360b7c, "DestructibilityResource::sAttrs");

	// DestructibilityState
	set_name(0x135e1a0, "RTTI_DestructibilityState");
	apply_type(0x135e1a0, "RTTICompound");
	del_items(0x1360724, DELIT_SIMPLE, 8);
	apply_type(0x1360724, "RTTIBase[1]");
	set_name(0x1360724, "DestructibilityState::sBases");
	del_items(0x136072c, DELIT_SIMPLE, 140);
	apply_type(0x136072c, "RTTIAttr[5]");
	set_name(0x136072c, "DestructibilityState::sAttrs");

	// DestructibilityTimeLineKey
	set_name(0x135e204, "RTTI_DestructibilityTimeLineKey");
	apply_type(0x135e204, "RTTICompound");
	del_items(0x136151c, DELIT_SIMPLE, 84);
	apply_type(0x136151c, "RTTIAttr[3]");
	set_name(0x136151c, "DestructibilityTimeLineKey::sAttrs");

	// DestructibilityTimeLineResource
	set_name(0x135e258, "RTTI_DestructibilityTimeLineResource");
	apply_type(0x135e258, "RTTICompound");
	del_items(0x1361570, DELIT_SIMPLE, 8);
	apply_type(0x1361570, "RTTIBase[1]");
	set_name(0x1361570, "DestructibilityTimeLineResource::sBases");
	del_items(0x1361578, DELIT_SIMPLE, 56);
	apply_type(0x1361578, "RTTIAttr[2]");
	set_name(0x1361578, "DestructibilityTimeLineResource::sAttrs");

	// DestructiblePartToHitLocationMapping
	set_name(0x1385db8, "RTTI_DestructiblePartToHitLocationMapping");
	apply_type(0x1385db8, "RTTICompound");
	del_items(0x13862cc, DELIT_SIMPLE, 56);
	apply_type(0x13862cc, "RTTIAttr[2]");
	set_name(0x13862cc, "DestructiblePartToHitLocationMapping::sAttrs");

	// DestructionLogicAction
	set_name(0x135e2dc, "RTTI_DestructionLogicAction");
	apply_type(0x135e2dc, "RTTICompound");
	del_items(0x1360ffc, DELIT_SIMPLE, 8);
	apply_type(0x1360ffc, "RTTIBase[1]");
	set_name(0x1360ffc, "DestructionLogicAction::sBases");

	// DestructionLogicLeafAction
	set_name(0x135e4d4, "RTTI_DestructionLogicLeafAction");
	apply_type(0x135e4d4, "RTTICompound");
	del_items(0x1361348, DELIT_SIMPLE, 8);
	apply_type(0x1361348, "RTTIBase[1]");
	set_name(0x1361348, "DestructionLogicLeafAction::sBases");

	// DestructionLogicNodeAction
	set_name(0x135e528, "RTTI_DestructionLogicNodeAction");
	apply_type(0x135e528, "RTTICompound");
	del_items(0x1361004, DELIT_SIMPLE, 8);
	apply_type(0x1361004, "RTTIBase[1]");
	set_name(0x1361004, "DestructionLogicNodeAction::sBases");

	// DialogOptionTag
	set_name(0x133ce60, "RTTI_DialogOptionTag");
	apply_type(0x133ce60, "RTTICompound");
	del_items(0x133f280, DELIT_SIMPLE, 8);
	apply_type(0x133f280, "RTTIBase[1]");
	set_name(0x133f280, "DialogOptionTag::sBases");

	// DialogTag
	set_name(0x133ce0c, "RTTI_DialogTag");
	apply_type(0x133ce0c, "RTTICompound");
	del_items(0x133f278, DELIT_SIMPLE, 8);
	apply_type(0x133f278, "RTTIBase[1]");
	set_name(0x133f278, "DialogTag::sBases");

	// DialogWidget
	set_name(0x133d75c, "RTTI_DialogWidget");
	apply_type(0x133d75c, "RTTICompound");
	del_items(0x133f8a8, DELIT_SIMPLE, 8);
	apply_type(0x133f8a8, "RTTIBase[1]");
	set_name(0x133f8a8, "DialogWidget::sBases");

	// DialogWidgetResource
	set_name(0x133e174, "RTTI_DialogWidgetResource");
	apply_type(0x133e174, "RTTICompound");
	del_items(0x133fa50, DELIT_SIMPLE, 8);
	apply_type(0x133fa50, "RTTIBase[1]");
	set_name(0x133fa50, "DialogWidgetResource::sBases");
	del_items(0x133fa58, DELIT_SIMPLE, 112);
	apply_type(0x133fa58, "RTTIAttr[4]");
	set_name(0x133fa58, "DialogWidgetResource::sAttrs");

	// DifferenceAnimationInfo
	set_name(0x1355bcc, "RTTI_DifferenceAnimationInfo");
	apply_type(0x1355bcc, "RTTICompound");
	del_items(0x1357b3c, DELIT_SIMPLE, 56);
	apply_type(0x1357b3c, "RTTIAttr[2]");
	set_name(0x1357b3c, "DifferenceAnimationInfo::sAttrs");

	// DifferenceAnimationResource
	set_name(0x1355898, "RTTI_DifferenceAnimationResource");
	apply_type(0x1355898, "RTTICompound");
	del_items(0x1357b74, DELIT_SIMPLE, 8);
	apply_type(0x1357b74, "RTTIBase[1]");
	set_name(0x1357b74, "DifferenceAnimationResource::sBases");
	del_items(0x1357b7c, DELIT_SIMPLE, 112);
	apply_type(0x1357b7c, "RTTIAttr[4]");
	set_name(0x1357b7c, "DifferenceAnimationResource::sAttrs");

	// DifficultyFloatResource
	set_name(0x1367c9c, "RTTI_DifficultyFloatResource");
	apply_type(0x1367c9c, "RTTICompound");
	del_items(0x136a454, DELIT_SIMPLE, 8);
	apply_type(0x136a454, "RTTIBase[1]");
	set_name(0x136a454, "DifficultyFloatResource::sBases");
	del_items(0x136a45c, DELIT_SIMPLE, 28);
	apply_type(0x136a45c, "RTTIAttr[1]");
	set_name(0x136a45c, "DifficultyFloatResource::sAttrs");

	// DifficultyIntResource
	set_name(0x1367d64, "RTTI_DifficultyIntResource");
	apply_type(0x1367d64, "RTTICompound");
	del_items(0x136a478, DELIT_SIMPLE, 8);
	apply_type(0x136a478, "RTTIBase[1]");
	set_name(0x136a478, "DifficultyIntResource::sBases");
	del_items(0x136a480, DELIT_SIMPLE, 28);
	apply_type(0x136a480, "RTTIAttr[1]");
	set_name(0x136a480, "DifficultyIntResource::sAttrs");

	// DifficultyManager
	set_name(0x13a6958, "RTTI_DifficultyManager");
	apply_type(0x13a6958, "RTTICompound");
	del_items(0x13a7438, DELIT_SIMPLE, 8);
	apply_type(0x13a7438, "RTTIBase[1]");
	set_name(0x13a7438, "DifficultyManager::sBases");

	// DifficultyManagerResource
	set_name(0x13a6b3c, "RTTI_DifficultyManagerResource");
	apply_type(0x13a6b3c, "RTTICompound");
	del_items(0x13a772c, DELIT_SIMPLE, 8);
	apply_type(0x13a772c, "RTTIBase[1]");
	set_name(0x13a772c, "DifficultyManagerResource::sBases");
	del_items(0x13a7734, DELIT_SIMPLE, 308);
	apply_type(0x13a7734, "RTTIAttr[11]");
	set_name(0x13a7734, "DifficultyManagerResource::sAttrs");

	// DifficultyRangeResource
	set_name(0x1367d10, "RTTI_DifficultyRangeResource");
	apply_type(0x1367d10, "RTTICompound");
	del_items(0x136a3c0, DELIT_SIMPLE, 8);
	apply_type(0x136a3c0, "RTTIBase[1]");
	set_name(0x136a3c0, "DifficultyRangeResource::sBases");
	del_items(0x136a3c8, DELIT_SIMPLE, 140);
	apply_type(0x136a3c8, "RTTIAttr[5]");
	set_name(0x136a3c8, "DifficultyRangeResource::sAttrs");

	// DirectionElasticControlledFollowCameraEntity
	set_name(0x1378e9c, "RTTI_DirectionElasticControlledFollowCameraEntity");
	apply_type(0x1378e9c, "RTTICompound");
	del_items(0x1379cfc, DELIT_SIMPLE, 8);
	apply_type(0x1379cfc, "RTTIBase[1]");
	set_name(0x1379cfc, "DirectionElasticControlledFollowCameraEntity::sBases");

	// DirectionElasticControlledFollowCameraEntityResource
	set_name(0x1378ef0, "RTTI_DirectionElasticControlledFollowCameraEntityResource");
	apply_type(0x1378ef0, "RTTICompound");
	del_items(0x1379c4c, DELIT_SIMPLE, 8);
	apply_type(0x1379c4c, "RTTIBase[1]");
	set_name(0x1379c4c, "DirectionElasticControlledFollowCameraEntityResource::sBases");
	del_items(0x1379c54, DELIT_SIMPLE, 168);
	apply_type(0x1379c54, "RTTIAttr[6]");
	set_name(0x1379c54, "DirectionElasticControlledFollowCameraEntityResource::sAttrs");

	// DirectionalAnimationInfo
	set_name(0x1355c30, "RTTI_DirectionalAnimationInfo");
	apply_type(0x1355c30, "RTTICompound");
	del_items(0x1357bec, DELIT_SIMPLE, 112);
	apply_type(0x1357bec, "RTTIAttr[4]");
	set_name(0x1357bec, "DirectionalAnimationInfo::sAttrs");

	// DirectionalAnimationResource
	set_name(0x13558ec, "RTTI_DirectionalAnimationResource");
	apply_type(0x13558ec, "RTTICompound");
	del_items(0x1357c5c, DELIT_SIMPLE, 8);
	apply_type(0x1357c5c, "RTTIBase[1]");
	set_name(0x1357c5c, "DirectionalAnimationResource::sBases");
	del_items(0x1357c64, DELIT_SIMPLE, 140);
	apply_type(0x1357c64, "RTTIAttr[5]");
	set_name(0x1357c64, "DirectionalAnimationResource::sAttrs");
	del_items(0x1357cf0, DELIT_SIMPLE, 12);
	apply_type(0x1357cf0, "RTTIMessageHandler[1]");
	set_name(0x1357cf0, "DirectionalAnimationResource::sMessageHandlers");

	// DisableConstraintsAction
	set_name(0x1376844, "RTTI_DisableConstraintsAction");
	apply_type(0x1376844, "RTTICompound");
	del_items(0x1377e28, DELIT_SIMPLE, 8);
	apply_type(0x1377e28, "RTTIBase[1]");
	set_name(0x1377e28, "DisableConstraintsAction::sBases");
	del_items(0x1377e30, DELIT_SIMPLE, 56);
	apply_type(0x1377e30, "RTTIAttr[2]");
	set_name(0x1377e30, "DisableConstraintsAction::sAttrs");

	// DisableLightAction
	set_name(0x1376c34, "RTTI_DisableLightAction");
	apply_type(0x1376c34, "RTTICompound");
	del_items(0x1378224, DELIT_SIMPLE, 8);
	apply_type(0x1378224, "RTTIBase[1]");
	set_name(0x1378224, "DisableLightAction::sBases");
	del_items(0x137822c, DELIT_SIMPLE, 56);
	apply_type(0x137822c, "RTTIAttr[2]");
	set_name(0x137822c, "DisableLightAction::sAttrs");

	// DisabledBrutalMeleeAnimation
	set_name(0x1389a78, "RTTI_DisabledBrutalMeleeAnimation");
	apply_type(0x1389a78, "RTTICompound");
	del_items(0x138ac48, DELIT_SIMPLE, 84);
	apply_type(0x138ac48, "RTTIAttr[3]");
	set_name(0x138ac48, "DisabledBrutalMeleeAnimation::sAttrs");

	// DiscreteAmmoEjector
	set_name(0x139eb58, "RTTI_DiscreteAmmoEjector");
	apply_type(0x139eb58, "RTTICompound");
	del_items(0x139f668, DELIT_SIMPLE, 8);
	apply_type(0x139f668, "RTTIBase[1]");
	set_name(0x139f668, "DiscreteAmmoEjector::sBases");
	del_items(0x139f670, DELIT_SIMPLE, 56);
	apply_type(0x139f670, "RTTIAttr[2]");
	set_name(0x139f670, "DiscreteAmmoEjector::sAttrs");

	// DiscreteAmmoEjectorRep
	set_name(0x139ebac, "RTTI_DiscreteAmmoEjectorRep");
	apply_type(0x139ebac, "RTTICompound");
	del_items(0x139fc54, DELIT_SIMPLE, 8);
	apply_type(0x139fc54, "RTTIBase[1]");
	set_name(0x139fc54, "DiscreteAmmoEjectorRep::sBases");

	// DiscreteAmmoEjectorResource
	set_name(0x139ec00, "RTTI_DiscreteAmmoEjectorResource");
	apply_type(0x139ec00, "RTTICompound");
	del_items(0x139f0bc, DELIT_SIMPLE, 8);
	apply_type(0x139f0bc, "RTTIBase[1]");
	set_name(0x139f0bc, "DiscreteAmmoEjectorResource::sBases");
	del_items(0x139f0c4, DELIT_SIMPLE, 420);
	apply_type(0x139f0c4, "RTTIAttr[15]");
	set_name(0x139f0c4, "DiscreteAmmoEjectorResource::sAttrs");

	// DisintegratorEjector
	set_name(0x13b8294, "RTTI_DisintegratorEjector");
	apply_type(0x13b8294, "RTTICompound");
	del_items(0x13b9be8, DELIT_SIMPLE, 8);
	apply_type(0x13b9be8, "RTTIBase[1]");
	set_name(0x13b9be8, "DisintegratorEjector::sBases");

	// DisintegratorEjectorRep
	set_name(0x13b82e8, "RTTI_DisintegratorEjectorRep");
	apply_type(0x13b82e8, "RTTICompound");
	del_items(0x13b9bf4, DELIT_SIMPLE, 8);
	apply_type(0x13b9bf4, "RTTIBase[1]");
	set_name(0x13b9bf4, "DisintegratorEjectorRep::sBases");

	// DisintegratorEjectorResource
	set_name(0x13b833c, "RTTI_DisintegratorEjectorResource");
	apply_type(0x13b833c, "RTTICompound");
	del_items(0x13b969c, DELIT_SIMPLE, 8);
	apply_type(0x13b969c, "RTTIBase[1]");
	set_name(0x13b969c, "DisintegratorEjectorResource::sBases");
	del_items(0x13b96a4, DELIT_SIMPLE, 1344);
	apply_type(0x13b96a4, "RTTIAttr[48]");
	set_name(0x13b96a4, "DisintegratorEjectorResource::sAttrs");

	// DispensableEntityManagerSettings
	set_name(0x13681a0, "RTTI_DispensableEntityManagerSettings");
	apply_type(0x13681a0, "RTTICompound");
	del_items(0x136ab1c, DELIT_SIMPLE, 8);
	apply_type(0x136ab1c, "RTTIBase[1]");
	set_name(0x136ab1c, "DispensableEntityManagerSettings::sBases");
	del_items(0x136ab24, DELIT_SIMPLE, 112);
	apply_type(0x136ab24, "RTTIAttr[4]");
	set_name(0x136ab24, "DispensableEntityManagerSettings::sAttrs");

	// Door
	set_name(0x137aa90, "RTTI_Door");
	apply_type(0x137aa90, "RTTICompound");
	del_items(0x137c740, DELIT_SIMPLE, 8);
	apply_type(0x137c740, "RTTIBase[1]");
	set_name(0x137c740, "Door::sBases");
	del_items(0x137c748, DELIT_SIMPLE, 84);
	apply_type(0x137c748, "RTTIAttr[3]");
	set_name(0x137c748, "Door::sAttrs");
	del_items(0x137c79c, DELIT_SIMPLE, 240);
	apply_type(0x137c79c, "RTTIFunction[10]");
	set_name(0x137c79c, "Door::sFunctions");

	// DoorRep
	set_name(0x137aae4, "RTTI_DoorRep");
	apply_type(0x137aae4, "RTTICompound");
	del_items(0x137c88c, DELIT_SIMPLE, 8);
	apply_type(0x137c88c, "RTTIBase[1]");
	set_name(0x137c88c, "DoorRep::sBases");

	// DoorResource
	set_name(0x137ab38, "RTTI_DoorResource");
	apply_type(0x137ab38, "RTTICompound");
	del_items(0x137c658, DELIT_SIMPLE, 8);
	apply_type(0x137c658, "RTTIBase[1]");
	set_name(0x137c658, "DoorResource::sBases");
	del_items(0x137c660, DELIT_SIMPLE, 224);
	apply_type(0x137c660, "RTTIAttr[8]");
	set_name(0x137c660, "DoorResource::sAttrs");

	// DrawFlags
	set_name(0x13485fc, "RTTI_DrawFlags");
	apply_type(0x13485fc, "RTTICompound");
	del_items(0x1348720, DELIT_SIMPLE, 140);
	apply_type(0x1348720, "RTTIAttr[5]");
	set_name(0x1348720, "DrawFlags::sAttrs");

	// DrawableCullInfo
	set_name(0x1347ef4, "RTTI_DrawableCullInfo");
	apply_type(0x1347ef4, "RTTICompound");
	del_items(0x13488d4, DELIT_SIMPLE, 28);
	apply_type(0x13488d4, "RTTIAttr[1]");
	set_name(0x13488d4, "DrawableCullInfo::sAttrs");

	// DrawableObjectInstance
	set_name(0x1347f48, "RTTI_DrawableObjectInstance");
	apply_type(0x1347f48, "RTTICompound");
	del_items(0x13488f0, DELIT_SIMPLE, 84);
	apply_type(0x13488f0, "RTTIAttr[3]");
	set_name(0x13488f0, "DrawableObjectInstance::sAttrs");

	// EMPBlast
	set_name(0x139ec54, "RTTI_EMPBlast");
	apply_type(0x139ec54, "RTTICompound");
	del_items(0x139fd18, DELIT_SIMPLE, 8);
	apply_type(0x139fd18, "RTTIBase[1]");
	set_name(0x139fd18, "EMPBlast::sBases");
	del_items(0x139fd20, DELIT_SIMPLE, 24);
	apply_type(0x139fd20, "RTTIFunction[1]");
	set_name(0x139fd20, "EMPBlast::sFunctions");

	// EMPBlastResource
	set_name(0x139eca8, "RTTI_EMPBlastResource");
	apply_type(0x139eca8, "RTTICompound");
	del_items(0x139fc68, DELIT_SIMPLE, 8);
	apply_type(0x139fc68, "RTTIBase[1]");
	set_name(0x139fc68, "EMPBlastResource::sBases");
	del_items(0x139fc70, DELIT_SIMPLE, 168);
	apply_type(0x139fc70, "RTTIAttr[6]");
	set_name(0x139fc70, "EMPBlastResource::sAttrs");

	// EffectComponent
	set_name(0x1389edc, "RTTI_EffectComponent");
	apply_type(0x1389edc, "RTTICompound");
	del_items(0x138ab24, DELIT_SIMPLE, 8);
	apply_type(0x138ab24, "RTTIBase[1]");
	set_name(0x138ab24, "EffectComponent::sBases");

	// EffectComponentRep
	set_name(0x1389f30, "RTTI_EffectComponentRep");
	apply_type(0x1389f30, "RTTICompound");
	del_items(0x138ca5c, DELIT_SIMPLE, 8);
	apply_type(0x138ca5c, "RTTIBase[1]");
	set_name(0x138ca5c, "EffectComponentRep::sBases");

	// EffectComponentResource
	set_name(0x1389fa4, "RTTI_EffectComponentResource");
	apply_type(0x1389fa4, "RTTICompound");
	del_items(0x138a790, DELIT_SIMPLE, 8);
	apply_type(0x138a790, "RTTIBase[1]");
	set_name(0x138a790, "EffectComponentResource::sBases");
	del_items(0x138a798, DELIT_SIMPLE, 896);
	apply_type(0x138a798, "RTTIAttr[32]");
	set_name(0x138a798, "EffectComponentResource::sAttrs");

	// EffectEntity
	set_name(0x1377304, "RTTI_EffectEntity");
	apply_type(0x1377304, "RTTICompound");
	del_items(0x13773dc, DELIT_SIMPLE, 8);
	apply_type(0x13773dc, "RTTIBase[1]");
	set_name(0x13773dc, "EffectEntity::sBases");
	del_items(0x13773e4, DELIT_SIMPLE, 120);
	apply_type(0x13773e4, "RTTIFunction[5]");
	set_name(0x13773e4, "EffectEntity::sFunctions");

	// EffectEntityRep
	set_name(0x1377358, "RTTI_EffectEntityRep");
	apply_type(0x1377358, "RTTICompound");
	del_items(0x13789c8, DELIT_SIMPLE, 8);
	apply_type(0x13789c8, "RTTIBase[1]");
	set_name(0x13789c8, "EffectEntityRep::sBases");

	// EffectEntityResource
	set_name(0x13789e4, "RTTI_EffectEntityResource");
	apply_type(0x13789e4, "RTTICompound");
	del_items(0x13792f8, DELIT_SIMPLE, 8);
	apply_type(0x13792f8, "RTTIBase[1]");
	set_name(0x13792f8, "EffectEntityResource::sBases");
	del_items(0x1379300, DELIT_SIMPLE, 140);
	apply_type(0x1379300, "RTTIAttr[5]");
	set_name(0x1379300, "EffectEntityResource::sAttrs");

	// EjectLocation
	set_name(0x139ca38, "RTTI_EjectLocation");
	apply_type(0x139ca38, "RTTICompound");
	del_items(0x139d608, DELIT_SIMPLE, 448);
	apply_type(0x139d608, "RTTIAttr[16]");
	set_name(0x139d608, "EjectLocation::sAttrs");

	// EjectLocationPart
	set_name(0x139c9d4, "RTTI_EjectLocationPart");
	apply_type(0x139c9d4, "RTTICompound");
	del_items(0x139d5b4, DELIT_SIMPLE, 84);
	apply_type(0x139d5b4, "RTTIAttr[3]");
	set_name(0x139d5b4, "EjectLocationPart::sAttrs");

	// ElasticVehicleFollowCameraEntity
	set_name(0x1379040, "RTTI_ElasticVehicleFollowCameraEntity");
	apply_type(0x1379040, "RTTICompound");
	del_items(0x1379e80, DELIT_SIMPLE, 8);
	apply_type(0x1379e80, "RTTIBase[1]");
	set_name(0x1379e80, "ElasticVehicleFollowCameraEntity::sBases");

	// ElasticVehicleFollowCameraEntityResource
	set_name(0x1379094, "RTTI_ElasticVehicleFollowCameraEntityResource");
	apply_type(0x1379094, "RTTICompound");
	del_items(0x1379d7c, DELIT_SIMPLE, 8);
	apply_type(0x1379d7c, "RTTIBase[1]");
	set_name(0x1379d7c, "ElasticVehicleFollowCameraEntityResource::sBases");
	del_items(0x1379d84, DELIT_SIMPLE, 252);
	apply_type(0x1379d84, "RTTIAttr[9]");
	set_name(0x1379d84, "ElasticVehicleFollowCameraEntityResource::sAttrs");

	// ElectricityComponent
	set_name(0x13b8670, "RTTI_ElectricityComponent");
	apply_type(0x13b8670, "RTTICompound");
	del_items(0x13b90e4, DELIT_SIMPLE, 8);
	apply_type(0x13b90e4, "RTTIBase[1]");
	set_name(0x13b90e4, "ElectricityComponent::sBases");

	// ElectricityComponentResource
	set_name(0x13b878c, "RTTI_ElectricityComponentResource");
	apply_type(0x13b878c, "RTTICompound");
	del_items(0x13b8aa4, DELIT_SIMPLE, 8);
	apply_type(0x13b8aa4, "RTTIBase[1]");
	set_name(0x13b8aa4, "ElectricityComponentResource::sBases");
	del_items(0x13b8aac, DELIT_SIMPLE, 84);
	apply_type(0x13b8aac, "RTTIAttr[3]");
	set_name(0x13b8aac, "ElectricityComponentResource::sAttrs");

	// ElectricityDrawSettings
	set_name(0x13b85b8, "RTTI_ElectricityDrawSettings");
	apply_type(0x13b85b8, "RTTICompound");
	del_items(0x13b8bec, DELIT_SIMPLE, 8);
	apply_type(0x13b8bec, "RTTIBase[1]");
	set_name(0x13b8bec, "ElectricityDrawSettings::sBases");
	del_items(0x13b8bf4, DELIT_SIMPLE, 252);
	apply_type(0x13b8bf4, "RTTIAttr[9]");
	set_name(0x13b8bf4, "ElectricityDrawSettings::sAttrs");

	// ElectricityDrawSettingsModifierResource
	set_name(0x13b7ac8, "RTTI_ElectricityDrawSettingsModifierResource");
	apply_type(0x13b7ac8, "RTTICompound");
	del_items(0x13b8834, DELIT_SIMPLE, 8);
	apply_type(0x13b8834, "RTTIBase[1]");
	set_name(0x13b8834, "ElectricityDrawSettingsModifierResource::sBases");
	del_items(0x13b883c, DELIT_SIMPLE, 84);
	apply_type(0x13b883c, "RTTIAttr[3]");
	set_name(0x13b883c, "ElectricityDrawSettingsModifierResource::sAttrs");

	// ElectricityEjector
	set_name(0x13b809c, "RTTI_ElectricityEjector");
	apply_type(0x13b809c, "RTTICompound");
	del_items(0x13b9100, DELIT_SIMPLE, 8);
	apply_type(0x13b9100, "RTTIBase[1]");
	set_name(0x13b9100, "ElectricityEjector::sBases");

	// ElectricityEjectorRep
	set_name(0x13b80f0, "RTTI_ElectricityEjectorRep");
	apply_type(0x13b80f0, "RTTICompound");
	del_items(0x13b910c, DELIT_SIMPLE, 8);
	apply_type(0x13b910c, "RTTIBase[1]");
	set_name(0x13b910c, "ElectricityEjectorRep::sBases");

	// ElectricityEjectorResource
	set_name(0x13b8144, "RTTI_ElectricityEjectorResource");
	apply_type(0x13b8144, "RTTICompound");
	del_items(0x13b9114, DELIT_SIMPLE, 8);
	apply_type(0x13b9114, "RTTIBase[1]");
	set_name(0x13b9114, "ElectricityEjectorResource::sBases");
	del_items(0x13b911c, DELIT_SIMPLE, 868);
	apply_type(0x13b911c, "RTTIAttr[31]");
	set_name(0x13b911c, "ElectricityEjectorResource::sAttrs");

	// ElectricityEmitNode
	set_name(0x13b7cd0, "RTTI_ElectricityEmitNode");
	apply_type(0x13b7cd0, "RTTICompound");
	del_items(0x13b8f04, DELIT_SIMPLE, 8);
	apply_type(0x13b8f04, "RTTIBase[1]");
	set_name(0x13b8f04, "ElectricityEmitNode::sBases");

	// ElectricityEmitNodeResource
	set_name(0x13b7d34, "RTTI_ElectricityEmitNodeResource");
	apply_type(0x13b7d34, "RTTICompound");
	del_items(0x13b8ea8, DELIT_SIMPLE, 8);
	apply_type(0x13b8ea8, "RTTIBase[1]");
	set_name(0x13b8ea8, "ElectricityEmitNodeResource::sBases");
	del_items(0x13b8eb0, DELIT_SIMPLE, 84);
	apply_type(0x13b8eb0, "RTTIAttr[3]");
	set_name(0x13b8eb0, "ElectricityEmitNodeResource::sAttrs");

	// ElectricityEmitSettings
	set_name(0x13b861c, "RTTI_ElectricityEmitSettings");
	apply_type(0x13b861c, "RTTICompound");
	del_items(0x13b8950, DELIT_SIMPLE, 8);
	apply_type(0x13b8950, "RTTIBase[1]");
	set_name(0x13b8950, "ElectricityEmitSettings::sBases");
	del_items(0x13b8958, DELIT_SIMPLE, 196);
	apply_type(0x13b8958, "RTTIAttr[7]");
	set_name(0x13b8958, "ElectricityEmitSettings::sAttrs");

	// ElectricityEntity
	set_name(0x13b7b80, "RTTI_ElectricityEntity");
	apply_type(0x13b7b80, "RTTICompound");
	del_items(0x13b8a1c, DELIT_SIMPLE, 8);
	apply_type(0x13b8a1c, "RTTIBase[1]");
	set_name(0x13b8a1c, "ElectricityEntity::sBases");

	// ElectricityEntityNode
	set_name(0x13b7c28, "RTTI_ElectricityEntityNode");
	apply_type(0x13b7c28, "RTTICompound");
	del_items(0x13b8be4, DELIT_SIMPLE, 8);
	apply_type(0x13b8be4, "RTTIBase[1]");
	set_name(0x13b8be4, "ElectricityEntityNode::sBases");

	// ElectricityEntityNodeResource
	set_name(0x13b7c7c, "RTTI_ElectricityEntityNodeResource");
	apply_type(0x13b7c7c, "RTTICompound");
	del_items(0x13b8b50, DELIT_SIMPLE, 8);
	apply_type(0x13b8b50, "RTTIBase[1]");
	set_name(0x13b8b50, "ElectricityEntityNodeResource::sBases");
	del_items(0x13b8b58, DELIT_SIMPLE, 140);
	apply_type(0x13b8b58, "RTTIAttr[5]");
	set_name(0x13b8b58, "ElectricityEntityNodeResource::sAttrs");

	// ElectricityEntityResource
	set_name(0x13b7bd4, "RTTI_ElectricityEntityResource");
	apply_type(0x13b7bd4, "RTTICompound");
	del_items(0x13b8b10, DELIT_SIMPLE, 8);
	apply_type(0x13b8b10, "RTTIBase[1]");
	set_name(0x13b8b10, "ElectricityEntityResource::sBases");
	del_items(0x13b8b18, DELIT_SIMPLE, 56);
	apply_type(0x13b8b18, "RTTIAttr[2]");
	set_name(0x13b8b18, "ElectricityEntityResource::sAttrs");

	// ElectricityGrenade
	set_name(0x13b849c, "RTTI_ElectricityGrenade");
	apply_type(0x13b849c, "RTTICompound");
	del_items(0x13b9dac, DELIT_SIMPLE, 8);
	apply_type(0x13b9dac, "RTTIBase[1]");
	set_name(0x13b9dac, "ElectricityGrenade::sBases");

	// ElectricityGrenadeRep
	set_name(0x13b84f0, "RTTI_ElectricityGrenadeRep");
	apply_type(0x13b84f0, "RTTICompound");
	del_items(0x13b9db4, DELIT_SIMPLE, 8);
	apply_type(0x13b9db4, "RTTIBase[1]");
	set_name(0x13b9db4, "ElectricityGrenadeRep::sBases");

	// ElectricityGrenadeResource
	set_name(0x13b8544, "RTTI_ElectricityGrenadeResource");
	apply_type(0x13b8544, "RTTICompound");
	del_items(0x13b9cd4, DELIT_SIMPLE, 8);
	apply_type(0x13b9cd4, "RTTIBase[1]");
	set_name(0x13b9cd4, "ElectricityGrenadeResource::sBases");
	del_items(0x13b9cdc, DELIT_SIMPLE, 196);
	apply_type(0x13b9cdc, "RTTIAttr[7]");
	set_name(0x13b9cdc, "ElectricityGrenadeResource::sAttrs");
	del_items(0x13b9da0, DELIT_SIMPLE, 12);
	apply_type(0x13b9da0, "RTTIMessageHandler[1]");
	set_name(0x13b9da0, "ElectricityGrenadeResource::sMessageHandlers");

	// ElectricityGrid
	set_name(0x13b7e50, "RTTI_ElectricityGrid");
	apply_type(0x13b7e50, "RTTICompound");
	del_items(0x13b9080, DELIT_SIMPLE, 8);
	apply_type(0x13b9080, "RTTIBase[1]");
	set_name(0x13b9080, "ElectricityGrid::sBases");

	// ElectricityGridNode
	set_name(0x13b7d88, "RTTI_ElectricityGridNode");
	apply_type(0x13b7d88, "RTTICompound");
	del_items(0x13b902c, DELIT_SIMPLE, 8);
	apply_type(0x13b902c, "RTTIBase[1]");
	set_name(0x13b902c, "ElectricityGridNode::sBases");

	// ElectricityGridNodeResource
	set_name(0x13b7dfc, "RTTI_ElectricityGridNodeResource");
	apply_type(0x13b7dfc, "RTTICompound");
	del_items(0x13b8f0c, DELIT_SIMPLE, 8);
	apply_type(0x13b8f0c, "RTTIBase[1]");
	set_name(0x13b8f0c, "ElectricityGridNodeResource::sBases");
	del_items(0x13b8f14, DELIT_SIMPLE, 280);
	apply_type(0x13b8f14, "RTTIAttr[10]");
	set_name(0x13b8f14, "ElectricityGridNodeResource::sAttrs");

	// ElectricityGridProperties
	set_name(0x13b7f4c, "RTTI_ElectricityGridProperties");
	apply_type(0x13b7f4c, "RTTICompound");
	del_items(0x13b9088, DELIT_SIMPLE, 8);
	apply_type(0x13b9088, "RTTIBase[1]");
	set_name(0x13b9088, "ElectricityGridProperties::sBases");
	del_items(0x13b9090, DELIT_SIMPLE, 84);
	apply_type(0x13b9090, "RTTIAttr[3]");
	set_name(0x13b9090, "ElectricityGridProperties::sAttrs");

	// ElectricityGridRep
	set_name(0x13b7ef8, "RTTI_ElectricityGridRep");
	apply_type(0x13b7ef8, "RTTICompound");
	del_items(0x13b90f0, DELIT_SIMPLE, 8);
	apply_type(0x13b90f0, "RTTIBase[1]");
	set_name(0x13b90f0, "ElectricityGridRep::sBases");

	// ElectricityGridResource
	set_name(0x13b7ea4, "RTTI_ElectricityGridResource");
	apply_type(0x13b7ea4, "RTTICompound");
	del_items(0x13b9040, DELIT_SIMPLE, 8);
	apply_type(0x13b9040, "RTTIBase[1]");
	set_name(0x13b9040, "ElectricityGridResource::sBases");
	del_items(0x13b9048, DELIT_SIMPLE, 56);
	apply_type(0x13b9048, "RTTIAttr[2]");
	set_name(0x13b9048, "ElectricityGridResource::sAttrs");

	// ElectricityNode
	set_name(0x13b7a64, "RTTI_ElectricityNode");
	apply_type(0x13b7a64, "RTTICompound");
	del_items(0x13b8940, DELIT_SIMPLE, 8);
	apply_type(0x13b8940, "RTTIBase[1]");
	set_name(0x13b8940, "ElectricityNode::sBases");

	// ElectricityNodeManager
	set_name(0x13b7fa0, "RTTI_ElectricityNodeManager");
	apply_type(0x13b7fa0, "RTTICompound");
	del_items(0x13b8948, DELIT_SIMPLE, 8);
	apply_type(0x13b8948, "RTTIBase[1]");
	set_name(0x13b8948, "ElectricityNodeManager::sBases");

	// ElectricityNodeManagerRep
	set_name(0x13b8048, "RTTI_ElectricityNodeManagerRep");
	apply_type(0x13b8048, "RTTICompound");
	del_items(0x13b90f8, DELIT_SIMPLE, 8);
	apply_type(0x13b90f8, "RTTIBase[1]");
	set_name(0x13b90f8, "ElectricityNodeManagerRep::sBases");

	// ElectricityNodeManagerResource
	set_name(0x13b7ff4, "RTTI_ElectricityNodeManagerResource");
	apply_type(0x13b7ff4, "RTTICompound");
	del_items(0x13b8cfc, DELIT_SIMPLE, 8);
	apply_type(0x13b8cfc, "RTTIBase[1]");
	set_name(0x13b8cfc, "ElectricityNodeManagerResource::sBases");
	del_items(0x13b8d04, DELIT_SIMPLE, 420);
	apply_type(0x13b8d04, "RTTIAttr[15]");
	set_name(0x13b8d04, "ElectricityNodeManagerResource::sAttrs");

	// ElectricityNodeResource
	set_name(0x13b7b2c, "RTTI_ElectricityNodeResource");
	apply_type(0x13b7b2c, "RTTICompound");
	del_items(0x13b8890, DELIT_SIMPLE, 8);
	apply_type(0x13b8890, "RTTIBase[1]");
	set_name(0x13b8890, "ElectricityNodeResource::sBases");
	del_items(0x13b8898, DELIT_SIMPLE, 168);
	apply_type(0x13b8898, "RTTIAttr[6]");
	set_name(0x13b8898, "ElectricityNodeResource::sAttrs");

	// ElectricitySetCanJumpFromAction
	set_name(0x1376f7c, "RTTI_ElectricitySetCanJumpFromAction");
	apply_type(0x1376f7c, "RTTICompound");
	del_items(0x137846c, DELIT_SIMPLE, 8);
	apply_type(0x137846c, "RTTIBase[1]");
	set_name(0x137846c, "ElectricitySetCanJumpFromAction::sBases");
	del_items(0x1378474, DELIT_SIMPLE, 56);
	apply_type(0x1378474, "RTTIAttr[2]");
	set_name(0x1378474, "ElectricitySetCanJumpFromAction::sAttrs");

	// ElectricitySetCanJumpToAction
	set_name(0x1376fd0, "RTTI_ElectricitySetCanJumpToAction");
	apply_type(0x1376fd0, "RTTICompound");
	del_items(0x13784ac, DELIT_SIMPLE, 8);
	apply_type(0x13784ac, "RTTIBase[1]");
	set_name(0x13784ac, "ElectricitySetCanJumpToAction::sBases");
	del_items(0x13784b4, DELIT_SIMPLE, 56);
	apply_type(0x13784b4, "RTTIAttr[2]");
	set_name(0x13784b4, "ElectricitySetCanJumpToAction::sAttrs");

	// ElectricitySpawnEffectEntityResource
	set_name(0x13b8738, "RTTI_ElectricitySpawnEffectEntityResource");
	apply_type(0x13b8738, "RTTICompound");
	del_items(0x13b8a9c, DELIT_SIMPLE, 8);
	apply_type(0x13b8a9c, "RTTIBase[1]");
	set_name(0x13b8a9c, "ElectricitySpawnEffectEntityResource::sBases");

	// ElectricitySpawnEntityResource
	set_name(0x13b86e4, "RTTI_ElectricitySpawnEntityResource");
	apply_type(0x13b86e4, "RTTICompound");
	del_items(0x13b8a24, DELIT_SIMPLE, 8);
	apply_type(0x13b8a24, "RTTIBase[1]");
	set_name(0x13b8a24, "ElectricitySpawnEntityResource::sBases");
	del_items(0x13b8a2c, DELIT_SIMPLE, 112);
	apply_type(0x13b8a2c, "RTTIAttr[4]");
	set_name(0x13b8a2c, "ElectricitySpawnEntityResource::sAttrs");

	// EmitElectricityAction
	set_name(0x1376ed4, "RTTI_EmitElectricityAction");
	apply_type(0x1376ed4, "RTTICompound");
	del_items(0x1378408, DELIT_SIMPLE, 8);
	apply_type(0x1378408, "RTTIBase[1]");
	set_name(0x1378408, "EmitElectricityAction::sBases");
	del_items(0x1378410, DELIT_SIMPLE, 84);
	apply_type(0x1378410, "RTTIAttr[3]");
	set_name(0x1378410, "EmitElectricityAction::sAttrs");

	// EmitterMeshShapeData
	set_name(0x1340c4c, "RTTI_EmitterMeshShapeData");
	apply_type(0x1340c4c, "RTTICompound");
	del_items(0x1341408, DELIT_SIMPLE, 56);
	apply_type(0x1341408, "RTTIAttr[2]");
	set_name(0x1341408, "EmitterMeshShapeData::sAttrs");

	// EmitterVertex
	set_name(0x1340bc8, "RTTI_EmitterVertex");
	apply_type(0x1340bc8, "RTTICompound");
	del_items(0x13413d0, DELIT_SIMPLE, 56);
	apply_type(0x13413d0, "RTTIAttr[2]");
	set_name(0x13413d0, "EmitterVertex::sAttrs");

	// EnableConstraintsAction
	set_name(0x1376898, "RTTI_EnableConstraintsAction");
	apply_type(0x1376898, "RTTICompound");
	del_items(0x1377e68, DELIT_SIMPLE, 8);
	apply_type(0x1377e68, "RTTIBase[1]");
	set_name(0x1377e68, "EnableConstraintsAction::sBases");
	del_items(0x1377e70, DELIT_SIMPLE, 56);
	apply_type(0x1377e70, "RTTIAttr[2]");
	set_name(0x1377e70, "EnableConstraintsAction::sAttrs");

	// EnableEntityAction
	set_name(0x13765f8, "RTTI_EnableEntityAction");
	apply_type(0x13765f8, "RTTICompound");
	del_items(0x1377b18, DELIT_SIMPLE, 8);
	apply_type(0x1377b18, "RTTIBase[1]");
	set_name(0x1377b18, "EnableEntityAction::sBases");
	del_items(0x1377b20, DELIT_SIMPLE, 56);
	apply_type(0x1377b20, "RTTIAttr[2]");
	set_name(0x1377b20, "EnableEntityAction::sAttrs");

	// EnablePartsAction
	set_name(0x1376550, "RTTI_EnablePartsAction");
	apply_type(0x1376550, "RTTICompound");
	del_items(0x1377a0c, DELIT_SIMPLE, 8);
	apply_type(0x1377a0c, "RTTIBase[1]");
	set_name(0x1377a0c, "EnablePartsAction::sBases");
	del_items(0x1377a14, DELIT_SIMPLE, 140);
	apply_type(0x1377a14, "RTTIAttr[5]");
	set_name(0x1377a14, "EnablePartsAction::sAttrs");

	// EncounterDifficultyModifier
	set_name(0x13a69ac, "RTTI_EncounterDifficultyModifier");
	apply_type(0x13a69ac, "RTTICompound");
	del_items(0x13a754c, DELIT_SIMPLE, 8);
	apply_type(0x13a754c, "RTTIBase[1]");
	set_name(0x13a754c, "EncounterDifficultyModifier::sBases");
	del_items(0x13a7554, DELIT_SIMPLE, 196);
	apply_type(0x13a7554, "RTTIAttr[7]");
	set_name(0x13a7554, "EncounterDifficultyModifier::sAttrs");

	// EnemyFactionAction
	set_name(0x137624c, "RTTI_EnemyFactionAction");
	apply_type(0x137624c, "RTTICompound");
	del_items(0x13775d4, DELIT_SIMPLE, 8);
	apply_type(0x13775d4, "RTTIBase[1]");
	set_name(0x13775d4, "EnemyFactionAction::sBases");

	// EnergyProjectile
	set_name(0x13b83e4, "RTTI_EnergyProjectile");
	apply_type(0x13b83e4, "RTTICompound");
	del_items(0x13b9cb8, DELIT_SIMPLE, 8);
	apply_type(0x13b9cb8, "RTTIBase[1]");
	set_name(0x13b9cb8, "EnergyProjectile::sBases");

	// EnergyProjectileRep
	set_name(0x13b8390, "RTTI_EnergyProjectileRep");
	apply_type(0x13b8390, "RTTICompound");
	del_items(0x13b9cc0, DELIT_SIMPLE, 8);
	apply_type(0x13b9cc0, "RTTIBase[1]");
	set_name(0x13b9cc0, "EnergyProjectileRep::sBases");

	// EnergyProjectileResource
	set_name(0x13b8448, "RTTI_EnergyProjectileResource");
	apply_type(0x13b8448, "RTTICompound");
	del_items(0x13b9c08, DELIT_SIMPLE, 8);
	apply_type(0x13b9c08, "RTTIBase[1]");
	set_name(0x13b9c08, "EnergyProjectileResource::sBases");
	del_items(0x13b9c10, DELIT_SIMPLE, 168);
	apply_type(0x13b9c10, "RTTIAttr[6]");
	set_name(0x13b9c10, "EnergyProjectileResource::sAttrs");

	// Entity
	set_name(0x135d698, "RTTI_Entity");
	apply_type(0x135d698, "RTTICompound");
	del_items(0x135f92c, DELIT_SIMPLE, 32);
	apply_type(0x135f92c, "RTTIBase[4]");
	set_name(0x135f92c, "Entity::sBases");
	del_items(0x135f94c, DELIT_SIMPLE, 336);
	apply_type(0x135f94c, "RTTIAttr[12]");
	set_name(0x135f94c, "Entity::sAttrs");
	del_items(0x135fa9c, DELIT_SIMPLE, 1416);
	apply_type(0x135fa9c, "RTTIFunction[59]");
	set_name(0x135fa9c, "Entity::sFunctions");

	// EntityActorInstance
	set_name(0x139a82c, "RTTI_EntityActorInstance");
	apply_type(0x139a82c, "RTTICompound");
	del_items(0x139b8fc, DELIT_SIMPLE, 8);
	apply_type(0x139b8fc, "RTTIBase[1]");
	set_name(0x139b8fc, "EntityActorInstance::sBases");

	// EntityActorResource
	set_name(0x139a7d8, "RTTI_EntityActorResource");
	apply_type(0x139a7d8, "RTTICompound");
	del_items(0x139b7c0, DELIT_SIMPLE, 8);
	apply_type(0x139b7c0, "RTTIBase[1]");
	set_name(0x139b7c0, "EntityActorResource::sBases");
	del_items(0x139b7c8, DELIT_SIMPLE, 308);
	apply_type(0x139b7c8, "RTTIAttr[11]");
	set_name(0x139b7c8, "EntityActorResource::sAttrs");

	// EntityComponent
	set_name(0x135d904, "RTTI_EntityComponent");
	apply_type(0x135d904, "RTTICompound");
	del_items(0x135f918, DELIT_SIMPLE, 16);
	apply_type(0x135f918, "RTTIBase[2]");
	set_name(0x135f918, "EntityComponent::sBases");

	// EntityComponentRep
	set_name(0x135d958, "RTTI_EntityComponentRep");
	apply_type(0x135d958, "RTTICompound");
	del_items(0x136002c, DELIT_SIMPLE, 8);
	apply_type(0x136002c, "RTTIBase[1]");
	set_name(0x136002c, "EntityComponentRep::sBases");

	// EntityComponentResource
	set_name(0x135d9cc, "RTTI_EntityComponentResource");
	apply_type(0x135d9cc, "RTTICompound");
	del_items(0x135f200, DELIT_SIMPLE, 8);
	apply_type(0x135f200, "RTTIBase[1]");
	set_name(0x135f200, "EntityComponentResource::sBases");

	// EntityPlaceHolder
	set_name(0x135d4e8, "RTTI_EntityPlaceHolder");
	apply_type(0x135d4e8, "RTTICompound");
	del_items(0x135f814, DELIT_SIMPLE, 8);
	apply_type(0x135f814, "RTTIBase[1]");
	set_name(0x135f814, "EntityPlaceHolder::sBases");
	del_items(0x135f81c, DELIT_SIMPLE, 252);
	apply_type(0x135f81c, "RTTIAttr[9]");
	set_name(0x135f81c, "EntityPlaceHolder::sAttrs");

	// EntityPlaceHolderAttr
	set_name(0x135d494, "RTTI_EntityPlaceHolderAttr");
	apply_type(0x135d494, "RTTICompound");
	del_items(0x135f79c, DELIT_SIMPLE, 8);
	apply_type(0x135f79c, "RTTIBase[1]");
	set_name(0x135f79c, "EntityPlaceHolderAttr::sBases");
	del_items(0x135f7a4, DELIT_SIMPLE, 112);
	apply_type(0x135f7a4, "RTTIAttr[4]");
	set_name(0x135f7a4, "EntityPlaceHolderAttr::sAttrs");

	// EntityRep
	set_name(0x135d7b8, "RTTI_EntityRep");
	apply_type(0x135d7b8, "RTTICompound");
	del_items(0x136003c, DELIT_SIMPLE, 16);
	apply_type(0x136003c, "RTTIBase[2]");
	set_name(0x136003c, "EntityRep::sBases");
	del_items(0x136004c, DELIT_SIMPLE, 12);
	apply_type(0x136004c, "RTTIMessageHandler[1]");
	set_name(0x136004c, "EntityRep::sMessageHandlers");

	// EntityResource
	set_name(0x135d8b0, "RTTI_EntityResource");
	apply_type(0x135d8b0, "RTTICompound");
	del_items(0x135f24c, DELIT_SIMPLE, 8);
	apply_type(0x135f24c, "RTTIBase[1]");
	set_name(0x135f24c, "EntityResource::sBases");
	del_items(0x135f254, DELIT_SIMPLE, 812);
	apply_type(0x135f254, "RTTIAttr[29]");
	set_name(0x135f254, "EntityResource::sAttrs");

	// EntityScoreSettings
	set_name(0x136d43c, "RTTI_EntityScoreSettings");
	apply_type(0x136d43c, "RTTICompound");
	del_items(0x1370a94, DELIT_SIMPLE, 8);
	apply_type(0x1370a94, "RTTIBase[1]");
	set_name(0x1370a94, "EntityScoreSettings::sBases");
	del_items(0x1370a9c, DELIT_SIMPLE, 112);
	apply_type(0x1370a9c, "RTTIAttr[4]");
	set_name(0x1370a9c, "EntityScoreSettings::sAttrs");

	// EntityStatUnlockableResource
	set_name(0x13a687c, "RTTI_EntityStatUnlockableResource");
	apply_type(0x13a687c, "RTTICompound");
	del_items(0x13a7488, DELIT_SIMPLE, 8);
	apply_type(0x13a7488, "RTTIBase[1]");
	set_name(0x13a7488, "EntityStatUnlockableResource::sBases");
	del_items(0x13a7490, DELIT_SIMPLE, 112);
	apply_type(0x13a7490, "RTTIAttr[4]");
	set_name(0x13a7490, "EntityStatUnlockableResource::sAttrs");

	// EntitySticker
	set_name(0x1378a38, "RTTI_EntitySticker");
	apply_type(0x1378a38, "RTTICompound");
	del_items(0x137938c, DELIT_SIMPLE, 16);
	apply_type(0x137938c, "RTTIBase[2]");
	set_name(0x137938c, "EntitySticker::sBases");

	// EntityStickerResource
	set_name(0x1378a9c, "RTTI_EntityStickerResource");
	apply_type(0x1378a9c, "RTTICompound");
	del_items(0x137939c, DELIT_SIMPLE, 8);
	apply_type(0x137939c, "RTTIBase[1]");
	set_name(0x137939c, "EntityStickerResource::sBases");
	del_items(0x13793a4, DELIT_SIMPLE, 196);
	apply_type(0x13793a4, "RTTIAttr[7]");
	set_name(0x13793a4, "EntityStickerResource::sAttrs");

	// EventInstance
	set_name(0x13944dc, "RTTI_EventInstance");
	apply_type(0x13944dc, "RTTICompound");
	del_items(0x13956f0, DELIT_SIMPLE, 16);
	apply_type(0x13956f0, "RTTIBase[2]");
	set_name(0x13956f0, "EventInstance::sBases");

	// EventPositionLocatorInstance
	set_name(0x139a8d4, "RTTI_EventPositionLocatorInstance");
	apply_type(0x139a8d4, "RTTICompound");
	del_items(0x139bd54, DELIT_SIMPLE, 8);
	apply_type(0x139bd54, "RTTIBase[1]");
	set_name(0x139bd54, "EventPositionLocatorInstance::sBases");

	// EventPositionLocatorResource
	set_name(0x139a880, "RTTI_EventPositionLocatorResource");
	apply_type(0x139a880, "RTTICompound");
	del_items(0x139bcf8, DELIT_SIMPLE, 8);
	apply_type(0x139bcf8, "RTTIBase[1]");
	set_name(0x139bcf8, "EventPositionLocatorResource::sBases");
	del_items(0x139bd00, DELIT_SIMPLE, 84);
	apply_type(0x139bd00, "RTTIAttr[3]");
	set_name(0x139bd00, "EventPositionLocatorResource::sAttrs");

	// EventResource
	set_name(0x1394488, "RTTI_EventResource");
	apply_type(0x1394488, "RTTICompound");
	del_items(0x1395608, DELIT_SIMPLE, 8);
	apply_type(0x1395608, "RTTIBase[1]");
	set_name(0x1395608, "EventResource::sBases");
	del_items(0x1395610, DELIT_SIMPLE, 224);
	apply_type(0x1395610, "RTTIAttr[8]");
	set_name(0x1395610, "EventResource::sAttrs");

	// ExoSkeleton
	set_name(0x13a0ec8, "RTTI_ExoSkeleton");
	apply_type(0x13a0ec8, "RTTICompound");
	del_items(0x13a2cc8, DELIT_SIMPLE, 8);
	apply_type(0x13a2cc8, "RTTIBase[1]");
	set_name(0x13a2cc8, "ExoSkeleton::sBases");
	del_items(0x13a2cd0, DELIT_SIMPLE, 48);
	apply_type(0x13a2cd0, "RTTIFunction[2]");
	set_name(0x13a2cd0, "ExoSkeleton::sFunctions");

	// ExoSkeletonAIController
	set_name(0x13a0fc4, "RTTI_ExoSkeletonAIController");
	apply_type(0x13a0fc4, "RTTICompound");
	del_items(0x13a2d18, DELIT_SIMPLE, 8);
	apply_type(0x13a2d18, "RTTIBase[1]");
	set_name(0x13a2d18, "ExoSkeletonAIController::sBases");

	// ExoSkeletonController
	set_name(0x13a0f70, "RTTI_ExoSkeletonController");
	apply_type(0x13a0f70, "RTTICompound");
	del_items(0x13a2d00, DELIT_SIMPLE, 8);
	apply_type(0x13a2d00, "RTTIBase[1]");
	set_name(0x13a2d00, "ExoSkeletonController::sBases");

	// ExoSkeletonJoystickController
	set_name(0x13a1018, "RTTI_ExoSkeletonJoystickController");
	apply_type(0x13a1018, "RTTICompound");
	del_items(0x13a2d20, DELIT_SIMPLE, 8);
	apply_type(0x13a2d20, "RTTIBase[1]");
	set_name(0x13a2d20, "ExoSkeletonJoystickController::sBases");

	// ExoSkeletonMover
	set_name(0x13a1124, "RTTI_ExoSkeletonMover");
	apply_type(0x13a1124, "RTTICompound");
	del_items(0x13a2d08, DELIT_SIMPLE, 8);
	apply_type(0x13a2d08, "RTTIBase[1]");
	set_name(0x13a2d08, "ExoSkeletonMover::sBases");

	// ExoSkeletonMoverResource
	set_name(0x13a1178, "RTTI_ExoSkeletonMoverResource");
	apply_type(0x13a1178, "RTTICompound");
	del_items(0x13a2d28, DELIT_SIMPLE, 8);
	apply_type(0x13a2d28, "RTTIBase[1]");
	set_name(0x13a2d28, "ExoSkeletonMoverResource::sBases");

	// ExoSkeletonRep
	set_name(0x13a0f1c, "RTTI_ExoSkeletonRep");
	apply_type(0x13a0f1c, "RTTICompound");
	del_items(0x13a2d10, DELIT_SIMPLE, 8);
	apply_type(0x13a2d10, "RTTIBase[1]");
	set_name(0x13a2d10, "ExoSkeletonRep::sBases");

	// ExoSkeletonResource
	set_name(0x13a10d0, "RTTI_ExoSkeletonResource");
	apply_type(0x13a10d0, "RTTICompound");
	del_items(0x13a265c, DELIT_SIMPLE, 8);
	apply_type(0x13a265c, "RTTIBase[1]");
	set_name(0x13a265c, "ExoSkeletonResource::sBases");
	del_items(0x13a2664, DELIT_SIMPLE, 1624);
	apply_type(0x13a2664, "RTTIAttr[58]");
	set_name(0x13a2664, "ExoSkeletonResource::sAttrs");
	del_items(0x13a2cbc, DELIT_SIMPLE, 12);
	apply_type(0x13a2cbc, "RTTIMessageHandler[1]");
	set_name(0x13a2cbc, "ExoSkeletonResource::sMessageHandlers");

	// Explosion
	set_name(0x139ecfc, "RTTI_Explosion");
	apply_type(0x139ecfc, "RTTICompound");
	del_items(0x139fd38, DELIT_SIMPLE, 8);
	apply_type(0x139fd38, "RTTIBase[1]");
	set_name(0x139fd38, "Explosion::sBases");

	// ExplosionOnContactComponent
	set_name(0x139edb4, "RTTI_ExplosionOnContactComponent");
	apply_type(0x139edb4, "RTTICompound");
	del_items(0x139fd40, DELIT_SIMPLE, 8);
	apply_type(0x139fd40, "RTTIBase[1]");
	set_name(0x139fd40, "ExplosionOnContactComponent::sBases");

	// ExplosionResource
	set_name(0x139ed60, "RTTI_ExplosionResource");
	apply_type(0x139ed60, "RTTICompound");
	del_items(0x139f9cc, DELIT_SIMPLE, 8);
	apply_type(0x139f9cc, "RTTIBase[1]");
	set_name(0x139f9cc, "ExplosionResource::sBases");
	del_items(0x139f9d4, DELIT_SIMPLE, 532);
	apply_type(0x139f9d4, "RTTIAttr[19]");
	set_name(0x139f9d4, "ExplosionResource::sAttrs");
	del_items(0x139fbe8, DELIT_SIMPLE, 12);
	apply_type(0x139fbe8, "RTTIMessageHandler[1]");
	set_name(0x139fbe8, "ExplosionResource::sMessageHandlers");

	// ExplosiveLocation
	set_name(0x137fe8c, "RTTI_ExplosiveLocation");
	apply_type(0x137fe8c, "RTTICompound");
	del_items(0x1381b0c, DELIT_SIMPLE, 8);
	apply_type(0x1381b0c, "RTTIBase[1]");
	set_name(0x1381b0c, "ExplosiveLocation::sBases");
	del_items(0x1381b14, DELIT_SIMPLE, 120);
	apply_type(0x1381b14, "RTTIFunction[5]");
	set_name(0x1381b14, "ExplosiveLocation::sFunctions");

	// ExplosiveLocationAiController
	set_name(0x137ffdc, "RTTI_ExplosiveLocationAiController");
	apply_type(0x137ffdc, "RTTICompound");
	del_items(0x1381ba4, DELIT_SIMPLE, 8);
	apply_type(0x1381ba4, "RTTIBase[1]");
	set_name(0x1381ba4, "ExplosiveLocationAiController::sBases");

	// ExplosiveLocationController
	set_name(0x137ff34, "RTTI_ExplosiveLocationController");
	apply_type(0x137ff34, "RTTICompound");
	del_items(0x1381b8c, DELIT_SIMPLE, 8);
	apply_type(0x1381b8c, "RTTIBase[1]");
	set_name(0x1381b8c, "ExplosiveLocationController::sBases");

	// ExplosiveLocationIndicatorLight
	set_name(0x137fdd4, "RTTI_ExplosiveLocationIndicatorLight");
	apply_type(0x137fdd4, "RTTICompound");
	del_items(0x1381794, DELIT_SIMPLE, 84);
	apply_type(0x1381794, "RTTIAttr[3]");
	set_name(0x1381794, "ExplosiveLocationIndicatorLight::sAttrs");

	// ExplosiveLocationJoystickController
	set_name(0x137ff88, "RTTI_ExplosiveLocationJoystickController");
	apply_type(0x137ff88, "RTTICompound");
	del_items(0x1381b9c, DELIT_SIMPLE, 8);
	apply_type(0x1381b9c, "RTTIBase[1]");
	set_name(0x1381b9c, "ExplosiveLocationJoystickController::sBases");

	// ExplosiveLocationRep
	set_name(0x137fee0, "RTTI_ExplosiveLocationRep");
	apply_type(0x137fee0, "RTTICompound");
	del_items(0x1381b94, DELIT_SIMPLE, 8);
	apply_type(0x1381b94, "RTTIBase[1]");
	set_name(0x1381b94, "ExplosiveLocationRep::sBases");

	// ExplosiveLocationResource
	set_name(0x137fe28, "RTTI_ExplosiveLocationResource");
	apply_type(0x137fe28, "RTTICompound");
	del_items(0x13817f4, DELIT_SIMPLE, 8);
	apply_type(0x13817f4, "RTTIBase[1]");
	set_name(0x13817f4, "ExplosiveLocationResource::sBases");
	del_items(0x13817fc, DELIT_SIMPLE, 784);
	apply_type(0x13817fc, "RTTIAttr[28]");
	set_name(0x13817fc, "ExplosiveLocationResource::sAttrs");

	// ExposureSettingsResource
	set_name(0x1348394, "RTTI_ExposureSettingsResource");
	apply_type(0x1348394, "RTTICompound");
	del_items(0x1349184, DELIT_SIMPLE, 8);
	apply_type(0x1349184, "RTTIBase[1]");
	set_name(0x1349184, "ExposureSettingsResource::sBases");
	del_items(0x134918c, DELIT_SIMPLE, 252);
	apply_type(0x134918c, "RTTIAttr[9]");
	set_name(0x134918c, "ExposureSettingsResource::sAttrs");

	// ExternalAnimationEvent
	set_name(0x1336688, "RTTI_ExternalAnimationEvent");
	apply_type(0x1336688, "RTTICompound");
	del_items(0x1338074, DELIT_SIMPLE, 8);
	apply_type(0x1338074, "RTTIBase[1]");
	set_name(0x1338074, "ExternalAnimationEvent::sBases");
	del_items(0x133807c, DELIT_SIMPLE, 28);
	apply_type(0x133807c, "RTTIAttr[1]");
	set_name(0x133807c, "ExternalAnimationEvent::sAttrs");

	// ExternalAnimationSoundEvent
	set_name(0x13366ec, "RTTI_ExternalAnimationSoundEvent");
	apply_type(0x13366ec, "RTTICompound");
	del_items(0x1338098, DELIT_SIMPLE, 8);
	apply_type(0x1338098, "RTTIBase[1]");
	set_name(0x1338098, "ExternalAnimationSoundEvent::sBases");
	del_items(0x13380a0, DELIT_SIMPLE, 28);
	apply_type(0x13380a0, "RTTIAttr[1]");
	set_name(0x13380a0, "ExternalAnimationSoundEvent::sAttrs");

	// ExtraAmmoSettings
	set_name(0x136be48, "RTTI_ExtraAmmoSettings");
	apply_type(0x136be48, "RTTICompound");
	del_items(0x136ed0c, DELIT_SIMPLE, 84);
	apply_type(0x136ed0c, "RTTIAttr[3]");
	set_name(0x136ed0c, "ExtraAmmoSettings::sAttrs");

	// ExtraDamageSettings
	set_name(0x136bf54, "RTTI_ExtraDamageSettings");
	apply_type(0x136bf54, "RTTICompound");
	del_items(0x136ed84, DELIT_SIMPLE, 56);
	apply_type(0x136ed84, "RTTIAttr[2]");
	set_name(0x136ed84, "ExtraDamageSettings::sAttrs");

	// FArc
	set_name(0x1334cd0, "RTTI_FArc");
	apply_type(0x1334cd0, "RTTICompound");
	del_items(0x1335568, DELIT_SIMPLE, 56);
	apply_type(0x1335568, "RTTIAttr[2]");
	set_name(0x1335568, "FArc::sAttrs");

	// FOrientation
	set_name(0x1334d24, "RTTI_FOrientation");
	apply_type(0x1334d24, "RTTICompound");
	del_items(0x133554c, DELIT_SIMPLE, 28);
	apply_type(0x133554c, "RTTIAttr[1]");
	set_name(0x133554c, "FOrientation::sAttrs");

	// FPDestructibilityEffect
	set_name(0x13a107c, "RTTI_FPDestructibilityEffect");
	apply_type(0x13a107c, "RTTICompound");
	del_items(0x13a2554, DELIT_SIMPLE, 252);
	apply_type(0x13a2554, "RTTIAttr[9]");
	set_name(0x13a2554, "FPDestructibilityEffect::sAttrs");

	// FPMoverSuspension
	set_name(0x13a59b0, "RTTI_FPMoverSuspension");
	apply_type(0x13a59b0, "RTTICompound");
	del_items(0x13a5d80, DELIT_SIMPLE, 56);
	apply_type(0x13a5d80, "RTTIAttr[2]");
	set_name(0x13a5d80, "FPMoverSuspension::sAttrs");

	// FQuat
	set_name(0x13350d0, "RTTI_FQuat");
	apply_type(0x13350d0, "RTTICompound");
	del_items(0x13354a4, DELIT_SIMPLE, 112);
	apply_type(0x13354a4, "RTTIAttr[4]");
	set_name(0x13354a4, "FQuat::sAttrs");

	// FRGBAColor
	set_name(0x132b8a0, "RTTI_FRGBAColor");
	apply_type(0x132b8a0, "RTTICompound");
	del_items(0x132c110, DELIT_SIMPLE, 112);
	apply_type(0x132c110, "RTTIAttr[4]");
	set_name(0x132c110, "FRGBAColor::sAttrs");

	// FRGBColor
	set_name(0x132b8f4, "RTTI_FRGBColor");
	apply_type(0x132b8f4, "RTTICompound");
	del_items(0x132c180, DELIT_SIMPLE, 84);
	apply_type(0x132c180, "RTTIAttr[3]");
	set_name(0x132c180, "FRGBColor::sAttrs");

	// FRange
	set_name(0x13288f8, "RTTI_FRange");
	apply_type(0x13288f8, "RTTICompound");
	del_items(0x1328d54, DELIT_SIMPLE, 56);
	apply_type(0x1328d54, "RTTIAttr[2]");
	set_name(0x1328d54, "FRange::sAttrs");

	// FRect
	set_name(0x1334d78, "RTTI_FRect");
	apply_type(0x1334d78, "RTTICompound");
	del_items(0x13356bc, DELIT_SIMPLE, 112);
	apply_type(0x13356bc, "RTTIAttr[4]");
	set_name(0x13356bc, "FRect::sAttrs");

	// FSize
	set_name(0x1335220, "RTTI_FSize");
	apply_type(0x1335220, "RTTICompound");
	del_items(0x13355a4, DELIT_SIMPLE, 56);
	apply_type(0x13355a4, "RTTIAttr[2]");
	set_name(0x13355a4, "FSize::sAttrs");

	// FVector2
	set_name(0x1334ddc, "RTTI_FVector2");
	apply_type(0x1334ddc, "RTTICompound");
	del_items(0x1335514, DELIT_SIMPLE, 56);
	apply_type(0x1335514, "RTTIAttr[2]");
	set_name(0x1335514, "FVector2::sAttrs");

	// FVector3
	set_name(0x1334e40, "RTTI_FVector3");
	apply_type(0x1334e40, "RTTICompound");
	del_items(0x133531c, DELIT_SIMPLE, 84);
	apply_type(0x133531c, "RTTIAttr[3]");
	set_name(0x133531c, "FVector3::sAttrs");

	// FVector4
	set_name(0x1334e94, "RTTI_FVector4");
	apply_type(0x1334e94, "RTTICompound");
	del_items(0x1335370, DELIT_SIMPLE, 112);
	apply_type(0x1335370, "RTTIAttr[4]");
	set_name(0x1335370, "FVector4::sAttrs");

	// FaceTowardsEventInstance
	set_name(0x1394648, "RTTI_FaceTowardsEventInstance");
	apply_type(0x1394648, "RTTICompound");
	del_items(0x1396328, DELIT_SIMPLE, 8);
	apply_type(0x1396328, "RTTIBase[1]");
	set_name(0x1396328, "FaceTowardsEventInstance::sBases");

	// FaceTowardsEventResource
	set_name(0x13945f4, "RTTI_FaceTowardsEventResource");
	apply_type(0x13945f4, "RTTICompound");
	del_items(0x13962e8, DELIT_SIMPLE, 8);
	apply_type(0x13962e8, "RTTIBase[1]");
	set_name(0x13962e8, "FaceTowardsEventResource::sBases");
	del_items(0x13962f0, DELIT_SIMPLE, 56);
	apply_type(0x13962f0, "RTTIAttr[2]");
	set_name(0x13962f0, "FaceTowardsEventResource::sAttrs");

	// FacialAnimationEventInstance
	set_name(0x1394798, "RTTI_FacialAnimationEventInstance");
	apply_type(0x1394798, "RTTICompound");
	del_items(0x1396460, DELIT_SIMPLE, 8);
	apply_type(0x1396460, "RTTIBase[1]");
	set_name(0x1396460, "FacialAnimationEventInstance::sBases");

	// FacialAnimationEventResource
	set_name(0x1394744, "RTTI_FacialAnimationEventResource");
	apply_type(0x1394744, "RTTICompound");
	del_items(0x13963cc, DELIT_SIMPLE, 8);
	apply_type(0x13963cc, "RTTIBase[1]");
	set_name(0x13963cc, "FacialAnimationEventResource::sBases");
	del_items(0x13963d4, DELIT_SIMPLE, 140);
	apply_type(0x13963d4, "RTTIAttr[5]");
	set_name(0x13963d4, "FacialAnimationEventResource::sAttrs");

	// FacialAnimationResource
	set_name(0x13b6678, "RTTI_FacialAnimationResource");
	apply_type(0x13b6678, "RTTICompound");
	del_items(0x13b70b8, DELIT_SIMPLE, 8);
	apply_type(0x13b70b8, "RTTIBase[1]");
	set_name(0x13b70b8, "FacialAnimationResource::sBases");
	del_items(0x13b70c0, DELIT_SIMPLE, 56);
	apply_type(0x13b70c0, "RTTIAttr[2]");
	set_name(0x13b70c0, "FacialAnimationResource::sAttrs");

	// FacialExpressionAnimatorResource
	set_name(0x13b66dc, "RTTI_FacialExpressionAnimatorResource");
	apply_type(0x13b66dc, "RTTICompound");
	del_items(0x13b7170, DELIT_SIMPLE, 8);
	apply_type(0x13b7170, "RTTIBase[1]");
	set_name(0x13b7170, "FacialExpressionAnimatorResource::sBases");
	del_items(0x13b7178, DELIT_SIMPLE, 392);
	apply_type(0x13b7178, "RTTIAttr[14]");
	set_name(0x13b7178, "FacialExpressionAnimatorResource::sAttrs");
	del_items(0x13b7300, DELIT_SIMPLE, 12);
	apply_type(0x13b7300, "RTTIMessageHandler[1]");
	set_name(0x13b7300, "FacialExpressionAnimatorResource::sMessageHandlers");

	// FacialExpressionEventInstance
	set_name(0x13946f0, "RTTI_FacialExpressionEventInstance");
	apply_type(0x13946f0, "RTTICompound");
	del_items(0x13963c4, DELIT_SIMPLE, 8);
	apply_type(0x13963c4, "RTTIBase[1]");
	set_name(0x13963c4, "FacialExpressionEventInstance::sBases");

	// FacialExpressionEventResource
	set_name(0x139469c, "RTTI_FacialExpressionEventResource");
	apply_type(0x139469c, "RTTICompound");
	del_items(0x1396330, DELIT_SIMPLE, 8);
	apply_type(0x1396330, "RTTIBase[1]");
	set_name(0x1396330, "FacialExpressionEventResource::sBases");
	del_items(0x1396338, DELIT_SIMPLE, 140);
	apply_type(0x1396338, "RTTIAttr[5]");
	set_name(0x1396338, "FacialExpressionEventResource::sAttrs");

	// FacialExpressionLOD
	set_name(0x13b6740, "RTTI_FacialExpressionLOD");
	apply_type(0x13b6740, "RTTICompound");
	del_items(0x13b70f8, DELIT_SIMPLE, 8);
	apply_type(0x13b70f8, "RTTIBase[1]");
	set_name(0x13b70f8, "FacialExpressionLOD::sBases");
	del_items(0x13b7100, DELIT_SIMPLE, 112);
	apply_type(0x13b7100, "RTTIAttr[4]");
	set_name(0x13b7100, "FacialExpressionLOD::sAttrs");

	// FactionAction
	set_name(0x13761f8, "RTTI_FactionAction");
	apply_type(0x13761f8, "RTTICompound");
	del_items(0x1377594, DELIT_SIMPLE, 8);
	apply_type(0x1377594, "RTTIBase[1]");
	set_name(0x1377594, "FactionAction::sBases");
	del_items(0x137759c, DELIT_SIMPLE, 56);
	apply_type(0x137759c, "RTTIAttr[2]");
	set_name(0x137759c, "FactionAction::sAttrs");

	// FactionScore
	set_name(0x136d284, "RTTI_FactionScore");
	apply_type(0x136d284, "RTTICompound");
	del_items(0x1370030, DELIT_SIMPLE, 8);
	apply_type(0x1370030, "RTTIBase[1]");
	set_name(0x1370030, "FactionScore::sBases");
	del_items(0x1370038, DELIT_SIMPLE, 48);
	apply_type(0x1370038, "RTTIFunction[2]");
	set_name(0x1370038, "FactionScore::sFunctions");

	// FellThroughWorldManager
	set_name(0x136d908, "RTTI_FellThroughWorldManager");
	apply_type(0x136d908, "RTTICompound");
	del_items(0x136ec00, DELIT_SIMPLE, 8);
	apply_type(0x136ec00, "RTTIBase[1]");
	set_name(0x136ec00, "FellThroughWorldManager::sBases");

	// FellThroughWorldResource
	set_name(0x136d8b4, "RTTI_FellThroughWorldResource");
	apply_type(0x136d8b4, "RTTICompound");
	del_items(0x136ebdc, DELIT_SIMPLE, 8);
	apply_type(0x136ebdc, "RTTIBase[1]");
	set_name(0x136ebdc, "FellThroughWorldResource::sBases");
	del_items(0x136ebe4, DELIT_SIMPLE, 28);
	apply_type(0x136ebe4, "RTTIAttr[1]");
	set_name(0x136ebe4, "FellThroughWorldResource::sAttrs");

	// FireSystem
	set_name(0x139ee08, "RTTI_FireSystem");
	apply_type(0x139ee08, "RTTICompound");
	del_items(0x139fd4c, DELIT_SIMPLE, 8);
	apply_type(0x139fd4c, "RTTIBase[1]");
	set_name(0x139fd4c, "FireSystem::sBases");

	// FireWeaponEventInstance
	set_name(0x13948f8, "RTTI_FireWeaponEventInstance");
	apply_type(0x13948f8, "RTTICompound");
	del_items(0x13965b4, DELIT_SIMPLE, 8);
	apply_type(0x13965b4, "RTTIBase[1]");
	set_name(0x13965b4, "FireWeaponEventInstance::sBases");

	// FireWeaponEventResource
	set_name(0x13948a4, "RTTI_FireWeaponEventResource");
	apply_type(0x13948a4, "RTTICompound");
	del_items(0x13964b0, DELIT_SIMPLE, 8);
	apply_type(0x13964b0, "RTTIBase[1]");
	set_name(0x13964b0, "FireWeaponEventResource::sBases");
	del_items(0x13964b8, DELIT_SIMPLE, 252);
	apply_type(0x13964b8, "RTTIAttr[9]");
	set_name(0x13964b8, "FireWeaponEventResource::sAttrs");

	// FirstPersonAnimatedOverlayResource
	set_name(0x13b65a0, "RTTI_FirstPersonAnimatedOverlayResource");
	apply_type(0x13b65a0, "RTTICompound");
	del_items(0x13b6f60, DELIT_SIMPLE, 8);
	apply_type(0x13b6f60, "RTTIBase[1]");
	set_name(0x13b6f60, "FirstPersonAnimatedOverlayResource::sBases");
	del_items(0x13b6f68, DELIT_SIMPLE, 280);
	apply_type(0x13b6f68, "RTTIAttr[10]");
	set_name(0x13b6f68, "FirstPersonAnimatedOverlayResource::sAttrs");

	// FirstPersonAnimationResource
	set_name(0x13b653c, "RTTI_FirstPersonAnimationResource");
	apply_type(0x13b653c, "RTTICompound");
	del_items(0x13b6de0, DELIT_SIMPLE, 8);
	apply_type(0x13b6de0, "RTTIBase[1]");
	set_name(0x13b6de0, "FirstPersonAnimationResource::sBases");
	del_items(0x13b6de8, DELIT_SIMPLE, 364);
	apply_type(0x13b6de8, "RTTIAttr[13]");
	set_name(0x13b6de8, "FirstPersonAnimationResource::sAttrs");
	del_items(0x13b6f54, DELIT_SIMPLE, 12);
	apply_type(0x13b6f54, "RTTIMessageHandler[1]");
	set_name(0x13b6f54, "FirstPersonAnimationResource::sMessageHandlers");

	// FirstPersonCameraEntity
	set_name(0x13791a0, "RTTI_FirstPersonCameraEntity");
	apply_type(0x13791a0, "RTTICompound");
	del_items(0x1379f4c, DELIT_SIMPLE, 8);
	apply_type(0x1379f4c, "RTTIBase[1]");
	set_name(0x1379f4c, "FirstPersonCameraEntity::sBases");

	// FirstPersonCameraEntityRep
	set_name(0x137a1b8, "RTTI_FirstPersonCameraEntityRep");
	apply_type(0x137a1b8, "RTTICompound");
	del_items(0x137ac48, DELIT_SIMPLE, 8);
	apply_type(0x137ac48, "RTTIBase[1]");
	set_name(0x137ac48, "FirstPersonCameraEntityRep::sBases");

	// FirstPersonCameraEntityResource
	set_name(0x137a20c, "RTTI_FirstPersonCameraEntityResource");
	apply_type(0x137a20c, "RTTICompound");
	del_items(0x137ac40, DELIT_SIMPLE, 8);
	apply_type(0x137ac40, "RTTIBase[1]");
	set_name(0x137ac40, "FirstPersonCameraEntityResource::sBases");

	// FirstPersonDeathCameraEntity
	set_name(0x137a260, "RTTI_FirstPersonDeathCameraEntity");
	apply_type(0x137a260, "RTTICompound");
	del_items(0x137be90, DELIT_SIMPLE, 8);
	apply_type(0x137be90, "RTTIBase[1]");
	set_name(0x137be90, "FirstPersonDeathCameraEntity::sBases");

	// FirstPersonDeathCameraEntityRep
	set_name(0x137a2b4, "RTTI_FirstPersonDeathCameraEntityRep");
	apply_type(0x137a2b4, "RTTICompound");
	del_items(0x137be98, DELIT_SIMPLE, 8);
	apply_type(0x137be98, "RTTIBase[1]");
	set_name(0x137be98, "FirstPersonDeathCameraEntityRep::sBases");

	// FirstPersonDeathCameraEntityResource
	set_name(0x137a308, "RTTI_FirstPersonDeathCameraEntityResource");
	apply_type(0x137a308, "RTTICompound");
	del_items(0x137bbb0, DELIT_SIMPLE, 8);
	apply_type(0x137bbb0, "RTTIBase[1]");
	set_name(0x137bbb0, "FirstPersonDeathCameraEntityResource::sBases");
	del_items(0x137bbb8, DELIT_SIMPLE, 728);
	apply_type(0x137bbb8, "RTTIAttr[26]");
	set_name(0x137bbb8, "FirstPersonDeathCameraEntityResource::sAttrs");

	// FirstPersonHitEffectsResource
	set_name(0x1385a00, "RTTI_FirstPersonHitEffectsResource");
	apply_type(0x1385a00, "RTTICompound");
	del_items(0x1385e84, DELIT_SIMPLE, 8);
	apply_type(0x1385e84, "RTTIBase[1]");
	set_name(0x1385e84, "FirstPersonHitEffectsResource::sBases");
	del_items(0x1385e8c, DELIT_SIMPLE, 224);
	apply_type(0x1385e8c, "RTTIAttr[8]");
	set_name(0x1385e8c, "FirstPersonHitEffectsResource::sAttrs");

	// FirstPersonOverlayComponent
	set_name(0x1389c90, "RTTI_FirstPersonOverlayComponent");
	apply_type(0x1389c90, "RTTICompound");
	del_items(0x138b514, DELIT_SIMPLE, 8);
	apply_type(0x138b514, "RTTIBase[1]");
	set_name(0x138b514, "FirstPersonOverlayComponent::sBases");

	// FirstPersonOverlayComponentRep
	set_name(0x1389ce4, "RTTI_FirstPersonOverlayComponentRep");
	apply_type(0x1389ce4, "RTTICompound");
	del_items(0x138c958, DELIT_SIMPLE, 8);
	apply_type(0x138c958, "RTTIBase[1]");
	set_name(0x138c958, "FirstPersonOverlayComponentRep::sBases");

	// FirstPersonOverlayComponentResource
	set_name(0x1389d38, "RTTI_FirstPersonOverlayComponentResource");
	apply_type(0x1389d38, "RTTICompound");
	del_items(0x138b4d0, DELIT_SIMPLE, 8);
	apply_type(0x138b4d0, "RTTIBase[1]");
	set_name(0x138b4d0, "FirstPersonOverlayComponentResource::sBases");
	del_items(0x138b4d8, DELIT_SIMPLE, 56);
	apply_type(0x138b4d8, "RTTIAttr[2]");
	set_name(0x138b4d8, "FirstPersonOverlayComponentResource::sAttrs");

	// FlameThrowerEjector
	set_name(0x139ee5c, "RTTI_FlameThrowerEjector");
	apply_type(0x139ee5c, "RTTICompound");
	del_items(0x139fd54, DELIT_SIMPLE, 8);
	apply_type(0x139fd54, "RTTIBase[1]");
	set_name(0x139fd54, "FlameThrowerEjector::sBases");

	// FlameThrowerEjectorRep
	set_name(0x139eeb0, "RTTI_FlameThrowerEjectorRep");
	apply_type(0x139eeb0, "RTTICompound");
	del_items(0x139fd60, DELIT_SIMPLE, 8);
	apply_type(0x139fd60, "RTTIBase[1]");
	set_name(0x139fd60, "FlameThrowerEjectorRep::sBases");

	// FlameThrowerEjectorResource
	set_name(0x139ef58, "RTTI_FlameThrowerEjectorResource");
	apply_type(0x139ef58, "RTTICompound");
	del_items(0x139fdbc, DELIT_SIMPLE, 8);
	apply_type(0x139fdbc, "RTTIBase[1]");
	set_name(0x139fdbc, "FlameThrowerEjectorResource::sBases");
	del_items(0x139fdc4, DELIT_SIMPLE, 980);
	apply_type(0x139fdc4, "RTTIAttr[35]");
	set_name(0x139fdc4, "FlameThrowerEjectorResource::sAttrs");

	// FloatPerDifficulty
	set_name(0x1367bd4, "RTTI_FloatPerDifficulty");
	apply_type(0x1367bd4, "RTTICompound");
	del_items(0x136a350, DELIT_SIMPLE, 56);
	apply_type(0x136a350, "RTTIAttr[2]");
	set_name(0x136a350, "FloatPerDifficulty::sAttrs");

	// FlyoverCameraEntity
	set_name(0x137a35c, "RTTI_FlyoverCameraEntity");
	apply_type(0x137a35c, "RTTICompound");
	del_items(0x137bfe8, DELIT_SIMPLE, 8);
	apply_type(0x137bfe8, "RTTIBase[1]");
	set_name(0x137bfe8, "FlyoverCameraEntity::sBases");

	// FlyoverCameraEntityRep
	set_name(0x137a3b0, "RTTI_FlyoverCameraEntityRep");
	apply_type(0x137a3b0, "RTTICompound");
	del_items(0x137bff0, DELIT_SIMPLE, 8);
	apply_type(0x137bff0, "RTTIBase[1]");
	set_name(0x137bff0, "FlyoverCameraEntityRep::sBases");

	// FlyoverCameraEntityResource
	set_name(0x137a404, "RTTI_FlyoverCameraEntityResource");
	apply_type(0x137a404, "RTTICompound");
	del_items(0x137beac, DELIT_SIMPLE, 8);
	apply_type(0x137beac, "RTTIBase[1]");
	set_name(0x137beac, "FlyoverCameraEntityResource::sBases");
	del_items(0x137beb4, DELIT_SIMPLE, 308);
	apply_type(0x137beb4, "RTTIAttr[11]");
	set_name(0x137beb4, "FlyoverCameraEntityResource::sAttrs");

	// FlyoverDeathCameraEntity
	set_name(0x137a458, "RTTI_FlyoverDeathCameraEntity");
	apply_type(0x137a458, "RTTICompound");
	del_items(0x137c168, DELIT_SIMPLE, 8);
	apply_type(0x137c168, "RTTIBase[1]");
	set_name(0x137c168, "FlyoverDeathCameraEntity::sBases");

	// FlyoverDeathCameraEntityRep
	set_name(0x137a4ac, "RTTI_FlyoverDeathCameraEntityRep");
	apply_type(0x137a4ac, "RTTICompound");
	del_items(0x137c170, DELIT_SIMPLE, 8);
	apply_type(0x137c170, "RTTIBase[1]");
	set_name(0x137c170, "FlyoverDeathCameraEntityRep::sBases");

	// FlyoverDeathCameraEntityResource
	set_name(0x137a500, "RTTI_FlyoverDeathCameraEntityResource");
	apply_type(0x137a500, "RTTICompound");
	del_items(0x137c004, DELIT_SIMPLE, 8);
	apply_type(0x137c004, "RTTIBase[1]");
	set_name(0x137c004, "FlyoverDeathCameraEntityResource::sBases");
	del_items(0x137c00c, DELIT_SIMPLE, 336);
	apply_type(0x137c00c, "RTTIAttr[12]");
	set_name(0x137c00c, "FlyoverDeathCameraEntityResource::sAttrs");
	del_items(0x137c15c, DELIT_SIMPLE, 12);
	apply_type(0x137c15c, "RTTIMessageHandler[1]");
	set_name(0x137c15c, "FlyoverDeathCameraEntityResource::sMessageHandlers");

	// FogSettings
	set_name(0x134820c, "RTTI_FogSettings");
	apply_type(0x134820c, "RTTICompound");
	del_items(0x1348a44, DELIT_SIMPLE, 112);
	apply_type(0x1348a44, "RTTIAttr[4]");
	set_name(0x1348a44, "FogSettings::sAttrs");

	// FollowCameraEntity
	set_name(0x137a554, "RTTI_FollowCameraEntity");
	apply_type(0x137a554, "RTTICompound");
	del_items(0x137c250, DELIT_SIMPLE, 8);
	apply_type(0x137c250, "RTTIBase[1]");
	set_name(0x137c250, "FollowCameraEntity::sBases");

	// FollowCameraEntityResource
	set_name(0x137a5a8, "RTTI_FollowCameraEntityResource");
	apply_type(0x137a5a8, "RTTICompound");
	del_items(0x137c184, DELIT_SIMPLE, 8);
	apply_type(0x137c184, "RTTIBase[1]");
	set_name(0x137c184, "FollowCameraEntityResource::sBases");
	del_items(0x137c18c, DELIT_SIMPLE, 196);
	apply_type(0x137c18c, "RTTIAttr[7]");
	set_name(0x137c18c, "FollowCameraEntityResource::sAttrs");

	// FollowPathMover
	set_name(0x13a594c, "RTTI_FollowPathMover");
	apply_type(0x13a594c, "RTTICompound");
	del_items(0x13a5f9c, DELIT_SIMPLE, 8);
	apply_type(0x13a5f9c, "RTTIBase[1]");
	set_name(0x13a5f9c, "FollowPathMover::sBases");
	del_items(0x13a5fa4, DELIT_SIMPLE, 480);
	apply_type(0x13a5fa4, "RTTIFunction[20]");
	set_name(0x13a5fa4, "FollowPathMover::sFunctions");

	// FollowPathMoverResource
	set_name(0x13a5a04, "RTTI_FollowPathMoverResource");
	apply_type(0x13a5a04, "RTTICompound");
	del_items(0x13a5db8, DELIT_SIMPLE, 8);
	apply_type(0x13a5db8, "RTTIBase[1]");
	set_name(0x13a5db8, "FollowPathMoverResource::sBases");
	del_items(0x13a5dc0, DELIT_SIMPLE, 476);
	apply_type(0x13a5dc0, "RTTIAttr[17]");
	set_name(0x13a5dc0, "FollowPathMoverResource::sAttrs");

	// FontCharGlyphInfo
	set_name(0x1331508, "RTTI_FontCharGlyphInfo");
	apply_type(0x1331508, "RTTICompound");
	del_items(0x1331834, DELIT_SIMPLE, 8);
	apply_type(0x1331834, "RTTIBase[1]");
	set_name(0x1331834, "FontCharGlyphInfo::sBases");
	del_items(0x133183c, DELIT_SIMPLE, 28);
	apply_type(0x133183c, "RTTIAttr[1]");
	set_name(0x133183c, "FontCharGlyphInfo::sAttrs");

	// FontCharInfo
	set_name(0x13314a4, "RTTI_FontCharInfo");
	apply_type(0x13314a4, "RTTICompound");
	del_items(0x13317fc, DELIT_SIMPLE, 56);
	apply_type(0x13317fc, "RTTIAttr[2]");
	set_name(0x13317fc, "FontCharInfo::sAttrs");

	// FontGlyphMetrics
	set_name(0x1331450, "RTTI_FontGlyphMetrics");
	apply_type(0x1331450, "RTTICompound");
	del_items(0x13317c4, DELIT_SIMPLE, 56);
	apply_type(0x13317c4, "RTTIAttr[2]");
	set_name(0x13317c4, "FontGlyphMetrics::sAttrs");

	// FontKerningPair
	set_name(0x133156c, "RTTI_FontKerningPair");
	apply_type(0x133156c, "RTTICompound");
	del_items(0x1331858, DELIT_SIMPLE, 84);
	apply_type(0x1331858, "RTTIAttr[3]");
	set_name(0x1331858, "FontKerningPair::sAttrs");

	// FontResource
	set_name(0x1345068, "RTTI_FontResource");
	apply_type(0x1345068, "RTTICompound");
	del_items(0x1346878, DELIT_SIMPLE, 8);
	apply_type(0x1346878, "RTTIBase[1]");
	set_name(0x1346878, "FontResource::sBases");
	del_items(0x1346880, DELIT_SIMPLE, 28);
	apply_type(0x1346880, "RTTIAttr[1]");
	set_name(0x1346880, "FontResource::sAttrs");

	// FontResourceData
	set_name(0x13315c0, "RTTI_FontResourceData");
	apply_type(0x13315c0, "RTTICompound");
	del_items(0x13318ac, DELIT_SIMPLE, 112);
	apply_type(0x13318ac, "RTTIAttr[4]");
	set_name(0x13318ac, "FontResourceData::sAttrs");

	// FontTextMetrics
	set_name(0x13313fc, "RTTI_FontTextMetrics");
	apply_type(0x13313fc, "RTTICompound");
	del_items(0x1331754, DELIT_SIMPLE, 112);
	apply_type(0x1331754, "RTTIAttr[4]");
	set_name(0x1331754, "FontTextMetrics::sAttrs");

	// FormTag
	set_name(0x133cab4, "RTTI_FormTag");
	apply_type(0x133cab4, "RTTICompound");
	del_items(0x133f56c, DELIT_SIMPLE, 8);
	apply_type(0x133f56c, "RTTIBase[1]");
	set_name(0x133f56c, "FormTag::sBases");
	del_items(0x133f574, DELIT_SIMPLE, 24);
	apply_type(0x133f574, "RTTIFunction[1]");
	set_name(0x133f574, "FormTag::sFunctions");

	// ForwardRenderingFogSettings
	set_name(0x1348260, "RTTI_ForwardRenderingFogSettings");
	apply_type(0x1348260, "RTTICompound");
	del_items(0x1348ab4, DELIT_SIMPLE, 168);
	apply_type(0x1348ab4, "RTTIAttr[6]");
	set_name(0x1348ab4, "ForwardRenderingFogSettings::sAttrs");

	// Frustum
	set_name(0x132afb8, "RTTI_Frustum");
	apply_type(0x132afb8, "RTTICompound");
	del_items(0x132b3b4, DELIT_SIMPLE, 1008);
	apply_type(0x132b3b4, "RTTIAttr[36]");
	set_name(0x132b3b4, "Frustum::sAttrs");

	// GainTemporaryModifier
	set_name(0x1344810, "RTTI_GainTemporaryModifier");
	apply_type(0x1344810, "RTTICompound");
	del_items(0x1344cb0, DELIT_SIMPLE, 84);
	apply_type(0x1344cb0, "RTTIAttr[3]");
	set_name(0x1344cb0, "GainTemporaryModifier::sAttrs");

	// GameEventAction
	set_name(0x1376cdc, "RTTI_GameEventAction");
	apply_type(0x1376cdc, "RTTICompound");
	del_items(0x13782dc, DELIT_SIMPLE, 8);
	apply_type(0x13782dc, "RTTIBase[1]");
	set_name(0x13782dc, "GameEventAction::sBases");
	del_items(0x13782e4, DELIT_SIMPLE, 56);
	apply_type(0x13782e4, "RTTIAttr[2]");
	set_name(0x13782e4, "GameEventAction::sAttrs");

	// GameHeadset
	set_name(0x136814c, "RTTI_GameHeadset");
	apply_type(0x136814c, "RTTICompound");
	del_items(0x136a318, DELIT_SIMPLE, 8);
	apply_type(0x136a318, "RTTIBase[1]");
	set_name(0x136a318, "GameHeadset::sBases");
	del_items(0x136a320, DELIT_SIMPLE, 48);
	apply_type(0x136a320, "RTTIFunction[2]");
	set_name(0x136a320, "GameHeadset::sFunctions");

	// GameInputJoystickResource
	set_name(0x1367ec0, "RTTI_GameInputJoystickResource");
	apply_type(0x1367ec0, "RTTICompound");
	del_items(0x136a514, DELIT_SIMPLE, 8);
	apply_type(0x136a514, "RTTIBase[1]");
	set_name(0x136a514, "GameInputJoystickResource::sBases");
	del_items(0x136a51c, DELIT_SIMPLE, 196);
	apply_type(0x136a51c, "RTTIAttr[7]");
	set_name(0x136a51c, "GameInputJoystickResource::sAttrs");

	// GameInputMotionControllerResource
	set_name(0x1367f14, "RTTI_GameInputMotionControllerResource");
	apply_type(0x1367f14, "RTTICompound");
	del_items(0x136a5e8, DELIT_SIMPLE, 8);
	apply_type(0x136a5e8, "RTTIBase[1]");
	set_name(0x136a5e8, "GameInputMotionControllerResource::sBases");
	del_items(0x136a5f0, DELIT_SIMPLE, 924);
	apply_type(0x136a5f0, "RTTIAttr[33]");
	set_name(0x136a5f0, "GameInputMotionControllerResource::sAttrs");

	// GameModule
	set_name(0x13a6d04, "RTTI_GameModule");
	apply_type(0x13a6d04, "RTTICompound");
	del_items(0x13a7440, DELIT_SIMPLE, 8);
	apply_type(0x13a7440, "RTTIBase[1]");
	set_name(0x13a7440, "GameModule::sBases");

	// GameRoundSettings
	set_name(0x13681f4, "RTTI_GameRoundSettings");
	apply_type(0x13681f4, "RTTICompound");
	del_items(0x1368620, DELIT_SIMPLE, 8);
	apply_type(0x1368620, "RTTIBase[1]");
	set_name(0x1368620, "GameRoundSettings::sBases");
	del_items(0x1368628, DELIT_SIMPLE, 48);
	apply_type(0x1368628, "RTTIFunction[2]");
	set_name(0x1368628, "GameRoundSettings::sFunctions");

	// GameScript
	set_name(0x13b3820, "RTTI_GameScript");
	apply_type(0x13b3820, "RTTICompound");
	del_items(0x13b576c, DELIT_SIMPLE, 8);
	apply_type(0x13b576c, "RTTIBase[1]");
	set_name(0x13b576c, "GameScript::sBases");

	// GameSettingsResource
	set_name(0x1368278, "RTTI_GameSettingsResource");
	apply_type(0x1368278, "RTTICompound");
	del_items(0x136ab94, DELIT_SIMPLE, 8);
	apply_type(0x136ab94, "RTTIBase[1]");
	set_name(0x136ab94, "GameSettingsResource::sBases");
	del_items(0x136ab9c, DELIT_SIMPLE, 3164);
	apply_type(0x136ab9c, "RTTIAttr[113]");
	set_name(0x136ab9c, "GameSettingsResource::sAttrs");

	// GameState
	set_name(0x13682cc, "RTTI_GameState");
	apply_type(0x13682cc, "RTTICompound");
	del_items(0x1368658, DELIT_SIMPLE, 8);
	apply_type(0x1368658, "RTTIBase[1]");
	set_name(0x1368658, "GameState::sBases");
	del_items(0x1368660, DELIT_SIMPLE, 2688);
	apply_type(0x1368660, "RTTIFunction[112]");
	set_name(0x1368660, "GameState::sFunctions");

	// GameView
	set_name(0x1363470, "RTTI_GameView");
	apply_type(0x1363470, "RTTICompound");
	del_items(0x1364a00, DELIT_SIMPLE, 8);
	apply_type(0x1364a00, "RTTIBase[1]");
	set_name(0x1364a00, "GameView::sBases");

	// GameViewGame
	set_name(0x13a9b10, "RTTI_GameViewGame");
	apply_type(0x13a9b10, "RTTICompound");
	del_items(0x13aad78, DELIT_SIMPLE, 8);
	apply_type(0x13aad78, "RTTIBase[1]");
	set_name(0x13aad78, "GameViewGame::sBases");

	// GameViewResource
	set_name(0x13a9b64, "RTTI_GameViewResource");
	apply_type(0x13a9b64, "RTTICompound");
	del_items(0x13aad80, DELIT_SIMPLE, 8);
	apply_type(0x13aad80, "RTTIBase[1]");
	set_name(0x13aad80, "GameViewResource::sBases");
	del_items(0x13aad88, DELIT_SIMPLE, 1372);
	apply_type(0x13aad88, "RTTIAttr[49]");
	set_name(0x13aad88, "GameViewResource::sAttrs");
	del_items(0x13ab2e4, DELIT_SIMPLE, 12);
	apply_type(0x13ab2e4, "RTTIMessageHandler[1]");
	set_name(0x13ab2e4, "GameViewResource::sMessageHandlers");

	// GeometryObject
	set_name(0x133b4ec, "RTTI_GeometryObject");
	apply_type(0x133b4ec, "RTTICompound");
	del_items(0x133bbc4, DELIT_SIMPLE, 16);
	apply_type(0x133bbc4, "RTTIBase[2]");
	set_name(0x133bbc4, "GeometryObject::sBases");
	del_items(0x133bbd4, DELIT_SIMPLE, 12);
	apply_type(0x133bbd4, "RTTIMessageHandler[1]");
	set_name(0x133bbd4, "GeometryObject::sMessageHandlers");

	// Gesture
	set_name(0x139b2c8, "RTTI_Gesture");
	apply_type(0x139b2c8, "RTTICompound");
	del_items(0x139c0fc, DELIT_SIMPLE, 308);
	apply_type(0x139c0fc, "RTTIAttr[11]");
	set_name(0x139c0fc, "Gesture::sAttrs");

	// GestureAction
	set_name(0x136849c, "RTTI_GestureAction");
	apply_type(0x136849c, "RTTICompound");
	del_items(0x136b96c, DELIT_SIMPLE, 8);
	apply_type(0x136b96c, "RTTIBase[1]");
	set_name(0x136b96c, "GestureAction::sBases");

	// GestureActionFunction
	set_name(0x1368544, "RTTI_GestureActionFunction");
	apply_type(0x1368544, "RTTICompound");
	del_items(0x136b9ec, DELIT_SIMPLE, 8);
	apply_type(0x136b9ec, "RTTIBase[1]");
	set_name(0x136b9ec, "GestureActionFunction::sBases");
	del_items(0x136b9f4, DELIT_SIMPLE, 56);
	apply_type(0x136b9f4, "RTTIAttr[2]");
	set_name(0x136b9f4, "GestureActionFunction::sAttrs");

	// GestureActionMotion
	set_name(0x13684f0, "RTTI_GestureActionMotion");
	apply_type(0x13684f0, "RTTICompound");
	del_items(0x136b974, DELIT_SIMPLE, 8);
	apply_type(0x136b974, "RTTIBase[1]");
	set_name(0x136b974, "GestureActionMotion::sBases");
	del_items(0x136b97c, DELIT_SIMPLE, 112);
	apply_type(0x136b97c, "RTTIAttr[4]");
	set_name(0x136b97c, "GestureActionMotion::sAttrs");

	// GestureCollectionResource
	set_name(0x139b32c, "RTTI_GestureCollectionResource");
	apply_type(0x139b32c, "RTTICompound");
	del_items(0x139c230, DELIT_SIMPLE, 8);
	apply_type(0x139c230, "RTTIBase[1]");
	set_name(0x139c230, "GestureCollectionResource::sBases");
	del_items(0x139c238, DELIT_SIMPLE, 56);
	apply_type(0x139c238, "RTTIAttr[2]");
	set_name(0x139c238, "GestureCollectionResource::sAttrs");

	// GestureEventInstance
	set_name(0x1394a04, "RTTI_GestureEventInstance");
	apply_type(0x1394a04, "RTTICompound");
	del_items(0x1396688, DELIT_SIMPLE, 8);
	apply_type(0x1396688, "RTTIBase[1]");
	set_name(0x1396688, "GestureEventInstance::sBases");

	// GestureEventResource
	set_name(0x13949b0, "RTTI_GestureEventResource");
	apply_type(0x13949b0, "RTTICompound");
	del_items(0x13965f4, DELIT_SIMPLE, 8);
	apply_type(0x13965f4, "RTTIBase[1]");
	set_name(0x13965f4, "GestureEventResource::sBases");
	del_items(0x13965fc, DELIT_SIMPLE, 140);
	apply_type(0x13965fc, "RTTIAttr[5]");
	set_name(0x13965fc, "GestureEventResource::sAttrs");

	// GestureNode
	set_name(0x1368428, "RTTI_GestureNode");
	apply_type(0x1368428, "RTTICompound");
	del_items(0x136b92c, DELIT_SIMPLE, 8);
	apply_type(0x136b92c, "RTTIBase[1]");
	set_name(0x136b92c, "GestureNode::sBases");
	del_items(0x136b934, DELIT_SIMPLE, 56);
	apply_type(0x136b934, "RTTIAttr[2]");
	set_name(0x136b934, "GestureNode::sAttrs");

	// GestureResource
	set_name(0x13683c4, "RTTI_GestureResource");
	apply_type(0x13683c4, "RTTICompound");
	del_items(0x136b860, DELIT_SIMPLE, 8);
	apply_type(0x136b860, "RTTIBase[1]");
	set_name(0x136b860, "GestureResource::sBases");
	del_items(0x136b868, DELIT_SIMPLE, 196);
	apply_type(0x136b868, "RTTIAttr[7]");
	set_name(0x136b868, "GestureResource::sAttrs");

	// GestureUsageMask
	set_name(0x139b254, "RTTI_GestureUsageMask");
	apply_type(0x139b254, "RTTICompound");
	del_items(0x139c0bc, DELIT_SIMPLE, 28);
	apply_type(0x139c0bc, "RTTIAttr[1]");
	set_name(0x139c0bc, "GestureUsageMask::sAttrs");

	// GlobalDamageModifier
	set_name(0x136c668, "RTTI_GlobalDamageModifier");
	apply_type(0x136c668, "RTTICompound");
	del_items(0x136f6d0, DELIT_SIMPLE, 8);
	apply_type(0x136f6d0, "RTTIBase[1]");
	set_name(0x136f6d0, "GlobalDamageModifier::sBases");
	del_items(0x136f6d8, DELIT_SIMPLE, 112);
	apply_type(0x136f6d8, "RTTIAttr[4]");
	set_name(0x136f6d8, "GlobalDamageModifier::sAttrs");

	// GlyphContour
	set_name(0x1331354, "RTTI_GlyphContour");
	apply_type(0x1331354, "RTTICompound");
	del_items(0x13316e4, DELIT_SIMPLE, 56);
	apply_type(0x13316e4, "RTTIAttr[2]");
	set_name(0x13316e4, "GlyphContour::sAttrs");

	// GlyphContourCmd
	set_name(0x13312f0, "RTTI_GlyphContourCmd");
	apply_type(0x13312f0, "RTTICompound");
	del_items(0x13316c8, DELIT_SIMPLE, 28);
	apply_type(0x13316c8, "RTTIAttr[1]");
	set_name(0x13316c8, "GlyphContourCmd::sAttrs");

	// GlyphContourList
	set_name(0x13313a8, "RTTI_GlyphContourList");
	apply_type(0x13313a8, "RTTICompound");
	del_items(0x133171c, DELIT_SIMPLE, 56);
	apply_type(0x133171c, "RTTIAttr[2]");
	set_name(0x133171c, "GlyphContourList::sAttrs");

	// Gradient
	set_name(0x135c494, "RTTI_Gradient");
	apply_type(0x135c494, "RTTICompound");
	del_items(0x135c898, DELIT_SIMPLE, 8);
	apply_type(0x135c898, "RTTIBase[1]");
	set_name(0x135c898, "Gradient::sBases");
	del_items(0x135c8a0, DELIT_SIMPLE, 252);
	apply_type(0x135c8a0, "RTTIAttr[9]");
	set_name(0x135c8a0, "Gradient::sAttrs");

	// GrainSettingsResource
	set_name(0x1348068, "RTTI_GrainSettingsResource");
	apply_type(0x1348068, "RTTICompound");
	del_items(0x1348db8, DELIT_SIMPLE, 8);
	apply_type(0x1348db8, "RTTIBase[1]");
	set_name(0x1348db8, "GrainSettingsResource::sBases");
	del_items(0x1348dc0, DELIT_SIMPLE, 84);
	apply_type(0x1348dc0, "RTTIAttr[3]");
	set_name(0x1348dc0, "GrainSettingsResource::sAttrs");

	// GrapplingHook
	set_name(0x13a01a0, "RTTI_GrapplingHook");
	apply_type(0x13a01a0, "RTTICompound");
	del_items(0x13a1368, DELIT_SIMPLE, 8);
	apply_type(0x13a1368, "RTTIBase[1]");
	set_name(0x13a1368, "GrapplingHook::sBases");

	// GrapplingHookEjector
	set_name(0x13a01f4, "RTTI_GrapplingHookEjector");
	apply_type(0x13a01f4, "RTTICompound");
	del_items(0x13a14e0, DELIT_SIMPLE, 8);
	apply_type(0x13a14e0, "RTTIBase[1]");
	set_name(0x13a14e0, "GrapplingHookEjector::sBases");

	// GrapplingHookEjectorResource
	set_name(0x13a0248, "RTTI_GrapplingHookEjectorResource");
	apply_type(0x13a0248, "RTTICompound");
	del_items(0x13a14d4, DELIT_SIMPLE, 8);
	apply_type(0x13a14d4, "RTTIBase[1]");
	set_name(0x13a14d4, "GrapplingHookEjectorResource::sBases");

	// GrapplingHookRep
	set_name(0x13a029c, "RTTI_GrapplingHookRep");
	apply_type(0x13a029c, "RTTICompound");
	del_items(0x13a14ec, DELIT_SIMPLE, 8);
	apply_type(0x13a14ec, "RTTIBase[1]");
	set_name(0x13a14ec, "GrapplingHookRep::sBases");

	// GrapplingHookResource
	set_name(0x13a02f0, "RTTI_GrapplingHookResource");
	apply_type(0x13a02f0, "RTTICompound");
	del_items(0x13a122c, DELIT_SIMPLE, 8);
	apply_type(0x13a122c, "RTTIBase[1]");
	set_name(0x13a122c, "GrapplingHookResource::sBases");
	del_items(0x13a1234, DELIT_SIMPLE, 308);
	apply_type(0x13a1234, "RTTIAttr[11]");
	set_name(0x13a1234, "GrapplingHookResource::sAttrs");

	// Grenade
	set_name(0x13a0344, "RTTI_Grenade");
	apply_type(0x13a0344, "RTTICompound");
	del_items(0x13a1594, DELIT_SIMPLE, 8);
	apply_type(0x13a1594, "RTTIBase[1]");
	set_name(0x13a1594, "Grenade::sBases");

	// GrenadeEjectorResource
	set_name(0x13a040c, "RTTI_GrenadeEjectorResource");
	apply_type(0x13a040c, "RTTICompound");
	del_items(0x13a1370, DELIT_SIMPLE, 8);
	apply_type(0x13a1370, "RTTIBase[1]");
	set_name(0x13a1370, "GrenadeEjectorResource::sBases");
	del_items(0x13a1378, DELIT_SIMPLE, 308);
	apply_type(0x13a1378, "RTTIAttr[11]");
	set_name(0x13a1378, "GrenadeEjectorResource::sAttrs");
	del_items(0x13a14ac, DELIT_SIMPLE, 12);
	apply_type(0x13a14ac, "RTTIMessageHandler[1]");
	set_name(0x13a14ac, "GrenadeEjectorResource::sMessageHandlers");

	// GrenadeRep
	set_name(0x13a0398, "RTTI_GrenadeRep");
	apply_type(0x13a0398, "RTTICompound");
	del_items(0x13a159c, DELIT_SIMPLE, 8);
	apply_type(0x13a159c, "RTTIBase[1]");
	set_name(0x13a159c, "GrenadeRep::sBases");

	// GrenadeResource
	set_name(0x13a0460, "RTTI_GrenadeResource");
	apply_type(0x13a0460, "RTTICompound");
	del_items(0x13a1500, DELIT_SIMPLE, 8);
	apply_type(0x13a1500, "RTTIBase[1]");
	set_name(0x13a1500, "GrenadeResource::sBases");
	del_items(0x13a1508, DELIT_SIMPLE, 140);
	apply_type(0x13a1508, "RTTIAttr[5]");
	set_name(0x13a1508, "GrenadeResource::sAttrs");

	// GridColTag
	set_name(0x133cf5c, "RTTI_GridColTag");
	apply_type(0x133cf5c, "RTTICompound");
	del_items(0x133f64c, DELIT_SIMPLE, 8);
	apply_type(0x133f64c, "RTTIBase[1]");
	set_name(0x133f64c, "GridColTag::sBases");

	// GridColWidget
	set_name(0x133d8ac, "RTTI_GridColWidget");
	apply_type(0x133d8ac, "RTTICompound");
	del_items(0x133fb3c, DELIT_SIMPLE, 8);
	apply_type(0x133fb3c, "RTTIBase[1]");
	set_name(0x133fb3c, "GridColWidget::sBases");

	// GridRowTag
	set_name(0x133cf08, "RTTI_GridRowTag");
	apply_type(0x133cf08, "RTTICompound");
	del_items(0x133f644, DELIT_SIMPLE, 8);
	apply_type(0x133f644, "RTTIBase[1]");
	set_name(0x133f644, "GridRowTag::sBases");

	// GridRowWidget
	set_name(0x133d858, "RTTI_GridRowWidget");
	apply_type(0x133d858, "RTTICompound");
	del_items(0x133fb34, DELIT_SIMPLE, 8);
	apply_type(0x133fb34, "RTTIBase[1]");
	set_name(0x133fb34, "GridRowWidget::sBases");

	// GridTag
	set_name(0x133ceb4, "RTTI_GridTag");
	apply_type(0x133ceb4, "RTTICompound");
	del_items(0x133f5dc, DELIT_SIMPLE, 8);
	apply_type(0x133f5dc, "RTTIBase[1]");
	set_name(0x133f5dc, "GridTag::sBases");
	del_items(0x133f5e4, DELIT_SIMPLE, 96);
	apply_type(0x133f5e4, "RTTIFunction[4]");
	set_name(0x133f5e4, "GridTag::sFunctions");

	// GridWidget
	set_name(0x133d7b0, "RTTI_GridWidget");
	apply_type(0x133d7b0, "RTTICompound");
	del_items(0x133fad0, DELIT_SIMPLE, 8);
	apply_type(0x133fad0, "RTTIBase[1]");
	set_name(0x133fad0, "GridWidget::sBases");

	// GridWidgetResource
	set_name(0x133d804, "RTTI_GridWidgetResource");
	apply_type(0x133d804, "RTTICompound");
	del_items(0x133fad8, DELIT_SIMPLE, 8);
	apply_type(0x133fad8, "RTTIBase[1]");
	set_name(0x133fad8, "GridWidgetResource::sBases");
	del_items(0x133fae0, DELIT_SIMPLE, 84);
	apply_type(0x133fae0, "RTTIAttr[3]");
	set_name(0x133fae0, "GridWidgetResource::sAttrs");

	// GroupSubmixRoutingResource
	set_name(0x1359d58, "RTTI_GroupSubmixRoutingResource");
	apply_type(0x1359d58, "RTTICompound");
	del_items(0x135ae4c, DELIT_SIMPLE, 8);
	apply_type(0x135ae4c, "RTTIBase[1]");
	set_name(0x135ae4c, "GroupSubmixRoutingResource::sBases");
	del_items(0x135ae54, DELIT_SIMPLE, 84);
	apply_type(0x135ae54, "RTTIAttr[3]");
	set_name(0x135ae54, "GroupSubmixRoutingResource::sAttrs");

	// GroupedLights
	set_name(0x13b6bf4, "RTTI_GroupedLights");
	apply_type(0x13b6bf4, "RTTICompound");
	del_items(0x13b79f0, DELIT_SIMPLE, 8);
	apply_type(0x13b79f0, "RTTIBase[1]");
	set_name(0x13b79f0, "GroupedLights::sBases");
	del_items(0x13b79f8, DELIT_SIMPLE, 28);
	apply_type(0x13b79f8, "RTTIAttr[1]");
	set_name(0x13b79f8, "GroupedLights::sAttrs");
	del_items(0x13b7a14, DELIT_SIMPLE, 12);
	apply_type(0x13b7a14, "RTTIMessageHandler[1]");
	set_name(0x13b7a14, "GroupedLights::sMessageHandlers");

	// GroupedObjectFilter
	set_name(0x13b6b4c, "RTTI_GroupedObjectFilter");
	apply_type(0x13b6b4c, "RTTICompound");
	del_items(0x13b7924, DELIT_SIMPLE, 56);
	apply_type(0x13b7924, "RTTIAttr[2]");
	set_name(0x13b7924, "GroupedObjectFilter::sAttrs");

	// GroupedObjects
	set_name(0x13b6ba0, "RTTI_GroupedObjects");
	apply_type(0x13b6ba0, "RTTICompound");
	del_items(0x13b795c, DELIT_SIMPLE, 8);
	apply_type(0x13b795c, "RTTIBase[1]");
	set_name(0x13b795c, "GroupedObjects::sBases");
	del_items(0x13b7964, DELIT_SIMPLE, 140);
	apply_type(0x13b7964, "RTTIAttr[5]");
	set_name(0x13b7964, "GroupedObjects::sAttrs");

	// HUDActionIconResource
	set_name(0x13b0028, "RTTI_HUDActionIconResource");
	apply_type(0x13b0028, "RTTICompound");
	del_items(0x13b0938, DELIT_SIMPLE, 8);
	apply_type(0x13b0938, "RTTIBase[1]");
	set_name(0x13b0938, "HUDActionIconResource::sBases");
	del_items(0x13b0940, DELIT_SIMPLE, 168);
	apply_type(0x13b0940, "RTTIAttr[6]");
	set_name(0x13b0940, "HUDActionIconResource::sAttrs");

	// HUDAimLockResource
	set_name(0x13aca74, "RTTI_HUDAimLockResource");
	apply_type(0x13aca74, "RTTICompound");
	del_items(0x13adff0, DELIT_SIMPLE, 8);
	apply_type(0x13adff0, "RTTIBase[1]");
	set_name(0x13adff0, "HUDAimLockResource::sBases");
	del_items(0x13adff8, DELIT_SIMPLE, 140);
	apply_type(0x13adff8, "RTTIAttr[5]");
	set_name(0x13adff8, "HUDAimLockResource::sAttrs");
	del_items(0x13ae084, DELIT_SIMPLE, 12);
	apply_type(0x13ae084, "RTTIMessageHandler[1]");
	set_name(0x13ae084, "HUDAimLockResource::sMessageHandlers");

	// HUDAmmoBarResource
	set_name(0x13acb1c, "RTTI_HUDAmmoBarResource");
	apply_type(0x13acb1c, "RTTICompound");
	del_items(0x13ae170, DELIT_SIMPLE, 252);
	apply_type(0x13ae170, "RTTIAttr[9]");
	set_name(0x13ae170, "HUDAmmoBarResource::sAttrs");

	// HUDAmmoLowResource
	set_name(0x13acc18, "RTTI_HUDAmmoLowResource");
	apply_type(0x13acc18, "RTTICompound");
	del_items(0x13ae77c, DELIT_SIMPLE, 8);
	apply_type(0x13ae77c, "RTTIBase[1]");
	set_name(0x13ae77c, "HUDAmmoLowResource::sBases");
	del_items(0x13ae784, DELIT_SIMPLE, 84);
	apply_type(0x13ae784, "RTTIAttr[3]");
	set_name(0x13ae784, "HUDAmmoLowResource::sAttrs");
	del_items(0x13ae7d8, DELIT_SIMPLE, 12);
	apply_type(0x13ae7d8, "RTTIMessageHandler[1]");
	set_name(0x13ae7d8, "HUDAmmoLowResource::sMessageHandlers");

	// HUDAmmoResource
	set_name(0x13acbc4, "RTTI_HUDAmmoResource");
	apply_type(0x13acbc4, "RTTICompound");
	del_items(0x13ae26c, DELIT_SIMPLE, 8);
	apply_type(0x13ae26c, "RTTIBase[1]");
	set_name(0x13ae26c, "HUDAmmoResource::sBases");
	del_items(0x13ae274, DELIT_SIMPLE, 1288);
	apply_type(0x13ae274, "RTTIAttr[46]");
	set_name(0x13ae274, "HUDAmmoResource::sAttrs");

	// HUDAmmoSeparatorResource
	set_name(0x13acac8, "RTTI_HUDAmmoSeparatorResource");
	apply_type(0x13acac8, "RTTICompound");
	del_items(0x13ae11c, DELIT_SIMPLE, 84);
	apply_type(0x13ae11c, "RTTIAttr[3]");
	set_name(0x13ae11c, "HUDAmmoSeparatorResource::sAttrs");

	// HUDAmmoStackResource
	set_name(0x13acb70, "RTTI_HUDAmmoStackResource");
	apply_type(0x13acb70, "RTTICompound");
	del_items(0x13ae090, DELIT_SIMPLE, 140);
	apply_type(0x13ae090, "RTTIAttr[5]");
	set_name(0x13ae090, "HUDAmmoStackResource::sAttrs");

	// HUDAnimatedIconAnimationTracks
	set_name(0x13accd0, "RTTI_HUDAnimatedIconAnimationTracks");
	apply_type(0x13accd0, "RTTICompound");
	del_items(0x13ae8bc, DELIT_SIMPLE, 112);
	apply_type(0x13ae8bc, "RTTIAttr[4]");
	set_name(0x13ae8bc, "HUDAnimatedIconAnimationTracks::sAttrs");

	// HUDAnimatedIconResource
	set_name(0x13acc6c, "RTTI_HUDAnimatedIconResource");
	apply_type(0x13acc6c, "RTTICompound");
	del_items(0x13ae7e4, DELIT_SIMPLE, 8);
	apply_type(0x13ae7e4, "RTTIBase[1]");
	set_name(0x13ae7e4, "HUDAnimatedIconResource::sBases");
	del_items(0x13ae7ec, DELIT_SIMPLE, 196);
	apply_type(0x13ae7ec, "RTTIAttr[7]");
	set_name(0x13ae7ec, "HUDAnimatedIconResource::sAttrs");
	del_items(0x13ae8b0, DELIT_SIMPLE, 12);
	apply_type(0x13ae8b0, "RTTIMessageHandler[1]");
	set_name(0x13ae8b0, "HUDAnimatedIconResource::sMessageHandlers");

	// HUDAwardMessageEventResource
	set_name(0x13b367c, "RTTI_HUDAwardMessageEventResource");
	apply_type(0x13b367c, "RTTICompound");
	del_items(0x13b52a8, DELIT_SIMPLE, 8);
	apply_type(0x13b52a8, "RTTIBase[1]");
	set_name(0x13b52a8, "HUDAwardMessageEventResource::sBases");
	del_items(0x13b52b0, DELIT_SIMPLE, 224);
	apply_type(0x13b52b0, "RTTIAttr[8]");
	set_name(0x13b52b0, "HUDAwardMessageEventResource::sAttrs");
	del_items(0x13b5390, DELIT_SIMPLE, 12);
	apply_type(0x13b5390, "RTTIMessageHandler[1]");
	set_name(0x13b5390, "HUDAwardMessageEventResource::sMessageHandlers");

	// HUDBackgroundResource
	set_name(0x13b3170, "RTTI_HUDBackgroundResource");
	apply_type(0x13b3170, "RTTICompound");
	del_items(0x13b428c, DELIT_SIMPLE, 8);
	apply_type(0x13b428c, "RTTIBase[1]");
	set_name(0x13b428c, "HUDBackgroundResource::sBases");
	del_items(0x13b4294, DELIT_SIMPLE, 56);
	apply_type(0x13b4294, "RTTIAttr[2]");
	set_name(0x13b4294, "HUDBackgroundResource::sAttrs");
	del_items(0x13b42cc, DELIT_SIMPLE, 12);
	apply_type(0x13b42cc, "RTTIMessageHandler[1]");
	set_name(0x13b42cc, "HUDBackgroundResource::sMessageHandlers");

	// HUDBloodSplattersResource
	set_name(0x13afe84, "RTTI_HUDBloodSplattersResource");
	apply_type(0x13afe84, "RTTICompound");
	del_items(0x13b02e8, DELIT_SIMPLE, 8);
	apply_type(0x13b02e8, "RTTIBase[1]");
	set_name(0x13b02e8, "HUDBloodSplattersResource::sBases");
	del_items(0x13b02f0, DELIT_SIMPLE, 308);
	apply_type(0x13b02f0, "RTTIAttr[11]");
	set_name(0x13b02f0, "HUDBloodSplattersResource::sAttrs");
	del_items(0x13b0424, DELIT_SIMPLE, 12);
	apply_type(0x13b0424, "RTTIMessageHandler[1]");
	set_name(0x13b0424, "HUDBloodSplattersResource::sMessageHandlers");

	// HUDBoostResource
	set_name(0x13b326c, "RTTI_HUDBoostResource");
	apply_type(0x13b326c, "RTTICompound");
	del_items(0x13b44b4, DELIT_SIMPLE, 8);
	apply_type(0x13b44b4, "RTTIBase[1]");
	set_name(0x13b44b4, "HUDBoostResource::sBases");
	del_items(0x13b44bc, DELIT_SIMPLE, 196);
	apply_type(0x13b44bc, "RTTIAttr[7]");
	set_name(0x13b44bc, "HUDBoostResource::sAttrs");
	del_items(0x13b4580, DELIT_SIMPLE, 12);
	apply_type(0x13b4580, "RTTIMessageHandler[1]");
	set_name(0x13b4580, "HUDBoostResource::sMessageHandlers");

	// HUDCampaignScoreResource
	set_name(0x13acd24, "RTTI_HUDCampaignScoreResource");
	apply_type(0x13acd24, "RTTICompound");
	del_items(0x13ae92c, DELIT_SIMPLE, 8);
	apply_type(0x13ae92c, "RTTIBase[1]");
	set_name(0x13ae92c, "HUDCampaignScoreResource::sBases");
	del_items(0x13ae934, DELIT_SIMPLE, 168);
	apply_type(0x13ae934, "RTTIAttr[6]");
	set_name(0x13ae934, "HUDCampaignScoreResource::sAttrs");
	del_items(0x13ae9dc, DELIT_SIMPLE, 12);
	apply_type(0x13ae9dc, "RTTIMessageHandler[1]");
	set_name(0x13ae9dc, "HUDCampaignScoreResource::sMessageHandlers");

	// HUDCaptureAndHoldUseBarResource
	set_name(0x13acd78, "RTTI_HUDCaptureAndHoldUseBarResource");
	apply_type(0x13acd78, "RTTICompound");
	del_items(0x13ae9e8, DELIT_SIMPLE, 8);
	apply_type(0x13ae9e8, "RTTIBase[1]");
	set_name(0x13ae9e8, "HUDCaptureAndHoldUseBarResource::sBases");
	del_items(0x13ae9f0, DELIT_SIMPLE, 392);
	apply_type(0x13ae9f0, "RTTIAttr[14]");
	set_name(0x13ae9f0, "HUDCaptureAndHoldUseBarResource::sAttrs");
	del_items(0x13aeb78, DELIT_SIMPLE, 12);
	apply_type(0x13aeb78, "RTTIMessageHandler[1]");
	set_name(0x13aeb78, "HUDCaptureAndHoldUseBarResource::sMessageHandlers");

	// HUDCloseCombatIconResource
	set_name(0x13afed8, "RTTI_HUDCloseCombatIconResource");
	apply_type(0x13afed8, "RTTICompound");
	del_items(0x13b0430, DELIT_SIMPLE, 8);
	apply_type(0x13b0430, "RTTIBase[1]");
	set_name(0x13b0430, "HUDCloseCombatIconResource::sBases");
	del_items(0x13b0438, DELIT_SIMPLE, 84);
	apply_type(0x13b0438, "RTTIAttr[3]");
	set_name(0x13b0438, "HUDCloseCombatIconResource::sAttrs");

	// HUDCollectableResource
	set_name(0x13b31c4, "RTTI_HUDCollectableResource");
	apply_type(0x13b31c4, "RTTICompound");
	del_items(0x13b42d8, DELIT_SIMPLE, 8);
	apply_type(0x13b42d8, "RTTIBase[1]");
	set_name(0x13b42d8, "HUDCollectableResource::sBases");
	del_items(0x13b42e0, DELIT_SIMPLE, 252);
	apply_type(0x13b42e0, "RTTIAttr[9]");
	set_name(0x13b42e0, "HUDCollectableResource::sAttrs");
	del_items(0x13b43dc, DELIT_SIMPLE, 12);
	apply_type(0x13b43dc, "RTTIMessageHandler[1]");
	set_name(0x13b43dc, "HUDCollectableResource::sMessageHandlers");

	// HUDConnectionLostResource
	set_name(0x13aff2c, "RTTI_HUDConnectionLostResource");
	apply_type(0x13aff2c, "RTTICompound");
	del_items(0x13b048c, DELIT_SIMPLE, 8);
	apply_type(0x13b048c, "RTTIBase[1]");
	set_name(0x13b048c, "HUDConnectionLostResource::sBases");
	del_items(0x13b0494, DELIT_SIMPLE, 196);
	apply_type(0x13b0494, "RTTIAttr[7]");
	set_name(0x13b0494, "HUDConnectionLostResource::sAttrs");
	del_items(0x13b0558, DELIT_SIMPLE, 12);
	apply_type(0x13b0558, "RTTIMessageHandler[1]");
	set_name(0x13b0558, "HUDConnectionLostResource::sMessageHandlers");

	// HUDCountdownTimerResource
	set_name(0x13ace30, "RTTI_HUDCountdownTimerResource");
	apply_type(0x13ace30, "RTTICompound");
	del_items(0x13aecdc, DELIT_SIMPLE, 8);
	apply_type(0x13aecdc, "RTTIBase[1]");
	set_name(0x13aecdc, "HUDCountdownTimerResource::sBases");
	del_items(0x13aece4, DELIT_SIMPLE, 336);
	apply_type(0x13aece4, "RTTIAttr[12]");
	set_name(0x13aece4, "HUDCountdownTimerResource::sAttrs");

	// HUDCriticallyWoundedResource
	set_name(0x13b2fcc, "RTTI_HUDCriticallyWoundedResource");
	apply_type(0x13b2fcc, "RTTICompound");
	del_items(0x13b4070, DELIT_SIMPLE, 8);
	apply_type(0x13b4070, "RTTIBase[1]");
	set_name(0x13b4070, "HUDCriticallyWoundedResource::sBases");
	del_items(0x13b4078, DELIT_SIMPLE, 252);
	apply_type(0x13b4078, "RTTIAttr[9]");
	set_name(0x13b4078, "HUDCriticallyWoundedResource::sAttrs");
	del_items(0x13b4174, DELIT_SIMPLE, 12);
	apply_type(0x13b4174, "RTTIMessageHandler[1]");
	set_name(0x13b4174, "HUDCriticallyWoundedResource::sMessageHandlers");

	// HUDCrosshairPart
	set_name(0x13acea4, "RTTI_HUDCrosshairPart");
	apply_type(0x13acea4, "RTTICompound");
	del_items(0x13ad5a4, DELIT_SIMPLE, 476);
	apply_type(0x13ad5a4, "RTTIAttr[17]");
	set_name(0x13ad5a4, "HUDCrosshairPart::sAttrs");

	// HUDCrosshairParts
	set_name(0x13acf5c, "RTTI_HUDCrosshairParts");
	apply_type(0x13acf5c, "RTTICompound");
	del_items(0x13ad788, DELIT_SIMPLE, 8);
	apply_type(0x13ad788, "RTTIBase[1]");
	set_name(0x13ad788, "HUDCrosshairParts::sBases");
	del_items(0x13ad790, DELIT_SIMPLE, 28);
	apply_type(0x13ad790, "RTTIAttr[1]");
	set_name(0x13ad790, "HUDCrosshairParts::sAttrs");

	// HUDCrosshairResource
	set_name(0x13acef8, "RTTI_HUDCrosshairResource");
	apply_type(0x13acef8, "RTTICompound");
	del_items(0x13aee34, DELIT_SIMPLE, 8);
	apply_type(0x13aee34, "RTTIBase[1]");
	set_name(0x13aee34, "HUDCrosshairResource::sBases");
	del_items(0x13aee3c, DELIT_SIMPLE, 336);
	apply_type(0x13aee3c, "RTTIAttr[12]");
	set_name(0x13aee3c, "HUDCrosshairResource::sAttrs");

	// HUDCrosshairSettings
	set_name(0x13acfc0, "RTTI_HUDCrosshairSettings");
	apply_type(0x13acfc0, "RTTICompound");
	del_items(0x13ad7ac, DELIT_SIMPLE, 8);
	apply_type(0x13ad7ac, "RTTIBase[1]");
	set_name(0x13ad7ac, "HUDCrosshairSettings::sBases");
	del_items(0x13ad7b4, DELIT_SIMPLE, 252);
	apply_type(0x13ad7b4, "RTTIAttr[9]");
	set_name(0x13ad7b4, "HUDCrosshairSettings::sAttrs");
	del_items(0x13ad8b0, DELIT_SIMPLE, 12);
	apply_type(0x13ad8b0, "RTTIMessageHandler[1]");
	set_name(0x13ad8b0, "HUDCrosshairSettings::sMessageHandlers");

	// HUDDisguiseBarResource
	set_name(0x13b3074, "RTTI_HUDDisguiseBarResource");
	apply_type(0x13b3074, "RTTICompound");
	del_items(0x13b41c0, DELIT_SIMPLE, 8);
	apply_type(0x13b41c0, "RTTIBase[1]");
	set_name(0x13b41c0, "HUDDisguiseBarResource::sBases");

	// HUDDisguiseIconResource
	set_name(0x13b30c8, "RTTI_HUDDisguiseIconResource");
	apply_type(0x13b30c8, "RTTICompound");
	del_items(0x13b41c8, DELIT_SIMPLE, 8);
	apply_type(0x13b41c8, "RTTIBase[1]");
	set_name(0x13b41c8, "HUDDisguiseIconResource::sBases");
	del_items(0x13b41d0, DELIT_SIMPLE, 56);
	apply_type(0x13b41d0, "RTTIAttr[2]");
	set_name(0x13b41d0, "HUDDisguiseIconResource::sAttrs");
	del_items(0x13b4208, DELIT_SIMPLE, 12);
	apply_type(0x13b4208, "RTTIMessageHandler[1]");
	set_name(0x13b4208, "HUDDisguiseIconResource::sMessageHandlers");

	// HUDEffectSettings
	set_name(0x138e190, "RTTI_HUDEffectSettings");
	apply_type(0x138e190, "RTTICompound");
	del_items(0x1390bb0, DELIT_SIMPLE, 112);
	apply_type(0x1390bb0, "RTTIAttr[4]");
	set_name(0x1390bb0, "HUDEffectSettings::sAttrs");

	// HUDElementCompoundResource
	set_name(0x13ac880, "RTTI_HUDElementCompoundResource");
	apply_type(0x13ac880, "RTTICompound");
	del_items(0x13ade90, DELIT_SIMPLE, 8);
	apply_type(0x13ade90, "RTTIBase[1]");
	set_name(0x13ade90, "HUDElementCompoundResource::sBases");
	del_items(0x13ade98, DELIT_SIMPLE, 56);
	apply_type(0x13ade98, "RTTIAttr[2]");
	set_name(0x13ade98, "HUDElementCompoundResource::sAttrs");

	// HUDElementResource
	set_name(0x13ac914, "RTTI_HUDElementResource");
	apply_type(0x13ac914, "RTTICompound");
	del_items(0x13adb78, DELIT_SIMPLE, 8);
	apply_type(0x13adb78, "RTTIBase[1]");
	set_name(0x13adb78, "HUDElementResource::sBases");
	del_items(0x13adb80, DELIT_SIMPLE, 784);
	apply_type(0x13adb80, "RTTIAttr[28]");
	set_name(0x13adb80, "HUDElementResource::sAttrs");

	// HUDEntityUseBarResource
	set_name(0x13ad014, "RTTI_HUDEntityUseBarResource");
	apply_type(0x13ad014, "RTTICompound");
	del_items(0x13aef8c, DELIT_SIMPLE, 8);
	apply_type(0x13aef8c, "RTTIBase[1]");
	set_name(0x13aef8c, "HUDEntityUseBarResource::sBases");

	// HUDFactionWinResource
	set_name(0x13b3778, "RTTI_HUDFactionWinResource");
	apply_type(0x13b3778, "RTTICompound");
	del_items(0x13b55f4, DELIT_SIMPLE, 8);
	apply_type(0x13b55f4, "RTTIBase[1]");
	set_name(0x13b55f4, "HUDFactionWinResource::sBases");
	del_items(0x13b55fc, DELIT_SIMPLE, 196);
	apply_type(0x13b55fc, "RTTIAttr[7]");
	set_name(0x13b55fc, "HUDFactionWinResource::sAttrs");
	del_items(0x13b56c0, DELIT_SIMPLE, 12);
	apply_type(0x13b56c0, "RTTIMessageHandler[1]");
	set_name(0x13b56c0, "HUDFactionWinResource::sMessageHandlers");

	// HUDFireChargeResource
	set_name(0x13b37cc, "RTTI_HUDFireChargeResource");
	apply_type(0x13b37cc, "RTTICompound");
	del_items(0x13b56cc, DELIT_SIMPLE, 8);
	apply_type(0x13b56cc, "RTTIBase[1]");
	set_name(0x13b56cc, "HUDFireChargeResource::sBases");
	del_items(0x13b56d4, DELIT_SIMPLE, 140);
	apply_type(0x13b56d4, "RTTIAttr[5]");
	set_name(0x13b56d4, "HUDFireChargeResource::sAttrs");
	del_items(0x13b5760, DELIT_SIMPLE, 12);
	apply_type(0x13b5760, "RTTIMessageHandler[1]");
	set_name(0x13b5760, "HUDFireChargeResource::sMessageHandlers");

	// HUDHealAbilityResource
	set_name(0x13b3020, "RTTI_HUDHealAbilityResource");
	apply_type(0x13b3020, "RTTICompound");
	del_items(0x13b4180, DELIT_SIMPLE, 8);
	apply_type(0x13b4180, "RTTIBase[1]");
	set_name(0x13b4180, "HUDHealAbilityResource::sBases");
	del_items(0x13b4188, DELIT_SIMPLE, 56);
	apply_type(0x13b4188, "RTTIAttr[2]");
	set_name(0x13b4188, "HUDHealAbilityResource::sAttrs");

	// HUDHealthBarsResource
	set_name(0x13ad068, "RTTI_HUDHealthBarsResource");
	apply_type(0x13ad068, "RTTICompound");
	del_items(0x13aef94, DELIT_SIMPLE, 8);
	apply_type(0x13aef94, "RTTIBase[1]");
	set_name(0x13aef94, "HUDHealthBarsResource::sBases");
	del_items(0x13aef9c, DELIT_SIMPLE, 112);
	apply_type(0x13aef9c, "RTTIAttr[4]");
	set_name(0x13aef9c, "HUDHealthBarsResource::sAttrs");

	// HUDHealthResource
	set_name(0x13ad110, "RTTI_HUDHealthResource");
	apply_type(0x13ad110, "RTTICompound");
	del_items(0x13af204, DELIT_SIMPLE, 8);
	apply_type(0x13af204, "RTTIBase[1]");
	set_name(0x13af204, "HUDHealthResource::sBases");
	del_items(0x13af20c, DELIT_SIMPLE, 1120);
	apply_type(0x13af20c, "RTTIAttr[40]");
	set_name(0x13af20c, "HUDHealthResource::sAttrs");

	// HUDHintResource
	set_name(0x13b3218, "RTTI_HUDHintResource");
	apply_type(0x13b3218, "RTTICompound");
	del_items(0x13b43e8, DELIT_SIMPLE, 8);
	apply_type(0x13b43e8, "RTTIBase[1]");
	set_name(0x13b43e8, "HUDHintResource::sBases");
	del_items(0x13b43f0, DELIT_SIMPLE, 196);
	apply_type(0x13b43f0, "RTTIAttr[7]");
	set_name(0x13b43f0, "HUDHintResource::sAttrs");

	// HUDHitOverlayResource
	set_name(0x13aff80, "RTTI_HUDHitOverlayResource");
	apply_type(0x13aff80, "RTTICompound");
	del_items(0x13b0564, DELIT_SIMPLE, 8);
	apply_type(0x13b0564, "RTTIBase[1]");
	set_name(0x13b0564, "HUDHitOverlayResource::sBases");
	del_items(0x13b056c, DELIT_SIMPLE, 728);
	apply_type(0x13b056c, "RTTIAttr[26]");
	set_name(0x13b056c, "HUDHitOverlayResource::sAttrs");
	del_items(0x13b0844, DELIT_SIMPLE, 12);
	apply_type(0x13b0844, "RTTIMessageHandler[1]");
	set_name(0x13b0844, "HUDHitOverlayResource::sMessageHandlers");

	// HUDIconResource
	set_name(0x13b311c, "RTTI_HUDIconResource");
	apply_type(0x13b311c, "RTTICompound");
	del_items(0x13b4214, DELIT_SIMPLE, 8);
	apply_type(0x13b4214, "RTTIBase[1]");
	set_name(0x13b4214, "HUDIconResource::sBases");
	del_items(0x13b421c, DELIT_SIMPLE, 112);
	apply_type(0x13b421c, "RTTIAttr[4]");
	set_name(0x13b421c, "HUDIconResource::sAttrs");

	// HUDInteractiveEntityHealthResource
	set_name(0x13ad2d4, "RTTI_HUDInteractiveEntityHealthResource");
	apply_type(0x13ad2d4, "RTTICompound");
	del_items(0x13afc20, DELIT_SIMPLE, 8);
	apply_type(0x13afc20, "RTTIBase[1]");
	set_name(0x13afc20, "HUDInteractiveEntityHealthResource::sBases");
	del_items(0x13afc28, DELIT_SIMPLE, 504);
	apply_type(0x13afc28, "RTTIAttr[18]");
	set_name(0x13afc28, "HUDInteractiveEntityHealthResource::sAttrs");

	// HUDInventoryChargeBarResource
	set_name(0x13ad270, "RTTI_HUDInventoryChargeBarResource");
	apply_type(0x13ad270, "RTTICompound");
	del_items(0x13afb90, DELIT_SIMPLE, 8);
	apply_type(0x13afb90, "RTTIBase[1]");
	set_name(0x13afb90, "HUDInventoryChargeBarResource::sBases");
	del_items(0x13afb98, DELIT_SIMPLE, 112);
	apply_type(0x13afb98, "RTTIAttr[4]");
	set_name(0x13afb98, "HUDInventoryChargeBarResource::sAttrs");
	del_items(0x13afc08, DELIT_SIMPLE, 24);
	apply_type(0x13afc08, "RTTIMessageHandler[2]");
	set_name(0x13afc08, "HUDInventoryChargeBarResource::sMessageHandlers");

	// HUDInventoryEntitySettings
	set_name(0x13b008c, "RTTI_HUDInventoryEntitySettings");
	apply_type(0x13b008c, "RTTICompound");
	del_items(0x13b09e8, DELIT_SIMPLE, 8);
	apply_type(0x13b09e8, "RTTIBase[1]");
	set_name(0x13b09e8, "HUDInventoryEntitySettings::sBases");
	del_items(0x13b09f0, DELIT_SIMPLE, 420);
	apply_type(0x13b09f0, "RTTIAttr[15]");
	set_name(0x13b09f0, "HUDInventoryEntitySettings::sAttrs");

	// HUDLocationResource
	set_name(0x13b32c0, "RTTI_HUDLocationResource");
	apply_type(0x13b32c0, "RTTICompound");
	del_items(0x13b458c, DELIT_SIMPLE, 8);
	apply_type(0x13b458c, "RTTIBase[1]");
	set_name(0x13b458c, "HUDLocationResource::sBases");
	del_items(0x13b4594, DELIT_SIMPLE, 168);
	apply_type(0x13b4594, "RTTIAttr[6]");
	set_name(0x13b4594, "HUDLocationResource::sAttrs");

	// HUDMissionDescriptionResource
	set_name(0x13b00f0, "RTTI_HUDMissionDescriptionResource");
	apply_type(0x13b00f0, "RTTICompound");
	del_items(0x13b0b94, DELIT_SIMPLE, 8);
	apply_type(0x13b0b94, "RTTIBase[1]");
	set_name(0x13b0b94, "HUDMissionDescriptionResource::sBases");

	// HUDMissionResource
	set_name(0x13b0144, "RTTI_HUDMissionResource");
	apply_type(0x13b0144, "RTTICompound");
	del_items(0x13b0b9c, DELIT_SIMPLE, 8);
	apply_type(0x13b0b9c, "RTTIBase[1]");
	set_name(0x13b0b9c, "HUDMissionResource::sBases");

	// HUDMissionScoreResource
	set_name(0x13b0ee8, "RTTI_HUDMissionScoreResource");
	apply_type(0x13b0ee8, "RTTICompound");
	del_items(0x13b1394, DELIT_SIMPLE, 8);
	apply_type(0x13b1394, "RTTIBase[1]");
	set_name(0x13b1394, "HUDMissionScoreResource::sBases");
	del_items(0x13b139c, DELIT_SIMPLE, 868);
	apply_type(0x13b139c, "RTTIAttr[31]");
	set_name(0x13b139c, "HUDMissionScoreResource::sAttrs");
	del_items(0x13b1700, DELIT_SIMPLE, 12);
	apply_type(0x13b1700, "RTTIMessageHandler[1]");
	set_name(0x13b1700, "HUDMissionScoreResource::sMessageHandlers");

	// HUDMissionTextResource
	set_name(0x13b0f90, "RTTI_HUDMissionTextResource");
	apply_type(0x13b0f90, "RTTICompound");
	del_items(0x13b1924, DELIT_SIMPLE, 8);
	apply_type(0x13b1924, "RTTIBase[1]");
	set_name(0x13b1924, "HUDMissionTextResource::sBases");
	del_items(0x13b192c, DELIT_SIMPLE, 196);
	apply_type(0x13b192c, "RTTIAttr[7]");
	set_name(0x13b192c, "HUDMissionTextResource::sAttrs");

	// HUDMissionTimerResource
	set_name(0x13b0fe8, "RTTI_HUDMissionTimerResource");
	apply_type(0x13b0fe8, "RTTICompound");
	del_items(0x13b19f0, DELIT_SIMPLE, 8);
	apply_type(0x13b19f0, "RTTIBase[1]");
	set_name(0x13b19f0, "HUDMissionTimerResource::sBases");

	// HUDMissionWinsResource
	set_name(0x13b103c, "RTTI_HUDMissionWinsResource");
	apply_type(0x13b103c, "RTTICompound");
	del_items(0x13b19f8, DELIT_SIMPLE, 8);
	apply_type(0x13b19f8, "RTTIBase[1]");
	set_name(0x13b19f8, "HUDMissionWinsResource::sBases");
	del_items(0x13b1a00, DELIT_SIMPLE, 224);
	apply_type(0x13b1a00, "RTTIAttr[8]");
	set_name(0x13b1a00, "HUDMissionWinsResource::sAttrs");
	del_items(0x13b1ae0, DELIT_SIMPLE, 12);
	apply_type(0x13b1ae0, "RTTIMessageHandler[1]");
	set_name(0x13b1ae0, "HUDMissionWinsResource::sMessageHandlers");

	// HUDMotionControllerInvisibleIconResource
	set_name(0x13b0198, "RTTI_HUDMotionControllerInvisibleIconResource");
	apply_type(0x13b0198, "RTTICompound");
	del_items(0x13b0ba4, DELIT_SIMPLE, 8);
	apply_type(0x13b0ba4, "RTTIBase[1]");
	set_name(0x13b0ba4, "HUDMotionControllerInvisibleIconResource::sBases");

	// HUDNameComponent
	set_name(0x1389ff8, "RTTI_HUDNameComponent");
	apply_type(0x1389ff8, "RTTICompound");
	del_items(0x138ca64, DELIT_SIMPLE, 8);
	apply_type(0x138ca64, "RTTIBase[1]");
	set_name(0x138ca64, "HUDNameComponent::sBases");

	// HUDNavigationResource
	set_name(0x13b10a0, "RTTI_HUDNavigationResource");
	apply_type(0x13b10a0, "RTTICompound");
	del_items(0x13b1aec, DELIT_SIMPLE, 8);
	apply_type(0x13b1aec, "RTTIBase[1]");
	set_name(0x13b1aec, "HUDNavigationResource::sBases");
	del_items(0x13b1af4, DELIT_SIMPLE, 1176);
	apply_type(0x13b1af4, "RTTIAttr[42]");
	set_name(0x13b1af4, "HUDNavigationResource::sAttrs");

	// HUDObjectivesResource
	set_name(0x13b3628, "RTTI_HUDObjectivesResource");
	apply_type(0x13b3628, "RTTICompound");
	del_items(0x13b4dfc, DELIT_SIMPLE, 8);
	apply_type(0x13b4dfc, "RTTIBase[1]");
	set_name(0x13b4dfc, "HUDObjectivesResource::sBases");
	del_items(0x13b4e04, DELIT_SIMPLE, 1176);
	apply_type(0x13b4e04, "RTTIAttr[42]");
	set_name(0x13b4e04, "HUDObjectivesResource::sAttrs");
	del_items(0x13b529c, DELIT_SIMPLE, 12);
	apply_type(0x13b529c, "RTTIMessageHandler[1]");
	set_name(0x13b529c, "HUDObjectivesResource::sMessageHandlers");

	// HUDPart
	set_name(0x13abb88, "RTTI_HUDPart");
	apply_type(0x13abb88, "RTTICompound");
	del_items(0x13ac0a4, DELIT_SIMPLE, 56);
	apply_type(0x13ac0a4, "RTTIAttr[2]");
	set_name(0x13ac0a4, "HUDPart::sAttrs");

	// HUDPartBackground
	set_name(0x13abc40, "RTTI_HUDPartBackground");
	apply_type(0x13abc40, "RTTICompound");
	del_items(0x13ac11c, DELIT_SIMPLE, 8);
	apply_type(0x13ac11c, "RTTIBase[1]");
	set_name(0x13ac11c, "HUDPartBackground::sBases");
	del_items(0x13ac124, DELIT_SIMPLE, 308);
	apply_type(0x13ac124, "RTTIAttr[11]");
	set_name(0x13ac124, "HUDPartBackground::sAttrs");

	// HUDPartIcon
	set_name(0x13abbec, "RTTI_HUDPartIcon");
	apply_type(0x13abbec, "RTTICompound");
	del_items(0x13ac0dc, DELIT_SIMPLE, 8);
	apply_type(0x13ac0dc, "RTTIBase[1]");
	set_name(0x13ac0dc, "HUDPartIcon::sBases");
	del_items(0x13ac0e4, DELIT_SIMPLE, 56);
	apply_type(0x13ac0e4, "RTTIAttr[2]");
	set_name(0x13ac0e4, "HUDPartIcon::sAttrs");

	// HUDPartProgressBar
	set_name(0x13abc94, "RTTI_HUDPartProgressBar");
	apply_type(0x13abc94, "RTTICompound");
	del_items(0x13ac258, DELIT_SIMPLE, 8);
	apply_type(0x13ac258, "RTTIBase[1]");
	set_name(0x13ac258, "HUDPartProgressBar::sBases");
	del_items(0x13ac260, DELIT_SIMPLE, 140);
	apply_type(0x13ac260, "RTTIAttr[5]");
	set_name(0x13ac260, "HUDPartProgressBar::sAttrs");

	// HUDPartText
	set_name(0x13abd08, "RTTI_HUDPartText");
	apply_type(0x13abd08, "RTTICompound");
	del_items(0x13ac2ec, DELIT_SIMPLE, 8);
	apply_type(0x13ac2ec, "RTTIBase[1]");
	set_name(0x13ac2ec, "HUDPartText::sBases");
	del_items(0x13ac2f4, DELIT_SIMPLE, 504);
	apply_type(0x13ac2f4, "RTTIAttr[18]");
	set_name(0x13ac2f4, "HUDPartText::sAttrs");

	// HUDPauseGameNotificationResource
	set_name(0x13b3314, "RTTI_HUDPauseGameNotificationResource");
	apply_type(0x13b3314, "RTTICompound");
	del_items(0x13b463c, DELIT_SIMPLE, 8);
	apply_type(0x13b463c, "RTTIBase[1]");
	set_name(0x13b463c, "HUDPauseGameNotificationResource::sBases");
	del_items(0x13b4644, DELIT_SIMPLE, 28);
	apply_type(0x13b4644, "RTTIAttr[1]");
	set_name(0x13b4644, "HUDPauseGameNotificationResource::sAttrs");

	// HUDPersonalScoreResource
	set_name(0x13b0f3c, "RTTI_HUDPersonalScoreResource");
	apply_type(0x13b0f3c, "RTTICompound");
	del_items(0x13b170c, DELIT_SIMPLE, 8);
	apply_type(0x13b170c, "RTTIBase[1]");
	set_name(0x13b170c, "HUDPersonalScoreResource::sBases");
	del_items(0x13b1714, DELIT_SIMPLE, 504);
	apply_type(0x13b1714, "RTTIAttr[18]");
	set_name(0x13b1714, "HUDPersonalScoreResource::sAttrs");
	del_items(0x13b190c, DELIT_SIMPLE, 24);
	apply_type(0x13b190c, "RTTIMessageHandler[2]");
	set_name(0x13b190c, "HUDPersonalScoreResource::sMessageHandlers");

	// HUDPickUpIconResource
	set_name(0x13affd4, "RTTI_HUDPickUpIconResource");
	apply_type(0x13affd4, "RTTICompound");
	del_items(0x13b0850, DELIT_SIMPLE, 8);
	apply_type(0x13b0850, "RTTIBase[1]");
	set_name(0x13b0850, "HUDPickUpIconResource::sBases");
	del_items(0x13b0858, DELIT_SIMPLE, 224);
	apply_type(0x13b0858, "RTTIAttr[8]");
	set_name(0x13b0858, "HUDPickUpIconResource::sAttrs");

	// HUDPlayerNamesResource
	set_name(0x13b10f4, "RTTI_HUDPlayerNamesResource");
	apply_type(0x13b10f4, "RTTICompound");
	del_items(0x13b1f8c, DELIT_SIMPLE, 8);
	apply_type(0x13b1f8c, "RTTIBase[1]");
	set_name(0x13b1f8c, "HUDPlayerNamesResource::sBases");
	del_items(0x13b1f94, DELIT_SIMPLE, 448);
	apply_type(0x13b1f94, "RTTIAttr[16]");
	set_name(0x13b1f94, "HUDPlayerNamesResource::sAttrs");
	del_items(0x13b2154, DELIT_SIMPLE, 12);
	apply_type(0x13b2154, "RTTIMessageHandler[1]");
	set_name(0x13b2154, "HUDPlayerNamesResource::sMessageHandlers");

	// HUDQuickSelectIconResource
	set_name(0x13b119c, "RTTI_HUDQuickSelectIconResource");
	apply_type(0x13b119c, "RTTICompound");
	del_items(0x13b21b4, DELIT_SIMPLE, 252);
	apply_type(0x13b21b4, "RTTIAttr[9]");
	set_name(0x13b21b4, "HUDQuickSelectIconResource::sAttrs");

	// HUDQuickSelectResource
	set_name(0x13b11f0, "RTTI_HUDQuickSelectResource");
	apply_type(0x13b11f0, "RTTICompound");
	del_items(0x13b22b0, DELIT_SIMPLE, 8);
	apply_type(0x13b22b0, "RTTIBase[1]");
	set_name(0x13b22b0, "HUDQuickSelectResource::sBases");
	del_items(0x13b22b8, DELIT_SIMPLE, 728);
	apply_type(0x13b22b8, "RTTIAttr[26]");
	set_name(0x13b22b8, "HUDQuickSelectResource::sAttrs");
	del_items(0x13b2590, DELIT_SIMPLE, 12);
	apply_type(0x13b2590, "RTTIMessageHandler[1]");
	set_name(0x13b2590, "HUDQuickSelectResource::sMessageHandlers");

	// HUDQuickThrowButton
	set_name(0x13b1148, "RTTI_HUDQuickThrowButton");
	apply_type(0x13b1148, "RTTICompound");
	del_items(0x13b2160, DELIT_SIMPLE, 84);
	apply_type(0x13b2160, "RTTIAttr[3]");
	set_name(0x13b2160, "HUDQuickThrowButton::sAttrs");

	// HUDRadarResource
	set_name(0x13b3368, "RTTI_HUDRadarResource");
	apply_type(0x13b3368, "RTTICompound");
	del_items(0x13b4660, DELIT_SIMPLE, 8);
	apply_type(0x13b4660, "RTTIBase[1]");
	set_name(0x13b4660, "HUDRadarResource::sBases");
	del_items(0x13b4668, DELIT_SIMPLE, 504);
	apply_type(0x13b4668, "RTTIAttr[18]");
	set_name(0x13b4668, "HUDRadarResource::sAttrs");
	del_items(0x13b4860, DELIT_SIMPLE, 12);
	apply_type(0x13b4860, "RTTIMessageHandler[1]");
	set_name(0x13b4860, "HUDRadarResource::sMessageHandlers");

	// HUDResource
	set_name(0x13ac978, "RTTI_HUDResource");
	apply_type(0x13ac978, "RTTICompound");
	del_items(0x13aded0, DELIT_SIMPLE, 8);
	apply_type(0x13aded0, "RTTIBase[1]");
	set_name(0x13aded0, "HUDResource::sBases");
	del_items(0x13aded8, DELIT_SIMPLE, 168);
	apply_type(0x13aded8, "RTTIAttr[6]");
	set_name(0x13aded8, "HUDResource::sAttrs");

	// HUDRibbonIconsResource
	set_name(0x13b36d0, "RTTI_HUDRibbonIconsResource");
	apply_type(0x13b36d0, "RTTICompound");
	del_items(0x13b539c, DELIT_SIMPLE, 8);
	apply_type(0x13b539c, "RTTIBase[1]");
	set_name(0x13b539c, "HUDRibbonIconsResource::sBases");
	del_items(0x13b53a4, DELIT_SIMPLE, 252);
	apply_type(0x13b53a4, "RTTIAttr[9]");
	set_name(0x13b53a4, "HUDRibbonIconsResource::sAttrs");
	del_items(0x13b54a0, DELIT_SIMPLE, 12);
	apply_type(0x13b54a0, "RTTIMessageHandler[1]");
	set_name(0x13b54a0, "HUDRibbonIconsResource::sMessageHandlers");

	// HUDSabotageAbilityResource
	set_name(0x13b0240, "RTTI_HUDSabotageAbilityResource");
	apply_type(0x13b0240, "RTTICompound");
	del_items(0x13b0e44, DELIT_SIMPLE, 8);
	apply_type(0x13b0e44, "RTTIBase[1]");
	set_name(0x13b0e44, "HUDSabotageAbilityResource::sBases");
	del_items(0x13b0e4c, DELIT_SIMPLE, 56);
	apply_type(0x13b0e4c, "RTTIAttr[2]");
	set_name(0x13b0e4c, "HUDSabotageAbilityResource::sAttrs");

	// HUDScoreEventActivateAnimation
	set_name(0x13b3430, "RTTI_HUDScoreEventActivateAnimation");
	apply_type(0x13b3430, "RTTICompound");
	del_items(0x13b491c, DELIT_SIMPLE, 8);
	apply_type(0x13b491c, "RTTIBase[1]");
	set_name(0x13b491c, "HUDScoreEventActivateAnimation::sBases");
	del_items(0x13b4924, DELIT_SIMPLE, 56);
	apply_type(0x13b4924, "RTTIAttr[2]");
	set_name(0x13b4924, "HUDScoreEventActivateAnimation::sAttrs");

	// HUDScoreEventAnimation
	set_name(0x13b33cc, "RTTI_HUDScoreEventAnimation");
	apply_type(0x13b33cc, "RTTICompound");
	del_items(0x13b486c, DELIT_SIMPLE, 8);
	apply_type(0x13b486c, "RTTIBase[1]");
	set_name(0x13b486c, "HUDScoreEventAnimation::sBases");
	del_items(0x13b4874, DELIT_SIMPLE, 168);
	apply_type(0x13b4874, "RTTIAttr[6]");
	set_name(0x13b4874, "HUDScoreEventAnimation::sAttrs");

	// HUDScoreEventResource
	set_name(0x13b3484, "RTTI_HUDScoreEventResource");
	apply_type(0x13b3484, "RTTICompound");
	del_items(0x13b495c, DELIT_SIMPLE, 8);
	apply_type(0x13b495c, "RTTIBase[1]");
	set_name(0x13b495c, "HUDScoreEventResource::sBases");
	del_items(0x13b4964, DELIT_SIMPLE, 336);
	apply_type(0x13b4964, "RTTIAttr[12]");
	set_name(0x13b4964, "HUDScoreEventResource::sAttrs");

	// HUDShowInitialWeaponLayoutResource
	set_name(0x13b34d8, "RTTI_HUDShowInitialWeaponLayoutResource");
	apply_type(0x13b34d8, "RTTICompound");
	del_items(0x13b4ab4, DELIT_SIMPLE, 8);
	apply_type(0x13b4ab4, "RTTIBase[1]");
	set_name(0x13b4ab4, "HUDShowInitialWeaponLayoutResource::sBases");
	del_items(0x13b4abc, DELIT_SIMPLE, 336);
	apply_type(0x13b4abc, "RTTIAttr[12]");
	set_name(0x13b4abc, "HUDShowInitialWeaponLayoutResource::sAttrs");
	del_items(0x13b4c0c, DELIT_SIMPLE, 12);
	apply_type(0x13b4c0c, "RTTIMessageHandler[1]");
	set_name(0x13b4c0c, "HUDShowInitialWeaponLayoutResource::sMessageHandlers");

	// HUDSpectatorResource
	set_name(0x13b3724, "RTTI_HUDSpectatorResource");
	apply_type(0x13b3724, "RTTICompound");
	del_items(0x13b54ac, DELIT_SIMPLE, 8);
	apply_type(0x13b54ac, "RTTIBase[1]");
	set_name(0x13b54ac, "HUDSpectatorResource::sBases");
	del_items(0x13b54b4, DELIT_SIMPLE, 308);
	apply_type(0x13b54b4, "RTTIAttr[11]");
	set_name(0x13b54b4, "HUDSpectatorResource::sAttrs");
	del_items(0x13b55e8, DELIT_SIMPLE, 12);
	apply_type(0x13b55e8, "RTTIMessageHandler[1]");
	set_name(0x13b55e8, "HUDSpectatorResource::sMessageHandlers");

	// HUDSpotAndMarkResource
	set_name(0x13b01ec, "RTTI_HUDSpotAndMarkResource");
	apply_type(0x13b01ec, "RTTICompound");
	del_items(0x13b0bac, DELIT_SIMPLE, 8);
	apply_type(0x13b0bac, "RTTIBase[1]");
	set_name(0x13b0bac, "HUDSpotAndMarkResource::sBases");
	del_items(0x13b0bb4, DELIT_SIMPLE, 644);
	apply_type(0x13b0bb4, "RTTIAttr[23]");
	set_name(0x13b0bb4, "HUDSpotAndMarkResource::sAttrs");
	del_items(0x13b0e38, DELIT_SIMPLE, 12);
	apply_type(0x13b0e38, "RTTIMessageHandler[1]");
	set_name(0x13b0e38, "HUDSpotAndMarkResource::sMessageHandlers");

	// HUDSpriteProperties
	set_name(0x13aca20, "RTTI_HUDSpriteProperties");
	apply_type(0x13aca20, "RTTICompound");
	del_items(0x13ad56c, DELIT_SIMPLE, 56);
	apply_type(0x13ad56c, "RTTIAttr[2]");
	set_name(0x13ad56c, "HUDSpriteProperties::sAttrs");

	// HUDSquadResource
	set_name(0x13ad1c8, "RTTI_HUDSquadResource");
	apply_type(0x13ad1c8, "RTTICompound");
	del_items(0x13af6a4, DELIT_SIMPLE, 8);
	apply_type(0x13af6a4, "RTTIBase[1]");
	set_name(0x13af6a4, "HUDSquadResource::sBases");
	del_items(0x13af6ac, DELIT_SIMPLE, 504);
	apply_type(0x13af6ac, "RTTIAttr[18]");
	set_name(0x13af6ac, "HUDSquadResource::sAttrs");
	del_items(0x13af8a4, DELIT_SIMPLE, 12);
	apply_type(0x13af8a4, "RTTIMessageHandler[1]");
	set_name(0x13af8a4, "HUDSquadResource::sMessageHandlers");

	// HUDSubtitlesResource
	set_name(0x13b352c, "RTTI_HUDSubtitlesResource");
	apply_type(0x13b352c, "RTTICompound");
	del_items(0x13b4db4, DELIT_SIMPLE, 8);
	apply_type(0x13b4db4, "RTTIBase[1]");
	set_name(0x13b4db4, "HUDSubtitlesResource::sBases");

	// HUDTargetEntityResource
	set_name(0x13b1244, "RTTI_HUDTargetEntityResource");
	apply_type(0x13b1244, "RTTICompound");
	del_items(0x13b259c, DELIT_SIMPLE, 8);
	apply_type(0x13b259c, "RTTIBase[1]");
	set_name(0x13b259c, "HUDTargetEntityResource::sBases");
	del_items(0x13b25a4, DELIT_SIMPLE, 644);
	apply_type(0x13b25a4, "RTTIAttr[23]");
	set_name(0x13b25a4, "HUDTargetEntityResource::sAttrs");
	del_items(0x13b2828, DELIT_SIMPLE, 12);
	apply_type(0x13b2828, "RTTIMessageHandler[1]");
	set_name(0x13b2828, "HUDTargetEntityResource::sMessageHandlers");

	// HUDTextElementResource
	set_name(0x13b3580, "RTTI_HUDTextElementResource");
	apply_type(0x13b3580, "RTTICompound");
	del_items(0x13b4c18, DELIT_SIMPLE, 8);
	apply_type(0x13b4c18, "RTTIBase[1]");
	set_name(0x13b4c18, "HUDTextElementResource::sBases");
	del_items(0x13b4c20, DELIT_SIMPLE, 392);
	apply_type(0x13b4c20, "RTTIAttr[14]");
	set_name(0x13b4c20, "HUDTextElementResource::sAttrs");
	del_items(0x13b4da8, DELIT_SIMPLE, 12);
	apply_type(0x13b4da8, "RTTIMessageHandler[1]");
	set_name(0x13b4da8, "HUDTextElementResource::sMessageHandlers");

	// HUDTextEventResource
	set_name(0x13ad21c, "RTTI_HUDTextEventResource");
	apply_type(0x13ad21c, "RTTICompound");
	del_items(0x13af8b0, DELIT_SIMPLE, 8);
	apply_type(0x13af8b0, "RTTIBase[1]");
	set_name(0x13af8b0, "HUDTextEventResource::sBases");
	del_items(0x13af8b8, DELIT_SIMPLE, 728);
	apply_type(0x13af8b8, "RTTIAttr[26]");
	set_name(0x13af8b8, "HUDTextEventResource::sAttrs");

	// HUDTextResource
	set_name(0x13b2e7c, "RTTI_HUDTextResource");
	apply_type(0x13b2e7c, "RTTICompound");
	del_items(0x13b3b74, DELIT_SIMPLE, 8);
	apply_type(0x13b3b74, "RTTIBase[1]");
	set_name(0x13b3b74, "HUDTextResource::sBases");
	del_items(0x13b3b7c, DELIT_SIMPLE, 280);
	apply_type(0x13b3b7c, "RTTIAttr[10]");
	set_name(0x13b3b7c, "HUDTextResource::sAttrs");

	// HUDTilePart
	set_name(0x13ac9cc, "RTTI_HUDTilePart");
	apply_type(0x13ac9cc, "RTTICompound");
	del_items(0x13adf80, DELIT_SIMPLE, 112);
	apply_type(0x13adf80, "RTTIAttr[4]");
	set_name(0x13adf80, "HUDTilePart::sAttrs");

	// HUDTimerSettings
	set_name(0x13acddc, "RTTI_HUDTimerSettings");
	apply_type(0x13acddc, "RTTICompound");
	del_items(0x13aeb84, DELIT_SIMPLE, 8);
	apply_type(0x13aeb84, "RTTIBase[1]");
	set_name(0x13aeb84, "HUDTimerSettings::sBases");
	del_items(0x13aeb8c, DELIT_SIMPLE, 336);
	apply_type(0x13aeb8c, "RTTIAttr[12]");
	set_name(0x13aeb8c, "HUDTimerSettings::sAttrs");

	// HUDUseBarResource
	set_name(0x13b2ed0, "RTTI_HUDUseBarResource");
	apply_type(0x13b2ed0, "RTTICompound");
	del_items(0x13b3c94, DELIT_SIMPLE, 8);
	apply_type(0x13b3c94, "RTTIBase[1]");
	set_name(0x13b3c94, "HUDUseBarResource::sBases");
	del_items(0x13b3c9c, DELIT_SIMPLE, 196);
	apply_type(0x13b3c9c, "RTTIAttr[7]");
	set_name(0x13b3c9c, "HUDUseBarResource::sAttrs");
	del_items(0x13b3d60, DELIT_SIMPLE, 12);
	apply_type(0x13b3d60, "RTTIMessageHandler[1]");
	set_name(0x13b3d60, "HUDUseBarResource::sMessageHandlers");

	// HUDVehicleHealthWarningResource
	set_name(0x13b2f24, "RTTI_HUDVehicleHealthWarningResource");
	apply_type(0x13b2f24, "RTTICompound");
	del_items(0x13b3d6c, DELIT_SIMPLE, 8);
	apply_type(0x13b3d6c, "RTTIBase[1]");
	set_name(0x13b3d6c, "HUDVehicleHealthWarningResource::sBases");
	del_items(0x13b3d74, DELIT_SIMPLE, 84);
	apply_type(0x13b3d74, "RTTIAttr[3]");
	set_name(0x13b3d74, "HUDVehicleHealthWarningResource::sAttrs");

	// HUDVoiceCommResource
	set_name(0x13b2f78, "RTTI_HUDVoiceCommResource");
	apply_type(0x13b2f78, "RTTICompound");
	del_items(0x13b3dc8, DELIT_SIMPLE, 8);
	apply_type(0x13b3dc8, "RTTIBase[1]");
	set_name(0x13b3dc8, "HUDVoiceCommResource::sBases");
	del_items(0x13b3dd0, DELIT_SIMPLE, 672);
	apply_type(0x13b3dd0, "RTTIAttr[24]");
	set_name(0x13b3dd0, "HUDVoiceCommResource::sAttrs");

	// HUDWeaponSelectIconResource
	set_name(0x13b1298, "RTTI_HUDWeaponSelectIconResource");
	apply_type(0x13b1298, "RTTICompound");
	del_items(0x13b2834, DELIT_SIMPLE, 224);
	apply_type(0x13b2834, "RTTIAttr[8]");
	set_name(0x13b2834, "HUDWeaponSelectIconResource::sAttrs");

	// HUDWeaponSelectResource
	set_name(0x13b12ec, "RTTI_HUDWeaponSelectResource");
	apply_type(0x13b12ec, "RTTICompound");
	del_items(0x13b2914, DELIT_SIMPLE, 8);
	apply_type(0x13b2914, "RTTIBase[1]");
	set_name(0x13b2914, "HUDWeaponSelectResource::sBases");
	del_items(0x13b291c, DELIT_SIMPLE, 700);
	apply_type(0x13b291c, "RTTIAttr[25]");
	set_name(0x13b291c, "HUDWeaponSelectResource::sAttrs");

	// HUDWeaponTextElementResource
	set_name(0x13b35d4, "RTTI_HUDWeaponTextElementResource");
	apply_type(0x13b35d4, "RTTICompound");
	del_items(0x13b4dbc, DELIT_SIMPLE, 8);
	apply_type(0x13b4dbc, "RTTIBase[1]");
	set_name(0x13b4dbc, "HUDWeaponTextElementResource::sBases");
	del_items(0x13b4dc4, DELIT_SIMPLE, 56);
	apply_type(0x13b4dc4, "RTTIAttr[2]");
	set_name(0x13b4dc4, "HUDWeaponTextElementResource::sAttrs");

	// HammerVehicle
	set_name(0x13830b8, "RTTI_HammerVehicle");
	apply_type(0x13830b8, "RTTICompound");
	del_items(0x1384ea4, DELIT_SIMPLE, 8);
	apply_type(0x1384ea4, "RTTIBase[1]");
	set_name(0x1384ea4, "HammerVehicle::sBases");
	del_items(0x1384eac, DELIT_SIMPLE, 48);
	apply_type(0x1384eac, "RTTIFunction[2]");
	set_name(0x1384eac, "HammerVehicle::sFunctions");

	// HammerVehicleJoystickController
	set_name(0x1383304, "RTTI_HammerVehicleJoystickController");
	apply_type(0x1383304, "RTTICompound");
	del_items(0x13850ac, DELIT_SIMPLE, 8);
	apply_type(0x13850ac, "RTTIBase[1]");
	set_name(0x13850ac, "HammerVehicleJoystickController::sBases");

	// HammerVehicleRep
	set_name(0x1383400, "RTTI_HammerVehicleRep");
	apply_type(0x1383400, "RTTICompound");
	del_items(0x13850c4, DELIT_SIMPLE, 8);
	apply_type(0x13850c4, "RTTIBase[1]");
	set_name(0x13850c4, "HammerVehicleRep::sBases");

	// HammerVehicleResource
	set_name(0x13834fc, "RTTI_HammerVehicleResource");
	apply_type(0x13834fc, "RTTICompound");
	del_items(0x1384cf8, DELIT_SIMPLE, 8);
	apply_type(0x1384cf8, "RTTIBase[1]");
	set_name(0x1384cf8, "HammerVehicleResource::sBases");
	del_items(0x1384d00, DELIT_SIMPLE, 420);
	apply_type(0x1384d00, "RTTIAttr[15]");
	set_name(0x1384d00, "HammerVehicleResource::sAttrs");

	// HeadshotAllowedAction
	set_name(0x1376e2c, "RTTI_HeadshotAllowedAction");
	apply_type(0x1376e2c, "RTTICompound");
	del_items(0x13783a4, DELIT_SIMPLE, 8);
	apply_type(0x13783a4, "RTTIBase[1]");
	set_name(0x13783a4, "HeadshotAllowedAction::sBases");

	// HealAction
	set_name(0x1376748, "RTTI_HealAction");
	apply_type(0x1376748, "RTTICompound");
	del_items(0x1377cc0, DELIT_SIMPLE, 8);
	apply_type(0x1377cc0, "RTTIBase[1]");
	set_name(0x1377cc0, "HealAction::sBases");
	del_items(0x1377cc8, DELIT_SIMPLE, 112);
	apply_type(0x1377cc8, "RTTIAttr[4]");
	set_name(0x1377cc8, "HealAction::sAttrs");

	// HealthBarResource
	set_name(0x13ad0bc, "RTTI_HealthBarResource");
	apply_type(0x13ad0bc, "RTTICompound");
	del_items(0x13af00c, DELIT_SIMPLE, 504);
	apply_type(0x13af00c, "RTTIAttr[18]");
	set_name(0x13af00c, "HealthBarResource::sAttrs");

	// HealthPickUpResource
	set_name(0x1392544, "RTTI_HealthPickUpResource");
	apply_type(0x1392544, "RTTICompound");
	del_items(0x13931ec, DELIT_SIMPLE, 8);
	apply_type(0x13931ec, "RTTIBase[1]");
	set_name(0x13931ec, "HealthPickUpResource::sBases");
	del_items(0x13931f4, DELIT_SIMPLE, 140);
	apply_type(0x13931f4, "RTTIAttr[5]");
	set_name(0x13931f4, "HealthPickUpResource::sAttrs");

	// HelghastGogglesComponent
	set_name(0x1389b84, "RTTI_HelghastGogglesComponent");
	apply_type(0x1389b84, "RTTICompound");
	del_items(0x138b6ec, DELIT_SIMPLE, 8);
	apply_type(0x138b6ec, "RTTIBase[1]");
	set_name(0x138b6ec, "HelghastGogglesComponent::sBases");

	// HelghastGogglesComponentRep
	set_name(0x1389bd8, "RTTI_HelghastGogglesComponentRep");
	apply_type(0x1389bd8, "RTTICompound");
	del_items(0x138c960, DELIT_SIMPLE, 8);
	apply_type(0x138c960, "RTTIBase[1]");
	set_name(0x138c960, "HelghastGogglesComponentRep::sBases");

	// HelghastGogglesComponentResource
	set_name(0x1389c3c, "RTTI_HelghastGogglesComponentResource");
	apply_type(0x1389c3c, "RTTICompound");
	del_items(0x138b520, DELIT_SIMPLE, 8);
	apply_type(0x138b520, "RTTIBase[1]");
	set_name(0x138b520, "HelghastGogglesComponentResource::sBases");
	del_items(0x138b528, DELIT_SIMPLE, 448);
	apply_type(0x138b528, "RTTIAttr[16]");
	set_name(0x138b528, "HelghastGogglesComponentResource::sAttrs");

	// HelperNode
	set_name(0x135cdc4, "RTTI_HelperNode");
	apply_type(0x135cdc4, "RTTICompound");
	del_items(0x135d0c0, DELIT_SIMPLE, 8);
	apply_type(0x135d0c0, "RTTIBase[1]");
	set_name(0x135d0c0, "HelperNode::sBases");
	del_items(0x135d0c8, DELIT_SIMPLE, 84);
	apply_type(0x135d0c8, "RTTIAttr[3]");
	set_name(0x135d0c8, "HelperNode::sAttrs");

	// HideActorEventInstance
	set_name(0x1394aac, "RTTI_HideActorEventInstance");
	apply_type(0x1394aac, "RTTICompound");
	del_items(0x1396708, DELIT_SIMPLE, 8);
	apply_type(0x1396708, "RTTIBase[1]");
	set_name(0x1396708, "HideActorEventInstance::sBases");

	// HideActorEventResource
	set_name(0x1394a58, "RTTI_HideActorEventResource");
	apply_type(0x1394a58, "RTTICompound");
	del_items(0x1396690, DELIT_SIMPLE, 8);
	apply_type(0x1396690, "RTTIBase[1]");
	set_name(0x1396690, "HideActorEventResource::sBases");
	del_items(0x1396698, DELIT_SIMPLE, 112);
	apply_type(0x1396698, "RTTIAttr[4]");
	set_name(0x1396698, "HideActorEventResource::sAttrs");

	// HideAllPlayersEventInstance
	set_name(0x1394b54, "RTTI_HideAllPlayersEventInstance");
	apply_type(0x1394b54, "RTTICompound");
	del_items(0x1396718, DELIT_SIMPLE, 8);
	apply_type(0x1396718, "RTTIBase[1]");
	set_name(0x1396718, "HideAllPlayersEventInstance::sBases");

	// HideAllPlayersEventResource
	set_name(0x1394b00, "RTTI_HideAllPlayersEventResource");
	apply_type(0x1394b00, "RTTICompound");
	del_items(0x1396710, DELIT_SIMPLE, 8);
	apply_type(0x1396710, "RTTIBase[1]");
	set_name(0x1396710, "HideAllPlayersEventResource::sBases");

	// HideHUDEventInstance
	set_name(0x1394bfc, "RTTI_HideHUDEventInstance");
	apply_type(0x1394bfc, "RTTICompound");
	del_items(0x1396760, DELIT_SIMPLE, 8);
	apply_type(0x1396760, "RTTIBase[1]");
	set_name(0x1396760, "HideHUDEventInstance::sBases");

	// HideHUDEventResource
	set_name(0x1394ba8, "RTTI_HideHUDEventResource");
	apply_type(0x1394ba8, "RTTICompound");
	del_items(0x1396720, DELIT_SIMPLE, 8);
	apply_type(0x1396720, "RTTIBase[1]");
	set_name(0x1396720, "HideHUDEventResource::sBases");
	del_items(0x1396728, DELIT_SIMPLE, 56);
	apply_type(0x1396728, "RTTIAttr[2]");
	set_name(0x1396728, "HideHUDEventResource::sAttrs");

	// HitResponseAttachedParticlesResource
	set_name(0x1385a64, "RTTI_HitResponseAttachedParticlesResource");
	apply_type(0x1385a64, "RTTICompound");
	del_items(0x1385f6c, DELIT_SIMPLE, 8);
	apply_type(0x1385f6c, "RTTIBase[1]");
	set_name(0x1385f6c, "HitResponseAttachedParticlesResource::sBases");
	del_items(0x1385f74, DELIT_SIMPLE, 168);
	apply_type(0x1385f74, "RTTIAttr[6]");
	set_name(0x1385f74, "HitResponseAttachedParticlesResource::sAttrs");

	// HtnAtom
	set_name(0x13506a0, "RTTI_HtnAtom");
	apply_type(0x13506a0, "RTTICompound");

	// HtnFactDatabase
	set_name(0x13506f4, "RTTI_HtnFactDatabase");
	apply_type(0x13506f4, "RTTICompound");

	// Humanoid
	set_name(0x13837cc, "RTTI_Humanoid");
	apply_type(0x13837cc, "RTTICompound");
	del_items(0x138409c, DELIT_SIMPLE, 8);
	apply_type(0x138409c, "RTTIBase[1]");
	set_name(0x138409c, "Humanoid::sBases");
	del_items(0x13840a4, DELIT_SIMPLE, 1344);
	apply_type(0x13840a4, "RTTIFunction[56]");
	set_name(0x13840a4, "Humanoid::sFunctions");
	del_items(0x13845e4, DELIT_SIMPLE, 12);
	apply_type(0x13845e4, "RTTIMessageHandler[1]");
	set_name(0x13845e4, "Humanoid::sMessageHandlers");

	// HumanoidAnimatedStaggerState
	set_name(0x13888ec, "RTTI_HumanoidAnimatedStaggerState");
	apply_type(0x13888ec, "RTTICompound");
	del_items(0x138c1b8, DELIT_SIMPLE, 8);
	apply_type(0x138c1b8, "RTTIBase[1]");
	set_name(0x138c1b8, "HumanoidAnimatedStaggerState::sBases");

	// HumanoidAnimatedStaggerStateResource
	set_name(0x1388940, "RTTI_HumanoidAnimatedStaggerStateResource");
	apply_type(0x1388940, "RTTICompound");
	del_items(0x138c1c0, DELIT_SIMPLE, 8);
	apply_type(0x138c1c0, "RTTIBase[1]");
	set_name(0x138c1c0, "HumanoidAnimatedStaggerStateResource::sBases");

	// HumanoidBodyVariant
	set_name(0x1385cf0, "RTTI_HumanoidBodyVariant");
	apply_type(0x1385cf0, "RTTICompound");
	del_items(0x13861c8, DELIT_SIMPLE, 112);
	apply_type(0x13861c8, "RTTIAttr[4]");
	set_name(0x13861c8, "HumanoidBodyVariant::sAttrs");

	// HumanoidCinematicDeathSystem
	set_name(0x1388f48, "RTTI_HumanoidCinematicDeathSystem");
	apply_type(0x1388f48, "RTTICompound");
	del_items(0x138b0dc, DELIT_SIMPLE, 8);
	apply_type(0x138b0dc, "RTTIBase[1]");
	set_name(0x138b0dc, "HumanoidCinematicDeathSystem::sBases");

	// HumanoidCinematicDeathSystemResource
	set_name(0x1388fac, "RTTI_HumanoidCinematicDeathSystemResource");
	apply_type(0x1388fac, "RTTICompound");
	del_items(0x138c3ac, DELIT_SIMPLE, 8);
	apply_type(0x138c3ac, "RTTIBase[1]");
	set_name(0x138c3ac, "HumanoidCinematicDeathSystemResource::sBases");
	del_items(0x138c3b4, DELIT_SIMPLE, 84);
	apply_type(0x138c3b4, "RTTIAttr[3]");
	set_name(0x138c3b4, "HumanoidCinematicDeathSystemResource::sAttrs");

	// HumanoidController
	set_name(0x1385878, "RTTI_HumanoidController");
	apply_type(0x1385878, "RTTICompound");
	del_items(0x1387718, DELIT_SIMPLE, 8);
	apply_type(0x1387718, "RTTIBase[1]");
	set_name(0x1387718, "HumanoidController::sBases");

	// HumanoidCoverState
	set_name(0x1388994, "RTTI_HumanoidCoverState");
	apply_type(0x1388994, "RTTICompound");
	del_items(0x138bc28, DELIT_SIMPLE, 8);
	apply_type(0x138bc28, "RTTIBase[1]");
	set_name(0x138bc28, "HumanoidCoverState::sBases");

	// HumanoidCoverStateResource
	set_name(0x13889e8, "RTTI_HumanoidCoverStateResource");
	apply_type(0x13889e8, "RTTICompound");
	del_items(0x138bc38, DELIT_SIMPLE, 8);
	apply_type(0x138bc38, "RTTIBase[1]");
	set_name(0x138bc38, "HumanoidCoverStateResource::sBases");
	del_items(0x138bc40, DELIT_SIMPLE, 1288);
	apply_type(0x138bc40, "RTTIAttr[46]");
	set_name(0x138bc40, "HumanoidCoverStateResource::sAttrs");
	del_items(0x138c148, DELIT_SIMPLE, 12);
	apply_type(0x138c148, "RTTIMessageHandler[1]");
	set_name(0x138c148, "HumanoidCoverStateResource::sMessageHandlers");

	// HumanoidDeadState
	set_name(0x1388a3c, "RTTI_HumanoidDeadState");
	apply_type(0x1388a3c, "RTTICompound");
	del_items(0x138c1c8, DELIT_SIMPLE, 8);
	apply_type(0x138c1c8, "RTTIBase[1]");
	set_name(0x138c1c8, "HumanoidDeadState::sBases");

	// HumanoidDeadStateResource
	set_name(0x1388aa0, "RTTI_HumanoidDeadStateResource");
	apply_type(0x1388aa0, "RTTICompound");
	del_items(0x138c1d0, DELIT_SIMPLE, 8);
	apply_type(0x138c1d0, "RTTIBase[1]");
	set_name(0x138c1d0, "HumanoidDeadStateResource::sBases");
	del_items(0x138c1d8, DELIT_SIMPLE, 140);
	apply_type(0x138c1d8, "RTTIAttr[5]");
	set_name(0x138c1d8, "HumanoidDeadStateResource::sAttrs");

	// HumanoidDirectionalStaggerState
	set_name(0x1388af4, "RTTI_HumanoidDirectionalStaggerState");
	apply_type(0x1388af4, "RTTICompound");
	del_items(0x138c264, DELIT_SIMPLE, 8);
	apply_type(0x138c264, "RTTIBase[1]");
	set_name(0x138c264, "HumanoidDirectionalStaggerState::sBases");

	// HumanoidDirectionalStaggerStateResource
	set_name(0x1388b58, "RTTI_HumanoidDirectionalStaggerStateResource");
	apply_type(0x1388b58, "RTTICompound");
	del_items(0x138c26c, DELIT_SIMPLE, 8);
	apply_type(0x138c26c, "RTTIBase[1]");
	set_name(0x138c26c, "HumanoidDirectionalStaggerStateResource::sBases");
	del_items(0x138c274, DELIT_SIMPLE, 56);
	apply_type(0x138c274, "RTTIAttr[2]");
	set_name(0x138c274, "HumanoidDirectionalStaggerStateResource::sAttrs");

	// HumanoidFallOverState
	set_name(0x1388bac, "RTTI_HumanoidFallOverState");
	apply_type(0x1388bac, "RTTICompound");
	del_items(0x138b0c4, DELIT_SIMPLE, 8);
	apply_type(0x138b0c4, "RTTIBase[1]");
	set_name(0x138b0c4, "HumanoidFallOverState::sBases");

	// HumanoidFallOverStateResource
	set_name(0x1388c00, "RTTI_HumanoidFallOverStateResource");
	apply_type(0x1388c00, "RTTICompound");
	del_items(0x138c2ac, DELIT_SIMPLE, 8);
	apply_type(0x138c2ac, "RTTIBase[1]");
	set_name(0x138c2ac, "HumanoidFallOverStateResource::sBases");
	del_items(0x138c2b4, DELIT_SIMPLE, 168);
	apply_type(0x138c2b4, "RTTIAttr[6]");
	set_name(0x138c2b4, "HumanoidFallOverStateResource::sAttrs");

	// HumanoidFlyState
	set_name(0x1388c54, "RTTI_HumanoidFlyState");
	apply_type(0x1388c54, "RTTICompound");
	del_items(0x138c35c, DELIT_SIMPLE, 8);
	apply_type(0x138c35c, "RTTIBase[1]");
	set_name(0x138c35c, "HumanoidFlyState::sBases");

	// HumanoidFlyStateResource
	set_name(0x1388ca8, "RTTI_HumanoidFlyStateResource");
	apply_type(0x1388ca8, "RTTICompound");
	del_items(0x138c154, DELIT_SIMPLE, 8);
	apply_type(0x138c154, "RTTIBase[1]");
	set_name(0x138c154, "HumanoidFlyStateResource::sBases");
	del_items(0x138c15c, DELIT_SIMPLE, 84);
	apply_type(0x138c15c, "RTTIAttr[3]");
	set_name(0x138c15c, "HumanoidFlyStateResource::sAttrs");

	// HumanoidHitLocationMapping
	set_name(0x1385be4, "RTTI_HumanoidHitLocationMapping");
	apply_type(0x1385be4, "RTTICompound");
	del_items(0x1386190, DELIT_SIMPLE, 56);
	apply_type(0x1386190, "RTTIAttr[2]");
	set_name(0x1386190, "HumanoidHitLocationMapping::sAttrs");

	// HumanoidHitResponseBehaviour
	set_name(0x1385b90, "RTTI_HumanoidHitResponseBehaviour");
	apply_type(0x1385b90, "RTTICompound");
	del_items(0x13879ac, DELIT_SIMPLE, 8);
	apply_type(0x13879ac, "RTTIBase[1]");
	set_name(0x13879ac, "HumanoidHitResponseBehaviour::sBases");
	del_items(0x13879b4, DELIT_SIMPLE, 84);
	apply_type(0x13879b4, "RTTIAttr[3]");
	set_name(0x13879b4, "HumanoidHitResponseBehaviour::sAttrs");

	// HumanoidHitResponseBehaviourInput
	set_name(0x1385ab8, "RTTI_HumanoidHitResponseBehaviourInput");
	apply_type(0x1385ab8, "RTTICompound");
	del_items(0x1387720, DELIT_SIMPLE, 224);
	apply_type(0x1387720, "RTTIAttr[8]");
	set_name(0x1387720, "HumanoidHitResponseBehaviourInput::sAttrs");

	// HumanoidHitResponseBehaviourOutput
	set_name(0x1385b1c, "RTTI_HumanoidHitResponseBehaviourOutput");
	apply_type(0x1385b1c, "RTTICompound");
	del_items(0x1387800, DELIT_SIMPLE, 8);
	apply_type(0x1387800, "RTTIBase[1]");
	set_name(0x1387800, "HumanoidHitResponseBehaviourOutput::sBases");
	del_items(0x1387808, DELIT_SIMPLE, 420);
	apply_type(0x1387808, "RTTIAttr[15]");
	set_name(0x1387808, "HumanoidHitResponseBehaviourOutput::sAttrs");

	// HumanoidHitResponseResource
	set_name(0x1385c38, "RTTI_HumanoidHitResponseResource");
	apply_type(0x1385c38, "RTTICompound");
	del_items(0x138601c, DELIT_SIMPLE, 8);
	apply_type(0x138601c, "RTTIBase[1]");
	set_name(0x138601c, "HumanoidHitResponseResource::sBases");
	del_items(0x1386024, DELIT_SIMPLE, 364);
	apply_type(0x1386024, "RTTIAttr[13]");
	set_name(0x1386024, "HumanoidHitResponseResource::sAttrs");

	// HumanoidInventory
	set_name(0x138d224, "RTTI_HumanoidInventory");
	apply_type(0x138d224, "RTTICompound");
	del_items(0x138edd4, DELIT_SIMPLE, 8);
	apply_type(0x138edd4, "RTTIBase[1]");
	set_name(0x138edd4, "HumanoidInventory::sBases");

	// HumanoidKnockBackState
	set_name(0x1388cfc, "RTTI_HumanoidKnockBackState");
	apply_type(0x1388cfc, "RTTICompound");
	del_items(0x138b4c8, DELIT_SIMPLE, 8);
	apply_type(0x138b4c8, "RTTIBase[1]");
	set_name(0x138b4c8, "HumanoidKnockBackState::sBases");

	// HumanoidKnockBackStateResource
	set_name(0x1388d50, "RTTI_HumanoidKnockBackStateResource");
	apply_type(0x1388d50, "RTTICompound");
	del_items(0x138c364, DELIT_SIMPLE, 8);
	apply_type(0x138c364, "RTTIBase[1]");
	set_name(0x138c364, "HumanoidKnockBackStateResource::sBases");
	del_items(0x138c36c, DELIT_SIMPLE, 56);
	apply_type(0x138c36c, "RTTIAttr[2]");
	set_name(0x138c36c, "HumanoidKnockBackStateResource::sAttrs");

	// HumanoidLeanAndPeekState
	set_name(0x1388da4, "RTTI_HumanoidLeanAndPeekState");
	apply_type(0x1388da4, "RTTICompound");
	del_items(0x138bc0c, DELIT_SIMPLE, 8);
	apply_type(0x138bc0c, "RTTIBase[1]");
	set_name(0x138bc0c, "HumanoidLeanAndPeekState::sBases");

	// HumanoidLeanAndPeekStateResource
	set_name(0x1388df8, "RTTI_HumanoidLeanAndPeekStateResource");
	apply_type(0x1388df8, "RTTICompound");
	del_items(0x138ba98, DELIT_SIMPLE, 8);
	apply_type(0x138ba98, "RTTIBase[1]");
	set_name(0x138ba98, "HumanoidLeanAndPeekStateResource::sBases");
	del_items(0x138baa0, DELIT_SIMPLE, 364);
	apply_type(0x138baa0, "RTTIAttr[13]");
	set_name(0x138baa0, "HumanoidLeanAndPeekStateResource::sAttrs");

	// HumanoidMover
	set_name(0x13a55b0, "RTTI_HumanoidMover");
	apply_type(0x13a55b0, "RTTICompound");
	del_items(0x13a5c38, DELIT_SIMPLE, 8);
	apply_type(0x13a5c38, "RTTIBase[1]");
	set_name(0x13a5c38, "HumanoidMover::sBases");
	del_items(0x13a5c40, DELIT_SIMPLE, 24);
	apply_type(0x13a5c40, "RTTIFunction[1]");
	set_name(0x13a5c40, "HumanoidMover::sFunctions");

	// HumanoidMoverResource
	set_name(0x13a5604, "RTTI_HumanoidMoverResource");
	apply_type(0x13a5604, "RTTICompound");
	del_items(0x13a5c58, DELIT_SIMPLE, 8);
	apply_type(0x13a5c58, "RTTIBase[1]");
	set_name(0x13a5c58, "HumanoidMoverResource::sBases");
	del_items(0x13a5c60, DELIT_SIMPLE, 56);
	apply_type(0x13a5c60, "RTTIAttr[2]");
	set_name(0x13a5c60, "HumanoidMoverResource::sAttrs");

	// HumanoidRep
	set_name(0x1385c8c, "RTTI_HumanoidRep");
	apply_type(0x1385c8c, "RTTICompound");
	del_items(0x1387a08, DELIT_SIMPLE, 8);
	apply_type(0x1387a08, "RTTIBase[1]");
	set_name(0x1387a08, "HumanoidRep::sBases");

	// HumanoidResource
	set_name(0x1385e0c, "RTTI_HumanoidResource");
	apply_type(0x1385e0c, "RTTICompound");
	del_items(0x1386310, DELIT_SIMPLE, 8);
	apply_type(0x1386310, "RTTIBase[1]");
	set_name(0x1386310, "HumanoidResource::sBases");
	del_items(0x1387700, DELIT_SIMPLE, 24);
	apply_type(0x1387700, "RTTIMessageHandler[2]");
	set_name(0x1387700, "HumanoidResource::sMessageHandlers");

	// HumanoidSubState
	set_name(0x1388e4c, "RTTI_HumanoidSubState");
	apply_type(0x1388e4c, "RTTICompound");
	del_items(0x138b0b4, DELIT_SIMPLE, 16);
	apply_type(0x138b0b4, "RTTIBase[2]");
	set_name(0x138b0b4, "HumanoidSubState::sBases");

	// HumanoidSubStatePoseOverriddenByInteractiveEntity
	set_name(0x1389000, "RTTI_HumanoidSubStatePoseOverriddenByInteractiveEntity");
	apply_type(0x1389000, "RTTICompound");
	del_items(0x138c408, DELIT_SIMPLE, 8);
	apply_type(0x138c408, "RTTIBase[1]");
	set_name(0x138c408, "HumanoidSubStatePoseOverriddenByInteractiveEntity::sBases");

	// HumanoidSubStatePoseOverriddenByInteractiveEntityResource
	set_name(0x1389054, "RTTI_HumanoidSubStatePoseOverriddenByInteractiveEntityResource");
	apply_type(0x1389054, "RTTICompound");
	del_items(0x138c410, DELIT_SIMPLE, 8);
	apply_type(0x138c410, "RTTIBase[1]");
	set_name(0x138c410, "HumanoidSubStatePoseOverriddenByInteractiveEntityResource::sBases");
	del_items(0x138c418, DELIT_SIMPLE, 84);
	apply_type(0x138c418, "RTTIAttr[3]");
	set_name(0x138c418, "HumanoidSubStatePoseOverriddenByInteractiveEntityResource::sAttrs");

	// HumanoidSubStateResource
	set_name(0x13890a8, "RTTI_HumanoidSubStateResource");
	apply_type(0x13890a8, "RTTICompound");
	del_items(0x138b708, DELIT_SIMPLE, 8);
	apply_type(0x138b708, "RTTIBase[1]");
	set_name(0x138b708, "HumanoidSubStateResource::sBases");
	del_items(0x138b710, DELIT_SIMPLE, 140);
	apply_type(0x138b710, "RTTIAttr[5]");
	set_name(0x138b710, "HumanoidSubStateResource::sAttrs");

	// HumanoidSubStateUsingInteractiveEntity
	set_name(0x13890fc, "RTTI_HumanoidSubStateUsingInteractiveEntity");
	apply_type(0x13890fc, "RTTICompound");
	del_items(0x138ba88, DELIT_SIMPLE, 8);
	apply_type(0x138ba88, "RTTIBase[1]");
	set_name(0x138ba88, "HumanoidSubStateUsingInteractiveEntity::sBases");

	// HumanoidSubStateUsingInteractiveEntityResource
	set_name(0x1389170, "RTTI_HumanoidSubStateUsingInteractiveEntityResource");
	apply_type(0x1389170, "RTTICompound");
	del_items(0x138ba90, DELIT_SIMPLE, 8);
	apply_type(0x138ba90, "RTTIBase[1]");
	set_name(0x138ba90, "HumanoidSubStateUsingInteractiveEntityResource::sBases");

	// HumanoidSubSystem
	set_name(0x1388ea0, "RTTI_HumanoidSubSystem");
	apply_type(0x1388ea0, "RTTICompound");
	del_items(0x138b0cc, DELIT_SIMPLE, 16);
	apply_type(0x138b0cc, "RTTIBase[2]");
	set_name(0x138b0cc, "HumanoidSubSystem::sBases");

	// HumanoidSubSystemResource
	set_name(0x1388ef4, "RTTI_HumanoidSubSystemResource");
	apply_type(0x1388ef4, "RTTICompound");
	del_items(0x138c3a4, DELIT_SIMPLE, 8);
	apply_type(0x138c3a4, "RTTIBase[1]");
	set_name(0x138c3a4, "HumanoidSubSystemResource::sBases");

	// HumanoidWalkState
	set_name(0x13891c4, "RTTI_HumanoidWalkState");
	apply_type(0x13891c4, "RTTICompound");
	del_items(0x138b700, DELIT_SIMPLE, 8);
	apply_type(0x138b700, "RTTIBase[1]");
	set_name(0x138b700, "HumanoidWalkState::sBases");

	// HumanoidWalkStateResource
	set_name(0x1389218, "RTTI_HumanoidWalkStateResource");
	apply_type(0x1389218, "RTTICompound");
	del_items(0x138b79c, DELIT_SIMPLE, 8);
	apply_type(0x138b79c, "RTTIBase[1]");
	set_name(0x138b79c, "HumanoidWalkStateResource::sBases");
	del_items(0x138b7a4, DELIT_SIMPLE, 728);
	apply_type(0x138b7a4, "RTTIAttr[26]");
	set_name(0x138b7a4, "HumanoidWalkStateResource::sAttrs");
	del_items(0x138ba7c, DELIT_SIMPLE, 12);
	apply_type(0x138ba7c, "RTTIMessageHandler[1]");
	set_name(0x138ba7c, "HumanoidWalkStateResource::sMessageHandlers");

	// IBLUsageFlags
	set_name(0x1345208, "RTTI_IBLUsageFlags");
	apply_type(0x1345208, "RTTICompound");
	del_items(0x134606c, DELIT_SIMPLE, 28);
	apply_type(0x134606c, "RTTIAttr[1]");
	set_name(0x134606c, "IBLUsageFlags::sAttrs");

	// IParticleSysVar
	set_name(0x1341048, "RTTI_IParticleSysVar");
	apply_type(0x1341048, "RTTICompound");
	del_items(0x1341328, DELIT_SIMPLE, 56);
	apply_type(0x1341328, "RTTIAttr[2]");
	set_name(0x1341328, "IParticleSysVar::sAttrs");

	// IRange
	set_name(0x1328894, "RTTI_IRange");
	apply_type(0x1328894, "RTTICompound");
	del_items(0x1328d1c, DELIT_SIMPLE, 56);
	apply_type(0x1328d1c, "RTTIAttr[2]");
	set_name(0x1328d1c, "IRange::sAttrs");

	// IRect
	set_name(0x1334f2c, "RTTI_IRect");
	apply_type(0x1334f2c, "RTTICompound");
	del_items(0x133564c, DELIT_SIMPLE, 112);
	apply_type(0x133564c, "RTTIAttr[4]");
	set_name(0x133564c, "IRect::sAttrs");

	// ISize
	set_name(0x13351cc, "RTTI_ISize");
	apply_type(0x13351cc, "RTTICompound");
	del_items(0x13355dc, DELIT_SIMPLE, 56);
	apply_type(0x13355dc, "RTTIAttr[2]");
	set_name(0x13355dc, "ISize::sAttrs");

	// IVector2
	set_name(0x1334f80, "RTTI_IVector2");
	apply_type(0x1334f80, "RTTICompound");
	del_items(0x1335614, DELIT_SIMPLE, 56);
	apply_type(0x1335614, "RTTIAttr[2]");
	set_name(0x1335614, "IVector2::sAttrs");

	// IVector3
	set_name(0x1334fd4, "RTTI_IVector3");
	apply_type(0x1334fd4, "RTTICompound");
	del_items(0x133572c, DELIT_SIMPLE, 84);
	apply_type(0x133572c, "RTTIAttr[3]");
	set_name(0x133572c, "IVector3::sAttrs");

	// IceSawMover
	set_name(0x13a58a4, "RTTI_IceSawMover");
	apply_type(0x13a58a4, "RTTICompound");
	del_items(0x13a6184, DELIT_SIMPLE, 8);
	apply_type(0x13a6184, "RTTIBase[1]");
	set_name(0x13a6184, "IceSawMover::sBases");
	del_items(0x13a618c, DELIT_SIMPLE, 48);
	apply_type(0x13a618c, "RTTIFunction[2]");
	set_name(0x13a618c, "IceSawMover::sFunctions");

	// IceSawMoverResource
	set_name(0x13a58f8, "RTTI_IceSawMoverResource");
	apply_type(0x13a58f8, "RTTICompound");
	del_items(0x13a61bc, DELIT_SIMPLE, 8);
	apply_type(0x13a61bc, "RTTIBase[1]");
	set_name(0x13a61bc, "IceSawMoverResource::sBases");
	del_items(0x13a61c4, DELIT_SIMPLE, 112);
	apply_type(0x13a61c4, "RTTIAttr[4]");
	set_name(0x13a61c4, "IceSawMoverResource::sAttrs");

	// IceSawVehicle
	set_name(0x138310c, "RTTI_IceSawVehicle");
	apply_type(0x138310c, "RTTICompound");
	del_items(0x1384a58, DELIT_SIMPLE, 8);
	apply_type(0x1384a58, "RTTIBase[1]");
	set_name(0x1384a58, "IceSawVehicle::sBases");

	// IceSawVehicleJoystickController
	set_name(0x1382f04, "RTTI_IceSawVehicleJoystickController");
	apply_type(0x1382f04, "RTTICompound");
	del_items(0x1384a60, DELIT_SIMPLE, 8);
	apply_type(0x1384a60, "RTTIBase[1]");
	set_name(0x1384a60, "IceSawVehicleJoystickController::sBases");

	// IceSawVehicleRep
	set_name(0x1383160, "RTTI_IceSawVehicleRep");
	apply_type(0x1383160, "RTTICompound");
	del_items(0x1384edc, DELIT_SIMPLE, 8);
	apply_type(0x1384edc, "RTTIBase[1]");
	set_name(0x1384edc, "IceSawVehicleRep::sBases");

	// IceSawVehicleResource
	set_name(0x13835b4, "RTTI_IceSawVehicleResource");
	apply_type(0x13835b4, "RTTICompound");
	del_items(0x138475c, DELIT_SIMPLE, 8);
	apply_type(0x138475c, "RTTIBase[1]");
	set_name(0x138475c, "IceSawVehicleResource::sBases");
	del_items(0x1384764, DELIT_SIMPLE, 756);
	apply_type(0x1384764, "RTTIAttr[27]");
	set_name(0x1384764, "IceSawVehicleResource::sAttrs");

	// IgnoreEntityEventInstance
	set_name(0x1394ca4, "RTTI_IgnoreEntityEventInstance");
	apply_type(0x1394ca4, "RTTICompound");
	del_items(0x13967a8, DELIT_SIMPLE, 8);
	apply_type(0x13967a8, "RTTIBase[1]");
	set_name(0x13967a8, "IgnoreEntityEventInstance::sBases");

	// IgnoreEntityEventResource
	set_name(0x1394c50, "RTTI_IgnoreEntityEventResource");
	apply_type(0x1394c50, "RTTICompound");
	del_items(0x1396768, DELIT_SIMPLE, 8);
	apply_type(0x1396768, "RTTIBase[1]");
	set_name(0x1396768, "IgnoreEntityEventResource::sBases");
	del_items(0x1396770, DELIT_SIMPLE, 56);
	apply_type(0x1396770, "RTTIAttr[2]");
	set_name(0x1396770, "IgnoreEntityEventResource::sAttrs");

	// ImageMap
	set_name(0x1345da4, "RTTI_ImageMap");
	apply_type(0x1345da4, "RTTICompound");
	del_items(0x134689c, DELIT_SIMPLE, 8);
	apply_type(0x134689c, "RTTIBase[1]");
	set_name(0x134689c, "ImageMap::sBases");
	del_items(0x13468a4, DELIT_SIMPLE, 84);
	apply_type(0x13468a4, "RTTIAttr[3]");
	set_name(0x13468a4, "ImageMap::sAttrs");

	// ImpactEffectEventInstance
	set_name(0x1394d4c, "RTTI_ImpactEffectEventInstance");
	apply_type(0x1394d4c, "RTTICompound");
	del_items(0x139687c, DELIT_SIMPLE, 8);
	apply_type(0x139687c, "RTTIBase[1]");
	set_name(0x139687c, "ImpactEffectEventInstance::sBases");

	// ImpactEffectEventResource
	set_name(0x1394cf8, "RTTI_ImpactEffectEventResource");
	apply_type(0x1394cf8, "RTTICompound");
	del_items(0x13967b0, DELIT_SIMPLE, 8);
	apply_type(0x13967b0, "RTTIBase[1]");
	set_name(0x13967b0, "ImpactEffectEventResource::sBases");
	del_items(0x13967b8, DELIT_SIMPLE, 196);
	apply_type(0x13967b8, "RTTIAttr[7]");
	set_name(0x13967b8, "ImpactEffectEventResource::sAttrs");

	// ImpactEffectInstance
	set_name(0x1339910, "RTTI_ImpactEffectInstance");
	apply_type(0x1339910, "RTTICompound");
	del_items(0x133abf0, DELIT_SIMPLE, 8);
	apply_type(0x133abf0, "RTTIBase[1]");
	set_name(0x133abf0, "ImpactEffectInstance::sBases");

	// ImpactEffectLight
	set_name(0x1339a1c, "RTTI_ImpactEffectLight");
	apply_type(0x1339a1c, "RTTICompound");
	del_items(0x133a73c, DELIT_SIMPLE, 112);
	apply_type(0x133a73c, "RTTIAttr[4]");
	set_name(0x133a73c, "ImpactEffectLight::sAttrs");

	// ImpactEffectParticles
	set_name(0x13399c8, "RTTI_ImpactEffectParticles");
	apply_type(0x13399c8, "RTTICompound");
	del_items(0x133a6cc, DELIT_SIMPLE, 112);
	apply_type(0x133a6cc, "RTTIAttr[4]");
	set_name(0x133a6cc, "ImpactEffectParticles::sAttrs");

	// ImpactEffectRegionOverride
	set_name(0x1339ae4, "RTTI_ImpactEffectRegionOverride");
	apply_type(0x1339ae4, "RTTICompound");
	del_items(0x133a854, DELIT_SIMPLE, 56);
	apply_type(0x133a854, "RTTIAttr[2]");
	set_name(0x133a854, "ImpactEffectRegionOverride::sAttrs");

	// ImpactEffectResource
	set_name(0x1339b38, "RTTI_ImpactEffectResource");
	apply_type(0x1339b38, "RTTICompound");
	del_items(0x133a88c, DELIT_SIMPLE, 8);
	apply_type(0x133a88c, "RTTIBase[1]");
	set_name(0x133a88c, "ImpactEffectResource::sBases");
	del_items(0x133a894, DELIT_SIMPLE, 476);
	apply_type(0x133a894, "RTTIAttr[17]");
	set_name(0x133a894, "ImpactEffectResource::sAttrs");

	// ImpactEffectSound
	set_name(0x1339964, "RTTI_ImpactEffectSound");
	apply_type(0x1339964, "RTTICompound");
	del_items(0x133a65c, DELIT_SIMPLE, 112);
	apply_type(0x133a65c, "RTTIAttr[4]");
	set_name(0x133a65c, "ImpactEffectSound::sAttrs");

	// ImpactEffectSystemSettings
	set_name(0x1339b90, "RTTI_ImpactEffectSystemSettings");
	apply_type(0x1339b90, "RTTICompound");
	del_items(0x133abf8, DELIT_SIMPLE, 8);
	apply_type(0x133abf8, "RTTIBase[1]");
	set_name(0x133abf8, "ImpactEffectSystemSettings::sBases");
	del_items(0x133ac00, DELIT_SIMPLE, 140);
	apply_type(0x133ac00, "RTTIAttr[5]");
	set_name(0x133ac00, "ImpactEffectSystemSettings::sAttrs");

	// ImpactEffectSystemSettingsGame
	set_name(0x13ab534, "RTTI_ImpactEffectSystemSettingsGame");
	apply_type(0x13ab534, "RTTICompound");
	del_items(0x13abd94, DELIT_SIMPLE, 8);
	apply_type(0x13abd94, "RTTIBase[1]");
	set_name(0x13abd94, "ImpactEffectSystemSettingsGame::sBases");
	del_items(0x13abd9c, DELIT_SIMPLE, 84);
	apply_type(0x13abd9c, "RTTIAttr[3]");
	set_name(0x13abd9c, "ImpactEffectSystemSettingsGame::sAttrs");

	// ImpactEffectVariation
	set_name(0x1339a80, "RTTI_ImpactEffectVariation");
	apply_type(0x1339a80, "RTTICompound");
	del_items(0x133a7ac, DELIT_SIMPLE, 168);
	apply_type(0x133a7ac, "RTTIAttr[6]");
	set_name(0x133a7ac, "ImpactEffectVariation::sAttrs");

	// IndexArrayResource
	set_name(0x13456ac, "RTTI_IndexArrayResource");
	apply_type(0x13456ac, "RTTICompound");
	del_items(0x1345eec, DELIT_SIMPLE, 8);
	apply_type(0x1345eec, "RTTIBase[1]");
	set_name(0x1345eec, "IndexArrayResource::sBases");
	del_items(0x1345ef4, DELIT_SIMPLE, 12);
	apply_type(0x1345ef4, "RTTIMessageHandler[1]");
	set_name(0x1345ef4, "IndexArrayResource::sMessageHandlers");

	// InertiaPathMover
	set_name(0x13a5a58, "RTTI_InertiaPathMover");
	apply_type(0x13a5a58, "RTTICompound");
	del_items(0x13a6290, DELIT_SIMPLE, 8);
	apply_type(0x13a6290, "RTTIBase[1]");
	set_name(0x13a6290, "InertiaPathMover::sBases");

	// InertiaPathMoverResource
	set_name(0x13a5aac, "RTTI_InertiaPathMoverResource");
	apply_type(0x13a5aac, "RTTICompound");
	del_items(0x13a6234, DELIT_SIMPLE, 8);
	apply_type(0x13a6234, "RTTIBase[1]");
	set_name(0x13a6234, "InertiaPathMoverResource::sBases");
	del_items(0x13a623c, DELIT_SIMPLE, 84);
	apply_type(0x13a623c, "RTTIAttr[3]");
	set_name(0x13a623c, "InertiaPathMoverResource::sAttrs");

	// InfoDialogTag
	set_name(0x133cdb8, "RTTI_InfoDialogTag");
	apply_type(0x133cdb8, "RTTICompound");
	del_items(0x133f270, DELIT_SIMPLE, 8);
	apply_type(0x133f270, "RTTIBase[1]");
	set_name(0x133f270, "InfoDialogTag::sBases");

	// InputTag
	set_name(0x133cfb0, "RTTI_InputTag");
	apply_type(0x133cfb0, "RTTICompound");
	del_items(0x133f58c, DELIT_SIMPLE, 8);
	apply_type(0x133f58c, "RTTIBase[1]");
	set_name(0x133f58c, "InputTag::sBases");
	del_items(0x133f594, DELIT_SIMPLE, 24);
	apply_type(0x133f594, "RTTIFunction[1]");
	set_name(0x133f594, "InputTag::sFunctions");

	// InputWidget
	set_name(0x133d900, "RTTI_InputWidget");
	apply_type(0x133d900, "RTTICompound");
	del_items(0x133f7c0, DELIT_SIMPLE, 8);
	apply_type(0x133f7c0, "RTTIBase[1]");
	set_name(0x133f7c0, "InputWidget::sBases");

	// Instigator
	set_name(0x1363524, "RTTI_Instigator");
	apply_type(0x1363524, "RTTICompound");
	del_items(0x1363a28, DELIT_SIMPLE, 16);
	apply_type(0x1363a28, "RTTIBase[2]");
	set_name(0x1363a28, "Instigator::sBases");

	// IntPerDifficulty
	set_name(0x1367c38, "RTTI_IntPerDifficulty");
	apply_type(0x1367c38, "RTTICompound");
	del_items(0x136a388, DELIT_SIMPLE, 56);
	apply_type(0x136a388, "RTTIAttr[2]");
	set_name(0x136a388, "IntPerDifficulty::sAttrs");

	// InteractionEffectComponent
	set_name(0x138a04c, "RTTI_InteractionEffectComponent");
	apply_type(0x138a04c, "RTTICompound");
	del_items(0x138cad0, DELIT_SIMPLE, 8);
	apply_type(0x138cad0, "RTTIBase[1]");
	set_name(0x138cad0, "InteractionEffectComponent::sBases");

	// InteractionEffectComponentResource
	set_name(0x138a0a0, "RTTI_InteractionEffectComponentResource");
	apply_type(0x138a0a0, "RTTICompound");
	del_items(0x138ca70, DELIT_SIMPLE, 8);
	apply_type(0x138ca70, "RTTIBase[1]");
	set_name(0x138ca70, "InteractionEffectComponentResource::sBases");
	del_items(0x138ca78, DELIT_SIMPLE, 84);
	apply_type(0x138ca78, "RTTIAttr[3]");
	set_name(0x138ca78, "InteractionEffectComponentResource::sAttrs");

	// InteractiveEntity
	set_name(0x137ab8c, "RTTI_InteractiveEntity");
	apply_type(0x137ab8c, "RTTICompound");
	del_items(0x137c51c, DELIT_SIMPLE, 8);
	apply_type(0x137c51c, "RTTIBase[1]");
	set_name(0x137c51c, "InteractiveEntity::sBases");
	del_items(0x137c524, DELIT_SIMPLE, 84);
	apply_type(0x137c524, "RTTIAttr[3]");
	set_name(0x137c524, "InteractiveEntity::sAttrs");
	del_items(0x137c578, DELIT_SIMPLE, 168);
	apply_type(0x137c578, "RTTIFunction[7]");
	set_name(0x137c578, "InteractiveEntity::sFunctions");

	// InteractiveEntityActorInstance
	set_name(0x139a97c, "RTTI_InteractiveEntityActorInstance");
	apply_type(0x139a97c, "RTTICompound");
	del_items(0x139bd64, DELIT_SIMPLE, 8);
	apply_type(0x139bd64, "RTTIBase[1]");
	set_name(0x139bd64, "InteractiveEntityActorInstance::sBases");

	// InteractiveEntityActorResource
	set_name(0x139a928, "RTTI_InteractiveEntityActorResource");
	apply_type(0x139a928, "RTTICompound");
	del_items(0x139bd5c, DELIT_SIMPLE, 8);
	apply_type(0x139bd5c, "RTTIBase[1]");
	set_name(0x139bd5c, "InteractiveEntityActorResource::sBases");

	// InteractiveEntityController
	set_name(0x137abe0, "RTTI_InteractiveEntityController");
	apply_type(0x137abe0, "RTTICompound");
	del_items(0x137c634, DELIT_SIMPLE, 8);
	apply_type(0x137c634, "RTTIBase[1]");
	set_name(0x137c634, "InteractiveEntityController::sBases");

	// InteractiveEntityIKTargetInfo
	set_name(0x137cb24, "RTTI_InteractiveEntityIKTargetInfo");
	apply_type(0x137cb24, "RTTICompound");
	del_items(0x137d9a8, DELIT_SIMPLE, 84);
	apply_type(0x137d9a8, "RTTIAttr[3]");
	set_name(0x137d9a8, "InteractiveEntityIKTargetInfo::sAttrs");

	// InteractiveEntityRep
	set_name(0x137c9d8, "RTTI_InteractiveEntityRep");
	apply_type(0x137c9d8, "RTTICompound");
	del_items(0x137d7c4, DELIT_SIMPLE, 8);
	apply_type(0x137d7c4, "RTTIBase[1]");
	set_name(0x137d7c4, "InteractiveEntityRep::sBases");

	// InteractiveEntityResource
	set_name(0x137cb78, "RTTI_InteractiveEntityResource");
	apply_type(0x137cb78, "RTTICompound");
	del_items(0x137da08, DELIT_SIMPLE, 8);
	apply_type(0x137da08, "RTTIBase[1]");
	set_name(0x137da08, "InteractiveEntityResource::sBases");
	del_items(0x137da10, DELIT_SIMPLE, 896);
	apply_type(0x137da10, "RTTIAttr[32]");
	set_name(0x137da10, "InteractiveEntityResource::sAttrs");
	del_items(0x137dd90, DELIT_SIMPLE, 24);
	apply_type(0x137dd90, "RTTIMessageHandler[2]");
	set_name(0x137dd90, "InteractiveEntityResource::sMessageHandlers");

	// InteractiveMover
	set_name(0x13a5658, "RTTI_InteractiveMover");
	apply_type(0x13a5658, "RTTICompound");
	del_items(0x13a5c98, DELIT_SIMPLE, 8);
	apply_type(0x13a5c98, "RTTIBase[1]");
	set_name(0x13a5c98, "InteractiveMover::sBases");

	// InteractiveMoverResource
	set_name(0x13a56ac, "RTTI_InteractiveMoverResource");
	apply_type(0x13a56ac, "RTTICompound");
	del_items(0x13a5ca0, DELIT_SIMPLE, 8);
	apply_type(0x13a5ca0, "RTTIBase[1]");
	set_name(0x13a5ca0, "InteractiveMoverResource::sBases");

	// Inventory
	set_name(0x138d1d0, "RTTI_Inventory");
	apply_type(0x138d1d0, "RTTICompound");
	del_items(0x138edc8, DELIT_SIMPLE, 8);
	apply_type(0x138edc8, "RTTIBase[1]");
	set_name(0x138edc8, "Inventory::sBases");

	// InventoryAirSupport
	set_name(0x1391e20, "RTTI_InventoryAirSupport");
	apply_type(0x1391e20, "RTTICompound");
	del_items(0x1392c20, DELIT_SIMPLE, 8);
	apply_type(0x1392c20, "RTTIBase[1]");
	set_name(0x1392c20, "InventoryAirSupport::sBases");

	// InventoryAirSupportPickUpResource
	set_name(0x1391fd4, "RTTI_InventoryAirSupportPickUpResource");
	apply_type(0x1391fd4, "RTTICompound");
	del_items(0x1392d5c, DELIT_SIMPLE, 8);
	apply_type(0x1392d5c, "RTTIBase[1]");
	set_name(0x1392d5c, "InventoryAirSupportPickUpResource::sBases");

	// InventoryAirSupportResource
	set_name(0x1391e74, "RTTI_InventoryAirSupportResource");
	apply_type(0x1391e74, "RTTICompound");
	del_items(0x1392be0, DELIT_SIMPLE, 8);
	apply_type(0x1392be0, "RTTIBase[1]");
	set_name(0x1392be0, "InventoryAirSupportResource::sBases");
	del_items(0x1392be8, DELIT_SIMPLE, 56);
	apply_type(0x1392be8, "RTTIAttr[2]");
	set_name(0x1392be8, "InventoryAirSupportResource::sAttrs");

	// InventoryAmmoEjector
	set_name(0x138db1c, "RTTI_InventoryAmmoEjector");
	apply_type(0x138db1c, "RTTICompound");
	del_items(0x1390510, DELIT_SIMPLE, 8);
	apply_type(0x1390510, "RTTIBase[1]");
	set_name(0x1390510, "InventoryAmmoEjector::sBases");

	// InventoryAmmoEjectorRep
	set_name(0x138db70, "RTTI_InventoryAmmoEjectorRep");
	apply_type(0x138db70, "RTTICompound");
	del_items(0x1390a2c, DELIT_SIMPLE, 8);
	apply_type(0x1390a2c, "RTTIBase[1]");
	set_name(0x1390a2c, "InventoryAmmoEjectorRep::sBases");

	// InventoryAmmoEjectorResource
	set_name(0x138dbc4, "RTTI_InventoryAmmoEjectorResource");
	apply_type(0x138dbc4, "RTTICompound");
	del_items(0x138fe5c, DELIT_SIMPLE, 8);
	apply_type(0x138fe5c, "RTTIBase[1]");
	set_name(0x138fe5c, "InventoryAmmoEjectorResource::sBases");
	del_items(0x138fe64, DELIT_SIMPLE, 1708);
	apply_type(0x138fe64, "RTTIAttr[61]");
	set_name(0x138fe64, "InventoryAmmoEjectorResource::sAttrs");

	// InventoryBoostAbility
	set_name(0x1392124, "RTTI_InventoryBoostAbility");
	apply_type(0x1392124, "RTTICompound");
	del_items(0x1392ddc, DELIT_SIMPLE, 8);
	apply_type(0x1392ddc, "RTTIBase[1]");
	set_name(0x1392ddc, "InventoryBoostAbility::sBases");

	// InventoryBoostAbilityRep
	set_name(0x13921cc, "RTTI_InventoryBoostAbilityRep");
	apply_type(0x13921cc, "RTTICompound");
	del_items(0x1392ec8, DELIT_SIMPLE, 8);
	apply_type(0x1392ec8, "RTTIBase[1]");
	set_name(0x1392ec8, "InventoryBoostAbilityRep::sBases");

	// InventoryBoostAbilityResource
	set_name(0x1392178, "RTTI_InventoryBoostAbilityResource");
	apply_type(0x1392178, "RTTICompound");
	del_items(0x1392df0, DELIT_SIMPLE, 8);
	apply_type(0x1392df0, "RTTIBase[1]");
	set_name(0x1392df0, "InventoryBoostAbilityResource::sBases");
	del_items(0x1392df8, DELIT_SIMPLE, 196);
	apply_type(0x1392df8, "RTTIAttr[7]");
	set_name(0x1392df8, "InventoryBoostAbilityResource::sAttrs");
	del_items(0x1392ebc, DELIT_SIMPLE, 12);
	apply_type(0x1392ebc, "RTTIMessageHandler[1]");
	set_name(0x1392ebc, "InventoryBoostAbilityResource::sMessageHandlers");

	// InventoryC4
	set_name(0x138d6c8, "RTTI_InventoryC4");
	apply_type(0x138d6c8, "RTTICompound");
	del_items(0x138fdac, DELIT_SIMPLE, 8);
	apply_type(0x138fdac, "RTTIBase[1]");
	set_name(0x138fdac, "InventoryC4::sBases");

	// InventoryC4Rep
	set_name(0x138d71c, "RTTI_InventoryC4Rep");
	apply_type(0x138d71c, "RTTICompound");
	del_items(0x138fdbc, DELIT_SIMPLE, 8);
	apply_type(0x138fdbc, "RTTIBase[1]");
	set_name(0x138fdbc, "InventoryC4Rep::sBases");

	// InventoryC4Resource
	set_name(0x138d770, "RTTI_InventoryC4Resource");
	apply_type(0x138d770, "RTTICompound");
	del_items(0x138fd6c, DELIT_SIMPLE, 8);
	apply_type(0x138fd6c, "RTTIBase[1]");
	set_name(0x138fd6c, "InventoryC4Resource::sBases");
	del_items(0x138fd74, DELIT_SIMPLE, 56);
	apply_type(0x138fd74, "RTTIAttr[2]");
	set_name(0x138fd74, "InventoryC4Resource::sAttrs");

	// InventoryCaptureSpawnAbility
	set_name(0x1392370, "RTTI_InventoryCaptureSpawnAbility");
	apply_type(0x1392370, "RTTICompound");
	del_items(0x1393004, DELIT_SIMPLE, 8);
	apply_type(0x1393004, "RTTIBase[1]");
	set_name(0x1393004, "InventoryCaptureSpawnAbility::sBases");

	// InventoryCaptureSpawnAbilityResource
	set_name(0x13923e4, "RTTI_InventoryCaptureSpawnAbilityResource");
	apply_type(0x13923e4, "RTTICompound");
	del_items(0x1393018, DELIT_SIMPLE, 8);
	apply_type(0x1393018, "RTTIBase[1]");
	set_name(0x1393018, "InventoryCaptureSpawnAbilityResource::sBases");
	del_items(0x1393020, DELIT_SIMPLE, 112);
	apply_type(0x1393020, "RTTIAttr[4]");
	set_name(0x1393020, "InventoryCaptureSpawnAbilityResource::sAttrs");

	// InventoryCollectable
	set_name(0x138dd14, "RTTI_InventoryCollectable");
	apply_type(0x138dd14, "RTTICompound");
	del_items(0x1390c6c, DELIT_SIMPLE, 8);
	apply_type(0x1390c6c, "RTTIBase[1]");
	set_name(0x1390c6c, "InventoryCollectable::sBases");

	// InventoryCollectableResource
	set_name(0x138dd68, "RTTI_InventoryCollectableResource");
	apply_type(0x138dd68, "RTTICompound");
	del_items(0x1390c2c, DELIT_SIMPLE, 8);
	apply_type(0x1390c2c, "RTTIBase[1]");
	set_name(0x1390c2c, "InventoryCollectableResource::sBases");
	del_items(0x1390c34, DELIT_SIMPLE, 56);
	apply_type(0x1390c34, "RTTIAttr[2]");
	set_name(0x1390c34, "InventoryCollectableResource::sAttrs");

	// InventoryDetonator
	set_name(0x138d7c4, "RTTI_InventoryDetonator");
	apply_type(0x138d7c4, "RTTICompound");
	del_items(0x138fe48, DELIT_SIMPLE, 8);
	apply_type(0x138fe48, "RTTIBase[1]");
	set_name(0x138fe48, "InventoryDetonator::sBases");

	// InventoryDetonatorResource
	set_name(0x138d818, "RTTI_InventoryDetonatorResource");
	apply_type(0x138d818, "RTTICompound");
	del_items(0x138fdd0, DELIT_SIMPLE, 8);
	apply_type(0x138fdd0, "RTTIBase[1]");
	set_name(0x138fdd0, "InventoryDetonatorResource::sBases");
	del_items(0x138fdd8, DELIT_SIMPLE, 112);
	apply_type(0x138fdd8, "RTTIAttr[4]");
	set_name(0x138fdd8, "InventoryDetonatorResource::sAttrs");

	// InventoryDisguiseAbility
	set_name(0x138e550, "RTTI_InventoryDisguiseAbility");
	apply_type(0x138e550, "RTTICompound");
	del_items(0x13917e4, DELIT_SIMPLE, 8);
	apply_type(0x13917e4, "RTTIBase[1]");
	set_name(0x13917e4, "InventoryDisguiseAbility::sBases");

	// InventoryDisguiseAbilityRep
	set_name(0x138e5a4, "RTTI_InventoryDisguiseAbilityRep");
	apply_type(0x138e5a4, "RTTICompound");
	del_items(0x13917ec, DELIT_SIMPLE, 8);
	apply_type(0x13917ec, "RTTIBase[1]");
	set_name(0x13917ec, "InventoryDisguiseAbilityRep::sBases");

	// InventoryDisguiseAbilityResource
	set_name(0x138e5f8, "RTTI_InventoryDisguiseAbilityResource");
	apply_type(0x138e5f8, "RTTICompound");
	del_items(0x139131c, DELIT_SIMPLE, 8);
	apply_type(0x139131c, "RTTIBase[1]");
	set_name(0x139131c, "InventoryDisguiseAbilityResource::sBases");
	del_items(0x1391324, DELIT_SIMPLE, 1204);
	apply_type(0x1391324, "RTTIAttr[43]");
	set_name(0x1391324, "InventoryDisguiseAbilityResource::sAttrs");
	del_items(0x13917d8, DELIT_SIMPLE, 12);
	apply_type(0x13917d8, "RTTIMessageHandler[1]");
	set_name(0x13917d8, "InventoryDisguiseAbilityResource::sMessageHandlers");

	// InventoryEntity
	set_name(0x138df60, "RTTI_InventoryEntity");
	apply_type(0x138df60, "RTTICompound");
	del_items(0x138ede0, DELIT_SIMPLE, 8);
	apply_type(0x138ede0, "RTTIBase[1]");
	set_name(0x138ede0, "InventoryEntity::sBases");

	// InventoryEntityPickUpResource
	set_name(0x1393844, "RTTI_InventoryEntityPickUpResource");
	apply_type(0x1393844, "RTTICompound");
	del_items(0x13955c8, DELIT_SIMPLE, 8);
	apply_type(0x13955c8, "RTTIBase[1]");
	set_name(0x13955c8, "InventoryEntityPickUpResource::sBases");
	del_items(0x13955d0, DELIT_SIMPLE, 56);
	apply_type(0x13955d0, "RTTIAttr[2]");
	set_name(0x13955d0, "InventoryEntityPickUpResource::sAttrs");

	// InventoryEntityRep
	set_name(0x138dfb4, "RTTI_InventoryEntityRep");
	apply_type(0x138dfb4, "RTTICompound");
	del_items(0x138e940, DELIT_SIMPLE, 8);
	apply_type(0x138e940, "RTTIBase[1]");
	set_name(0x138e940, "InventoryEntityRep::sBases");

	// InventoryEntityResource
	set_name(0x138e018, "RTTI_InventoryEntityResource");
	apply_type(0x138e018, "RTTICompound");
	del_items(0x138e95c, DELIT_SIMPLE, 8);
	apply_type(0x138e95c, "RTTIBase[1]");
	set_name(0x138e95c, "InventoryEntityResource::sBases");
	del_items(0x138e964, DELIT_SIMPLE, 1092);
	apply_type(0x138e964, "RTTIAttr[39]");
	set_name(0x138e964, "InventoryEntityResource::sAttrs");
	del_items(0x138eda8, DELIT_SIMPLE, 24);
	apply_type(0x138eda8, "RTTIMessageHandler[2]");
	set_name(0x138eda8, "InventoryEntityResource::sMessageHandlers");

	// InventoryFakeDeathAbility
	set_name(0x13922c8, "RTTI_InventoryFakeDeathAbility");
	apply_type(0x13922c8, "RTTICompound");
	del_items(0x1392ffc, DELIT_SIMPLE, 8);
	apply_type(0x1392ffc, "RTTIBase[1]");
	set_name(0x1392ffc, "InventoryFakeDeathAbility::sBases");

	// InventoryFakeDeathAbilityResource
	set_name(0x139231c, "RTTI_InventoryFakeDeathAbilityResource");
	apply_type(0x139231c, "RTTICompound");
	del_items(0x1392f4c, DELIT_SIMPLE, 8);
	apply_type(0x1392f4c, "RTTIBase[1]");
	set_name(0x1392f4c, "InventoryFakeDeathAbilityResource::sBases");
	del_items(0x1392f54, DELIT_SIMPLE, 168);
	apply_type(0x1392f54, "RTTIAttr[6]");
	set_name(0x1392f54, "InventoryFakeDeathAbilityResource::sAttrs");

	// InventoryGravityGun
	set_name(0x138d278, "RTTI_InventoryGravityGun");
	apply_type(0x138d278, "RTTICompound");
	del_items(0x138f8b8, DELIT_SIMPLE, 8);
	apply_type(0x138f8b8, "RTTIBase[1]");
	set_name(0x138f8b8, "InventoryGravityGun::sBases");

	// InventoryGravityGunResource
	set_name(0x138d2cc, "RTTI_InventoryGravityGunResource");
	apply_type(0x138d2cc, "RTTICompound");
	del_items(0x138f878, DELIT_SIMPLE, 8);
	apply_type(0x138f878, "RTTIBase[1]");
	set_name(0x138f878, "InventoryGravityGunResource::sBases");
	del_items(0x138f880, DELIT_SIMPLE, 56);
	apply_type(0x138f880, "RTTIAttr[2]");
	set_name(0x138f880, "InventoryGravityGunResource::sAttrs");

	// InventoryGrenade
	set_name(0x138ddbc, "RTTI_InventoryGrenade");
	apply_type(0x138ddbc, "RTTICompound");
	del_items(0x1390d4c, DELIT_SIMPLE, 8);
	apply_type(0x1390d4c, "RTTIBase[1]");
	set_name(0x1390d4c, "InventoryGrenade::sBases");

	// InventoryGrenadeRep
	set_name(0x138de10, "RTTI_InventoryGrenadeRep");
	apply_type(0x138de10, "RTTICompound");
	del_items(0x1390d54, DELIT_SIMPLE, 8);
	apply_type(0x1390d54, "RTTIBase[1]");
	set_name(0x1390d54, "InventoryGrenadeRep::sBases");

	// InventoryGrenadeResource
	set_name(0x138de64, "RTTI_InventoryGrenadeResource");
	apply_type(0x138de64, "RTTICompound");
	del_items(0x1390c80, DELIT_SIMPLE, 8);
	apply_type(0x1390c80, "RTTIBase[1]");
	set_name(0x1390c80, "InventoryGrenadeResource::sBases");
	del_items(0x1390c88, DELIT_SIMPLE, 196);
	apply_type(0x1390c88, "RTTIAttr[7]");
	set_name(0x1390c88, "InventoryGrenadeResource::sAttrs");

	// InventoryHealAbility
	set_name(0x138e1e4, "RTTI_InventoryHealAbility");
	apply_type(0x138e1e4, "RTTICompound");
	del_items(0x1390fc8, DELIT_SIMPLE, 8);
	apply_type(0x1390fc8, "RTTIBase[1]");
	set_name(0x1390fc8, "InventoryHealAbility::sBases");

	// InventoryHealAbilityRep
	set_name(0x138e28c, "RTTI_InventoryHealAbilityRep");
	apply_type(0x138e28c, "RTTICompound");
	del_items(0x1390fd0, DELIT_SIMPLE, 8);
	apply_type(0x1390fd0, "RTTIBase[1]");
	set_name(0x1390fd0, "InventoryHealAbilityRep::sBases");

	// InventoryHealAbilityResource
	set_name(0x138e238, "RTTI_InventoryHealAbilityResource");
	apply_type(0x138e238, "RTTICompound");
	del_items(0x1390dbc, DELIT_SIMPLE, 8);
	apply_type(0x1390dbc, "RTTIBase[1]");
	set_name(0x1390dbc, "InventoryHealAbilityResource::sBases");
	del_items(0x1390dc4, DELIT_SIMPLE, 504);
	apply_type(0x1390dc4, "RTTIAttr[18]");
	set_name(0x1390dc4, "InventoryHealAbilityResource::sAttrs");
	del_items(0x1390fbc, DELIT_SIMPLE, 12);
	apply_type(0x1390fbc, "RTTIMessageHandler[1]");
	set_name(0x1390fbc, "InventoryHealAbilityResource::sMessageHandlers");

	// InventoryHealth
	set_name(0x138deb8, "RTTI_InventoryHealth");
	apply_type(0x138deb8, "RTTICompound");
	del_items(0x1390da8, DELIT_SIMPLE, 8);
	apply_type(0x1390da8, "RTTIBase[1]");
	set_name(0x1390da8, "InventoryHealth::sBases");

	// InventoryHealthResource
	set_name(0x138df0c, "RTTI_InventoryHealthResource");
	apply_type(0x138df0c, "RTTICompound");
	del_items(0x1390d68, DELIT_SIMPLE, 8);
	apply_type(0x1390d68, "RTTIBase[1]");
	set_name(0x1390d68, "InventoryHealthResource::sBases");
	del_items(0x1390d70, DELIT_SIMPLE, 56);
	apply_type(0x1390d70, "RTTIAttr[2]");
	set_name(0x1390d70, "InventoryHealthResource::sAttrs");

	// InventoryJetpack
	set_name(0x138d86c, "RTTI_InventoryJetpack");
	apply_type(0x138d86c, "RTTICompound");
	del_items(0x1390a24, DELIT_SIMPLE, 8);
	apply_type(0x1390a24, "RTTIBase[1]");
	set_name(0x1390a24, "InventoryJetpack::sBases");

	// InventoryJetpackRep
	set_name(0x138d8c0, "RTTI_InventoryJetpackRep");
	apply_type(0x138d8c0, "RTTICompound");
	del_items(0x1390a34, DELIT_SIMPLE, 8);
	apply_type(0x1390a34, "RTTIBase[1]");
	set_name(0x1390a34, "InventoryJetpackRep::sBases");

	// InventoryJetpackResource
	set_name(0x138d9cc, "RTTI_InventoryJetpackResource");
	apply_type(0x138d9cc, "RTTICompound");
	del_items(0x1390690, DELIT_SIMPLE, 8);
	apply_type(0x1390690, "RTTIBase[1]");
	set_name(0x1390690, "InventoryJetpackResource::sBases");
	del_items(0x1390698, DELIT_SIMPLE, 896);
	apply_type(0x1390698, "RTTIAttr[32]");
	set_name(0x1390698, "InventoryJetpackResource::sAttrs");
	del_items(0x1390a18, DELIT_SIMPLE, 12);
	apply_type(0x1390a18, "RTTIMessageHandler[1]");
	set_name(0x1390a18, "InventoryJetpackResource::sMessageHandlers");

	// InventoryMiniDrone
	set_name(0x1392028, "RTTI_InventoryMiniDrone");
	apply_type(0x1392028, "RTTICompound");
	del_items(0x1392dcc, DELIT_SIMPLE, 8);
	apply_type(0x1392dcc, "RTTIBase[1]");
	set_name(0x1392dcc, "InventoryMiniDrone::sBases");

	// InventoryMiniDronePickUpResource
	set_name(0x13920d0, "RTTI_InventoryMiniDronePickUpResource");
	apply_type(0x13920d0, "RTTICompound");
	del_items(0x1392dd4, DELIT_SIMPLE, 8);
	apply_type(0x1392dd4, "RTTIBase[1]");
	set_name(0x1392dd4, "InventoryMiniDronePickUpResource::sBases");

	// InventoryMiniDroneResource
	set_name(0x139207c, "RTTI_InventoryMiniDroneResource");
	apply_type(0x139207c, "RTTICompound");
	del_items(0x1392d70, DELIT_SIMPLE, 8);
	apply_type(0x1392d70, "RTTIBase[1]");
	set_name(0x1392d70, "InventoryMiniDroneResource::sBases");
	del_items(0x1392d78, DELIT_SIMPLE, 84);
	apply_type(0x1392d78, "RTTIAttr[3]");
	set_name(0x1392d78, "InventoryMiniDroneResource::sAttrs");

	// InventoryPlaceable
	set_name(0x138d5bc, "RTTI_InventoryPlaceable");
	apply_type(0x138d5bc, "RTTICompound");
	del_items(0x138f9f4, DELIT_SIMPLE, 8);
	apply_type(0x138f9f4, "RTTIBase[1]");
	set_name(0x138f9f4, "InventoryPlaceable::sBases");

	// InventoryPlaceableRep
	set_name(0x138d610, "RTTI_InventoryPlaceableRep");
	apply_type(0x138d610, "RTTICompound");
	del_items(0x138f9fc, DELIT_SIMPLE, 8);
	apply_type(0x138f9fc, "RTTIBase[1]");
	set_name(0x138f9fc, "InventoryPlaceableRep::sBases");

	// InventoryPlaceableResource
	set_name(0x138d674, "RTTI_InventoryPlaceableResource");
	apply_type(0x138d674, "RTTICompound");
	del_items(0x138f8d4, DELIT_SIMPLE, 8);
	apply_type(0x138f8d4, "RTTIBase[1]");
	set_name(0x138f8d4, "InventoryPlaceableResource::sBases");
	del_items(0x138f8dc, DELIT_SIMPLE, 280);
	apply_type(0x138f8dc, "RTTIAttr[10]");
	set_name(0x138f8dc, "InventoryPlaceableResource::sAttrs");

	// InventoryPortableSpawnGrenade
	set_name(0x138e450, "RTTI_InventoryPortableSpawnGrenade");
	apply_type(0x138e450, "RTTICompound");
	del_items(0x13912ec, DELIT_SIMPLE, 8);
	apply_type(0x13912ec, "RTTIBase[1]");
	set_name(0x13912ec, "InventoryPortableSpawnGrenade::sBases");

	// InventoryPortableSpawnGrenadeResource
	set_name(0x138e4a4, "RTTI_InventoryPortableSpawnGrenadeResource");
	apply_type(0x138e4a4, "RTTICompound");
	del_items(0x1391300, DELIT_SIMPLE, 8);
	apply_type(0x1391300, "RTTIBase[1]");
	set_name(0x1391300, "InventoryPortableSpawnGrenadeResource::sBases");

	// InventoryReviveAbility
	set_name(0x138e2e0, "RTTI_InventoryReviveAbility");
	apply_type(0x138e2e0, "RTTICompound");
	del_items(0x13912dc, DELIT_SIMPLE, 8);
	apply_type(0x13912dc, "RTTIBase[1]");
	set_name(0x13912dc, "InventoryReviveAbility::sBases");

	// InventoryReviveAbilityRep
	set_name(0x138e3fc, "RTTI_InventoryReviveAbilityRep");
	apply_type(0x138e3fc, "RTTICompound");
	del_items(0x13912e4, DELIT_SIMPLE, 8);
	apply_type(0x13912e4, "RTTIBase[1]");
	set_name(0x13912e4, "InventoryReviveAbilityRep::sBases");

	// InventoryReviveAbilityResource
	set_name(0x138e3a8, "RTTI_InventoryReviveAbilityResource");
	apply_type(0x138e3a8, "RTTICompound");
	del_items(0x1391038, DELIT_SIMPLE, 8);
	apply_type(0x1391038, "RTTIBase[1]");
	set_name(0x1391038, "InventoryReviveAbilityResource::sBases");
	del_items(0x1391040, DELIT_SIMPLE, 644);
	apply_type(0x1391040, "RTTIAttr[23]");
	set_name(0x1391040, "InventoryReviveAbilityResource::sAttrs");
	del_items(0x13912c4, DELIT_SIMPLE, 24);
	apply_type(0x13912c4, "RTTIMessageHandler[2]");
	set_name(0x13912c4, "InventoryReviveAbilityResource::sMessageHandlers");

	// InventoryRocketLauncher
	set_name(0x138da20, "RTTI_InventoryRocketLauncher");
	apply_type(0x138da20, "RTTICompound");
	del_items(0x1390ba0, DELIT_SIMPLE, 8);
	apply_type(0x1390ba0, "RTTIBase[1]");
	set_name(0x1390ba0, "InventoryRocketLauncher::sBases");

	// InventoryRocketLauncherRep
	set_name(0x138da74, "RTTI_InventoryRocketLauncherRep");
	apply_type(0x138da74, "RTTICompound");
	del_items(0x1390ba8, DELIT_SIMPLE, 8);
	apply_type(0x1390ba8, "RTTIBase[1]");
	set_name(0x1390ba8, "InventoryRocketLauncherRep::sBases");

	// InventoryRocketLauncherResource
	set_name(0x138dac8, "RTTI_InventoryRocketLauncherResource");
	apply_type(0x138dac8, "RTTICompound");
	del_items(0x1390a48, DELIT_SIMPLE, 8);
	apply_type(0x1390a48, "RTTIBase[1]");
	set_name(0x1390a48, "InventoryRocketLauncherResource::sBases");
	del_items(0x1390a50, DELIT_SIMPLE, 336);
	apply_type(0x1390a50, "RTTIAttr[12]");
	set_name(0x1390a50, "InventoryRocketLauncherResource::sAttrs");

	// InventorySabotageAbility
	set_name(0x138e7e8, "RTTI_InventorySabotageAbility");
	apply_type(0x138e7e8, "RTTICompound");
	del_items(0x13918b4, DELIT_SIMPLE, 8);
	apply_type(0x13918b4, "RTTIBase[1]");
	set_name(0x13918b4, "InventorySabotageAbility::sBases");

	// InventorySabotageAbilityResource
	set_name(0x138e83c, "RTTI_InventorySabotageAbilityResource");
	apply_type(0x138e83c, "RTTICompound");
	del_items(0x1391858, DELIT_SIMPLE, 8);
	apply_type(0x1391858, "RTTIBase[1]");
	set_name(0x1391858, "InventorySabotageAbilityResource::sBases");
	del_items(0x1391860, DELIT_SIMPLE, 84);
	apply_type(0x1391860, "RTTIAttr[3]");
	set_name(0x1391860, "InventorySabotageAbilityResource::sAttrs");

	// InventorySpotAndMarkAbility
	set_name(0x138e890, "RTTI_InventorySpotAndMarkAbility");
	apply_type(0x138e890, "RTTICompound");
	del_items(0x13918bc, DELIT_SIMPLE, 8);
	apply_type(0x13918bc, "RTTIBase[1]");
	set_name(0x13918bc, "InventorySpotAndMarkAbility::sBases");

	// InventorySpotAndMarkAbilityResource
	set_name(0x138e8e4, "RTTI_InventorySpotAndMarkAbilityResource");
	apply_type(0x138e8e4, "RTTICompound");
	del_items(0x13918d0, DELIT_SIMPLE, 8);
	apply_type(0x13918d0, "RTTIBase[1]");
	set_name(0x13918d0, "InventorySpotAndMarkAbilityResource::sBases");
	del_items(0x13918d8, DELIT_SIMPLE, 112);
	apply_type(0x13918d8, "RTTIAttr[4]");
	set_name(0x13918d8, "InventorySpotAndMarkAbilityResource::sAttrs");
	del_items(0x1391948, DELIT_SIMPLE, 12);
	apply_type(0x1391948, "RTTIMessageHandler[1]");
	set_name(0x1391948, "InventorySpotAndMarkAbilityResource::sMessageHandlers");

	// InventoryStaminaAbility
	set_name(0x1392220, "RTTI_InventoryStaminaAbility");
	apply_type(0x1392220, "RTTICompound");
	del_items(0x1392ed0, DELIT_SIMPLE, 8);
	apply_type(0x1392ed0, "RTTIBase[1]");
	set_name(0x1392ed0, "InventoryStaminaAbility::sBases");

	// InventoryStaminaAbilityResource
	set_name(0x1392274, "RTTI_InventoryStaminaAbilityResource");
	apply_type(0x1392274, "RTTICompound");
	del_items(0x1392ee4, DELIT_SIMPLE, 8);
	apply_type(0x1392ee4, "RTTIBase[1]");
	set_name(0x1392ee4, "InventoryStaminaAbilityResource::sBases");
	del_items(0x1392eec, DELIT_SIMPLE, 84);
	apply_type(0x1392eec, "RTTIAttr[3]");
	set_name(0x1392eec, "InventoryStaminaAbilityResource::sAttrs");

	// InventoryThrowable
	set_name(0x138dc18, "RTTI_InventoryThrowable");
	apply_type(0x138dc18, "RTTICompound");
	del_items(0x138fd58, DELIT_SIMPLE, 8);
	apply_type(0x138fd58, "RTTIBase[1]");
	set_name(0x138fd58, "InventoryThrowable::sBases");

	// InventoryThrowablePickUp
	set_name(0x1391d78, "RTTI_InventoryThrowablePickUp");
	apply_type(0x1391d78, "RTTICompound");
	del_items(0x1392bcc, DELIT_SIMPLE, 8);
	apply_type(0x1392bcc, "RTTIBase[1]");
	set_name(0x1392bcc, "InventoryThrowablePickUp::sBases");

	// InventoryThrowablePickUpResource
	set_name(0x1391dcc, "RTTI_InventoryThrowablePickUpResource");
	apply_type(0x1391dcc, "RTTICompound");
	del_items(0x1392bc4, DELIT_SIMPLE, 8);
	apply_type(0x1392bc4, "RTTIBase[1]");
	set_name(0x1392bc4, "InventoryThrowablePickUpResource::sBases");

	// InventoryThrowableRep
	set_name(0x138dc6c, "RTTI_InventoryThrowableRep");
	apply_type(0x138dc6c, "RTTICompound");
	del_items(0x138fdb4, DELIT_SIMPLE, 8);
	apply_type(0x138fdb4, "RTTIBase[1]");
	set_name(0x138fdb4, "InventoryThrowableRep::sBases");

	// InventoryThrowableResource
	set_name(0x138dcc0, "RTTI_InventoryThrowableResource");
	apply_type(0x138dcc0, "RTTICompound");
	del_items(0x138fa10, DELIT_SIMPLE, 8);
	apply_type(0x138fa10, "RTTIBase[1]");
	set_name(0x138fa10, "InventoryThrowableResource::sBases");
	del_items(0x138fa18, DELIT_SIMPLE, 784);
	apply_type(0x138fa18, "RTTIAttr[28]");
	set_name(0x138fa18, "InventoryThrowableResource::sAttrs");
	del_items(0x138fd28, DELIT_SIMPLE, 24);
	apply_type(0x138fd28, "RTTIMessageHandler[2]");
	set_name(0x138fd28, "InventoryThrowableResource::sMessageHandlers");

	// InventoryTurret
	set_name(0x13919ac, "RTTI_InventoryTurret");
	apply_type(0x13919ac, "RTTICompound");
	del_items(0x1392840, DELIT_SIMPLE, 8);
	apply_type(0x1392840, "RTTIBase[1]");
	set_name(0x1392840, "InventoryTurret::sBases");

	// InventoryTurretResource
	set_name(0x1391a00, "RTTI_InventoryTurretResource");
	apply_type(0x1391a00, "RTTICompound");
	del_items(0x13927e4, DELIT_SIMPLE, 8);
	apply_type(0x13927e4, "RTTIBase[1]");
	set_name(0x13927e4, "InventoryTurretResource::sBases");
	del_items(0x13927ec, DELIT_SIMPLE, 84);
	apply_type(0x13927ec, "RTTIAttr[3]");
	set_name(0x13927ec, "InventoryTurretResource::sAttrs");

	// InventoryWeapon
	set_name(0x138d320, "RTTI_InventoryWeapon");
	apply_type(0x138d320, "RTTICompound");
	del_items(0x138f864, DELIT_SIMPLE, 8);
	apply_type(0x138f864, "RTTIBase[1]");
	set_name(0x138f864, "InventoryWeapon::sBases");

	// InventoryWeaponPickUpResource
	set_name(0x13924f0, "RTTI_InventoryWeaponPickUpResource");
	apply_type(0x13924f0, "RTTICompound");
	del_items(0x1392b40, DELIT_SIMPLE, 8);
	apply_type(0x1392b40, "RTTIBase[1]");
	set_name(0x1392b40, "InventoryWeaponPickUpResource::sBases");
	del_items(0x1392b48, DELIT_SIMPLE, 112);
	apply_type(0x1392b48, "RTTIAttr[4]");
	set_name(0x1392b48, "InventoryWeaponPickUpResource::sAttrs");

	// InventoryWeaponRep
	set_name(0x138d374, "RTTI_InventoryWeaponRep");
	apply_type(0x138d374, "RTTICompound");
	del_items(0x138f8c0, DELIT_SIMPLE, 8);
	apply_type(0x138f8c0, "RTTIBase[1]");
	set_name(0x138f8c0, "InventoryWeaponRep::sBases");

	// InventoryWeaponResource
	set_name(0x138d568, "RTTI_InventoryWeaponResource");
	apply_type(0x138d568, "RTTICompound");
	del_items(0x138f178, DELIT_SIMPLE, 8);
	apply_type(0x138f178, "RTTIBase[1]");
	set_name(0x138f178, "InventoryWeaponResource::sBases");
	del_items(0x138f180, DELIT_SIMPLE, 1764);
	apply_type(0x138f180, "RTTIAttr[63]");
	set_name(0x138f180, "InventoryWeaponResource::sAttrs");

	// JetpackThrusterEffectSetup
	set_name(0x138d978, "RTTI_JetpackThrusterEffectSetup");
	apply_type(0x138d978, "RTTICompound");
	del_items(0x1390550, DELIT_SIMPLE, 308);
	apply_type(0x1390550, "RTTIAttr[11]");
	set_name(0x1390550, "JetpackThrusterEffectSetup::sAttrs");

	// JetpackThrusterEffectSetupLocation
	set_name(0x138d924, "RTTI_JetpackThrusterEffectSetupLocation");
	apply_type(0x138d924, "RTTICompound");
	del_items(0x1390518, DELIT_SIMPLE, 56);
	apply_type(0x1390518, "RTTIAttr[2]");
	set_name(0x1390518, "JetpackThrusterEffectSetupLocation::sAttrs");

	// Joint
	set_name(0x1356380, "RTTI_Joint");
	apply_type(0x1356380, "RTTICompound");
	del_items(0x1356f88, DELIT_SIMPLE, 140);
	apply_type(0x1356f88, "RTTIAttr[5]");
	set_name(0x1356f88, "Joint::sAttrs");

	// JoystickInputModifier
	set_name(0x13b6934, "RTTI_JoystickInputModifier");
	apply_type(0x13b6934, "RTTICompound");
	del_items(0x13b7688, DELIT_SIMPLE, 8);
	apply_type(0x13b7688, "RTTIBase[1]");
	set_name(0x13b7688, "JoystickInputModifier::sBases");

	// JoystickInputModifierResource
	set_name(0x13b6998, "RTTI_JoystickInputModifierResource");
	apply_type(0x13b6998, "RTTICompound");
	del_items(0x13b7690, DELIT_SIMPLE, 8);
	apply_type(0x13b7690, "RTTIBase[1]");
	set_name(0x13b7690, "JoystickInputModifierResource::sBases");
	del_items(0x13b7698, DELIT_SIMPLE, 588);
	apply_type(0x13b7698, "RTTIAttr[21]");
	set_name(0x13b7698, "JoystickInputModifierResource::sAttrs");

	// JumpFrameEventInstance
	set_name(0x1394df4, "RTTI_JumpFrameEventInstance");
	apply_type(0x1394df4, "RTTICompound");
	del_items(0x13968e0, DELIT_SIMPLE, 8);
	apply_type(0x13968e0, "RTTIBase[1]");
	set_name(0x13968e0, "JumpFrameEventInstance::sBases");

	// JumpFrameEventResource
	set_name(0x1394da0, "RTTI_JumpFrameEventResource");
	apply_type(0x1394da0, "RTTICompound");
	del_items(0x1396884, DELIT_SIMPLE, 8);
	apply_type(0x1396884, "RTTIBase[1]");
	set_name(0x1396884, "JumpFrameEventResource::sBases");
	del_items(0x139688c, DELIT_SIMPLE, 84);
	apply_type(0x139688c, "RTTIAttr[3]");
	set_name(0x139688c, "JumpFrameEventResource::sAttrs");

	// KillEntityAction
	set_name(0x137664c, "RTTI_KillEntityAction");
	apply_type(0x137664c, "RTTICompound");
	del_items(0x1377b58, DELIT_SIMPLE, 8);
	apply_type(0x1377b58, "RTTIBase[1]");
	set_name(0x1377b58, "KillEntityAction::sBases");

	// KillEventResource
	set_name(0x1394e48, "RTTI_KillEventResource");
	apply_type(0x1394e48, "RTTICompound");
	del_items(0x13968e8, DELIT_SIMPLE, 8);
	apply_type(0x13968e8, "RTTIBase[1]");
	set_name(0x13968e8, "KillEventResource::sBases");
	del_items(0x13968f0, DELIT_SIMPLE, 196);
	apply_type(0x13968f0, "RTTIAttr[7]");
	set_name(0x13968f0, "KillEventResource::sAttrs");

	// KillPartsAction
	set_name(0x13765a4, "RTTI_KillPartsAction");
	apply_type(0x13765a4, "RTTICompound");
	del_items(0x1377aa0, DELIT_SIMPLE, 8);
	apply_type(0x1377aa0, "RTTIBase[1]");
	set_name(0x1377aa0, "KillPartsAction::sBases");
	del_items(0x1377aa8, DELIT_SIMPLE, 112);
	apply_type(0x1377aa8, "RTTIAttr[4]");
	set_name(0x1377aa8, "KillPartsAction::sAttrs");

	// Ladder
	set_name(0x137cbcc, "RTTI_Ladder");
	apply_type(0x137cbcc, "RTTICompound");
	del_items(0x137e138, DELIT_SIMPLE, 8);
	apply_type(0x137e138, "RTTIBase[1]");
	set_name(0x137e138, "Ladder::sBases");
	del_items(0x137e140, DELIT_SIMPLE, 56);
	apply_type(0x137e140, "RTTIAttr[2]");
	set_name(0x137e140, "Ladder::sAttrs");

	// LadderAiController
	set_name(0x137cc20, "RTTI_LadderAiController");
	apply_type(0x137cc20, "RTTICompound");
	del_items(0x137e188, DELIT_SIMPLE, 8);
	apply_type(0x137e188, "RTTIBase[1]");
	set_name(0x137e188, "LadderAiController::sBases");

	// LadderClimbCycleSound
	set_name(0x137cd80, "RTTI_LadderClimbCycleSound");
	apply_type(0x137cd80, "RTTICompound");
	del_items(0x137dfb8, DELIT_SIMPLE, 56);
	apply_type(0x137dfb8, "RTTIAttr[2]");
	set_name(0x137dfb8, "LadderClimbCycleSound::sAttrs");

	// LadderController
	set_name(0x137cc74, "RTTI_LadderController");
	apply_type(0x137cc74, "RTTICompound");
	del_items(0x137e180, DELIT_SIMPLE, 8);
	apply_type(0x137e180, "RTTIBase[1]");
	set_name(0x137e180, "LadderController::sBases");

	// LadderJoystickController
	set_name(0x137ccc8, "RTTI_LadderJoystickController");
	apply_type(0x137ccc8, "RTTICompound");
	del_items(0x137e190, DELIT_SIMPLE, 8);
	apply_type(0x137e190, "RTTIBase[1]");
	set_name(0x137e190, "LadderJoystickController::sBases");

	// LadderRep
	set_name(0x137cd1c, "RTTI_LadderRep");
	apply_type(0x137cd1c, "RTTICompound");
	del_items(0x137e198, DELIT_SIMPLE, 8);
	apply_type(0x137e198, "RTTIBase[1]");
	set_name(0x137e198, "LadderRep::sBases");

	// LadderResource
	set_name(0x137cdd4, "RTTI_LadderResource");
	apply_type(0x137cdd4, "RTTICompound");
	del_items(0x137dffc, DELIT_SIMPLE, 8);
	apply_type(0x137dffc, "RTTIBase[1]");
	set_name(0x137dffc, "LadderResource::sBases");
	del_items(0x137e004, DELIT_SIMPLE, 308);
	apply_type(0x137e004, "RTTIAttr[11]");
	set_name(0x137e004, "LadderResource::sAttrs");

	// LandVehicle
	set_name(0x1382d60, "RTTI_LandVehicle");
	apply_type(0x1382d60, "RTTICompound");
	del_items(0x1384670, DELIT_SIMPLE, 8);
	apply_type(0x1384670, "RTTIBase[1]");
	set_name(0x1384670, "LandVehicle::sBases");
	del_items(0x1384678, DELIT_SIMPLE, 72);
	apply_type(0x1384678, "RTTIFunction[3]");
	set_name(0x1384678, "LandVehicle::sFunctions");

	// LandVehicleAIController
	set_name(0x1382db4, "RTTI_LandVehicleAIController");
	apply_type(0x1382db4, "RTTICompound");
	del_items(0x13846d0, DELIT_SIMPLE, 8);
	apply_type(0x13846d0, "RTTIBase[1]");
	set_name(0x13846d0, "LandVehicleAIController::sBases");

	// LandVehicleController
	set_name(0x1382e08, "RTTI_LandVehicleController");
	apply_type(0x1382e08, "RTTICompound");
	del_items(0x13846c8, DELIT_SIMPLE, 8);
	apply_type(0x13846c8, "RTTIBase[1]");
	set_name(0x13846c8, "LandVehicleController::sBases");

	// LandVehicleJoystickController
	set_name(0x1382eb0, "RTTI_LandVehicleJoystickController");
	apply_type(0x1382eb0, "RTTICompound");
	del_items(0x13846d8, DELIT_SIMPLE, 8);
	apply_type(0x13846d8, "RTTIBase[1]");
	set_name(0x13846d8, "LandVehicleJoystickController::sBases");

	// LandVehicleMover
	set_name(0x13a5700, "RTTI_LandVehicleMover");
	apply_type(0x13a5700, "RTTICompound");
	del_items(0x13a5ca8, DELIT_SIMPLE, 8);
	apply_type(0x13a5ca8, "RTTIBase[1]");
	set_name(0x13a5ca8, "LandVehicleMover::sBases");

	// LandVehicleMoverResource
	set_name(0x13a6468, "RTTI_LandVehicleMoverResource");
	apply_type(0x13a6468, "RTTICompound");
	del_items(0x13a6d88, DELIT_SIMPLE, 8);
	apply_type(0x13a6d88, "RTTIBase[1]");
	set_name(0x13a6d88, "LandVehicleMoverResource::sBases");
	del_items(0x13a6d90, DELIT_SIMPLE, 196);
	apply_type(0x13a6d90, "RTTIAttr[7]");
	set_name(0x13a6d90, "LandVehicleMoverResource::sAttrs");

	// LandVehicleRep
	set_name(0x1382f58, "RTTI_LandVehicleRep");
	apply_type(0x1382f58, "RTTICompound");
	del_items(0x1384a68, DELIT_SIMPLE, 8);
	apply_type(0x1384a68, "RTTIBase[1]");
	set_name(0x1384a68, "LandVehicleRep::sBases");

	// LandVehicleResource
	set_name(0x1383010, "RTTI_LandVehicleResource");
	apply_type(0x1383010, "RTTICompound");
	del_items(0x1383d8c, DELIT_SIMPLE, 8);
	apply_type(0x1383d8c, "RTTIBase[1]");
	set_name(0x1383d8c, "LandVehicleResource::sBases");
	del_items(0x1383d94, DELIT_SIMPLE, 700);
	apply_type(0x1383d94, "RTTIAttr[25]");
	set_name(0x1383d94, "LandVehicleResource::sAttrs");

	// LaserBeamInstance
	set_name(0x13ab5ec, "RTTI_LaserBeamInstance");
	apply_type(0x13ab5ec, "RTTICompound");
	del_items(0x13abef4, DELIT_SIMPLE, 8);
	apply_type(0x13abef4, "RTTIBase[1]");
	set_name(0x13abef4, "LaserBeamInstance::sBases");

	// LaserBeamResource
	set_name(0x13ab598, "RTTI_LaserBeamResource");
	apply_type(0x13ab598, "RTTICompound");
	del_items(0x13abdf0, DELIT_SIMPLE, 8);
	apply_type(0x13abdf0, "RTTIBase[1]");
	set_name(0x13abdf0, "LaserBeamResource::sBases");
	del_items(0x13abdf8, DELIT_SIMPLE, 252);
	apply_type(0x13abdf8, "RTTIAttr[9]");
	set_name(0x13abdf8, "LaserBeamResource::sAttrs");

	// LaunchFromHomeSettings
	set_name(0x1368320, "RTTI_LaunchFromHomeSettings");
	apply_type(0x1368320, "RTTICompound");
	del_items(0x136b7f8, DELIT_SIMPLE, 8);
	apply_type(0x136b7f8, "RTTIBase[1]");
	set_name(0x136b7f8, "LaunchFromHomeSettings::sBases");
	del_items(0x136b800, DELIT_SIMPLE, 96);
	apply_type(0x136b800, "RTTIFunction[4]");
	set_name(0x136b800, "LaunchFromHomeSettings::sFunctions");

	// LayerTag
	set_name(0x133cb08, "RTTI_LayerTag");
	apply_type(0x133cb08, "RTTICompound");
	del_items(0x133e948, DELIT_SIMPLE, 8);
	apply_type(0x133e948, "RTTIBase[1]");
	set_name(0x133e948, "LayerTag::sBases");

	// LeanAndPeekAction
	set_name(0x137cf10, "RTTI_LeanAndPeekAction");
	apply_type(0x137cf10, "RTTICompound");
	del_items(0x137e1a0, DELIT_SIMPLE, 8);
	apply_type(0x137e1a0, "RTTIBase[1]");
	set_name(0x137e1a0, "LeanAndPeekAction::sBases");
	del_items(0x137e1a8, DELIT_SIMPLE, 364);
	apply_type(0x137e1a8, "RTTIAttr[13]");
	set_name(0x137e1a8, "LeanAndPeekAction::sAttrs");

	// LeanAndPeekActionEventInstance
	set_name(0x1396f14, "RTTI_LeanAndPeekActionEventInstance");
	apply_type(0x1396f14, "RTTICompound");
	del_items(0x1398f10, DELIT_SIMPLE, 8);
	apply_type(0x1398f10, "RTTIBase[1]");
	set_name(0x1398f10, "LeanAndPeekActionEventInstance::sBases");

	// LeanAndPeekActionEventResource
	set_name(0x1396ec0, "RTTI_LeanAndPeekActionEventResource");
	apply_type(0x1396ec0, "RTTICompound");
	del_items(0x1398e60, DELIT_SIMPLE, 8);
	apply_type(0x1398e60, "RTTIBase[1]");
	set_name(0x1398e60, "LeanAndPeekActionEventResource::sBases");
	del_items(0x1398e68, DELIT_SIMPLE, 168);
	apply_type(0x1398e68, "RTTIAttr[6]");
	set_name(0x1398e68, "LeanAndPeekActionEventResource::sAttrs");

	// LeanAndPeekActorInstance
	set_name(0x139aa24, "RTTI_LeanAndPeekActorInstance");
	apply_type(0x139aa24, "RTTICompound");
	del_items(0x139bd74, DELIT_SIMPLE, 8);
	apply_type(0x139bd74, "RTTIBase[1]");
	set_name(0x139bd74, "LeanAndPeekActorInstance::sBases");

	// LeanAndPeekActorResource
	set_name(0x139a9d0, "RTTI_LeanAndPeekActorResource");
	apply_type(0x139a9d0, "RTTICompound");
	del_items(0x139bd6c, DELIT_SIMPLE, 8);
	apply_type(0x139bd6c, "RTTIBase[1]");
	set_name(0x139bd6c, "LeanAndPeekActorResource::sBases");

	// LeanAndPeekArea
	set_name(0x137ce28, "RTTI_LeanAndPeekArea");
	apply_type(0x137ce28, "RTTICompound");
	del_items(0x137e518, DELIT_SIMPLE, 24);
	apply_type(0x137e518, "RTTIBase[3]");
	set_name(0x137e518, "LeanAndPeekArea::sBases");
	del_items(0x137e530, DELIT_SIMPLE, 644);
	apply_type(0x137e530, "RTTIAttr[23]");
	set_name(0x137e530, "LeanAndPeekArea::sAttrs");
	del_items(0x137e7b4, DELIT_SIMPLE, 72);
	apply_type(0x137e7b4, "RTTIFunction[3]");
	set_name(0x137e7b4, "LeanAndPeekArea::sFunctions");

	// LeanAndPeekAreaRep
	set_name(0x137ce7c, "RTTI_LeanAndPeekAreaRep");
	apply_type(0x137ce7c, "RTTICompound");
	del_items(0x137e7fc, DELIT_SIMPLE, 8);
	apply_type(0x137e7fc, "RTTIBase[1]");
	set_name(0x137e7fc, "LeanAndPeekAreaRep::sBases");

	// LeanAndPeekAreaResource
	set_name(0x137cfe8, "RTTI_LeanAndPeekAreaResource");
	apply_type(0x137cfe8, "RTTICompound");
	del_items(0x137e398, DELIT_SIMPLE, 8);
	apply_type(0x137e398, "RTTIBase[1]");
	set_name(0x137e398, "LeanAndPeekAreaResource::sBases");
	del_items(0x137e3a0, DELIT_SIMPLE, 364);
	apply_type(0x137e3a0, "RTTIAttr[13]");
	set_name(0x137e3a0, "LeanAndPeekAreaResource::sAttrs");
	del_items(0x137e50c, DELIT_SIMPLE, 12);
	apply_type(0x137e50c, "RTTIMessageHandler[1]");
	set_name(0x137e50c, "LeanAndPeekAreaResource::sMessageHandlers");

	// LeanAndPeekEventInstance
	set_name(0x1396fbc, "RTTI_LeanAndPeekEventInstance");
	apply_type(0x1396fbc, "RTTICompound");
	del_items(0x13990cc, DELIT_SIMPLE, 8);
	apply_type(0x13990cc, "RTTIBase[1]");
	set_name(0x13990cc, "LeanAndPeekEventInstance::sBases");

	// LeanAndPeekEventResource
	set_name(0x1396f68, "RTTI_LeanAndPeekEventResource");
	apply_type(0x1396f68, "RTTICompound");
	del_items(0x1399054, DELIT_SIMPLE, 8);
	apply_type(0x1399054, "RTTIBase[1]");
	set_name(0x1399054, "LeanAndPeekEventResource::sBases");
	del_items(0x139905c, DELIT_SIMPLE, 112);
	apply_type(0x139905c, "RTTIAttr[4]");
	set_name(0x139905c, "LeanAndPeekEventResource::sAttrs");

	// LeanAndPeekPosition
	set_name(0x137cf94, "RTTI_LeanAndPeekPosition");
	apply_type(0x137cf94, "RTTICompound");
	del_items(0x137e314, DELIT_SIMPLE, 8);
	apply_type(0x137e314, "RTTIBase[1]");
	set_name(0x137e314, "LeanAndPeekPosition::sBases");
	del_items(0x137e31c, DELIT_SIMPLE, 112);
	apply_type(0x137e31c, "RTTIAttr[4]");
	set_name(0x137e31c, "LeanAndPeekPosition::sAttrs");

	// LegendTag
	set_name(0x133d024, "RTTI_LegendTag");
	apply_type(0x133d024, "RTTICompound");
	del_items(0x133f654, DELIT_SIMPLE, 8);
	apply_type(0x133f654, "RTTIBase[1]");
	set_name(0x133f654, "LegendTag::sBases");

	// LegendWidget
	set_name(0x133d954, "RTTI_LegendWidget");
	apply_type(0x133d954, "RTTICompound");
	del_items(0x133f730, DELIT_SIMPLE, 8);
	apply_type(0x133f730, "RTTIBase[1]");
	set_name(0x133f730, "LegendWidget::sBases");

	// LegendWidgetResource
	set_name(0x133d9a8, "RTTI_LegendWidgetResource");
	apply_type(0x133d9a8, "RTTICompound");
	del_items(0x133f738, DELIT_SIMPLE, 8);
	apply_type(0x133f738, "RTTIBase[1]");
	set_name(0x133f738, "LegendWidgetResource::sBases");
	del_items(0x133f740, DELIT_SIMPLE, 112);
	apply_type(0x133f740, "RTTIAttr[4]");
	set_name(0x133f740, "LegendWidgetResource::sAttrs");

	// LevelAsset
	set_name(0x135bf1c, "RTTI_LevelAsset");
	apply_type(0x135bf1c, "RTTICompound");
	del_items(0x135c1ec, DELIT_SIMPLE, 8);
	apply_type(0x135c1ec, "RTTIBase[1]");
	set_name(0x135c1ec, "LevelAsset::sBases");
	del_items(0x135c1f4, DELIT_SIMPLE, 56);
	apply_type(0x135c1f4, "RTTIAttr[2]");
	set_name(0x135c1f4, "LevelAsset::sAttrs");

	// LevelAssetInfo
	set_name(0x136c9cc, "RTTI_LevelAssetInfo");
	apply_type(0x136c9cc, "RTTICompound");
	del_items(0x136dca8, DELIT_SIMPLE, 8);
	apply_type(0x136dca8, "RTTIBase[1]");
	set_name(0x136dca8, "LevelAssetInfo::sBases");
	del_items(0x136dcb0, DELIT_SIMPLE, 56);
	apply_type(0x136dcb0, "RTTIAttr[2]");
	set_name(0x136dcb0, "LevelAssetInfo::sAttrs");

	// LevelInfo
	set_name(0x136c784, "RTTI_LevelInfo");
	apply_type(0x136c784, "RTTICompound");
	del_items(0x136f7d4, DELIT_SIMPLE, 8);
	apply_type(0x136f7d4, "RTTIBase[1]");
	set_name(0x136f7d4, "LevelInfo::sBases");
	del_items(0x136f7dc, DELIT_SIMPLE, 364);
	apply_type(0x136f7dc, "RTTIAttr[13]");
	set_name(0x136f7dc, "LevelInfo::sAttrs");

	// LevelListLevel
	set_name(0x136c8a0, "RTTI_LevelListLevel");
	apply_type(0x136c8a0, "RTTICompound");
	del_items(0x136d9f4, DELIT_SIMPLE, 336);
	apply_type(0x136d9f4, "RTTIAttr[12]");
	set_name(0x136d9f4, "LevelListLevel::sAttrs");

	// LevelListLevelNode
	set_name(0x136c83c, "RTTI_LevelListLevelNode");
	apply_type(0x136c83c, "RTTICompound");
	del_items(0x136d9a0, DELIT_SIMPLE, 84);
	apply_type(0x136d9a0, "RTTIAttr[3]");
	set_name(0x136d9a0, "LevelListLevelNode::sAttrs");

	// LevelListResource
	set_name(0x136c914, "RTTI_LevelListResource");
	apply_type(0x136c914, "RTTICompound");
	del_items(0x136db44, DELIT_SIMPLE, 8);
	apply_type(0x136db44, "RTTIBase[1]");
	set_name(0x136db44, "LevelListResource::sBases");
	del_items(0x136db4c, DELIT_SIMPLE, 84);
	apply_type(0x136db4c, "RTTIAttr[3]");
	set_name(0x136db4c, "LevelListResource::sAttrs");
	del_items(0x136dba0, DELIT_SIMPLE, 168);
	apply_type(0x136dba0, "RTTIFunction[7]");
	set_name(0x136dba0, "LevelListResource::sFunctions");
	del_items(0x136dc48, DELIT_SIMPLE, 12);
	apply_type(0x136dc48, "RTTIMessageHandler[1]");
	set_name(0x136dc48, "LevelListResource::sMessageHandlers");

	// LevelSection
	set_name(0x135bff4, "RTTI_LevelSection");
	apply_type(0x135bff4, "RTTICompound");
	del_items(0x135c190, DELIT_SIMPLE, 8);
	apply_type(0x135c190, "RTTIBase[1]");
	set_name(0x135c190, "LevelSection::sBases");
	del_items(0x135c198, DELIT_SIMPLE, 84);
	apply_type(0x135c198, "RTTIAttr[3]");
	set_name(0x135c198, "LevelSection::sAttrs");

	// LevelSectionLump
	set_name(0x135bf80, "RTTI_LevelSectionLump");
	apply_type(0x135bf80, "RTTICompound");
	del_items(0x135c158, DELIT_SIMPLE, 56);
	apply_type(0x135c158, "RTTIAttr[2]");
	set_name(0x135c158, "LevelSectionLump::sAttrs");

	// LevelSettings
	set_name(0x136c7d8, "RTTI_LevelSettings");
	apply_type(0x136c7d8, "RTTICompound");
	del_items(0x136f948, DELIT_SIMPLE, 8);
	apply_type(0x136f948, "RTTIBase[1]");
	set_name(0x136f948, "LevelSettings::sBases");
	del_items(0x136f950, DELIT_SIMPLE, 672);
	apply_type(0x136f950, "RTTIAttr[24]");
	set_name(0x136f950, "LevelSettings::sAttrs");

	// Lift
	set_name(0x1378af0, "RTTI_Lift");
	apply_type(0x1378af0, "RTTICompound");
	del_items(0x1379680, DELIT_SIMPLE, 8);
	apply_type(0x1379680, "RTTIBase[1]");
	set_name(0x1379680, "Lift::sBases");
	del_items(0x1379688, DELIT_SIMPLE, 196);
	apply_type(0x1379688, "RTTIAttr[7]");
	set_name(0x1379688, "Lift::sAttrs");
	del_items(0x137974c, DELIT_SIMPLE, 312);
	apply_type(0x137974c, "RTTIFunction[13]");
	set_name(0x137974c, "Lift::sFunctions");

	// LiftRep
	set_name(0x1378b44, "RTTI_LiftRep");
	apply_type(0x1378b44, "RTTICompound");
	del_items(0x137988c, DELIT_SIMPLE, 8);
	apply_type(0x137988c, "RTTIBase[1]");
	set_name(0x137988c, "LiftRep::sBases");

	// LiftResource
	set_name(0x1378bfc, "RTTI_LiftResource");
	apply_type(0x1378bfc, "RTTICompound");
	del_items(0x13794c8, DELIT_SIMPLE, 8);
	apply_type(0x13794c8, "RTTIBase[1]");
	set_name(0x13794c8, "LiftResource::sBases");
	del_items(0x13794d0, DELIT_SIMPLE, 420);
	apply_type(0x13794d0, "RTTIAttr[15]");
	set_name(0x13794d0, "LiftResource::sAttrs");
	del_items(0x1379674, DELIT_SIMPLE, 12);
	apply_type(0x1379674, "RTTIMessageHandler[1]");
	set_name(0x1379674, "LiftResource::sMessageHandlers");

	// LiftWheel
	set_name(0x1378ba8, "RTTI_LiftWheel");
	apply_type(0x1378ba8, "RTTICompound");
	del_items(0x1379468, DELIT_SIMPLE, 84);
	apply_type(0x1379468, "RTTIAttr[3]");
	set_name(0x1379468, "LiftWheel::sAttrs");

	// Light
	set_name(0x13450fc, "RTTI_Light");
	apply_type(0x13450fc, "RTTICompound");
	del_items(0x13465f4, DELIT_SIMPLE, 8);
	apply_type(0x13465f4, "RTTIBase[1]");
	set_name(0x13465f4, "Light::sBases");
	del_items(0x13465fc, DELIT_SIMPLE, 616);
	apply_type(0x13465fc, "RTTIAttr[22]");
	set_name(0x13465fc, "Light::sAttrs");
	del_items(0x1346864, DELIT_SIMPLE, 12);
	apply_type(0x1346864, "RTTIMessageHandler[1]");
	set_name(0x1346864, "Light::sMessageHandlers");

	// LightAttachedCorona
	set_name(0x13397e4, "RTTI_LightAttachedCorona");
	apply_type(0x13397e4, "RTTICompound");
	del_items(0x133a38c, DELIT_SIMPLE, 8);
	apply_type(0x133a38c, "RTTIBase[1]");
	set_name(0x133a38c, "LightAttachedCorona::sBases");
	del_items(0x133a394, DELIT_SIMPLE, 84);
	apply_type(0x133a394, "RTTIAttr[3]");
	set_name(0x133a394, "LightAttachedCorona::sAttrs");

	// LightEventInstance
	set_name(0x1397064, "RTTI_LightEventInstance");
	apply_type(0x1397064, "RTTICompound");
	del_items(0x1399184, DELIT_SIMPLE, 8);
	apply_type(0x1399184, "RTTIBase[1]");
	set_name(0x1399184, "LightEventInstance::sBases");

	// LightEventResource
	set_name(0x1397010, "RTTI_LightEventResource");
	apply_type(0x1397010, "RTTICompound");
	del_items(0x13990d4, DELIT_SIMPLE, 8);
	apply_type(0x13990d4, "RTTIBase[1]");
	set_name(0x13990d4, "LightEventResource::sBases");
	del_items(0x13990dc, DELIT_SIMPLE, 168);
	apply_type(0x13990dc, "RTTIAttr[6]");
	set_name(0x13990dc, "LightEventResource::sAttrs");

	// LightProbe
	set_name(0x13451b4, "RTTI_LightProbe");
	apply_type(0x13451b4, "RTTICompound");
	del_items(0x13471ec, DELIT_SIMPLE, 140);
	apply_type(0x13471ec, "RTTIAttr[5]");
	set_name(0x13471ec, "LightProbe::sAttrs");

	// LightProbeKdTreeObject
	set_name(0x1345314, "RTTI_LightProbeKdTreeObject");
	apply_type(0x1345314, "RTTICompound");
	del_items(0x1347278, DELIT_SIMPLE, 140);
	apply_type(0x1347278, "RTTIAttr[5]");
	set_name(0x1347278, "LightProbeKdTreeObject::sAttrs");

	// LightProbeSetResource
	set_name(0x1345368, "RTTI_LightProbeSetResource");
	apply_type(0x1345368, "RTTICompound");
	del_items(0x1347304, DELIT_SIMPLE, 8);
	apply_type(0x1347304, "RTTIBase[1]");
	set_name(0x1347304, "LightProbeSetResource::sBases");
	del_items(0x134730c, DELIT_SIMPLE, 112);
	apply_type(0x134730c, "RTTIAttr[4]");
	set_name(0x134730c, "LightProbeSetResource::sAttrs");
	del_items(0x134737c, DELIT_SIMPLE, 12);
	apply_type(0x134737c, "RTTIMessageHandler[1]");
	set_name(0x134737c, "LightProbeSetResource::sMessageHandlers");

	// LightResource
	set_name(0x13453dc, "RTTI_LightResource");
	apply_type(0x13453dc, "RTTICompound");
	del_items(0x1346fb4, DELIT_SIMPLE, 8);
	apply_type(0x1346fb4, "RTTIBase[1]");
	set_name(0x1346fb4, "LightResource::sBases");
	del_items(0x1346fbc, DELIT_SIMPLE, 560);
	apply_type(0x1346fbc, "RTTIAttr[20]");
	set_name(0x1346fbc, "LightResource::sAttrs");

	// LightShadowed
	set_name(0x134553c, "RTTI_LightShadowed");
	apply_type(0x134553c, "RTTICompound");
	del_items(0x1346a58, DELIT_SIMPLE, 8);
	apply_type(0x1346a58, "RTTIBase[1]");
	set_name(0x1346a58, "LightShadowed::sBases");
	del_items(0x1346a60, DELIT_SIMPLE, 280);
	apply_type(0x1346a60, "RTTIAttr[10]");
	set_name(0x1346a60, "LightShadowed::sAttrs");

	// LightShadowedResource
	set_name(0x1347c04, "RTTI_LightShadowedResource");
	apply_type(0x1347c04, "RTTICompound");
	del_items(0x1349968, DELIT_SIMPLE, 8);
	apply_type(0x1349968, "RTTIBase[1]");
	set_name(0x1349968, "LightShadowedResource::sBases");
	del_items(0x1349970, DELIT_SIMPLE, 280);
	apply_type(0x1349970, "RTTIAttr[10]");
	set_name(0x1349970, "LightShadowedResource::sAttrs");

	// LightingManager
	set_name(0x1345150, "RTTI_LightingManager");
	apply_type(0x1345150, "RTTICompound");
	del_items(0x1345ed0, DELIT_SIMPLE, 8);
	apply_type(0x1345ed0, "RTTIBase[1]");
	set_name(0x1345ed0, "LightingManager::sBases");

	// LinearLUT_8
	set_name(0x135cbdc, "RTTI_LinearLUT_8");
	apply_type(0x135cbdc, "RTTICompound");
	del_items(0x135cc30, DELIT_SIMPLE, 224);
	apply_type(0x135cc30, "RTTIAttr[8]");
	set_name(0x135cc30, "LinearLUT_8::sAttrs");

	// LinkType
	set_name(0x1352ba8, "RTTI_LinkType");
	apply_type(0x1352ba8, "RTTICompound");
	del_items(0x13539a4, DELIT_SIMPLE, 8);
	apply_type(0x13539a4, "RTTIBase[1]");
	set_name(0x13539a4, "LinkType::sBases");
	del_items(0x13539ac, DELIT_SIMPLE, 112);
	apply_type(0x13539ac, "RTTIAttr[4]");
	set_name(0x13539ac, "LinkType::sAttrs");
	del_items(0x1353a1c, DELIT_SIMPLE, 12);
	apply_type(0x1353a1c, "RTTIMessageHandler[1]");
	set_name(0x1353a1c, "LinkType::sMessageHandlers");

	// LinkTypeId
	set_name(0x1352b54, "RTTI_LinkTypeId");
	apply_type(0x1352b54, "RTTICompound");
	del_items(0x1353988, DELIT_SIMPLE, 28);
	apply_type(0x1353988, "RTTIAttr[1]");
	set_name(0x1353988, "LinkTypeId::sAttrs");

	// LinkTypeMask
	set_name(0x1352bfc, "RTTI_LinkTypeMask");
	apply_type(0x1352bfc, "RTTICompound");
	del_items(0x1353a28, DELIT_SIMPLE, 28);
	apply_type(0x1353a28, "RTTIAttr[1]");
	set_name(0x1353a28, "LinkTypeMask::sAttrs");

	// LinkedStaticMeshResource
	set_name(0x1355e78, "RTTI_LinkedStaticMeshResource");
	apply_type(0x1355e78, "RTTICompound");
	del_items(0x1358610, DELIT_SIMPLE, 8);
	apply_type(0x1358610, "RTTIBase[1]");
	set_name(0x1358610, "LinkedStaticMeshResource::sBases");
	del_items(0x1358618, DELIT_SIMPLE, 140);
	apply_type(0x1358618, "RTTIAttr[5]");
	set_name(0x1358618, "LinkedStaticMeshResource::sAttrs");
	del_items(0x13586a4, DELIT_SIMPLE, 12);
	apply_type(0x13586a4, "RTTIMessageHandler[1]");
	set_name(0x13586a4, "LinkedStaticMeshResource::sMessageHandlers");

	// ListItemTag
	set_name(0x133d0cc, "RTTI_ListItemTag");
	apply_type(0x133d0cc, "RTTICompound");
	del_items(0x133f44c, DELIT_SIMPLE, 8);
	apply_type(0x133f44c, "RTTIBase[1]");
	set_name(0x133f44c, "ListItemTag::sBases");
	del_items(0x133f454, DELIT_SIMPLE, 24);
	apply_type(0x133f454, "RTTIFunction[1]");
	set_name(0x133f454, "ListItemTag::sFunctions");

	// ListItemWidget
	set_name(0x133da50, "RTTI_ListItemWidget");
	apply_type(0x133da50, "RTTICompound");
	del_items(0x133f7d0, DELIT_SIMPLE, 8);
	apply_type(0x133f7d0, "RTTIBase[1]");
	set_name(0x133f7d0, "ListItemWidget::sBases");

	// ListTag
	set_name(0x133d078, "RTTI_ListTag");
	apply_type(0x133d078, "RTTICompound");
	del_items(0x133f3cc, DELIT_SIMPLE, 8);
	apply_type(0x133f3cc, "RTTIBase[1]");
	set_name(0x133f3cc, "ListTag::sBases");
	del_items(0x133f3d4, DELIT_SIMPLE, 120);
	apply_type(0x133f3d4, "RTTIFunction[5]");
	set_name(0x133f3d4, "ListTag::sFunctions");

	// ListWidget
	set_name(0x133d9fc, "RTTI_ListWidget");
	apply_type(0x133d9fc, "RTTICompound");
	del_items(0x133fcb0, DELIT_SIMPLE, 8);
	apply_type(0x133fcb0, "RTTIBase[1]");
	set_name(0x133fcb0, "ListWidget::sBases");

	// LoadableTag
	set_name(0x133cb5c, "RTTI_LoadableTag");
	apply_type(0x133cb5c, "RTTICompound");
	del_items(0x133e940, DELIT_SIMPLE, 8);
	apply_type(0x133e940, "RTTIBase[1]");
	set_name(0x133e940, "LoadableTag::sBases");

	// LocalizedSoundEventInstance
	set_name(0x139710c, "RTTI_LocalizedSoundEventInstance");
	apply_type(0x139710c, "RTTICompound");
	del_items(0x1399204, DELIT_SIMPLE, 8);
	apply_type(0x1399204, "RTTIBase[1]");
	set_name(0x1399204, "LocalizedSoundEventInstance::sBases");

	// LocalizedSoundEventResource
	set_name(0x13970b8, "RTTI_LocalizedSoundEventResource");
	apply_type(0x13970b8, "RTTICompound");
	del_items(0x139918c, DELIT_SIMPLE, 8);
	apply_type(0x139918c, "RTTIBase[1]");
	set_name(0x139918c, "LocalizedSoundEventResource::sBases");
	del_items(0x1399194, DELIT_SIMPLE, 112);
	apply_type(0x1399194, "RTTIAttr[4]");
	set_name(0x1399194, "LocalizedSoundEventResource::sAttrs");

	// LocalizedSpeechAsset
	set_name(0x13b69ec, "RTTI_LocalizedSpeechAsset");
	apply_type(0x13b69ec, "RTTICompound");
	del_items(0x13b78e4, DELIT_SIMPLE, 8);
	apply_type(0x13b78e4, "RTTIBase[1]");
	set_name(0x13b78e4, "LocalizedSpeechAsset::sBases");
	del_items(0x13b78ec, DELIT_SIMPLE, 56);
	apply_type(0x13b78ec, "RTTIAttr[2]");
	set_name(0x13b78ec, "LocalizedSpeechAsset::sAttrs");

	// LocalizedText
	set_name(0x135c54c, "RTTI_LocalizedText");
	apply_type(0x135c54c, "RTTICompound");
	del_items(0x135c9f8, DELIT_SIMPLE, 8);
	apply_type(0x135c9f8, "RTTIBase[1]");
	set_name(0x135c9f8, "LocalizedText::sBases");
	del_items(0x135ca00, DELIT_SIMPLE, 28);
	apply_type(0x135ca00, "RTTIAttr[1]");
	set_name(0x135ca00, "LocalizedText::sAttrs");

	// LocalizedTextEntry
	set_name(0x135c4f8, "RTTI_LocalizedTextEntry");
	apply_type(0x135c4f8, "RTTICompound");
	del_items(0x135c99c, DELIT_SIMPLE, 8);
	apply_type(0x135c99c, "RTTIBase[1]");
	set_name(0x135c99c, "LocalizedTextEntry::sBases");
	del_items(0x135c9a4, DELIT_SIMPLE, 84);
	apply_type(0x135c9a4, "RTTIAttr[3]");
	set_name(0x135c9a4, "LocalizedTextEntry::sAttrs");

	// Localizer
	set_name(0x135c5a0, "RTTI_Localizer");
	apply_type(0x135c5a0, "RTTICompound");
	del_items(0x135ca1c, DELIT_SIMPLE, 8);
	apply_type(0x135ca1c, "RTTIBase[1]");
	set_name(0x135ca1c, "Localizer::sBases");
	del_items(0x135ca24, DELIT_SIMPLE, 96);
	apply_type(0x135ca24, "RTTIFunction[4]");
	set_name(0x135ca24, "Localizer::sFunctions");

	// LocatorInstance
	set_name(0x139aaec, "RTTI_LocatorInstance");
	apply_type(0x139aaec, "RTTICompound");
	del_items(0x139b668, DELIT_SIMPLE, 16);
	apply_type(0x139b668, "RTTIBase[2]");
	set_name(0x139b668, "LocatorInstance::sBases");

	// LocatorResource
	set_name(0x139aa98, "RTTI_LocatorResource");
	apply_type(0x139aa98, "RTTICompound");
	del_items(0x139b60c, DELIT_SIMPLE, 8);
	apply_type(0x139b60c, "RTTIBase[1]");
	set_name(0x139b60c, "LocatorResource::sBases");
	del_items(0x139b614, DELIT_SIMPLE, 84);
	apply_type(0x139b614, "RTTIAttr[3]");
	set_name(0x139b614, "LocatorResource::sAttrs");

	// LocomotionMover
	set_name(0x1362b20, "RTTI_LocomotionMover");
	apply_type(0x1362b20, "RTTICompound");
	del_items(0x1364264, DELIT_SIMPLE, 8);
	apply_type(0x1364264, "RTTIBase[1]");
	set_name(0x1364264, "LocomotionMover::sBases");

	// LocomotionMoverResource
	set_name(0x1362b74, "RTTI_LocomotionMoverResource");
	apply_type(0x1362b74, "RTTICompound");
	del_items(0x136425c, DELIT_SIMPLE, 8);
	apply_type(0x136425c, "RTTIBase[1]");
	set_name(0x136425c, "LocomotionMoverResource::sBases");

	// LodMeshResource
	set_name(0x133b5a4, "RTTI_LodMeshResource");
	apply_type(0x133b5a4, "RTTICompound");
	del_items(0x133bc80, DELIT_SIMPLE, 8);
	apply_type(0x133bc80, "RTTIBase[1]");
	set_name(0x133bc80, "LodMeshResource::sBases");
	del_items(0x133bc88, DELIT_SIMPLE, 84);
	apply_type(0x133bc88, "RTTIAttr[3]");
	set_name(0x133bc88, "LodMeshResource::sAttrs");

	// LodMeshResourcePart
	set_name(0x133b550, "RTTI_LodMeshResourcePart");
	apply_type(0x133b550, "RTTICompound");
	del_items(0x133bc48, DELIT_SIMPLE, 56);
	apply_type(0x133bc48, "RTTIAttr[2]");
	set_name(0x133bc48, "LodMeshResourcePart::sAttrs");

	// LookAtEventInstance
	set_name(0x13971b4, "RTTI_LookAtEventInstance");
	apply_type(0x13971b4, "RTTICompound");
	del_items(0x13992d8, DELIT_SIMPLE, 8);
	apply_type(0x13992d8, "RTTIBase[1]");
	set_name(0x13992d8, "LookAtEventInstance::sBases");

	// LookAtEventResource
	set_name(0x1397160, "RTTI_LookAtEventResource");
	apply_type(0x1397160, "RTTICompound");
	del_items(0x139920c, DELIT_SIMPLE, 8);
	apply_type(0x139920c, "RTTIBase[1]");
	set_name(0x139920c, "LookAtEventResource::sBases");
	del_items(0x1399214, DELIT_SIMPLE, 196);
	apply_type(0x1399214, "RTTIAttr[7]");
	set_name(0x1399214, "LookAtEventResource::sAttrs");

	// LumpOptimizationSettings
	set_name(0x135c604, "RTTI_LumpOptimizationSettings");
	apply_type(0x135c604, "RTTICompound");
	del_items(0x135c7a0, DELIT_SIMPLE, 8);
	apply_type(0x135c7a0, "RTTIBase[1]");
	set_name(0x135c7a0, "LumpOptimizationSettings::sBases");
	del_items(0x135c7a8, DELIT_SIMPLE, 28);
	apply_type(0x135c7a8, "RTTIAttr[1]");
	set_name(0x135c7a8, "LumpOptimizationSettings::sAttrs");

	// LumpOptimizationSettingsGame
	set_name(0x13b6a54, "RTTI_LumpOptimizationSettingsGame");
	apply_type(0x13b6a54, "RTTICompound");
	del_items(0x13b7a20, DELIT_SIMPLE, 8);
	apply_type(0x13b7a20, "RTTIBase[1]");
	set_name(0x13b7a20, "LumpOptimizationSettingsGame::sBases");
	del_items(0x13b7a28, DELIT_SIMPLE, 56);
	apply_type(0x13b7a28, "RTTIAttr[2]");
	set_name(0x13b7a28, "LumpOptimizationSettingsGame::sAttrs");

	// MapIcon
	set_name(0x13ac51c, "RTTI_MapIcon");
	apply_type(0x13ac51c, "RTTICompound");
	del_items(0x13ad328, DELIT_SIMPLE, 168);
	apply_type(0x13ad328, "RTTIAttr[6]");
	set_name(0x13ad328, "MapIcon::sAttrs");

	// MapIconsResource
	set_name(0x13ac580, "RTTI_MapIconsResource");
	apply_type(0x13ac580, "RTTICompound");
	del_items(0x13ad3d0, DELIT_SIMPLE, 8);
	apply_type(0x13ad3d0, "RTTIBase[1]");
	set_name(0x13ad3d0, "MapIconsResource::sBases");
	del_items(0x13ad3d8, DELIT_SIMPLE, 224);
	apply_type(0x13ad3d8, "RTTIAttr[8]");
	set_name(0x13ad3d8, "MapIconsResource::sAttrs");
	del_items(0x13ad4b8, DELIT_SIMPLE, 12);
	apply_type(0x13ad4b8, "RTTIMessageHandler[1]");
	set_name(0x13ad4b8, "MapIconsResource::sMessageHandlers");

	// MapInstance
	set_name(0x13ac628, "RTTI_MapInstance");
	apply_type(0x13ac628, "RTTICompound");
	del_items(0x13ada98, DELIT_SIMPLE, 8);
	apply_type(0x13ada98, "RTTIBase[1]");
	set_name(0x13ada98, "MapInstance::sBases");

	// MapResource
	set_name(0x13ac754, "RTTI_MapResource");
	apply_type(0x13ac754, "RTTICompound");
	del_items(0x13ad950, DELIT_SIMPLE, 8);
	apply_type(0x13ad950, "RTTIBase[1]");
	set_name(0x13ad950, "MapResource::sBases");
	del_items(0x13ad958, DELIT_SIMPLE, 308);
	apply_type(0x13ad958, "RTTIAttr[11]");
	set_name(0x13ad958, "MapResource::sAttrs");
	del_items(0x13ada8c, DELIT_SIMPLE, 12);
	apply_type(0x13ada8c, "RTTIMessageHandler[1]");
	set_name(0x13ada8c, "MapResource::sMessageHandlers");

	// MapScrambleResource
	set_name(0x13ac5d4, "RTTI_MapScrambleResource");
	apply_type(0x13ac5d4, "RTTICompound");
	del_items(0x13ad4c4, DELIT_SIMPLE, 168);
	apply_type(0x13ad4c4, "RTTIAttr[6]");
	set_name(0x13ad4c4, "MapScrambleResource::sAttrs");

	// MapZone
	set_name(0x13ac68c, "RTTI_MapZone");
	apply_type(0x13ac68c, "RTTICompound");
	del_items(0x13ad8bc, DELIT_SIMPLE, 112);
	apply_type(0x13ad8bc, "RTTIAttr[4]");
	set_name(0x13ad8bc, "MapZone::sAttrs");

	// MaterialTypeReplacement
	set_name(0x13ab4e0, "RTTI_MaterialTypeReplacement");
	apply_type(0x13ab4e0, "RTTICompound");
	del_items(0x13abd5c, DELIT_SIMPLE, 56);
	apply_type(0x13abd5c, "RTTIAttr[2]");
	set_name(0x13abd5c, "MaterialTypeReplacement::sAttrs");

	// MaterialTypeResource
	set_name(0x1339bf4, "RTTI_MaterialTypeResource");
	apply_type(0x1339bf4, "RTTICompound");
	del_items(0x133ac8c, DELIT_SIMPLE, 8);
	apply_type(0x133ac8c, "RTTIBase[1]");
	set_name(0x133ac8c, "MaterialTypeResource::sBases");
	del_items(0x133ac94, DELIT_SIMPLE, 196);
	apply_type(0x133ac94, "RTTIAttr[7]");
	set_name(0x133ac94, "MaterialTypeResource::sAttrs");

	// MaterialTypeResourceGame
	set_name(0x136cc54, "RTTI_MaterialTypeResourceGame");
	apply_type(0x136cc54, "RTTICompound");
	del_items(0x136dce8, DELIT_SIMPLE, 8);
	apply_type(0x136dce8, "RTTIBase[1]");
	set_name(0x136dce8, "MaterialTypeResourceGame::sBases");
	del_items(0x136dcf0, DELIT_SIMPLE, 252);
	apply_type(0x136dcf0, "RTTIAttr[9]");
	set_name(0x136dcf0, "MaterialTypeResourceGame::sAttrs");

	// MedalRanksResource
	set_name(0x13a6ba0, "RTTI_MedalRanksResource");
	apply_type(0x13a6ba0, "RTTICompound");
	del_items(0x13a7868, DELIT_SIMPLE, 196);
	apply_type(0x13a7868, "RTTIAttr[7]");
	set_name(0x13a7868, "MedalRanksResource::sAttrs");

	// MedalResource
	set_name(0x13a6c04, "RTTI_MedalResource");
	apply_type(0x13a6c04, "RTTICompound");
	del_items(0x13a792c, DELIT_SIMPLE, 168);
	apply_type(0x13a792c, "RTTIAttr[6]");
	set_name(0x13a792c, "MedalResource::sAttrs");

	// MedalSystemResource
	set_name(0x13a6c58, "RTTI_MedalSystemResource");
	apply_type(0x13a6c58, "RTTICompound");
	del_items(0x13a79d4, DELIT_SIMPLE, 8);
	apply_type(0x13a79d4, "RTTIBase[1]");
	set_name(0x13a79d4, "MedalSystemResource::sBases");
	del_items(0x13a79dc, DELIT_SIMPLE, 56);
	apply_type(0x13a79dc, "RTTIAttr[2]");
	set_name(0x13a79dc, "MedalSystemResource::sAttrs");
	del_items(0x13a7a14, DELIT_SIMPLE, 12);
	apply_type(0x13a7a14, "RTTIMessageHandler[1]");
	set_name(0x13a7a14, "MedalSystemResource::sMessageHandlers");

	// Menu
	set_name(0x133c3b0, "RTTI_Menu");
	apply_type(0x133c3b0, "RTTICompound");
	del_items(0x133e4c4, DELIT_SIMPLE, 8);
	apply_type(0x133e4c4, "RTTIBase[1]");
	set_name(0x133e4c4, "Menu::sBases");
	del_items(0x133e4cc, DELIT_SIMPLE, 528);
	apply_type(0x133e4cc, "RTTIFunction[22]");
	set_name(0x133e4cc, "Menu::sFunctions");

	// MenuModule
	set_name(0x13ba258, "RTTI_MenuModule");
	apply_type(0x13ba258, "RTTICompound");
	del_items(0x13bbb4c, DELIT_SIMPLE, 8);
	apply_type(0x13bbb4c, "RTTIBase[1]");
	set_name(0x13bbb4c, "MenuModule::sBases");
	del_items(0x13bbb54, DELIT_SIMPLE, 456);
	apply_type(0x13bbb54, "RTTIFunction[19]");
	set_name(0x13bbb54, "MenuModule::sFunctions");

	// MenuMovieEventInstance
	set_name(0x13945a0, "RTTI_MenuMovieEventInstance");
	apply_type(0x13945a0, "RTTICompound");
	del_items(0x13962e0, DELIT_SIMPLE, 8);
	apply_type(0x13962e0, "RTTIBase[1]");
	set_name(0x13962e0, "MenuMovieEventInstance::sBases");

	// MenuMovieEventResource
	set_name(0x139454c, "RTTI_MenuMovieEventResource");
	apply_type(0x139454c, "RTTICompound");
	del_items(0x139624c, DELIT_SIMPLE, 8);
	apply_type(0x139624c, "RTTIBase[1]");
	set_name(0x139624c, "MenuMovieEventResource::sBases");
	del_items(0x1396254, DELIT_SIMPLE, 140);
	apply_type(0x1396254, "RTTIAttr[5]");
	set_name(0x1396254, "MenuMovieEventResource::sAttrs");

	// MenuNode
	set_name(0x133c910, "RTTI_MenuNode");
	apply_type(0x133c910, "RTTICompound");
	del_items(0x133e7e0, DELIT_SIMPLE, 8);
	apply_type(0x133e7e0, "RTTIBase[1]");
	set_name(0x133e7e0, "MenuNode::sBases");

	// MenuResource
	set_name(0x13ba1c4, "RTTI_MenuResource");
	apply_type(0x13ba1c4, "RTTICompound");
	del_items(0x13bbdfc, DELIT_SIMPLE, 8);
	apply_type(0x13bbdfc, "RTTIBase[1]");
	set_name(0x13bbdfc, "MenuResource::sBases");
	del_items(0x13bbe04, DELIT_SIMPLE, 56);
	apply_type(0x13bbe04, "RTTIAttr[2]");
	set_name(0x13bbe04, "MenuResource::sAttrs");

	// MenuScreenURI
	set_name(0x13ba170, "RTTI_MenuScreenURI");
	apply_type(0x13ba170, "RTTICompound");
	del_items(0x13bbdc4, DELIT_SIMPLE, 56);
	apply_type(0x13bbdc4, "RTTIAttr[2]");
	set_name(0x13bbdc4, "MenuScreenURI::sAttrs");

	// MenuStyle
	set_name(0x133e470, "RTTI_MenuStyle");
	apply_type(0x133e470, "RTTICompound");
	del_items(0x133eb18, DELIT_SIMPLE, 8);
	apply_type(0x133eb18, "RTTIBase[1]");
	set_name(0x133eb18, "MenuStyle::sBases");
	del_items(0x133eb20, DELIT_SIMPLE, 1792);
	apply_type(0x133eb20, "RTTIAttr[64]");
	set_name(0x133eb20, "MenuStyle::sAttrs");

	// MenuStyleAttributeFloat
	set_name(0x133e2bc, "RTTI_MenuStyleAttributeFloat");
	apply_type(0x133e2bc, "RTTICompound");
	del_items(0x133e988, DELIT_SIMPLE, 56);
	apply_type(0x133e988, "RTTIAttr[2]");
	set_name(0x133e988, "MenuStyleAttributeFloat::sAttrs");

	// MenuStyleAttributeInt
	set_name(0x133e268, "RTTI_MenuStyleAttributeInt");
	apply_type(0x133e268, "RTTICompound");
	del_items(0x133e950, DELIT_SIMPLE, 56);
	apply_type(0x133e950, "RTTIAttr[2]");
	set_name(0x133e950, "MenuStyleAttributeInt::sAttrs");

	// MenuStyleAttributeRGBAColor
	set_name(0x133e364, "RTTI_MenuStyleAttributeRGBAColor");
	apply_type(0x133e364, "RTTICompound");
	del_items(0x133e9f8, DELIT_SIMPLE, 56);
	apply_type(0x133e9f8, "RTTIAttr[2]");
	set_name(0x133e9f8, "MenuStyleAttributeRGBAColor::sAttrs");

	// MenuStyleAttributeString
	set_name(0x133e310, "RTTI_MenuStyleAttributeString");
	apply_type(0x133e310, "RTTICompound");
	del_items(0x133e9c0, DELIT_SIMPLE, 56);
	apply_type(0x133e9c0, "RTTIAttr[2]");
	set_name(0x133e9c0, "MenuStyleAttributeString::sAttrs");

	// MenuStyleSelector
	set_name(0x133e3b8, "RTTI_MenuStyleSelector");
	apply_type(0x133e3b8, "RTTICompound");
	del_items(0x133ea30, DELIT_SIMPLE, 112);
	apply_type(0x133ea30, "RTTIAttr[4]");
	set_name(0x133ea30, "MenuStyleSelector::sAttrs");

	// MeshHierachyShaderOverrides
	set_name(0x1347bb0, "RTTI_MeshHierachyShaderOverrides");
	apply_type(0x1347bb0, "RTTICompound");
	del_items(0x134994c, DELIT_SIMPLE, 28);
	apply_type(0x134994c, "RTTIAttr[1]");
	set_name(0x134994c, "MeshHierachyShaderOverrides::sAttrs");

	// MeshResourceBase
	set_name(0x133b618, "RTTI_MeshResourceBase");
	apply_type(0x133b618, "RTTICompound");
	del_items(0x133bbe0, DELIT_SIMPLE, 8);
	apply_type(0x133bbe0, "RTTIBase[1]");
	set_name(0x133bbe0, "MeshResourceBase::sBases");
	del_items(0x133bbe8, DELIT_SIMPLE, 84);
	apply_type(0x133bbe8, "RTTIAttr[3]");
	set_name(0x133bbe8, "MeshResourceBase::sAttrs");
	del_items(0x133bc3c, DELIT_SIMPLE, 12);
	apply_type(0x133bc3c, "RTTIMessageHandler[1]");
	set_name(0x133bc3c, "MeshResourceBase::sMessageHandlers");

	// MeshResourceOverrides
	set_name(0x1347ae8, "RTTI_MeshResourceOverrides");
	apply_type(0x1347ae8, "RTTICompound");
	del_items(0x13498c0, DELIT_SIMPLE, 28);
	apply_type(0x13498c0, "RTTIAttr[1]");
	set_name(0x13498c0, "MeshResourceOverrides::sAttrs");

	// MeshResourcePath
	set_name(0x1345840, "RTTI_MeshResourcePath");
	apply_type(0x1345840, "RTTICompound");
	del_items(0x1347428, DELIT_SIMPLE, 56);
	apply_type(0x1347428, "RTTIAttr[2]");
	set_name(0x1347428, "MeshResourcePath::sAttrs");

	// MeshShaderOverrides
	set_name(0x1347b4c, "RTTI_MeshShaderOverrides");
	apply_type(0x1347b4c, "RTTICompound");
	del_items(0x13498dc, DELIT_SIMPLE, 112);
	apply_type(0x13498dc, "RTTIAttr[4]");
	set_name(0x13498dc, "MeshShaderOverrides::sAttrs");

	// MeshSwitch
	set_name(0x138a4a0, "RTTI_MeshSwitch");
	apply_type(0x138a4a0, "RTTICompound");
	del_items(0x138cbe8, DELIT_SIMPLE, 56);
	apply_type(0x138cbe8, "RTTIAttr[2]");
	set_name(0x138cbe8, "MeshSwitch::sAttrs");

	// MeshSwitchComponent
	set_name(0x138a0f4, "RTTI_MeshSwitchComponent");
	apply_type(0x138a0f4, "RTTICompound");
	del_items(0x138cb3c, DELIT_SIMPLE, 8);
	apply_type(0x138cb3c, "RTTIBase[1]");
	set_name(0x138cb3c, "MeshSwitchComponent::sBases");

	// MeshSwitchComponentRep
	set_name(0x138a148, "RTTI_MeshSwitchComponentRep");
	apply_type(0x138a148, "RTTICompound");
	del_items(0x138cb48, DELIT_SIMPLE, 8);
	apply_type(0x138cb48, "RTTIBase[1]");
	set_name(0x138cb48, "MeshSwitchComponentRep::sBases");

	// MeshSwitchComponentResource
	set_name(0x138a19c, "RTTI_MeshSwitchComponentResource");
	apply_type(0x138a19c, "RTTICompound");
	del_items(0x138cadc, DELIT_SIMPLE, 8);
	apply_type(0x138cadc, "RTTIBase[1]");
	set_name(0x138cadc, "MeshSwitchComponentResource::sBases");
	del_items(0x138cae4, DELIT_SIMPLE, 84);
	apply_type(0x138cae4, "RTTIAttr[3]");
	set_name(0x138cae4, "MeshSwitchComponentResource::sAttrs");

	// Mine
	set_name(0x13a05d0, "RTTI_Mine");
	apply_type(0x13a05d0, "RTTICompound");
	del_items(0x13a18a8, DELIT_SIMPLE, 8);
	apply_type(0x13a18a8, "RTTIBase[1]");
	set_name(0x13a18a8, "Mine::sBases");
	del_items(0x13a18b0, DELIT_SIMPLE, 24);
	apply_type(0x13a18b0, "RTTIFunction[1]");
	set_name(0x13a18b0, "Mine::sFunctions");

	// MineRep
	set_name(0x13a0624, "RTTI_MineRep");
	apply_type(0x13a0624, "RTTICompound");
	del_items(0x13a18c8, DELIT_SIMPLE, 8);
	apply_type(0x13a18c8, "RTTIBase[1]");
	set_name(0x13a18c8, "MineRep::sBases");

	// MineResource
	set_name(0x13a0688, "RTTI_MineResource");
	apply_type(0x13a0688, "RTTICompound");
	del_items(0x13a16d8, DELIT_SIMPLE, 8);
	apply_type(0x13a16d8, "RTTIBase[1]");
	set_name(0x13a16d8, "MineResource::sBases");
	del_items(0x13a16e0, DELIT_SIMPLE, 448);
	apply_type(0x13a16e0, "RTTIAttr[16]");
	set_name(0x13a16e0, "MineResource::sAttrs");

	// MissileSilo
	set_name(0x13a06dc, "RTTI_MissileSilo");
	apply_type(0x13a06dc, "RTTICompound");
	del_items(0x13a1954, DELIT_SIMPLE, 8);
	apply_type(0x13a1954, "RTTIBase[1]");
	set_name(0x13a1954, "MissileSilo::sBases");
	del_items(0x13a195c, DELIT_SIMPLE, 96);
	apply_type(0x13a195c, "RTTIFunction[4]");
	set_name(0x13a195c, "MissileSilo::sFunctions");

	// MissileSiloResource
	set_name(0x13a0740, "RTTI_MissileSiloResource");
	apply_type(0x13a0740, "RTTICompound");
	del_items(0x13a18dc, DELIT_SIMPLE, 8);
	apply_type(0x13a18dc, "RTTIBase[1]");
	set_name(0x13a18dc, "MissileSiloResource::sBases");
	del_items(0x13a18e4, DELIT_SIMPLE, 112);
	apply_type(0x13a18e4, "RTTIAttr[4]");
	set_name(0x13a18e4, "MissileSiloResource::sAttrs");

	// Mission
	set_name(0x13a3154, "RTTI_Mission");
	apply_type(0x13a3154, "RTTICompound");
	del_items(0x13a4a74, DELIT_SIMPLE, 8);
	apply_type(0x13a4a74, "RTTIBase[1]");
	set_name(0x13a4a74, "Mission::sBases");

	// MissionAssassination
	set_name(0x13a31a8, "RTTI_MissionAssassination");
	apply_type(0x13a31a8, "RTTICompound");
	del_items(0x13a4bbc, DELIT_SIMPLE, 8);
	apply_type(0x13a4bbc, "RTTIBase[1]");
	set_name(0x13a4bbc, "MissionAssassination::sBases");

	// MissionAssassinationResource
	set_name(0x13a31fc, "RTTI_MissionAssassinationResource");
	apply_type(0x13a31fc, "RTTICompound");
	del_items(0x13a4c3c, DELIT_SIMPLE, 8);
	apply_type(0x13a4c3c, "RTTIBase[1]");
	set_name(0x13a4c3c, "MissionAssassinationResource::sBases");

	// MissionBodyCount
	set_name(0x13a3250, "RTTI_MissionBodyCount");
	apply_type(0x13a3250, "RTTICompound");
	del_items(0x13a4c44, DELIT_SIMPLE, 8);
	apply_type(0x13a4c44, "RTTIBase[1]");
	set_name(0x13a4c44, "MissionBodyCount::sBases");

	// MissionBodyCountResource
	set_name(0x13a32a4, "RTTI_MissionBodyCountResource");
	apply_type(0x13a32a4, "RTTICompound");
	del_items(0x13a4c74, DELIT_SIMPLE, 8);
	apply_type(0x13a4c74, "RTTIBase[1]");
	set_name(0x13a4c74, "MissionBodyCountResource::sBases");

	// MissionCampaign
	set_name(0x13a32f8, "RTTI_MissionCampaign");
	apply_type(0x13a32f8, "RTTICompound");
	del_items(0x13a4c7c, DELIT_SIMPLE, 8);
	apply_type(0x13a4c7c, "RTTIBase[1]");
	set_name(0x13a4c7c, "MissionCampaign::sBases");

	// MissionCampaignResource
	set_name(0x13a334c, "RTTI_MissionCampaignResource");
	apply_type(0x13a334c, "RTTICompound");
	del_items(0x13a4c84, DELIT_SIMPLE, 8);
	apply_type(0x13a4c84, "RTTIBase[1]");
	set_name(0x13a4c84, "MissionCampaignResource::sBases");
	del_items(0x13a4c8c, DELIT_SIMPLE, 84);
	apply_type(0x13a4c8c, "RTTIAttr[3]");
	set_name(0x13a4c8c, "MissionCampaignResource::sAttrs");

	// MissionCaptureAndHold
	set_name(0x13a33a0, "RTTI_MissionCaptureAndHold");
	apply_type(0x13a33a0, "RTTICompound");
	del_items(0x13a4ce0, DELIT_SIMPLE, 8);
	apply_type(0x13a4ce0, "RTTIBase[1]");
	set_name(0x13a4ce0, "MissionCaptureAndHold::sBases");

	// MissionCaptureAndHoldResource
	set_name(0x13a3458, "RTTI_MissionCaptureAndHoldResource");
	apply_type(0x13a3458, "RTTICompound");
	del_items(0x13a4d40, DELIT_SIMPLE, 8);
	apply_type(0x13a4d40, "RTTIBase[1]");
	set_name(0x13a4d40, "MissionCaptureAndHoldResource::sBases");
	del_items(0x13a4d48, DELIT_SIMPLE, 224);
	apply_type(0x13a4d48, "RTTIAttr[8]");
	set_name(0x13a4d48, "MissionCaptureAndHoldResource::sAttrs");

	// MissionConstants
	set_name(0x13a34ac, "RTTI_MissionConstants");
	apply_type(0x13a34ac, "RTTICompound");
	del_items(0x13a43bc, DELIT_SIMPLE, 8);
	apply_type(0x13a43bc, "RTTIBase[1]");
	set_name(0x13a43bc, "MissionConstants::sBases");
	del_items(0x13a43c4, DELIT_SIMPLE, 224);
	apply_type(0x13a43c4, "RTTIAttr[8]");
	set_name(0x13a43c4, "MissionConstants::sAttrs");

	// MissionEvent
	set_name(0x13a3510, "RTTI_MissionEvent");
	apply_type(0x13a3510, "RTTICompound");
	del_items(0x13a4628, DELIT_SIMPLE, 56);
	apply_type(0x13a4628, "RTTIAttr[2]");
	set_name(0x13a4628, "MissionEvent::sAttrs");

	// MissionHistory
	set_name(0x13a540c, "RTTI_MissionHistory");
	apply_type(0x13a540c, "RTTICompound");
	del_items(0x13a5498, DELIT_SIMPLE, 8);
	apply_type(0x13a5498, "RTTIBase[1]");
	set_name(0x13a5498, "MissionHistory::sBases");

	// MissionRadioMessage
	set_name(0x13aba8c, "RTTI_MissionRadioMessage");
	apply_type(0x13aba8c, "RTTICompound");
	del_items(0x13abf84, DELIT_SIMPLE, 168);
	apply_type(0x13abf84, "RTTIAttr[6]");
	set_name(0x13abf84, "MissionRadioMessage::sAttrs");

	// MissionResource
	set_name(0x13a3584, "RTTI_MissionResource");
	apply_type(0x13a3584, "RTTICompound");
	del_items(0x13a4660, DELIT_SIMPLE, 8);
	apply_type(0x13a4660, "RTTIBase[1]");
	set_name(0x13a4660, "MissionResource::sBases");
	del_items(0x13a4668, DELIT_SIMPLE, 1036);
	apply_type(0x13a4668, "RTTIAttr[37]");
	set_name(0x13a4668, "MissionResource::sAttrs");

	// MissionScavengeAndRetrieve
	set_name(0x13a3898, "RTTI_MissionScavengeAndRetrieve");
	apply_type(0x13a3898, "RTTICompound");
	del_items(0x13a515c, DELIT_SIMPLE, 8);
	apply_type(0x13a515c, "RTTIBase[1]");
	set_name(0x13a515c, "MissionScavengeAndRetrieve::sBases");

	// MissionScavengeAndRetrieveResource
	set_name(0x13a38ec, "RTTI_MissionScavengeAndRetrieveResource");
	apply_type(0x13a38ec, "RTTICompound");
	del_items(0x13a51b4, DELIT_SIMPLE, 8);
	apply_type(0x13a51b4, "RTTIBase[1]");
	set_name(0x13a51b4, "MissionScavengeAndRetrieveResource::sBases");
	del_items(0x13a51bc, DELIT_SIMPLE, 476);
	apply_type(0x13a51bc, "RTTIAttr[17]");
	set_name(0x13a51bc, "MissionScavengeAndRetrieveResource::sAttrs");

	// MissionSearchAndDestroy
	set_name(0x13a35d8, "RTTI_MissionSearchAndDestroy");
	apply_type(0x13a35d8, "RTTICompound");
	del_items(0x13a4e4c, DELIT_SIMPLE, 8);
	apply_type(0x13a4e4c, "RTTIBase[1]");
	set_name(0x13a4e4c, "MissionSearchAndDestroy::sBases");

	// MissionSearchAndDestroyResource
	set_name(0x13a362c, "RTTI_MissionSearchAndDestroyResource");
	apply_type(0x13a362c, "RTTICompound");
	del_items(0x13a4e90, DELIT_SIMPLE, 8);
	apply_type(0x13a4e90, "RTTIBase[1]");
	set_name(0x13a4e90, "MissionSearchAndDestroyResource::sBases");
	del_items(0x13a4e98, DELIT_SIMPLE, 252);
	apply_type(0x13a4e98, "RTTIAttr[9]");
	set_name(0x13a4e98, "MissionSearchAndDestroyResource::sAttrs");

	// MissionSearchAndRetrieve
	set_name(0x13a3680, "RTTI_MissionSearchAndRetrieve");
	apply_type(0x13a3680, "RTTICompound");
	del_items(0x13a4f94, DELIT_SIMPLE, 8);
	apply_type(0x13a4f94, "RTTIBase[1]");
	set_name(0x13a4f94, "MissionSearchAndRetrieve::sBases");

	// MissionSearchAndRetrieveResource
	set_name(0x13a36e4, "RTTI_MissionSearchAndRetrieveResource");
	apply_type(0x13a36e4, "RTTICompound");
	del_items(0x13a4fd8, DELIT_SIMPLE, 8);
	apply_type(0x13a4fd8, "RTTIBase[1]");
	set_name(0x13a4fd8, "MissionSearchAndRetrieveResource::sBases");
	del_items(0x13a4fe0, DELIT_SIMPLE, 364);
	apply_type(0x13a4fe0, "RTTIAttr[13]");
	set_name(0x13a4fe0, "MissionSearchAndRetrieveResource::sAttrs");

	// MissionSettings
	set_name(0x13a3748, "RTTI_MissionSettings");
	apply_type(0x13a3748, "RTTICompound");
	del_items(0x13a44a4, DELIT_SIMPLE, 8);
	apply_type(0x13a44a4, "RTTIBase[1]");
	set_name(0x13a44a4, "MissionSettings::sBases");
	del_items(0x13a44ac, DELIT_SIMPLE, 140);
	apply_type(0x13a44ac, "RTTIAttr[5]");
	set_name(0x13a44ac, "MissionSettings::sAttrs");
	del_items(0x13a4538, DELIT_SIMPLE, 240);
	apply_type(0x13a4538, "RTTIFunction[10]");
	set_name(0x13a4538, "MissionSettings::sFunctions");

	// MissionTest
	set_name(0x13a379c, "RTTI_MissionTest");
	apply_type(0x13a379c, "RTTICompound");
	del_items(0x13a514c, DELIT_SIMPLE, 8);
	apply_type(0x13a514c, "RTTIBase[1]");
	set_name(0x13a514c, "MissionTest::sBases");

	// MissionTestResource
	set_name(0x13a37f0, "RTTI_MissionTestResource");
	apply_type(0x13a37f0, "RTTICompound");
	del_items(0x13a5154, DELIT_SIMPLE, 8);
	apply_type(0x13a5154, "RTTIBase[1]");
	set_name(0x13a5154, "MissionTestResource::sBases");

	// Model
	set_name(0x13625c8, "RTTI_Model");
	apply_type(0x13625c8, "RTTICompound");
	del_items(0x1363aa8, DELIT_SIMPLE, 16);
	apply_type(0x1363aa8, "RTTIBase[2]");
	set_name(0x1363aa8, "Model::sBases");

	// ModelLodBiasEventInstance
	set_name(0x1394f98, "RTTI_ModelLodBiasEventInstance");
	apply_type(0x1394f98, "RTTICompound");
	del_items(0x1396ac8, DELIT_SIMPLE, 8);
	apply_type(0x1396ac8, "RTTIBase[1]");
	set_name(0x1396ac8, "ModelLodBiasEventInstance::sBases");

	// ModelLodBiasEventResource
	set_name(0x1394f44, "RTTI_ModelLodBiasEventResource");
	apply_type(0x1394f44, "RTTICompound");
	del_items(0x1396a34, DELIT_SIMPLE, 8);
	apply_type(0x1396a34, "RTTIBase[1]");
	set_name(0x1396a34, "ModelLodBiasEventResource::sBases");
	del_items(0x1396a3c, DELIT_SIMPLE, 140);
	apply_type(0x1396a3c, "RTTIAttr[5]");
	set_name(0x1396a3c, "ModelLodBiasEventResource::sAttrs");

	// ModelPartMeshReplacementResource
	set_name(0x1362a04, "RTTI_ModelPartMeshReplacementResource");
	apply_type(0x1362a04, "RTTICompound");
	del_items(0x13640e0, DELIT_SIMPLE, 8);
	apply_type(0x13640e0, "RTTIBase[1]");
	set_name(0x13640e0, "ModelPartMeshReplacementResource::sBases");
	del_items(0x13640e8, DELIT_SIMPLE, 112);
	apply_type(0x13640e8, "RTTIAttr[4]");
	set_name(0x13640e8, "ModelPartMeshReplacementResource::sAttrs");

	// ModelPartResource
	set_name(0x1362990, "RTTI_ModelPartResource");
	apply_type(0x1362990, "RTTICompound");
	del_items(0x1364030, DELIT_SIMPLE, 8);
	apply_type(0x1364030, "RTTIBase[1]");
	set_name(0x1364030, "ModelPartResource::sBases");
	del_items(0x1364038, DELIT_SIMPLE, 168);
	apply_type(0x1364038, "RTTIAttr[6]");
	set_name(0x1364038, "ModelPartResource::sAttrs");

	// ModelProxy
	set_name(0x1362854, "RTTI_ModelProxy");
	apply_type(0x1362854, "RTTICompound");
	del_items(0x136418c, DELIT_SIMPLE, 8);
	apply_type(0x136418c, "RTTIBase[1]");
	set_name(0x136418c, "ModelProxy::sBases");

	// ModelProxyRemapEntry
	set_name(0x13628b8, "RTTI_ModelProxyRemapEntry");
	apply_type(0x13628b8, "RTTICompound");
	del_items(0x1364194, DELIT_SIMPLE, 56);
	apply_type(0x1364194, "RTTIAttr[2]");
	set_name(0x1364194, "ModelProxyRemapEntry::sAttrs");

	// ModelProxyResource
	set_name(0x136290c, "RTTI_ModelProxyResource");
	apply_type(0x136290c, "RTTICompound");
	del_items(0x13641cc, DELIT_SIMPLE, 8);
	apply_type(0x13641cc, "RTTIBase[1]");
	set_name(0x13641cc, "ModelProxyResource::sBases");
	del_items(0x13641d4, DELIT_SIMPLE, 112);
	apply_type(0x13641d4, "RTTIAttr[4]");
	set_name(0x13641d4, "ModelProxyResource::sAttrs");

	// ModelResource
	set_name(0x136262c, "RTTI_ModelResource");
	apply_type(0x136262c, "RTTICompound");
	del_items(0x1363ab8, DELIT_SIMPLE, 8);
	apply_type(0x1363ab8, "RTTIBase[1]");
	set_name(0x1363ab8, "ModelResource::sBases");
	del_items(0x1363ac0, DELIT_SIMPLE, 140);
	apply_type(0x1363ac0, "RTTIAttr[5]");
	set_name(0x1363ac0, "ModelResource::sAttrs");

	// ModifyTorqueRatioAction
	set_name(0x1376a90, "RTTI_ModifyTorqueRatioAction");
	apply_type(0x1376a90, "RTTICompound");
	del_items(0x1378090, DELIT_SIMPLE, 8);
	apply_type(0x1378090, "RTTIBase[1]");
	set_name(0x1378090, "ModifyTorqueRatioAction::sBases");
	del_items(0x1378098, DELIT_SIMPLE, 112);
	apply_type(0x1378098, "RTTIAttr[4]");
	set_name(0x1378098, "ModifyTorqueRatioAction::sAttrs");

	// Module
	set_name(0x13680a4, "RTTI_Module");
	apply_type(0x13680a4, "RTTICompound");
	del_items(0x136859c, DELIT_SIMPLE, 8);
	apply_type(0x136859c, "RTTIBase[1]");
	set_name(0x136859c, "Module::sBases");
	del_items(0x13685a4, DELIT_SIMPLE, 120);
	apply_type(0x13685a4, "RTTIFunction[5]");
	set_name(0x13685a4, "Module::sFunctions");

	// MortarStrike
	set_name(0x13a0794, "RTTI_MortarStrike");
	apply_type(0x13a0794, "RTTICompound");
	del_items(0x13a1b04, DELIT_SIMPLE, 8);
	apply_type(0x13a1b04, "RTTIBase[1]");
	set_name(0x13a1b04, "MortarStrike::sBases");

	// MortarStrikeRep
	set_name(0x13a07e8, "RTTI_MortarStrikeRep");
	apply_type(0x13a07e8, "RTTICompound");
	del_items(0x13a1b0c, DELIT_SIMPLE, 8);
	apply_type(0x13a1b0c, "RTTIBase[1]");
	set_name(0x13a1b0c, "MortarStrikeRep::sBases");

	// MortarStrikeResource
	set_name(0x13a083c, "RTTI_MortarStrikeResource");
	apply_type(0x13a083c, "RTTICompound");
	del_items(0x13a19c8, DELIT_SIMPLE, 8);
	apply_type(0x13a19c8, "RTTIBase[1]");
	set_name(0x13a19c8, "MortarStrikeResource::sBases");
	del_items(0x13a19d0, DELIT_SIMPLE, 308);
	apply_type(0x13a19d0, "RTTIAttr[11]");
	set_name(0x13a19d0, "MortarStrikeResource::sAttrs");

	// MotionControllerDeadzone
	set_name(0x13b6ae8, "RTTI_MotionControllerDeadzone");
	apply_type(0x13b6ae8, "RTTICompound");
	del_items(0x13b746c, DELIT_SIMPLE, 8);
	apply_type(0x13b746c, "RTTIBase[1]");
	set_name(0x13b746c, "MotionControllerDeadzone::sBases");
	del_items(0x13b7474, DELIT_SIMPLE, 532);
	apply_type(0x13b7474, "RTTIAttr[19]");
	set_name(0x13b7474, "MotionControllerDeadzone::sAttrs");

	// MotionControllerDifficultySettingsResource
	set_name(0x1367db8, "RTTI_MotionControllerDifficultySettingsResource");
	apply_type(0x1367db8, "RTTICompound");
	del_items(0x136a49c, DELIT_SIMPLE, 8);
	apply_type(0x136a49c, "RTTIBase[1]");
	set_name(0x136a49c, "MotionControllerDifficultySettingsResource::sBases");
	del_items(0x136a4a4, DELIT_SIMPLE, 56);
	apply_type(0x136a4a4, "RTTIAttr[2]");
	set_name(0x136a4a4, "MotionControllerDifficultySettingsResource::sAttrs");

	// MountEventInstance
	set_name(0x139725c, "RTTI_MountEventInstance");
	apply_type(0x139725c, "RTTICompound");
	del_items(0x139933c, DELIT_SIMPLE, 8);
	apply_type(0x139933c, "RTTIBase[1]");
	set_name(0x139933c, "MountEventInstance::sBases");

	// MountEventResource
	set_name(0x1397208, "RTTI_MountEventResource");
	apply_type(0x1397208, "RTTICompound");
	del_items(0x13992e0, DELIT_SIMPLE, 8);
	apply_type(0x13992e0, "RTTIBase[1]");
	set_name(0x13992e0, "MountEventResource::sBases");
	del_items(0x13992e8, DELIT_SIMPLE, 84);
	apply_type(0x13992e8, "RTTIAttr[3]");
	set_name(0x13992e8, "MountEventResource::sAttrs");

	// MountPlayAnimationObjectEventInstance
	set_name(0x1397304, "RTTI_MountPlayAnimationObjectEventInstance");
	apply_type(0x1397304, "RTTICompound");
	del_items(0x13993f4, DELIT_SIMPLE, 8);
	apply_type(0x13993f4, "RTTIBase[1]");
	set_name(0x13993f4, "MountPlayAnimationObjectEventInstance::sBases");

	// MountPlayAnimationObjectEventResource
	set_name(0x13972b0, "RTTI_MountPlayAnimationObjectEventResource");
	apply_type(0x13972b0, "RTTICompound");
	del_items(0x1399344, DELIT_SIMPLE, 8);
	apply_type(0x1399344, "RTTIBase[1]");
	set_name(0x1399344, "MountPlayAnimationObjectEventResource::sBases");
	del_items(0x139934c, DELIT_SIMPLE, 168);
	apply_type(0x139934c, "RTTIAttr[6]");
	set_name(0x139934c, "MountPlayAnimationObjectEventResource::sAttrs");

	// MountableEntity
	set_name(0x137d03c, "RTTI_MountableEntity");
	apply_type(0x137d03c, "RTTICompound");
	del_items(0x137df30, DELIT_SIMPLE, 16);
	apply_type(0x137df30, "RTTIBase[2]");
	set_name(0x137df30, "MountableEntity::sBases");
	del_items(0x137df40, DELIT_SIMPLE, 120);
	apply_type(0x137df40, "RTTIFunction[5]");
	set_name(0x137df40, "MountableEntity::sFunctions");

	// MountableEntityController
	set_name(0x137d148, "RTTI_MountableEntityController");
	apply_type(0x137d148, "RTTICompound");
	del_items(0x137dda8, DELIT_SIMPLE, 8);
	apply_type(0x137dda8, "RTTIBase[1]");
	set_name(0x137dda8, "MountableEntityController::sBases");

	// MountableEntityResource
	set_name(0x137d0f4, "RTTI_MountableEntityResource");
	apply_type(0x137d0f4, "RTTICompound");
	del_items(0x137dde8, DELIT_SIMPLE, 8);
	apply_type(0x137dde8, "RTTIBase[1]");
	set_name(0x137dde8, "MountableEntityResource::sBases");
	del_items(0x137ddf0, DELIT_SIMPLE, 308);
	apply_type(0x137ddf0, "RTTIAttr[11]");
	set_name(0x137ddf0, "MountableEntityResource::sAttrs");
	del_items(0x137df24, DELIT_SIMPLE, 12);
	apply_type(0x137df24, "RTTIMessageHandler[1]");
	set_name(0x137df24, "MountableEntityResource::sMessageHandlers");

	// MountedGun
	set_name(0x137d19c, "RTTI_MountedGun");
	apply_type(0x137d19c, "RTTICompound");
	del_items(0x137ef0c, DELIT_SIMPLE, 16);
	apply_type(0x137ef0c, "RTTIBase[2]");
	set_name(0x137ef0c, "MountedGun::sBases");
	del_items(0x137ef1c, DELIT_SIMPLE, 84);
	apply_type(0x137ef1c, "RTTIAttr[3]");
	set_name(0x137ef1c, "MountedGun::sAttrs");
	del_items(0x137ef70, DELIT_SIMPLE, 312);
	apply_type(0x137ef70, "RTTIFunction[13]");
	set_name(0x137ef70, "MountedGun::sFunctions");

	// MountedGunAiController
	set_name(0x137d1f0, "RTTI_MountedGunAiController");
	apply_type(0x137d1f0, "RTTICompound");
	del_items(0x137f0b0, DELIT_SIMPLE, 8);
	apply_type(0x137f0b0, "RTTIBase[1]");
	set_name(0x137f0b0, "MountedGunAiController::sBases");

	// MountedGunController
	set_name(0x137d244, "RTTI_MountedGunController");
	apply_type(0x137d244, "RTTICompound");
	del_items(0x137ec40, DELIT_SIMPLE, 8);
	apply_type(0x137ec40, "RTTIBase[1]");
	set_name(0x137ec40, "MountedGunController::sBases");

	// MountedGunJoystickController
	set_name(0x137d298, "RTTI_MountedGunJoystickController");
	apply_type(0x137d298, "RTTICompound");
	del_items(0x137f0b8, DELIT_SIMPLE, 8);
	apply_type(0x137f0b8, "RTTIBase[1]");
	set_name(0x137f0b8, "MountedGunJoystickController::sBases");

	// MountedGunRep
	set_name(0x137d2ec, "RTTI_MountedGunRep");
	apply_type(0x137d2ec, "RTTICompound");
	del_items(0x137f0a8, DELIT_SIMPLE, 8);
	apply_type(0x137f0a8, "RTTIBase[1]");
	set_name(0x137f0a8, "MountedGunRep::sBases");

	// MountedGunResource
	set_name(0x137d3a4, "RTTI_MountedGunResource");
	apply_type(0x137d3a4, "RTTICompound");
	del_items(0x137e84c, DELIT_SIMPLE, 8);
	apply_type(0x137e84c, "RTTIBase[1]");
	set_name(0x137e84c, "MountedGunResource::sBases");
	del_items(0x137e854, DELIT_SIMPLE, 980);
	apply_type(0x137e854, "RTTIAttr[35]");
	set_name(0x137e854, "MountedGunResource::sAttrs");
	del_items(0x137ec28, DELIT_SIMPLE, 24);
	apply_type(0x137ec28, "RTTIMessageHandler[2]");
	set_name(0x137ec28, "MountedGunResource::sMessageHandlers");

	// MountedGunWeaponSettings
	set_name(0x137d408, "RTTI_MountedGunWeaponSettings");
	apply_type(0x137d408, "RTTICompound");
	del_items(0x137ec48, DELIT_SIMPLE, 8);
	apply_type(0x137ec48, "RTTIBase[1]");
	set_name(0x137ec48, "MountedGunWeaponSettings::sBases");
	del_items(0x137ec50, DELIT_SIMPLE, 560);
	apply_type(0x137ec50, "RTTIAttr[20]");
	set_name(0x137ec50, "MountedGunWeaponSettings::sAttrs");

	// MountedGunWeaponSettingsModelPart
	set_name(0x137d46c, "RTTI_MountedGunWeaponSettingsModelPart");
	apply_type(0x137d46c, "RTTICompound");
	del_items(0x137ee80, DELIT_SIMPLE, 140);
	apply_type(0x137ee80, "RTTIAttr[5]");
	set_name(0x137ee80, "MountedGunWeaponSettingsModelPart::sAttrs");

	// MoveThroughEventInstance
	set_name(0x1397410, "RTTI_MoveThroughEventInstance");
	apply_type(0x1397410, "RTTICompound");
	del_items(0x1399490, DELIT_SIMPLE, 8);
	apply_type(0x1399490, "RTTIBase[1]");
	set_name(0x1399490, "MoveThroughEventInstance::sBases");

	// MoveThroughEventResource
	set_name(0x13973bc, "RTTI_MoveThroughEventResource");
	apply_type(0x13973bc, "RTTICompound");
	del_items(0x1399450, DELIT_SIMPLE, 8);
	apply_type(0x1399450, "RTTIBase[1]");
	set_name(0x1399450, "MoveThroughEventResource::sBases");
	del_items(0x1399458, DELIT_SIMPLE, 56);
	apply_type(0x1399458, "RTTIAttr[2]");
	set_name(0x1399458, "MoveThroughEventResource::sAttrs");

	// MoveThroughSubGoalTarget
	set_name(0x1397368, "RTTI_MoveThroughSubGoalTarget");
	apply_type(0x1397368, "RTTICompound");
	del_items(0x13993fc, DELIT_SIMPLE, 84);
	apply_type(0x13993fc, "RTTIAttr[3]");
	set_name(0x13993fc, "MoveThroughSubGoalTarget::sAttrs");

	// MoveToEventInstance
	set_name(0x13974b8, "RTTI_MoveToEventInstance");
	apply_type(0x13974b8, "RTTICompound");
	del_items(0x139904c, DELIT_SIMPLE, 8);
	apply_type(0x139904c, "RTTIBase[1]");
	set_name(0x139904c, "MoveToEventInstance::sBases");

	// MoveToEventResource
	set_name(0x1397464, "RTTI_MoveToEventResource");
	apply_type(0x1397464, "RTTICompound");
	del_items(0x1398f80, DELIT_SIMPLE, 8);
	apply_type(0x1398f80, "RTTIBase[1]");
	set_name(0x1398f80, "MoveToEventResource::sBases");
	del_items(0x1398f88, DELIT_SIMPLE, 196);
	apply_type(0x1398f88, "RTTIAttr[7]");
	set_name(0x1398f88, "MoveToEventResource::sAttrs");

	// MovementRibbonResource
	set_name(0x13b2c84, "RTTI_MovementRibbonResource");
	apply_type(0x13b2c84, "RTTICompound");
	del_items(0x13b39b8, DELIT_SIMPLE, 8);
	apply_type(0x13b39b8, "RTTIBase[1]");
	set_name(0x13b39b8, "MovementRibbonResource::sBases");
	del_items(0x13b39c0, DELIT_SIMPLE, 56);
	apply_type(0x13b39c0, "RTTIAttr[2]");
	set_name(0x13b39c0, "MovementRibbonResource::sAttrs");

	// Mover
	set_name(0x1362a68, "RTTI_Mover");
	apply_type(0x1362a68, "RTTICompound");
	del_items(0x1364244, DELIT_SIMPLE, 16);
	apply_type(0x1364244, "RTTIBase[2]");
	set_name(0x1364244, "Mover::sBases");

	// MoverResource
	set_name(0x1362acc, "RTTI_MoverResource");
	apply_type(0x1362acc, "RTTICompound");
	del_items(0x1364254, DELIT_SIMPLE, 8);
	apply_type(0x1364254, "RTTIBase[1]");
	set_name(0x1364254, "MoverResource::sBases");

	// MovieListResource
	set_name(0x136cb7c, "RTTI_MovieListResource");
	apply_type(0x136cb7c, "RTTICompound");
	del_items(0x136feb4, DELIT_SIMPLE, 8);
	apply_type(0x136feb4, "RTTIBase[1]");
	set_name(0x136feb4, "MovieListResource::sBases");
	del_items(0x136febc, DELIT_SIMPLE, 56);
	apply_type(0x136febc, "RTTIAttr[2]");
	set_name(0x136febc, "MovieListResource::sAttrs");

	// MovieResource
	set_name(0x136cb28, "RTTI_MovieResource");
	apply_type(0x136cb28, "RTTICompound");
	del_items(0x136fc7c, DELIT_SIMPLE, 8);
	apply_type(0x136fc7c, "RTTIBase[1]");
	set_name(0x136fc7c, "MovieResource::sBases");
	del_items(0x136fc84, DELIT_SIMPLE, 560);
	apply_type(0x136fc84, "RTTIAttr[20]");
	set_name(0x136fc84, "MovieResource::sAttrs");

	// MovieSkipLocation
	set_name(0x136cab4, "RTTI_MovieSkipLocation");
	apply_type(0x136cab4, "RTTICompound");
	del_items(0x136fc44, DELIT_SIMPLE, 56);
	apply_type(0x136fc44, "RTTIAttr[2]");
	set_name(0x136fc44, "MovieSkipLocation::sAttrs");

	// MovieSubtitle
	set_name(0x13ba10c, "RTTI_MovieSubtitle");
	apply_type(0x13ba10c, "RTTICompound");
	del_items(0x13bbd1c, DELIT_SIMPLE, 8);
	apply_type(0x13bbd1c, "RTTIBase[1]");
	set_name(0x13bbd1c, "MovieSubtitle::sBases");
	del_items(0x13bbd24, DELIT_SIMPLE, 84);
	apply_type(0x13bbd24, "RTTIAttr[3]");
	set_name(0x13bbd24, "MovieSubtitle::sAttrs");

	// MovieSubtitleResource
	set_name(0x13ba0a8, "RTTI_MovieSubtitleResource");
	apply_type(0x13ba0a8, "RTTICompound");
	del_items(0x13bbd78, DELIT_SIMPLE, 8);
	apply_type(0x13bbd78, "RTTIBase[1]");
	set_name(0x13bbd78, "MovieSubtitleResource::sBases");
	del_items(0x13bbd80, DELIT_SIMPLE, 56);
	apply_type(0x13bbd80, "RTTIAttr[2]");
	set_name(0x13bbd80, "MovieSubtitleResource::sAttrs");
	del_items(0x13bbdb8, DELIT_SIMPLE, 12);
	apply_type(0x13bbdb8, "RTTIMessageHandler[1]");
	set_name(0x13bbdb8, "MovieSubtitleResource::sMessageHandlers");

	// MovieTag
	set_name(0x13ba3bc, "RTTI_MovieTag");
	apply_type(0x13ba3bc, "RTTICompound");
	del_items(0x13bc17c, DELIT_SIMPLE, 8);
	apply_type(0x13bc17c, "RTTIBase[1]");
	set_name(0x13bc17c, "MovieTag::sBases");
	del_items(0x13bc184, DELIT_SIMPLE, 216);
	apply_type(0x13bc184, "RTTIFunction[9]");
	set_name(0x13bc184, "MovieTag::sFunctions");

	// MovieWidget
	set_name(0x13ba50c, "RTTI_MovieWidget");
	apply_type(0x13ba50c, "RTTICompound");
	del_items(0x13bc354, DELIT_SIMPLE, 8);
	apply_type(0x13bc354, "RTTIBase[1]");
	set_name(0x13bc354, "MovieWidget::sBases");

	// MsgAbortAnimState
	set_name(0x1337168, "RTTI_MsgAbortAnimState");
	apply_type(0x1337168, "RTTICompound");
	del_items(0x1337ffc, DELIT_SIMPLE, 8);
	apply_type(0x1337ffc, "RTTIBase[1]");
	set_name(0x1337ffc, "MsgAbortAnimState::sBases");

	// MsgActiveViewportsChanged
	set_name(0x135d754, "RTTI_MsgActiveViewportsChanged");
	apply_type(0x135d754, "RTTICompound");
	del_items(0x1360034, DELIT_SIMPLE, 8);
	apply_type(0x1360034, "RTTIBase[1]");
	set_name(0x1360034, "MsgActiveViewportsChanged::sBases");

	// MsgBase
	set_name(0x1339098, "RTTI_MsgBase");
	apply_type(0x1339098, "RTTICompound");
	del_items(0x13395c4, DELIT_SIMPLE, 8);
	apply_type(0x13395c4, "RTTIBase[1]");
	set_name(0x13395c4, "MsgBase::sBases");

	// MsgEnterAnimState
	set_name(0x13370c0, "RTTI_MsgEnterAnimState");
	apply_type(0x13370c0, "RTTICompound");
	del_items(0x1337fec, DELIT_SIMPLE, 8);
	apply_type(0x1337fec, "RTTIBase[1]");
	set_name(0x1337fec, "MsgEnterAnimState::sBases");

	// MsgEvent
	set_name(0x133923c, "RTTI_MsgEvent");
	apply_type(0x133923c, "RTTICompound");
	del_items(0x13395ec, DELIT_SIMPLE, 8);
	apply_type(0x13395ec, "RTTIBase[1]");
	set_name(0x13395ec, "MsgEvent::sBases");

	// MsgGetAnimationInstance
	set_name(0x13371bc, "RTTI_MsgGetAnimationInstance");
	apply_type(0x13371bc, "RTTICompound");
	del_items(0x1337fdc, DELIT_SIMPLE, 8);
	apply_type(0x1337fdc, "RTTIBase[1]");
	set_name(0x1337fdc, "MsgGetAnimationInstance::sBases");

	// MsgInit
	set_name(0x13390ec, "RTTI_MsgInit");
	apply_type(0x13390ec, "RTTICompound");
	del_items(0x13395cc, DELIT_SIMPLE, 8);
	apply_type(0x13395cc, "RTTIBase[1]");
	set_name(0x13395cc, "MsgInit::sBases");

	// MsgInput
	set_name(0x1339290, "RTTI_MsgInput");
	apply_type(0x1339290, "RTTICompound");
	del_items(0x1339648, DELIT_SIMPLE, 8);
	apply_type(0x1339648, "RTTIBase[1]");
	set_name(0x1339648, "MsgInput::sBases");

	// MsgJoystick
	set_name(0x13392e4, "RTTI_MsgJoystick");
	apply_type(0x13392e4, "RTTICompound");
	del_items(0x1339650, DELIT_SIMPLE, 8);
	apply_type(0x1339650, "RTTIBase[1]");
	set_name(0x1339650, "MsgJoystick::sBases");

	// MsgLeaveAnimState
	set_name(0x1337114, "RTTI_MsgLeaveAnimState");
	apply_type(0x1337114, "RTTICompound");
	del_items(0x1337ff4, DELIT_SIMPLE, 8);
	apply_type(0x1337ff4, "RTTIBase[1]");
	set_name(0x1337ff4, "MsgLeaveAnimState::sBases");

	// MsgPostLoad
	set_name(0x13391e8, "RTTI_MsgPostLoad");
	apply_type(0x13391e8, "RTTICompound");
	del_items(0x13395e4, DELIT_SIMPLE, 8);
	apply_type(0x13395e4, "RTTIBase[1]");
	set_name(0x13395e4, "MsgPostLoad::sBases");

	// MsgPostStreamingAction
	set_name(0x135c100, "RTTI_MsgPostStreamingAction");
	apply_type(0x135c100, "RTTICompound");
	del_items(0x135c22c, DELIT_SIMPLE, 8);
	apply_type(0x135c22c, "RTTIBase[1]");
	set_name(0x135c22c, "MsgPostStreamingAction::sBases");

	// MsgPreLoad
	set_name(0x1339194, "RTTI_MsgPreLoad");
	apply_type(0x1339194, "RTTICompound");
	del_items(0x13395dc, DELIT_SIMPLE, 8);
	apply_type(0x13395dc, "RTTIBase[1]");
	set_name(0x13395dc, "MsgPreLoad::sBases");

	// MsgReadBinary
	set_name(0x13361ac, "RTTI_MsgReadBinary");
	apply_type(0x13361ac, "RTTICompound");
	del_items(0x1336298, DELIT_SIMPLE, 8);
	apply_type(0x1336298, "RTTIBase[1]");
	set_name(0x1336298, "MsgReadBinary::sBases");

	// MsgReadText
	set_name(0x1336238, "RTTI_MsgReadText");
	apply_type(0x1336238, "RTTICompound");
	del_items(0x13362a0, DELIT_SIMPLE, 8);
	apply_type(0x13362a0, "RTTIBase[1]");
	set_name(0x13362a0, "MsgReadText::sBases");

	// MsgStartAnimation
	set_name(0x1336fc4, "RTTI_MsgStartAnimation");
	apply_type(0x1336fc4, "RTTICompound");
	del_items(0x1337fcc, DELIT_SIMPLE, 8);
	apply_type(0x1337fcc, "RTTIBase[1]");
	set_name(0x1337fcc, "MsgStartAnimation::sBases");

	// MsgStartSound
	set_name(0x133706c, "RTTI_MsgStartSound");
	apply_type(0x133706c, "RTTICompound");
	del_items(0x1337fe4, DELIT_SIMPLE, 8);
	apply_type(0x1337fe4, "RTTIBase[1]");
	set_name(0x1337fe4, "MsgStartSound::sBases");

	// MsgStopAnimation
	set_name(0x1337018, "RTTI_MsgStopAnimation");
	apply_type(0x1337018, "RTTICompound");
	del_items(0x1337fd4, DELIT_SIMPLE, 8);
	apply_type(0x1337fd4, "RTTIBase[1]");
	set_name(0x1337fd4, "MsgStopAnimation::sBases");

	// MsgUpdate
	set_name(0x1339140, "RTTI_MsgUpdate");
	apply_type(0x1339140, "RTTICompound");
	del_items(0x13395d4, DELIT_SIMPLE, 8);
	apply_type(0x13395d4, "RTTIBase[1]");
	set_name(0x13395d4, "MsgUpdate::sBases");

	// MultiAction
	set_name(0x135e330, "RTTI_MultiAction");
	apply_type(0x135e330, "RTTICompound");
	del_items(0x1361350, DELIT_SIMPLE, 8);
	apply_type(0x1361350, "RTTIBase[1]");
	set_name(0x1361350, "MultiAction::sBases");
	del_items(0x1361358, DELIT_SIMPLE, 56);
	apply_type(0x1361358, "RTTIAttr[2]");
	set_name(0x1361358, "MultiAction::sAttrs");

	// MultiBlendedMeshInstance
	set_name(0x133bb30, "RTTI_MultiBlendedMeshInstance");
	apply_type(0x133bb30, "RTTICompound");
	del_items(0x133c300, DELIT_SIMPLE, 8);
	apply_type(0x133c300, "RTTIBase[1]");
	set_name(0x133c300, "MultiBlendedMeshInstance::sBases");
	del_items(0x133c308, DELIT_SIMPLE, 112);
	apply_type(0x133c308, "RTTIAttr[4]");
	set_name(0x133c308, "MultiBlendedMeshInstance::sAttrs");
	del_items(0x133c378, DELIT_SIMPLE, 36);
	apply_type(0x133c378, "RTTIMessageHandler[3]");
	set_name(0x133c378, "MultiBlendedMeshInstance::sMessageHandlers");

	// MultiBlendedMeshResource
	set_name(0x133badc, "RTTI_MultiBlendedMeshResource");
	apply_type(0x133badc, "RTTICompound");
	del_items(0x133c2b4, DELIT_SIMPLE, 8);
	apply_type(0x133c2b4, "RTTIBase[1]");
	set_name(0x133c2b4, "MultiBlendedMeshResource::sBases");
	del_items(0x133c2bc, DELIT_SIMPLE, 56);
	apply_type(0x133c2bc, "RTTIAttr[2]");
	set_name(0x133c2bc, "MultiBlendedMeshResource::sAttrs");
	del_items(0x133c2f4, DELIT_SIMPLE, 12);
	apply_type(0x133c2f4, "RTTIMessageHandler[1]");
	set_name(0x133c2f4, "MultiBlendedMeshResource::sMessageHandlers");

	// MultiMeshResource
	set_name(0x133b6d0, "RTTI_MultiMeshResource");
	apply_type(0x133b6d0, "RTTICompound");
	del_items(0x133bd14, DELIT_SIMPLE, 8);
	apply_type(0x133bd14, "RTTIBase[1]");
	set_name(0x133bd14, "MultiMeshResource::sBases");
	del_items(0x133bd1c, DELIT_SIMPLE, 56);
	apply_type(0x133bd1c, "RTTIAttr[2]");
	set_name(0x133bd1c, "MultiMeshResource::sAttrs");

	// MultiMeshResourcePart
	set_name(0x133b67c, "RTTI_MultiMeshResourcePart");
	apply_type(0x133b67c, "RTTICompound");
	del_items(0x133bcdc, DELIT_SIMPLE, 56);
	apply_type(0x133bcdc, "RTTIAttr[2]");
	set_name(0x133bcdc, "MultiMeshResourcePart::sAttrs");

	// MusicPresetEventInstance
	set_name(0x1397560, "RTTI_MusicPresetEventInstance");
	apply_type(0x1397560, "RTTICompound");
	del_items(0x13994d8, DELIT_SIMPLE, 8);
	apply_type(0x13994d8, "RTTIBase[1]");
	set_name(0x13994d8, "MusicPresetEventInstance::sBases");

	// MusicPresetEventResource
	set_name(0x139750c, "RTTI_MusicPresetEventResource");
	apply_type(0x139750c, "RTTICompound");
	del_items(0x1399498, DELIT_SIMPLE, 8);
	apply_type(0x1399498, "RTTIBase[1]");
	set_name(0x1399498, "MusicPresetEventResource::sBases");
	del_items(0x13994a0, DELIT_SIMPLE, 56);
	apply_type(0x13994a0, "RTTIAttr[2]");
	set_name(0x13994a0, "MusicPresetEventResource::sAttrs");

	// MusicResource
	set_name(0x1359bd0, "RTTI_MusicResource");
	apply_type(0x1359bd0, "RTTICompound");
	del_items(0x135a4e8, DELIT_SIMPLE, 8);
	apply_type(0x135a4e8, "RTTIBase[1]");
	set_name(0x135a4e8, "MusicResource::sBases");
	del_items(0x135a4f0, DELIT_SIMPLE, 56);
	apply_type(0x135a4f0, "RTTIAttr[2]");
	set_name(0x135a4f0, "MusicResource::sAttrs");
	del_items(0x135a528, DELIT_SIMPLE, 36);
	apply_type(0x135a528, "RTTIMessageHandler[3]");
	set_name(0x135a528, "MusicResource::sMessageHandlers");

	// MusicSystem
	set_name(0x135a058, "RTTI_MusicSystem");
	apply_type(0x135a058, "RTTICompound");
	del_items(0x135a54c, DELIT_SIMPLE, 8);
	apply_type(0x135a54c, "RTTIBase[1]");
	set_name(0x135a54c, "MusicSystem::sBases");
	del_items(0x135a554, DELIT_SIMPLE, 144);
	apply_type(0x135a554, "RTTIFunction[6]");
	set_name(0x135a554, "MusicSystem::sFunctions");

	// NOSREEInteractiveEntityScriptEnable
	set_name(0x13a7e14, "RTTI_NOSREEInteractiveEntityScriptEnable");
	apply_type(0x13a7e14, "RTTICompound");
	del_items(0x13a8bc0, DELIT_SIMPLE, 8);
	apply_type(0x13a8bc0, "RTTIBase[1]");
	set_name(0x13a8bc0, "NOSREEInteractiveEntityScriptEnable::sBases");

	// NOSREEMountableEntityScriptMount
	set_name(0x13a7e68, "RTTI_NOSREEMountableEntityScriptMount");
	apply_type(0x13a7e68, "RTTICompound");
	del_items(0x13a8bc8, DELIT_SIMPLE, 8);
	apply_type(0x13a8bc8, "RTTIBase[1]");
	set_name(0x13a8bc8, "NOSREEMountableEntityScriptMount::sBases");

	// NOSREESwitchScriptSwitchOn
	set_name(0x13a7ebc, "RTTI_NOSREESwitchScriptSwitchOn");
	apply_type(0x13a7ebc, "RTTICompound");
	del_items(0x13a8bd0, DELIT_SIMPLE, 8);
	apply_type(0x13a8bd0, "RTTIBase[1]");
	set_name(0x13a8bd0, "NOSREESwitchScriptSwitchOn::sBases");

	// Net
	set_name(0x133fd78, "RTTI_Net");
	apply_type(0x133fd78, "RTTICompound");
	del_items(0x134062c, DELIT_SIMPLE, 8);
	apply_type(0x134062c, "RTTIBase[1]");
	set_name(0x134062c, "Net::sBases");

	// NetATAC
	set_name(0x13a7b20, "RTTI_NetATAC");
	apply_type(0x13a7b20, "RTTICompound");
	del_items(0x13a899c, DELIT_SIMPLE, 8);
	apply_type(0x13a899c, "RTTIBase[1]");
	set_name(0x13a899c, "NetATAC::sBases");

	// NetAirSupportGrenade
	set_name(0x13a921c, "RTTI_NetAirSupportGrenade");
	apply_type(0x13a921c, "RTTICompound");
	del_items(0x13aa05c, DELIT_SIMPLE, 8);
	apply_type(0x13aa05c, "RTTIBase[1]");
	set_name(0x13aa05c, "NetAirSupportGrenade::sBases");

	// NetAirVehicle
	set_name(0x13a7b74, "RTTI_NetAirVehicle");
	apply_type(0x13a7b74, "RTTICompound");
	del_items(0x13a896c, DELIT_SIMPLE, 8);
	apply_type(0x13a896c, "RTTIBase[1]");
	set_name(0x13a896c, "NetAirVehicle::sBases");

	// NetAttachableUseLocation
	set_name(0x13a7bc8, "RTTI_NetAttachableUseLocation");
	apply_type(0x13a7bc8, "RTTICompound");
	del_items(0x13a8a30, DELIT_SIMPLE, 8);
	apply_type(0x13a8a30, "RTTIBase[1]");
	set_name(0x13a8a30, "NetAttachableUseLocation::sBases");

	// NetBuddyInvitationList
	set_name(0x133fdcc, "RTTI_NetBuddyInvitationList");
	apply_type(0x133fdcc, "RTTICompound");
	del_items(0x13405c4, DELIT_SIMPLE, 8);
	apply_type(0x13405c4, "RTTIBase[1]");
	set_name(0x13405c4, "NetBuddyInvitationList::sBases");

	// NetBuddyList
	set_name(0x133fe20, "RTTI_NetBuddyList");
	apply_type(0x133fe20, "RTTICompound");
	del_items(0x134061c, DELIT_SIMPLE, 8);
	apply_type(0x134061c, "RTTIBase[1]");
	set_name(0x134061c, "NetBuddyList::sBases");

	// NetBuddyListNp
	set_name(0x1340984, "RTTI_NetBuddyListNp");
	apply_type(0x1340984, "RTTICompound");
	del_items(0x1340a74, DELIT_SIMPLE, 8);
	apply_type(0x1340a74, "RTTIBase[1]");
	set_name(0x1340a74, "NetBuddyListNp::sBases");

	// NetCaptureAndHoldArea
	set_name(0x13a7c1c, "RTTI_NetCaptureAndHoldArea");
	apply_type(0x13a7c1c, "RTTICompound");
	del_items(0x13a8a38, DELIT_SIMPLE, 8);
	apply_type(0x13a8a38, "RTTIBase[1]");
	set_name(0x13a8a38, "NetCaptureAndHoldArea::sBases");

	// NetClanManager
	set_name(0x13a9a68, "RTTI_NetClanManager");
	apply_type(0x13a9a68, "RTTICompound");
	del_items(0x13aac28, DELIT_SIMPLE, 8);
	apply_type(0x13aac28, "RTTIBase[1]");
	set_name(0x13aac28, "NetClanManager::sBases");
	del_items(0x13aac30, DELIT_SIMPLE, 72);
	apply_type(0x13aac30, "RTTIFunction[3]");
	set_name(0x13aac30, "NetClanManager::sFunctions");

	// NetClanMemberList
	set_name(0x133fe74, "RTTI_NetClanMemberList");
	apply_type(0x133fe74, "RTTICompound");
	del_items(0x1340624, DELIT_SIMPLE, 8);
	apply_type(0x1340624, "RTTIBase[1]");
	set_name(0x1340624, "NetClanMemberList::sBases");

	// NetControlledEntity
	set_name(0x13a7c70, "RTTI_NetControlledEntity");
	apply_type(0x13a7c70, "RTTICompound");
	del_items(0x13a87d8, DELIT_SIMPLE, 8);
	apply_type(0x13a87d8, "RTTIBase[1]");
	set_name(0x13a87d8, "NetControlledEntity::sBases");

	// NetControlledVehicle
	set_name(0x13a7cc4, "RTTI_NetControlledVehicle");
	apply_type(0x13a7cc4, "RTTICompound");
	del_items(0x13a88ec, DELIT_SIMPLE, 8);
	apply_type(0x13a88ec, "RTTIBase[1]");
	set_name(0x13a88ec, "NetControlledVehicle::sBases");

	// NetCritter
	set_name(0x13a7d18, "RTTI_NetCritter");
	apply_type(0x13a7d18, "RTTICompound");
	del_items(0x13a8b08, DELIT_SIMPLE, 8);
	apply_type(0x13a8b08, "RTTIBase[1]");
	set_name(0x13a8b08, "NetCritter::sBases");

	// NetDoor
	set_name(0x13a7d6c, "RTTI_NetDoor");
	apply_type(0x13a7d6c, "RTTICompound");
	del_items(0x13a8b74, DELIT_SIMPLE, 8);
	apply_type(0x13a8b74, "RTTIBase[1]");
	set_name(0x13a8b74, "NetDoor::sBases");

	// NetEMPBlast
	set_name(0x13a7f10, "RTTI_NetEMPBlast");
	apply_type(0x13a7f10, "RTTICompound");
	del_items(0x13a8c28, DELIT_SIMPLE, 8);
	apply_type(0x13a8c28, "RTTIBase[1]");
	set_name(0x13a8c28, "NetEMPBlast::sBases");

	// NetEffectEntity
	set_name(0x13a7dc0, "RTTI_NetEffectEntity");
	apply_type(0x13a7dc0, "RTTICompound");
	del_items(0x13a8bb8, DELIT_SIMPLE, 8);
	apply_type(0x13a8bb8, "RTTIBase[1]");
	set_name(0x13a8bb8, "NetEffectEntity::sBases");

	// NetElectricityGrenade
	set_name(0x13b87e0, "RTTI_NetElectricityGrenade");
	apply_type(0x13b87e0, "RTTICompound");
	del_items(0x13b9dbc, DELIT_SIMPLE, 8);
	apply_type(0x13b9dbc, "RTTIBase[1]");
	set_name(0x13b9dbc, "NetElectricityGrenade::sBases");

	// NetEntitlements
	set_name(0x13a9abc, "RTTI_NetEntitlements");
	apply_type(0x13a9abc, "RTTICompound");
	del_items(0x13aabf0, DELIT_SIMPLE, 8);
	apply_type(0x13aabf0, "RTTIBase[1]");
	set_name(0x13aabf0, "NetEntitlements::sBases");
	del_items(0x13aabf8, DELIT_SIMPLE, 48);
	apply_type(0x13aabf8, "RTTIFunction[2]");
	set_name(0x13aabf8, "NetEntitlements::sFunctions");

	// NetEntity
	set_name(0x135e58c, "RTTI_NetEntity");
	apply_type(0x135e58c, "RTTICompound");
	del_items(0x13601b8, DELIT_SIMPLE, 8);
	apply_type(0x13601b8, "RTTIBase[1]");
	set_name(0x13601b8, "NetEntity::sBases");

	// NetExoSkeleton
	set_name(0x13a11cc, "RTTI_NetExoSkeleton");
	apply_type(0x13a11cc, "RTTICompound");
	del_items(0x13a2d80, DELIT_SIMPLE, 8);
	apply_type(0x13a2d80, "RTTIBase[1]");
	set_name(0x13a2d80, "NetExoSkeleton::sBases");

	// NetExplosion
	set_name(0x13a8394, "RTTI_NetExplosion");
	apply_type(0x13a8394, "RTTICompound");
	del_items(0x13a8c80, DELIT_SIMPLE, 8);
	apply_type(0x13a8c80, "RTTIBase[1]");
	set_name(0x13a8c80, "NetExplosion::sBases");

	// NetExplosiveLocation
	set_name(0x13a83e8, "RTTI_NetExplosiveLocation");
	apply_type(0x13a83e8, "RTTICompound");
	del_items(0x13a8d14, DELIT_SIMPLE, 8);
	apply_type(0x13a8d14, "RTTIBase[1]");
	set_name(0x13a8d14, "NetExplosiveLocation::sBases");

	// NetGame
	set_name(0x133ff70, "RTTI_NetGame");
	apply_type(0x133ff70, "RTTICompound");
	del_items(0x134063c, DELIT_SIMPLE, 8);
	apply_type(0x134063c, "RTTIBase[1]");
	set_name(0x134063c, "NetGame::sBases");

	// NetGameBaseImp
	set_name(0x13407d4, "RTTI_NetGameBaseImp");
	apply_type(0x13407d4, "RTTICompound");
	del_items(0x1340864, DELIT_SIMPLE, 8);
	apply_type(0x1340864, "RTTIBase[1]");
	set_name(0x1340864, "NetGameBaseImp::sBases");

	// NetGameDetails
	set_name(0x13a843c, "RTTI_NetGameDetails");
	apply_type(0x13a843c, "RTTICompound");
	del_items(0x13a8f64, DELIT_SIMPLE, 8);
	apply_type(0x13a8f64, "RTTIBase[1]");
	set_name(0x13a8f64, "NetGameDetails::sBases");

	// NetGameDetailsProvider
	set_name(0x1340018, "RTTI_NetGameDetailsProvider");
	apply_type(0x1340018, "RTTICompound");
	del_items(0x1340694, DELIT_SIMPLE, 8);
	apply_type(0x1340694, "RTTIBase[1]");
	set_name(0x1340694, "NetGameDetailsProvider::sBases");

	// NetGameList
	set_name(0x133ffc4, "RTTI_NetGameList");
	apply_type(0x133ffc4, "RTTICompound");
	del_items(0x1340654, DELIT_SIMPLE, 8);
	apply_type(0x1340654, "RTTIBase[1]");
	set_name(0x1340654, "NetGameList::sBases");

	// NetHumanoid
	set_name(0x13a8490, "RTTI_NetHumanoid");
	apply_type(0x13a8490, "RTTICompound");
	del_items(0x13a8f5c, DELIT_SIMPLE, 8);
	apply_type(0x13a8f5c, "RTTIBase[1]");
	set_name(0x13a8f5c, "NetHumanoid::sBases");

	// NetIgnoreList
	set_name(0x134006c, "RTTI_NetIgnoreList");
	apply_type(0x134006c, "RTTICompound");
	del_items(0x134065c, DELIT_SIMPLE, 8);
	apply_type(0x134065c, "RTTIBase[1]");
	set_name(0x134065c, "NetIgnoreList::sBases");

	// NetIgnoreListNp
	set_name(0x13409d8, "RTTI_NetIgnoreListNp");
	apply_type(0x13409d8, "RTTICompound");
	del_items(0x1340a7c, DELIT_SIMPLE, 8);
	apply_type(0x1340a7c, "RTTIBase[1]");
	set_name(0x1340a7c, "NetIgnoreListNp::sBases");

	// NetInstigator
	set_name(0x1363578, "RTTI_NetInstigator");
	apply_type(0x1363578, "RTTICompound");
	del_items(0x1363a38, DELIT_SIMPLE, 8);
	apply_type(0x1363a38, "RTTIBase[1]");
	set_name(0x1363a38, "NetInstigator::sBases");

	// NetInteractiveEntity
	set_name(0x13a84e4, "RTTI_NetInteractiveEntity");
	apply_type(0x13a84e4, "RTTICompound");
	del_items(0x13a886c, DELIT_SIMPLE, 8);
	apply_type(0x13a886c, "RTTIBase[1]");
	set_name(0x13a886c, "NetInteractiveEntity::sBases");

	// NetInterface
	set_name(0x13400c0, "RTTI_NetInterface");
	apply_type(0x13400c0, "RTTICompound");
	del_items(0x13405b4, DELIT_SIMPLE, 8);
	apply_type(0x13405b4, "RTTIBase[1]");
	set_name(0x13405b4, "NetInterface::sBases");

	// NetLadder
	set_name(0x13a8538, "RTTI_NetLadder");
	apply_type(0x13a8538, "RTTICompound");
	del_items(0x13a8d80, DELIT_SIMPLE, 8);
	apply_type(0x13a8d80, "RTTIBase[1]");
	set_name(0x13a8d80, "NetLadder::sBases");

	// NetLandVehicle
	set_name(0x13a858c, "RTTI_NetLandVehicle");
	apply_type(0x13a858c, "RTTICompound");
	del_items(0x13a8db0, DELIT_SIMPLE, 8);
	apply_type(0x13a8db0, "RTTIBase[1]");
	set_name(0x13a8db0, "NetLandVehicle::sBases");

	// NetLeanAndPeekArea
	set_name(0x13a8f7c, "RTTI_NetLeanAndPeekArea");
	apply_type(0x13a8f7c, "RTTICompound");
	del_items(0x13a9d00, DELIT_SIMPLE, 8);
	apply_type(0x13a9d00, "RTTIBase[1]");
	set_name(0x13a9d00, "NetLeanAndPeekArea::sBases");

	// NetLift
	set_name(0x13a8fd0, "RTTI_NetLift");
	apply_type(0x13a8fd0, "RTTICompound");
	del_items(0x13a9d94, DELIT_SIMPLE, 8);
	apply_type(0x13a9d94, "RTTIBase[1]");
	set_name(0x13a9d94, "NetLift::sBases");

	// NetLobby
	set_name(0x1340114, "RTTI_NetLobby");
	apply_type(0x1340114, "RTTICompound");
	del_items(0x134066c, DELIT_SIMPLE, 8);
	apply_type(0x134066c, "RTTIBase[1]");
	set_name(0x134066c, "NetLobby::sBases");

	// NetLobbyList
	set_name(0x1340168, "RTTI_NetLobbyList");
	apply_type(0x1340168, "RTTICompound");
	del_items(0x1340674, DELIT_SIMPLE, 8);
	apply_type(0x1340674, "RTTIBase[1]");
	set_name(0x1340674, "NetLobbyList::sBases");

	// NetLocationLagQuality
	set_name(0x13a985c, "RTTI_NetLocationLagQuality");
	apply_type(0x13a985c, "RTTICompound");
	del_items(0x13aabd0, DELIT_SIMPLE, 8);
	apply_type(0x13aabd0, "RTTIBase[1]");
	set_name(0x13aabd0, "NetLocationLagQuality::sBases");
	del_items(0x13aabd8, DELIT_SIMPLE, 24);
	apply_type(0x13aabd8, "RTTIFunction[1]");
	set_name(0x13aabd8, "NetLocationLagQuality::sFunctions");

	// NetMailClanInvite
	set_name(0x13a99c0, "RTTI_NetMailClanInvite");
	apply_type(0x13a99c0, "RTTICompound");
	del_items(0x13aad70, DELIT_SIMPLE, 8);
	apply_type(0x13aad70, "RTTIBase[1]");
	set_name(0x13aad70, "NetMailClanInvite::sBases");

	// NetMailInvite
	set_name(0x13a996c, "RTTI_NetMailInvite");
	apply_type(0x13a996c, "RTTICompound");
	del_items(0x13aab98, DELIT_SIMPLE, 8);
	apply_type(0x13aab98, "RTTIBase[1]");
	set_name(0x13aab98, "NetMailInvite::sBases");
	del_items(0x13aaba0, DELIT_SIMPLE, 48);
	apply_type(0x13aaba0, "RTTIFunction[2]");
	set_name(0x13aaba0, "NetMailInvite::sFunctions");

	// NetMailPartyInvite
	set_name(0x13a9a14, "RTTI_NetMailPartyInvite");
	apply_type(0x13a9a14, "RTTICompound");
	del_items(0x13aad68, DELIT_SIMPLE, 8);
	apply_type(0x13aad68, "RTTIBase[1]");
	set_name(0x13aad68, "NetMailPartyInvite::sBases");

	// NetMenuLogin
	set_name(0x13ba704, "RTTI_NetMenuLogin");
	apply_type(0x13ba704, "RTTICompound");
	del_items(0x13bc00c, DELIT_SIMPLE, 8);
	apply_type(0x13bc00c, "RTTIBase[1]");
	set_name(0x13bc00c, "NetMenuLogin::sBases");
	del_items(0x13bc014, DELIT_SIMPLE, 120);
	apply_type(0x13bc014, "RTTIFunction[5]");
	set_name(0x13bc014, "NetMenuLogin::sFunctions");

	// NetMine
	set_name(0x13a9024, "RTTI_NetMine");
	apply_type(0x13a9024, "RTTICompound");
	del_items(0x13a9dd8, DELIT_SIMPLE, 8);
	apply_type(0x13a9dd8, "RTTIBase[1]");
	set_name(0x13a9dd8, "NetMine::sBases");

	// NetMissionManager
	set_name(0x13a98b0, "RTTI_NetMissionManager");
	apply_type(0x13a98b0, "RTTICompound");
	del_items(0x13aad04, DELIT_SIMPLE, 8);
	apply_type(0x13aad04, "RTTIBase[1]");
	set_name(0x13aad04, "NetMissionManager::sBases");

	// NetMountableEntity
	set_name(0x13a9078, "RTTI_NetMountableEntity");
	apply_type(0x13a9078, "RTTICompound");
	del_items(0x13a9e08, DELIT_SIMPLE, 8);
	apply_type(0x13a9e08, "RTTIBase[1]");
	set_name(0x13a9e08, "NetMountableEntity::sBases");

	// NetMountedGun
	set_name(0x13a90cc, "RTTI_NetMountedGun");
	apply_type(0x13a90cc, "RTTICompound");
	del_items(0x13a9e88, DELIT_SIMPLE, 8);
	apply_type(0x13a9e88, "RTTIBase[1]");
	set_name(0x13a9e88, "NetMountedGun::sBases");

	// NetNpManager
	set_name(0x13401bc, "RTTI_NetNpManager");
	apply_type(0x13401bc, "RTTICompound");
	del_items(0x134068c, DELIT_SIMPLE, 8);
	apply_type(0x134068c, "RTTIBase[1]");
	set_name(0x134068c, "NetNpManager::sBases");

	// NetOwnershipRequiredEntityEvent
	set_name(0x135e5e4, "RTTI_NetOwnershipRequiredEntityEvent");
	apply_type(0x135e5e4, "RTTICompound");
	del_items(0x13601c0, DELIT_SIMPLE, 16);
	apply_type(0x13601c0, "RTTIBase[2]");
	set_name(0x13601c0, "NetOwnershipRequiredEntityEvent::sBases");

	// NetParty
	set_name(0x1340518, "RTTI_NetParty");
	apply_type(0x1340518, "RTTICompound");
	del_items(0x1340664, DELIT_SIMPLE, 8);
	apply_type(0x1340664, "RTTIBase[1]");
	set_name(0x1340664, "NetParty::sBases");

	// NetPartyMember
	set_name(0x13a97b4, "RTTI_NetPartyMember");
	apply_type(0x13a97b4, "RTTICompound");
	del_items(0x13aa944, DELIT_SIMPLE, 8);
	apply_type(0x13aa944, "RTTIBase[1]");
	set_name(0x13aa944, "NetPartyMember::sBases");

	// NetPickUp
	set_name(0x13a9120, "RTTI_NetPickUp");
	apply_type(0x13a9120, "RTTICompound");
	del_items(0x13a9ef4, DELIT_SIMPLE, 8);
	apply_type(0x13a9ef4, "RTTIBase[1]");
	set_name(0x13a9ef4, "NetPickUp::sBases");

	// NetPlayAnimationObject
	set_name(0x13a9174, "RTTI_NetPlayAnimationObject");
	apply_type(0x13a9174, "RTTICompound");
	del_items(0x13a9f38, DELIT_SIMPLE, 8);
	apply_type(0x13a9f38, "RTTIBase[1]");
	set_name(0x13a9f38, "NetPlayAnimationObject::sBases");

	// NetPlayer
	set_name(0x1340210, "RTTI_NetPlayer");
	apply_type(0x1340210, "RTTICompound");
	del_items(0x13405cc, DELIT_SIMPLE, 8);
	apply_type(0x13405cc, "RTTIBase[1]");
	set_name(0x13405cc, "NetPlayer::sBases");
	del_items(0x13405d4, DELIT_SIMPLE, 72);
	apply_type(0x13405d4, "RTTIFunction[3]");
	set_name(0x13405d4, "NetPlayer::sFunctions");

	// NetPlayerList
	set_name(0x1340264, "RTTI_NetPlayerList");
	apply_type(0x1340264, "RTTICompound");
	del_items(0x13405bc, DELIT_SIMPLE, 8);
	apply_type(0x13405bc, "RTTIBase[1]");
	set_name(0x13405bc, "NetPlayerList::sBases");

	// NetPlayerParty
	set_name(0x13a9708, "RTTI_NetPlayerParty");
	apply_type(0x13a9708, "RTTICompound");
	del_items(0x13aa574, DELIT_SIMPLE, 8);
	apply_type(0x13aa574, "RTTIBase[1]");
	set_name(0x13aa574, "NetPlayerParty::sBases");
	del_items(0x13aa57c, DELIT_SIMPLE, 432);
	apply_type(0x13aa57c, "RTTIFunction[18]");
	set_name(0x13aa57c, "NetPlayerParty::sFunctions");

	// NetPortableSpawnGrenade
	set_name(0x13a91c8, "RTTI_NetPortableSpawnGrenade");
	apply_type(0x13a91c8, "RTTICompound");
	del_items(0x13aa018, DELIT_SIMPLE, 8);
	apply_type(0x13aa018, "RTTIBase[1]");
	set_name(0x13aa018, "NetPortableSpawnGrenade::sBases");

	// NetPortableTurret
	set_name(0x13a9270, "RTTI_NetPortableTurret");
	apply_type(0x13a9270, "RTTICompound");
	del_items(0x13aa148, DELIT_SIMPLE, 8);
	apply_type(0x13aa148, "RTTIBase[1]");
	set_name(0x13aa148, "NetPortableTurret::sBases");

	// NetReplicatedObject
	set_name(0x13402b8, "RTTI_NetReplicatedObject");
	apply_type(0x13402b8, "RTTICompound");
	del_items(0x134069c, DELIT_SIMPLE, 8);
	apply_type(0x134069c, "RTTIBase[1]");
	set_name(0x134069c, "NetReplicatedObject::sBases");

	// NetReplicatedPlayerParty
	set_name(0x13a9760, "RTTI_NetReplicatedPlayerParty");
	apply_type(0x13a9760, "RTTICompound");
	del_items(0x13aaa3c, DELIT_SIMPLE, 8);
	apply_type(0x13aaa3c, "RTTIBase[1]");
	set_name(0x13aaa3c, "NetReplicatedPlayerParty::sBases");

	// NetRequest
	set_name(0x1340318, "RTTI_NetRequest");
	apply_type(0x1340318, "RTTICompound");
	del_items(0x134064c, DELIT_SIMPLE, 8);
	apply_type(0x134064c, "RTTIBase[1]");
	set_name(0x134064c, "NetRequest::sBases");

	// NetRequestGameID
	set_name(0x134036c, "RTTI_NetRequestGameID");
	apply_type(0x134036c, "RTTICompound");
	del_items(0x13406b8, DELIT_SIMPLE, 8);
	apply_type(0x13406b8, "RTTIBase[1]");
	set_name(0x13406b8, "NetRequestGameID::sBases");

	// NetRespawnEntity
	set_name(0x13a92c4, "RTTI_NetRespawnEntity");
	apply_type(0x13a92c4, "RTTICompound");
	del_items(0x13aa1b4, DELIT_SIMPLE, 8);
	apply_type(0x13aa1b4, "RTTIBase[1]");
	set_name(0x13aa1b4, "NetRespawnEntity::sBases");

	// NetSearchAndRetrieveObject
	set_name(0x13a9318, "RTTI_NetSearchAndRetrieveObject");
	apply_type(0x13a9318, "RTTICompound");
	del_items(0x13aa234, DELIT_SIMPLE, 8);
	apply_type(0x13aa234, "RTTIBase[1]");
	set_name(0x13aa234, "NetSearchAndRetrieveObject::sBases");

	// NetSemaphore
	set_name(0x13403c0, "RTTI_NetSemaphore");
	apply_type(0x13403c0, "RTTICompound");
	del_items(0x13406c0, DELIT_SIMPLE, 8);
	apply_type(0x13406c0, "RTTIBase[1]");
	set_name(0x13406c0, "NetSemaphore::sBases");

	// NetSentryBot
	set_name(0x13a936c, "RTTI_NetSentryBot");
	apply_type(0x13a936c, "RTTICompound");
	del_items(0x13aa264, DELIT_SIMPLE, 8);
	apply_type(0x13aa264, "RTTIBase[1]");
	set_name(0x13aa264, "NetSentryBot::sBases");

	// NetSequence
	set_name(0x13a93c0, "RTTI_NetSequence");
	apply_type(0x13a93c0, "RTTICompound");
	del_items(0x13aa30c, DELIT_SIMPLE, 8);
	apply_type(0x13aa30c, "RTTIBase[1]");
	set_name(0x13aa30c, "NetSequence::sBases");

	// NetSignalGrenade
	set_name(0x13a9414, "RTTI_NetSignalGrenade");
	apply_type(0x13a9414, "RTTICompound");
	del_items(0x13a9fd4, DELIT_SIMPLE, 8);
	apply_type(0x13a9fd4, "RTTIBase[1]");
	set_name(0x13a9fd4, "NetSignalGrenade::sBases");

	// NetSoldier
	set_name(0x13a9468, "RTTI_NetSoldier");
	apply_type(0x13a9468, "RTTICompound");
	del_items(0x13aa378, DELIT_SIMPLE, 8);
	apply_type(0x13aa378, "RTTIBase[1]");
	set_name(0x13aa378, "NetSoldier::sBases");

	// NetSpawnArea
	set_name(0x13a94bc, "RTTI_NetSpawnArea");
	apply_type(0x13a94bc, "RTTICompound");
	del_items(0x13aa380, DELIT_SIMPLE, 8);
	apply_type(0x13aa380, "RTTIBase[1]");
	set_name(0x13aa380, "NetSpawnArea::sBases");

	// NetStateMachine
	set_name(0x134041c, "RTTI_NetStateMachine");
	apply_type(0x134041c, "RTTICompound");
	del_items(0x1340718, DELIT_SIMPLE, 8);
	apply_type(0x1340718, "RTTIBase[1]");
	set_name(0x1340718, "NetStateMachine::sBases");

	// NetStateMachineGame
	set_name(0x13a9808, "RTTI_NetStateMachineGame");
	apply_type(0x13a9808, "RTTICompound");
	del_items(0x13aa72c, DELIT_SIMPLE, 8);
	apply_type(0x13aa72c, "RTTIBase[1]");
	set_name(0x13aa72c, "NetStateMachineGame::sBases");
	del_items(0x13aa734, DELIT_SIMPLE, 528);
	apply_type(0x13aa734, "RTTIFunction[22]");
	set_name(0x13aa734, "NetStateMachineGame::sFunctions");

	// NetSwitch
	set_name(0x13a9510, "RTTI_NetSwitch");
	apply_type(0x13a9510, "RTTICompound");
	del_items(0x13aa464, DELIT_SIMPLE, 8);
	apply_type(0x13aa464, "RTTIBase[1]");
	set_name(0x13aa464, "NetSwitch::sBases");

	// NetThrowable
	set_name(0x13a9564, "RTTI_NetThrowable");
	apply_type(0x13a9564, "RTTICompound");
	del_items(0x13a9f90, DELIT_SIMPLE, 8);
	apply_type(0x13a9f90, "RTTIBase[1]");
	set_name(0x13a9f90, "NetThrowable::sBases");

	// NetTurret
	set_name(0x13a95b8, "RTTI_NetTurret");
	apply_type(0x13a95b8, "RTTICompound");
	del_items(0x13aa0dc, DELIT_SIMPLE, 8);
	apply_type(0x13aa0dc, "RTTIBase[1]");
	set_name(0x13aa0dc, "NetTurret::sBases");

	// NetUniquePickUp
	set_name(0x13a960c, "RTTI_NetUniquePickUp");
	apply_type(0x13a960c, "RTTICompound");
	del_items(0x13aa4d0, DELIT_SIMPLE, 8);
	apply_type(0x13aa4d0, "RTTIBase[1]");
	set_name(0x13aa4d0, "NetUniquePickUp::sBases");

	// NetUniverse
	set_name(0x1340470, "RTTI_NetUniverse");
	apply_type(0x1340470, "RTTICompound");
	del_items(0x1340644, DELIT_SIMPLE, 8);
	apply_type(0x1340644, "RTTIBase[1]");
	set_name(0x1340644, "NetUniverse::sBases");

	// NetUniverseList
	set_name(0x13404c4, "RTTI_NetUniverseList");
	apply_type(0x13404c4, "RTTICompound");
	del_items(0x1340634, DELIT_SIMPLE, 8);
	apply_type(0x1340634, "RTTIBase[1]");
	set_name(0x1340634, "NetUniverseList::sBases");

	// NetValve
	set_name(0x13a9660, "RTTI_NetValve");
	apply_type(0x13a9660, "RTTICompound");
	del_items(0x13aa528, DELIT_SIMPLE, 8);
	apply_type(0x13aa528, "RTTIBase[1]");
	set_name(0x13aa528, "NetValve::sBases");

	// NetWeaponPickUp
	set_name(0x13a96b4, "RTTI_NetWeaponPickUp");
	apply_type(0x13a96b4, "RTTICompound");
	del_items(0x13aa56c, DELIT_SIMPLE, 8);
	apply_type(0x13aa56c, "RTTIBase[1]");
	set_name(0x13aa56c, "NetWeaponPickUp::sBases");

	// NetWindManager
	set_name(0x13a9918, "RTTI_NetWindManager");
	apply_type(0x13a9918, "RTTICompound");
	del_items(0x13aad10, DELIT_SIMPLE, 8);
	apply_type(0x13aad10, "RTTIBase[1]");
	set_name(0x13aad10, "NetWindManager::sBases");

	// NodeSectionMapping
	set_name(0x136c6cc, "RTTI_NodeSectionMapping");
	apply_type(0x136c6cc, "RTTICompound");
	del_items(0x136f748, DELIT_SIMPLE, 84);
	apply_type(0x136f748, "RTTIAttr[3]");
	set_name(0x136f748, "NodeSectionMapping::sAttrs");

	// OSDEventParserResource
	set_name(0x1379298, "RTTI_OSDEventParserResource");
	apply_type(0x1379298, "RTTICompound");
	del_items(0x1379fe8, DELIT_SIMPLE, 8);
	apply_type(0x1379fe8, "RTTIBase[1]");
	set_name(0x1379fe8, "OSDEventParserResource::sBases");
	del_items(0x1379ff0, DELIT_SIMPLE, 364);
	apply_type(0x1379ff0, "RTTIAttr[13]");
	set_name(0x1379ff0, "OSDEventParserResource::sAttrs");

	// OSDEventSettings
	set_name(0x1379224, "RTTI_OSDEventSettings");
	apply_type(0x1379224, "RTTICompound");
	del_items(0x1379f54, DELIT_SIMPLE, 8);
	apply_type(0x1379f54, "RTTIBase[1]");
	set_name(0x1379f54, "OSDEventSettings::sBases");
	del_items(0x1379f5c, DELIT_SIMPLE, 140);
	apply_type(0x1379f5c, "RTTIAttr[5]");
	set_name(0x1379f5c, "OSDEventSettings::sAttrs");

	// ObjectAttributeAnimatorInstance
	set_name(0x13378bc, "RTTI_ObjectAttributeAnimatorInstance");
	apply_type(0x13378bc, "RTTICompound");
	del_items(0x133864c, DELIT_SIMPLE, 8);
	apply_type(0x133864c, "RTTIBase[1]");
	set_name(0x133864c, "ObjectAttributeAnimatorInstance::sBases");
	del_items(0x1338654, DELIT_SIMPLE, 56);
	apply_type(0x1338654, "RTTIAttr[2]");
	set_name(0x1338654, "ObjectAttributeAnimatorInstance::sAttrs");

	// ObjectAttributeAnimatorManager
	set_name(0x1337a2c, "RTTI_ObjectAttributeAnimatorManager");
	apply_type(0x1337a2c, "RTTICompound");
	del_items(0x1338a84, DELIT_SIMPLE, 8);
	apply_type(0x1338a84, "RTTIBase[1]");
	set_name(0x1338a84, "ObjectAttributeAnimatorManager::sBases");
	del_items(0x1338a8c, DELIT_SIMPLE, 12);
	apply_type(0x1338a8c, "RTTIMessageHandler[1]");
	set_name(0x1338a8c, "ObjectAttributeAnimatorManager::sMessageHandlers");

	// ObjectAttributeAnimatorResource
	set_name(0x1337930, "RTTI_ObjectAttributeAnimatorResource");
	apply_type(0x1337930, "RTTICompound");
	del_items(0x1338210, DELIT_SIMPLE, 8);
	apply_type(0x1338210, "RTTIBase[1]");
	set_name(0x1338210, "ObjectAttributeAnimatorResource::sBases");
	del_items(0x1338218, DELIT_SIMPLE, 56);
	apply_type(0x1338218, "RTTIAttr[2]");
	set_name(0x1338218, "ObjectAttributeAnimatorResource::sAttrs");

	// ObjectAttributeAnimatorResourceBase
	set_name(0x1338fb0, "RTTI_ObjectAttributeAnimatorResourceBase");
	apply_type(0x1338fb0, "RTTICompound");
	del_items(0x13395fc, DELIT_SIMPLE, 8);
	apply_type(0x13395fc, "RTTIBase[1]");
	set_name(0x13395fc, "ObjectAttributeAnimatorResourceBase::sBases");
	del_items(0x1339604, DELIT_SIMPLE, 56);
	apply_type(0x1339604, "RTTIAttr[2]");
	set_name(0x1339604, "ObjectAttributeAnimatorResourceBase::sAttrs");
	del_items(0x133963c, DELIT_SIMPLE, 12);
	apply_type(0x133963c, "RTTIMessageHandler[1]");
	set_name(0x133963c, "ObjectAttributeAnimatorResourceBase::sMessageHandlers");

	// ObjectAttributeAnimatorSetInstance
	set_name(0x1337984, "RTTI_ObjectAttributeAnimatorSetInstance");
	apply_type(0x1337984, "RTTICompound");
	del_items(0x1338a04, DELIT_SIMPLE, 8);
	apply_type(0x1338a04, "RTTIBase[1]");
	set_name(0x1338a04, "ObjectAttributeAnimatorSetInstance::sBases");
	del_items(0x1338a0c, DELIT_SIMPLE, 56);
	apply_type(0x1338a0c, "RTTIAttr[2]");
	set_name(0x1338a0c, "ObjectAttributeAnimatorSetInstance::sAttrs");

	// ObjectAttributeAnimatorSetResource
	set_name(0x13379d8, "RTTI_ObjectAttributeAnimatorSetResource");
	apply_type(0x13379d8, "RTTICompound");
	del_items(0x1338a44, DELIT_SIMPLE, 8);
	apply_type(0x1338a44, "RTTIBase[1]");
	set_name(0x1338a44, "ObjectAttributeAnimatorSetResource::sBases");
	del_items(0x1338a4c, DELIT_SIMPLE, 56);
	apply_type(0x1338a4c, "RTTIAttr[2]");
	set_name(0x1338a4c, "ObjectAttributeAnimatorSetResource::sAttrs");

	// ObjectEvent
	set_name(0x133b438, "RTTI_ObjectEvent");
	apply_type(0x133b438, "RTTICompound");

	// ObjectManager
	set_name(0x1339338, "RTTI_ObjectManager");
	apply_type(0x1339338, "RTTICompound");
	del_items(0x13395f4, DELIT_SIMPLE, 8);
	apply_type(0x13395f4, "RTTIBase[1]");
	set_name(0x13395f4, "ObjectManager::sBases");

	// ObjectiveCount
	set_name(0x13a53b8, "RTTI_ObjectiveCount");
	apply_type(0x13a53b8, "RTTICompound");
	del_items(0x13a5460, DELIT_SIMPLE, 56);
	apply_type(0x13a5460, "RTTIAttr[2]");
	set_name(0x13a5460, "ObjectiveCount::sAttrs");

	// ObjectiveSystem
	set_name(0x136cd0c, "RTTI_ObjectiveSystem");
	apply_type(0x136cd0c, "RTTICompound");
	del_items(0x136ddec, DELIT_SIMPLE, 8);
	apply_type(0x136ddec, "RTTIBase[1]");
	set_name(0x136ddec, "ObjectiveSystem::sBases");
	del_items(0x136ddf4, DELIT_SIMPLE, 576);
	apply_type(0x136ddf4, "RTTIFunction[24]");
	set_name(0x136ddf4, "ObjectiveSystem::sFunctions");

	// ObstacleComponent
	set_name(0x135db2c, "RTTI_ObstacleComponent");
	apply_type(0x135db2c, "RTTICompound");
	del_items(0x13608f0, DELIT_SIMPLE, 8);
	apply_type(0x13608f0, "RTTIBase[1]");
	set_name(0x13608f0, "ObstacleComponent::sBases");

	// ObstacleComponentResource
	set_name(0x135db80, "RTTI_ObstacleComponentResource");
	apply_type(0x135db80, "RTTICompound");
	del_items(0x1360890, DELIT_SIMPLE, 8);
	apply_type(0x1360890, "RTTIBase[1]");
	set_name(0x1360890, "ObstacleComponentResource::sBases");
	del_items(0x1360898, DELIT_SIMPLE, 84);
	apply_type(0x1360898, "RTTIAttr[3]");
	set_name(0x1360898, "ObstacleComponentResource::sAttrs");

	// Occluder
	set_name(0x134a304, "RTTI_Occluder");
	apply_type(0x134a304, "RTTICompound");
	del_items(0x134a4a0, DELIT_SIMPLE, 8);
	apply_type(0x134a4a0, "RTTIBase[1]");
	set_name(0x134a4a0, "Occluder::sBases");
	del_items(0x134a4a8, DELIT_SIMPLE, 140);
	apply_type(0x134a4a8, "RTTIAttr[5]");
	set_name(0x134a4a8, "Occluder::sAttrs");

	// OmniLight
	set_name(0x1345590, "RTTI_OmniLight");
	apply_type(0x1345590, "RTTICompound");
	del_items(0x1346f0c, DELIT_SIMPLE, 8);
	apply_type(0x1346f0c, "RTTIBase[1]");
	set_name(0x1346f0c, "OmniLight::sBases");
	del_items(0x1346f14, DELIT_SIMPLE, 140);
	apply_type(0x1346f14, "RTTIAttr[5]");
	set_name(0x1346f14, "OmniLight::sAttrs");
	del_items(0x1346fa0, DELIT_SIMPLE, 12);
	apply_type(0x1346fa0, "RTTIMessageHandler[1]");
	set_name(0x1346fa0, "OmniLight::sMessageHandlers");

	// OmniLightResource
	set_name(0x1345894, "RTTI_OmniLightResource");
	apply_type(0x1345894, "RTTICompound");
	del_items(0x1347394, DELIT_SIMPLE, 8);
	apply_type(0x1347394, "RTTIBase[1]");
	set_name(0x1347394, "OmniLightResource::sBases");
	del_items(0x134739c, DELIT_SIMPLE, 140);
	apply_type(0x134739c, "RTTIAttr[5]");
	set_name(0x134739c, "OmniLightResource::sAttrs");

	// OperationsBlackOutEventInstance
	set_name(0x1396dc4, "RTTI_OperationsBlackOutEventInstance");
	apply_type(0x1396dc4, "RTTICompound");
	del_items(0x1398dbc, DELIT_SIMPLE, 8);
	apply_type(0x1398dbc, "RTTIBase[1]");
	set_name(0x1398dbc, "OperationsBlackOutEventInstance::sBases");

	// OperationsBlackOutEventResource
	set_name(0x1396d70, "RTTI_OperationsBlackOutEventResource");
	apply_type(0x1396d70, "RTTICompound");
	del_items(0x1398d98, DELIT_SIMPLE, 8);
	apply_type(0x1398d98, "RTTIBase[1]");
	set_name(0x1398d98, "OperationsBlackOutEventResource::sBases");
	del_items(0x1398da0, DELIT_SIMPLE, 28);
	apply_type(0x1398da0, "RTTIAttr[1]");
	set_name(0x1398da0, "OperationsBlackOutEventResource::sAttrs");

	// OrientationHelper
	set_name(0x1356448, "RTTI_OrientationHelper");
	apply_type(0x1356448, "RTTICompound");
	del_items(0x1356dc0, DELIT_SIMPLE, 84);
	apply_type(0x1356dc0, "RTTIAttr[3]");
	set_name(0x1356dc0, "OrientationHelper::sAttrs");

	// OrientedBox
	set_name(0x132b024, "RTTI_OrientedBox");
	apply_type(0x132b024, "RTTICompound");
	del_items(0x132b7a4, DELIT_SIMPLE, 56);
	apply_type(0x132b7a4, "RTTIAttr[2]");
	set_name(0x132b7a4, "OrientedBox::sAttrs");

	// PBDBodyResource
	set_name(0x1339d30, "RTTI_PBDBodyResource");
	apply_type(0x1339d30, "RTTICompound");
	del_items(0x133ae38, DELIT_SIMPLE, 8);
	apply_type(0x133ae38, "RTTIBase[1]");
	set_name(0x133ae38, "PBDBodyResource::sBases");
	del_items(0x133ae40, DELIT_SIMPLE, 140);
	apply_type(0x133ae40, "RTTIAttr[5]");
	set_name(0x133ae40, "PBDBodyResource::sAttrs");

	// PBDConstraintDesc
	set_name(0x1339c68, "RTTI_PBDConstraintDesc");
	apply_type(0x1339c68, "RTTICompound");
	del_items(0x133ad58, DELIT_SIMPLE, 168);
	apply_type(0x133ad58, "RTTIAttr[6]");
	set_name(0x133ad58, "PBDConstraintDesc::sAttrs");

	// PBDDeformedSkinnedMesh
	set_name(0x1339dd8, "RTTI_PBDDeformedSkinnedMesh");
	apply_type(0x1339dd8, "RTTICompound");
	del_items(0x133aee8, DELIT_SIMPLE, 8);
	apply_type(0x133aee8, "RTTIBase[1]");
	set_name(0x133aee8, "PBDDeformedSkinnedMesh::sBases");
	del_items(0x133aef0, DELIT_SIMPLE, 112);
	apply_type(0x133aef0, "RTTIAttr[4]");
	set_name(0x133aef0, "PBDDeformedSkinnedMesh::sAttrs");

	// PBDPoseMapper
	set_name(0x1339d84, "RTTI_PBDPoseMapper");
	apply_type(0x1339d84, "RTTICompound");
	del_items(0x133aecc, DELIT_SIMPLE, 28);
	apply_type(0x133aecc, "RTTIAttr[1]");
	set_name(0x133aecc, "PBDPoseMapper::sAttrs");

	// PBDVertexDesc
	set_name(0x1339ccc, "RTTI_PBDVertexDesc");
	apply_type(0x1339ccc, "RTTICompound");
	del_items(0x133ae00, DELIT_SIMPLE, 56);
	apply_type(0x133ae00, "RTTIAttr[2]");
	set_name(0x133ae00, "PBDVertexDesc::sAttrs");

	// PanelTag
	set_name(0x133d120, "RTTI_PanelTag");
	apply_type(0x133d120, "RTTICompound");
	del_items(0x133f2a8, DELIT_SIMPLE, 8);
	apply_type(0x133f2a8, "RTTIBase[1]");
	set_name(0x133f2a8, "PanelTag::sBases");

	// PanelWidget
	set_name(0x133daa4, "RTTI_PanelWidget");
	apply_type(0x133daa4, "RTTICompound");
	del_items(0x133fac8, DELIT_SIMPLE, 8);
	apply_type(0x133fac8, "RTTIBase[1]");
	set_name(0x133fac8, "PanelWidget::sBases");

	// ParTimeLevelInfo
	set_name(0x13a6ae8, "RTTI_ParTimeLevelInfo");
	apply_type(0x13a6ae8, "RTTICompound");
	del_items(0x13a76ec, DELIT_SIMPLE, 8);
	apply_type(0x13a76ec, "RTTIBase[1]");
	set_name(0x13a76ec, "ParTimeLevelInfo::sBases");
	del_items(0x13a76f4, DELIT_SIMPLE, 56);
	apply_type(0x13a76f4, "RTTIAttr[2]");
	set_name(0x13a76f4, "ParTimeLevelInfo::sAttrs");

	// ParTimeNodeInfo
	set_name(0x13a6a10, "RTTI_ParTimeNodeInfo");
	apply_type(0x13a6a10, "RTTICompound");
	del_items(0x13a7618, DELIT_SIMPLE, 8);
	apply_type(0x13a7618, "RTTIBase[1]");
	set_name(0x13a7618, "ParTimeNodeInfo::sBases");
	del_items(0x13a7620, DELIT_SIMPLE, 84);
	apply_type(0x13a7620, "RTTIAttr[3]");
	set_name(0x13a7620, "ParTimeNodeInfo::sAttrs");

	// PartialSkeletonAnimationResource
	set_name(0x13557f0, "RTTI_PartialSkeletonAnimationResource");
	apply_type(0x13557f0, "RTTICompound");
	del_items(0x1357974, DELIT_SIMPLE, 8);
	apply_type(0x1357974, "RTTIBase[1]");
	set_name(0x1357974, "PartialSkeletonAnimationResource::sBases");
	del_items(0x135797c, DELIT_SIMPLE, 140);
	apply_type(0x135797c, "RTTIAttr[5]");
	set_name(0x135797c, "PartialSkeletonAnimationResource::sAttrs");

	// ParticleEmitter
	set_name(0x1340cf0, "RTTI_ParticleEmitter");
	apply_type(0x1340cf0, "RTTICompound");
	del_items(0x1341440, DELIT_SIMPLE, 8);
	apply_type(0x1341440, "RTTIBase[1]");
	set_name(0x1341440, "ParticleEmitter::sBases");
	del_items(0x1341448, DELIT_SIMPLE, 1400);
	apply_type(0x1341448, "RTTIAttr[50]");
	set_name(0x1341448, "ParticleEmitter::sAttrs");
	del_items(0x13419c0, DELIT_SIMPLE, 12);
	apply_type(0x13419c0, "RTTIMessageHandler[1]");
	set_name(0x13419c0, "ParticleEmitter::sMessageHandlers");

	// ParticleEventInstance
	set_name(0x139766c, "RTTI_ParticleEventInstance");
	apply_type(0x139766c, "RTTICompound");
	del_items(0x1399600, DELIT_SIMPLE, 8);
	apply_type(0x1399600, "RTTIBase[1]");
	set_name(0x1399600, "ParticleEventInstance::sBases");

	// ParticleEventResource
	set_name(0x1397618, "RTTI_ParticleEventResource");
	apply_type(0x1397618, "RTTICompound");
	del_items(0x1399518, DELIT_SIMPLE, 8);
	apply_type(0x1399518, "RTTIBase[1]");
	set_name(0x1399518, "ParticleEventResource::sBases");
	del_items(0x1399520, DELIT_SIMPLE, 224);
	apply_type(0x1399520, "RTTIAttr[8]");
	set_name(0x1399520, "ParticleEventResource::sAttrs");

	// ParticleEventVirtualEmitter
	set_name(0x13975c4, "RTTI_ParticleEventVirtualEmitter");
	apply_type(0x13975c4, "RTTICompound");
	del_items(0x13994e0, DELIT_SIMPLE, 56);
	apply_type(0x13994e0, "RTTIAttr[2]");
	set_name(0x13994e0, "ParticleEventVirtualEmitter::sAttrs");

	// ParticleModifierSettings
	set_name(0x13412d4, "RTTI_ParticleModifierSettings");
	apply_type(0x13412d4, "RTTICompound");
	del_items(0x1341a04, DELIT_SIMPLE, 1008);
	apply_type(0x1341a04, "RTTIAttr[36]");
	set_name(0x1341a04, "ParticleModifierSettings::sAttrs");

	// ParticlePropertySettings
	set_name(0x1340f20, "RTTI_ParticlePropertySettings");
	apply_type(0x1340f20, "RTTICompound");
	del_items(0x1341eb8, DELIT_SIMPLE, 1092);
	apply_type(0x1341eb8, "RTTIAttr[39]");
	set_name(0x1341eb8, "ParticlePropertySettings::sAttrs");

	// ParticleShaderVariable
	set_name(0x1340e9c, "RTTI_ParticleShaderVariable");
	apply_type(0x1340e9c, "RTTICompound");
	del_items(0x1341e64, DELIT_SIMPLE, 84);
	apply_type(0x1341e64, "RTTIAttr[3]");
	set_name(0x1341e64, "ParticleShaderVariable::sAttrs");

	// ParticleSysValue
	set_name(0x1341150, "RTTI_ParticleSysValue");
	apply_type(0x1341150, "RTTICompound");
	del_items(0x13419cc, DELIT_SIMPLE, 56);
	apply_type(0x13419cc, "RTTIAttr[2]");
	set_name(0x13419cc, "ParticleSysValue::sAttrs");

	// ParticleSysVar
	set_name(0x13410cc, "RTTI_ParticleSysVar");
	apply_type(0x13410cc, "RTTICompound");
	del_items(0x1341360, DELIT_SIMPLE, 112);
	apply_type(0x1341360, "RTTIAttr[4]");
	set_name(0x1341360, "ParticleSysVar::sAttrs");

	// ParticleSystemInstance
	set_name(0x1340d94, "RTTI_ParticleSystemInstance");
	apply_type(0x1340d94, "RTTICompound");
	del_items(0x1342980, DELIT_SIMPLE, 8);
	apply_type(0x1342980, "RTTIBase[1]");
	set_name(0x1342980, "ParticleSystemInstance::sBases");
	del_items(0x1342988, DELIT_SIMPLE, 140);
	apply_type(0x1342988, "RTTIAttr[5]");
	set_name(0x1342988, "ParticleSystemInstance::sAttrs");
	del_items(0x1342a14, DELIT_SIMPLE, 72);
	apply_type(0x1342a14, "RTTIFunction[3]");
	set_name(0x1342a14, "ParticleSystemInstance::sFunctions");
	del_items(0x1342a5c, DELIT_SIMPLE, 24);
	apply_type(0x1342a5c, "RTTIMessageHandler[2]");
	set_name(0x1342a5c, "ParticleSystemInstance::sMessageHandlers");

	// ParticleSystemInstanceGame
	set_name(0x13ab640, "RTTI_ParticleSystemInstanceGame");
	apply_type(0x13ab640, "RTTICompound");
	del_items(0x13abefc, DELIT_SIMPLE, 8);
	apply_type(0x13abefc, "RTTIBase[1]");
	set_name(0x13abefc, "ParticleSystemInstanceGame::sBases");

	// ParticleSystemManager
	set_name(0x1342b80, "RTTI_ParticleSystemManager");
	apply_type(0x1342b80, "RTTICompound");
	del_items(0x1342bd4, DELIT_SIMPLE, 8);
	apply_type(0x1342bd4, "RTTIBase[1]");
	set_name(0x1342bd4, "ParticleSystemManager::sBases");
	del_items(0x1342bdc, DELIT_SIMPLE, 12);
	apply_type(0x1342bdc, "RTTIMessageHandler[1]");
	set_name(0x1342bdc, "ParticleSystemManager::sMessageHandlers");

	// ParticleSystemResource
	set_name(0x1340fc4, "RTTI_ParticleSystemResource");
	apply_type(0x1340fc4, "RTTICompound");
	del_items(0x13422fc, DELIT_SIMPLE, 8);
	apply_type(0x13422fc, "RTTIBase[1]");
	set_name(0x13422fc, "ParticleSystemResource::sBases");
	del_items(0x1342304, DELIT_SIMPLE, 1624);
	apply_type(0x1342304, "RTTIAttr[58]");
	set_name(0x1342304, "ParticleSystemResource::sAttrs");
	del_items(0x134295c, DELIT_SIMPLE, 24);
	apply_type(0x134295c, "RTTIMessageHandler[2]");
	set_name(0x134295c, "ParticleSystemResource::sMessageHandlers");

	// ParticleSystemSpeedModifierEventInstance
	set_name(0x1397714, "RTTI_ParticleSystemSpeedModifierEventInstance");
	apply_type(0x1397714, "RTTICompound");
	del_items(0x1399648, DELIT_SIMPLE, 8);
	apply_type(0x1399648, "RTTIBase[1]");
	set_name(0x1399648, "ParticleSystemSpeedModifierEventInstance::sBases");

	// ParticleSystemSpeedModifierEventResource
	set_name(0x13976c0, "RTTI_ParticleSystemSpeedModifierEventResource");
	apply_type(0x13976c0, "RTTICompound");
	del_items(0x1399608, DELIT_SIMPLE, 8);
	apply_type(0x1399608, "RTTIBase[1]");
	set_name(0x1399608, "ParticleSystemSpeedModifierEventResource::sBases");
	del_items(0x1399610, DELIT_SIMPLE, 56);
	apply_type(0x1399610, "RTTIAttr[2]");
	set_name(0x1399610, "ParticleSystemSpeedModifierEventResource::sAttrs");

	// ParticleVertexAttribute
	set_name(0x1340e18, "RTTI_ParticleVertexAttribute");
	apply_type(0x1340e18, "RTTICompound");
	del_items(0x1341df4, DELIT_SIMPLE, 112);
	apply_type(0x1341df4, "RTTIAttr[4]");
	set_name(0x1341df4, "ParticleVertexAttribute::sAttrs");

	// PathInstance
	set_name(0x1337264, "RTTI_PathInstance");
	apply_type(0x1337264, "RTTICompound");
	del_items(0x13386cc, DELIT_SIMPLE, 8);
	apply_type(0x13386cc, "RTTIBase[1]");
	set_name(0x13386cc, "PathInstance::sBases");
	del_items(0x13386d4, DELIT_SIMPLE, 112);
	apply_type(0x13386d4, "RTTIAttr[4]");
	set_name(0x13386d4, "PathInstance::sAttrs");

	// PathMover
	set_name(0x1362bc8, "RTTI_PathMover");
	apply_type(0x1362bc8, "RTTICompound");
	del_items(0x136426c, DELIT_SIMPLE, 8);
	apply_type(0x136426c, "RTTIBase[1]");
	set_name(0x136426c, "PathMover::sBases");
	del_items(0x1364274, DELIT_SIMPLE, 384);
	apply_type(0x1364274, "RTTIFunction[16]");
	set_name(0x1364274, "PathMover::sFunctions");

	// PathMoverResource
	set_name(0x1362c1c, "RTTI_PathMoverResource");
	apply_type(0x1362c1c, "RTTICompound");
	del_items(0x13643f4, DELIT_SIMPLE, 8);
	apply_type(0x13643f4, "RTTIBase[1]");
	set_name(0x13643f4, "PathMoverResource::sBases");
	del_items(0x13643fc, DELIT_SIMPLE, 168);
	apply_type(0x13643fc, "RTTIAttr[6]");
	set_name(0x13643fc, "PathMoverResource::sAttrs");

	// PathResource
	set_name(0x133733c, "RTTI_PathResource");
	apply_type(0x133733c, "RTTICompound");
	del_items(0x13387b4, DELIT_SIMPLE, 8);
	apply_type(0x13387b4, "RTTIBase[1]");
	set_name(0x13387b4, "PathResource::sBases");
	del_items(0x13387bc, DELIT_SIMPLE, 56);
	apply_type(0x13387bc, "RTTIAttr[2]");
	set_name(0x13387bc, "PathResource::sAttrs");

	// PausableEventInstance
	set_name(0x13977bc, "RTTI_PausableEventInstance");
	apply_type(0x13977bc, "RTTICompound");
	del_items(0x1398f58, DELIT_SIMPLE, 8);
	apply_type(0x1398f58, "RTTIBase[1]");
	set_name(0x1398f58, "PausableEventInstance::sBases");

	// PausableEventResource
	set_name(0x1397768, "RTTI_PausableEventResource");
	apply_type(0x1397768, "RTTICompound");
	del_items(0x1398f18, DELIT_SIMPLE, 8);
	apply_type(0x1398f18, "RTTIBase[1]");
	set_name(0x1398f18, "PausableEventResource::sBases");
	del_items(0x1398f20, DELIT_SIMPLE, 56);
	apply_type(0x1398f20, "RTTIAttr[2]");
	set_name(0x1398f20, "PausableEventResource::sAttrs");

	// PauseEventInstance
	set_name(0x1397864, "RTTI_PauseEventInstance");
	apply_type(0x1397864, "RTTICompound");
	del_items(0x1399658, DELIT_SIMPLE, 8);
	apply_type(0x1399658, "RTTIBase[1]");
	set_name(0x1399658, "PauseEventInstance::sBases");

	// PauseEventResource
	set_name(0x1397810, "RTTI_PauseEventResource");
	apply_type(0x1397810, "RTTICompound");
	del_items(0x1399650, DELIT_SIMPLE, 8);
	apply_type(0x1399650, "RTTIBase[1]");
	set_name(0x1399650, "PauseEventResource::sBases");

	// PauseUntilBoundEventInstance
	set_name(0x139790c, "RTTI_PauseUntilBoundEventInstance");
	apply_type(0x139790c, "RTTICompound");
	del_items(0x13996a0, DELIT_SIMPLE, 8);
	apply_type(0x13996a0, "RTTIBase[1]");
	set_name(0x13996a0, "PauseUntilBoundEventInstance::sBases");

	// PauseUntilBoundEventResource
	set_name(0x13978b8, "RTTI_PauseUntilBoundEventResource");
	apply_type(0x13978b8, "RTTICompound");
	del_items(0x1399660, DELIT_SIMPLE, 8);
	apply_type(0x1399660, "RTTIBase[1]");
	set_name(0x1399660, "PauseUntilBoundEventResource::sBases");
	del_items(0x1399668, DELIT_SIMPLE, 56);
	apply_type(0x1399668, "RTTIAttr[2]");
	set_name(0x1399668, "PauseUntilBoundEventResource::sAttrs");

	// PegBase
	set_name(0x135c368, "RTTI_PegBase");
	apply_type(0x135c368, "RTTICompound");
	del_items(0x135c7c4, DELIT_SIMPLE, 84);
	apply_type(0x135c7c4, "RTTIAttr[3]");
	set_name(0x135c7c4, "PegBase::sAttrs");

	// PetrusiteEjector
	set_name(0x13b8198, "RTTI_PetrusiteEjector");
	apply_type(0x13b8198, "RTTICompound");
	del_items(0x13b9484, DELIT_SIMPLE, 8);
	apply_type(0x13b9484, "RTTIBase[1]");
	set_name(0x13b9484, "PetrusiteEjector::sBases");

	// PetrusiteEjectorRep
	set_name(0x13b81ec, "RTTI_PetrusiteEjectorRep");
	apply_type(0x13b81ec, "RTTICompound");
	del_items(0x13b9694, DELIT_SIMPLE, 8);
	apply_type(0x13b9694, "RTTIBase[1]");
	set_name(0x13b9694, "PetrusiteEjectorRep::sBases");

	// PetrusiteEjectorResource
	set_name(0x13b8240, "RTTI_PetrusiteEjectorResource");
	apply_type(0x13b8240, "RTTICompound");
	del_items(0x13b9490, DELIT_SIMPLE, 8);
	apply_type(0x13b9490, "RTTIBase[1]");
	set_name(0x13b9490, "PetrusiteEjectorResource::sBases");
	del_items(0x13b9498, DELIT_SIMPLE, 504);
	apply_type(0x13b9498, "RTTIAttr[18]");
	set_name(0x13b9498, "PetrusiteEjectorResource::sAttrs");

	// PhonemeBoneAnimatorResource
	set_name(0x13b68e0, "RTTI_PhonemeBoneAnimatorResource");
	apply_type(0x13b68e0, "RTTICompound");
	del_items(0x13b7410, DELIT_SIMPLE, 8);
	apply_type(0x13b7410, "RTTIBase[1]");
	set_name(0x13b7410, "PhonemeBoneAnimatorResource::sBases");
	del_items(0x13b7418, DELIT_SIMPLE, 84);
	apply_type(0x13b7418, "RTTIAttr[3]");
	set_name(0x13b7418, "PhonemeBoneAnimatorResource::sAttrs");

	// PhonemeBoneChannel
	set_name(0x13b687c, "RTTI_PhonemeBoneChannel");
	apply_type(0x13b687c, "RTTICompound");
	del_items(0x13b7398, DELIT_SIMPLE, 8);
	apply_type(0x13b7398, "RTTIBase[1]");
	set_name(0x13b7398, "PhonemeBoneChannel::sBases");
	del_items(0x13b73a0, DELIT_SIMPLE, 112);
	apply_type(0x13b73a0, "RTTIAttr[4]");
	set_name(0x13b73a0, "PhonemeBoneChannel::sAttrs");

	// PhonemeBoneTarget
	set_name(0x13b67a4, "RTTI_PhonemeBoneTarget");
	apply_type(0x13b67a4, "RTTICompound");
	del_items(0x13b730c, DELIT_SIMPLE, 84);
	apply_type(0x13b730c, "RTTIAttr[3]");
	set_name(0x13b730c, "PhonemeBoneTarget::sAttrs");

	// PhonemeChannel
	set_name(0x135ebb4, "RTTI_PhonemeChannel");
	apply_type(0x135ebb4, "RTTICompound");
	del_items(0x1361f60, DELIT_SIMPLE, 8);
	apply_type(0x1361f60, "RTTIBase[1]");
	set_name(0x1361f60, "PhonemeChannel::sBases");
	del_items(0x1361f68, DELIT_SIMPLE, 112);
	apply_type(0x1361f68, "RTTIAttr[4]");
	set_name(0x1361f68, "PhonemeChannel::sAttrs");

	// PhonemeFloatShaderTarget
	set_name(0x13b6808, "RTTI_PhonemeFloatShaderTarget");
	apply_type(0x13b6808, "RTTICompound");
	del_items(0x13b7360, DELIT_SIMPLE, 56);
	apply_type(0x13b7360, "RTTIAttr[2]");
	set_name(0x13b7360, "PhonemeFloatShaderTarget::sAttrs");

	// PhonemeTarget
	set_name(0x135eb40, "RTTI_PhonemeTarget");
	apply_type(0x135eb40, "RTTICompound");
	del_items(0x1361f0c, DELIT_SIMPLE, 84);
	apply_type(0x1361f0c, "RTTIAttr[3]");
	set_name(0x1361f0c, "PhonemeTarget::sAttrs");

	// PhysicsBallAndSocketConstraintResource
	set_name(0x1344560, "RTTI_PhysicsBallAndSocketConstraintResource");
	apply_type(0x1344560, "RTTICompound");
	del_items(0x13448c4, DELIT_SIMPLE, 8);
	apply_type(0x13448c4, "RTTIBase[1]");
	set_name(0x13448c4, "PhysicsBallAndSocketConstraintResource::sBases");
	del_items(0x13448cc, DELIT_SIMPLE, 56);
	apply_type(0x13448cc, "RTTIAttr[2]");
	set_name(0x13448cc, "PhysicsBallAndSocketConstraintResource::sAttrs");

	// PhysicsBoxPhantom
	set_name(0x1342d88, "RTTI_PhysicsBoxPhantom");
	apply_type(0x1342d88, "RTTICompound");
	del_items(0x1343544, DELIT_SIMPLE, 8);
	apply_type(0x1343544, "RTTIBase[1]");
	set_name(0x1343544, "PhysicsBoxPhantom::sBases");

	// PhysicsCharacterMover
	set_name(0x1344db0, "RTTI_PhysicsCharacterMover");
	apply_type(0x1344db0, "RTTICompound");
	del_items(0x1344e04, DELIT_SIMPLE, 8);
	apply_type(0x1344e04, "RTTIBase[1]");
	set_name(0x1344e04, "PhysicsCharacterMover::sBases");

	// PhysicsCharacterMoverProxy
	set_name(0x1344d58, "RTTI_PhysicsCharacterMoverProxy");
	apply_type(0x1344d58, "RTTICompound");
	del_items(0x1344e14, DELIT_SIMPLE, 8);
	apply_type(0x1344e14, "RTTIBase[1]");
	set_name(0x1344e14, "PhysicsCharacterMoverProxy::sBases");

	// PhysicsCharacterMoverResource
	set_name(0x1343054, "RTTI_PhysicsCharacterMoverResource");
	apply_type(0x1343054, "RTTICompound");
	del_items(0x1343ad8, DELIT_SIMPLE, 8);
	apply_type(0x1343ad8, "RTTIBase[1]");
	set_name(0x1343ad8, "PhysicsCharacterMoverResource::sBases");
	del_items(0x1343ae0, DELIT_SIMPLE, 252);
	apply_type(0x1343ae0, "RTTIAttr[9]");
	set_name(0x1343ae0, "PhysicsCharacterMoverResource::sAttrs");

	// PhysicsCharacterMoverRigidBody
	set_name(0x1344d04, "RTTI_PhysicsCharacterMoverRigidBody");
	apply_type(0x1344d04, "RTTICompound");
	del_items(0x1344e0c, DELIT_SIMPLE, 8);
	apply_type(0x1344e0c, "RTTIBase[1]");
	set_name(0x1344e0c, "PhysicsCharacterMoverRigidBody::sBases");

	// PhysicsCollisionInstance
	set_name(0x1342c8c, "RTTI_PhysicsCollisionInstance");
	apply_type(0x1342c8c, "RTTICompound");
	del_items(0x1343240, DELIT_SIMPLE, 8);
	apply_type(0x1343240, "RTTIBase[1]");
	set_name(0x1343240, "PhysicsCollisionInstance::sBases");
	del_items(0x1343248, DELIT_SIMPLE, 196);
	apply_type(0x1343248, "RTTIAttr[7]");
	set_name(0x1343248, "PhysicsCollisionInstance::sAttrs");
	del_items(0x134330c, DELIT_SIMPLE, 12);
	apply_type(0x134330c, "RTTIMessageHandler[1]");
	set_name(0x134330c, "PhysicsCollisionInstance::sMessageHandlers");

	// PhysicsCollisionResource
	set_name(0x1342f18, "RTTI_PhysicsCollisionResource");
	apply_type(0x1342f18, "RTTICompound");
	del_items(0x134332c, DELIT_SIMPLE, 8);
	apply_type(0x134332c, "RTTIBase[1]");
	set_name(0x134332c, "PhysicsCollisionResource::sBases");
	del_items(0x1343334, DELIT_SIMPLE, 504);
	apply_type(0x1343334, "RTTIAttr[18]");
	set_name(0x1343334, "PhysicsCollisionResource::sAttrs");
	del_items(0x134352c, DELIT_SIMPLE, 24);
	apply_type(0x134352c, "RTTIMessageHandler[2]");
	set_name(0x134352c, "PhysicsCollisionResource::sMessageHandlers");

	// PhysicsConstraintInstance
	set_name(0x13444a8, "RTTI_PhysicsConstraintInstance");
	apply_type(0x13444a8, "RTTICompound");
	del_items(0x1344864, DELIT_SIMPLE, 8);
	apply_type(0x1344864, "RTTIBase[1]");
	set_name(0x1344864, "PhysicsConstraintInstance::sBases");
	del_items(0x134486c, DELIT_SIMPLE, 12);
	apply_type(0x134486c, "RTTIMessageHandler[1]");
	set_name(0x134486c, "PhysicsConstraintInstance::sMessageHandlers");

	// PhysicsConstraintResource
	set_name(0x134450c, "RTTI_PhysicsConstraintResource");
	apply_type(0x134450c, "RTTICompound");
	del_items(0x1344878, DELIT_SIMPLE, 8);
	apply_type(0x1344878, "RTTIBase[1]");
	set_name(0x1344878, "PhysicsConstraintResource::sBases");
	del_items(0x1344880, DELIT_SIMPLE, 56);
	apply_type(0x1344880, "RTTIAttr[2]");
	set_name(0x1344880, "PhysicsConstraintResource::sAttrs");
	del_items(0x13448b8, DELIT_SIMPLE, 12);
	apply_type(0x13448b8, "RTTIMessageHandler[1]");
	set_name(0x13448b8, "PhysicsConstraintResource::sMessageHandlers");

	// PhysicsContactEffectSystemSettings
	set_name(0x13634c8, "RTTI_PhysicsContactEffectSystemSettings");
	apply_type(0x13634c8, "RTTICompound");
	del_items(0x1364a08, DELIT_SIMPLE, 8);
	apply_type(0x1364a08, "RTTIBase[1]");
	set_name(0x1364a08, "PhysicsContactEffectSystemSettings::sBases");
	del_items(0x1364a10, DELIT_SIMPLE, 196);
	apply_type(0x1364a10, "RTTIAttr[7]");
	set_name(0x1364a10, "PhysicsContactEffectSystemSettings::sAttrs");

	// PhysicsDamageImpulseModifier
	set_name(0x1362d7c, "RTTI_PhysicsDamageImpulseModifier");
	apply_type(0x1362d7c, "RTTICompound");
	del_items(0x13644b4, DELIT_SIMPLE, 56);
	apply_type(0x13644b4, "RTTIAttr[2]");
	set_name(0x13644b4, "PhysicsDamageImpulseModifier::sAttrs");

	// PhysicsFixedConstraintResource
	set_name(0x13445b4, "RTTI_PhysicsFixedConstraintResource");
	apply_type(0x13445b4, "RTTICompound");
	del_items(0x1344904, DELIT_SIMPLE, 8);
	apply_type(0x1344904, "RTTIBase[1]");
	set_name(0x1344904, "PhysicsFixedConstraintResource::sBases");

	// PhysicsHingeConstraintResource
	set_name(0x1344758, "RTTI_PhysicsHingeConstraintResource");
	apply_type(0x1344758, "RTTICompound");
	del_items(0x1344c3c, DELIT_SIMPLE, 8);
	apply_type(0x1344c3c, "RTTIBase[1]");
	set_name(0x1344c3c, "PhysicsHingeConstraintResource::sBases");
	del_items(0x1344c44, DELIT_SIMPLE, 84);
	apply_type(0x1344c44, "RTTIAttr[3]");
	set_name(0x1344c44, "PhysicsHingeConstraintResource::sAttrs");

	// PhysicsImpulseEventInstance
	set_name(0x13979b4, "RTTI_PhysicsImpulseEventInstance");
	apply_type(0x13979b4, "RTTICompound");
	del_items(0x1399758, DELIT_SIMPLE, 8);
	apply_type(0x1399758, "RTTIBase[1]");
	set_name(0x1399758, "PhysicsImpulseEventInstance::sBases");

	// PhysicsImpulseEventResource
	set_name(0x1397960, "RTTI_PhysicsImpulseEventResource");
	apply_type(0x1397960, "RTTICompound");
	del_items(0x13996a8, DELIT_SIMPLE, 8);
	apply_type(0x13996a8, "RTTIBase[1]");
	set_name(0x13996a8, "PhysicsImpulseEventResource::sBases");
	del_items(0x13996b0, DELIT_SIMPLE, 168);
	apply_type(0x13996b0, "RTTIAttr[6]");
	set_name(0x13996b0, "PhysicsImpulseEventResource::sAttrs");

	// PhysicsInstance
	set_name(0x1342e40, "RTTI_PhysicsInstance");
	apply_type(0x1342e40, "RTTICompound");
	del_items(0x1343150, DELIT_SIMPLE, 8);
	apply_type(0x1343150, "RTTIBase[1]");
	set_name(0x1343150, "PhysicsInstance::sBases");
	del_items(0x1343158, DELIT_SIMPLE, 112);
	apply_type(0x1343158, "RTTIAttr[4]");
	set_name(0x1343158, "PhysicsInstance::sAttrs");

	// PhysicsLimitedHingeConstraintResource
	set_name(0x1344608, "RTTI_PhysicsLimitedHingeConstraintResource");
	apply_type(0x1344608, "RTTICompound");
	del_items(0x134490c, DELIT_SIMPLE, 8);
	apply_type(0x134490c, "RTTIBase[1]");
	set_name(0x134490c, "PhysicsLimitedHingeConstraintResource::sBases");
	del_items(0x1344914, DELIT_SIMPLE, 196);
	apply_type(0x1344914, "RTTIAttr[7]");
	set_name(0x1344914, "PhysicsLimitedHingeConstraintResource::sAttrs");

	// PhysicsModelMover
	set_name(0x1362c70, "RTTI_PhysicsModelMover");
	apply_type(0x1362c70, "RTTICompound");
	del_items(0x13644a4, DELIT_SIMPLE, 8);
	apply_type(0x13644a4, "RTTIBase[1]");
	set_name(0x13644a4, "PhysicsModelMover::sBases");

	// PhysicsModelMoverResource
	set_name(0x1362cc4, "RTTI_PhysicsModelMoverResource");
	apply_type(0x1362cc4, "RTTICompound");
	del_items(0x13644ac, DELIT_SIMPLE, 8);
	apply_type(0x13644ac, "RTTIBase[1]");
	set_name(0x13644ac, "PhysicsModelMoverResource::sBases");

	// PhysicsMover
	set_name(0x1362d18, "RTTI_PhysicsMover");
	apply_type(0x1362d18, "RTTICompound");
	del_items(0x1364660, DELIT_SIMPLE, 8);
	apply_type(0x1364660, "RTTIBase[1]");
	set_name(0x1364660, "PhysicsMover::sBases");

	// PhysicsMoverResource
	set_name(0x1362dd0, "RTTI_PhysicsMoverResource");
	apply_type(0x1362dd0, "RTTICompound");
	del_items(0x13644ec, DELIT_SIMPLE, 8);
	apply_type(0x13644ec, "RTTIBase[1]");
	set_name(0x13644ec, "PhysicsMoverResource::sBases");
	del_items(0x13644f4, DELIT_SIMPLE, 364);
	apply_type(0x13644f4, "RTTIAttr[13]");
	set_name(0x13644f4, "PhysicsMoverResource::sAttrs");

	// PhysicsPhantom
	set_name(0x1342d34, "RTTI_PhysicsPhantom");
	apply_type(0x1342d34, "RTTICompound");

	// PhysicsPrismaticConstraintResource
	set_name(0x13446b0, "RTTI_PhysicsPrismaticConstraintResource");
	apply_type(0x13446b0, "RTTICompound");
	del_items(0x1344b30, DELIT_SIMPLE, 8);
	apply_type(0x1344b30, "RTTIBase[1]");
	set_name(0x1344b30, "PhysicsPrismaticConstraintResource::sBases");
	del_items(0x1344b38, DELIT_SIMPLE, 168);
	apply_type(0x1344b38, "RTTIAttr[6]");
	set_name(0x1344b38, "PhysicsPrismaticConstraintResource::sAttrs");

	// PhysicsRagdollBodyControlData
	set_name(0x1343dac, "RTTI_PhysicsRagdollBodyControlData");
	apply_type(0x1343dac, "RTTICompound");
	del_items(0x134406c, DELIT_SIMPLE, 336);
	apply_type(0x134406c, "RTTIAttr[12]");
	set_name(0x134406c, "PhysicsRagdollBodyControlData::sAttrs");

	// PhysicsRagdollBodyControllerResource
	set_name(0x1343e10, "RTTI_PhysicsRagdollBodyControllerResource");
	apply_type(0x1343e10, "RTTICompound");
	del_items(0x13441bc, DELIT_SIMPLE, 8);
	apply_type(0x13441bc, "RTTIBase[1]");
	set_name(0x13441bc, "PhysicsRagdollBodyControllerResource::sBases");
	del_items(0x13441c4, DELIT_SIMPLE, 420);
	apply_type(0x13441c4, "RTTIAttr[15]");
	set_name(0x13441c4, "PhysicsRagdollBodyControllerResource::sAttrs");

	// PhysicsRagdollConstraintResource
	set_name(0x134465c, "RTTI_PhysicsRagdollConstraintResource");
	apply_type(0x134465c, "RTTICompound");
	del_items(0x13449d8, DELIT_SIMPLE, 8);
	apply_type(0x13449d8, "RTTIBase[1]");
	set_name(0x13449d8, "PhysicsRagdollConstraintResource::sBases");
	del_items(0x13449e0, DELIT_SIMPLE, 336);
	apply_type(0x13449e0, "RTTIAttr[12]");
	set_name(0x13449e0, "PhysicsRagdollConstraintResource::sAttrs");

	// PhysicsRagdollInstance
	set_name(0x1343c80, "RTTI_PhysicsRagdollInstance");
	apply_type(0x1343c80, "RTTICompound");
	del_items(0x13444a0, DELIT_SIMPLE, 8);
	apply_type(0x13444a0, "RTTIBase[1]");
	set_name(0x13444a0, "PhysicsRagdollInstance::sBases");

	// PhysicsRagdollMotorControlData
	set_name(0x1343ce4, "RTTI_PhysicsRagdollMotorControlData");
	apply_type(0x1343ce4, "RTTICompound");
	del_items(0x1343fa0, DELIT_SIMPLE, 140);
	apply_type(0x1343fa0, "RTTIAttr[5]");
	set_name(0x1343fa0, "PhysicsRagdollMotorControlData::sAttrs");

	// PhysicsRagdollMotorsResource
	set_name(0x1343d48, "RTTI_PhysicsRagdollMotorsResource");
	apply_type(0x1343d48, "RTTICompound");
	del_items(0x134402c, DELIT_SIMPLE, 8);
	apply_type(0x134402c, "RTTIBase[1]");
	set_name(0x134402c, "PhysicsRagdollMotorsResource::sBases");
	del_items(0x1344034, DELIT_SIMPLE, 56);
	apply_type(0x1344034, "RTTIAttr[2]");
	set_name(0x1344034, "PhysicsRagdollMotorsResource::sAttrs");

	// PhysicsRagdollResource
	set_name(0x1343e74, "RTTI_PhysicsRagdollResource");
	apply_type(0x1343e74, "RTTICompound");
	del_items(0x1344368, DELIT_SIMPLE, 8);
	apply_type(0x1344368, "RTTIBase[1]");
	set_name(0x1344368, "PhysicsRagdollResource::sBases");
	del_items(0x1344370, DELIT_SIMPLE, 280);
	apply_type(0x1344370, "RTTIAttr[10]");
	set_name(0x1344370, "PhysicsRagdollResource::sAttrs");
	del_items(0x1344488, DELIT_SIMPLE, 24);
	apply_type(0x1344488, "RTTIMessageHandler[2]");
	set_name(0x1344488, "PhysicsRagdollResource::sMessageHandlers");

	// PhysicsResource
	set_name(0x1342ea4, "RTTI_PhysicsResource");
	apply_type(0x1342ea4, "RTTICompound");
	del_items(0x13431c8, DELIT_SIMPLE, 8);
	apply_type(0x13431c8, "RTTIBase[1]");
	set_name(0x13431c8, "PhysicsResource::sBases");
	del_items(0x13431d0, DELIT_SIMPLE, 112);
	apply_type(0x13431d0, "RTTIAttr[4]");
	set_name(0x13431d0, "PhysicsResource::sAttrs");

	// PhysicsRigidBodyPhantomProxy
	set_name(0x13447ac, "RTTI_PhysicsRigidBodyPhantomProxy");
	apply_type(0x13447ac, "RTTICompound");
	del_items(0x1344ca8, DELIT_SIMPLE, 8);
	apply_type(0x1344ca8, "RTTIBase[1]");
	set_name(0x1344ca8, "PhysicsRigidBodyPhantomProxy::sBases");

	// PhysicsSkeleton
	set_name(0x1343ed8, "RTTI_PhysicsSkeleton");
	apply_type(0x1343ed8, "RTTICompound");
	del_items(0x1343f2c, DELIT_SIMPLE, 8);
	apply_type(0x1343f2c, "RTTIBase[1]");
	set_name(0x1343f2c, "PhysicsSkeleton::sBases");
	del_items(0x1343f34, DELIT_SIMPLE, 84);
	apply_type(0x1343f34, "RTTIAttr[3]");
	set_name(0x1343f34, "PhysicsSkeleton::sAttrs");
	del_items(0x1343f88, DELIT_SIMPLE, 24);
	apply_type(0x1343f88, "RTTIMessageHandler[2]");
	set_name(0x1343f88, "PhysicsSkeleton::sMessageHandlers");

	// PhysicsSpherePhantom
	set_name(0x1342ddc, "RTTI_PhysicsSpherePhantom");
	apply_type(0x1342ddc, "RTTICompound");
	del_items(0x134354c, DELIT_SIMPLE, 8);
	apply_type(0x134354c, "RTTIBase[1]");
	set_name(0x134354c, "PhysicsSpherePhantom::sBases");

	// PhysicsStiffSpringConstraintResource
	set_name(0x1344704, "RTTI_PhysicsStiffSpringConstraintResource");
	apply_type(0x1344704, "RTTICompound");
	del_items(0x1344be0, DELIT_SIMPLE, 8);
	apply_type(0x1344be0, "RTTIBase[1]");
	set_name(0x1344be0, "PhysicsStiffSpringConstraintResource::sBases");
	del_items(0x1344be8, DELIT_SIMPLE, 84);
	apply_type(0x1344be8, "RTTIAttr[3]");
	set_name(0x1344be8, "PhysicsStiffSpringConstraintResource::sAttrs");

	// PhysicsVehicleInstance
	set_name(0x1342ce0, "RTTI_PhysicsVehicleInstance");
	apply_type(0x1342ce0, "RTTICompound");
	del_items(0x1343abc, DELIT_SIMPLE, 8);
	apply_type(0x1343abc, "RTTIBase[1]");
	set_name(0x1343abc, "PhysicsVehicleInstance::sBases");
	del_items(0x1343ac4, DELIT_SIMPLE, 12);
	apply_type(0x1343ac4, "RTTIMessageHandler[1]");
	set_name(0x1343ac4, "PhysicsVehicleInstance::sMessageHandlers");

	// PhysicsVehicleResource
	set_name(0x1342ff0, "RTTI_PhysicsVehicleResource");
	apply_type(0x1342ff0, "RTTICompound");
	del_items(0x134370c, DELIT_SIMPLE, 8);
	apply_type(0x134370c, "RTTIBase[1]");
	set_name(0x134370c, "PhysicsVehicleResource::sBases");
	del_items(0x1343714, DELIT_SIMPLE, 924);
	apply_type(0x1343714, "RTTIAttr[33]");
	set_name(0x1343714, "PhysicsVehicleResource::sAttrs");
	del_items(0x1343ab0, DELIT_SIMPLE, 12);
	apply_type(0x1343ab0, "RTTIMessageHandler[1]");
	set_name(0x1343ab0, "PhysicsVehicleResource::sMessageHandlers");

	// PhysicsVehicleWheelInfo
	set_name(0x1342f8c, "RTTI_PhysicsVehicleWheelInfo");
	apply_type(0x1342f8c, "RTTICompound");
	del_items(0x1343568, DELIT_SIMPLE, 420);
	apply_type(0x1343568, "RTTIAttr[15]");
	set_name(0x1343568, "PhysicsVehicleWheelInfo::sAttrs");

	// PhysicsWaterPool
	set_name(0x13430a8, "RTTI_PhysicsWaterPool");
	apply_type(0x13430a8, "RTTICompound");
	del_items(0x1343554, DELIT_SIMPLE, 8);
	apply_type(0x1343554, "RTTIBase[1]");
	set_name(0x1343554, "PhysicsWaterPool::sBases");
	del_items(0x134355c, DELIT_SIMPLE, 12);
	apply_type(0x134355c, "RTTIMessageHandler[1]");
	set_name(0x134355c, "PhysicsWaterPool::sMessageHandlers");

	// PhysicsWaterPoolResource
	set_name(0x13430fc, "RTTI_PhysicsWaterPoolResource");
	apply_type(0x13430fc, "RTTICompound");
	del_items(0x1343bdc, DELIT_SIMPLE, 8);
	apply_type(0x1343bdc, "RTTIBase[1]");
	set_name(0x1343bdc, "PhysicsWaterPoolResource::sBases");
	del_items(0x1343be4, DELIT_SIMPLE, 140);
	apply_type(0x1343be4, "RTTIAttr[5]");
	set_name(0x1343be4, "PhysicsWaterPoolResource::sAttrs");

	// PhysicsWorld
	set_name(0x1344e50, "RTTI_PhysicsWorld");
	apply_type(0x1344e50, "RTTICompound");
	del_items(0x1344ea8, DELIT_SIMPLE, 8);
	apply_type(0x1344ea8, "RTTIBase[1]");
	set_name(0x1344ea8, "PhysicsWorld::sBases");
	del_items(0x1344eb0, DELIT_SIMPLE, 48);
	apply_type(0x1344eb0, "RTTIFunction[2]");
	set_name(0x1344eb0, "PhysicsWorld::sFunctions");

	// PickUp
	set_name(0x1392598, "RTTI_PickUp");
	apply_type(0x1392598, "RTTICompound");
	del_items(0x1392848, DELIT_SIMPLE, 16);
	apply_type(0x1392848, "RTTIBase[2]");
	set_name(0x1392848, "PickUp::sBases");
	del_items(0x1392858, DELIT_SIMPLE, 112);
	apply_type(0x1392858, "RTTIAttr[4]");
	set_name(0x1392858, "PickUp::sAttrs");
	del_items(0x13928c8, DELIT_SIMPLE, 24);
	apply_type(0x13928c8, "RTTIFunction[1]");
	set_name(0x13928c8, "PickUp::sFunctions");

	// PickUpDropAmmoPickUp
	set_name(0x139333c, "RTTI_PickUpDropAmmoPickUp");
	apply_type(0x139333c, "RTTICompound");
	del_items(0x1395094, DELIT_SIMPLE, 112);
	apply_type(0x1395094, "RTTIAttr[4]");
	set_name(0x1395094, "PickUpDropAmmoPickUp::sAttrs");

	// PickUpDropEntity
	set_name(0x1393284, "RTTI_PickUpDropEntity");
	apply_type(0x1393284, "RTTICompound");
	del_items(0x1394fec, DELIT_SIMPLE, 8);
	apply_type(0x1394fec, "RTTIBase[1]");
	set_name(0x1394fec, "PickUpDropEntity::sBases");

	// PickUpDropEntityResource
	set_name(0x13932d8, "RTTI_PickUpDropEntityResource");
	apply_type(0x13932d8, "RTTICompound");
	del_items(0x1395000, DELIT_SIMPLE, 8);
	apply_type(0x1395000, "RTTIBase[1]");
	set_name(0x1395000, "PickUpDropEntityResource::sBases");
	del_items(0x1395008, DELIT_SIMPLE, 140);
	apply_type(0x1395008, "RTTIAttr[5]");
	set_name(0x1395008, "PickUpDropEntityResource::sAttrs");

	// PickUpDropRandomPickUp
	set_name(0x13933a0, "RTTI_PickUpDropRandomPickUp");
	apply_type(0x13933a0, "RTTICompound");
	del_items(0x1395104, DELIT_SIMPLE, 84);
	apply_type(0x1395104, "RTTIAttr[3]");
	set_name(0x1395104, "PickUpDropRandomPickUp::sAttrs");

	// PickUpDropResourceWithOdds
	set_name(0x1393404, "RTTI_PickUpDropResourceWithOdds");
	apply_type(0x1393404, "RTTICompound");
	del_items(0x1395158, DELIT_SIMPLE, 84);
	apply_type(0x1395158, "RTTIAttr[3]");
	set_name(0x1395158, "PickUpDropResourceWithOdds::sAttrs");

	// PickUpDropSettings
	set_name(0x1393468, "RTTI_PickUpDropSettings");
	apply_type(0x1393468, "RTTICompound");
	del_items(0x13951ac, DELIT_SIMPLE, 8);
	apply_type(0x13951ac, "RTTIBase[1]");
	set_name(0x13951ac, "PickUpDropSettings::sBases");
	del_items(0x13951b4, DELIT_SIMPLE, 112);
	apply_type(0x13951b4, "RTTIAttr[4]");
	set_name(0x13951b4, "PickUpDropSettings::sAttrs");

	// PickUpResource
	set_name(0x13934dc, "RTTI_PickUpResource");
	apply_type(0x13934dc, "RTTICompound");
	del_items(0x1395224, DELIT_SIMPLE, 8);
	apply_type(0x1395224, "RTTIBase[1]");
	set_name(0x1395224, "PickUpResource::sBases");
	del_items(0x139522c, DELIT_SIMPLE, 364);
	apply_type(0x139522c, "RTTIAttr[13]");
	set_name(0x139522c, "PickUpResource::sAttrs");

	// PilotLightSettings
	set_name(0x139ef04, "RTTI_PilotLightSettings");
	apply_type(0x139ef04, "RTTICompound");
	del_items(0x139fd68, DELIT_SIMPLE, 84);
	apply_type(0x139fd68, "RTTIAttr[3]");
	set_name(0x139fd68, "PilotLightSettings::sAttrs");

	// PivotFollowCameraEntity
	set_name(0x13790e8, "RTTI_PivotFollowCameraEntity");
	apply_type(0x13790e8, "RTTICompound");
	del_items(0x1379f44, DELIT_SIMPLE, 8);
	apply_type(0x1379f44, "RTTIBase[1]");
	set_name(0x1379f44, "PivotFollowCameraEntity::sBases");

	// PivotFollowCameraEntityResource
	set_name(0x137914c, "RTTI_PivotFollowCameraEntityResource");
	apply_type(0x137914c, "RTTICompound");
	del_items(0x1379e94, DELIT_SIMPLE, 8);
	apply_type(0x1379e94, "RTTIBase[1]");
	set_name(0x1379e94, "PivotFollowCameraEntityResource::sBases");
	del_items(0x1379e9c, DELIT_SIMPLE, 168);
	apply_type(0x1379e9c, "RTTIAttr[6]");
	set_name(0x1379e9c, "PivotFollowCameraEntityResource::sAttrs");

	// PlaceOnLocatorEventInstance
	set_name(0x1397a5c, "RTTI_PlaceOnLocatorEventInstance");
	apply_type(0x1397a5c, "RTTICompound");
	del_items(0x1398c90, DELIT_SIMPLE, 8);
	apply_type(0x1398c90, "RTTIBase[1]");
	set_name(0x1398c90, "PlaceOnLocatorEventInstance::sBases");

	// PlaceOnLocatorEventResource
	set_name(0x1397a08, "RTTI_PlaceOnLocatorEventResource");
	apply_type(0x1397a08, "RTTICompound");
	del_items(0x1398be0, DELIT_SIMPLE, 8);
	apply_type(0x1398be0, "RTTIBase[1]");
	set_name(0x1398be0, "PlaceOnLocatorEventResource::sBases");
	del_items(0x1398be8, DELIT_SIMPLE, 168);
	apply_type(0x1398be8, "RTTIAttr[6]");
	set_name(0x1398be8, "PlaceOnLocatorEventResource::sAttrs");

	// Placeable
	set_name(0x13a0890, "RTTI_Placeable");
	apply_type(0x13a0890, "RTTICompound");
	del_items(0x13a18a0, DELIT_SIMPLE, 8);
	apply_type(0x13a18a0, "RTTIBase[1]");
	set_name(0x13a18a0, "Placeable::sBases");

	// PlaceableResource
	set_name(0x13a08f4, "RTTI_PlaceableResource");
	apply_type(0x13a08f4, "RTTICompound");
	del_items(0x13a1654, DELIT_SIMPLE, 8);
	apply_type(0x13a1654, "RTTIBase[1]");
	set_name(0x13a1654, "PlaceableResource::sBases");
	del_items(0x13a165c, DELIT_SIMPLE, 112);
	apply_type(0x13a165c, "RTTIAttr[4]");
	set_name(0x13a165c, "PlaceableResource::sAttrs");

	// PlaneEq
	set_name(0x132b0a4, "RTTI_PlaneEq");
	apply_type(0x132b0a4, "RTTICompound");
	del_items(0x132b208, DELIT_SIMPLE, 56);
	apply_type(0x132b208, "RTTIAttr[2]");
	set_name(0x132b208, "PlaneEq::sAttrs");

	// PlayAnimationObject
	set_name(0x137d514, "RTTI_PlayAnimationObject");
	apply_type(0x137d514, "RTTICompound");
	del_items(0x137f0cc, DELIT_SIMPLE, 8);
	apply_type(0x137f0cc, "RTTIBase[1]");
	set_name(0x137f0cc, "PlayAnimationObject::sBases");
	del_items(0x137f0d4, DELIT_SIMPLE, 84);
	apply_type(0x137f0d4, "RTTIAttr[3]");
	set_name(0x137f0d4, "PlayAnimationObject::sAttrs");
	del_items(0x137f128, DELIT_SIMPLE, 24);
	apply_type(0x137f128, "RTTIFunction[1]");
	set_name(0x137f128, "PlayAnimationObject::sFunctions");

	// PlayAnimationObjectActorInstance
	set_name(0x139ab94, "RTTI_PlayAnimationObjectActorInstance");
	apply_type(0x139ab94, "RTTICompound");
	del_items(0x139bdbc, DELIT_SIMPLE, 8);
	apply_type(0x139bdbc, "RTTIBase[1]");
	set_name(0x139bdbc, "PlayAnimationObjectActorInstance::sBases");

	// PlayAnimationObjectActorResource
	set_name(0x139ab40, "RTTI_PlayAnimationObjectActorResource");
	apply_type(0x139ab40, "RTTICompound");
	del_items(0x139bd7c, DELIT_SIMPLE, 8);
	apply_type(0x139bd7c, "RTTIBase[1]");
	set_name(0x139bd7c, "PlayAnimationObjectActorResource::sBases");
	del_items(0x139bd84, DELIT_SIMPLE, 56);
	apply_type(0x139bd84, "RTTIAttr[2]");
	set_name(0x139bd84, "PlayAnimationObjectActorResource::sAttrs");

	// PlayAnimationObjectAiController
	set_name(0x137d568, "RTTI_PlayAnimationObjectAiController");
	apply_type(0x137d568, "RTTICompound");
	del_items(0x137f140, DELIT_SIMPLE, 8);
	apply_type(0x137f140, "RTTIBase[1]");
	set_name(0x137f140, "PlayAnimationObjectAiController::sBases");

	// PlayAnimationObjectRep
	set_name(0x137f704, "RTTI_PlayAnimationObjectRep");
	apply_type(0x137f704, "RTTICompound");
	del_items(0x1380700, DELIT_SIMPLE, 8);
	apply_type(0x1380700, "RTTIBase[1]");
	set_name(0x1380700, "PlayAnimationObjectRep::sBases");

	// PlayAnimationObjectResource
	set_name(0x137f768, "RTTI_PlayAnimationObjectResource");
	apply_type(0x137f768, "RTTICompound");
	del_items(0x1380538, DELIT_SIMPLE, 8);
	apply_type(0x1380538, "RTTIBase[1]");
	set_name(0x1380538, "PlayAnimationObjectResource::sBases");
	del_items(0x1380540, DELIT_SIMPLE, 448);
	apply_type(0x1380540, "RTTIAttr[16]");
	set_name(0x1380540, "PlayAnimationObjectResource::sAttrs");

	// PlaySingleAnimationObject
	set_name(0x137d5bc, "RTTI_PlaySingleAnimationObject");
	apply_type(0x137d5bc, "RTTICompound");
	del_items(0x137f1b0, DELIT_SIMPLE, 16);
	apply_type(0x137f1b0, "RTTIBase[2]");
	set_name(0x137f1b0, "PlaySingleAnimationObject::sBases");

	// PlaySingleAnimationObjectResource
	set_name(0x137d610, "RTTI_PlaySingleAnimationObjectResource");
	apply_type(0x137d610, "RTTICompound");
	del_items(0x137f154, DELIT_SIMPLE, 8);
	apply_type(0x137f154, "RTTIBase[1]");
	set_name(0x137f154, "PlaySingleAnimationObjectResource::sBases");
	del_items(0x137f15c, DELIT_SIMPLE, 84);
	apply_type(0x137f15c, "RTTIAttr[3]");
	set_name(0x137f15c, "PlaySingleAnimationObjectResource::sAttrs");

	// Player
	set_name(0x135d41c, "RTTI_Player");
	apply_type(0x135d41c, "RTTICompound");
	del_items(0x135f580, DELIT_SIMPLE, 8);
	apply_type(0x135f580, "RTTIBase[1]");
	set_name(0x135f580, "Player::sBases");
	del_items(0x135f588, DELIT_SIMPLE, 216);
	apply_type(0x135f588, "RTTIFunction[9]");
	set_name(0x135f588, "Player::sFunctions");

	// PlayerActorInstance
	set_name(0x139ac4c, "RTTI_PlayerActorInstance");
	apply_type(0x139ac4c, "RTTICompound");
	del_items(0x139ba70, DELIT_SIMPLE, 8);
	apply_type(0x139ba70, "RTTIBase[1]");
	set_name(0x139ba70, "PlayerActorInstance::sBases");

	// PlayerActorResource
	set_name(0x139abf8, "RTTI_PlayerActorResource");
	apply_type(0x139abf8, "RTTICompound");
	del_items(0x139ba68, DELIT_SIMPLE, 8);
	apply_type(0x139ba68, "RTTIBase[1]");
	set_name(0x139ba68, "PlayerActorResource::sBases");

	// PlayerGame
	set_name(0x136cd74, "RTTI_PlayerGame");
	apply_type(0x136cd74, "RTTICompound");
	del_items(0x136e034, DELIT_SIMPLE, 8);
	apply_type(0x136e034, "RTTIBase[1]");
	set_name(0x136e034, "PlayerGame::sBases");
	del_items(0x136e03c, DELIT_SIMPLE, 960);
	apply_type(0x136e03c, "RTTIFunction[40]");
	set_name(0x136e03c, "PlayerGame::sFunctions");

	// PlayerLookAtTargetEventInstance
	set_name(0x1397b04, "RTTI_PlayerLookAtTargetEventInstance");
	apply_type(0x1397b04, "RTTICompound");
	del_items(0x139982c, DELIT_SIMPLE, 8);
	apply_type(0x139982c, "RTTIBase[1]");
	set_name(0x139982c, "PlayerLookAtTargetEventInstance::sBases");

	// PlayerLookAtTargetEventResource
	set_name(0x1397ab0, "RTTI_PlayerLookAtTargetEventResource");
	apply_type(0x1397ab0, "RTTICompound");
	del_items(0x1399760, DELIT_SIMPLE, 8);
	apply_type(0x1399760, "RTTIBase[1]");
	set_name(0x1399760, "PlayerLookAtTargetEventResource::sBases");
	del_items(0x1399768, DELIT_SIMPLE, 196);
	apply_type(0x1399768, "RTTIAttr[7]");
	set_name(0x1399768, "PlayerLookAtTargetEventResource::sAttrs");

	// PlayerOrAiAction
	set_name(0x13760a8, "RTTI_PlayerOrAiAction");
	apply_type(0x13760a8, "RTTICompound");
	del_items(0x137745c, DELIT_SIMPLE, 8);
	apply_type(0x137745c, "RTTIBase[1]");
	set_name(0x137745c, "PlayerOrAiAction::sBases");
	del_items(0x1377464, DELIT_SIMPLE, 84);
	apply_type(0x1377464, "RTTIAttr[3]");
	set_name(0x1377464, "PlayerOrAiAction::sAttrs");

	// PlayerProfile
	set_name(0x13680f8, "RTTI_PlayerProfile");
	apply_type(0x13680f8, "RTTICompound");
	del_items(0x13690e0, DELIT_SIMPLE, 8);
	apply_type(0x13690e0, "RTTIBase[1]");
	set_name(0x13690e0, "PlayerProfile::sBases");

	// PlayerRank
	set_name(0x136d384, "RTTI_PlayerRank");
	apply_type(0x136d384, "RTTICompound");
	del_items(0x136f350, DELIT_SIMPLE, 224);
	apply_type(0x136f350, "RTTIAttr[8]");
	set_name(0x136f350, "PlayerRank::sAttrs");

	// PlayerRanksResource
	set_name(0x136d3d8, "RTTI_PlayerRanksResource");
	apply_type(0x136d3d8, "RTTICompound");
	del_items(0x136f430, DELIT_SIMPLE, 8);
	apply_type(0x136f430, "RTTIBase[1]");
	set_name(0x136f430, "PlayerRanksResource::sBases");
	del_items(0x136f438, DELIT_SIMPLE, 112);
	apply_type(0x136f438, "RTTIAttr[4]");
	set_name(0x136f438, "PlayerRanksResource::sAttrs");
	del_items(0x136f4a8, DELIT_SIMPLE, 192);
	apply_type(0x136f4a8, "RTTIFunction[8]");
	set_name(0x136f4a8, "PlayerRanksResource::sFunctions");
	del_items(0x136f568, DELIT_SIMPLE, 12);
	apply_type(0x136f568, "RTTIMessageHandler[1]");
	set_name(0x136f568, "PlayerRanksResource::sMessageHandlers");

	// PlayerScore
	set_name(0x136d320, "RTTI_PlayerScore");
	apply_type(0x136d320, "RTTICompound");
	del_items(0x136e640, DELIT_SIMPLE, 8);
	apply_type(0x136e640, "RTTIBase[1]");
	set_name(0x136e640, "PlayerScore::sBases");

	// PortableSpawnGrenade
	set_name(0x138e4fc, "RTTI_PortableSpawnGrenade");
	apply_type(0x138e4fc, "RTTICompound");
	del_items(0x1391308, DELIT_SIMPLE, 8);
	apply_type(0x1391308, "RTTIBase[1]");
	set_name(0x1391308, "PortableSpawnGrenade::sBases");

	// PortableSpawnGrenadeResource
	set_name(0x1391958, "RTTI_PortableSpawnGrenadeResource");
	apply_type(0x1391958, "RTTICompound");
	del_items(0x13925f8, DELIT_SIMPLE, 8);
	apply_type(0x13925f8, "RTTIBase[1]");
	set_name(0x13925f8, "PortableSpawnGrenadeResource::sBases");
	del_items(0x1392600, DELIT_SIMPLE, 168);
	apply_type(0x1392600, "RTTIAttr[6]");
	set_name(0x1392600, "PortableSpawnGrenadeResource::sAttrs");

	// PortableTurret
	set_name(0x1391a54, "RTTI_PortableTurret");
	apply_type(0x1391a54, "RTTICompound");
	del_items(0x13928e0, DELIT_SIMPLE, 8);
	apply_type(0x13928e0, "RTTIBase[1]");
	set_name(0x13928e0, "PortableTurret::sBases");

	// PortableTurretRep
	set_name(0x1391aa8, "RTTI_PortableTurretRep");
	apply_type(0x1391aa8, "RTTICompound");
	del_items(0x1392a30, DELIT_SIMPLE, 8);
	apply_type(0x1392a30, "RTTIBase[1]");
	set_name(0x1392a30, "PortableTurretRep::sBases");

	// PortableTurretResource
	set_name(0x1391b1c, "RTTI_PortableTurretResource");
	apply_type(0x1391b1c, "RTTICompound");
	del_items(0x13928f4, DELIT_SIMPLE, 8);
	apply_type(0x13928f4, "RTTIBase[1]");
	set_name(0x13928f4, "PortableTurretResource::sBases");
	del_items(0x13928fc, DELIT_SIMPLE, 308);
	apply_type(0x13928fc, "RTTIAttr[11]");
	set_name(0x13928fc, "PortableTurretResource::sAttrs");

	// Portal
	set_name(0x134a360, "RTTI_Portal");
	apply_type(0x134a360, "RTTICompound");
	del_items(0x134a628, DELIT_SIMPLE, 8);
	apply_type(0x134a628, "RTTIBase[1]");
	set_name(0x134a628, "Portal::sBases");
	del_items(0x134a630, DELIT_SIMPLE, 224);
	apply_type(0x134a630, "RTTIAttr[8]");
	set_name(0x134a630, "Portal::sAttrs");

	// Pose
	set_name(0x1355ecc, "RTTI_Pose");
	apply_type(0x1355ecc, "RTTICompound");
	del_items(0x13571bc, DELIT_SIMPLE, 28);
	apply_type(0x13571bc, "RTTIAttr[1]");
	set_name(0x13571bc, "Pose::sAttrs");
	del_items(0x13571d8, DELIT_SIMPLE, 12);
	apply_type(0x13571d8, "RTTIMessageHandler[1]");
	set_name(0x13571d8, "Pose::sMessageHandlers");

	// PoseMatchingResource
	set_name(0x1362560, "RTTI_PoseMatchingResource");
	apply_type(0x1362560, "RTTICompound");
	del_items(0x1363f68, DELIT_SIMPLE, 8);
	apply_type(0x1363f68, "RTTIBase[1]");
	set_name(0x1363f68, "PoseMatchingResource::sBases");
	del_items(0x1363f70, DELIT_SIMPLE, 168);
	apply_type(0x1363f70, "RTTIAttr[6]");
	set_name(0x1363f70, "PoseMatchingResource::sAttrs");
	del_items(0x1364018, DELIT_SIMPLE, 12);
	apply_type(0x1364018, "RTTIMessageHandler[1]");
	set_name(0x1364018, "PoseMatchingResource::sMessageHandlers");

	// PositionEventInstance
	set_name(0x1397bbc, "RTTI_PositionEventInstance");
	apply_type(0x1397bbc, "RTTICompound");
	del_items(0x1398f78, DELIT_SIMPLE, 8);
	apply_type(0x1398f78, "RTTIBase[1]");
	set_name(0x1398f78, "PositionEventInstance::sBases");

	// PositionEventResource
	set_name(0x1397b68, "RTTI_PositionEventResource");
	apply_type(0x1397b68, "RTTICompound");
	del_items(0x1398f70, DELIT_SIMPLE, 8);
	apply_type(0x1398f70, "RTTIBase[1]");
	set_name(0x1398f70, "PositionEventResource::sBases");

	// PositionLocatorInstance
	set_name(0x139ad04, "RTTI_PositionLocatorInstance");
	apply_type(0x139ad04, "RTTICompound");
	del_items(0x139be3c, DELIT_SIMPLE, 8);
	apply_type(0x139be3c, "RTTIBase[1]");
	set_name(0x139be3c, "PositionLocatorInstance::sBases");

	// PositionLocatorResource
	set_name(0x139acb0, "RTTI_PositionLocatorResource");
	apply_type(0x139acb0, "RTTICompound");
	del_items(0x139bdc4, DELIT_SIMPLE, 8);
	apply_type(0x139bdc4, "RTTIBase[1]");
	set_name(0x139bdc4, "PositionLocatorResource::sBases");
	del_items(0x139bdcc, DELIT_SIMPLE, 112);
	apply_type(0x139bdcc, "RTTIAttr[4]");
	set_name(0x139bdcc, "PositionLocatorResource::sAttrs");

	// PostProcessEffectorInstance
	set_name(0x13485a8, "RTTI_PostProcessEffectorInstance");
	apply_type(0x13485a8, "RTTICompound");
	del_items(0x134952c, DELIT_SIMPLE, 8);
	apply_type(0x134952c, "RTTIBase[1]");
	set_name(0x134952c, "PostProcessEffectorInstance::sBases");
	del_items(0x1349534, DELIT_SIMPLE, 112);
	apply_type(0x1349534, "RTTIAttr[4]");
	set_name(0x1349534, "PostProcessEffectorInstance::sAttrs");

	// PostProcessEffectorManager
	set_name(0x13484e0, "RTTI_PostProcessEffectorManager");
	apply_type(0x13484e0, "RTTICompound");
	del_items(0x13493cc, DELIT_SIMPLE, 8);
	apply_type(0x13493cc, "RTTIBase[1]");
	set_name(0x13493cc, "PostProcessEffectorManager::sBases");

	// PostProcessEffectorResource
	set_name(0x1348554, "RTTI_PostProcessEffectorResource");
	apply_type(0x1348554, "RTTICompound");
	del_items(0x13493d4, DELIT_SIMPLE, 8);
	apply_type(0x13493d4, "RTTIBase[1]");
	set_name(0x13493d4, "PostProcessEffectorResource::sBases");
	del_items(0x13493dc, DELIT_SIMPLE, 336);
	apply_type(0x13493dc, "RTTIAttr[12]");
	set_name(0x13493dc, "PostProcessEffectorResource::sAttrs");

	// PostProcessMotionBlurScaleEventInstance
	set_name(0x1397c64, "RTTI_PostProcessMotionBlurScaleEventInstance");
	apply_type(0x1397c64, "RTTICompound");
	del_items(0x1399890, DELIT_SIMPLE, 8);
	apply_type(0x1399890, "RTTIBase[1]");
	set_name(0x1399890, "PostProcessMotionBlurScaleEventInstance::sBases");

	// PostProcessMotionBlurScaleEventResource
	set_name(0x1397c10, "RTTI_PostProcessMotionBlurScaleEventResource");
	apply_type(0x1397c10, "RTTICompound");
	del_items(0x1399834, DELIT_SIMPLE, 8);
	apply_type(0x1399834, "RTTIBase[1]");
	set_name(0x1399834, "PostProcessMotionBlurScaleEventResource::sBases");
	del_items(0x139983c, DELIT_SIMPLE, 84);
	apply_type(0x139983c, "RTTIAttr[3]");
	set_name(0x139983c, "PostProcessMotionBlurScaleEventResource::sAttrs");

	// PostProcessSettingsResource
	set_name(0x134848c, "RTTI_PostProcessSettingsResource");
	apply_type(0x134848c, "RTTICompound");
	del_items(0x13492c8, DELIT_SIMPLE, 8);
	apply_type(0x13492c8, "RTTIBase[1]");
	set_name(0x13492c8, "PostProcessSettingsResource::sBases");
	del_items(0x13492d0, DELIT_SIMPLE, 252);
	apply_type(0x13492d0, "RTTIAttr[9]");
	set_name(0x13492d0, "PostProcessSettingsResource::sAttrs");

	// PostureSwitchEventInstance
	set_name(0x1397d0c, "RTTI_PostureSwitchEventInstance");
	apply_type(0x1397d0c, "RTTICompound");
	del_items(0x13998f4, DELIT_SIMPLE, 8);
	apply_type(0x13998f4, "RTTIBase[1]");
	set_name(0x13998f4, "PostureSwitchEventInstance::sBases");

	// PostureSwitchEventResource
	set_name(0x1397cb8, "RTTI_PostureSwitchEventResource");
	apply_type(0x1397cb8, "RTTICompound");
	del_items(0x1399898, DELIT_SIMPLE, 8);
	apply_type(0x1399898, "RTTIBase[1]");
	set_name(0x1399898, "PostureSwitchEventResource::sBases");
	del_items(0x13998a0, DELIT_SIMPLE, 84);
	apply_type(0x13998a0, "RTTIAttr[3]");
	set_name(0x13998a0, "PostureSwitchEventResource::sAttrs");

	// PrepareCharacterFacialSequenceEventInstance
	set_name(0x1394840, "RTTI_PrepareCharacterFacialSequenceEventInstance");
	apply_type(0x1394840, "RTTICompound");
	del_items(0x13964a8, DELIT_SIMPLE, 8);
	apply_type(0x13964a8, "RTTIBase[1]");
	set_name(0x13964a8, "PrepareCharacterFacialSequenceEventInstance::sBases");

	// PrepareCharacterFacialSequenceEventResource
	set_name(0x13947ec, "RTTI_PrepareCharacterFacialSequenceEventResource");
	apply_type(0x13947ec, "RTTICompound");
	del_items(0x1396468, DELIT_SIMPLE, 8);
	apply_type(0x1396468, "RTTIBase[1]");
	set_name(0x1396468, "PrepareCharacterFacialSequenceEventResource::sBases");
	del_items(0x1396470, DELIT_SIMPLE, 56);
	apply_type(0x1396470, "RTTIAttr[2]");
	set_name(0x1396470, "PrepareCharacterFacialSequenceEventResource::sAttrs");

	// PrimitiveBlendShapeMask
	set_name(0x13560e4, "RTTI_PrimitiveBlendShapeMask");
	apply_type(0x13560e4, "RTTICompound");
	del_items(0x1358408, DELIT_SIMPLE, 112);
	apply_type(0x1358408, "RTTIAttr[4]");
	set_name(0x1358408, "PrimitiveBlendShapeMask::sAttrs");

	// PrimitiveDeltaDeformation
	set_name(0x1356210, "RTTI_PrimitiveDeltaDeformation");
	apply_type(0x1356210, "RTTICompound");
	del_items(0x13584e8, DELIT_SIMPLE, 28);
	apply_type(0x13584e8, "RTTIAttr[1]");
	set_name(0x13584e8, "PrimitiveDeltaDeformation::sAttrs");

	// PrimitiveResource
	set_name(0x1345774, "RTTI_PrimitiveResource");
	apply_type(0x1345774, "RTTICompound");
	del_items(0x13464cc, DELIT_SIMPLE, 8);
	apply_type(0x13464cc, "RTTIBase[1]");
	set_name(0x13464cc, "PrimitiveResource::sBases");
	del_items(0x13464d4, DELIT_SIMPLE, 224);
	apply_type(0x13464d4, "RTTIAttr[8]");
	set_name(0x13464d4, "PrimitiveResource::sAttrs");

	// PrimitiveResourceFlags
	set_name(0x1345700, "RTTI_PrimitiveResourceFlags");
	apply_type(0x1345700, "RTTICompound");
	del_items(0x13464b0, DELIT_SIMPLE, 28);
	apply_type(0x13464b0, "RTTIAttr[1]");
	set_name(0x13464b0, "PrimitiveResourceFlags::sAttrs");

	// PrimitiveSkinInfo
	set_name(0x1356148, "RTTI_PrimitiveSkinInfo");
	apply_type(0x1356148, "RTTICompound");
	del_items(0x1358478, DELIT_SIMPLE, 112);
	apply_type(0x1358478, "RTTIAttr[4]");
	set_name(0x1358478, "PrimitiveSkinInfo::sAttrs");

	// ProbabilityAction
	set_name(0x135e3d8, "RTTI_ProbabilityAction");
	apply_type(0x135e3d8, "RTTICompound");
	del_items(0x13613d0, DELIT_SIMPLE, 8);
	apply_type(0x13613d0, "RTTIBase[1]");
	set_name(0x13613d0, "ProbabilityAction::sBases");
	del_items(0x13613d8, DELIT_SIMPLE, 56);
	apply_type(0x13613d8, "RTTIAttr[2]");
	set_name(0x13613d8, "ProbabilityAction::sAttrs");

	// ProgressBarTag
	set_name(0x133d1c8, "RTTI_ProgressBarTag");
	apply_type(0x133d1c8, "RTTICompound");
	del_items(0x133f5cc, DELIT_SIMPLE, 8);
	apply_type(0x133f5cc, "RTTIBase[1]");
	set_name(0x133f5cc, "ProgressBarTag::sBases");

	// ProgressBarWidget
	set_name(0x133db4c, "RTTI_ProgressBarWidget");
	apply_type(0x133db4c, "RTTICompound");
	del_items(0x133fcc0, DELIT_SIMPLE, 8);
	apply_type(0x133fcc0, "RTTIBase[1]");
	set_name(0x133fcc0, "ProgressBarWidget::sBases");

	// ProjMatrix
	set_name(0x133507c, "RTTI_ProjMatrix");
	apply_type(0x133507c, "RTTICompound");
	del_items(0x13353e0, DELIT_SIMPLE, 112);
	apply_type(0x13353e0, "RTTIAttr[4]");
	set_name(0x13353e0, "ProjMatrix::sAttrs");

	// ProjectedMeshInstance
	set_name(0x1339e3c, "RTTI_ProjectedMeshInstance");
	apply_type(0x1339e3c, "RTTICompound");
	del_items(0x133af60, DELIT_SIMPLE, 8);
	apply_type(0x133af60, "RTTIBase[1]");
	set_name(0x133af60, "ProjectedMeshInstance::sBases");
	del_items(0x133af68, DELIT_SIMPLE, 336);
	apply_type(0x133af68, "RTTIAttr[12]");
	set_name(0x133af68, "ProjectedMeshInstance::sAttrs");
	del_items(0x133b0b8, DELIT_SIMPLE, 24);
	apply_type(0x133b0b8, "RTTIMessageHandler[2]");
	set_name(0x133b0b8, "ProjectedMeshInstance::sMessageHandlers");

	// ProximityComponent
	set_name(0x1389d8c, "RTTI_ProximityComponent");
	apply_type(0x1389d8c, "RTTICompound");
	del_items(0x138c9c8, DELIT_SIMPLE, 8);
	apply_type(0x138c9c8, "RTTIBase[1]");
	set_name(0x138c9c8, "ProximityComponent::sBases");

	// ProximityComponentResource
	set_name(0x1389de0, "RTTI_ProximityComponentResource");
	apply_type(0x1389de0, "RTTICompound");
	del_items(0x138c968, DELIT_SIMPLE, 8);
	apply_type(0x138c968, "RTTIBase[1]");
	set_name(0x138c968, "ProximityComponentResource::sBases");
	del_items(0x138c970, DELIT_SIMPLE, 84);
	apply_type(0x138c970, "RTTIAttr[3]");
	set_name(0x138c970, "ProximityComponentResource::sAttrs");

	// ProxyMountedGunController
	set_name(0x137d4c0, "RTTI_ProxyMountedGunController");
	apply_type(0x137d4c0, "RTTICompound");
	del_items(0x137f0c4, DELIT_SIMPLE, 8);
	apply_type(0x137f0c4, "RTTIBase[1]");
	set_name(0x137f0c4, "ProxyMountedGunController::sBases");

	// RGBAColor
	set_name(0x13289b0, "RTTI_RGBAColor");
	apply_type(0x13289b0, "RTTICompound");
	del_items(0x1328ca4, DELIT_SIMPLE, 112);
	apply_type(0x1328ca4, "RTTIAttr[4]");
	set_name(0x1328ca4, "RGBAColor::sAttrs");

	// RTTIObject
	set_name(0x1335c3c, "RTTI_RTTIObject");
	apply_type(0x1335c3c, "RTTICompound");

	// RTTIRefObject
	set_name(0x1335c90, "RTTI_RTTIRefObject");
	apply_type(0x1335c90, "RTTICompound");
	del_items(0x1336290, DELIT_SIMPLE, 8);
	apply_type(0x1336290, "RTTIBase[1]");
	set_name(0x1336290, "RTTIRefObject::sBases");

	// RadioMessage
	set_name(0x136cdd8, "RTTI_RadioMessage");
	apply_type(0x136cdd8, "RTTICompound");
	del_items(0x1370584, DELIT_SIMPLE, 8);
	apply_type(0x1370584, "RTTIBase[1]");
	set_name(0x1370584, "RadioMessage::sBases");
	del_items(0x137058c, DELIT_SIMPLE, 280);
	apply_type(0x137058c, "RTTIAttr[10]");
	set_name(0x137058c, "RadioMessage::sAttrs");
	del_items(0x13706a4, DELIT_SIMPLE, 48);
	apply_type(0x13706a4, "RTTIFunction[2]");
	set_name(0x13706a4, "RadioMessage::sFunctions");
	del_items(0x13706d4, DELIT_SIMPLE, 12);
	apply_type(0x13706d4, "RTTIMessageHandler[1]");
	set_name(0x13706d4, "RadioMessage::sMessageHandlers");

	// RadioMessageListenerResource
	set_name(0x13abae0, "RTTI_RadioMessageListenerResource");
	apply_type(0x13abae0, "RTTICompound");
	del_items(0x13ac02c, DELIT_SIMPLE, 8);
	apply_type(0x13ac02c, "RTTIBase[1]");
	set_name(0x13ac02c, "RadioMessageListenerResource::sBases");
	del_items(0x13ac034, DELIT_SIMPLE, 84);
	apply_type(0x13ac034, "RTTIAttr[3]");
	set_name(0x13ac034, "RadioMessageListenerResource::sAttrs");
	del_items(0x13ac088, DELIT_SIMPLE, 12);
	apply_type(0x13ac088, "RTTIMessageHandler[1]");
	set_name(0x13ac088, "RadioMessageListenerResource::sMessageHandlers");

	// RagdollMover
	set_name(0x1362e24, "RTTI_RagdollMover");
	apply_type(0x1362e24, "RTTICompound");
	del_items(0x1364668, DELIT_SIMPLE, 8);
	apply_type(0x1364668, "RTTIBase[1]");
	set_name(0x1364668, "RagdollMover::sBases");

	// RagdollMoverResource
	set_name(0x1362e78, "RTTI_RagdollMoverResource");
	apply_type(0x1362e78, "RTTICompound");
	del_items(0x1364670, DELIT_SIMPLE, 8);
	apply_type(0x1364670, "RTTIBase[1]");
	set_name(0x1364670, "RagdollMoverResource::sBases");

	// RandomAction
	set_name(0x135e384, "RTTI_RandomAction");
	apply_type(0x135e384, "RTTICompound");
	del_items(0x1361390, DELIT_SIMPLE, 8);
	apply_type(0x1361390, "RTTIBase[1]");
	set_name(0x1361390, "RandomAction::sBases");
	del_items(0x1361398, DELIT_SIMPLE, 56);
	apply_type(0x1361398, "RTTIAttr[2]");
	set_name(0x1361398, "RandomAction::sAttrs");

	// RandomFireResource
	set_name(0x138d43c, "RTTI_RandomFireResource");
	apply_type(0x138d43c, "RTTICompound");
	del_items(0x138f0c8, DELIT_SIMPLE, 8);
	apply_type(0x138f0c8, "RTTIBase[1]");
	set_name(0x138f0c8, "RandomFireResource::sBases");
	del_items(0x138f0d0, DELIT_SIMPLE, 168);
	apply_type(0x138f0d0, "RTTIAttr[6]");
	set_name(0x138f0d0, "RandomFireResource::sAttrs");

	// RandomMatrixListResource
	set_name(0x1363684, "RTTI_RandomMatrixListResource");
	apply_type(0x1363684, "RTTICompound");
	del_items(0x1364b38, DELIT_SIMPLE, 8);
	apply_type(0x1364b38, "RTTIBase[1]");
	set_name(0x1364b38, "RandomMatrixListResource::sBases");
	del_items(0x1364b40, DELIT_SIMPLE, 56);
	apply_type(0x1364b40, "RTTIAttr[2]");
	set_name(0x1364b40, "RandomMatrixListResource::sAttrs");

	// RandomMatrixResource
	set_name(0x1363630, "RTTI_RandomMatrixResource");
	apply_type(0x1363630, "RTTICompound");
	del_items(0x1364adc, DELIT_SIMPLE, 8);
	apply_type(0x1364adc, "RTTIBase[1]");
	set_name(0x1364adc, "RandomMatrixResource::sBases");
	del_items(0x1364ae4, DELIT_SIMPLE, 84);
	apply_type(0x1364ae4, "RTTIAttr[3]");
	set_name(0x1364ae4, "RandomMatrixResource::sAttrs");

	// RandomMatrixResourceBase
	set_name(0x13635dc, "RTTI_RandomMatrixResourceBase");
	apply_type(0x13635dc, "RTTICompound");
	del_items(0x1364ad4, DELIT_SIMPLE, 8);
	apply_type(0x1364ad4, "RTTIBase[1]");
	set_name(0x1364ad4, "RandomMatrixResourceBase::sBases");

	// RandomSimpleSoundResource
	set_name(0x1359c74, "RTTI_RandomSimpleSoundResource");
	apply_type(0x1359c74, "RTTICompound");
	del_items(0x135a40c, DELIT_SIMPLE, 8);
	apply_type(0x135a40c, "RTTIBase[1]");
	set_name(0x135a40c, "RandomSimpleSoundResource::sBases");
	del_items(0x135a414, DELIT_SIMPLE, 112);
	apply_type(0x135a414, "RTTIAttr[4]");
	set_name(0x135a414, "RandomSimpleSoundResource::sAttrs");
	del_items(0x135a484, DELIT_SIMPLE, 12);
	apply_type(0x135a484, "RTTIMessageHandler[1]");
	set_name(0x135a484, "RandomSimpleSoundResource::sMessageHandlers");

	// RandomVectorResource
	set_name(0x13636e8, "RTTI_RandomVectorResource");
	apply_type(0x13636e8, "RTTICompound");
	del_items(0x1364b78, DELIT_SIMPLE, 8);
	apply_type(0x1364b78, "RTTIBase[1]");
	set_name(0x1364b78, "RandomVectorResource::sBases");
	del_items(0x1364b80, DELIT_SIMPLE, 84);
	apply_type(0x1364b80, "RTTIAttr[3]");
	set_name(0x1364b80, "RandomVectorResource::sAttrs");

	// RankUpGraphTag
	set_name(0x13ba410, "RTTI_RankUpGraphTag");
	apply_type(0x13ba410, "RTTICompound");
	del_items(0x13bc25c, DELIT_SIMPLE, 8);
	apply_type(0x13bc25c, "RTTIBase[1]");
	set_name(0x13bc25c, "RankUpGraphTag::sBases");

	// RankUpGraphWidget
	set_name(0x13ba560, "RTTI_RankUpGraphWidget");
	apply_type(0x13ba560, "RTTICompound");
	del_items(0x13bc360, DELIT_SIMPLE, 8);
	apply_type(0x13bc360, "RTTIBase[1]");
	set_name(0x13bc360, "RankUpGraphWidget::sBases");

	// RankingUnlockableResource
	set_name(0x13a6828, "RTTI_RankingUnlockableResource");
	apply_type(0x13a6828, "RTTICompound");
	del_items(0x13a7448, DELIT_SIMPLE, 8);
	apply_type(0x13a7448, "RTTIBase[1]");
	set_name(0x13a7448, "RankingUnlockableResource::sBases");
	del_items(0x13a7450, DELIT_SIMPLE, 56);
	apply_type(0x13a7450, "RTTIAttr[2]");
	set_name(0x13a7450, "RankingUnlockableResource::sAttrs");

	// RegionAssetFilter
	set_name(0x136c730, "RTTI_RegionAssetFilter");
	apply_type(0x136c730, "RTTICompound");
	del_items(0x136f79c, DELIT_SIMPLE, 56);
	apply_type(0x136f79c, "RTTIAttr[2]");
	set_name(0x136f79c, "RegionAssetFilter::sAttrs");

	// RegionalAction
	set_name(0x13762a0, "RTTI_RegionalAction");
	apply_type(0x13762a0, "RTTICompound");
	del_items(0x13775dc, DELIT_SIMPLE, 8);
	apply_type(0x13775dc, "RTTIBase[1]");
	set_name(0x13775dc, "RegionalAction::sBases");
	del_items(0x13775e4, DELIT_SIMPLE, 56);
	apply_type(0x13775e4, "RTTIAttr[2]");
	set_name(0x13775e4, "RegionalAction::sAttrs");

	// RegularSkinnedMeshResource
	set_name(0x1355fe8, "RTTI_RegularSkinnedMeshResource");
	apply_type(0x1355fe8, "RTTICompound");
	del_items(0x135857c, DELIT_SIMPLE, 8);
	apply_type(0x135857c, "RTTIBase[1]");
	set_name(0x135857c, "RegularSkinnedMeshResource::sBases");
	del_items(0x1358584, DELIT_SIMPLE, 140);
	apply_type(0x1358584, "RTTIAttr[5]");
	set_name(0x1358584, "RegularSkinnedMeshResource::sAttrs");

	// RegularSkinnedMeshResourceBase
	set_name(0x1355f30, "RTTI_RegularSkinnedMeshResourceBase");
	apply_type(0x1355f30, "RTTICompound");
	del_items(0x1358244, DELIT_SIMPLE, 8);
	apply_type(0x1358244, "RTTIBase[1]");
	set_name(0x1358244, "RegularSkinnedMeshResourceBase::sBases");
	del_items(0x135824c, DELIT_SIMPLE, 252);
	apply_type(0x135824c, "RTTIAttr[9]");
	set_name(0x135824c, "RegularSkinnedMeshResourceBase::sAttrs");
	del_items(0x1358348, DELIT_SIMPLE, 24);
	apply_type(0x1358348, "RTTIMessageHandler[2]");
	set_name(0x1358348, "RegularSkinnedMeshResourceBase::sMessageHandlers");

	// RegularSkinnedMeshResourceSkinInfo
	set_name(0x1355f94, "RTTI_RegularSkinnedMeshResourceSkinInfo");
	apply_type(0x1355f94, "RTTICompound");
	del_items(0x135853c, DELIT_SIMPLE, 8);
	apply_type(0x135853c, "RTTIBase[1]");
	set_name(0x135853c, "RegularSkinnedMeshResourceSkinInfo::sBases");
	del_items(0x1358544, DELIT_SIMPLE, 56);
	apply_type(0x1358544, "RTTIAttr[2]");
	set_name(0x1358544, "RegularSkinnedMeshResourceSkinInfo::sAttrs");

	// RemoveActorEventInstance
	set_name(0x1397db4, "RTTI_RemoveActorEventInstance");
	apply_type(0x1397db4, "RTTICompound");
	del_items(0x139993c, DELIT_SIMPLE, 8);
	apply_type(0x139993c, "RTTIBase[1]");
	set_name(0x139993c, "RemoveActorEventInstance::sBases");

	// RemoveActorEventResource
	set_name(0x1397d60, "RTTI_RemoveActorEventResource");
	apply_type(0x1397d60, "RTTICompound");
	del_items(0x13998fc, DELIT_SIMPLE, 8);
	apply_type(0x13998fc, "RTTIBase[1]");
	set_name(0x13998fc, "RemoveActorEventResource::sBases");
	del_items(0x1399904, DELIT_SIMPLE, 56);
	apply_type(0x1399904, "RTTIAttr[2]");
	set_name(0x1399904, "RemoveActorEventResource::sAttrs");

	// RemoveEntitiesEventInstance
	set_name(0x1397e5c, "RTTI_RemoveEntitiesEventInstance");
	apply_type(0x1397e5c, "RTTICompound");
	del_items(0x13999a0, DELIT_SIMPLE, 8);
	apply_type(0x13999a0, "RTTIBase[1]");
	set_name(0x13999a0, "RemoveEntitiesEventInstance::sBases");

	// RemoveEntitiesEventResource
	set_name(0x1397e08, "RTTI_RemoveEntitiesEventResource");
	apply_type(0x1397e08, "RTTICompound");
	del_items(0x1399944, DELIT_SIMPLE, 8);
	apply_type(0x1399944, "RTTIBase[1]");
	set_name(0x1399944, "RemoveEntitiesEventResource::sBases");
	del_items(0x139994c, DELIT_SIMPLE, 84);
	apply_type(0x139994c, "RTTIAttr[3]");
	set_name(0x139994c, "RemoveEntitiesEventResource::sAttrs");

	// RemoveEntityFromWorldAction
	set_name(0x1376ae4, "RTTI_RemoveEntityFromWorldAction");
	apply_type(0x1376ae4, "RTTICompound");
	del_items(0x1378108, DELIT_SIMPLE, 8);
	apply_type(0x1378108, "RTTIBase[1]");
	set_name(0x1378108, "RemoveEntityFromWorldAction::sBases");

	// RenderEffectInstance
	set_name(0x134596c, "RTTI_RenderEffectInstance");
	apply_type(0x134596c, "RTTICompound");
	del_items(0x13463fc, DELIT_SIMPLE, 8);
	apply_type(0x13463fc, "RTTIBase[1]");
	set_name(0x13463fc, "RenderEffectInstance::sBases");
	del_items(0x1346404, DELIT_SIMPLE, 56);
	apply_type(0x1346404, "RTTIAttr[2]");
	set_name(0x1346404, "RenderEffectInstance::sAttrs");
	del_items(0x134643c, DELIT_SIMPLE, 24);
	apply_type(0x134643c, "RTTIMessageHandler[2]");
	set_name(0x134643c, "RenderEffectInstance::sMessageHandlers");

	// RenderEffectInstanceImp0
	set_name(0x13459c0, "RTTI_RenderEffectInstanceImp0");
	apply_type(0x13459c0, "RTTICompound");
	del_items(0x13464a8, DELIT_SIMPLE, 8);
	apply_type(0x13464a8, "RTTIBase[1]");
	set_name(0x13464a8, "RenderEffectInstanceImp0::sBases");

	// RenderEffectInstanceImp1
	set_name(0x1345a14, "RTTI_RenderEffectInstanceImp1");
	apply_type(0x1345a14, "RTTICompound");
	del_items(0x1346478, DELIT_SIMPLE, 8);
	apply_type(0x1346478, "RTTIBase[1]");
	set_name(0x1346478, "RenderEffectInstanceImp1::sBases");

	// RenderEffectInstanceImp2
	set_name(0x1345a68, "RTTI_RenderEffectInstanceImp2");
	apply_type(0x1345a68, "RTTICompound");
	del_items(0x1346480, DELIT_SIMPLE, 8);
	apply_type(0x1346480, "RTTIBase[1]");
	set_name(0x1346480, "RenderEffectInstanceImp2::sBases");

	// RenderEffectInstanceImp3
	set_name(0x1345abc, "RTTI_RenderEffectInstanceImp3");
	apply_type(0x1345abc, "RTTICompound");
	del_items(0x1346488, DELIT_SIMPLE, 8);
	apply_type(0x1346488, "RTTIBase[1]");
	set_name(0x1346488, "RenderEffectInstanceImp3::sBases");

	// RenderEffectInstanceImp4
	set_name(0x1345b10, "RTTI_RenderEffectInstanceImp4");
	apply_type(0x1345b10, "RTTICompound");
	del_items(0x1346490, DELIT_SIMPLE, 8);
	apply_type(0x1346490, "RTTIBase[1]");
	set_name(0x1346490, "RenderEffectInstanceImp4::sBases");

	// RenderEffectInstanceImp5
	set_name(0x1345b64, "RTTI_RenderEffectInstanceImp5");
	apply_type(0x1345b64, "RTTICompound");
	del_items(0x1346498, DELIT_SIMPLE, 8);
	apply_type(0x1346498, "RTTIBase[1]");
	set_name(0x1346498, "RenderEffectInstanceImp5::sBases");

	// RenderEffectInstanceImp6
	set_name(0x1345bb8, "RTTI_RenderEffectInstanceImp6");
	apply_type(0x1345bb8, "RTTICompound");
	del_items(0x13464a0, DELIT_SIMPLE, 8);
	apply_type(0x13464a0, "RTTIBase[1]");
	set_name(0x13464a0, "RenderEffectInstanceImp6::sBases");

	// RenderEffectResource
	set_name(0x1345918, "RTTI_RenderEffectResource");
	apply_type(0x1345918, "RTTICompound");
	del_items(0x13462d4, DELIT_SIMPLE, 8);
	apply_type(0x13462d4, "RTTIBase[1]");
	set_name(0x13462d4, "RenderEffectResource::sBases");
	del_items(0x13462dc, DELIT_SIMPLE, 252);
	apply_type(0x13462dc, "RTTIAttr[9]");
	set_name(0x13462dc, "RenderEffectResource::sAttrs");
	del_items(0x13463d8, DELIT_SIMPLE, 24);
	apply_type(0x13463d8, "RTTIMessageHandler[2]");
	set_name(0x13463d8, "RenderEffectResource::sMessageHandlers");

	// RenderEffectShaderOverrides
	set_name(0x1347a94, "RTTI_RenderEffectShaderOverrides");
	apply_type(0x1347a94, "RTTICompound");
	del_items(0x134986c, DELIT_SIMPLE, 84);
	apply_type(0x134986c, "RTTIAttr[3]");
	set_name(0x134986c, "RenderEffectShaderOverrides::sAttrs");

	// RenderPass
	set_name(0x1345c2c, "RTTI_RenderPass");
	apply_type(0x1345c2c, "RTTICompound");
	del_items(0x1345f38, DELIT_SIMPLE, 308);
	apply_type(0x1345f38, "RTTIAttr[11]");
	set_name(0x1345f38, "RenderPass::sAttrs");

	// RenderTechnique
	set_name(0x1345c98, "RTTI_RenderTechnique");
	apply_type(0x1345c98, "RTTICompound");
	del_items(0x13461f4, DELIT_SIMPLE, 224);
	apply_type(0x13461f4, "RTTIAttr[8]");
	set_name(0x13461f4, "RenderTechnique::sAttrs");

	// RenderZone
	set_name(0x1345cec, "RTTI_RenderZone");
	apply_type(0x1345cec, "RTTICompound");
	del_items(0x134746c, DELIT_SIMPLE, 8);
	apply_type(0x134746c, "RTTIBase[1]");
	set_name(0x134746c, "RenderZone::sBases");
	del_items(0x1347474, DELIT_SIMPLE, 420);
	apply_type(0x1347474, "RTTIAttr[15]");
	set_name(0x1347474, "RenderZone::sAttrs");

	// RenderZoneManager
	set_name(0x1345d40, "RTTI_RenderZoneManager");
	apply_type(0x1345d40, "RTTICompound");
	del_items(0x1347618, DELIT_SIMPLE, 8);
	apply_type(0x1347618, "RTTIBase[1]");
	set_name(0x1347618, "RenderZoneManager::sBases");

	// RenderingPrimitiveResource
	set_name(0x13457ec, "RTTI_RenderingPrimitiveResource");
	apply_type(0x13457ec, "RTTICompound");
	del_items(0x13465b4, DELIT_SIMPLE, 8);
	apply_type(0x13465b4, "RTTIBase[1]");
	set_name(0x13465b4, "RenderingPrimitiveResource::sBases");
	del_items(0x13465bc, DELIT_SIMPLE, 56);
	apply_type(0x13465bc, "RTTIAttr[2]");
	set_name(0x13465bc, "RenderingPrimitiveResource::sAttrs");

	// RepairSuspensionAction
	set_name(0x1376a3c, "RTTI_RepairSuspensionAction");
	apply_type(0x1376a3c, "RTTICompound");
	del_items(0x1378050, DELIT_SIMPLE, 8);
	apply_type(0x1378050, "RTTIBase[1]");
	set_name(0x1378050, "RepairSuspensionAction::sBases");
	del_items(0x1378058, DELIT_SIMPLE, 56);
	apply_type(0x1378058, "RTTIAttr[2]");
	set_name(0x1378058, "RepairSuspensionAction::sAttrs");

	// RepairWheelAction
	set_name(0x1376994, "RTTI_RepairWheelAction");
	apply_type(0x1376994, "RTTICompound");
	del_items(0x1377fd0, DELIT_SIMPLE, 8);
	apply_type(0x1377fd0, "RTTIBase[1]");
	set_name(0x1377fd0, "RepairWheelAction::sBases");
	del_items(0x1377fd8, DELIT_SIMPLE, 56);
	apply_type(0x1377fd8, "RTTIAttr[2]");
	set_name(0x1377fd8, "RepairWheelAction::sAttrs");

	// Resource
	set_name(0x13393f0, "RTTI_Resource");
	apply_type(0x13393f0, "RTTICompound");
	del_items(0x13394f8, DELIT_SIMPLE, 8);
	apply_type(0x13394f8, "RTTIBase[1]");
	set_name(0x13394f8, "Resource::sBases");
	del_items(0x1339500, DELIT_SIMPLE, 84);
	apply_type(0x1339500, "RTTIAttr[3]");
	set_name(0x1339500, "Resource::sAttrs");

	// RespawnEntity
	set_name(0x1378c50, "RTTI_RespawnEntity");
	apply_type(0x1378c50, "RTTICompound");
	del_items(0x137996c, DELIT_SIMPLE, 8);
	apply_type(0x137996c, "RTTIBase[1]");
	set_name(0x137996c, "RespawnEntity::sBases");
	del_items(0x1379974, DELIT_SIMPLE, 84);
	apply_type(0x1379974, "RTTIAttr[3]");
	set_name(0x1379974, "RespawnEntity::sAttrs");

	// RespawnEntityResource
	set_name(0x1378ca4, "RTTI_RespawnEntityResource");
	apply_type(0x1378ca4, "RTTICompound");
	del_items(0x13798a0, DELIT_SIMPLE, 8);
	apply_type(0x13798a0, "RTTIBase[1]");
	set_name(0x13798a0, "RespawnEntityResource::sBases");
	del_items(0x13798a8, DELIT_SIMPLE, 196);
	apply_type(0x13798a8, "RTTIAttr[7]");
	set_name(0x13798a8, "RespawnEntityResource::sAttrs");

	// RespawnEntityWithBoundingBox
	set_name(0x1378cf8, "RTTI_RespawnEntityWithBoundingBox");
	apply_type(0x1378cf8, "RTTICompound");
	del_items(0x13799c8, DELIT_SIMPLE, 8);
	apply_type(0x13799c8, "RTTIBase[1]");
	set_name(0x13799c8, "RespawnEntityWithBoundingBox::sBases");

	// RespawnEntityWithBoundingBoxResource
	set_name(0x1378d4c, "RTTI_RespawnEntityWithBoundingBoxResource");
	apply_type(0x1378d4c, "RTTICompound");
	del_items(0x13799d0, DELIT_SIMPLE, 8);
	apply_type(0x13799d0, "RTTIBase[1]");
	set_name(0x13799d0, "RespawnEntityWithBoundingBoxResource::sBases");
	del_items(0x13799d8, DELIT_SIMPLE, 56);
	apply_type(0x13799d8, "RTTIAttr[2]");
	set_name(0x13799d8, "RespawnEntityWithBoundingBoxResource::sAttrs");

	// ResponseCurve
	set_name(0x134be5c, "RTTI_ResponseCurve");
	apply_type(0x134be5c, "RTTICompound");
	del_items(0x134d440, DELIT_SIMPLE, 84);
	apply_type(0x134d440, "RTTIAttr[3]");
	set_name(0x134d440, "ResponseCurve::sAttrs");

	// ReverbEffect
	set_name(0x1359060, "RTTI_ReverbEffect");
	apply_type(0x1359060, "RTTICompound");

	// ReverbPresetResource
	set_name(0x1359124, "RTTI_ReverbPresetResource");
	apply_type(0x1359124, "RTTICompound");
	del_items(0x135b068, DELIT_SIMPLE, 8);
	apply_type(0x135b068, "RTTIBase[1]");
	set_name(0x135b068, "ReverbPresetResource::sBases");
	del_items(0x135b070, DELIT_SIMPLE, 392);
	apply_type(0x135b070, "RTTIAttr[14]");
	set_name(0x135b070, "ReverbPresetResource::sAttrs");

	// ReverbZone
	set_name(0x1358f38, "RTTI_ReverbZone");
	apply_type(0x1358f38, "RTTICompound");
	del_items(0x135bea8, DELIT_SIMPLE, 8);
	apply_type(0x135bea8, "RTTIBase[1]");
	set_name(0x135bea8, "ReverbZone::sBases");

	// ReviveAmmoSettings
	set_name(0x138e344, "RTTI_ReviveAmmoSettings");
	apply_type(0x138e344, "RTTICompound");
	del_items(0x1390fd8, DELIT_SIMPLE, 84);
	apply_type(0x1390fd8, "RTTIAttr[3]");
	set_name(0x1390fd8, "ReviveAmmoSettings::sAttrs");

	// RewardPickUp
	set_name(0x1393530, "RTTI_RewardPickUp");
	apply_type(0x1393530, "RTTICompound");
	del_items(0x1395464, DELIT_SIMPLE, 8);
	apply_type(0x1395464, "RTTIBase[1]");
	set_name(0x1395464, "RewardPickUp::sBases");
	del_items(0x139546c, DELIT_SIMPLE, 56);
	apply_type(0x139546c, "RTTIAttr[2]");
	set_name(0x139546c, "RewardPickUp::sAttrs");

	// RewardPickUpResource
	set_name(0x1393584, "RTTI_RewardPickUpResource");
	apply_type(0x1393584, "RTTICompound");
	del_items(0x13954b0, DELIT_SIMPLE, 8);
	apply_type(0x13954b0, "RTTIBase[1]");
	set_name(0x13954b0, "RewardPickUpResource::sBases");

	// RibbonListResource
	set_name(0x13b2bdc, "RTTI_RibbonListResource");
	apply_type(0x13b2bdc, "RTTICompound");
	del_items(0x13b391c, DELIT_SIMPLE, 8);
	apply_type(0x13b391c, "RTTIBase[1]");
	set_name(0x13b391c, "RibbonListResource::sBases");
	del_items(0x13b3924, DELIT_SIMPLE, 28);
	apply_type(0x13b3924, "RTTIAttr[1]");
	set_name(0x13b3924, "RibbonListResource::sAttrs");

	// RibbonResource
	set_name(0x13b2c30, "RTTI_RibbonResource");
	apply_type(0x13b2c30, "RTTICompound");
	del_items(0x13b3940, DELIT_SIMPLE, 8);
	apply_type(0x13b3940, "RTTIBase[1]");
	set_name(0x13b3940, "RibbonResource::sBases");
	del_items(0x13b3948, DELIT_SIMPLE, 112);
	apply_type(0x13b3948, "RTTIAttr[4]");
	set_name(0x13b3948, "RibbonResource::sAttrs");

	// Rocket
	set_name(0x13a0948, "RTTI_Rocket");
	apply_type(0x13a0948, "RTTICompound");
	del_items(0x13a1c24, DELIT_SIMPLE, 8);
	apply_type(0x13a1c24, "RTTIBase[1]");
	set_name(0x13a1c24, "Rocket::sBases");

	// RocketMover
	set_name(0x13a64c0, "RTTI_RocketMover");
	apply_type(0x13a64c0, "RTTICompound");
	del_items(0x13a7094, DELIT_SIMPLE, 8);
	apply_type(0x13a7094, "RTTIBase[1]");
	set_name(0x13a7094, "RocketMover::sBases");

	// RocketMoverResource
	set_name(0x13a6514, "RTTI_RocketMoverResource");
	apply_type(0x13a6514, "RTTICompound");
	del_items(0x13a6e5c, DELIT_SIMPLE, 8);
	apply_type(0x13a6e5c, "RTTIBase[1]");
	set_name(0x13a6e5c, "RocketMoverResource::sBases");
	del_items(0x13a6e64, DELIT_SIMPLE, 560);
	apply_type(0x13a6e64, "RTTIAttr[20]");
	set_name(0x13a6e64, "RocketMoverResource::sAttrs");

	// RocketPodMover
	set_name(0x13a5754, "RTTI_RocketPodMover");
	apply_type(0x13a5754, "RTTICompound");
	del_items(0x13a5cb0, DELIT_SIMPLE, 8);
	apply_type(0x13a5cb0, "RTTIBase[1]");
	set_name(0x13a5cb0, "RocketPodMover::sBases");

	// RocketPodMoverResource
	set_name(0x13a57a8, "RTTI_RocketPodMoverResource");
	apply_type(0x13a57a8, "RTTICompound");
	del_items(0x13a5cb8, DELIT_SIMPLE, 8);
	apply_type(0x13a5cb8, "RTTIBase[1]");
	set_name(0x13a5cb8, "RocketPodMoverResource::sBases");
	del_items(0x13a5cc0, DELIT_SIMPLE, 56);
	apply_type(0x13a5cc0, "RTTIAttr[2]");
	set_name(0x13a5cc0, "RocketPodMoverResource::sAttrs");

	// RocketRep
	set_name(0x13a099c, "RTTI_RocketRep");
	apply_type(0x13a099c, "RTTICompound");
	del_items(0x13a1c2c, DELIT_SIMPLE, 8);
	apply_type(0x13a1c2c, "RTTIBase[1]");
	set_name(0x13a1c2c, "RocketRep::sBases");

	// RocketResource
	set_name(0x13a09f0, "RTTI_RocketResource");
	apply_type(0x13a09f0, "RTTICompound");
	del_items(0x13a1b20, DELIT_SIMPLE, 8);
	apply_type(0x13a1b20, "RTTIBase[1]");
	set_name(0x13a1b20, "RocketResource::sBases");
	del_items(0x13a1b28, DELIT_SIMPLE, 252);
	apply_type(0x13a1b28, "RTTIAttr[9]");
	set_name(0x13a1b28, "RocketResource::sAttrs");

	// RotMatrix
	set_name(0x1335124, "RTTI_RotMatrix");
	apply_type(0x1335124, "RTTICompound");
	del_items(0x1335828, DELIT_SIMPLE, 84);
	apply_type(0x1335828, "RTTIAttr[3]");
	set_name(0x1335828, "RotMatrix::sAttrs");

	// RumbleEventInstance
	set_name(0x1394ef0, "RTTI_RumbleEventInstance");
	apply_type(0x1394ef0, "RTTICompound");
	del_items(0x1396a2c, DELIT_SIMPLE, 8);
	apply_type(0x1396a2c, "RTTIBase[1]");
	set_name(0x1396a2c, "RumbleEventInstance::sBases");

	// RumbleEventResource
	set_name(0x1394e9c, "RTTI_RumbleEventResource");
	apply_type(0x1394e9c, "RTTICompound");
	del_items(0x13969b4, DELIT_SIMPLE, 8);
	apply_type(0x13969b4, "RTTIBase[1]");
	set_name(0x13969b4, "RumbleEventResource::sBases");
	del_items(0x13969bc, DELIT_SIMPLE, 112);
	apply_type(0x13969bc, "RTTIAttr[4]");
	set_name(0x13969bc, "RumbleEventResource::sAttrs");

	// RumbleResource
	set_name(0x1339ea0, "RTTI_RumbleResource");
	apply_type(0x1339ea0, "RTTICompound");
	del_items(0x133aa70, DELIT_SIMPLE, 8);
	apply_type(0x133aa70, "RTTIBase[1]");
	set_name(0x133aa70, "RumbleResource::sBases");
	del_items(0x133aa78, DELIT_SIMPLE, 364);
	apply_type(0x133aa78, "RTTIAttr[13]");
	set_name(0x133aa78, "RumbleResource::sAttrs");
	del_items(0x133abe4, DELIT_SIMPLE, 12);
	apply_type(0x133abe4, "RTTIMessageHandler[1]");
	set_name(0x133abe4, "RumbleResource::sMessageHandlers");

	// SHVector4x9
	set_name(0x1335178, "RTTI_SHVector4x9");
	apply_type(0x1335178, "RTTICompound");
	del_items(0x13358a0, DELIT_SIMPLE, 252);
	apply_type(0x13358a0, "RTTIAttr[9]");
	set_name(0x13358a0, "SHVector4x9::sAttrs");

	// SHVectorFixedPoint
	set_name(0x134525c, "RTTI_SHVectorFixedPoint");
	apply_type(0x134525c, "RTTICompound");
	del_items(0x1346088, DELIT_SIMPLE, 112);
	apply_type(0x1346088, "RTTIAttr[4]");
	set_name(0x1346088, "SHVectorFixedPoint::sAttrs");

	// SKDTree
	set_name(0x132b1b4, "RTTI_SKDTree");
	apply_type(0x132b1b4, "RTTICompound");
	del_items(0x132b84c, DELIT_SIMPLE, 84);
	apply_type(0x132b84c, "RTTIAttr[3]");
	set_name(0x132b84c, "SKDTree::sAttrs");

	// SKDTreeNode
	set_name(0x132b160, "RTTI_SKDTreeNode");
	apply_type(0x132b160, "RTTICompound");
	del_items(0x132b7dc, DELIT_SIMPLE, 112);
	apply_type(0x132b7dc, "RTTIAttr[4]");
	set_name(0x132b7dc, "SKDTreeNode::sAttrs");

	// SKDTreeResource
	set_name(0x133b894, "RTTI_SKDTreeResource");
	apply_type(0x133b894, "RTTICompound");
	del_items(0x133bb84, DELIT_SIMPLE, 8);
	apply_type(0x133bb84, "RTTIBase[1]");
	set_name(0x133bb84, "SKDTreeResource::sBases");
	del_items(0x133bb8c, DELIT_SIMPLE, 56);
	apply_type(0x133bb8c, "RTTIAttr[2]");
	set_name(0x133bb8c, "SKDTreeResource::sAttrs");

	// SPoint3
	set_name(0x143b620, "RTTI_SPoint3");
	apply_type(0x143b620, "RTTICompound");
	del_items(0x133531c, DELIT_SIMPLE, 84);
	apply_type(0x133531c, "RTTIAttr[3]");
	set_name(0x133531c, "SPoint3::sAttrs");

	// SSAOSettingsResource
	set_name(0x13483f8, "RTTI_SSAOSettingsResource");
	apply_type(0x13483f8, "RTTICompound");
	del_items(0x1349288, DELIT_SIMPLE, 8);
	apply_type(0x1349288, "RTTIBase[1]");
	set_name(0x1349288, "SSAOSettingsResource::sBases");
	del_items(0x1349290, DELIT_SIMPLE, 56);
	apply_type(0x1349290, "RTTIAttr[2]");
	set_name(0x1349290, "SSAOSettingsResource::sAttrs");

	// SabotageComponent
	set_name(0x138e64c, "RTTI_SabotageComponent");
	apply_type(0x138e64c, "RTTICompound");
	del_items(0x1391838, DELIT_SIMPLE, 8);
	apply_type(0x1391838, "RTTIBase[1]");
	set_name(0x1391838, "SabotageComponent::sBases");

	// SabotageComponentRep
	set_name(0x138e6a0, "RTTI_SabotageComponentRep");
	apply_type(0x138e6a0, "RTTICompound");
	del_items(0x1391844, DELIT_SIMPLE, 8);
	apply_type(0x1391844, "RTTIBase[1]");
	set_name(0x1391844, "SabotageComponentRep::sBases");

	// SabotageComponentResource
	set_name(0x138e794, "RTTI_SabotageComponentResource");
	apply_type(0x138e794, "RTTICompound");
	del_items(0x13917f4, DELIT_SIMPLE, 8);
	apply_type(0x13917f4, "RTTIBase[1]");
	set_name(0x13917f4, "SabotageComponentResource::sBases");
	del_items(0x13917fc, DELIT_SIMPLE, 56);
	apply_type(0x13917fc, "RTTIAttr[2]");
	set_name(0x13917fc, "SabotageComponentResource::sAttrs");

	// Saw
	set_name(0x139cbfc, "RTTI_Saw");
	apply_type(0x139cbfc, "RTTICompound");
	del_items(0x139d5a8, DELIT_SIMPLE, 8);
	apply_type(0x139d5a8, "RTTIBase[1]");
	set_name(0x139d5a8, "Saw::sBases");

	// SawRep
	set_name(0x139cc50, "RTTI_SawRep");
	apply_type(0x139cc50, "RTTICompound");
	del_items(0x139e78c, DELIT_SIMPLE, 8);
	apply_type(0x139e78c, "RTTIBase[1]");
	set_name(0x139e78c, "SawRep::sBases");

	// SawResource
	set_name(0x139cca4, "RTTI_SawResource");
	apply_type(0x139cca4, "RTTICompound");
	del_items(0x139d3dc, DELIT_SIMPLE, 8);
	apply_type(0x139d3dc, "RTTIBase[1]");
	set_name(0x139d3dc, "SawResource::sBases");
	del_items(0x139d3e4, DELIT_SIMPLE, 448);
	apply_type(0x139d3e4, "RTTIAttr[16]");
	set_name(0x139d3e4, "SawResource::sAttrs");

	// ScaleableTimedEventResource
	set_name(0x1397eb0, "RTTI_ScaleableTimedEventResource");
	apply_type(0x1397eb0, "RTTICompound");
	del_items(0x1398a94, DELIT_SIMPLE, 8);
	apply_type(0x1398a94, "RTTIBase[1]");
	set_name(0x1398a94, "ScaleableTimedEventResource::sBases");
	del_items(0x1398a9c, DELIT_SIMPLE, 84);
	apply_type(0x1398a9c, "RTTIAttr[3]");
	set_name(0x1398a9c, "ScaleableTimedEventResource::sAttrs");

	// ScenarioMissionListResource
	set_name(0x13a3844, "RTTI_ScenarioMissionListResource");
	apply_type(0x13a3844, "RTTICompound");
	del_items(0x13a4e28, DELIT_SIMPLE, 8);
	apply_type(0x13a4e28, "RTTIBase[1]");
	set_name(0x13a4e28, "ScenarioMissionListResource::sBases");
	del_items(0x13a4e30, DELIT_SIMPLE, 28);
	apply_type(0x13a4e30, "RTTIAttr[1]");
	set_name(0x13a4e30, "ScenarioMissionListResource::sAttrs");

	// ScoreCounterTag
	set_name(0x13ba464, "RTTI_ScoreCounterTag");
	apply_type(0x13ba464, "RTTICompound");
	del_items(0x13bc174, DELIT_SIMPLE, 8);
	apply_type(0x13bc174, "RTTIBase[1]");
	set_name(0x13bc174, "ScoreCounterTag::sBases");

	// ScoreCounterWidget
	set_name(0x13ba5b4, "RTTI_ScoreCounterWidget");
	apply_type(0x13ba5b4, "RTTICompound");
	del_items(0x13bc368, DELIT_SIMPLE, 8);
	apply_type(0x13bc368, "RTTIBase[1]");
	set_name(0x13bc368, "ScoreCounterWidget::sBases");

	// ScoreCounterWidgetResource
	set_name(0x13ba608, "RTTI_ScoreCounterWidgetResource");
	apply_type(0x13ba608, "RTTICompound");
	del_items(0x13bc370, DELIT_SIMPLE, 8);
	apply_type(0x13bc370, "RTTIBase[1]");
	set_name(0x13bc370, "ScoreCounterWidgetResource::sBases");
	del_items(0x13bc378, DELIT_SIMPLE, 84);
	apply_type(0x13bc378, "RTTIAttr[3]");
	set_name(0x13bc378, "ScoreCounterWidgetResource::sAttrs");

	// ScoreProcessor
	set_name(0x136d7cc, "RTTI_ScoreProcessor");
	apply_type(0x136d7cc, "RTTICompound");
	del_items(0x136f260, DELIT_SIMPLE, 8);
	apply_type(0x136f260, "RTTIBase[1]");
	set_name(0x136f260, "ScoreProcessor::sBases");
	del_items(0x136f268, DELIT_SIMPLE, 24);
	apply_type(0x136f268, "RTTIFunction[1]");
	set_name(0x136f268, "ScoreProcessor::sFunctions");

	// ScoreProcessorResource
	set_name(0x136d820, "RTTI_ScoreProcessorResource");
	apply_type(0x136d820, "RTTICompound");
	del_items(0x136f310, DELIT_SIMPLE, 8);
	apply_type(0x136f310, "RTTIBase[1]");
	set_name(0x136f310, "ScoreProcessorResource::sBases");
	del_items(0x136f318, DELIT_SIMPLE, 56);
	apply_type(0x136f318, "RTTIAttr[2]");
	set_name(0x136f318, "ScoreProcessorResource::sAttrs");

	// ScoreStatRequirement
	set_name(0x136d178, "RTTI_ScoreStatRequirement");
	apply_type(0x136d178, "RTTICompound");
	del_items(0x1370920, DELIT_SIMPLE, 168);
	apply_type(0x1370920, "RTTIAttr[6]");
	set_name(0x1370920, "ScoreStatRequirement::sAttrs");

	// ScoringResource
	set_name(0x136d558, "RTTI_ScoringResource");
	apply_type(0x136d558, "RTTICompound");
	del_items(0x1370bfc, DELIT_SIMPLE, 8);
	apply_type(0x1370bfc, "RTTIBase[1]");
	set_name(0x1370bfc, "ScoringResource::sBases");
	del_items(0x1370c04, DELIT_SIMPLE, 1624);
	apply_type(0x1370c04, "RTTIAttr[58]");
	set_name(0x1370c04, "ScoringResource::sAttrs");

	// ScreenEffectEventInstance
	set_name(0x1397f58, "RTTI_ScreenEffectEventInstance");
	apply_type(0x1397f58, "RTTICompound");
	del_items(0x1399a3c, DELIT_SIMPLE, 8);
	apply_type(0x1399a3c, "RTTIBase[1]");
	set_name(0x1399a3c, "ScreenEffectEventInstance::sBases");

	// ScreenEffectEventResource
	set_name(0x1397f04, "RTTI_ScreenEffectEventResource");
	apply_type(0x1397f04, "RTTICompound");
	del_items(0x13999a8, DELIT_SIMPLE, 8);
	apply_type(0x13999a8, "RTTIBase[1]");
	set_name(0x13999a8, "ScreenEffectEventResource::sBases");
	del_items(0x13999b0, DELIT_SIMPLE, 140);
	apply_type(0x13999b0, "RTTIAttr[5]");
	set_name(0x13999b0, "ScreenEffectEventResource::sAttrs");

	// ScreenEffectResource
	set_name(0x13ab9c4, "RTTI_ScreenEffectResource");
	apply_type(0x13ab9c4, "RTTICompound");
	del_items(0x13abf04, DELIT_SIMPLE, 8);
	apply_type(0x13abf04, "RTTIBase[1]");
	set_name(0x13abf04, "ScreenEffectResource::sBases");
	del_items(0x13abf0c, DELIT_SIMPLE, 84);
	apply_type(0x13abf0c, "RTTIAttr[3]");
	set_name(0x13abf0c, "ScreenEffectResource::sAttrs");

	// ScriptCountdownTimer
	set_name(0x134a7f0, "RTTI_ScriptCountdownTimer");
	apply_type(0x134a7f0, "RTTICompound");
	del_items(0x134aa08, DELIT_SIMPLE, 16);
	apply_type(0x134aa08, "RTTIBase[2]");
	set_name(0x134aa08, "ScriptCountdownTimer::sBases");
	del_items(0x134aa18, DELIT_SIMPLE, 84);
	apply_type(0x134aa18, "RTTIAttr[3]");
	set_name(0x134aa18, "ScriptCountdownTimer::sAttrs");
	del_items(0x134aa6c, DELIT_SIMPLE, 240);
	apply_type(0x134aa6c, "RTTIFunction[10]");
	set_name(0x134aa6c, "ScriptCountdownTimer::sFunctions");

	// ScriptCountdownTimerGame
	set_name(0x13b3874, "RTTI_ScriptCountdownTimerGame");
	apply_type(0x13b3874, "RTTICompound");
	del_items(0x13b5774, DELIT_SIMPLE, 8);
	apply_type(0x13b5774, "RTTIBase[1]");
	set_name(0x13b5774, "ScriptCountdownTimerGame::sBases");
	del_items(0x13b577c, DELIT_SIMPLE, 48);
	apply_type(0x13b577c, "RTTIFunction[2]");
	set_name(0x13b577c, "ScriptCountdownTimerGame::sFunctions");

	// ScriptFunctionAction
	set_name(0x1376150, "RTTI_ScriptFunctionAction");
	apply_type(0x1376150, "RTTICompound");
	del_items(0x13774f8, DELIT_SIMPLE, 8);
	apply_type(0x13774f8, "RTTIBase[1]");
	set_name(0x13774f8, "ScriptFunctionAction::sBases");
	del_items(0x1377500, DELIT_SIMPLE, 56);
	apply_type(0x1377500, "RTTIAttr[2]");
	set_name(0x1377500, "ScriptFunctionAction::sAttrs");

	// ScriptInterface
	set_name(0x13b38c8, "RTTI_ScriptInterface");
	apply_type(0x13b38c8, "RTTICompound");
	del_items(0x13b57ac, DELIT_SIMPLE, 8);
	apply_type(0x13b57ac, "RTTIBase[1]");
	set_name(0x13b57ac, "ScriptInterface::sBases");

	// ScriptMessage
	set_name(0x134a844, "RTTI_ScriptMessage");
	apply_type(0x134a844, "RTTICompound");
	del_items(0x134ab5c, DELIT_SIMPLE, 8);
	apply_type(0x134ab5c, "RTTIBase[1]");
	set_name(0x134ab5c, "ScriptMessage::sBases");
	del_items(0x134ab64, DELIT_SIMPLE, 192);
	apply_type(0x134ab64, "RTTIFunction[8]");
	set_name(0x134ab64, "ScriptMessage::sFunctions");

	// ScriptMessageAction
	set_name(0x1376d30, "RTTI_ScriptMessageAction");
	apply_type(0x1376d30, "RTTICompound");
	del_items(0x137831c, DELIT_SIMPLE, 8);
	apply_type(0x137831c, "RTTIBase[1]");
	set_name(0x137831c, "ScriptMessageAction::sBases");
	del_items(0x1378324, DELIT_SIMPLE, 56);
	apply_type(0x1378324, "RTTIAttr[2]");
	set_name(0x1378324, "ScriptMessageAction::sAttrs");

	// ScriptMessageQueue
	set_name(0x134a8ec, "RTTI_ScriptMessageQueue");
	apply_type(0x134a8ec, "RTTICompound");
	del_items(0x134ac2c, DELIT_SIMPLE, 8);
	apply_type(0x134ac2c, "RTTIBase[1]");
	set_name(0x134ac2c, "ScriptMessageQueue::sBases");
	del_items(0x134ac34, DELIT_SIMPLE, 96);
	apply_type(0x134ac34, "RTTIFunction[4]");
	set_name(0x134ac34, "ScriptMessageQueue::sFunctions");
	del_items(0x134ac94, DELIT_SIMPLE, 12);
	apply_type(0x134ac94, "RTTIMessageHandler[1]");
	set_name(0x134ac94, "ScriptMessageQueue::sMessageHandlers");

	// ScriptNodeManager
	set_name(0x134a940, "RTTI_ScriptNodeManager");
	apply_type(0x134a940, "RTTICompound");
	del_items(0x134aca0, DELIT_SIMPLE, 8);
	apply_type(0x134aca0, "RTTIBase[1]");
	set_name(0x134aca0, "ScriptNodeManager::sBases");
	del_items(0x134aca8, DELIT_SIMPLE, 144);
	apply_type(0x134aca8, "RTTIFunction[6]");
	set_name(0x134aca8, "ScriptNodeManager::sFunctions");

	// ScriptPauseEventInstance
	set_name(0x1398000, "RTTI_ScriptPauseEventInstance");
	apply_type(0x1398000, "RTTICompound");
	del_items(0x1399a84, DELIT_SIMPLE, 8);
	apply_type(0x1399a84, "RTTIBase[1]");
	set_name(0x1399a84, "ScriptPauseEventInstance::sBases");

	// ScriptPauseEventResource
	set_name(0x1397fac, "RTTI_ScriptPauseEventResource");
	apply_type(0x1397fac, "RTTICompound");
	del_items(0x1399a44, DELIT_SIMPLE, 8);
	apply_type(0x1399a44, "RTTIBase[1]");
	set_name(0x1399a44, "ScriptPauseEventResource::sBases");
	del_items(0x1399a4c, DELIT_SIMPLE, 56);
	apply_type(0x1399a4c, "RTTIAttr[2]");
	set_name(0x1399a4c, "ScriptPauseEventResource::sAttrs");

	// ScriptPropertyAction
	set_name(0x13761a4, "RTTI_ScriptPropertyAction");
	apply_type(0x13761a4, "RTTICompound");
	del_items(0x1377538, DELIT_SIMPLE, 8);
	apply_type(0x1377538, "RTTIBase[1]");
	set_name(0x1377538, "ScriptPropertyAction::sBases");
	del_items(0x1377540, DELIT_SIMPLE, 84);
	apply_type(0x1377540, "RTTIAttr[3]");
	set_name(0x1377540, "ScriptPropertyAction::sAttrs");

	// ScriptPropertyComponent
	set_name(0x138a2a8, "RTTI_ScriptPropertyComponent");
	apply_type(0x138a2a8, "RTTICompound");
	del_items(0x138cb68, DELIT_SIMPLE, 8);
	apply_type(0x138cb68, "RTTIBase[1]");
	set_name(0x138cb68, "ScriptPropertyComponent::sBases");

	// ScriptSound
	set_name(0x1359750, "RTTI_ScriptSound");
	apply_type(0x1359750, "RTTICompound");
	del_items(0x135b1f8, DELIT_SIMPLE, 16);
	apply_type(0x135b1f8, "RTTIBase[2]");
	set_name(0x135b1f8, "ScriptSound::sBases");
	del_items(0x135b208, DELIT_SIMPLE, 48);
	apply_type(0x135b208, "RTTIFunction[2]");
	set_name(0x135b208, "ScriptSound::sFunctions");

	// ScriptTag
	set_name(0x133cbb0, "RTTI_ScriptTag");
	apply_type(0x133cbb0, "RTTICompound");
	del_items(0x133f564, DELIT_SIMPLE, 8);
	apply_type(0x133f564, "RTTIBase[1]");
	set_name(0x133f564, "ScriptTag::sBases");

	// ScriptedPickUpResource
	set_name(0x13935d8, "RTTI_ScriptedPickUpResource");
	apply_type(0x13935d8, "RTTICompound");
	del_items(0x13954c4, DELIT_SIMPLE, 8);
	apply_type(0x13954c4, "RTTIBase[1]");
	set_name(0x13954c4, "ScriptedPickUpResource::sBases");

	// ScriptedSoundInstance
	set_name(0x135926c, "RTTI_ScriptedSoundInstance");
	apply_type(0x135926c, "RTTICompound");
	del_items(0x135af20, DELIT_SIMPLE, 8);
	apply_type(0x135af20, "RTTIBase[1]");
	set_name(0x135af20, "ScriptedSoundInstance::sBases");

	// ScriptedSoundResource
	set_name(0x13591c8, "RTTI_ScriptedSoundResource");
	apply_type(0x13591c8, "RTTICompound");
	del_items(0x135a490, DELIT_SIMPLE, 8);
	apply_type(0x135a490, "RTTIBase[1]");
	set_name(0x135a490, "ScriptedSoundResource::sBases");
	del_items(0x135a498, DELIT_SIMPLE, 56);
	apply_type(0x135a498, "RTTIAttr[2]");
	set_name(0x135a498, "ScriptedSoundResource::sAttrs");
	del_items(0x135a4d0, DELIT_SIMPLE, 12);
	apply_type(0x135a4d0, "RTTIMessageHandler[1]");
	set_name(0x135a4d0, "ScriptedSoundResource::sMessageHandlers");

	// ScriptedWeapon
	set_name(0x13a0b50, "RTTI_ScriptedWeapon");
	apply_type(0x13a0b50, "RTTICompound");
	del_items(0x13a2080, DELIT_SIMPLE, 8);
	apply_type(0x13a2080, "RTTIBase[1]");
	set_name(0x13a2080, "ScriptedWeapon::sBases");

	// ScriptedWeaponResource
	set_name(0x13a0bb4, "RTTI_ScriptedWeaponResource");
	apply_type(0x13a0bb4, "RTTICompound");
	del_items(0x13a2094, DELIT_SIMPLE, 8);
	apply_type(0x13a2094, "RTTIBase[1]");
	set_name(0x13a2094, "ScriptedWeaponResource::sBases");
	del_items(0x13a209c, DELIT_SIMPLE, 56);
	apply_type(0x13a209c, "RTTIAttr[2]");
	set_name(0x13a209c, "ScriptedWeaponResource::sAttrs");

	// ScrollbarWidget
	set_name(0x133dbf4, "RTTI_ScrollbarWidget");
	apply_type(0x133dbf4, "RTTICompound");
	del_items(0x133fb44, DELIT_SIMPLE, 8);
	apply_type(0x133fb44, "RTTIBase[1]");
	set_name(0x133fb44, "ScrollbarWidget::sBases");

	// ScrollingPanelTag
	set_name(0x133d174, "RTTI_ScrollingPanelTag");
	apply_type(0x133d174, "RTTICompound");
	del_items(0x133f2b0, DELIT_SIMPLE, 8);
	apply_type(0x133f2b0, "RTTIBase[1]");
	set_name(0x133f2b0, "ScrollingPanelTag::sBases");

	// ScrollingPanelWidget
	set_name(0x133daf8, "RTTI_ScrollingPanelWidget");
	apply_type(0x133daf8, "RTTICompound");
	del_items(0x133fcb8, DELIT_SIMPLE, 8);
	apply_type(0x133fcb8, "RTTIBase[1]");
	set_name(0x133fcb8, "ScrollingPanelWidget::sBases");

	// SearchAndRetrieveBase
	set_name(0x1391b70, "RTTI_SearchAndRetrieveBase");
	apply_type(0x1391b70, "RTTICompound");
	del_items(0x1392b1c, DELIT_SIMPLE, 8);
	apply_type(0x1392b1c, "RTTIBase[1]");
	set_name(0x1392b1c, "SearchAndRetrieveBase::sBases");

	// SearchAndRetrieveBaseRep
	set_name(0x1391bc4, "RTTI_SearchAndRetrieveBaseRep");
	apply_type(0x1391bc4, "RTTICompound");
	del_items(0x1392b24, DELIT_SIMPLE, 8);
	apply_type(0x1392b24, "RTTIBase[1]");
	set_name(0x1392b24, "SearchAndRetrieveBaseRep::sBases");

	// SearchAndRetrieveBaseResource
	set_name(0x1391c18, "RTTI_SearchAndRetrieveBaseResource");
	apply_type(0x1391c18, "RTTICompound");
	del_items(0x1392a44, DELIT_SIMPLE, 8);
	apply_type(0x1392a44, "RTTIBase[1]");
	set_name(0x1392a44, "SearchAndRetrieveBaseResource::sBases");
	del_items(0x1392a4c, DELIT_SIMPLE, 196);
	apply_type(0x1392a4c, "RTTIAttr[7]");
	set_name(0x1392a4c, "SearchAndRetrieveBaseResource::sAttrs");
	del_items(0x1392b10, DELIT_SIMPLE, 12);
	apply_type(0x1392b10, "RTTIMessageHandler[1]");
	set_name(0x1392b10, "SearchAndRetrieveBaseResource::sMessageHandlers");

	// SearchAndRetrieveObject
	set_name(0x1391c6c, "RTTI_SearchAndRetrieveObject");
	apply_type(0x1391c6c, "RTTICompound");
	del_items(0x13927d0, DELIT_SIMPLE, 8);
	apply_type(0x13927d0, "RTTIBase[1]");
	set_name(0x13927d0, "SearchAndRetrieveObject::sBases");

	// SearchAndRetrieveObjectRep
	set_name(0x1391cc0, "RTTI_SearchAndRetrieveObjectRep");
	apply_type(0x1391cc0, "RTTICompound");
	del_items(0x1392b2c, DELIT_SIMPLE, 8);
	apply_type(0x1392b2c, "RTTIBase[1]");
	set_name(0x1392b2c, "SearchAndRetrieveObjectRep::sBases");

	// SearchAndRetrieveObjectResource
	set_name(0x1391d24, "RTTI_SearchAndRetrieveObjectResource");
	apply_type(0x1391d24, "RTTICompound");
	del_items(0x13926b4, DELIT_SIMPLE, 8);
	apply_type(0x13926b4, "RTTIBase[1]");
	set_name(0x13926b4, "SearchAndRetrieveObjectResource::sBases");
	del_items(0x13926bc, DELIT_SIMPLE, 252);
	apply_type(0x13926bc, "RTTIAttr[9]");
	set_name(0x13926bc, "SearchAndRetrieveObjectResource::sAttrs");
	del_items(0x13927b8, DELIT_SIMPLE, 24);
	apply_type(0x13927b8, "RTTIMessageHandler[2]");
	set_name(0x13927b8, "SearchAndRetrieveObjectResource::sMessageHandlers");

	// SectionAssetInfo
	set_name(0x136c978, "RTTI_SectionAssetInfo");
	apply_type(0x136c978, "RTTICompound");
	del_items(0x136dc54, DELIT_SIMPLE, 84);
	apply_type(0x136dc54, "RTTIAttr[3]");
	set_name(0x136dc54, "SectionAssetInfo::sAttrs");

	// SelectItemTag
	set_name(0x133d270, "RTTI_SelectItemTag");
	apply_type(0x133d270, "RTTICompound");
	del_items(0x133f50c, DELIT_SIMPLE, 8);
	apply_type(0x133f50c, "RTTIBase[1]");
	set_name(0x133f50c, "SelectItemTag::sBases");

	// SelectTag
	set_name(0x133d2c4, "RTTI_SelectTag");
	apply_type(0x133d2c4, "RTTICompound");
	del_items(0x133f474, DELIT_SIMPLE, 8);
	apply_type(0x133f474, "RTTIBase[1]");
	set_name(0x133f474, "SelectTag::sBases");
	del_items(0x133f47c, DELIT_SIMPLE, 144);
	apply_type(0x133f47c, "RTTIFunction[6]");
	set_name(0x133f47c, "SelectTag::sFunctions");

	// SelectWidget
	set_name(0x133dc48, "RTTI_SelectWidget");
	apply_type(0x133dc48, "RTTICompound");
	del_items(0x133f7d8, DELIT_SIMPLE, 8);
	apply_type(0x133f7d8, "RTTIBase[1]");
	set_name(0x133f7d8, "SelectWidget::sBases");

	// SendMessageToScriptEventInstance
	set_name(0x13980a8, "RTTI_SendMessageToScriptEventInstance");
	apply_type(0x13980a8, "RTTICompound");
	del_items(0x1399acc, DELIT_SIMPLE, 8);
	apply_type(0x1399acc, "RTTIBase[1]");
	set_name(0x1399acc, "SendMessageToScriptEventInstance::sBases");

	// SendMessageToScriptEventResource
	set_name(0x1398054, "RTTI_SendMessageToScriptEventResource");
	apply_type(0x1398054, "RTTICompound");
	del_items(0x1399a8c, DELIT_SIMPLE, 8);
	apply_type(0x1399a8c, "RTTIBase[1]");
	set_name(0x1399a8c, "SendMessageToScriptEventResource::sBases");
	del_items(0x1399a94, DELIT_SIMPLE, 56);
	apply_type(0x1399a94, "RTTIAttr[2]");
	set_name(0x1399a94, "SendMessageToScriptEventResource::sAttrs");

	// SentenceGroup
	set_name(0x13bc6c0, "RTTI_SentenceGroup");
	apply_type(0x13bc6c0, "RTTICompound");
	del_items(0x13bcad8, DELIT_SIMPLE, 8);
	apply_type(0x13bcad8, "RTTIBase[1]");
	set_name(0x13bcad8, "SentenceGroup::sBases");
	del_items(0x13bcae0, DELIT_SIMPLE, 112);
	apply_type(0x13bcae0, "RTTIAttr[4]");
	set_name(0x13bcae0, "SentenceGroup::sAttrs");
	del_items(0x13bcb50, DELIT_SIMPLE, 96);
	apply_type(0x13bcb50, "RTTIFunction[4]");
	set_name(0x13bcb50, "SentenceGroup::sFunctions");

	// SentryBot
	set_name(0x137fac0, "RTTI_SentryBot");
	apply_type(0x137fac0, "RTTICompound");
	del_items(0x13810ec, DELIT_SIMPLE, 8);
	apply_type(0x13810ec, "RTTIBase[1]");
	set_name(0x13810ec, "SentryBot::sBases");

	// SentryBotAiController
	set_name(0x137fb14, "RTTI_SentryBotAiController");
	apply_type(0x137fb14, "RTTICompound");
	del_items(0x13810fc, DELIT_SIMPLE, 8);
	apply_type(0x13810fc, "RTTIBase[1]");
	set_name(0x13810fc, "SentryBotAiController::sBases");

	// SentryBotController
	set_name(0x137fb68, "RTTI_SentryBotController");
	apply_type(0x137fb68, "RTTICompound");
	del_items(0x13810f4, DELIT_SIMPLE, 8);
	apply_type(0x13810f4, "RTTIBase[1]");
	set_name(0x13810f4, "SentryBotController::sBases");

	// SentryBotResource
	set_name(0x137fbcc, "RTTI_SentryBotResource");
	apply_type(0x137fbcc, "RTTICompound");
	del_items(0x1380b7c, DELIT_SIMPLE, 8);
	apply_type(0x1380b7c, "RTTIBase[1]");
	set_name(0x1380b7c, "SentryBotResource::sBases");
	del_items(0x1380b84, DELIT_SIMPLE, 1372);
	apply_type(0x1380b84, "RTTIAttr[49]");
	set_name(0x1380b84, "SentryBotResource::sAttrs");
	del_items(0x13810e0, DELIT_SIMPLE, 12);
	apply_type(0x13810e0, "RTTIMessageHandler[1]");
	set_name(0x13810e0, "SentryBotResource::sMessageHandlers");

	// SentryBotSetting
	set_name(0x1391f2c, "RTTI_SentryBotSetting");
	apply_type(0x1391f2c, "RTTICompound");
	del_items(0x1392c30, DELIT_SIMPLE, 56);
	apply_type(0x1392c30, "RTTIAttr[2]");
	set_name(0x1392c30, "SentryBotSetting::sAttrs");

	// Sequence
	set_name(0x139af50, "RTTI_Sequence");
	apply_type(0x139af50, "RTTICompound");
	del_items(0x139b678, DELIT_SIMPLE, 8);
	apply_type(0x139b678, "RTTIBase[1]");
	set_name(0x139b678, "Sequence::sBases");
	del_items(0x139b680, DELIT_SIMPLE, 168);
	apply_type(0x139b680, "RTTIFunction[7]");
	set_name(0x139b680, "Sequence::sFunctions");

	// SequenceCameraEntity
	set_name(0x139b05c, "RTTI_SequenceCameraEntity");
	apply_type(0x139b05c, "RTTICompound");
	del_items(0x139bfc8, DELIT_SIMPLE, 8);
	apply_type(0x139bfc8, "RTTIBase[1]");
	set_name(0x139bfc8, "SequenceCameraEntity::sBases");

	// SequenceCameraEntityRep
	set_name(0x139b0b0, "RTTI_SequenceCameraEntityRep");
	apply_type(0x139b0b0, "RTTICompound");
	del_items(0x139bfd0, DELIT_SIMPLE, 8);
	apply_type(0x139bfd0, "RTTIBase[1]");
	set_name(0x139bfd0, "SequenceCameraEntityRep::sBases");

	// SequenceCameraEntityResource
	set_name(0x139b104, "RTTI_SequenceCameraEntityResource");
	apply_type(0x139b104, "RTTICompound");
	del_items(0x139befc, DELIT_SIMPLE, 8);
	apply_type(0x139befc, "RTTIBase[1]");
	set_name(0x139befc, "SequenceCameraEntityResource::sBases");
	del_items(0x139bf04, DELIT_SIMPLE, 196);
	apply_type(0x139bf04, "RTTIAttr[7]");
	set_name(0x139bf04, "SequenceCameraEntityResource::sAttrs");

	// SequenceInfoMission
	set_name(0x139b1ac, "RTTI_SequenceInfoMission");
	apply_type(0x139b1ac, "RTTICompound");
	del_items(0x139c054, DELIT_SIMPLE, 8);
	apply_type(0x139c054, "RTTIBase[1]");
	set_name(0x139c054, "SequenceInfoMission::sBases");
	del_items(0x139c05c, DELIT_SIMPLE, 96);
	apply_type(0x139c05c, "RTTIFunction[4]");
	set_name(0x139c05c, "SequenceInfoMission::sFunctions");

	// SequenceInfoPlayer
	set_name(0x139b200, "RTTI_SequenceInfoPlayer");
	apply_type(0x139b200, "RTTICompound");
	del_items(0x139bfec, DELIT_SIMPLE, 8);
	apply_type(0x139bfec, "RTTIBase[1]");
	set_name(0x139bfec, "SequenceInfoPlayer::sBases");
	del_items(0x139bff4, DELIT_SIMPLE, 96);
	apply_type(0x139bff4, "RTTIFunction[4]");
	set_name(0x139bff4, "SequenceInfoPlayer::sFunctions");

	// SequenceRep
	set_name(0x139afa4, "RTTI_SequenceRep");
	apply_type(0x139afa4, "RTTICompound");
	del_items(0x139b728, DELIT_SIMPLE, 8);
	apply_type(0x139b728, "RTTIBase[1]");
	set_name(0x139b728, "SequenceRep::sBases");

	// SequenceResource
	set_name(0x139b008, "RTTI_SequenceResource");
	apply_type(0x139b008, "RTTICompound");
	del_items(0x139b444, DELIT_SIMPLE, 8);
	apply_type(0x139b444, "RTTIBase[1]");
	set_name(0x139b444, "SequenceResource::sBases");
	del_items(0x139b44c, DELIT_SIMPLE, 448);
	apply_type(0x139b44c, "RTTIAttr[16]");
	set_name(0x139b44c, "SequenceResource::sAttrs");

	// SequentialAnimationInfo
	set_name(0x1355d4c, "RTTI_SequentialAnimationInfo");
	apply_type(0x1355d4c, "RTTICompound");
	del_items(0x1357e3c, DELIT_SIMPLE, 84);
	apply_type(0x1357e3c, "RTTIAttr[3]");
	set_name(0x1357e3c, "SequentialAnimationInfo::sAttrs");

	// SequentialSkeletonAnimationResource
	set_name(0x1355940, "RTTI_SequentialSkeletonAnimationResource");
	apply_type(0x1355940, "RTTICompound");
	del_items(0x1357e90, DELIT_SIMPLE, 8);
	apply_type(0x1357e90, "RTTIBase[1]");
	set_name(0x1357e90, "SequentialSkeletonAnimationResource::sBases");
	del_items(0x1357e98, DELIT_SIMPLE, 112);
	apply_type(0x1357e98, "RTTIAttr[4]");
	set_name(0x1357e98, "SequentialSkeletonAnimationResource::sAttrs");
	del_items(0x1357f08, DELIT_SIMPLE, 12);
	apply_type(0x1357f08, "RTTIMessageHandler[1]");
	set_name(0x1357f08, "SequentialSkeletonAnimationResource::sMessageHandlers");

	// SetAnimationVariableAction
	set_name(0x135e480, "RTTI_SetAnimationVariableAction");
	apply_type(0x135e480, "RTTICompound");
	del_items(0x1361488, DELIT_SIMPLE, 8);
	apply_type(0x1361488, "RTTIBase[1]");
	set_name(0x1361488, "SetAnimationVariableAction::sBases");
	del_items(0x1361490, DELIT_SIMPLE, 140);
	apply_type(0x1361490, "RTTIAttr[5]");
	set_name(0x1361490, "SetAnimationVariableAction::sAttrs");

	// SetLightIntensityAction
	set_name(0x1376c88, "RTTI_SetLightIntensityAction");
	apply_type(0x1376c88, "RTTICompound");
	del_items(0x1378264, DELIT_SIMPLE, 8);
	apply_type(0x1378264, "RTTIBase[1]");
	set_name(0x1378264, "SetLightIntensityAction::sBases");
	del_items(0x137826c, DELIT_SIMPLE, 112);
	apply_type(0x137826c, "RTTIAttr[4]");
	set_name(0x137826c, "SetLightIntensityAction::sAttrs");

	// SetMoverAction
	set_name(0x1376348, "RTTI_SetMoverAction");
	apply_type(0x1376348, "RTTICompound");
	del_items(0x137765c, DELIT_SIMPLE, 8);
	apply_type(0x137765c, "RTTIBase[1]");
	set_name(0x137765c, "SetMoverAction::sBases");
	del_items(0x1377664, DELIT_SIMPLE, 56);
	apply_type(0x1377664, "RTTIAttr[2]");
	set_name(0x1377664, "SetMoverAction::sAttrs");

	// SetPropertyEventInstance
	set_name(0x1398150, "RTTI_SetPropertyEventInstance");
	apply_type(0x1398150, "RTTICompound");
	del_items(0x1399b68, DELIT_SIMPLE, 8);
	apply_type(0x1399b68, "RTTIBase[1]");
	set_name(0x1399b68, "SetPropertyEventInstance::sBases");

	// SetPropertyEventResource
	set_name(0x13980fc, "RTTI_SetPropertyEventResource");
	apply_type(0x13980fc, "RTTICompound");
	del_items(0x1399ad4, DELIT_SIMPLE, 8);
	apply_type(0x1399ad4, "RTTIBase[1]");
	set_name(0x1399ad4, "SetPropertyEventResource::sBases");
	del_items(0x1399adc, DELIT_SIMPLE, 140);
	apply_type(0x1399adc, "RTTIAttr[5]");
	set_name(0x1399adc, "SetPropertyEventResource::sAttrs");

	// SetVoiceIDEventInstance
	set_name(0x13981f8, "RTTI_SetVoiceIDEventInstance");
	apply_type(0x13981f8, "RTTICompound");
	del_items(0x1399bcc, DELIT_SIMPLE, 8);
	apply_type(0x1399bcc, "RTTIBase[1]");
	set_name(0x1399bcc, "SetVoiceIDEventInstance::sBases");

	// SetVoiceIDEventResource
	set_name(0x13981a4, "RTTI_SetVoiceIDEventResource");
	apply_type(0x13981a4, "RTTICompound");
	del_items(0x1399b70, DELIT_SIMPLE, 8);
	apply_type(0x1399b70, "RTTIBase[1]");
	set_name(0x1399b70, "SetVoiceIDEventResource::sBases");
	del_items(0x1399b78, DELIT_SIMPLE, 84);
	apply_type(0x1399b78, "RTTIAttr[3]");
	set_name(0x1399b78, "SetVoiceIDEventResource::sAttrs");

	// SetVolumeEventInstance
	set_name(0x1394024, "RTTI_SetVolumeEventInstance");
	apply_type(0x1394024, "RTTICompound");
	del_items(0x1395eb8, DELIT_SIMPLE, 8);
	apply_type(0x1395eb8, "RTTIBase[1]");
	set_name(0x1395eb8, "SetVolumeEventInstance::sBases");

	// SetVolumeEventResource
	set_name(0x1393fd0, "RTTI_SetVolumeEventResource");
	apply_type(0x1393fd0, "RTTICompound");
	del_items(0x1395e5c, DELIT_SIMPLE, 8);
	apply_type(0x1395e5c, "RTTIBase[1]");
	set_name(0x1395e5c, "SetVolumeEventResource::sBases");
	del_items(0x1395e64, DELIT_SIMPLE, 84);
	apply_type(0x1395e64, "RTTIAttr[3]");
	set_name(0x1395e64, "SetVolumeEventResource::sAttrs");

	// ShaderAnimationAction
	set_name(0x13767f0, "RTTI_ShaderAnimationAction");
	apply_type(0x13767f0, "RTTICompound");
	del_items(0x1377db0, DELIT_SIMPLE, 8);
	apply_type(0x1377db0, "RTTIBase[1]");
	set_name(0x1377db0, "ShaderAnimationAction::sBases");
	del_items(0x1377db8, DELIT_SIMPLE, 112);
	apply_type(0x1377db8, "RTTIAttr[4]");
	set_name(0x1377db8, "ShaderAnimationAction::sAttrs");

	// ShaderAnimatorComponent
	set_name(0x138a2fc, "RTTI_ShaderAnimatorComponent");
	apply_type(0x138a2fc, "RTTICompound");
	del_items(0x138cbd4, DELIT_SIMPLE, 8);
	apply_type(0x138cbd4, "RTTIBase[1]");
	set_name(0x138cbd4, "ShaderAnimatorComponent::sBases");

	// ShaderAnimatorComponentRep
	set_name(0x138a350, "RTTI_ShaderAnimatorComponentRep");
	apply_type(0x138a350, "RTTICompound");
	del_items(0x138cbe0, DELIT_SIMPLE, 8);
	apply_type(0x138cbe0, "RTTIBase[1]");
	set_name(0x138cbe0, "ShaderAnimatorComponentRep::sBases");

	// ShaderAnimatorComponentResource
	set_name(0x138a3a4, "RTTI_ShaderAnimatorComponentResource");
	apply_type(0x138a3a4, "RTTICompound");
	del_items(0x138cb74, DELIT_SIMPLE, 8);
	apply_type(0x138cb74, "RTTIBase[1]");
	set_name(0x138cb74, "ShaderAnimatorComponentResource::sBases");
	del_items(0x138cb7c, DELIT_SIMPLE, 84);
	apply_type(0x138cb7c, "RTTIAttr[3]");
	set_name(0x138cb7c, "ShaderAnimatorComponentResource::sAttrs");

	// ShaderAnimatorInstance
	set_name(0x1337848, "RTTI_ShaderAnimatorInstance");
	apply_type(0x1337848, "RTTICompound");
	del_items(0x13389fc, DELIT_SIMPLE, 8);
	apply_type(0x13389fc, "RTTIBase[1]");
	set_name(0x13389fc, "ShaderAnimatorInstance::sBases");

	// ShaderAnimatorResourceBase
	set_name(0x13376a4, "RTTI_ShaderAnimatorResourceBase");
	apply_type(0x13376a4, "RTTICompound");
	del_items(0x13384cc, DELIT_SIMPLE, 8);
	apply_type(0x13384cc, "RTTIBase[1]");
	set_name(0x13384cc, "ShaderAnimatorResourceBase::sBases");
	del_items(0x13384d4, DELIT_SIMPLE, 56);
	apply_type(0x13384d4, "RTTIAttr[2]");
	set_name(0x13384d4, "ShaderAnimatorResourceBase::sAttrs");

	// ShaderFVector3AnimatorResource
	set_name(0x133774c, "RTTI_ShaderFVector3AnimatorResource");
	apply_type(0x133774c, "RTTICompound");
	del_items(0x133854c, DELIT_SIMPLE, 8);
	apply_type(0x133854c, "RTTIBase[1]");
	set_name(0x133854c, "ShaderFVector3AnimatorResource::sBases");
	del_items(0x1338554, DELIT_SIMPLE, 56);
	apply_type(0x1338554, "RTTIAttr[2]");
	set_name(0x1338554, "ShaderFVector3AnimatorResource::sAttrs");

	// ShaderFVector4AnimatorResource
	set_name(0x13377a0, "RTTI_ShaderFVector4AnimatorResource");
	apply_type(0x13377a0, "RTTICompound");
	del_items(0x133858c, DELIT_SIMPLE, 8);
	apply_type(0x133858c, "RTTIBase[1]");
	set_name(0x133858c, "ShaderFVector4AnimatorResource::sBases");
	del_items(0x1338594, DELIT_SIMPLE, 56);
	apply_type(0x1338594, "RTTIAttr[2]");
	set_name(0x1338594, "ShaderFVector4AnimatorResource::sAttrs");

	// ShaderFloatAnimatorResource
	set_name(0x13376f8, "RTTI_ShaderFloatAnimatorResource");
	apply_type(0x13376f8, "RTTICompound");
	del_items(0x133850c, DELIT_SIMPLE, 8);
	apply_type(0x133850c, "RTTIBase[1]");
	set_name(0x133850c, "ShaderFloatAnimatorResource::sBases");
	del_items(0x1338514, DELIT_SIMPLE, 56);
	apply_type(0x1338514, "RTTIAttr[2]");
	set_name(0x1338514, "ShaderFloatAnimatorResource::sAttrs");

	// ShaderFromFileResource
	set_name(0x13478bc, "RTTI_ShaderFromFileResource");
	apply_type(0x13478bc, "RTTICompound");
	del_items(0x1349864, DELIT_SIMPLE, 8);
	apply_type(0x1349864, "RTTIBase[1]");
	set_name(0x1349864, "ShaderFromFileResource::sBases");

	// ShaderProjMatrixAnimatorResource
	set_name(0x13377f4, "RTTI_ShaderProjMatrixAnimatorResource");
	apply_type(0x13377f4, "RTTICompound");
	del_items(0x13385cc, DELIT_SIMPLE, 8);
	apply_type(0x13385cc, "RTTIBase[1]");
	set_name(0x13385cc, "ShaderProjMatrixAnimatorResource::sBases");
	del_items(0x13385d4, DELIT_SIMPLE, 112);
	apply_type(0x13385d4, "RTTIAttr[4]");
	set_name(0x13385d4, "ShaderProjMatrixAnimatorResource::sAttrs");

	// ShaderResource
	set_name(0x1347920, "RTTI_ShaderResource");
	apply_type(0x1347920, "RTTICompound");
	del_items(0x13487ac, DELIT_SIMPLE, 8);
	apply_type(0x13487ac, "RTTIBase[1]");
	set_name(0x13487ac, "ShaderResource::sBases");
	del_items(0x13487b4, DELIT_SIMPLE, 12);
	apply_type(0x13487b4, "RTTIMessageHandler[1]");
	set_name(0x13487b4, "ShaderResource::sMessageHandlers");

	// ShaderVariable
	set_name(0x1347de8, "RTTI_ShaderVariable");
	apply_type(0x1347de8, "RTTICompound");
	del_items(0x1348838, DELIT_SIMPLE, 112);
	apply_type(0x1348838, "RTTIAttr[4]");
	set_name(0x1348838, "ShaderVariable::sAttrs");

	// ShakeResource
	set_name(0x135c688, "RTTI_ShakeResource");
	apply_type(0x135c688, "RTTICompound");
	del_items(0x135ca84, DELIT_SIMPLE, 8);
	apply_type(0x135ca84, "RTTIBase[1]");
	set_name(0x135ca84, "ShakeResource::sBases");
	del_items(0x135ca8c, DELIT_SIMPLE, 336);
	apply_type(0x135ca8c, "RTTIAttr[12]");
	set_name(0x135ca8c, "ShakeResource::sAttrs");

	// Shape2D
	set_name(0x133b7dc, "RTTI_Shape2D");
	apply_type(0x133b7dc, "RTTICompound");
	del_items(0x133bf08, DELIT_SIMPLE, 8);
	apply_type(0x133bf08, "RTTIBase[1]");
	set_name(0x133bf08, "Shape2D::sBases");
	del_items(0x133bf10, DELIT_SIMPLE, 140);
	apply_type(0x133bf10, "RTTIAttr[5]");
	set_name(0x133bf10, "Shape2D::sAttrs");
	del_items(0x133bf9c, DELIT_SIMPLE, 12);
	apply_type(0x133bf9c, "RTTIMessageHandler[1]");
	set_name(0x133bf9c, "Shape2D::sMessageHandlers");

	// Shape2DExtrusion
	set_name(0x133b830, "RTTI_Shape2DExtrusion");
	apply_type(0x133b830, "RTTICompound");
	del_items(0x133bfb0, DELIT_SIMPLE, 8);
	apply_type(0x133bfb0, "RTTIBase[1]");
	set_name(0x133bfb0, "Shape2DExtrusion::sBases");
	del_items(0x133bfb8, DELIT_SIMPLE, 56);
	apply_type(0x133bfb8, "RTTIAttr[2]");
	set_name(0x133bfb8, "Shape2DExtrusion::sAttrs");

	// SharedObjectiveSystem
	set_name(0x136cca8, "RTTI_SharedObjectiveSystem");
	apply_type(0x136cca8, "RTTICompound");
	del_items(0x1370324, DELIT_SIMPLE, 8);
	apply_type(0x1370324, "RTTIBase[1]");
	set_name(0x1370324, "SharedObjectiveSystem::sBases");
	del_items(0x137032c, DELIT_SIMPLE, 600);
	apply_type(0x137032c, "RTTIFunction[25]");
	set_name(0x137032c, "SharedObjectiveSystem::sFunctions");

	// ShotGunEjectorResource
	set_name(0x13a0c08, "RTTI_ShotGunEjectorResource");
	apply_type(0x13a0c08, "RTTICompound");
	del_items(0x13a20d4, DELIT_SIMPLE, 8);
	apply_type(0x13a20d4, "RTTIBase[1]");
	set_name(0x13a20d4, "ShotGunEjectorResource::sBases");
	del_items(0x13a20dc, DELIT_SIMPLE, 140);
	apply_type(0x13a20dc, "RTTIAttr[5]");
	set_name(0x13a20dc, "ShotGunEjectorResource::sAttrs");

	// ShowHUDOverlayEventInstance
	set_name(0x13982a0, "RTTI_ShowHUDOverlayEventInstance");
	apply_type(0x13982a0, "RTTICompound");
	del_items(0x1399c30, DELIT_SIMPLE, 8);
	apply_type(0x1399c30, "RTTIBase[1]");
	set_name(0x1399c30, "ShowHUDOverlayEventInstance::sBases");

	// ShowHUDOverlayEventResource
	set_name(0x139824c, "RTTI_ShowHUDOverlayEventResource");
	apply_type(0x139824c, "RTTICompound");
	del_items(0x1399bd4, DELIT_SIMPLE, 8);
	apply_type(0x1399bd4, "RTTIBase[1]");
	set_name(0x1399bd4, "ShowHUDOverlayEventResource::sBases");
	del_items(0x1399bdc, DELIT_SIMPLE, 84);
	apply_type(0x1399bdc, "RTTIAttr[3]");
	set_name(0x1399bdc, "ShowHUDOverlayEventResource::sAttrs");

	// SignalGrenade
	set_name(0x13a0c5c, "RTTI_SignalGrenade");
	apply_type(0x13a0c5c, "RTTICompound");
	del_items(0x13a2244, DELIT_SIMPLE, 8);
	apply_type(0x13a2244, "RTTIBase[1]");
	set_name(0x13a2244, "SignalGrenade::sBases");
	del_items(0x13a224c, DELIT_SIMPLE, 24);
	apply_type(0x13a224c, "RTTIFunction[1]");
	set_name(0x13a224c, "SignalGrenade::sFunctions");

	// SignalGrenadeResource
	set_name(0x13a0cb0, "RTTI_SignalGrenadeResource");
	apply_type(0x13a0cb0, "RTTICompound");
	del_items(0x13a2178, DELIT_SIMPLE, 8);
	apply_type(0x13a2178, "RTTIBase[1]");
	set_name(0x13a2178, "SignalGrenadeResource::sBases");
	del_items(0x13a2180, DELIT_SIMPLE, 196);
	apply_type(0x13a2180, "RTTIAttr[7]");
	set_name(0x13a2180, "SignalGrenadeResource::sAttrs");

	// SimpleAnimatingSkinnedMeshInstance
	set_name(0x13562c8, "RTTI_SimpleAnimatingSkinnedMeshInstance");
	apply_type(0x13562c8, "RTTICompound");
	del_items(0x13586fc, DELIT_SIMPLE, 8);
	apply_type(0x13586fc, "RTTIBase[1]");
	set_name(0x13586fc, "SimpleAnimatingSkinnedMeshInstance::sBases");
	del_items(0x1358704, DELIT_SIMPLE, 56);
	apply_type(0x1358704, "RTTIAttr[2]");
	set_name(0x1358704, "SimpleAnimatingSkinnedMeshInstance::sAttrs");
	del_items(0x135873c, DELIT_SIMPLE, 24);
	apply_type(0x135873c, "RTTIMessageHandler[2]");
	set_name(0x135873c, "SimpleAnimatingSkinnedMeshInstance::sMessageHandlers");

	// SimpleParticleSystem
	set_name(0x13a0d04, "RTTI_SimpleParticleSystem");
	apply_type(0x13a0d04, "RTTICompound");
	del_items(0x13a2264, DELIT_SIMPLE, 8);
	apply_type(0x13a2264, "RTTIBase[1]");
	set_name(0x13a2264, "SimpleParticleSystem::sBases");

	// SimpleParticleSystemResource
	set_name(0x13a0d68, "RTTI_SimpleParticleSystemResource");
	apply_type(0x13a0d68, "RTTICompound");
	del_items(0x13a226c, DELIT_SIMPLE, 8);
	apply_type(0x13a226c, "RTTIBase[1]");
	set_name(0x13a226c, "SimpleParticleSystemResource::sBases");
	del_items(0x13a2274, DELIT_SIMPLE, 280);
	apply_type(0x13a2274, "RTTIAttr[10]");
	set_name(0x13a2274, "SimpleParticleSystemResource::sAttrs");

	// SimplePathMover
	set_name(0x13a57fc, "RTTI_SimplePathMover");
	apply_type(0x13a57fc, "RTTICompound");
	del_items(0x13a5cf8, DELIT_SIMPLE, 8);
	apply_type(0x13a5cf8, "RTTIBase[1]");
	set_name(0x13a5cf8, "SimplePathMover::sBases");
	del_items(0x13a5d00, DELIT_SIMPLE, 120);
	apply_type(0x13a5d00, "RTTIFunction[5]");
	set_name(0x13a5d00, "SimplePathMover::sFunctions");

	// SimplePathMoverResource
	set_name(0x13a5850, "RTTI_SimplePathMoverResource");
	apply_type(0x13a5850, "RTTICompound");
	del_items(0x13a5d78, DELIT_SIMPLE, 8);
	apply_type(0x13a5d78, "RTTIBase[1]");
	set_name(0x13a5d78, "SimplePathMoverResource::sBases");

	// SimplePolygon
	set_name(0x132b0fc, "RTTI_SimplePolygon");
	apply_type(0x132b0fc, "RTTICompound");
	del_items(0x132b2b0, DELIT_SIMPLE, 28);
	apply_type(0x132b2b0, "RTTIAttr[1]");
	set_name(0x132b2b0, "SimplePolygon::sAttrs");

	// SimpleSimulatedSkinnedMeshInstance
	set_name(0x135631c, "RTTI_SimpleSimulatedSkinnedMeshInstance");
	apply_type(0x135631c, "RTTICompound");
	del_items(0x1358754, DELIT_SIMPLE, 8);
	apply_type(0x1358754, "RTTIBase[1]");
	set_name(0x1358754, "SimpleSimulatedSkinnedMeshInstance::sBases");
	del_items(0x135875c, DELIT_SIMPLE, 112);
	apply_type(0x135875c, "RTTIAttr[4]");
	set_name(0x135875c, "SimpleSimulatedSkinnedMeshInstance::sAttrs");
	del_items(0x13587cc, DELIT_SIMPLE, 24);
	apply_type(0x13587cc, "RTTIMessageHandler[2]");
	set_name(0x13587cc, "SimpleSimulatedSkinnedMeshInstance::sMessageHandlers");

	// SimpleSkeletonAnimationResource
	set_name(0x13567ac, "RTTI_SimpleSkeletonAnimationResource");
	apply_type(0x13567ac, "RTTICompound");
	del_items(0x1357934, DELIT_SIMPLE, 8);
	apply_type(0x1357934, "RTTIBase[1]");
	set_name(0x1357934, "SimpleSkeletonAnimationResource::sBases");
	del_items(0x135793c, DELIT_SIMPLE, 56);
	apply_type(0x135793c, "RTTIAttr[2]");
	set_name(0x135793c, "SimpleSkeletonAnimationResource::sAttrs");

	// SimpleSoundInstance
	set_name(0x1359ea0, "RTTI_SimpleSoundInstance");
	apply_type(0x1359ea0, "RTTICompound");
	del_items(0x135af28, DELIT_SIMPLE, 8);
	apply_type(0x135af28, "RTTIBase[1]");
	set_name(0x135af28, "SimpleSoundInstance::sBases");
	del_items(0x135af30, DELIT_SIMPLE, 12);
	apply_type(0x135af30, "RTTIMessageHandler[1]");
	set_name(0x135af30, "SimpleSoundInstance::sMessageHandlers");

	// SimpleSoundResource
	set_name(0x1359898, "RTTI_SimpleSoundResource");
	apply_type(0x1359898, "RTTICompound");
	del_items(0x135a280, DELIT_SIMPLE, 8);
	apply_type(0x135a280, "RTTIBase[1]");
	set_name(0x135a280, "SimpleSoundResource::sBases");
	del_items(0x135a288, DELIT_SIMPLE, 364);
	apply_type(0x135a288, "RTTIAttr[13]");
	set_name(0x135a288, "SimpleSoundResource::sAttrs");
	del_items(0x135a3f4, DELIT_SIMPLE, 12);
	apply_type(0x135a3f4, "RTTIMessageHandler[1]");
	set_name(0x135a3f4, "SimpleSoundResource::sMessageHandlers");

	// SimpleTrackAnimatorEntity
	set_name(0x137d664, "RTTI_SimpleTrackAnimatorEntity");
	apply_type(0x137d664, "RTTICompound");
	del_items(0x137f444, DELIT_SIMPLE, 16);
	apply_type(0x137f444, "RTTIBase[2]");
	set_name(0x137f444, "SimpleTrackAnimatorEntity::sBases");

	// SimpleTrackAnimatorEntityResource
	set_name(0x137d770, "RTTI_SimpleTrackAnimatorEntityResource");
	apply_type(0x137d770, "RTTICompound");
	del_items(0x137f35c, DELIT_SIMPLE, 8);
	apply_type(0x137f35c, "RTTIBase[1]");
	set_name(0x137f35c, "SimpleTrackAnimatorEntityResource::sBases");
	del_items(0x137f364, DELIT_SIMPLE, 224);
	apply_type(0x137f364, "RTTIAttr[8]");
	set_name(0x137f364, "SimpleTrackAnimatorEntityResource::sAttrs");

	// SimpleTrackAnimatorRep
	set_name(0x137d6b8, "RTTI_SimpleTrackAnimatorRep");
	apply_type(0x137d6b8, "RTTICompound");
	del_items(0x137f1c0, DELIT_SIMPLE, 8);
	apply_type(0x137f1c0, "RTTIBase[1]");
	set_name(0x137f1c0, "SimpleTrackAnimatorRep::sBases");

	// SimpleVehicleController
	set_name(0x1382e5c, "RTTI_SimpleVehicleController");
	apply_type(0x1382e5c, "RTTICompound");
	del_items(0x13846c0, DELIT_SIMPLE, 8);
	apply_type(0x13846c0, "RTTIBase[1]");
	set_name(0x13846c0, "SimpleVehicleController::sBases");

	// SingleWeightSkinSpan
	set_name(0x135603c, "RTTI_SingleWeightSkinSpan");
	apply_type(0x135603c, "RTTICompound");
	del_items(0x1358360, DELIT_SIMPLE, 56);
	apply_type(0x1358360, "RTTIAttr[2]");
	set_name(0x1358360, "SingleWeightSkinSpan::sAttrs");

	// Skeleton
	set_name(0x13563e4, "RTTI_Skeleton");
	apply_type(0x13563e4, "RTTICompound");
	del_items(0x1357014, DELIT_SIMPLE, 8);
	apply_type(0x1357014, "RTTIBase[1]");
	set_name(0x1357014, "Skeleton::sBases");
	del_items(0x135701c, DELIT_SIMPLE, 336);
	apply_type(0x135701c, "RTTIAttr[12]");
	set_name(0x135701c, "Skeleton::sAttrs");
	del_items(0x135716c, DELIT_SIMPLE, 12);
	apply_type(0x135716c, "RTTIMessageHandler[1]");
	set_name(0x135716c, "Skeleton::sMessageHandlers");

	// SkeletonAnimChannel
	set_name(0x1356574, "RTTI_SkeletonAnimChannel");
	apply_type(0x1356574, "RTTICompound");
	del_items(0x1356f6c, DELIT_SIMPLE, 28);
	apply_type(0x1356f6c, "RTTIAttr[1]");
	set_name(0x1356f6c, "SkeletonAnimChannel::sAttrs");

	// SkeletonAnimationManager
	set_name(0x1356670, "RTTI_SkeletonAnimationManager");
	apply_type(0x1356670, "RTTICompound");
	del_items(0x13587e4, DELIT_SIMPLE, 8);
	apply_type(0x13587e4, "RTTIBase[1]");
	set_name(0x13587e4, "SkeletonAnimationManager::sBases");

	// SkeletonAnimationResource
	set_name(0x1356758, "RTTI_SkeletonAnimationResource");
	apply_type(0x1356758, "RTTICompound");
	del_items(0x13578bc, DELIT_SIMPLE, 8);
	apply_type(0x13578bc, "RTTIBase[1]");
	set_name(0x13578bc, "SkeletonAnimationResource::sBases");
	del_items(0x13578c4, DELIT_SIMPLE, 112);
	apply_type(0x13578c4, "RTTIAttr[4]");
	set_name(0x13578c4, "SkeletonAnimationResource::sAttrs");

	// SkeletonBaseAnimationResource
	set_name(0x13566e4, "RTTI_SkeletonBaseAnimationResource");
	apply_type(0x13566e4, "RTTICompound");
	del_items(0x13578b4, DELIT_SIMPLE, 8);
	apply_type(0x13578b4, "RTTIBase[1]");
	set_name(0x13578b4, "SkeletonBaseAnimationResource::sBases");

	// SkeletonHelpers
	set_name(0x13564ac, "RTTI_SkeletonHelpers");
	apply_type(0x13564ac, "RTTICompound");
	del_items(0x1356e14, DELIT_SIMPLE, 8);
	apply_type(0x1356e14, "RTTIBase[1]");
	set_name(0x1356e14, "SkeletonHelpers::sBases");
	del_items(0x1356e1c, DELIT_SIMPLE, 28);
	apply_type(0x1356e1c, "RTTIAttr[1]");
	set_name(0x1356e1c, "SkeletonHelpers::sAttrs");

	// SkeletonTargetDesc
	set_name(0x1356854, "RTTI_SkeletonTargetDesc");
	apply_type(0x1356854, "RTTICompound");
	del_items(0x135775c, DELIT_SIMPLE, 56);
	apply_type(0x135775c, "RTTIAttr[2]");
	set_name(0x135775c, "SkeletonTargetDesc::sAttrs");

	// SkeletonTargetLink
	set_name(0x13568b8, "RTTI_SkeletonTargetLink");
	apply_type(0x13568b8, "RTTICompound");
	del_items(0x13577e8, DELIT_SIMPLE, 84);
	apply_type(0x13577e8, "RTTIAttr[3]");
	set_name(0x13577e8, "SkeletonTargetLink::sAttrs");

	// SkeletonTargetTree
	set_name(0x135691c, "RTTI_SkeletonTargetTree");
	apply_type(0x135691c, "RTTICompound");
	del_items(0x135783c, DELIT_SIMPLE, 8);
	apply_type(0x135783c, "RTTIBase[1]");
	set_name(0x135783c, "SkeletonTargetTree::sBases");
	del_items(0x1357844, DELIT_SIMPLE, 112);
	apply_type(0x1357844, "RTTIAttr[4]");
	set_name(0x1357844, "SkeletonTargetTree::sAttrs");

	// SkinSpan
	set_name(0x1356090, "RTTI_SkinSpan");
	apply_type(0x1356090, "RTTICompound");
	del_items(0x1358398, DELIT_SIMPLE, 112);
	apply_type(0x1358398, "RTTIAttr[4]");
	set_name(0x1358398, "SkinSpan::sAttrs");

	// SkinnedCollisionBoxToPartMapping
	set_name(0x135df8c, "RTTI_SkinnedCollisionBoxToPartMapping");
	apply_type(0x135df8c, "RTTICompound");
	del_items(0x1360b3c, DELIT_SIMPLE, 56);
	apply_type(0x1360b3c, "RTTIAttr[2]");
	set_name(0x1360b3c, "SkinnedCollisionBoxToPartMapping::sAttrs");

	// SkinnedMeshBoneBindings
	set_name(0x1356a38, "RTTI_SkinnedMeshBoneBindings");
	apply_type(0x1356a38, "RTTICompound");
	del_items(0x13586b0, DELIT_SIMPLE, 8);
	apply_type(0x13586b0, "RTTIBase[1]");
	set_name(0x13586b0, "SkinnedMeshBoneBindings::sBases");
	del_items(0x13586b8, DELIT_SIMPLE, 56);
	apply_type(0x13586b8, "RTTIAttr[2]");
	set_name(0x13586b8, "SkinnedMeshBoneBindings::sAttrs");
	del_items(0x13586f0, DELIT_SIMPLE, 12);
	apply_type(0x13586f0, "RTTIMessageHandler[1]");
	set_name(0x13586f0, "SkinnedMeshBoneBindings::sMessageHandlers");

	// SkinnedMeshBoneBoundingBoxes
	set_name(0x1356d48, "RTTI_SkinnedMeshBoneBoundingBoxes");
	apply_type(0x1356d48, "RTTICompound");
	del_items(0x1357654, DELIT_SIMPLE, 8);
	apply_type(0x1357654, "RTTIBase[1]");
	set_name(0x1357654, "SkinnedMeshBoneBoundingBoxes::sBases");
	del_items(0x135765c, DELIT_SIMPLE, 112);
	apply_type(0x135765c, "RTTIAttr[4]");
	set_name(0x135765c, "SkinnedMeshBoneBoundingBoxes::sAttrs");

	// SkinnedMeshInstance
	set_name(0x1356a8c, "RTTI_SkinnedMeshInstance");
	apply_type(0x1356a8c, "RTTICompound");
	del_items(0x13576cc, DELIT_SIMPLE, 8);
	apply_type(0x13576cc, "RTTIBase[1]");
	set_name(0x13576cc, "SkinnedMeshInstance::sBases");
	del_items(0x13576d4, DELIT_SIMPLE, 112);
	apply_type(0x13576d4, "RTTIAttr[4]");
	set_name(0x13576d4, "SkinnedMeshInstance::sAttrs");
	del_items(0x1357744, DELIT_SIMPLE, 24);
	apply_type(0x1357744, "RTTIMessageHandler[2]");
	set_name(0x1357744, "SkinnedMeshInstance::sMessageHandlers");

	// SkinnedMeshResource
	set_name(0x1356af0, "RTTI_SkinnedMeshResource");
	apply_type(0x1356af0, "RTTICompound");
	del_items(0x1357614, DELIT_SIMPLE, 8);
	apply_type(0x1357614, "RTTIBase[1]");
	set_name(0x1357614, "SkinnedMeshResource::sBases");
	del_items(0x135761c, DELIT_SIMPLE, 56);
	apply_type(0x135761c, "RTTIAttr[2]");
	set_name(0x135761c, "SkinnedMeshResource::sAttrs");

	// SkinnedModel
	set_name(0x1362680, "RTTI_SkinnedModel");
	apply_type(0x1362680, "RTTICompound");
	del_items(0x1364158, DELIT_SIMPLE, 8);
	apply_type(0x1364158, "RTTIBase[1]");
	set_name(0x1364158, "SkinnedModel::sBases");

	// SkinnedModelLOD
	set_name(0x1362748, "RTTI_SkinnedModelLOD");
	apply_type(0x1362748, "RTTICompound");
	del_items(0x1363b4c, DELIT_SIMPLE, 8);
	apply_type(0x1363b4c, "RTTIBase[1]");
	set_name(0x1363b4c, "SkinnedModelLOD::sBases");
	del_items(0x1363b54, DELIT_SIMPLE, 168);
	apply_type(0x1363b54, "RTTIAttr[6]");
	set_name(0x1363b54, "SkinnedModelLOD::sAttrs");

	// SkinnedModelResource
	set_name(0x13626e4, "RTTI_SkinnedModelResource");
	apply_type(0x13626e4, "RTTICompound");
	del_items(0x1363bfc, DELIT_SIMPLE, 8);
	apply_type(0x1363bfc, "RTTIBase[1]");
	set_name(0x1363bfc, "SkinnedModelResource::sBases");
	del_items(0x1363c04, DELIT_SIMPLE, 560);
	apply_type(0x1363c04, "RTTIAttr[20]");
	set_name(0x1363c04, "SkinnedModelResource::sAttrs");

	// SkinnedPoint
	set_name(0x1356c80, "RTTI_SkinnedPoint");
	apply_type(0x1356c80, "RTTICompound");
	del_items(0x13574f4, DELIT_SIMPLE, 224);
	apply_type(0x13574f4, "RTTIAttr[8]");
	set_name(0x13574f4, "SkinnedPoint::sAttrs");

	// SkinnedPointsResource
	set_name(0x1356ce4, "RTTI_SkinnedPointsResource");
	apply_type(0x1356ce4, "RTTICompound");
	del_items(0x13575d4, DELIT_SIMPLE, 8);
	apply_type(0x13575d4, "RTTIBase[1]");
	set_name(0x13575d4, "SkinnedPointsResource::sBases");
	del_items(0x13575dc, DELIT_SIMPLE, 56);
	apply_type(0x13575dc, "RTTIAttr[2]");
	set_name(0x13575dc, "SkinnedPointsResource::sAttrs");

	// SkipSequenceEventInstance
	set_name(0x1398348, "RTTI_SkipSequenceEventInstance");
	apply_type(0x1398348, "RTTICompound");
	del_items(0x1399c78, DELIT_SIMPLE, 8);
	apply_type(0x1399c78, "RTTIBase[1]");
	set_name(0x1399c78, "SkipSequenceEventInstance::sBases");

	// SkipSequenceEventResource
	set_name(0x13982f4, "RTTI_SkipSequenceEventResource");
	apply_type(0x13982f4, "RTTICompound");
	del_items(0x1399c38, DELIT_SIMPLE, 8);
	apply_type(0x1399c38, "RTTIBase[1]");
	set_name(0x1399c38, "SkipSequenceEventResource::sBases");
	del_items(0x1399c40, DELIT_SIMPLE, 56);
	apply_type(0x1399c40, "RTTIAttr[2]");
	set_name(0x1399c40, "SkipSequenceEventResource::sAttrs");

	// SlideToEventInstance
	set_name(0x13983f0, "RTTI_SlideToEventInstance");
	apply_type(0x13983f0, "RTTICompound");
	del_items(0x1399d14, DELIT_SIMPLE, 8);
	apply_type(0x1399d14, "RTTIBase[1]");
	set_name(0x1399d14, "SlideToEventInstance::sBases");

	// SlideToEventResource
	set_name(0x139839c, "RTTI_SlideToEventResource");
	apply_type(0x139839c, "RTTICompound");
	del_items(0x1399c80, DELIT_SIMPLE, 8);
	apply_type(0x1399c80, "RTTIBase[1]");
	set_name(0x1399c80, "SlideToEventResource::sBases");
	del_items(0x1399c88, DELIT_SIMPLE, 140);
	apply_type(0x1399c88, "RTTIAttr[5]");
	set_name(0x1399c88, "SlideToEventResource::sAttrs");

	// SliderTag
	set_name(0x133d318, "RTTI_SliderTag");
	apply_type(0x133d318, "RTTICompound");
	del_items(0x133f394, DELIT_SIMPLE, 8);
	apply_type(0x133f394, "RTTIBase[1]");
	set_name(0x133f394, "SliderTag::sBases");
	del_items(0x133f39c, DELIT_SIMPLE, 48);
	apply_type(0x133f39c, "RTTIFunction[2]");
	set_name(0x133f39c, "SliderTag::sFunctions");

	// SliderWidget
	set_name(0x133dc9c, "RTTI_SliderWidget");
	apply_type(0x133dc9c, "RTTICompound");
	del_items(0x133f7e0, DELIT_SIMPLE, 8);
	apply_type(0x133f7e0, "RTTIBase[1]");
	set_name(0x133f7e0, "SliderWidget::sBases");

	// SmartSpawnArea
	set_name(0x139c4dc, "RTTI_SmartSpawnArea");
	apply_type(0x139c4dc, "RTTICompound");
	del_items(0x139d078, DELIT_SIMPLE, 8);
	apply_type(0x139d078, "RTTIBase[1]");
	set_name(0x139d078, "SmartSpawnArea::sBases");

	// SmartSpawnAreaResource
	set_name(0x139c530, "RTTI_SmartSpawnAreaResource");
	apply_type(0x139c530, "RTTICompound");
	del_items(0x139d070, DELIT_SIMPLE, 8);
	apply_type(0x139d070, "RTTIBase[1]");
	set_name(0x139d070, "SmartSpawnAreaResource::sBases");

	// SmoothedSoundState
	set_name(0x1359a88, "RTTI_SmoothedSoundState");
	apply_type(0x1359a88, "RTTICompound");

	// Soldier
	set_name(0x13886e4, "RTTI_Soldier");
	apply_type(0x13886e4, "RTTICompound");
	del_items(0x138b408, DELIT_SIMPLE, 8);
	apply_type(0x138b408, "RTTIBase[1]");
	set_name(0x138b408, "Soldier::sBases");
	del_items(0x138b410, DELIT_SIMPLE, 144);
	apply_type(0x138b410, "RTTIFunction[6]");
	set_name(0x138b410, "Soldier::sFunctions");
	del_items(0x138b4a0, DELIT_SIMPLE, 12);
	apply_type(0x138b4a0, "RTTIMessageHandler[1]");
	set_name(0x138b4a0, "Soldier::sMessageHandlers");

	// SoldierAIController
	set_name(0x1388738, "RTTI_SoldierAIController");
	apply_type(0x1388738, "RTTICompound");
	del_items(0x138b6f8, DELIT_SIMPLE, 8);
	apply_type(0x138b6f8, "RTTIBase[1]");
	set_name(0x138b6f8, "SoldierAIController::sBases");

	// SoldierController
	set_name(0x138878c, "RTTI_SoldierController");
	apply_type(0x138878c, "RTTICompound");
	del_items(0x138b4c0, DELIT_SIMPLE, 8);
	apply_type(0x138b4c0, "RTTIBase[1]");
	set_name(0x138b4c0, "SoldierController::sBases");

	// SoldierJoystickController
	set_name(0x13887e0, "RTTI_SoldierJoystickController");
	apply_type(0x13887e0, "RTTICompound");
	del_items(0x138bc20, DELIT_SIMPLE, 8);
	apply_type(0x138bc20, "RTTIBase[1]");
	set_name(0x138bc20, "SoldierJoystickController::sBases");

	// SoldierRep
	set_name(0x1388834, "RTTI_SoldierRep");
	apply_type(0x1388834, "RTTICompound");
	del_items(0x138b4ac, DELIT_SIMPLE, 8);
	apply_type(0x138b4ac, "RTTIBase[1]");
	set_name(0x138b4ac, "SoldierRep::sBases");
	del_items(0x138b4b4, DELIT_SIMPLE, 12);
	apply_type(0x138b4b4, "RTTIMessageHandler[1]");
	set_name(0x138b4b4, "SoldierRep::sMessageHandlers");

	// SoldierResource
	set_name(0x1388898, "RTTI_SoldierResource");
	apply_type(0x1388898, "RTTICompound");
	del_items(0x138b0f0, DELIT_SIMPLE, 8);
	apply_type(0x138b0f0, "RTTIBase[1]");
	set_name(0x138b0f0, "SoldierResource::sBases");
	del_items(0x138b0f8, DELIT_SIMPLE, 784);
	apply_type(0x138b0f8, "RTTIAttr[28]");
	set_name(0x138b0f8, "SoldierResource::sAttrs");

	// SoundBankResource
	set_name(0x1359310, "RTTI_SoundBankResource");
	apply_type(0x1359310, "RTTICompound");
	del_items(0x135afc4, DELIT_SIMPLE, 8);
	apply_type(0x135afc4, "RTTIBase[1]");
	set_name(0x135afc4, "SoundBankResource::sBases");
	del_items(0x135afcc, DELIT_SIMPLE, 36);
	apply_type(0x135afcc, "RTTIMessageHandler[3]");
	set_name(0x135afcc, "SoundBankResource::sMessageHandlers");

	// SoundCollection
	set_name(0x135995c, "RTTI_SoundCollection");
	apply_type(0x135995c, "RTTICompound");
	del_items(0x135af50, DELIT_SIMPLE, 8);
	apply_type(0x135af50, "RTTIBase[1]");
	set_name(0x135af50, "SoundCollection::sBases");
	del_items(0x135af58, DELIT_SIMPLE, 84);
	apply_type(0x135af58, "RTTIAttr[3]");
	set_name(0x135af58, "SoundCollection::sAttrs");
	del_items(0x135afac, DELIT_SIMPLE, 24);
	apply_type(0x135afac, "RTTIMessageHandler[2]");
	set_name(0x135afac, "SoundCollection::sMessageHandlers");

	// SoundEventInstance
	set_name(0x1398498, "RTTI_SoundEventInstance");
	apply_type(0x1398498, "RTTICompound");
	del_items(0x1399d5c, DELIT_SIMPLE, 8);
	apply_type(0x1399d5c, "RTTIBase[1]");
	set_name(0x1399d5c, "SoundEventInstance::sBases");

	// SoundEventResource
	set_name(0x1398444, "RTTI_SoundEventResource");
	apply_type(0x1398444, "RTTICompound");
	del_items(0x1399d1c, DELIT_SIMPLE, 8);
	apply_type(0x1399d1c, "RTTIBase[1]");
	set_name(0x1399d1c, "SoundEventResource::sBases");
	del_items(0x1399d24, DELIT_SIMPLE, 56);
	apply_type(0x1399d24, "RTTIAttr[2]");
	set_name(0x1399d24, "SoundEventResource::sAttrs");

	// SoundInstance
	set_name(0x13594b8, "RTTI_SoundInstance");
	apply_type(0x13594b8, "RTTICompound");
	del_items(0x135aefc, DELIT_SIMPLE, 8);
	apply_type(0x135aefc, "RTTIBase[1]");
	set_name(0x135aefc, "SoundInstance::sBases");
	del_items(0x135af04, DELIT_SIMPLE, 24);
	apply_type(0x135af04, "RTTIMessageHandler[2]");
	set_name(0x135af04, "SoundInstance::sMessageHandlers");

	// SoundInstanceBase
	set_name(0x13593b4, "RTTI_SoundInstanceBase");
	apply_type(0x13593b4, "RTTICompound");
	del_items(0x135a0ac, DELIT_SIMPLE, 8);
	apply_type(0x135a0ac, "RTTIBase[1]");
	set_name(0x135a0ac, "SoundInstanceBase::sBases");

	// SoundInstanceManager
	set_name(0x135955c, "RTTI_SoundInstanceManager");
	apply_type(0x135955c, "RTTICompound");
	del_items(0x135af3c, DELIT_SIMPLE, 8);
	apply_type(0x135af3c, "RTTIBase[1]");
	set_name(0x135af3c, "SoundInstanceManager::sBases");
	del_items(0x135af44, DELIT_SIMPLE, 12);
	apply_type(0x135af44, "RTTIMessageHandler[1]");
	set_name(0x135af44, "SoundInstanceManager::sMessageHandlers");

	// SoundManager
	set_name(0x1359608, "RTTI_SoundManager");
	apply_type(0x1359608, "RTTICompound");
	del_items(0x135aea8, DELIT_SIMPLE, 8);
	apply_type(0x135aea8, "RTTIBase[1]");
	set_name(0x135aea8, "SoundManager::sBases");
	del_items(0x135aeb0, DELIT_SIMPLE, 56);
	apply_type(0x135aeb0, "RTTIAttr[2]");
	set_name(0x135aeb0, "SoundManager::sAttrs");
	del_items(0x135aee8, DELIT_SIMPLE, 12);
	apply_type(0x135aee8, "RTTIMessageHandler[1]");
	set_name(0x135aee8, "SoundManager::sMessageHandlers");

	// SoundMixEventInstance
	set_name(0x1398540, "RTTI_SoundMixEventInstance");
	apply_type(0x1398540, "RTTICompound");
	del_items(0x1399ddc, DELIT_SIMPLE, 8);
	apply_type(0x1399ddc, "RTTIBase[1]");
	set_name(0x1399ddc, "SoundMixEventInstance::sBases");

	// SoundMixEventResource
	set_name(0x13984ec, "RTTI_SoundMixEventResource");
	apply_type(0x13984ec, "RTTICompound");
	del_items(0x1399d64, DELIT_SIMPLE, 8);
	apply_type(0x1399d64, "RTTIBase[1]");
	set_name(0x1399d64, "SoundMixEventResource::sBases");
	del_items(0x1399d6c, DELIT_SIMPLE, 112);
	apply_type(0x1399d6c, "RTTIAttr[4]");
	set_name(0x1399d6c, "SoundMixEventResource::sAttrs");

	// SoundMixResource
	set_name(0x13588d0, "RTTI_SoundMixResource");
	apply_type(0x13588d0, "RTTICompound");
	del_items(0x135a5e4, DELIT_SIMPLE, 8);
	apply_type(0x135a5e4, "RTTIBase[1]");
	set_name(0x135a5e4, "SoundMixResource::sBases");
	del_items(0x135a5ec, DELIT_SIMPLE, 896);
	apply_type(0x135a5ec, "RTTIAttr[32]");
	set_name(0x135a5ec, "SoundMixResource::sAttrs");

	// SoundResource
	set_name(0x13596ac, "RTTI_SoundResource");
	apply_type(0x13596ac, "RTTICompound");
	del_items(0x135a0b8, DELIT_SIMPLE, 8);
	apply_type(0x135a0b8, "RTTIBase[1]");
	set_name(0x135a0b8, "SoundResource::sBases");
	del_items(0x135a0c0, DELIT_SIMPLE, 448);
	apply_type(0x135a0c0, "RTTIAttr[16]");
	set_name(0x135a0c0, "SoundResource::sAttrs");

	// SoundStateMachineEventSettings
	set_name(0x13b9e40, "RTTI_SoundStateMachineEventSettings");
	apply_type(0x13b9e40, "RTTICompound");
	del_items(0x13b9f34, DELIT_SIMPLE, 196);
	apply_type(0x13b9f34, "RTTIAttr[7]");
	set_name(0x13b9f34, "SoundStateMachineEventSettings::sAttrs");

	// SoundStateMachineResource
	set_name(0x13b9ea4, "RTTI_SoundStateMachineResource");
	apply_type(0x13b9ea4, "RTTICompound");
	del_items(0x13b9ff8, DELIT_SIMPLE, 8);
	apply_type(0x13b9ff8, "RTTIBase[1]");
	set_name(0x13b9ff8, "SoundStateMachineResource::sBases");
	del_items(0x13ba000, DELIT_SIMPLE, 84);
	apply_type(0x13ba000, "RTTIAttr[3]");
	set_name(0x13ba000, "SoundStateMachineResource::sAttrs");

	// SoundStateMachineStateSettings
	set_name(0x13b9ddc, "RTTI_SoundStateMachineStateSettings");
	apply_type(0x13b9ddc, "RTTICompound");
	del_items(0x13b9efc, DELIT_SIMPLE, 56);
	apply_type(0x13b9efc, "RTTIAttr[2]");
	set_name(0x13b9efc, "SoundStateMachineStateSettings::sAttrs");

	// SoundSystem
	set_name(0x13597f4, "RTTI_SoundSystem");
	apply_type(0x13597f4, "RTTICompound");
	del_items(0x135b238, DELIT_SIMPLE, 8);
	apply_type(0x135b238, "RTTIBase[1]");
	set_name(0x135b238, "SoundSystem::sBases");
	del_items(0x135b240, DELIT_SIMPLE, 120);
	apply_type(0x135b240, "RTTIFunction[5]");
	set_name(0x135b240, "SoundSystem::sFunctions");

	// SoundSystemSettings
	set_name(0x1359a04, "RTTI_SoundSystemSettings");
	apply_type(0x1359a04, "RTTICompound");
	del_items(0x135b34c, DELIT_SIMPLE, 8);
	apply_type(0x135b34c, "RTTIBase[1]");
	set_name(0x135b34c, "SoundSystemSettings::sBases");
	del_items(0x135b354, DELIT_SIMPLE, 2156);
	apply_type(0x135b354, "RTTIAttr[77]");
	set_name(0x135b354, "SoundSystemSettings::sAttrs");

	// SoundZoneDeactivationEventInstance
	set_name(0x1398690, "RTTI_SoundZoneDeactivationEventInstance");
	apply_type(0x1398690, "RTTICompound");
	del_items(0x1399e88, DELIT_SIMPLE, 8);
	apply_type(0x1399e88, "RTTIBase[1]");
	set_name(0x1399e88, "SoundZoneDeactivationEventInstance::sBases");

	// SoundZoneDeactivationEventResource
	set_name(0x139863c, "RTTI_SoundZoneDeactivationEventResource");
	apply_type(0x139863c, "RTTICompound");
	del_items(0x1399e2c, DELIT_SIMPLE, 8);
	apply_type(0x1399e2c, "RTTIBase[1]");
	set_name(0x1399e2c, "SoundZoneDeactivationEventResource::sBases");
	del_items(0x1399e34, DELIT_SIMPLE, 84);
	apply_type(0x1399e34, "RTTIAttr[3]");
	set_name(0x1399e34, "SoundZoneDeactivationEventResource::sAttrs");

	// SoundZoneInstance
	set_name(0x1358a38, "RTTI_SoundZoneInstance");
	apply_type(0x1358a38, "RTTICompound");
	del_items(0x135be30, DELIT_SIMPLE, 8);
	apply_type(0x135be30, "RTTIBase[1]");
	set_name(0x135be30, "SoundZoneInstance::sBases");
	del_items(0x135be38, DELIT_SIMPLE, 56);
	apply_type(0x135be38, "RTTIAttr[2]");
	set_name(0x135be38, "SoundZoneInstance::sAttrs");
	del_items(0x135be70, DELIT_SIMPLE, 12);
	apply_type(0x135be70, "RTTIMessageHandler[1]");
	set_name(0x135be70, "SoundZoneInstance::sMessageHandlers");

	// SoundZoneManager
	set_name(0x1358adc, "RTTI_SoundZoneManager");
	apply_type(0x1358adc, "RTTICompound");
	del_items(0x135be7c, DELIT_SIMPLE, 8);
	apply_type(0x135be7c, "RTTIBase[1]");
	set_name(0x135be7c, "SoundZoneManager::sBases");
	del_items(0x135be84, DELIT_SIMPLE, 12);
	apply_type(0x135be84, "RTTIMessageHandler[1]");
	set_name(0x135be84, "SoundZoneManager::sMessageHandlers");

	// SoundZoneResource
	set_name(0x1358974, "RTTI_SoundZoneResource");
	apply_type(0x1358974, "RTTICompound");
	del_items(0x135bbc0, DELIT_SIMPLE, 8);
	apply_type(0x135bbc0, "RTTIBase[1]");
	set_name(0x135bbc0, "SoundZoneResource::sBases");
	del_items(0x135bbc8, DELIT_SIMPLE, 616);
	apply_type(0x135bbc8, "RTTIAttr[22]");
	set_name(0x135bbc8, "SoundZoneResource::sAttrs");

	// SpawnArea
	set_name(0x139c424, "RTTI_SpawnArea");
	apply_type(0x139c424, "RTTICompound");
	del_items(0x139d054, DELIT_SIMPLE, 8);
	apply_type(0x139d054, "RTTIBase[1]");
	set_name(0x139d054, "SpawnArea::sBases");

	// SpawnAreaResource
	set_name(0x139c488, "RTTI_SpawnAreaResource");
	apply_type(0x139c488, "RTTICompound");
	del_items(0x139cd04, DELIT_SIMPLE, 8);
	apply_type(0x139cd04, "RTTIBase[1]");
	set_name(0x139cd04, "SpawnAreaResource::sBases");
	del_items(0x139cd0c, DELIT_SIMPLE, 168);
	apply_type(0x139cd0c, "RTTIAttr[6]");
	set_name(0x139cd0c, "SpawnAreaResource::sAttrs");

	// SpawnEffectAnimatedShader
	set_name(0x138a568, "RTTI_SpawnEffectAnimatedShader");
	apply_type(0x138a568, "RTTICompound");
	del_items(0x138cc74, DELIT_SIMPLE, 56);
	apply_type(0x138cc74, "RTTIAttr[2]");
	set_name(0x138cc74, "SpawnEffectAnimatedShader::sAttrs");

	// SpawnEffectComponent
	set_name(0x138a3f8, "RTTI_SpawnEffectComponent");
	apply_type(0x138a3f8, "RTTICompound");
	del_items(0x138cd0c, DELIT_SIMPLE, 8);
	apply_type(0x138cd0c, "RTTIBase[1]");
	set_name(0x138cd0c, "SpawnEffectComponent::sBases");

	// SpawnEffectComponentRep
	set_name(0x138a44c, "RTTI_SpawnEffectComponentRep");
	apply_type(0x138a44c, "RTTICompound");
	del_items(0x138cd18, DELIT_SIMPLE, 8);
	apply_type(0x138cd18, "RTTIBase[1]");
	set_name(0x138cd18, "SpawnEffectComponentRep::sBases");

	// SpawnEffectComponentResource
	set_name(0x138a5bc, "RTTI_SpawnEffectComponentResource");
	apply_type(0x138a5bc, "RTTICompound");
	del_items(0x138ccac, DELIT_SIMPLE, 8);
	apply_type(0x138ccac, "RTTIBase[1]");
	set_name(0x138ccac, "SpawnEffectComponentResource::sBases");
	del_items(0x138ccb4, DELIT_SIMPLE, 84);
	apply_type(0x138ccb4, "RTTIAttr[3]");
	set_name(0x138ccb4, "SpawnEffectComponentResource::sAttrs");

	// SpawnEffectTimedMeshSwitch
	set_name(0x138a504, "RTTI_SpawnEffectTimedMeshSwitch");
	apply_type(0x138a504, "RTTICompound");
	del_items(0x138cc20, DELIT_SIMPLE, 84);
	apply_type(0x138cc20, "RTTIAttr[3]");
	set_name(0x138cc20, "SpawnEffectTimedMeshSwitch::sAttrs");

	// SpawnSelectTag
	set_name(0x13ba4b8, "RTTI_SpawnSelectTag");
	apply_type(0x13ba4b8, "RTTICompound");
	del_items(0x13bc10c, DELIT_SIMPLE, 8);
	apply_type(0x13bc10c, "RTTIBase[1]");
	set_name(0x13bc10c, "SpawnSelectTag::sBases");
	del_items(0x13bc114, DELIT_SIMPLE, 96);
	apply_type(0x13bc114, "RTTIFunction[4]");
	set_name(0x13bc114, "SpawnSelectTag::sFunctions");

	// SpawnSelectWidget
	set_name(0x13ba65c, "RTTI_SpawnSelectWidget");
	apply_type(0x13ba65c, "RTTICompound");
	del_items(0x13bc3cc, DELIT_SIMPLE, 8);
	apply_type(0x13bc3cc, "RTTIBase[1]");
	set_name(0x13bc3cc, "SpawnSelectWidget::sBases");

	// SpawnSelectWidgetResource
	set_name(0x13ba6b0, "RTTI_SpawnSelectWidgetResource");
	apply_type(0x13ba6b0, "RTTICompound");
	del_items(0x13bc3d4, DELIT_SIMPLE, 8);
	apply_type(0x13bc3d4, "RTTIBase[1]");
	set_name(0x13bc3d4, "SpawnSelectWidgetResource::sBases");
	del_items(0x13bc3dc, DELIT_SIMPLE, 168);
	apply_type(0x13bc3dc, "RTTIAttr[6]");
	set_name(0x13bc3dc, "SpawnSelectWidgetResource::sAttrs");

	// SpeakEventInstance
	set_name(0x139873c, "RTTI_SpeakEventInstance");
	apply_type(0x139873c, "RTTICompound");
	del_items(0x1399f08, DELIT_SIMPLE, 8);
	apply_type(0x1399f08, "RTTIBase[1]");
	set_name(0x1399f08, "SpeakEventInstance::sBases");

	// SpeakEventResource
	set_name(0x13986e8, "RTTI_SpeakEventResource");
	apply_type(0x13986e8, "RTTICompound");
	del_items(0x1399e90, DELIT_SIMPLE, 8);
	apply_type(0x1399e90, "RTTIBase[1]");
	set_name(0x1399e90, "SpeakEventResource::sBases");
	del_items(0x1399e98, DELIT_SIMPLE, 112);
	apply_type(0x1399e98, "RTTIAttr[4]");
	set_name(0x1399e98, "SpeakEventResource::sAttrs");

	// Spear
	set_name(0x13a0a44, "RTTI_Spear");
	apply_type(0x13a0a44, "RTTICompound");
	del_items(0x13a1c34, DELIT_SIMPLE, 8);
	apply_type(0x13a1c34, "RTTIBase[1]");
	set_name(0x13a1c34, "Spear::sBases");

	// SpearRep
	set_name(0x13a0a98, "RTTI_SpearRep");
	apply_type(0x13a0a98, "RTTICompound");
	del_items(0x13a1c3c, DELIT_SIMPLE, 8);
	apply_type(0x13a1c3c, "RTTIBase[1]");
	set_name(0x13a1c3c, "SpearRep::sBases");

	// SpearResource
	set_name(0x13a0afc, "RTTI_SpearResource");
	apply_type(0x13a0afc, "RTTICompound");
	del_items(0x13a1c50, DELIT_SIMPLE, 8);
	apply_type(0x13a1c50, "RTTIBase[1]");
	set_name(0x13a1c50, "SpearResource::sBases");
	del_items(0x13a1c58, DELIT_SIMPLE, 1064);
	apply_type(0x13a1c58, "RTTIAttr[38]");
	set_name(0x13a1c58, "SpearResource::sAttrs");

	// SpectatorCameraEntity
	set_name(0x137a6f8, "RTTI_SpectatorCameraEntity");
	apply_type(0x137a6f8, "RTTICompound");
	del_items(0x137c2d0, DELIT_SIMPLE, 8);
	apply_type(0x137c2d0, "RTTIBase[1]");
	set_name(0x137c2d0, "SpectatorCameraEntity::sBases");

	// SpectatorCameraEntityResource
	set_name(0x137a74c, "RTTI_SpectatorCameraEntityResource");
	apply_type(0x137a74c, "RTTICompound");
	del_items(0x137c2e4, DELIT_SIMPLE, 8);
	apply_type(0x137c2e4, "RTTIBase[1]");
	set_name(0x137c2e4, "SpectatorCameraEntityResource::sBases");
	del_items(0x137c2ec, DELIT_SIMPLE, 252);
	apply_type(0x137c2ec, "RTTIAttr[9]");
	set_name(0x137c2ec, "SpectatorCameraEntityResource::sAttrs");

	// SpotLight
	set_name(0x1345430, "RTTI_SpotLight");
	apply_type(0x1345430, "RTTICompound");
	del_items(0x1346b78, DELIT_SIMPLE, 8);
	apply_type(0x1346b78, "RTTIBase[1]");
	set_name(0x1346b78, "SpotLight::sBases");
	del_items(0x1346b80, DELIT_SIMPLE, 224);
	apply_type(0x1346b80, "RTTIAttr[8]");
	set_name(0x1346b80, "SpotLight::sAttrs");
	del_items(0x1346c60, DELIT_SIMPLE, 12);
	apply_type(0x1346c60, "RTTIMessageHandler[1]");
	set_name(0x1346c60, "SpotLight::sMessageHandlers");

	// SpotLightResource
	set_name(0x1347c68, "RTTI_SpotLightResource");
	apply_type(0x1347c68, "RTTICompound");
	del_items(0x1349a88, DELIT_SIMPLE, 8);
	apply_type(0x1349a88, "RTTIBase[1]");
	set_name(0x1349a88, "SpotLightResource::sBases");
	del_items(0x1349a90, DELIT_SIMPLE, 196);
	apply_type(0x1349a90, "RTTIAttr[7]");
	set_name(0x1349a90, "SpotLightResource::sAttrs");

	// Spring
	set_name(0x13bc714, "RTTI_Spring");
	apply_type(0x13bc714, "RTTICompound");
	del_items(0x13bcc28, DELIT_SIMPLE, 8);
	apply_type(0x13bcc28, "RTTIBase[1]");
	set_name(0x13bcc28, "Spring::sBases");

	// SpringResource
	set_name(0x13bc778, "RTTI_SpringResource");
	apply_type(0x13bc778, "RTTICompound");
	del_items(0x13bcbb0, DELIT_SIMPLE, 8);
	apply_type(0x13bcbb0, "RTTIBase[1]");
	set_name(0x13bcbb0, "SpringResource::sBases");
	del_items(0x13bcbb8, DELIT_SIMPLE, 112);
	apply_type(0x13bcbb8, "RTTIAttr[4]");
	set_name(0x13bcbb8, "SpringResource::sAttrs");

	// StartAnimationAction
	set_name(0x137679c, "RTTI_StartAnimationAction");
	apply_type(0x137679c, "RTTICompound");
	del_items(0x1377d38, DELIT_SIMPLE, 8);
	apply_type(0x1377d38, "RTTIBase[1]");
	set_name(0x1377d38, "StartAnimationAction::sBases");
	del_items(0x1377d40, DELIT_SIMPLE, 112);
	apply_type(0x1377d40, "RTTIAttr[4]");
	set_name(0x1377d40, "StartAnimationAction::sAttrs");

	// StartSequenceEventInstance
	set_name(0x13987e4, "RTTI_StartSequenceEventInstance");
	apply_type(0x13987e4, "RTTICompound");
	del_items(0x1399f6c, DELIT_SIMPLE, 8);
	apply_type(0x1399f6c, "RTTIBase[1]");
	set_name(0x1399f6c, "StartSequenceEventInstance::sBases");

	// StartSequenceEventResource
	set_name(0x1398790, "RTTI_StartSequenceEventResource");
	apply_type(0x1398790, "RTTICompound");
	del_items(0x1399f10, DELIT_SIMPLE, 8);
	apply_type(0x1399f10, "RTTIBase[1]");
	set_name(0x1399f10, "StartSequenceEventResource::sBases");
	del_items(0x1399f18, DELIT_SIMPLE, 84);
	apply_type(0x1399f18, "RTTIAttr[3]");
	set_name(0x1399f18, "StartSequenceEventResource::sAttrs");

	// Stat
	set_name(0x136d778, "RTTI_Stat");
	apply_type(0x136d778, "RTTICompound");
	del_items(0x136f284, DELIT_SIMPLE, 140);
	apply_type(0x136f284, "RTTIAttr[5]");
	set_name(0x136f284, "Stat::sAttrs");

	// StatChangeRibbonResource
	set_name(0x13b2cd8, "RTTI_StatChangeRibbonResource");
	apply_type(0x13b2cd8, "RTTICompound");
	del_items(0x13b39f8, DELIT_SIMPLE, 8);
	apply_type(0x13b39f8, "RTTIBase[1]");
	set_name(0x13b39f8, "StatChangeRibbonResource::sBases");
	del_items(0x13b3a00, DELIT_SIMPLE, 112);
	apply_type(0x13b3a00, "RTTIAttr[4]");
	set_name(0x13b3a00, "StatChangeRibbonResource::sAttrs");

	// StatResource
	set_name(0x13ba880, "RTTI_StatResource");
	apply_type(0x13ba880, "RTTICompound");
	del_items(0x13bc484, DELIT_SIMPLE, 112);
	apply_type(0x13bc484, "RTTIAttr[4]");
	set_name(0x13bc484, "StatResource::sAttrs");

	// StateBasedDestructibilityResource
	set_name(0x135e044, "RTTI_StateBasedDestructibilityResource");
	apply_type(0x135e044, "RTTICompound");
	del_items(0x1360f88, DELIT_SIMPLE, 8);
	apply_type(0x1360f88, "RTTIBase[1]");
	set_name(0x1360f88, "StateBasedDestructibilityResource::sBases");

	// StateDiagramSkeletonAnimationResource
	set_name(0x1356800, "RTTI_StateDiagramSkeletonAnimationResource");
	apply_type(0x1356800, "RTTICompound");
	del_items(0x13587ec, DELIT_SIMPLE, 8);
	apply_type(0x13587ec, "RTTIBase[1]");
	set_name(0x13587ec, "StateDiagramSkeletonAnimationResource::sBases");
	del_items(0x13587f4, DELIT_SIMPLE, 56);
	apply_type(0x13587f4, "RTTIAttr[2]");
	set_name(0x13587f4, "StateDiagramSkeletonAnimationResource::sAttrs");

	// StateObject
	set_name(0x134a294, "RTTI_StateObject");
	apply_type(0x134a294, "RTTICompound");

	// StateSwitch
	set_name(0x13364c8, "RTTI_StateSwitch");
	apply_type(0x13364c8, "RTTICompound");
	del_items(0x1337d54, DELIT_SIMPLE, 308);
	apply_type(0x1337d54, "RTTIAttr[11]");
	set_name(0x1337d54, "StateSwitch::sAttrs");

	// StaticMeshActorResource
	set_name(0x139ad58, "RTTI_StaticMeshActorResource");
	apply_type(0x139ad58, "RTTICompound");
	del_items(0x139be54, DELIT_SIMPLE, 8);
	apply_type(0x139be54, "RTTIBase[1]");
	set_name(0x139be54, "StaticMeshActorResource::sBases");
	del_items(0x139be5c, DELIT_SIMPLE, 56);
	apply_type(0x139be5c, "RTTIAttr[2]");
	set_name(0x139be5c, "StaticMeshActorResource::sAttrs");

	// StaticMeshInstance
	set_name(0x133b8e8, "RTTI_StaticMeshInstance");
	apply_type(0x133b8e8, "RTTICompound");
	del_items(0x133bff8, DELIT_SIMPLE, 8);
	apply_type(0x133bff8, "RTTIBase[1]");
	set_name(0x133bff8, "StaticMeshInstance::sBases");
	del_items(0x133c000, DELIT_SIMPLE, 252);
	apply_type(0x133c000, "RTTIAttr[9]");
	set_name(0x133c000, "StaticMeshInstance::sAttrs");
	del_items(0x133c0fc, DELIT_SIMPLE, 24);
	apply_type(0x133c0fc, "RTTIMessageHandler[2]");
	set_name(0x133c0fc, "StaticMeshInstance::sMessageHandlers");

	// StaticMeshResource
	set_name(0x133b95c, "RTTI_StaticMeshResource");
	apply_type(0x133b95c, "RTTICompound");
	del_items(0x133be04, DELIT_SIMPLE, 8);
	apply_type(0x133be04, "RTTIBase[1]");
	set_name(0x133be04, "StaticMeshResource::sBases");
	del_items(0x133be0c, DELIT_SIMPLE, 252);
	apply_type(0x133be0c, "RTTIAttr[9]");
	set_name(0x133be0c, "StaticMeshResource::sAttrs");

	// StaticModel
	set_name(0x136279c, "RTTI_StaticModel");
	apply_type(0x136279c, "RTTICompound");
	del_items(0x1364184, DELIT_SIMPLE, 8);
	apply_type(0x1364184, "RTTIBase[1]");
	set_name(0x1364184, "StaticModel::sBases");

	// StaticModelActorBaseInstance
	set_name(0x139ae54, "RTTI_StaticModelActorBaseInstance");
	apply_type(0x139ae54, "RTTICompound");
	del_items(0x139be4c, DELIT_SIMPLE, 8);
	apply_type(0x139be4c, "RTTIBase[1]");
	set_name(0x139be4c, "StaticModelActorBaseInstance::sBases");

	// StaticModelActorBaseResource
	set_name(0x139ae00, "RTTI_StaticModelActorBaseResource");
	apply_type(0x139ae00, "RTTICompound");
	del_items(0x139be44, DELIT_SIMPLE, 8);
	apply_type(0x139be44, "RTTIBase[1]");
	set_name(0x139be44, "StaticModelActorBaseResource::sBases");

	// StaticModelActorResource
	set_name(0x139adac, "RTTI_StaticModelActorResource");
	apply_type(0x139adac, "RTTICompound");
	del_items(0x139be94, DELIT_SIMPLE, 8);
	apply_type(0x139be94, "RTTIBase[1]");
	set_name(0x139be94, "StaticModelActorResource::sBases");
	del_items(0x139be9c, DELIT_SIMPLE, 56);
	apply_type(0x139be9c, "RTTIAttr[2]");
	set_name(0x139be9c, "StaticModelActorResource::sAttrs");

	// StaticModelEntityResource
	set_name(0x139b158, "RTTI_StaticModelEntityResource");
	apply_type(0x139b158, "RTTICompound");
	del_items(0x139bfe4, DELIT_SIMPLE, 8);
	apply_type(0x139bfe4, "RTTIBase[1]");
	set_name(0x139bfe4, "StaticModelEntityResource::sBases");

	// StaticModelResource
	set_name(0x1362800, "RTTI_StaticModelResource");
	apply_type(0x1362800, "RTTICompound");
	del_items(0x1364160, DELIT_SIMPLE, 8);
	apply_type(0x1364160, "RTTIBase[1]");
	set_name(0x1364160, "StaticModelResource::sBases");
	del_items(0x1364168, DELIT_SIMPLE, 28);
	apply_type(0x1364168, "RTTIAttr[1]");
	set_name(0x1364168, "StaticModelResource::sAttrs");

	// StopEmitElectricityAction
	set_name(0x1376f28, "RTTI_StopEmitElectricityAction");
	apply_type(0x1376f28, "RTTICompound");
	del_items(0x1378464, DELIT_SIMPLE, 8);
	apply_type(0x1378464, "RTTIBase[1]");
	set_name(0x1378464, "StopEmitElectricityAction::sBases");

	// StopSequenceEventInstance
	set_name(0x139888c, "RTTI_StopSequenceEventInstance");
	apply_type(0x139888c, "RTTICompound");
	del_items(0x1399f7c, DELIT_SIMPLE, 8);
	apply_type(0x1399f7c, "RTTIBase[1]");
	set_name(0x1399f7c, "StopSequenceEventInstance::sBases");

	// StopSequenceEventResource
	set_name(0x1398838, "RTTI_StopSequenceEventResource");
	apply_type(0x1398838, "RTTICompound");
	del_items(0x1399f74, DELIT_SIMPLE, 8);
	apply_type(0x1399f74, "RTTIBase[1]");
	set_name(0x1399f74, "StopSequenceEventResource::sBases");

	// StreamOverride
	set_name(0x13455e4, "RTTI_StreamOverride");
	apply_type(0x13455e4, "RTTICompound");
	del_items(0x1345f00, DELIT_SIMPLE, 56);
	apply_type(0x1345f00, "RTTIAttr[2]");
	set_name(0x1345f00, "StreamOverride::sAttrs");

	// StreamedOutEntity
	set_name(0x135d630, "RTTI_StreamedOutEntity");
	apply_type(0x135d630, "RTTICompound");
	del_items(0x13605b4, DELIT_SIMPLE, 16);
	apply_type(0x13605b4, "RTTIBase[2]");
	set_name(0x13605b4, "StreamedOutEntity::sBases");
	del_items(0x13605c4, DELIT_SIMPLE, 168);
	apply_type(0x13605c4, "RTTIFunction[7]");
	set_name(0x13605c4, "StreamedOutEntity::sFunctions");

	// StreamingHintTrigger
	set_name(0x135c048, "RTTI_StreamingHintTrigger");
	apply_type(0x135c048, "RTTICompound");
	del_items(0x135c234, DELIT_SIMPLE, 8);
	apply_type(0x135c234, "RTTIBase[1]");
	set_name(0x135c234, "StreamingHintTrigger::sBases");
	del_items(0x135c23c, DELIT_SIMPLE, 140);
	apply_type(0x135c23c, "RTTIAttr[5]");
	set_name(0x135c23c, "StreamingHintTrigger::sAttrs");

	// StreamingSectionManager
	set_name(0x135c09c, "RTTI_StreamingSectionManager");
	apply_type(0x135c09c, "RTTICompound");
	del_items(0x135c2d0, DELIT_SIMPLE, 8);
	apply_type(0x135c2d0, "RTTIBase[1]");
	set_name(0x135c2d0, "StreamingSectionManager::sBases");

	// SubGoalPausableEventInstance
	set_name(0x1398934, "RTTI_SubGoalPausableEventInstance");
	apply_type(0x1398934, "RTTICompound");
	del_items(0x1398f68, DELIT_SIMPLE, 8);
	apply_type(0x1398f68, "RTTIBase[1]");
	set_name(0x1398f68, "SubGoalPausableEventInstance::sBases");

	// SubGoalPausableEventResource
	set_name(0x13988e0, "RTTI_SubGoalPausableEventResource");
	apply_type(0x13988e0, "RTTICompound");
	del_items(0x1398f60, DELIT_SIMPLE, 8);
	apply_type(0x1398f60, "RTTIBase[1]");
	set_name(0x1398f60, "SubGoalPausableEventResource::sBases");

	// SubmixPresetEventInstance
	set_name(0x13985e8, "RTTI_SubmixPresetEventInstance");
	apply_type(0x13985e8, "RTTICompound");
	del_items(0x1399e24, DELIT_SIMPLE, 8);
	apply_type(0x1399e24, "RTTIBase[1]");
	set_name(0x1399e24, "SubmixPresetEventInstance::sBases");

	// SubmixPresetEventResource
	set_name(0x1398594, "RTTI_SubmixPresetEventResource");
	apply_type(0x1398594, "RTTICompound");
	del_items(0x1399de4, DELIT_SIMPLE, 8);
	apply_type(0x1399de4, "RTTIBase[1]");
	set_name(0x1399de4, "SubmixPresetEventResource::sBases");
	del_items(0x1399dec, DELIT_SIMPLE, 56);
	apply_type(0x1399dec, "RTTIAttr[2]");
	set_name(0x1399dec, "SubmixPresetEventResource::sAttrs");

	// SubmixPresetResource
	set_name(0x1359dfc, "RTTI_SubmixPresetResource");
	apply_type(0x1359dfc, "RTTICompound");
	del_items(0x135a96c, DELIT_SIMPLE, 8);
	apply_type(0x135a96c, "RTTIBase[1]");
	set_name(0x135a96c, "SubmixPresetResource::sBases");
	del_items(0x135a974, DELIT_SIMPLE, 1232);
	apply_type(0x135a974, "RTTIAttr[44]");
	set_name(0x135a974, "SubmixPresetResource::sAttrs");

	// Subtitle
	set_name(0x136ca50, "RTTI_Subtitle");
	apply_type(0x136ca50, "RTTICompound");
	del_items(0x136fbf0, DELIT_SIMPLE, 84);
	apply_type(0x136fbf0, "RTTIAttr[3]");
	set_name(0x136fbf0, "Subtitle::sAttrs");

	// SunCascadeSettings
	set_name(0x1345494, "RTTI_SunCascadeSettings");
	apply_type(0x1345494, "RTTICompound");
	del_items(0x1346c74, DELIT_SIMPLE, 140);
	apply_type(0x1346c74, "RTTIAttr[5]");
	set_name(0x1346c74, "SunCascadeSettings::sAttrs");

	// SunLight
	set_name(0x13454e8, "RTTI_SunLight");
	apply_type(0x13454e8, "RTTICompound");
	del_items(0x1346d00, DELIT_SIMPLE, 8);
	apply_type(0x1346d00, "RTTIBase[1]");
	set_name(0x1346d00, "SunLight::sBases");
	del_items(0x1346d08, DELIT_SIMPLE, 504);
	apply_type(0x1346d08, "RTTIAttr[18]");
	set_name(0x1346d08, "SunLight::sAttrs");
	del_items(0x1346f00, DELIT_SIMPLE, 12);
	apply_type(0x1346f00, "RTTIMessageHandler[1]");
	set_name(0x1346f00, "SunLight::sMessageHandlers");

	// SunLightResource
	set_name(0x1347cbc, "RTTI_SunLightResource");
	apply_type(0x1347cbc, "RTTICompound");
	del_items(0x1349b54, DELIT_SIMPLE, 8);
	apply_type(0x1349b54, "RTTIBase[1]");
	set_name(0x1349b54, "SunLightResource::sBases");
	del_items(0x1349b5c, DELIT_SIMPLE, 504);
	apply_type(0x1349b5c, "RTTIAttr[18]");
	set_name(0x1349b5c, "SunLightResource::sAttrs");

	// SurfaceFormat
	set_name(0x132c0bc, "RTTI_SurfaceFormat");
	apply_type(0x132c0bc, "RTTICompound");
	del_items(0x132c1d4, DELIT_SIMPLE, 84);
	apply_type(0x132c1d4, "RTTIAttr[3]");
	set_name(0x132c1d4, "SurfaceFormat::sAttrs");

	// SuspendPlayerControlEventInstance
	set_name(0x13989dc, "RTTI_SuspendPlayerControlEventInstance");
	apply_type(0x13989dc, "RTTICompound");
	del_items(0x139a034, DELIT_SIMPLE, 8);
	apply_type(0x139a034, "RTTIBase[1]");
	set_name(0x139a034, "SuspendPlayerControlEventInstance::sBases");

	// SuspendPlayerControlEventResource
	set_name(0x1398988, "RTTI_SuspendPlayerControlEventResource");
	apply_type(0x1398988, "RTTICompound");
	del_items(0x1399f84, DELIT_SIMPLE, 8);
	apply_type(0x1399f84, "RTTIBase[1]");
	set_name(0x1399f84, "SuspendPlayerControlEventResource::sBases");
	del_items(0x1399f8c, DELIT_SIMPLE, 168);
	apply_type(0x1399f8c, "RTTIAttr[6]");
	set_name(0x1399f8c, "SuspendPlayerControlEventResource::sAttrs");

	// SuspensionUnit
	set_name(0x1383560, "RTTI_SuspensionUnit");
	apply_type(0x1383560, "RTTICompound");
	del_items(0x13846e0, DELIT_SIMPLE, 112);
	apply_type(0x13846e0, "RTTIAttr[4]");
	set_name(0x13846e0, "SuspensionUnit::sAttrs");

	// Switch
	set_name(0x1380030, "RTTI_Switch");
	apply_type(0x1380030, "RTTICompound");
	del_items(0x1381d10, DELIT_SIMPLE, 8);
	apply_type(0x1381d10, "RTTIBase[1]");
	set_name(0x1381d10, "Switch::sBases");
	del_items(0x1381d18, DELIT_SIMPLE, 216);
	apply_type(0x1381d18, "RTTIFunction[9]");
	set_name(0x1381d18, "Switch::sFunctions");

	// SwitchCoverHeightAction
	set_name(0x1376b38, "RTTI_SwitchCoverHeightAction");
	apply_type(0x1376b38, "RTTICompound");
	del_items(0x1378110, DELIT_SIMPLE, 8);
	apply_type(0x1378110, "RTTIBase[1]");
	set_name(0x1378110, "SwitchCoverHeightAction::sBases");
	del_items(0x1378118, DELIT_SIMPLE, 56);
	apply_type(0x1378118, "RTTIAttr[2]");
	set_name(0x1378118, "SwitchCoverHeightAction::sAttrs");

	// SwitchMeshResource
	set_name(0x133b788, "RTTI_SwitchMeshResource");
	apply_type(0x133b788, "RTTICompound");
	del_items(0x133bd8c, DELIT_SIMPLE, 8);
	apply_type(0x133bd8c, "RTTIBase[1]");
	set_name(0x133bd8c, "SwitchMeshResource::sBases");
	del_items(0x133bd94, DELIT_SIMPLE, 112);
	apply_type(0x133bd94, "RTTIAttr[4]");
	set_name(0x133bd94, "SwitchMeshResource::sAttrs");

	// SwitchMeshResourcePart
	set_name(0x133b734, "RTTI_SwitchMeshResourcePart");
	apply_type(0x133b734, "RTTICompound");
	del_items(0x133bd54, DELIT_SIMPLE, 56);
	apply_type(0x133bd54, "RTTIAttr[2]");
	set_name(0x133bd54, "SwitchMeshResourcePart::sAttrs");

	// SwitchObstacleTypeAction
	set_name(0x1376b8c, "RTTI_SwitchObstacleTypeAction");
	apply_type(0x1376b8c, "RTTICompound");
	del_items(0x1378150, DELIT_SIMPLE, 8);
	apply_type(0x1378150, "RTTIBase[1]");
	set_name(0x1378150, "SwitchObstacleTypeAction::sBases");
	del_items(0x1378158, DELIT_SIMPLE, 56);
	apply_type(0x1378158, "RTTIAttr[2]");
	set_name(0x1378158, "SwitchObstacleTypeAction::sAttrs");

	// SwitchRep
	set_name(0x13800e8, "RTTI_SwitchRep");
	apply_type(0x13800e8, "RTTICompound");
	del_items(0x1381df0, DELIT_SIMPLE, 8);
	apply_type(0x1381df0, "RTTIBase[1]");
	set_name(0x1381df0, "SwitchRep::sBases");

	// SwitchResource
	set_name(0x1380094, "RTTI_SwitchResource");
	apply_type(0x1380094, "RTTICompound");
	del_items(0x1381bb8, DELIT_SIMPLE, 8);
	apply_type(0x1381bb8, "RTTIBase[1]");
	set_name(0x1381bb8, "SwitchResource::sBases");
	del_items(0x1381bc0, DELIT_SIMPLE, 336);
	apply_type(0x1381bc0, "RTTIAttr[12]");
	set_name(0x1381bc0, "SwitchResource::sAttrs");

	// SwitchStateAction
	set_name(0x13762f4, "RTTI_SwitchStateAction");
	apply_type(0x13762f4, "RTTICompound");
	del_items(0x137761c, DELIT_SIMPLE, 8);
	apply_type(0x137761c, "RTTIBase[1]");
	set_name(0x137761c, "SwitchStateAction::sBases");
	del_items(0x1377624, DELIT_SIMPLE, 56);
	apply_type(0x1377624, "RTTIAttr[2]");
	set_name(0x1377624, "SwitchStateAction::sAttrs");

	// TabTag
	set_name(0x133d414, "RTTI_TabTag");
	apply_type(0x133d414, "RTTICompound");
	del_items(0x133f524, DELIT_SIMPLE, 8);
	apply_type(0x133f524, "RTTIBase[1]");
	set_name(0x133f524, "TabTag::sBases");

	// TabWidget
	set_name(0x133ddec, "RTTI_TabWidget");
	apply_type(0x133ddec, "RTTICompound");
	del_items(0x133f870, DELIT_SIMPLE, 8);
	apply_type(0x133f870, "RTTIBase[1]");
	set_name(0x133f870, "TabWidget::sBases");

	// TabboxTag
	set_name(0x133d36c, "RTTI_TabboxTag");
	apply_type(0x133d36c, "RTTICompound");
	del_items(0x133f514, DELIT_SIMPLE, 8);
	apply_type(0x133f514, "RTTIBase[1]");
	set_name(0x133f514, "TabboxTag::sBases");

	// TabboxWidget
	set_name(0x133dcf0, "RTTI_TabboxWidget");
	apply_type(0x133dcf0, "RTTICompound");
	del_items(0x133f7e8, DELIT_SIMPLE, 8);
	apply_type(0x133f7e8, "RTTIBase[1]");
	set_name(0x133f7e8, "TabboxWidget::sBases");

	// TabboxWidgetResource
	set_name(0x133dd44, "RTTI_TabboxWidgetResource");
	apply_type(0x133dd44, "RTTICompound");
	del_items(0x133f7f0, DELIT_SIMPLE, 8);
	apply_type(0x133f7f0, "RTTIBase[1]");
	set_name(0x133f7f0, "TabboxWidgetResource::sBases");
	del_items(0x133f7f8, DELIT_SIMPLE, 112);
	apply_type(0x133f7f8, "RTTIAttr[4]");
	set_name(0x133f7f8, "TabboxWidgetResource::sAttrs");

	// TabpaneTag
	set_name(0x133d3c0, "RTTI_TabpaneTag");
	apply_type(0x133d3c0, "RTTICompound");
	del_items(0x133f51c, DELIT_SIMPLE, 8);
	apply_type(0x133f51c, "RTTIBase[1]");
	set_name(0x133f51c, "TabpaneTag::sBases");

	// TabpaneWidget
	set_name(0x133dd98, "RTTI_TabpaneWidget");
	apply_type(0x133dd98, "RTTICompound");
	del_items(0x133f868, DELIT_SIMPLE, 8);
	apply_type(0x133f868, "RTTIBase[1]");
	set_name(0x133f868, "TabpaneWidget::sBases");

	// Tag
	set_name(0x133c964, "RTTI_Tag");
	apply_type(0x133c964, "RTTICompound");
	del_items(0x133e7e8, DELIT_SIMPLE, 8);
	apply_type(0x133e7e8, "RTTIBase[1]");
	set_name(0x133e7e8, "Tag::sBases");
	del_items(0x133e7f0, DELIT_SIMPLE, 336);
	apply_type(0x133e7f0, "RTTIFunction[14]");
	set_name(0x133e7f0, "Tag::sFunctions");

	// TagEvent
	set_name(0x133c574, "RTTI_TagEvent");
	apply_type(0x133c574, "RTTICompound");
	del_items(0x133e6e0, DELIT_SIMPLE, 8);
	apply_type(0x133e6e0, "RTTIBase[1]");
	set_name(0x133e6e0, "TagEvent::sBases");
	del_items(0x133e6e8, DELIT_SIMPLE, 120);
	apply_type(0x133e6e8, "RTTIFunction[5]");
	set_name(0x133e6e8, "TagEvent::sFunctions");

	// TagEventFocusOff
	set_name(0x133c76c, "RTTI_TagEventFocusOff");
	apply_type(0x133c76c, "RTTICompound");
	del_items(0x133e7a0, DELIT_SIMPLE, 8);
	apply_type(0x133e7a0, "RTTIBase[1]");
	set_name(0x133e7a0, "TagEventFocusOff::sBases");

	// TagEventFocusOn
	set_name(0x133c718, "RTTI_TagEventFocusOn");
	apply_type(0x133c718, "RTTICompound");
	del_items(0x133e798, DELIT_SIMPLE, 8);
	apply_type(0x133e798, "RTTIBase[1]");
	set_name(0x133e798, "TagEventFocusOn::sBases");

	// TagEventInit
	set_name(0x133c6c4, "RTTI_TagEventInit");
	apply_type(0x133c6c4, "RTTICompound");
	del_items(0x133e790, DELIT_SIMPLE, 8);
	apply_type(0x133e790, "RTTIBase[1]");
	set_name(0x133e790, "TagEventInit::sBases");

	// TagEventInput
	set_name(0x133c5c8, "RTTI_TagEventInput");
	apply_type(0x133c5c8, "RTTICompound");
	del_items(0x133e760, DELIT_SIMPLE, 8);
	apply_type(0x133e760, "RTTIBase[1]");
	set_name(0x133e760, "TagEventInput::sBases");
	del_items(0x133e768, DELIT_SIMPLE, 24);
	apply_type(0x133e768, "RTTIFunction[1]");
	set_name(0x133e768, "TagEventInput::sFunctions");

	// TagEventMenuStateChanged
	set_name(0x133c8bc, "RTTI_TagEventMenuStateChanged");
	apply_type(0x133c8bc, "RTTICompound");
	del_items(0x133e7d8, DELIT_SIMPLE, 8);
	apply_type(0x133e7d8, "RTTIBase[1]");
	set_name(0x133e7d8, "TagEventMenuStateChanged::sBases");

	// TagEventPageOff
	set_name(0x133c670, "RTTI_TagEventPageOff");
	apply_type(0x133c670, "RTTICompound");
	del_items(0x133e788, DELIT_SIMPLE, 8);
	apply_type(0x133e788, "RTTIBase[1]");
	set_name(0x133e788, "TagEventPageOff::sBases");

	// TagEventPageOn
	set_name(0x133c61c, "RTTI_TagEventPageOn");
	apply_type(0x133c61c, "RTTICompound");
	del_items(0x133e780, DELIT_SIMPLE, 8);
	apply_type(0x133e780, "RTTIBase[1]");
	set_name(0x133e780, "TagEventPageOn::sBases");

	// TagEventPostInit
	set_name(0x133c868, "RTTI_TagEventPostInit");
	apply_type(0x133c868, "RTTICompound");
	del_items(0x133e7d0, DELIT_SIMPLE, 8);
	apply_type(0x133e7d0, "RTTIBase[1]");
	set_name(0x133e7d0, "TagEventPostInit::sBases");

	// TagEventVKBClose
	set_name(0x133c814, "RTTI_TagEventVKBClose");
	apply_type(0x133c814, "RTTICompound");
	del_items(0x133e7b0, DELIT_SIMPLE, 8);
	apply_type(0x133e7b0, "RTTIBase[1]");
	set_name(0x133e7b0, "TagEventVKBClose::sBases");
	del_items(0x133e7b8, DELIT_SIMPLE, 24);
	apply_type(0x133e7b8, "RTTIFunction[1]");
	set_name(0x133e7b8, "TagEventVKBClose::sFunctions");

	// TagEventValueChanged
	set_name(0x133c7c0, "RTTI_TagEventValueChanged");
	apply_type(0x133c7c0, "RTTICompound");
	del_items(0x133e7a8, DELIT_SIMPLE, 8);
	apply_type(0x133e7a8, "RTTIBase[1]");
	set_name(0x133e7a8, "TagEventValueChanged::sBases");

	// Tank
	set_name(0x1383064, "RTTI_Tank");
	apply_type(0x1383064, "RTTICompound");
	del_items(0x1384cb4, DELIT_SIMPLE, 8);
	apply_type(0x1384cb4, "RTTIBase[1]");
	set_name(0x1384cb4, "Tank::sBases");
	del_items(0x1384cbc, DELIT_SIMPLE, 48);
	apply_type(0x1384cbc, "RTTIFunction[2]");
	set_name(0x1384cbc, "Tank::sFunctions");

	// TankJoystickController
	set_name(0x13832b0, "RTTI_TankJoystickController");
	apply_type(0x13832b0, "RTTICompound");
	del_items(0x13850a4, DELIT_SIMPLE, 8);
	apply_type(0x13850a4, "RTTIBase[1]");
	set_name(0x13850a4, "TankJoystickController::sBases");

	// TankRep
	set_name(0x13833ac, "RTTI_TankRep");
	apply_type(0x13833ac, "RTTICompound");
	del_items(0x13850bc, DELIT_SIMPLE, 8);
	apply_type(0x13850bc, "RTTIBase[1]");
	set_name(0x13850bc, "TankRep::sBases");

	// TankResource
	set_name(0x13834a8, "RTTI_TankResource");
	apply_type(0x13834a8, "RTTICompound");
	del_items(0x1384a7c, DELIT_SIMPLE, 8);
	apply_type(0x1384a7c, "RTTIBase[1]");
	set_name(0x1384a7c, "TankResource::sBases");
	del_items(0x1384a84, DELIT_SIMPLE, 560);
	apply_type(0x1384a84, "RTTIAttr[20]");
	set_name(0x1384a84, "TankResource::sAttrs");

	// TargetBoneSetFlags
	set_name(0x1356980, "RTTI_TargetBoneSetFlags");
	apply_type(0x1356980, "RTTICompound");
	del_items(0x1357794, DELIT_SIMPLE, 56);
	apply_type(0x1357794, "RTTIAttr[2]");
	set_name(0x1357794, "TargetBoneSetFlags::sAttrs");

	// TemplateTag
	set_name(0x133cc04, "RTTI_TemplateTag");
	apply_type(0x133cc04, "RTTICompound");
	del_items(0x133f5ac, DELIT_SIMPLE, 8);
	apply_type(0x133f5ac, "RTTIBase[1]");
	set_name(0x133f5ac, "TemplateTag::sBases");
	del_items(0x133f5b4, DELIT_SIMPLE, 24);
	apply_type(0x133f5b4, "RTTIFunction[1]");
	set_name(0x133f5b4, "TemplateTag::sFunctions");

	// TerrainAimReticuleResource
	set_name(0x13a0dcc, "RTTI_TerrainAimReticuleResource");
	apply_type(0x13a0dcc, "RTTICompound");
	del_items(0x13a238c, DELIT_SIMPLE, 8);
	apply_type(0x13a238c, "RTTIBase[1]");
	set_name(0x13a238c, "TerrainAimReticuleResource::sBases");
	del_items(0x13a2394, DELIT_SIMPLE, 140);
	apply_type(0x13a2394, "RTTIAttr[5]");
	set_name(0x13a2394, "TerrainAimReticuleResource::sAttrs");

	// TextAreaTag
	set_name(0x133d468, "RTTI_TextAreaTag");
	apply_type(0x133d468, "RTTICompound");
	del_items(0x133f46c, DELIT_SIMPLE, 8);
	apply_type(0x133f46c, "RTTIBase[1]");
	set_name(0x133f46c, "TextAreaTag::sBases");

	// TextAreaWidget
	set_name(0x133dee8, "RTTI_TextAreaWidget");
	apply_type(0x133dee8, "RTTICompound");
	del_items(0x133f880, DELIT_SIMPLE, 8);
	apply_type(0x133f880, "RTTIBase[1]");
	set_name(0x133f880, "TextAreaWidget::sBases");

	// TextTag
	set_name(0x133d4bc, "RTTI_TextTag");
	apply_type(0x133d4bc, "RTTICompound");
	del_items(0x133f288, DELIT_SIMPLE, 8);
	apply_type(0x133f288, "RTTIBase[1]");
	set_name(0x133f288, "TextTag::sBases");
	del_items(0x133f290, DELIT_SIMPLE, 24);
	apply_type(0x133f290, "RTTIFunction[1]");
	set_name(0x133f290, "TextTag::sFunctions");

	// TextWidget
	set_name(0x133de94, "RTTI_TextWidget");
	apply_type(0x133de94, "RTTICompound");
	del_items(0x133f878, DELIT_SIMPLE, 8);
	apply_type(0x133f878, "RTTIBase[1]");
	set_name(0x133f878, "TextWidget::sBases");

	// Texture
	set_name(0x1347868, "RTTI_Texture");
	apply_type(0x1347868, "RTTICompound");
	del_items(0x134870c, DELIT_SIMPLE, 8);
	apply_type(0x134870c, "RTTIBase[1]");
	set_name(0x134870c, "Texture::sBases");
	del_items(0x1348714, DELIT_SIMPLE, 12);
	apply_type(0x1348714, "RTTIMessageHandler[1]");
	set_name(0x1348714, "Texture::sMessageHandlers");

	// TextureBinding
	set_name(0x1347d20, "RTTI_TextureBinding");
	apply_type(0x1347d20, "RTTICompound");
	del_items(0x13487c0, DELIT_SIMPLE, 112);
	apply_type(0x13487c0, "RTTIAttr[4]");
	set_name(0x13487c0, "TextureBinding::sAttrs");

	// TextureBindingWithHandle
	set_name(0x1347d84, "RTTI_TextureBindingWithHandle");
	apply_type(0x1347d84, "RTTICompound");
	del_items(0x1348830, DELIT_SIMPLE, 8);
	apply_type(0x1348830, "RTTIBase[1]");
	set_name(0x1348830, "TextureBindingWithHandle::sBases");

	// TextureLUT
	set_name(0x1347804, "RTTI_TextureLUT");
	apply_type(0x1347804, "RTTICompound");
	del_items(0x1348d30, DELIT_SIMPLE, 8);
	apply_type(0x1348d30, "RTTIBase[1]");
	set_name(0x1348d30, "TextureLUT::sBases");
	del_items(0x1348d38, DELIT_SIMPLE, 112);
	apply_type(0x1348d38, "RTTIAttr[4]");
	set_name(0x1348d38, "TextureLUT::sAttrs");
	del_items(0x1348da8, DELIT_SIMPLE, 12);
	apply_type(0x1348da8, "RTTIMessageHandler[1]");
	set_name(0x1348da8, "TextureLUT::sMessageHandlers");

	// TextureLUTEntry
	set_name(0x13477a0, "RTTI_TextureLUTEntry");
	apply_type(0x13477a0, "RTTICompound");
	del_items(0x1348cdc, DELIT_SIMPLE, 84);
	apply_type(0x1348cdc, "RTTIAttr[3]");
	set_name(0x1348cdc, "TextureLUTEntry::sAttrs");

	// TextureMatrix
	set_name(0x1335274, "RTTI_TextureMatrix");
	apply_type(0x1335274, "RTTICompound");
	del_items(0x1335780, DELIT_SIMPLE, 84);
	apply_type(0x1335780, "RTTIAttr[3]");
	set_name(0x1335780, "TextureMatrix::sAttrs");

	// TextureTag
	set_name(0x133d510, "RTTI_TextureTag");
	apply_type(0x133d510, "RTTICompound");
	del_items(0x133f354, DELIT_SIMPLE, 8);
	apply_type(0x133f354, "RTTIBase[1]");
	set_name(0x133f354, "TextureTag::sBases");

	// TextureWidget
	set_name(0x133de40, "RTTI_TextureWidget");
	apply_type(0x133de40, "RTTICompound");
	del_items(0x133f888, DELIT_SIMPLE, 8);
	apply_type(0x133f888, "RTTIBase[1]");
	set_name(0x133f888, "TextureWidget::sBases");

	// TextureWidgetElement
	set_name(0x133e0bc, "RTTI_TextureWidgetElement");
	apply_type(0x133e0bc, "RTTICompound");
	del_items(0x133fb4c, DELIT_SIMPLE, 168);
	apply_type(0x133fb4c, "RTTIAttr[6]");
	set_name(0x133fb4c, "TextureWidgetElement::sAttrs");

	// TextureWidgetResource
	set_name(0x133e120, "RTTI_TextureWidgetResource");
	apply_type(0x133e120, "RTTICompound");
	del_items(0x133fbf4, DELIT_SIMPLE, 8);
	apply_type(0x133fbf4, "RTTIBase[1]");
	set_name(0x133fbf4, "TextureWidgetResource::sBases");
	del_items(0x133fbfc, DELIT_SIMPLE, 168);
	apply_type(0x133fbfc, "RTTIAttr[6]");
	set_name(0x133fbfc, "TextureWidgetResource::sAttrs");
	del_items(0x133fca4, DELIT_SIMPLE, 12);
	apply_type(0x133fca4, "RTTIMessageHandler[1]");
	set_name(0x133fca4, "TextureWidgetResource::sMessageHandlers");

	// Throwable
	set_name(0x13a2fd4, "RTTI_Throwable");
	apply_type(0x13a2fd4, "RTTICompound");
	del_items(0x13a3e90, DELIT_SIMPLE, 8);
	apply_type(0x13a3e90, "RTTIBase[1]");
	set_name(0x13a3e90, "Throwable::sBases");

	// ThrowableMortarBeacon
	set_name(0x1392438, "RTTI_ThrowableMortarBeacon");
	apply_type(0x1392438, "RTTICompound");
	del_items(0x1393090, DELIT_SIMPLE, 8);
	apply_type(0x1393090, "RTTIBase[1]");
	set_name(0x1393090, "ThrowableMortarBeacon::sBases");

	// ThrowableMortarBeaconResource
	set_name(0x139248c, "RTTI_ThrowableMortarBeaconResource");
	apply_type(0x139248c, "RTTICompound");
	del_items(0x13930a4, DELIT_SIMPLE, 8);
	apply_type(0x13930a4, "RTTIBase[1]");
	set_name(0x13930a4, "ThrowableMortarBeaconResource::sBases");
	del_items(0x13930ac, DELIT_SIMPLE, 308);
	apply_type(0x13930ac, "RTTIAttr[11]");
	set_name(0x13930ac, "ThrowableMortarBeaconResource::sAttrs");

	// ThrowableMover
	set_name(0x13a66b8, "RTTI_ThrowableMover");
	apply_type(0x13a66b8, "RTTICompound");
	del_items(0x13a6e54, DELIT_SIMPLE, 8);
	apply_type(0x13a6e54, "RTTIBase[1]");
	set_name(0x13a6e54, "ThrowableMover::sBases");

	// ThrowableMoverResource
	set_name(0x13a7a24, "RTTI_ThrowableMoverResource");
	apply_type(0x13a7a24, "RTTICompound");
	del_items(0x13a85e0, DELIT_SIMPLE, 8);
	apply_type(0x13a85e0, "RTTIBase[1]");
	set_name(0x13a85e0, "ThrowableMoverResource::sBases");
	del_items(0x13a85e8, DELIT_SIMPLE, 168);
	apply_type(0x13a85e8, "RTTIAttr[6]");
	set_name(0x13a85e8, "ThrowableMoverResource::sAttrs");
	del_items(0x13a8690, DELIT_SIMPLE, 12);
	apply_type(0x13a8690, "RTTIMessageHandler[1]");
	set_name(0x13a8690, "ThrowableMoverResource::sMessageHandlers");

	// ThrowableRep
	set_name(0x13a3028, "RTTI_ThrowableRep");
	apply_type(0x13a3028, "RTTICompound");
	del_items(0x13a3e98, DELIT_SIMPLE, 8);
	apply_type(0x13a3e98, "RTTIBase[1]");
	set_name(0x13a3e98, "ThrowableRep::sBases");

	// ThrowableResource
	set_name(0x13a308c, "RTTI_ThrowableResource");
	apply_type(0x13a308c, "RTTICompound");
	del_items(0x13a3a7c, DELIT_SIMPLE, 8);
	apply_type(0x13a3a7c, "RTTIBase[1]");
	set_name(0x13a3a7c, "ThrowableResource::sBases");
	del_items(0x13a3a84, DELIT_SIMPLE, 1036);
	apply_type(0x13a3a84, "RTTIAttr[37]");
	set_name(0x13a3a84, "ThrowableResource::sAttrs");

	// TimeMappedSkeletonAnimationResource
	set_name(0x1355844, "RTTI_TimeMappedSkeletonAnimationResource");
	apply_type(0x1355844, "RTTICompound");
	del_items(0x1357a5c, DELIT_SIMPLE, 8);
	apply_type(0x1357a5c, "RTTIBase[1]");
	set_name(0x1357a5c, "TimeMappedSkeletonAnimationResource::sBases");
	del_items(0x1357a64, DELIT_SIMPLE, 196);
	apply_type(0x1357a64, "RTTIAttr[7]");
	set_name(0x1357a64, "TimeMappedSkeletonAnimationResource::sAttrs");
	del_items(0x1357b28, DELIT_SIMPLE, 12);
	apply_type(0x1357b28, "RTTIMessageHandler[1]");
	set_name(0x1357b28, "TimeMappedSkeletonAnimationResource::sMessageHandlers");

	// TimeMappingInfo
	set_name(0x1355b78, "RTTI_TimeMappingInfo");
	apply_type(0x1355b78, "RTTICompound");
	del_items(0x1357a08, DELIT_SIMPLE, 84);
	apply_type(0x1357a08, "RTTIAttr[3]");
	set_name(0x1357a08, "TimeMappingInfo::sAttrs");

	// TimeWarpFactor
	set_name(0x139495c, "RTTI_TimeWarpFactor");
	apply_type(0x139495c, "RTTICompound");
	del_items(0x13965bc, DELIT_SIMPLE, 56);
	apply_type(0x13965bc, "RTTIAttr[2]");
	set_name(0x13965bc, "TimeWarpFactor::sAttrs");

	// TimeWarpTag
	set_name(0x1355a5c, "RTTI_TimeWarpTag");
	apply_type(0x1355a5c, "RTTICompound");
	del_items(0x1358058, DELIT_SIMPLE, 112);
	apply_type(0x1358058, "RTTIAttr[4]");
	set_name(0x1358058, "TimeWarpTag::sAttrs");

	// TimeWarpedSkeletonAnimationResource
	set_name(0x1355ab0, "RTTI_TimeWarpedSkeletonAnimationResource");
	apply_type(0x1355ab0, "RTTICompound");
	del_items(0x13580c8, DELIT_SIMPLE, 8);
	apply_type(0x13580c8, "RTTIBase[1]");
	set_name(0x13580c8, "TimeWarpedSkeletonAnimationResource::sBases");
	del_items(0x13580d0, DELIT_SIMPLE, 140);
	apply_type(0x13580d0, "RTTIAttr[5]");
	set_name(0x13580d0, "TimeWarpedSkeletonAnimationResource::sAttrs");

	// TimedEventInstance
	set_name(0x139a094, "RTTI_TimedEventInstance");
	apply_type(0x139a094, "RTTICompound");
	del_items(0x139b430, DELIT_SIMPLE, 8);
	apply_type(0x139b430, "RTTIBase[1]");
	set_name(0x139b430, "TimedEventInstance::sBases");

	// TimedEventResource
	set_name(0x139a040, "RTTI_TimedEventResource");
	apply_type(0x139a040, "RTTICompound");
	del_items(0x139b3d4, DELIT_SIMPLE, 8);
	apply_type(0x139b3d4, "RTTIBase[1]");
	set_name(0x139b3d4, "TimedEventResource::sBases");
	del_items(0x139b3dc, DELIT_SIMPLE, 84);
	apply_type(0x139b3dc, "RTTIAttr[3]");
	set_name(0x139b3dc, "TimedEventResource::sAttrs");

	// TimerTag
	set_name(0x133cc58, "RTTI_TimerTag");
	apply_type(0x133cc58, "RTTICompound");
	del_items(0x133f52c, DELIT_SIMPLE, 8);
	apply_type(0x133f52c, "RTTIBase[1]");
	set_name(0x133f52c, "TimerTag::sBases");
	del_items(0x133f534, DELIT_SIMPLE, 48);
	apply_type(0x133f534, "RTTIFunction[2]");
	set_name(0x133f534, "TimerTag::sFunctions");

	// TrackAnimatorUserExitOptions
	set_name(0x137d71c, "RTTI_TrackAnimatorUserExitOptions");
	apply_type(0x137d71c, "RTTICompound");
	del_items(0x137f1c8, DELIT_SIMPLE, 392);
	apply_type(0x137f1c8, "RTTIAttr[14]");
	set_name(0x137f1c8, "TrackAnimatorUserExitOptions::sAttrs");

	// TransMatrix
	set_name(0x13352c8, "RTTI_TransMatrix");
	apply_type(0x13352c8, "RTTICompound");
	del_items(0x13357d4, DELIT_SIMPLE, 84);
	apply_type(0x13357d4, "RTTIAttr[3]");
	set_name(0x13357d4, "TransMatrix::sAttrs");

	// TriStateIcon
	set_name(0x13b0e94, "RTTI_TriStateIcon");
	apply_type(0x13b0e94, "RTTICompound");
	del_items(0x13b1340, DELIT_SIMPLE, 84);
	apply_type(0x13b1340, "RTTIAttr[3]");
	set_name(0x13b1340, "TriStateIcon::sAttrs");

	// TroopCarrier
	set_name(0x13831b4, "RTTI_TroopCarrier");
	apply_type(0x13831b4, "RTTICompound");
	del_items(0x1385064, DELIT_SIMPLE, 8);
	apply_type(0x1385064, "RTTIBase[1]");
	set_name(0x1385064, "TroopCarrier::sBases");
	del_items(0x138506c, DELIT_SIMPLE, 48);
	apply_type(0x138506c, "RTTIFunction[2]");
	set_name(0x138506c, "TroopCarrier::sFunctions");

	// TroopCarrierAIController
	set_name(0x138325c, "RTTI_TroopCarrierAIController");
	apply_type(0x138325c, "RTTICompound");
	del_items(0x138509c, DELIT_SIMPLE, 8);
	apply_type(0x138509c, "RTTIBase[1]");
	set_name(0x138509c, "TroopCarrierAIController::sBases");

	// TroopCarrierResource
	set_name(0x1383208, "RTTI_TroopCarrierResource");
	apply_type(0x1383208, "RTTICompound");
	del_items(0x1384ef0, DELIT_SIMPLE, 8);
	apply_type(0x1384ef0, "RTTIBase[1]");
	set_name(0x1384ef0, "TroopCarrierResource::sBases");
	del_items(0x1384ef8, DELIT_SIMPLE, 364);
	apply_type(0x1384ef8, "RTTIAttr[13]");
	set_name(0x1384ef8, "TroopCarrierResource::sAttrs");

	// Trophy
	set_name(0x136d5bc, "RTTI_Trophy");
	apply_type(0x136d5bc, "RTTICompound");
	del_items(0x137125c, DELIT_SIMPLE, 84);
	apply_type(0x137125c, "RTTIAttr[3]");
	set_name(0x137125c, "Trophy::sAttrs");

	// TrophyResource
	set_name(0x136d610, "RTTI_TrophyResource");
	apply_type(0x136d610, "RTTICompound");
	del_items(0x13712b0, DELIT_SIMPLE, 8);
	apply_type(0x13712b0, "RTTIBase[1]");
	set_name(0x13712b0, "TrophyResource::sBases");
	del_items(0x13712b8, DELIT_SIMPLE, 448);
	apply_type(0x13712b8, "RTTIAttr[16]");
	set_name(0x13712b8, "TrophyResource::sAttrs");
	del_items(0x1371478, DELIT_SIMPLE, 12);
	apply_type(0x1371478, "RTTIMessageHandler[1]");
	set_name(0x1371478, "TrophyResource::sMessageHandlers");

	// TrophySystem
	set_name(0x136d664, "RTTI_TrophySystem");
	apply_type(0x136d664, "RTTICompound");
	del_items(0x1371484, DELIT_SIMPLE, 8);
	apply_type(0x1371484, "RTTIBase[1]");
	set_name(0x1371484, "TrophySystem::sBases");
	del_items(0x137148c, DELIT_SIMPLE, 264);
	apply_type(0x137148c, "RTTIFunction[11]");
	set_name(0x137148c, "TrophySystem::sFunctions");

	// Turret
	set_name(0x138013c, "RTTI_Turret");
	apply_type(0x138013c, "RTTICompound");
	del_items(0x13820c4, DELIT_SIMPLE, 8);
	apply_type(0x13820c4, "RTTIBase[1]");
	set_name(0x13820c4, "Turret::sBases");
	del_items(0x13820cc, DELIT_SIMPLE, 72);
	apply_type(0x13820cc, "RTTIFunction[3]");
	set_name(0x13820cc, "Turret::sFunctions");

	// TurretAiController
	set_name(0x13801e4, "RTTI_TurretAiController");
	apply_type(0x13801e4, "RTTICompound");
	del_items(0x1382124, DELIT_SIMPLE, 8);
	apply_type(0x1382124, "RTTIBase[1]");
	set_name(0x1382124, "TurretAiController::sBases");

	// TurretController
	set_name(0x1380238, "RTTI_TurretController");
	apply_type(0x1380238, "RTTICompound");
	del_items(0x1382114, DELIT_SIMPLE, 8);
	apply_type(0x1382114, "RTTIBase[1]");
	set_name(0x1382114, "TurretController::sBases");

	// TurretRep
	set_name(0x1380190, "RTTI_TurretRep");
	apply_type(0x1380190, "RTTICompound");
	del_items(0x138211c, DELIT_SIMPLE, 8);
	apply_type(0x138211c, "RTTIBase[1]");
	set_name(0x138211c, "TurretRep::sBases");

	// TurretResource
	set_name(0x138028c, "RTTI_TurretResource");
	apply_type(0x138028c, "RTTICompound");
	del_items(0x1381e04, DELIT_SIMPLE, 8);
	apply_type(0x1381e04, "RTTIBase[1]");
	set_name(0x1381e04, "TurretResource::sBases");
	del_items(0x1381e0c, DELIT_SIMPLE, 672);
	apply_type(0x1381e0c, "RTTIAttr[24]");
	set_name(0x1381e0c, "TurretResource::sAttrs");
	del_items(0x13820ac, DELIT_SIMPLE, 24);
	apply_type(0x13820ac, "RTTIMessageHandler[2]");
	set_name(0x13820ac, "TurretResource::sMessageHandlers");

	// TwoBoneIkControl
	set_name(0x1356510, "RTTI_TwoBoneIkControl");
	apply_type(0x1356510, "RTTICompound");
	del_items(0x1356e38, DELIT_SIMPLE, 308);
	apply_type(0x1356e38, "RTTIAttr[11]");
	set_name(0x1356e38, "TwoBoneIkControl::sAttrs");

	// TwoJointIkBendConfig
	set_name(0x135e98c, "RTTI_TwoJointIkBendConfig");
	apply_type(0x135e98c, "RTTICompound");
	del_items(0x1361d18, DELIT_SIMPLE, 364);
	apply_type(0x1361d18, "RTTIAttr[13]");
	set_name(0x1361d18, "TwoJointIkBendConfig::sAttrs");

	// Typeface
	set_name(0x1345e7c, "RTTI_Typeface");
	apply_type(0x1345e7c, "RTTICompound");
	del_items(0x1346a18, DELIT_SIMPLE, 8);
	apply_type(0x1346a18, "RTTIBase[1]");
	set_name(0x1346a18, "Typeface::sBases");
	del_items(0x1346a20, DELIT_SIMPLE, 56);
	apply_type(0x1346a20, "RTTIAttr[2]");
	set_name(0x1346a20, "Typeface::sAttrs");

	// TypefaceStyle
	set_name(0x1345e18, "RTTI_TypefaceStyle");
	apply_type(0x1345e18, "RTTICompound");
	del_items(0x13468f8, DELIT_SIMPLE, 8);
	apply_type(0x13468f8, "RTTIBase[1]");
	set_name(0x13468f8, "TypefaceStyle::sBases");
	del_items(0x1346900, DELIT_SIMPLE, 280);
	apply_type(0x1346900, "RTTIAttr[10]");
	set_name(0x1346900, "TypefaceStyle::sAttrs");

	// UIRect
	set_name(0x13abb34, "RTTI_UIRect");
	apply_type(0x13abb34, "RTTICompound");
	del_items(0x13ac094, DELIT_SIMPLE, 8);
	apply_type(0x13ac094, "RTTIBase[1]");
	set_name(0x13ac094, "UIRect::sBases");

	// UniqueComponent
	set_name(0x138a1f0, "RTTI_UniqueComponent");
	apply_type(0x138a1f0, "RTTICompound");
	del_items(0x138cb50, DELIT_SIMPLE, 8);
	apply_type(0x138cb50, "RTTIBase[1]");
	set_name(0x138cb50, "UniqueComponent::sBases");

	// UniqueComponentResource
	set_name(0x138a254, "RTTI_UniqueComponentResource");
	apply_type(0x138a254, "RTTICompound");
	del_items(0x138cb5c, DELIT_SIMPLE, 8);
	apply_type(0x138cb5c, "RTTIBase[1]");
	set_name(0x138cb5c, "UniqueComponentResource::sBases");

	// UniquePickUp
	set_name(0x139362c, "RTTI_UniquePickUp");
	apply_type(0x139362c, "RTTICompound");
	del_items(0x1395550, DELIT_SIMPLE, 8);
	apply_type(0x1395550, "RTTIBase[1]");
	set_name(0x1395550, "UniquePickUp::sBases");
	del_items(0x1395558, DELIT_SIMPLE, 72);
	apply_type(0x1395558, "RTTIFunction[3]");
	set_name(0x1395558, "UniquePickUp::sFunctions");

	// UniquePickUpResource
	set_name(0x1393680, "RTTI_UniquePickUpResource");
	apply_type(0x1393680, "RTTICompound");
	del_items(0x13954d8, DELIT_SIMPLE, 8);
	apply_type(0x13954d8, "RTTIBase[1]");
	set_name(0x13954d8, "UniquePickUpResource::sBases");
	del_items(0x13954e0, DELIT_SIMPLE, 112);
	apply_type(0x13954e0, "RTTIAttr[4]");
	set_name(0x13954e0, "UniquePickUpResource::sAttrs");

	// UnlockableFeatureManager
	set_name(0x13a670c, "RTTI_UnlockableFeatureManager");
	apply_type(0x13a670c, "RTTICompound");
	del_items(0x13a7394, DELIT_SIMPLE, 8);
	apply_type(0x13a7394, "RTTIBase[1]");
	set_name(0x13a7394, "UnlockableFeatureManager::sBases");

	// UnlockableFeatureManagerResource
	set_name(0x13a6760, "RTTI_UnlockableFeatureManagerResource");
	apply_type(0x13a6760, "RTTICompound");
	del_items(0x13a73f8, DELIT_SIMPLE, 8);
	apply_type(0x13a73f8, "RTTIBase[1]");
	set_name(0x13a73f8, "UnlockableFeatureManagerResource::sBases");
	del_items(0x13a7400, DELIT_SIMPLE, 56);
	apply_type(0x13a7400, "RTTIAttr[2]");
	set_name(0x13a7400, "UnlockableFeatureManagerResource::sAttrs");

	// UnlockableFeaturePickUpResource
	set_name(0x13a68d0, "RTTI_UnlockableFeaturePickUpResource");
	apply_type(0x13a68d0, "RTTICompound");
	del_items(0x13a750c, DELIT_SIMPLE, 8);
	apply_type(0x13a750c, "RTTIBase[1]");
	set_name(0x13a750c, "UnlockableFeaturePickUpResource::sBases");
	del_items(0x13a7514, DELIT_SIMPLE, 56);
	apply_type(0x13a7514, "RTTIAttr[2]");
	set_name(0x13a7514, "UnlockableFeaturePickUpResource::sAttrs");

	// UnlockableFeatureResource
	set_name(0x13a67d4, "RTTI_UnlockableFeatureResource");
	apply_type(0x13a67d4, "RTTICompound");
	del_items(0x13a739c, DELIT_SIMPLE, 8);
	apply_type(0x13a739c, "RTTIBase[1]");
	set_name(0x13a739c, "UnlockableFeatureResource::sBases");
	del_items(0x13a73a4, DELIT_SIMPLE, 84);
	apply_type(0x13a73a4, "RTTIAttr[3]");
	set_name(0x13a73a4, "UnlockableFeatureResource::sAttrs");

	// UnmountEventInstance
	set_name(0x139a13c, "RTTI_UnmountEventInstance");
	apply_type(0x139a13c, "RTTICompound");
	del_items(0x139b7a8, DELIT_SIMPLE, 8);
	apply_type(0x139b7a8, "RTTIBase[1]");
	set_name(0x139b7a8, "UnmountEventInstance::sBases");

	// UnmountEventResource
	set_name(0x139a0e8, "RTTI_UnmountEventResource");
	apply_type(0x139a0e8, "RTTICompound");
	del_items(0x139b730, DELIT_SIMPLE, 8);
	apply_type(0x139b730, "RTTIBase[1]");
	set_name(0x139b730, "UnmountEventResource::sBases");
	del_items(0x139b738, DELIT_SIMPLE, 112);
	apply_type(0x139b738, "RTTIAttr[4]");
	set_name(0x139b738, "UnmountEventResource::sAttrs");

	// UseLocation
	set_name(0x135d558, "RTTI_UseLocation");
	apply_type(0x135d558, "RTTICompound");
	del_items(0x13607bc, DELIT_SIMPLE, 8);
	apply_type(0x13607bc, "RTTIBase[1]");
	set_name(0x13607bc, "UseLocation::sBases");
	del_items(0x13607c4, DELIT_SIMPLE, 84);
	apply_type(0x13607c4, "RTTIAttr[3]");
	set_name(0x13607c4, "UseLocation::sAttrs");

	// UseLocationGame
	set_name(0x136ce54, "RTTI_UseLocationGame");
	apply_type(0x136ce54, "RTTICompound");
	del_items(0x137031c, DELIT_SIMPLE, 8);
	apply_type(0x137031c, "RTTIBase[1]");
	set_name(0x137031c, "UseLocationGame::sBases");

	// UseLocationInfo
	set_name(0x137cac0, "RTTI_UseLocationInfo");
	apply_type(0x137cac0, "RTTICompound");
	del_items(0x137d8ac, DELIT_SIMPLE, 252);
	apply_type(0x137d8ac, "RTTIAttr[9]");
	set_name(0x137d8ac, "UseLocationInfo::sAttrs");

	// UseLocationInventoryItem
	set_name(0x136cf2c, "RTTI_UseLocationInventoryItem");
	apply_type(0x136cf2c, "RTTICompound");
	del_items(0x13706f4, DELIT_SIMPLE, 8);
	apply_type(0x13706f4, "RTTIBase[1]");
	set_name(0x13706f4, "UseLocationInventoryItem::sBases");

	// UseLocationInventoryItemResource
	set_name(0x136cf80, "RTTI_UseLocationInventoryItemResource");
	apply_type(0x136cf80, "RTTICompound");
	del_items(0x13706fc, DELIT_SIMPLE, 8);
	apply_type(0x13706fc, "RTTIBase[1]");
	set_name(0x13706fc, "UseLocationInventoryItemResource::sBases");
	del_items(0x1370704, DELIT_SIMPLE, 112);
	apply_type(0x1370704, "RTTIAttr[4]");
	set_name(0x1370704, "UseLocationInventoryItemResource::sAttrs");

	// UseLocationResource
	set_name(0x135d5dc, "RTTI_UseLocationResource");
	apply_type(0x135d5dc, "RTTICompound");
	del_items(0x1360818, DELIT_SIMPLE, 8);
	apply_type(0x1360818, "RTTIBase[1]");
	set_name(0x1360818, "UseLocationResource::sBases");
	del_items(0x1360820, DELIT_SIMPLE, 112);
	apply_type(0x1360820, "RTTIAttr[4]");
	set_name(0x1360820, "UseLocationResource::sAttrs");

	// UseLocationResourceGame
	set_name(0x136ced8, "RTTI_UseLocationResourceGame");
	apply_type(0x136ced8, "RTTICompound");
	del_items(0x13700f4, DELIT_SIMPLE, 8);
	apply_type(0x13700f4, "RTTIBase[1]");
	set_name(0x13700f4, "UseLocationResourceGame::sBases");
	del_items(0x13700fc, DELIT_SIMPLE, 532);
	apply_type(0x13700fc, "RTTIAttr[19]");
	set_name(0x13700fc, "UseLocationResourceGame::sAttrs");
	del_items(0x1370310, DELIT_SIMPLE, 12);
	apply_type(0x1370310, "RTTIMessageHandler[1]");
	set_name(0x1370310, "UseLocationResourceGame::sMessageHandlers");

	// UsedEntityScoreSettings
	set_name(0x136d4a0, "RTTI_UsedEntityScoreSettings");
	apply_type(0x136d4a0, "RTTICompound");
	del_items(0x1370b0c, DELIT_SIMPLE, 8);
	apply_type(0x1370b0c, "RTTIBase[1]");
	set_name(0x1370b0c, "UsedEntityScoreSettings::sBases");
	del_items(0x1370b14, DELIT_SIMPLE, 84);
	apply_type(0x1370b14, "RTTIAttr[3]");
	set_name(0x1370b14, "UsedEntityScoreSettings::sAttrs");

	// UserDamageModifier
	set_name(0x137d0a0, "RTTI_UserDamageModifier");
	apply_type(0x137d0a0, "RTTICompound");
	del_items(0x137ddb0, DELIT_SIMPLE, 56);
	apply_type(0x137ddb0, "RTTIAttr[2]");
	set_name(0x137ddb0, "UserDamageModifier::sAttrs");

	// UserModeInfo
	set_name(0x137ca4c, "RTTI_UserModeInfo");
	apply_type(0x137ca4c, "RTTICompound");
	del_items(0x137d7cc, DELIT_SIMPLE, 224);
	apply_type(0x137d7cc, "RTTIAttr[8]");
	set_name(0x137d7cc, "UserModeInfo::sAttrs");

	// Valve
	set_name(0x13802e0, "RTTI_Valve");
	apply_type(0x13802e0, "RTTICompound");
	del_items(0x138231c, DELIT_SIMPLE, 8);
	apply_type(0x138231c, "RTTIBase[1]");
	set_name(0x138231c, "Valve::sBases");
	del_items(0x1382324, DELIT_SIMPLE, 192);
	apply_type(0x1382324, "RTTIFunction[8]");
	set_name(0x1382324, "Valve::sFunctions");

	// ValveAiController
	set_name(0x1380484, "RTTI_ValveAiController");
	apply_type(0x1380484, "RTTICompound");
	del_items(0x1382400, DELIT_SIMPLE, 8);
	apply_type(0x1382400, "RTTIBase[1]");
	set_name(0x1382400, "ValveAiController::sBases");

	// ValveController
	set_name(0x13803dc, "RTTI_ValveController");
	apply_type(0x13803dc, "RTTICompound");
	del_items(0x13823e8, DELIT_SIMPLE, 8);
	apply_type(0x13823e8, "RTTIBase[1]");
	set_name(0x13823e8, "ValveController::sBases");

	// ValveJoystickController
	set_name(0x1380430, "RTTI_ValveJoystickController");
	apply_type(0x1380430, "RTTICompound");
	del_items(0x13823f8, DELIT_SIMPLE, 8);
	apply_type(0x13823f8, "RTTIBase[1]");
	set_name(0x13823f8, "ValveJoystickController::sBases");

	// ValveRep
	set_name(0x1380334, "RTTI_ValveRep");
	apply_type(0x1380334, "RTTICompound");
	del_items(0x13823f0, DELIT_SIMPLE, 8);
	apply_type(0x13823f0, "RTTIBase[1]");
	set_name(0x13823f0, "ValveRep::sBases");

	// ValveResource
	set_name(0x1380388, "RTTI_ValveResource");
	apply_type(0x1380388, "RTTICompound");
	del_items(0x1382138, DELIT_SIMPLE, 8);
	apply_type(0x1382138, "RTTIBase[1]");
	set_name(0x1382138, "ValveResource::sBases");
	del_items(0x1382140, DELIT_SIMPLE, 476);
	apply_type(0x1382140, "RTTIAttr[17]");
	set_name(0x1382140, "ValveResource::sAttrs");

	// VariableBindingNG
	set_name(0x1347e3c, "RTTI_VariableBindingNG");
	apply_type(0x1347e3c, "RTTICompound");
	del_items(0x13488a8, DELIT_SIMPLE, 8);
	apply_type(0x13488a8, "RTTIBase[1]");
	set_name(0x13488a8, "VariableBindingNG::sBases");
	del_items(0x13488b0, DELIT_SIMPLE, 28);
	apply_type(0x13488b0, "RTTIAttr[1]");
	set_name(0x13488b0, "VariableBindingNG::sAttrs");

	// VariableBindingNGWithHandle
	set_name(0x1347ea0, "RTTI_VariableBindingNGWithHandle");
	apply_type(0x1347ea0, "RTTICompound");
	del_items(0x13488cc, DELIT_SIMPLE, 8);
	apply_type(0x13488cc, "RTTIBase[1]");
	set_name(0x13488cc, "VariableBindingNGWithHandle::sBases");

	// VehicleInternalCameraEntity
	set_name(0x137a5fc, "RTTI_VehicleInternalCameraEntity");
	apply_type(0x137a5fc, "RTTICompound");
	del_items(0x137c2c0, DELIT_SIMPLE, 8);
	apply_type(0x137c2c0, "RTTIBase[1]");
	set_name(0x137c2c0, "VehicleInternalCameraEntity::sBases");

	// VehicleInternalCameraEntityRep
	set_name(0x137a650, "RTTI_VehicleInternalCameraEntityRep");
	apply_type(0x137a650, "RTTICompound");
	del_items(0x137c2c8, DELIT_SIMPLE, 8);
	apply_type(0x137c2c8, "RTTIBase[1]");
	set_name(0x137c2c8, "VehicleInternalCameraEntityRep::sBases");

	// VehicleInternalCameraEntityResource
	set_name(0x137a6a4, "RTTI_VehicleInternalCameraEntityResource");
	apply_type(0x137a6a4, "RTTICompound");
	del_items(0x137c264, DELIT_SIMPLE, 8);
	apply_type(0x137c264, "RTTIBase[1]");
	set_name(0x137c264, "VehicleInternalCameraEntityResource::sBases");
	del_items(0x137c26c, DELIT_SIMPLE, 84);
	apply_type(0x137c26c, "RTTIAttr[3]");
	set_name(0x137c26c, "VehicleInternalCameraEntityResource::sAttrs");

	// VehicleOnRails
	set_name(0x1383608, "RTTI_VehicleOnRails");
	apply_type(0x1383608, "RTTICompound");
	del_items(0x13855f4, DELIT_SIMPLE, 8);
	apply_type(0x13855f4, "RTTIBase[1]");
	set_name(0x13855f4, "VehicleOnRails::sBases");

	// VehicleOnRailsRep
	set_name(0x1383778, "RTTI_VehicleOnRailsRep");
	apply_type(0x1383778, "RTTICompound");
	del_items(0x13855fc, DELIT_SIMPLE, 8);
	apply_type(0x13855fc, "RTTIBase[1]");
	set_name(0x13855fc, "VehicleOnRailsRep::sBases");

	// VehicleOnRailsResource
	set_name(0x1383724, "RTTI_VehicleOnRailsResource");
	apply_type(0x1383724, "RTTICompound");
	del_items(0x13852f8, DELIT_SIMPLE, 8);
	apply_type(0x13852f8, "RTTIBase[1]");
	set_name(0x13852f8, "VehicleOnRailsResource::sBases");
	del_items(0x1385300, DELIT_SIMPLE, 756);
	apply_type(0x1385300, "RTTIAttr[27]");
	set_name(0x1385300, "VehicleOnRailsResource::sAttrs");

	// VehicleRocketLauncher
	set_name(0x139c584, "RTTI_VehicleRocketLauncher");
	apply_type(0x139c584, "RTTICompound");
	del_items(0x139d3cc, DELIT_SIMPLE, 8);
	apply_type(0x139d3cc, "RTTIBase[1]");
	set_name(0x139d3cc, "VehicleRocketLauncher::sBases");

	// VehicleRocketLauncherRep
	set_name(0x139c5d8, "RTTI_VehicleRocketLauncherRep");
	apply_type(0x139c5d8, "RTTICompound");
	del_items(0x139d3d4, DELIT_SIMPLE, 8);
	apply_type(0x139d3d4, "RTTIBase[1]");
	set_name(0x139d3d4, "VehicleRocketLauncherRep::sBases");

	// VehicleRocketLauncherResource
	set_name(0x139c62c, "RTTI_VehicleRocketLauncherResource");
	apply_type(0x139c62c, "RTTICompound");
	del_items(0x139d2e4, DELIT_SIMPLE, 8);
	apply_type(0x139d2e4, "RTTIBase[1]");
	set_name(0x139d2e4, "VehicleRocketLauncherResource::sBases");
	del_items(0x139d2ec, DELIT_SIMPLE, 224);
	apply_type(0x139d2ec, "RTTIAttr[8]");
	set_name(0x139d2ec, "VehicleRocketLauncherResource::sAttrs");

	// VehicleWeapon
	set_name(0x139c680, "RTTI_VehicleWeapon");
	apply_type(0x139c680, "RTTICompound");
	del_items(0x139d2d0, DELIT_SIMPLE, 8);
	apply_type(0x139d2d0, "RTTIBase[1]");
	set_name(0x139d2d0, "VehicleWeapon::sBases");

	// VehicleWeaponPickUpResource
	set_name(0x13936d4, "RTTI_VehicleWeaponPickUpResource");
	apply_type(0x13936d4, "RTTICompound");
	del_items(0x13955b4, DELIT_SIMPLE, 8);
	apply_type(0x13955b4, "RTTIBase[1]");
	set_name(0x13955b4, "VehicleWeaponPickUpResource::sBases");

	// VehicleWeaponResource
	set_name(0x139c6e4, "RTTI_VehicleWeaponResource");
	apply_type(0x139c6e4, "RTTICompound");
	del_items(0x139d08c, DELIT_SIMPLE, 8);
	apply_type(0x139d08c, "RTTIBase[1]");
	set_name(0x139d08c, "VehicleWeaponResource::sBases");
	del_items(0x139d094, DELIT_SIMPLE, 560);
	apply_type(0x139d094, "RTTIAttr[20]");
	set_name(0x139d094, "VehicleWeaponResource::sAttrs");
	del_items(0x139d2c4, DELIT_SIMPLE, 12);
	apply_type(0x139d2c4, "RTTIMessageHandler[1]");
	set_name(0x139d2c4, "VehicleWeaponResource::sMessageHandlers");

	// VertexArrayResource
	set_name(0x1345648, "RTTI_VertexArrayResource");
	apply_type(0x1345648, "RTTICompound");
	del_items(0x1345ed8, DELIT_SIMPLE, 8);
	apply_type(0x1345ed8, "RTTIBase[1]");
	set_name(0x1345ed8, "VertexArrayResource::sBases");
	del_items(0x1345ee0, DELIT_SIMPLE, 12);
	apply_type(0x1345ee0, "RTTIMessageHandler[1]");
	set_name(0x1345ee0, "VertexArrayResource::sMessageHandlers");

	// VertexDeltaDeformation
	set_name(0x13561ac, "RTTI_VertexDeltaDeformation");
	apply_type(0x13561ac, "RTTICompound");
	del_items(0x1357468, DELIT_SIMPLE, 140);
	apply_type(0x1357468, "RTTIAttr[5]");
	set_name(0x1357468, "VertexDeltaDeformation::sAttrs");

	// VertexSkin
	set_name(0x1356bb8, "RTTI_VertexSkin");
	apply_type(0x1356bb8, "RTTICompound");
	del_items(0x1357238, DELIT_SIMPLE, 252);
	apply_type(0x1357238, "RTTIAttr[9]");
	set_name(0x1357238, "VertexSkin::sAttrs");

	// VertexSkinNBT
	set_name(0x1356c1c, "RTTI_VertexSkinNBT");
	apply_type(0x1356c1c, "RTTICompound");
	del_items(0x1357334, DELIT_SIMPLE, 308);
	apply_type(0x1357334, "RTTIAttr[11]");
	set_name(0x1357334, "VertexSkinNBT::sAttrs");

	// ViewDependentEntity
	set_name(0x138e094, "RTTI_ViewDependentEntity");
	apply_type(0x138e094, "RTTICompound");
	del_items(0x138edc0, DELIT_SIMPLE, 8);
	apply_type(0x138edc0, "RTTIBase[1]");
	set_name(0x138edc0, "ViewDependentEntity::sBases");

	// ViewDependentEntityRep
	set_name(0x138e0e8, "RTTI_ViewDependentEntityRep");
	apply_type(0x138e0e8, "RTTICompound");
	del_items(0x138e938, DELIT_SIMPLE, 8);
	apply_type(0x138e938, "RTTIBase[1]");
	set_name(0x138e938, "ViewDependentEntityRep::sBases");

	// ViewDependentEntityResource
	set_name(0x138e13c, "RTTI_ViewDependentEntityResource");
	apply_type(0x138e13c, "RTTICompound");
	del_items(0x138e954, DELIT_SIMPLE, 8);
	apply_type(0x138e954, "RTTIBase[1]");
	set_name(0x138e954, "ViewDependentEntityResource::sBases");

	// ViewTag
	set_name(0x133ccbc, "RTTI_ViewTag");
	apply_type(0x133ccbc, "RTTICompound");
	del_items(0x133f304, DELIT_SIMPLE, 8);
	apply_type(0x133f304, "RTTIBase[1]");
	set_name(0x133f304, "ViewTag::sBases");
	del_items(0x133f30c, DELIT_SIMPLE, 72);
	apply_type(0x133f30c, "RTTIFunction[3]");
	set_name(0x133f30c, "ViewTag::sFunctions");

	// ViewportSetup
	set_name(0x13a9c20, "RTTI_ViewportSetup");
	apply_type(0x13a9c20, "RTTICompound");
	del_items(0x13ab33c, DELIT_SIMPLE, 392);
	apply_type(0x13ab33c, "RTTIAttr[14]");
	set_name(0x13ab33c, "ViewportSetup::sAttrs");

	// ViewportSetupsResource
	set_name(0x13a9bbc, "RTTI_ViewportSetupsResource");
	apply_type(0x13a9bbc, "RTTICompound");
	del_items(0x13ab2f0, DELIT_SIMPLE, 8);
	apply_type(0x13ab2f0, "RTTIBase[1]");
	set_name(0x13ab2f0, "ViewportSetupsResource::sBases");
	del_items(0x13ab2f8, DELIT_SIMPLE, 56);
	apply_type(0x13ab2f8, "RTTIAttr[2]");
	set_name(0x13ab2f8, "ViewportSetupsResource::sAttrs");
	del_items(0x13ab330, DELIT_SIMPLE, 12);
	apply_type(0x13ab330, "RTTIMessageHandler[1]");
	set_name(0x13ab330, "ViewportSetupsResource::sMessageHandlers");

	// VignetteSettingsResource
	set_name(0x134832c, "RTTI_VignetteSettingsResource");
	apply_type(0x134832c, "RTTICompound");
	del_items(0x134910c, DELIT_SIMPLE, 8);
	apply_type(0x134910c, "RTTIBase[1]");
	set_name(0x134910c, "VignetteSettingsResource::sBases");
	del_items(0x1349114, DELIT_SIMPLE, 112);
	apply_type(0x1349114, "RTTIAttr[4]");
	set_name(0x1349114, "VignetteSettingsResource::sAttrs");

	// VirtualSoundEmitterNode
	set_name(0x1358fdc, "RTTI_VirtualSoundEmitterNode");
	apply_type(0x1358fdc, "RTTICompound");
	del_items(0x135beb0, DELIT_SIMPLE, 8);
	apply_type(0x135beb0, "RTTIBase[1]");
	set_name(0x135beb0, "VirtualSoundEmitterNode::sBases");

	// VisualTag
	set_name(0x133c9b8, "RTTI_VisualTag");
	apply_type(0x133c9b8, "RTTICompound");
	del_items(0x133f220, DELIT_SIMPLE, 8);
	apply_type(0x133f220, "RTTIBase[1]");
	set_name(0x133f220, "VisualTag::sBases");
	del_items(0x133f228, DELIT_SIMPLE, 72);
	apply_type(0x133f228, "RTTIFunction[3]");
	set_name(0x133f228, "VisualTag::sFunctions");

	// VolumeDuckerResource
	set_name(0x1359b2c, "RTTI_VolumeDuckerResource");
	apply_type(0x1359b2c, "RTTICompound");
	del_items(0x135b2b8, DELIT_SIMPLE, 8);
	apply_type(0x135b2b8, "RTTIBase[1]");
	set_name(0x135b2b8, "VolumeDuckerResource::sBases");
	del_items(0x135b2c0, DELIT_SIMPLE, 140);
	apply_type(0x135b2c0, "RTTIAttr[5]");
	set_name(0x135b2c0, "VolumeDuckerResource::sAttrs");

	// WASPGrenade
	set_name(0x13a0e20, "RTTI_WASPGrenade");
	apply_type(0x13a0e20, "RTTICompound");
	del_items(0x13a254c, DELIT_SIMPLE, 8);
	apply_type(0x13a254c, "RTTIBase[1]");
	set_name(0x13a254c, "WASPGrenade::sBases");

	// WASPGrenadeResource
	set_name(0x13a0e74, "RTTI_WASPGrenadeResource");
	apply_type(0x13a0e74, "RTTICompound");
	del_items(0x13a242c, DELIT_SIMPLE, 8);
	apply_type(0x13a242c, "RTTIBase[1]");
	set_name(0x13a242c, "WASPGrenadeResource::sBases");
	del_items(0x13a2434, DELIT_SIMPLE, 280);
	apply_type(0x13a2434, "RTTIAttr[10]");
	set_name(0x13a2434, "WASPGrenadeResource::sAttrs");

	// WaterEffectComponent
	set_name(0x138926c, "RTTI_WaterEffectComponent");
	apply_type(0x138926c, "RTTICompound");
	del_items(0x138c46c, DELIT_SIMPLE, 8);
	apply_type(0x138c46c, "RTTIBase[1]");
	set_name(0x138c46c, "WaterEffectComponent::sBases");

	// WaterEffectComponentRep
	set_name(0x13892c0, "RTTI_WaterEffectComponentRep");
	apply_type(0x13892c0, "RTTICompound");
	del_items(0x138c478, DELIT_SIMPLE, 8);
	apply_type(0x138c478, "RTTIBase[1]");
	set_name(0x138c478, "WaterEffectComponentRep::sBases");

	// WaterEffectComponentResource
	set_name(0x1389314, "RTTI_WaterEffectComponentResource");
	apply_type(0x1389314, "RTTICompound");
	del_items(0x138c480, DELIT_SIMPLE, 8);
	apply_type(0x138c480, "RTTIBase[1]");
	set_name(0x138c480, "WaterEffectComponentResource::sBases");
	del_items(0x138c488, DELIT_SIMPLE, 224);
	apply_type(0x138c488, "RTTIAttr[8]");
	set_name(0x138c488, "WaterEffectComponentResource::sAttrs");

	// WaterInstance
	set_name(0x1349e90, "RTTI_WaterInstance");
	apply_type(0x1349e90, "RTTICompound");
	del_items(0x134a060, DELIT_SIMPLE, 8);
	apply_type(0x134a060, "RTTIBase[1]");
	set_name(0x134a060, "WaterInstance::sBases");
	del_items(0x134a068, DELIT_SIMPLE, 308);
	apply_type(0x134a068, "RTTIAttr[11]");
	set_name(0x134a068, "WaterInstance::sAttrs");
	del_items(0x134a19c, DELIT_SIMPLE, 36);
	apply_type(0x134a19c, "RTTIMessageHandler[3]");
	set_name(0x134a19c, "WaterInstance::sMessageHandlers");

	// WaterProximityEffect
	set_name(0x1388690, "RTTI_WaterProximityEffect");
	apply_type(0x1388690, "RTTICompound");
	del_items(0x138ab1c, DELIT_SIMPLE, 8);
	apply_type(0x138ab1c, "RTTIBase[1]");
	set_name(0x138ab1c, "WaterProximityEffect::sBases");

	// WaterProximityEffectResource
	set_name(0x138863c, "RTTI_WaterProximityEffectResource");
	apply_type(0x138863c, "RTTICompound");
	del_items(0x138a718, DELIT_SIMPLE, 8);
	apply_type(0x138a718, "RTTIBase[1]");
	set_name(0x138a718, "WaterProximityEffectResource::sBases");
	del_items(0x138a720, DELIT_SIMPLE, 112);
	apply_type(0x138a720, "RTTIAttr[4]");
	set_name(0x138a720, "WaterProximityEffectResource::sAttrs");

	// WaterResource
	set_name(0x1349e38, "RTTI_WaterResource");
	apply_type(0x1349e38, "RTTICompound");
	del_items(0x1349fcc, DELIT_SIMPLE, 8);
	apply_type(0x1349fcc, "RTTIBase[1]");
	set_name(0x1349fcc, "WaterResource::sBases");
	del_items(0x1349fd4, DELIT_SIMPLE, 140);
	apply_type(0x1349fd4, "RTTIAttr[5]");
	set_name(0x1349fd4, "WaterResource::sAttrs");

	// WaterSystemManager
	set_name(0x1349d70, "RTTI_WaterSystemManager");
	apply_type(0x1349d70, "RTTICompound");
	del_items(0x134a228, DELIT_SIMPLE, 8);
	apply_type(0x134a228, "RTTIBase[1]");
	set_name(0x134a228, "WaterSystemManager::sBases");
	del_items(0x134a230, DELIT_SIMPLE, 12);
	apply_type(0x134a230, "RTTIMessageHandler[1]");
	set_name(0x134a230, "WaterSystemManager::sMessageHandlers");

	// WaterSystemResource
	set_name(0x1349dd4, "RTTI_WaterSystemResource");
	apply_type(0x1349dd4, "RTTICompound");
	del_items(0x134a1c0, DELIT_SIMPLE, 8);
	apply_type(0x134a1c0, "RTTIBase[1]");
	set_name(0x134a1c0, "WaterSystemResource::sBases");
	del_items(0x134a1c8, DELIT_SIMPLE, 84);
	apply_type(0x134a1c8, "RTTIAttr[3]");
	set_name(0x134a1c8, "WaterSystemResource::sAttrs");
	del_items(0x134a21c, DELIT_SIMPLE, 12);
	apply_type(0x134a21c, "RTTIMessageHandler[1]");
	set_name(0x134a21c, "WaterSystemResource::sMessageHandlers");

	// WeakResourceReference
	set_name(0x13bc7dc, "RTTI_WeakResourceReference");
	apply_type(0x13bc7dc, "RTTICompound");
	del_items(0x13bcc30, DELIT_SIMPLE, 8);
	apply_type(0x13bcc30, "RTTIBase[1]");
	set_name(0x13bcc30, "WeakResourceReference::sBases");
	del_items(0x13bcc38, DELIT_SIMPLE, 56);
	apply_type(0x13bcc38, "RTTIAttr[2]");
	set_name(0x13bcc38, "WeakResourceReference::sAttrs");

	// WeaponPickUp
	set_name(0x1393728, "RTTI_WeaponPickUp");
	apply_type(0x1393728, "RTTICompound");
	del_items(0x13955a0, DELIT_SIMPLE, 8);
	apply_type(0x13955a0, "RTTIBase[1]");
	set_name(0x13955a0, "WeaponPickUp::sBases");

	// WeaponPickUpResource
	set_name(0x13937f0, "RTTI_WeaponPickUpResource");
	apply_type(0x13937f0, "RTTICompound");
	del_items(0x13953d0, DELIT_SIMPLE, 8);
	apply_type(0x13953d0, "RTTIBase[1]");
	set_name(0x13953d0, "WeaponPickUpResource::sBases");
	del_items(0x13953d8, DELIT_SIMPLE, 140);
	apply_type(0x13953d8, "RTTIAttr[5]");
	set_name(0x13953d8, "WeaponPickUpResource::sAttrs");

	// WeaponRack
	set_name(0x13a2eb8, "RTTI_WeaponRack");
	apply_type(0x13a2eb8, "RTTICompound");
	del_items(0x13a39cc, DELIT_SIMPLE, 8);
	apply_type(0x13a39cc, "RTTIBase[1]");
	set_name(0x13a39cc, "WeaponRack::sBases");
	del_items(0x13a39d4, DELIT_SIMPLE, 168);
	apply_type(0x13a39d4, "RTTIAttr[6]");
	set_name(0x13a39d4, "WeaponRack::sAttrs");

	// WeaponRackItem
	set_name(0x13a2f2c, "RTTI_WeaponRackItem");
	apply_type(0x13a2f2c, "RTTICompound");
	del_items(0x13a3940, DELIT_SIMPLE, 8);
	apply_type(0x13a3940, "RTTIBase[1]");
	set_name(0x13a3940, "WeaponRackItem::sBases");
	del_items(0x13a3948, DELIT_SIMPLE, 56);
	apply_type(0x13a3948, "RTTIAttr[2]");
	set_name(0x13a3948, "WeaponRackItem::sAttrs");

	// WeaponRackResource
	set_name(0x13a2f80, "RTTI_WeaponRackResource");
	apply_type(0x13a2f80, "RTTICompound");
	del_items(0x13a398c, DELIT_SIMPLE, 8);
	apply_type(0x13a398c, "RTTIBase[1]");
	set_name(0x13a398c, "WeaponRackResource::sBases");
	del_items(0x13a3994, DELIT_SIMPLE, 56);
	apply_type(0x13a3994, "RTTIAttr[2]");
	set_name(0x13a3994, "WeaponRackResource::sAttrs");

	// WeaponScoreMultipliers
	set_name(0x136d504, "RTTI_WeaponScoreMultipliers");
	apply_type(0x136d504, "RTTICompound");
	del_items(0x1370b68, DELIT_SIMPLE, 8);
	apply_type(0x1370b68, "RTTIBase[1]");
	set_name(0x1370b68, "WeaponScoreMultipliers::sBases");
	del_items(0x1370b70, DELIT_SIMPLE, 140);
	apply_type(0x1370b70, "RTTIAttr[5]");
	set_name(0x1370b70, "WeaponScoreMultipliers::sAttrs");

	// WeaponSwitchEventInstance
	set_name(0x139a1e4, "RTTI_WeaponSwitchEventInstance");
	apply_type(0x139a1e4, "RTTICompound");
	del_items(0x139b998, DELIT_SIMPLE, 8);
	apply_type(0x139b998, "RTTIBase[1]");
	set_name(0x139b998, "WeaponSwitchEventInstance::sBases");

	// WeaponSwitchEventResource
	set_name(0x139a190, "RTTI_WeaponSwitchEventResource");
	apply_type(0x139a190, "RTTICompound");
	del_items(0x139b904, DELIT_SIMPLE, 8);
	apply_type(0x139b904, "RTTIBase[1]");
	set_name(0x139b904, "WeaponSwitchEventResource::sBases");
	del_items(0x139b90c, DELIT_SIMPLE, 140);
	apply_type(0x139b90c, "RTTIAttr[5]");
	set_name(0x139b90c, "WeaponSwitchEventResource::sAttrs");

	// WheelInfo
	set_name(0x138366c, "RTTI_WheelInfo");
	apply_type(0x138366c, "RTTICompound");
	del_items(0x13850d8, DELIT_SIMPLE, 252);
	apply_type(0x13850d8, "RTTIAttr[9]");
	set_name(0x13850d8, "WheelInfo::sAttrs");

	// WheelLogic
	set_name(0x13836d0, "RTTI_WheelLogic");
	apply_type(0x13836d0, "RTTICompound");
	del_items(0x13851d4, DELIT_SIMPLE, 280);
	apply_type(0x13851d4, "RTTIAttr[10]");
	set_name(0x13851d4, "WheelLogic::sAttrs");

	// WheelMapping
	set_name(0x1382fbc, "RTTI_WheelMapping");
	apply_type(0x1382fbc, "RTTICompound");
	del_items(0x1383c68, DELIT_SIMPLE, 280);
	apply_type(0x1383c68, "RTTIAttr[10]");
	set_name(0x1383c68, "WheelMapping::sAttrs");

	// Widget
	set_name(0x133d564, "RTTI_Widget");
	apply_type(0x133d564, "RTTICompound");
	del_items(0x133f728, DELIT_SIMPLE, 8);
	apply_type(0x133f728, "RTTIBase[1]");
	set_name(0x133f728, "Widget::sBases");

	// WidgetAnimationResource
	set_name(0x133dfb0, "RTTI_WidgetAnimationResource");
	apply_type(0x133dfb0, "RTTICompound");
	del_items(0x133f694, DELIT_SIMPLE, 8);
	apply_type(0x133f694, "RTTIBase[1]");
	set_name(0x133f694, "WidgetAnimationResource::sBases");
	del_items(0x133f69c, DELIT_SIMPLE, 140);
	apply_type(0x133f69c, "RTTIAttr[5]");
	set_name(0x133f69c, "WidgetAnimationResource::sAttrs");

	// WidgetAnimationSettings
	set_name(0x133df4c, "RTTI_WidgetAnimationSettings");
	apply_type(0x133df4c, "RTTICompound");
	del_items(0x133f65c, DELIT_SIMPLE, 56);
	apply_type(0x133f65c, "RTTIAttr[2]");
	set_name(0x133f65c, "WidgetAnimationSettings::sAttrs");

	// WidgetDecorationBracket
	set_name(0x133e41c, "RTTI_WidgetDecorationBracket");
	apply_type(0x133e41c, "RTTICompound");
	del_items(0x133eaa0, DELIT_SIMPLE, 8);
	apply_type(0x133eaa0, "RTTIBase[1]");
	set_name(0x133eaa0, "WidgetDecorationBracket::sBases");
	del_items(0x133eaa8, DELIT_SIMPLE, 112);
	apply_type(0x133eaa8, "RTTIAttr[4]");
	set_name(0x133eaa8, "WidgetDecorationBracket::sAttrs");

	// WindBox
	set_name(0x1339ef8, "RTTI_WindBox");
	apply_type(0x1339ef8, "RTTICompound");
	del_items(0x133b26c, DELIT_SIMPLE, 8);
	apply_type(0x133b26c, "RTTIBase[1]");
	set_name(0x133b26c, "WindBox::sBases");
	del_items(0x133b274, DELIT_SIMPLE, 420);
	apply_type(0x133b274, "RTTIAttr[15]");
	set_name(0x133b274, "WindBox::sAttrs");
	del_items(0x133b418, DELIT_SIMPLE, 24);
	apply_type(0x133b418, "RTTIMessageHandler[2]");
	set_name(0x133b418, "WindBox::sMessageHandlers");

	// WindGust
	set_name(0x1339f4c, "RTTI_WindGust");
	apply_type(0x1339f4c, "RTTICompound");
	del_items(0x133b0dc, DELIT_SIMPLE, 8);
	apply_type(0x133b0dc, "RTTIBase[1]");
	set_name(0x133b0dc, "WindGust::sBases");

	// WindGustResource
	set_name(0x1339fa0, "RTTI_WindGustResource");
	apply_type(0x1339fa0, "RTTICompound");
	del_items(0x133b0e4, DELIT_SIMPLE, 8);
	apply_type(0x133b0e4, "RTTIBase[1]");
	set_name(0x133b0e4, "WindGustResource::sBases");
	del_items(0x133b0ec, DELIT_SIMPLE, 364);
	apply_type(0x133b0ec, "RTTIAttr[13]");
	set_name(0x133b0ec, "WindGustResource::sAttrs");
	del_items(0x133b258, DELIT_SIMPLE, 12);
	apply_type(0x133b258, "RTTIMessageHandler[1]");
	set_name(0x133b258, "WindGustResource::sMessageHandlers");

	// WindManager
	set_name(0x1339ff4, "RTTI_WindManager");
	apply_type(0x1339ff4, "RTTICompound");
	del_items(0x133b264, DELIT_SIMPLE, 8);
	apply_type(0x133b264, "RTTIBase[1]");
	set_name(0x133b264, "WindManager::sBases");

	// WorldNode
	set_name(0x135ce18, "RTTI_WorldNode");
	apply_type(0x135ce18, "RTTICompound");
	del_items(0x135ce6c, DELIT_SIMPLE, 8);
	apply_type(0x135ce6c, "RTTIBase[1]");
	set_name(0x135ce6c, "WorldNode::sBases");
	del_items(0x135ce74, DELIT_SIMPLE, 56);
	apply_type(0x135ce74, "RTTIAttr[2]");
	set_name(0x135ce74, "WorldNode::sAttrs");
	del_items(0x135ceac, DELIT_SIMPLE, 48);
	apply_type(0x135ceac, "RTTIFunction[2]");
	set_name(0x135ceac, "WorldNode::sFunctions");

	// Zone
	set_name(0x134a3f4, "RTTI_Zone");
	apply_type(0x134a3f4, "RTTICompound");
	del_items(0x134a534, DELIT_SIMPLE, 8);
	apply_type(0x134a534, "RTTIBase[1]");
	set_name(0x134a534, "Zone::sBases");
	del_items(0x134a53c, DELIT_SIMPLE, 224);
	apply_type(0x134a53c, "RTTIAttr[8]");
	set_name(0x134a53c, "Zone::sAttrs");
	del_items(0x134a61c, DELIT_SIMPLE, 12);
	apply_type(0x134a61c, "RTTIMessageHandler[1]");
	set_name(0x134a61c, "Zone::sMessageHandlers");

	// ZoneVisibilityInfo
	set_name(0x134a44c, "RTTI_ZoneVisibilityInfo");
	apply_type(0x134a44c, "RTTICompound");
	del_items(0x134a710, DELIT_SIMPLE, 8);
	apply_type(0x134a710, "RTTIBase[1]");
	set_name(0x134a710, "ZoneVisibilityInfo::sBases");
	del_items(0x134a718, DELIT_SIMPLE, 56);
	apply_type(0x134a718, "RTTIAttr[2]");
	set_name(0x134a718, "ZoneVisibilityInfo::sAttrs");
	del_items(0x134a750, DELIT_SIMPLE, 24);
	apply_type(0x134a750, "RTTIMessageHandler[2]");
	set_name(0x134a750, "ZoneVisibilityInfo::sMessageHandlers");

	// ZoomSetting
	set_name(0x13a3100, "RTTI_ZoomSetting");
	apply_type(0x13a3100, "RTTICompound");
	del_items(0x13a3ea0, DELIT_SIMPLE, 8);
	apply_type(0x13a3ea0, "RTTIBase[1]");
	set_name(0x13a3ea0, "ZoomSetting::sBases");
	del_items(0x13a3ea8, DELIT_SIMPLE, 1288);
	apply_type(0x13a3ea8, "RTTIAttr[46]");
	set_name(0x13a3ea8, "ZoomSetting::sAttrs");
	del_items(0x13a43b0, DELIT_SIMPLE, 12);
	apply_type(0x13a43b0, "RTTIMessageHandler[1]");
	set_name(0x13a43b0, "ZoomSetting::sMessageHandlers");

	// AIWaypointType
	set_name(0x13535f0, "RTTI_AIWaypointType");
	apply_type(0x13535f0, "RTTIEnum");

	// EAICover
	set_name(0x1353600, "RTTI_EAICover");
	apply_type(0x1353600, "RTTIEnum");

	// EAIDangerAreaType
	set_name(0x134b188, "RTTI_EAIDangerAreaType");
	apply_type(0x134b188, "RTTIEnum");

	// EAlphaDepth
	set_name(0x1331670, "RTTI_EAlphaDepth");
	apply_type(0x1331670, "RTTIEnum");

	// EAnimationDirection
	set_name(0x1363868, "RTTI_EAnimationDirection");
	apply_type(0x1363868, "RTTIEnum");

	// EAnimationExpressions
	set_name(0x13b65f4, "RTTI_EAnimationExpressions");
	apply_type(0x13b65f4, "RTTIEnum");

	// EAnimationPoseMatchingReactionType
	set_name(0x1363940, "RTTI_EAnimationPoseMatchingReactionType");
	apply_type(0x1363940, "RTTIEnum");

	// EAxis
	set_name(0x1367e1c, "RTTI_EAxis");
	apply_type(0x1367e1c, "RTTIEnum");

	// EAxisType
	set_name(0x13411f4, "RTTI_EAxisType");
	apply_type(0x13411f4, "RTTIEnum");

	// EBlendPause
	set_name(0x1336db4, "RTTI_EBlendPause");
	apply_type(0x1336db4, "RTTIEnum");

	// EBlendType
	set_name(0x1336dc4, "RTTI_EBlendType");
	apply_type(0x1336dc4, "RTTIEnum");

	// EBodyResourceFlags
	set_name(0x134f204, "RTTI_EBodyResourceFlags");
	apply_type(0x134f204, "RTTIEnum");

	// EButton
	set_name(0x1367e0c, "RTTI_EButton");
	apply_type(0x1367e0c, "RTTIEnum");

	// ECareer
	set_name(0x13ba758, "RTTI_ECareer");
	apply_type(0x13ba758, "RTTIEnum");

	// ECarryModes
	set_name(0x13858dc, "RTTI_ECarryModes");
	apply_type(0x13858dc, "RTTIEnum");

	// ECloseCombatEnvironmentDirection
	set_name(0x1389990, "RTTI_ECloseCombatEnvironmentDirection");
	apply_type(0x1389990, "RTTIEnum");

	// ECloseCombatEnvironmentType
	set_name(0x1389980, "RTTI_ECloseCombatEnvironmentType");
	apply_type(0x1389980, "RTTIEnum");

	// ECloseCombatVariation
	set_name(0x138590c, "RTTI_ECloseCombatVariation");
	apply_type(0x138590c, "RTTIEnum");

	// EColorizeBlendMode
	set_name(0x1348188, "RTTI_EColorizeBlendMode");
	apply_type(0x1348188, "RTTIEnum");

	// EComparator
	set_name(0x136d158, "RTTI_EComparator");
	apply_type(0x136d158, "RTTIEnum");

	// EComparisonType
	set_name(0x1368384, "RTTI_EComparisonType");
	apply_type(0x1368384, "RTTIEnum");

	// EConnectionFlags
	set_name(0x136d02c, "RTTI_EConnectionFlags");
	apply_type(0x136d02c, "RTTIEnum");

	// EControlType
	set_name(0x137aa0c, "RTTI_EControlType");
	apply_type(0x137aa0c, "RTTIEnum");

	// ECoverHeight
	set_name(0x135d6ec, "RTTI_ECoverHeight");
	apply_type(0x135d6ec, "RTTIEnum");

	// ECrashMoverTargeting
	set_name(0x13a5b54, "RTTI_ECrashMoverTargeting");
	apply_type(0x13a5b54, "RTTIEnum");

	// ECrosshairPartType
	set_name(0x13ace84, "RTTI_ECrosshairPartType");
	apply_type(0x13ace84, "RTTIEnum");

	// ECull
	set_name(0x1331660, "RTTI_ECull");
	apply_type(0x1331660, "RTTIEnum");

	// EDecalAlignment
	set_name(0x133988c, "RTTI_EDecalAlignment");
	apply_type(0x133988c, "RTTIEnum");

	// EDecalProjectionMode
	set_name(0x133989c, "RTTI_EDecalProjectionMode");
	apply_type(0x133989c, "RTTIEnum");

	// EDevelopmentStatus
	set_name(0x132ad28, "RTTI_EDevelopmentStatus");
	apply_type(0x132ad28, "RTTIEnum");

	// EDeviceFunction
	set_name(0x1367e2c, "RTTI_EDeviceFunction");
	apply_type(0x1367e2c, "RTTIEnum");

	// EDifficulty
	set_name(0x1367bb4, "RTTI_EDifficulty");
	apply_type(0x1367bb4, "RTTIEnum");

	// EDrawPartType
	set_name(0x1348680, "RTTI_EDrawPartType");
	apply_type(0x1348680, "RTTIEnum");

	// EEmitterForce
	set_name(0x1340b48, "RTTI_EEmitterForce");
	apply_type(0x1340b48, "RTTIEnum");

	// EEmitterShape
	set_name(0x1340b68, "RTTI_EEmitterShape");
	apply_type(0x1340b68, "RTTIEnum");

	// EEntityStreamingBehavior
	set_name(0x135d80c, "RTTI_EEntityStreamingBehavior");
	apply_type(0x135d80c, "RTTIEnum");

	// EFacialExpression
	set_name(0x137aa1c, "RTTI_EFacialExpression");
	apply_type(0x137aa1c, "RTTIEnum");

	// EFaction
	set_name(0x1368258, "RTTI_EFaction");
	apply_type(0x1368258, "RTTIEnum");

	// EFalloffType
	set_name(0x13450dc, "RTTI_EFalloffType");
	apply_type(0x13450dc, "RTTIEnum");

	// EFilter
	set_name(0x1331640, "RTTI_EFilter");
	apply_type(0x1331640, "RTTIEnum");

	// EFloating
	set_name(0x133e1e8, "RTTI_EFloating");
	apply_type(0x133e1e8, "RTTIEnum");

	// EFunctionHoldType
	set_name(0x1368394, "RTTI_EFunctionHoldType");
	apply_type(0x1368394, "RTTIEnum");

	// EGameMode
	set_name(0x1368268, "RTTI_EGameMode");
	apply_type(0x1368268, "RTTIEnum");

	// EGestureBodyParts
	set_name(0x139b2a8, "RTTI_EGestureBodyParts");
	apply_type(0x139b2a8, "RTTIEnum");

	// EGestureDirection
	set_name(0x134bbe0, "RTTI_EGestureDirection");
	apply_type(0x134bbe0, "RTTIEnum");

	// EGestureType
	set_name(0x1368374, "RTTI_EGestureType");
	apply_type(0x1368374, "RTTIEnum");

	// EHUDSnap
	set_name(0x13ac8d4, "RTTI_EHUDSnap");
	apply_type(0x13ac8d4, "RTTIEnum");

	// EHUDUnits
	set_name(0x13ac8e4, "RTTI_EHUDUnits");
	apply_type(0x13ac8e4, "RTTIEnum");

	// EHealthBarFormat
	set_name(0x13ad2c4, "RTTI_EHealthBarFormat");
	apply_type(0x13ad2c4, "RTTIEnum");

	// EHomeBaseVisibility
	set_name(0x13a36d4, "RTTI_EHomeBaseVisibility");
	apply_type(0x13a36d4, "RTTIEnum");

	// EHumanoidHitDirection
	set_name(0x138596c, "RTTI_EHumanoidHitDirection");
	apply_type(0x138596c, "RTTIEnum");

	// EHumanoidHitLocation
	set_name(0x138594c, "RTTI_EHumanoidHitLocation");
	apply_type(0x138594c, "RTTIEnum");

	// EHumanoidHitResponseType
	set_name(0x138597c, "RTTI_EHumanoidHitResponseType");
	apply_type(0x138597c, "RTTIEnum");

	// EHumanoidRunningState
	set_name(0x138592c, "RTTI_EHumanoidRunningState");
	apply_type(0x138592c, "RTTIEnum");

	// EIconType
	set_name(0x13ac7a8, "RTTI_EIconType");
	apply_type(0x13ac7a8, "RTTIEnum");

	// EInitialDoorState
	set_name(0x137aa80, "RTTI_EInitialDoorState");
	apply_type(0x137aa80, "RTTIEnum");

	// EInventoryAmmoStackType
	set_name(0x13b00e0, "RTTI_EInventoryAmmoStackType");
	apply_type(0x13b00e0, "RTTIEnum");

	// EInventoryGroup
	set_name(0x138e07c, "RTTI_EInventoryGroup");
	apply_type(0x138e07c, "RTTIEnum");

	// EItemFaction
	set_name(0x138e06c, "RTTI_EItemFaction");
	apply_type(0x138e06c, "RTTIEnum");

	// ELayerOperation
	set_name(0x1331650, "RTTI_ELayerOperation");
	apply_type(0x1331650, "RTTIEnum");

	// ELeanAndPeekAction
	set_name(0x13858fc, "RTTI_ELeanAndPeekAction");
	apply_type(0x13858fc, "RTTIEnum");

	// ELeanAndPeekDirection
	set_name(0x13858ec, "RTTI_ELeanAndPeekDirection");
	apply_type(0x13858ec, "RTTIEnum");

	// ELegendButton
	set_name(0x133d014, "RTTI_ELegendButton");
	apply_type(0x133d014, "RTTIEnum");

	// ELightInfluenceAccuracy
	set_name(0x13450cc, "RTTI_ELightInfluenceAccuracy");
	apply_type(0x13450cc, "RTTIEnum");

	// ELitFlags
	set_name(0x13450bc, "RTTI_ELitFlags");
	apply_type(0x13450bc, "RTTIEnum");

	// ELocationType
	set_name(0x135c658, "RTTI_ELocationType");
	apply_type(0x135c658, "RTTIEnum");

	// ELookDirection
	set_name(0x134bbf0, "RTTI_ELookDirection");
	apply_type(0x134bbf0, "RTTIEnum");

	// ELoopMode
	set_name(0x1336da4, "RTTI_ELoopMode");
	apply_type(0x1336da4, "RTTIEnum");

	// EMCCrosshairLimit
	set_name(0x13b6ab8, "RTTI_EMCCrosshairLimit");
	apply_type(0x13b6ab8, "RTTIEnum");

	// EMCDeadzoneShape
	set_name(0x13b6aa8, "RTTI_EMCDeadzoneShape");
	apply_type(0x13b6aa8, "RTTIEnum");

	// EMCDeadzoneType
	set_name(0x13b6ac8, "RTTI_EMCDeadzoneType");
	apply_type(0x13b6ac8, "RTTIEnum");

	// EMapIconID
	set_name(0x13ac4ec, "RTTI_EMapIconID");
	apply_type(0x13ac4ec, "RTTIEnum");

	// EMapIconLevelIndication
	set_name(0x13ac4fc, "RTTI_EMapIconLevelIndication");
	apply_type(0x13ac4fc, "RTTIEnum");

	// EMaterialDebugType
	set_name(0x1339be4, "RTTI_EMaterialDebugType");
	apply_type(0x1339be4, "RTTIEnum");

	// EMeshEmitterSpawnOrder
	set_name(0x1340b88, "RTTI_EMeshEmitterSpawnOrder");
	apply_type(0x1340b88, "RTTIEnum");

	// EMineMode
	set_name(0x13a0678, "RTTI_EMineMode");
	apply_type(0x13a0678, "RTTIEnum");

	// EMissionType
	set_name(0x13a5398, "RTTI_EMissionType");
	apply_type(0x13a5398, "RTTIEnum");

	// EMountDismountLocation
	set_name(0x137ca2c, "RTTI_EMountDismountLocation");
	apply_type(0x137ca2c, "RTTIEnum");

	// EMoveAttackChoice
	set_name(0x134bf74, "RTTI_EMoveAttackChoice");
	apply_type(0x134bf74, "RTTIEnum");

	// EMovePathChoice
	set_name(0x134bf24, "RTTI_EMovePathChoice");
	apply_type(0x134bf24, "RTTIEnum");

	// EMovePostureChoice
	set_name(0x134bf54, "RTTI_EMovePostureChoice");
	apply_type(0x134bf54, "RTTIEnum");

	// EMoveReloadChoice
	set_name(0x134bf64, "RTTI_EMoveReloadChoice");
	apply_type(0x134bf64, "RTTIEnum");

	// EMoveScanChoice
	set_name(0x134bf44, "RTTI_EMoveScanChoice");
	apply_type(0x134bf44, "RTTIEnum");

	// EMovieListType
	set_name(0x136ca30, "RTTI_EMovieListType");
	apply_type(0x136ca30, "RTTIEnum");

	// ENoProjectileTraceType
	set_name(0x1394894, "RTTI_ENoProjectileTraceType");
	apply_type(0x1394894, "RTTIEnum");

	// EOSDEventID
	set_name(0x1379204, "RTTI_EOSDEventID");
	apply_type(0x1379204, "RTTIEnum");

	// EObstacleAvoidanceGroup
	set_name(0x1352d7c, "RTTI_EObstacleAvoidanceGroup");
	apply_type(0x1352d7c, "RTTIEnum");

	// EOperator
	set_name(0x13ba850, "RTTI_EOperator");
	apply_type(0x13ba850, "RTTIEnum");

	// EPBDConstraintDescType
	set_name(0x1339c48, "RTTI_EPBDConstraintDescType");
	apply_type(0x1339c48, "RTTIEnum");

	// EPartMotionType
	set_name(0x1362960, "RTTI_EPartMotionType");
	apply_type(0x1362960, "RTTIEnum");

	// EParticleEmitRateUnits
	set_name(0x13411b4, "RTTI_EParticleEmitRateUnits");
	apply_type(0x13411b4, "RTTIEnum");

	// EParticleFadeMode
	set_name(0x13411d4, "RTTI_EParticleFadeMode");
	apply_type(0x13411d4, "RTTIEnum");

	// EParticleShape
	set_name(0x1341214, "RTTI_EParticleShape");
	apply_type(0x1341214, "RTTIEnum");

	// EParticleSystemUpdateMode
	set_name(0x1341274, "RTTI_EParticleSystemUpdateMode");
	apply_type(0x1341274, "RTTIEnum");

	// EParticleVertexAttributeSource
	set_name(0x1341254, "RTTI_EParticleVertexAttributeSource");
	apply_type(0x1341254, "RTTIEnum");

	// EPathLOFBlockMode
	set_name(0x134bf34, "RTTI_EPathLOFBlockMode");
	apply_type(0x134bf34, "RTTIEnum");

	// EPathMode
	set_name(0x13372b8, "RTTI_EPathMode");
	apply_type(0x13372b8, "RTTIEnum");

	// EPhysicsMotionType
	set_name(0x1342e30, "RTTI_EPhysicsMotionType");
	apply_type(0x1342e30, "RTTIEnum");

	// EPhysicsQualityType
	set_name(0x1342c7c, "RTTI_EPhysicsQualityType");
	apply_type(0x1342c7c, "RTTIEnum");

	// EPhysicsShapeType
	set_name(0x1342ef8, "RTTI_EPhysicsShapeType");
	apply_type(0x1342ef8, "RTTIEnum");

	// EPickUpableBy
	set_name(0x13934bc, "RTTI_EPickUpableBy");
	apply_type(0x13934bc, "RTTIEnum");

	// EPixelFormat
	set_name(0x132b95c, "RTTI_EPixelFormat");
	apply_type(0x132b95c, "RTTIEnum");

	// EPlaceHolderAttrType
	set_name(0x135d474, "RTTI_EPlaceHolderAttrType");
	apply_type(0x135d474, "RTTIEnum");

	// EPlayerScoreEntityStat
	set_name(0x136d300, "RTTI_EPlayerScoreEntityStat");
	apply_type(0x136d300, "RTTIEnum");

	// EPlayerScoreStat
	set_name(0x136d2f0, "RTTI_EPlayerScoreStat");
	apply_type(0x136d2f0, "RTTIEnum");

	// EPositionAimMode
	set_name(0x1368084, "RTTI_EPositionAimMode");
	apply_type(0x1368084, "RTTIEnum");

	// EPostProcessBlendMode
	set_name(0x1345c1c, "RTTI_EPostProcessBlendMode");
	apply_type(0x1345c1c, "RTTIEnum");

	// EPrimitiveSkinInfoType
	set_name(0x1356b44, "RTTI_EPrimitiveSkinInfoType");
	apply_type(0x1356b44, "RTTIEnum");

	// EProjColorOperation
	set_name(0x1339e2c, "RTTI_EProjColorOperation");
	apply_type(0x1339e2c, "RTTIEnum");

	// ERegion
	set_name(0x1335b74, "RTTI_ERegion");
	apply_type(0x1335b74, "RTTIEnum");

	// ERelativeUseLocationPosition
	set_name(0x137caa0, "RTTI_ERelativeUseLocationPosition");
	apply_type(0x137caa0, "RTTIEnum");

	// ERenderEffectType
	set_name(0x13458e8, "RTTI_ERenderEffectType");
	apply_type(0x13458e8, "RTTIEnum");

	// ERenderTechniqueType
	set_name(0x1345c0c, "RTTI_ERenderTechniqueType");
	apply_type(0x1345c0c, "RTTIEnum");

	// ESelfDamage
	set_name(0x136c5e4, "RTTI_ESelfDamage");
	apply_type(0x136c5e4, "RTTIEnum");

	// ESelfShadowMode
	set_name(0x1341234, "RTTI_ESelfShadowMode");
	apply_type(0x1341234, "RTTIEnum");

	// ESentenceGroupType
	set_name(0x13bc6b0, "RTTI_ESentenceGroupType");
	apply_type(0x13bc6b0, "RTTIEnum");

	// EShaderVariableType
	set_name(0x1344ef0, "RTTI_EShaderVariableType");
	apply_type(0x1344ef0, "RTTIEnum");

	// EShadowCull
	set_name(0x1348670, "RTTI_EShadowCull");
	apply_type(0x1348670, "RTTIEnum");

	// ESkillContext
	set_name(0x134f1f4, "RTTI_ESkillContext");
	apply_type(0x134f1f4, "RTTIEnum");

	// ESkipLocationType
	set_name(0x136ca20, "RTTI_ESkipLocationType");
	apply_type(0x136ca20, "RTTIEnum");

	// ESortMode
	set_name(0x1348660, "RTTI_ESortMode");
	apply_type(0x1348660, "RTTIEnum");

	// ESortOrder
	set_name(0x1348650, "RTTI_ESortOrder");
	apply_type(0x1348650, "RTTIEnum");

	// ESoundAttenuationType
	set_name(0x1359418, "RTTI_ESoundAttenuationType");
	apply_type(0x1359418, "RTTIEnum");

	// ESoundFileFormat
	set_name(0x13598fc, "RTTI_ESoundFileFormat");
	apply_type(0x13598fc, "RTTIEnum");

	// ESoundFilterMode
	set_name(0x1359cd8, "RTTI_ESoundFilterMode");
	apply_type(0x1359cd8, "RTTIEnum");

	// ESoundMasterVolumeGroup
	set_name(0x1359458, "RTTI_ESoundMasterVolumeGroup");
	apply_type(0x1359458, "RTTIEnum");

	// ESoundReverbMode
	set_name(0x13590c4, "RTTI_ESoundReverbMode");
	apply_type(0x13590c4, "RTTIEnum");

	// ESoundSubmixBus
	set_name(0x1359cf8, "RTTI_ESoundSubmixBus");
	apply_type(0x1359cf8, "RTTIEnum");

	// ESoundZoneShapeType
	set_name(0x13589d8, "RTTI_ESoundZoneShapeType");
	apply_type(0x13589d8, "RTTIEnum");

	// ESpearPickupCondition
	set_name(0x13a0aec, "RTTI_ESpearPickupCondition");
	apply_type(0x13a0aec, "RTTIEnum");

	// EStacking
	set_name(0x133e1f8, "RTTI_EStacking");
	apply_type(0x133e1f8, "RTTIEnum");

	// EStance
	set_name(0x13858cc, "RTTI_EStance");
	apply_type(0x13858cc, "RTTIEnum");

	// EStatType
	set_name(0x13ba860, "RTTI_EStatType");
	apply_type(0x13ba860, "RTTIEnum");

	// EStateSwitchType
	set_name(0x13364a8, "RTTI_EStateSwitchType");
	apply_type(0x13364a8, "RTTIEnum");

	// ESteeringType
	set_name(0x1342f6c, "RTTI_ESteeringType");
	apply_type(0x1342f6c, "RTTIEnum");

	// EStreamingAction
	set_name(0x135c0f0, "RTTI_EStreamingAction");
	apply_type(0x135c0f0, "RTTIEnum");

	// ESunMSAAQuality
	set_name(0x1345484, "RTTI_ESunMSAAQuality");
	apply_type(0x1345484, "RTTIEnum");

	// ESwayChange
	set_name(0x139c79c, "RTTI_ESwayChange");
	apply_type(0x139c79c, "RTTIEnum");

	// ETargetArrowPosition
	set_name(0x13b1090, "RTTI_ETargetArrowPosition");
	apply_type(0x13b1090, "RTTIEnum");

	// ETargetArrowType
	set_name(0x136ce44, "RTTI_ETargetArrowType");
	apply_type(0x136ce44, "RTTIEnum");

	// ETextAlignment
	set_name(0x13abce8, "RTTI_ETextAlignment");
	apply_type(0x13abce8, "RTTIEnum");

	// ETextHAlignment
	set_name(0x133e1c8, "RTTI_ETextHAlignment");
	apply_type(0x133e1c8, "RTTIEnum");

	// ETextOrientation
	set_name(0x133e228, "RTTI_ETextOrientation");
	apply_type(0x133e228, "RTTIEnum");

	// ETextOverflow
	set_name(0x133e218, "RTTI_ETextOverflow");
	apply_type(0x133e218, "RTTIEnum");

	// ETextTransform
	set_name(0x133e248, "RTTI_ETextTransform");
	apply_type(0x133e248, "RTTIEnum");

	// ETextWhiteSpace
	set_name(0x133e208, "RTTI_ETextWhiteSpace");
	apply_type(0x133e208, "RTTIEnum");

	// ETextureRepeat
	set_name(0x133e238, "RTTI_ETextureRepeat");
	apply_type(0x133e238, "RTTIEnum");

	// ETrajectorySolveMethod
	set_name(0x13a03ec, "RTTI_ETrajectorySolveMethod");
	apply_type(0x13a03ec, "RTTIEnum");

	// ETriState
	set_name(0x1368094, "RTTI_ETriState");
	apply_type(0x1368094, "RTTIEnum");

	// EUseLocationType
	set_name(0x136cea8, "RTTI_EUseLocationType");
	apply_type(0x136cea8, "RTTIEnum");

	// EVerticalAlignment
	set_name(0x133e1d8, "RTTI_EVerticalAlignment");
	apply_type(0x133e1d8, "RTTIEnum");

	// EViewLayer
	set_name(0x1348690, "RTTI_EViewLayer");
	apply_type(0x1348690, "RTTIEnum");

	// EViewLayerOverride
	set_name(0x135d880, "RTTI_EViewLayerOverride");
	apply_type(0x135d880, "RTTIEnum");

	// EWeaponFunction
	set_name(0x13bc830, "RTTI_EWeaponFunction");
	apply_type(0x13bc830, "RTTIEnum");

	// EWidgetAnimationTrigger
	set_name(0x133dfa0, "RTTI_EWidgetAnimationTrigger");
	apply_type(0x133dfa0, "RTTIEnum");

	// EWidgetLayer
	set_name(0x133e258, "RTTI_EWidgetLayer");
	apply_type(0x133e258, "RTTIEnum");

	// LinkTypeGroup
	set_name(0x1352c50, "RTTI_LinkTypeGroup");
	apply_type(0x1352c50, "RTTIEnum");

	// CommandLine
	set_name(0x13360fc, "RTTI_CommandLine");
	apply_type(0x13360fc, "RTTIAtom");

	// Filename
	set_name(0x13360b8, "RTTI_Filename");
	apply_type(0x13360b8, "RTTIAtom");

	// HalfFloat
	set_name(0x1334ee8, "RTTI_HalfFloat");
	apply_type(0x1334ee8, "RTTIAtom");

	// MaterialType
	set_name(0x1338dcc, "RTTI_MaterialType");
	apply_type(0x1338dcc, "RTTIAtom");

	// PhysicsCollisionFilterInfo
	set_name(0x1344e1c, "RTTI_PhysicsCollisionFilterInfo");
	apply_type(0x1344e1c, "RTTIAtom");

	// RenderDataPriority
	set_name(0x1331684, "RTTI_RenderDataPriority");
	apply_type(0x1331684, "RTTIAtom");

	// SScalar
	set_name(0x13359a0, "RTTI_SScalar");
	apply_type(0x13359a0, "RTTIAtom");

	// String
	set_name(0x1336074, "RTTI_String");
	apply_type(0x1336074, "RTTIAtom");

	// WString
	set_name(0x1336130, "RTTI_WString");
	apply_type(0x1336130, "RTTIAtom");

	// bool
	set_name(0x1335ce4, "RTTI_bool");
	apply_type(0x1335ce4, "RTTIAtom");

	// double
	set_name(0x1336040, "RTTI_double");
	apply_type(0x1336040, "RTTIAtom");

	// float
	set_name(0x1335ffc, "RTTI_float");
	apply_type(0x1335ffc, "RTTIAtom");

	// int
	set_name(0x1335d4c, "RTTI_int");
	apply_type(0x1335d4c, "RTTIAtom");

	// int128
	set_name(0x1335f94, "RTTI_int128");
	apply_type(0x1335f94, "RTTIAtom");

	// int16
	set_name(0x1335e3c, "RTTI_int16");
	apply_type(0x1335e3c, "RTTIAtom");

	// int32
	set_name(0x1335ec4, "RTTI_int32");
	apply_type(0x1335ec4, "RTTIAtom");

	// int64
	set_name(0x1335f2c, "RTTI_int64");
	apply_type(0x1335f2c, "RTTIAtom");

	// int8
	set_name(0x1335dc4, "RTTI_int8");
	apply_type(0x1335dc4, "RTTIAtom");

	// uint
	set_name(0x1335d90, "RTTI_uint");
	apply_type(0x1335d90, "RTTIAtom");

	// uint128
	set_name(0x1335fc8, "RTTI_uint128");
	apply_type(0x1335fc8, "RTTIAtom");

	// uint16
	set_name(0x1335e80, "RTTI_uint16");
	apply_type(0x1335e80, "RTTIAtom");

	// uint32
	set_name(0x1335ef8, "RTTI_uint32");
	apply_type(0x1335ef8, "RTTIAtom");

	// uint64
	set_name(0x1335f60, "RTTI_uint64");
	apply_type(0x1335f60, "RTTIAtom");

	// uint8
	set_name(0x1335df8, "RTTI_uint8");
	apply_type(0x1335df8, "RTTIAtom");

	// wchar
	set_name(0x1335d18, "RTTI_wchar");
	apply_type(0x1335d18, "RTTIAtom");

	// Ref<AIArea>
	set_name(0x1352734, "RTTI_Ref_AIArea");
	apply_type(0x1352734, "RTTIPointer");

	// Ref<AIAreaGraph>
	set_name(0x135280c, "RTTI_Ref_AIAreaGraph");
	apply_type(0x135280c, "RTTIPointer");

	// Ref<AIAtmosphereBoxResource>
	set_name(0x134af54, "RTTI_Ref_AIAtmosphereBoxResource");
	apply_type(0x134af54, "RTTIPointer");

	// Ref<AIContextResource>
	set_name(0x134beb0, "RTTI_Ref_AIContextResource");
	apply_type(0x134beb0, "RTTIPointer");

	// Ref<AICoverManager>
	set_name(0x1353610, "RTTI_Ref_AICoverManager");
	apply_type(0x1353610, "RTTIPointer");

	// Ref<AIFaction>
	set_name(0x134b458, "RTTI_Ref_AIFaction");
	apply_type(0x134b458, "RTTIPointer");

	// Ref<AIFleeDangerAreaPositionPickerResource>
	set_name(0x1353008, "RTTI_Ref_AIFleeDangerAreaPositionPickerResource");
	apply_type(0x1353008, "RTTIPointer");

	// Ref<AIHTNPlannerResource>
	set_name(0x13502f4, "RTTI_Ref_AIHTNPlannerResource");
	apply_type(0x13502f4, "RTTIPointer");

	// Ref<AIIndividualConfig>
	set_name(0x134bfd8, "RTTI_Ref_AIIndividualConfig");
	apply_type(0x134bfd8, "RTTIPointer");

	// Ref<AIIndividualHookResource>
	set_name(0x134c090, "RTTI_Ref_AIIndividualHookResource");
	apply_type(0x134c090, "RTTIPointer");

	// Ref<AIMarkerLocatorResource>
	set_name(0x139a238, "RTTI_Ref_AIMarkerLocatorResource");
	apply_type(0x139a238, "RTTIPointer");

	// Ref<AINearestWaypoint>
	set_name(0x1352de0, "RTTI_Ref_AINearestWaypoint");
	apply_type(0x1352de0, "RTTIPointer");

	// Ref<AIPerception>
	set_name(0x134b9c8, "RTTI_Ref_AIPerception");
	apply_type(0x134b9c8, "RTTIPointer");

	// Ref<AIPositionPickerResource>
	set_name(0x1352e98, "RTTI_Ref_AIPositionPickerResource");
	apply_type(0x1352e98, "RTTIPointer");

	// Ref<AIScanContextResource>
	set_name(0x134c148, "RTTI_Ref_AIScanContextResource");
	apply_type(0x134c148, "RTTIPointer");

	// Ref<AISkillDriveResource>
	set_name(0x134f214, "RTTI_Ref_AISkillDriveResource");
	apply_type(0x134f214, "RTTIPointer");

	// Ref<AISkillResource>
	set_name(0x134c1ac, "RTTI_Ref_AISkillResource");
	apply_type(0x134c1ac, "RTTIPointer");

	// Ref<AISquadHookResource>
	set_name(0x13501d4, "RTTI_Ref_AISquadHookResource");
	apply_type(0x13501d4, "RTTIPointer");

	// Ref<AISquadResource>
	set_name(0x1350238, "RTTI_Ref_AISquadResource");
	apply_type(0x1350238, "RTTIPointer");

	// Ref<AIStaticCoverMap>
	set_name(0x13537d4, "RTTI_Ref_AIStaticCoverMap");
	apply_type(0x13537d4, "RTTIPointer");

	// Ref<AIStrategyResource>
	set_name(0x13755f8, "RTTI_Ref_AIStrategyResource");
	apply_type(0x13755f8, "RTTIPointer");

	// Ref<AIWaypointAreaRadiusTable>
	set_name(0x13532f0, "RTTI_Ref_AIWaypointAreaRadiusTable");
	apply_type(0x13532f0, "RTTIPointer");

	// Ref<AIWaypointGrid>
	set_name(0x13533fc, "RTTI_Ref_AIWaypointGrid");
	apply_type(0x13533fc, "RTTIPointer");

	// Ref<AIWaypointNeighbors>
	set_name(0x1353528, "RTTI_Ref_AIWaypointNeighbors");
	apply_type(0x1353528, "RTTIPointer");

	// Ref<AIWeaponOperationResource>
	set_name(0x134ada0, "RTTI_Ref_AIWeaponOperationResource");
	apply_type(0x134ada0, "RTTIPointer");

	// Ref<AIWeaponPreference>
	set_name(0x134e830, "RTTI_Ref_AIWeaponPreference");
	apply_type(0x134e830, "RTTIPointer");

	// Ref<AIWeaponPreferenceSettings>
	set_name(0x134e8a4, "RTTI_Ref_AIWeaponPreferenceSettings");
	apply_type(0x134e8a4, "RTTIPointer");

	// Ref<AbilityAnimatedByParentResource>
	set_name(0x135e6e0, "RTTI_Ref_AbilityAnimatedByParentResource");
	apply_type(0x135e6e0, "RTTIPointer");

	// Ref<AbilityAnimationResource>
	set_name(0x135e798, "RTTI_Ref_AbilityAnimationResource");
	apply_type(0x135e798, "RTTIPointer");

	// Ref<AbilityFootPlacementResource>
	set_name(0x135e918, "RTTI_Ref_AbilityFootPlacementResource");
	apply_type(0x135e918, "RTTIPointer");

	// Ref<AbilityPhonemeAnimationResource>
	set_name(0x135ec08, "RTTI_Ref_AbilityPhonemeAnimationResource");
	apply_type(0x135ec08, "RTTIPointer");

	// Ref<AbilityRagdollResource>
	set_name(0x135edec, "RTTI_Ref_AbilityRagdollResource");
	apply_type(0x135edec, "RTTIPointer");

	// Ref<AbilityResource>
	set_name(0x135ee50, "RTTI_Ref_AbilityResource");
	apply_type(0x135ee50, "RTTIPointer");

	// Ref<AbilityShaderAnimationResource>
	set_name(0x135f034, "RTTI_Ref_AbilityShaderAnimationResource");
	apply_type(0x135f034, "RTTIPointer");

	// Ref<AbilitySimpleAnimationResource>
	set_name(0x135e860, "RTTI_Ref_AbilitySimpleAnimationResource");
	apply_type(0x135e860, "RTTIPointer");

	// Ref<AbilityTwoBoneIKResource>
	set_name(0x135ef18, "RTTI_Ref_AbilityTwoBoneIKResource");
	apply_type(0x135ef18, "RTTIPointer");

	// Ref<AbilityWindAnimationResource>
	set_name(0x135f0ec, "RTTI_Ref_AbilityWindAnimationResource");
	apply_type(0x135f0ec, "RTTIPointer");

	// Ref<AccuracySettings>
	set_name(0x139c738, "RTTI_Ref_AccuracySettings");
	apply_type(0x139c738, "RTTIPointer");

	// Ref<ActorResource>
	set_name(0x139a2f0, "RTTI_Ref_ActorResource");
	apply_type(0x139a2f0, "RTTIPointer");

	// Ref<AimDeviationResource>
	set_name(0x139c800, "RTTI_Ref_AimDeviationResource");
	apply_type(0x139c800, "RTTIPointer");

	// Ref<AimLagSettings>
	set_name(0x138d3c8, "RTTI_Ref_AimLagSettings");
	apply_type(0x138d3c8, "RTTIPointer");

	// Ref<AirVehiclePendulumResource>
	set_name(0x137f810, "RTTI_Ref_AirVehiclePendulumResource");
	apply_type(0x137f810, "RTTIPointer");

	// Ref<AmmoEjectorResource>
	set_name(0x139c960, "RTTI_Ref_AmmoEjectorResource");
	apply_type(0x139c960, "RTTIPointer");

	// Ref<AmmoResource>
	set_name(0x139ca8c, "RTTI_Ref_AmmoResource");
	apply_type(0x139ca8c, "RTTIPointer");

	// Ref<AnimatedEntityActorResource>
	set_name(0x139a3b8, "RTTI_Ref_AnimatedEntityActorResource");
	apply_type(0x139a3b8, "RTTIPointer");

	// Ref<AnimatedScreenEffectResource>
	set_name(0x13aba18, "RTTI_Ref_AnimatedScreenEffectResource");
	apply_type(0x13aba18, "RTTIPointer");

	// Ref<AnimationEventResource>
	set_name(0x13362c4, "RTTI_Ref_AnimationEventResource");
	apply_type(0x13362c4, "RTTIPointer");

	// Ref<AnimationMotionBase>
	set_name(0x13bc594, "RTTI_Ref_AnimationMotionBase");
	apply_type(0x13bc594, "RTTIPointer");

	// Ref<AnimationPoseMatchingConfigData>
	set_name(0x1363804, "RTTI_Ref_AnimationPoseMatchingConfigData");
	apply_type(0x1363804, "RTTIPointer");

	// Ref<AnimationPoseMatchingDataBase>
	set_name(0x13638dc, "RTTI_Ref_AnimationPoseMatchingDataBase");
	apply_type(0x13638dc, "RTTIPointer");

	// Ref<AnimationPoseMatchingHelperResource>
	set_name(0x13639b4, "RTTI_Ref_AnimationPoseMatchingHelperResource");
	apply_type(0x13639b4, "RTTIPointer");

	// Ref<AnimationResource>
	set_name(0x1336328, "RTTI_Ref_AnimationResource");
	apply_type(0x1336328, "RTTIPointer");

	// Ref<AnimationState>
	set_name(0x13365a0, "RTTI_Ref_AnimationState");
	apply_type(0x13365a0, "RTTIPointer");

	// Ref<AnimationStateEvents>
	set_name(0x133651c, "RTTI_Ref_AnimationStateEvents");
	apply_type(0x133651c, "RTTIPointer");

	// Ref<AnimationStateManager>
	set_name(0x1336740, "RTTI_Ref_AnimationStateManager");
	apply_type(0x1336740, "RTTIPointer");

	// Ref<AnimationTrackLinearBool>
	set_name(0x1336c78, "RTTI_Ref_AnimationTrackLinearBool");
	apply_type(0x1336c78, "RTTIPointer");

	// Ref<AnimationTrackLinearFQuat>
	set_name(0x1336cdc, "RTTI_Ref_AnimationTrackLinearFQuat");
	apply_type(0x1336cdc, "RTTIPointer");

	// Ref<AnimationTrackLinearFVector3>
	set_name(0x1336bb0, "RTTI_Ref_AnimationTrackLinearFVector3");
	apply_type(0x1336bb0, "RTTIPointer");

	// Ref<AnimationTrackLinearFVector4>
	set_name(0x1336c14, "RTTI_Ref_AnimationTrackLinearFVector4");
	apply_type(0x1336c14, "RTTIPointer");

	// Ref<AnimationTrackLinearFloat>
	set_name(0x1336b4c, "RTTI_Ref_AnimationTrackLinearFloat");
	apply_type(0x1336b4c, "RTTIPointer");

	// Ref<AnimationTrackLinearRGBAColor>
	set_name(0x1336d40, "RTTI_Ref_AnimationTrackLinearRGBAColor");
	apply_type(0x1336d40, "RTTIPointer");

	// Ref<Asset>
	set_name(0x1338ab0, "RTTI_Ref_Asset");
	apply_type(0x1338ab0, "RTTIPointer");

	// Ref<AttachableExplosiveResource>
	set_name(0x139cb44, "RTTI_Ref_AttachableExplosiveResource");
	apply_type(0x139cb44, "RTTIPointer");

	// Ref<AutoAimHull>
	set_name(0x13b6474, "RTTI_Ref_AutoAimHull");
	apply_type(0x13b6474, "RTTIPointer");

	// Ref<AutoSelectSkeletonAnimationResource>
	set_name(0x1355b04, "RTTI_Ref_AutoSelectSkeletonAnimationResource");
	apply_type(0x1355b04, "RTTIPointer");

	// Ref<BaseConcreteAsset>
	set_name(0x1338b24, "RTTI_Ref_BaseConcreteAsset");
	apply_type(0x1338b24, "RTTIPointer");

	// Ref<BlendExpression>
	set_name(0x1336e38, "RTTI_Ref_BlendExpression");
	apply_type(0x1336e38, "RTTIPointer");

	// Ref<BlendSkeletonAnimationResource>
	set_name(0x13559e8, "RTTI_Ref_BlendSkeletonAnimationResource");
	apply_type(0x13559e8, "RTTIPointer");

	// Ref<BlendedMeshResource>
	set_name(0x133b9b0, "RTTI_Ref_BlendedMeshResource");
	apply_type(0x133b9b0, "RTTIPointer");

	// Ref<BloodPuddleSettings>
	set_name(0x1385d44, "RTTI_Ref_BloodPuddleSettings");
	apply_type(0x1385d44, "RTTIPointer");

	// Ref<BloomSettingsResource>
	set_name(0x13480bc, "RTTI_Ref_BloomSettingsResource");
	apply_type(0x13480bc, "RTTIPointer");

	// Ref<BlurSettingsResource>
	set_name(0x1348124, "RTTI_Ref_BlurSettingsResource");
	apply_type(0x1348124, "RTTIPointer");

	// Ref<BoneAttachedParticleSystemResource>
	set_name(0x13624ec, "RTTI_Ref_BoneAttachedParticleSystemResource");
	apply_type(0x13624ec, "RTTIPointer");

	// Ref<ButtonIconCollection>
	set_name(0x13ac81c, "RTTI_Ref_ButtonIconCollection");
	apply_type(0x13ac81c, "RTTIPointer");

	// Ref<CameraEntityResource>
	set_name(0x135dac8, "RTTI_Ref_CameraEntityResource");
	apply_type(0x135dac8, "RTTIPointer");

	// Ref<CaptureAndHoldAreaFactionSettings>
	set_name(0x139c308, "RTTI_Ref_CaptureAndHoldAreaFactionSettings");
	apply_type(0x139c308, "RTTIPointer");

	// Ref<Career>
	set_name(0x13ba7dc, "RTTI_Ref_Career");
	apply_type(0x13ba7dc, "RTTIPointer");

	// Ref<CareerAbilityResource>
	set_name(0x136bdd4, "RTTI_Ref_CareerAbilityResource");
	apply_type(0x136bdd4, "RTTIPointer");

	// Ref<CareerUnlock>
	set_name(0x13ba768, "RTTI_Ref_CareerUnlock");
	apply_type(0x13ba768, "RTTIPointer");

	// Ref<ClusterGrenadeFragmentResource>
	set_name(0x13a0508, "RTTI_Ref_ClusterGrenadeFragmentResource");
	apply_type(0x13a0508, "RTTIPointer");

	// Ref<CollisionHullToRagdollMappingResource>
	set_name(0x135ed88, "RTTI_Ref_CollisionHullToRagdollMappingResource");
	apply_type(0x135ed88, "RTTIPointer");

	// Ref<ColorizeSettingsResource>
	set_name(0x13482b4, "RTTI_Ref_ColorizeSettingsResource");
	apply_type(0x13482b4, "RTTIPointer");

	// Ref<ConcreteAsset>
	set_name(0x1338b98, "RTTI_Ref_ConcreteAsset");
	apply_type(0x1338b98, "RTTIPointer");

	// Ref<ControlledEntityActorResource>
	set_name(0x139a5c0, "RTTI_Ref_ControlledEntityActorResource");
	apply_type(0x139a5c0, "RTTIPointer");

	// Ref<CoreObject>
	set_name(0x1339024, "RTTI_Ref_CoreObject");
	apply_type(0x1339024, "RTTIPointer");

	// Ref<CoronaResource>
	set_name(0x1339770, "RTTI_Ref_CoronaResource");
	apply_type(0x1339770, "RTTIPointer");

	// Ref<CrashMoverResource>
	set_name(0x13a5b64, "RTTI_Ref_CrashMoverResource");
	apply_type(0x13a5b64, "RTTIPointer");

	// Ref<CurveResource>
	set_name(0x135c304, "RTTI_Ref_CurveResource");
	apply_type(0x135c304, "RTTIPointer");

	// Ref<DamageAreaResource>
	set_name(0x1377174, "RTTI_Ref_DamageAreaResource");
	apply_type(0x1377174, "RTTIPointer");

	// Ref<DamageModelResource>
	set_name(0x13772a0, "RTTI_Ref_DamageModelResource");
	apply_type(0x13772a0, "RTTIPointer");

	// Ref<DamageTypeGroup>
	set_name(0x138598c, "RTTI_Ref_DamageTypeGroup");
	apply_type(0x138598c, "RTTIPointer");

	// Ref<DamageTypeResource>
	set_name(0x135d354, "RTTI_Ref_DamageTypeResource");
	apply_type(0x135d354, "RTTIPointer");

	// Ref<DecalResource>
	set_name(0x13398ac, "RTTI_Ref_DecalResource");
	apply_type(0x13398ac, "RTTIPointer");

	// Ref<DepthOfFieldSettingsResource>
	set_name(0x1347ff0, "RTTI_Ref_DepthOfFieldSettingsResource");
	apply_type(0x1347ff0, "RTTIPointer");

	// Ref<Destructibility>
	set_name(0x135dcd0, "RTTI_Ref_Destructibility");
	apply_type(0x135dcd0, "RTTIPointer");

	// Ref<DestructibilityConstraintState>
	set_name(0x135e10c, "RTTI_Ref_DestructibilityConstraintState");
	apply_type(0x135e10c, "RTTIPointer");

	// Ref<DestructibilityPartState>
	set_name(0x135e098, "RTTI_Ref_DestructibilityPartState");
	apply_type(0x135e098, "RTTIPointer");

	// Ref<DestructibilityPartStateResource>
	set_name(0x135dd98, "RTTI_Ref_DestructibilityPartStateResource");
	apply_type(0x135dd98, "RTTIPointer");

	// Ref<DestructibilityResource>
	set_name(0x135dfe0, "RTTI_Ref_DestructibilityResource");
	apply_type(0x135dfe0, "RTTIPointer");

	// Ref<DestructibilityState>
	set_name(0x135e180, "RTTI_Ref_DestructibilityState");
	apply_type(0x135e180, "RTTIPointer");

	// Ref<DestructionLogicAction>
	set_name(0x135e2cc, "RTTI_Ref_DestructionLogicAction");
	apply_type(0x135e2cc, "RTTIPointer");

	// Ref<DifficultyFloatResource>
	set_name(0x1367c8c, "RTTI_Ref_DifficultyFloatResource");
	apply_type(0x1367c8c, "RTTIPointer");

	// Ref<DifficultyRangeResource>
	set_name(0x1367cf0, "RTTI_Ref_DifficultyRangeResource");
	apply_type(0x1367cf0, "RTTIPointer");

	// Ref<EffectComponentResource>
	set_name(0x1389f84, "RTTI_Ref_EffectComponentResource");
	apply_type(0x1389f84, "RTTIPointer");

	// Ref<EffectEntityResource>
	set_name(0x13789d4, "RTTI_Ref_EffectEntityResource");
	apply_type(0x13789d4, "RTTIPointer");

	// Ref<ElectricityDrawSettings>
	set_name(0x13b8598, "RTTI_Ref_ElectricityDrawSettings");
	apply_type(0x13b8598, "RTTIPointer");

	// Ref<ElectricityDrawSettingsModifierResource>
	set_name(0x13b7ab8, "RTTI_Ref_ElectricityDrawSettingsModifierResource");
	apply_type(0x13b7ab8, "RTTIPointer");

	// Ref<ElectricityEmitNodeResource>
	set_name(0x13b7d24, "RTTI_Ref_ElectricityEmitNodeResource");
	apply_type(0x13b7d24, "RTTIPointer");

	// Ref<ElectricityEmitSettings>
	set_name(0x13b860c, "RTTI_Ref_ElectricityEmitSettings");
	apply_type(0x13b860c, "RTTIPointer");

	// Ref<ElectricityGridNodeResource>
	set_name(0x13b7ddc, "RTTI_Ref_ElectricityGridNodeResource");
	apply_type(0x13b7ddc, "RTTIPointer");

	// Ref<ElectricityNodeResource>
	set_name(0x13b7b1c, "RTTI_Ref_ElectricityNodeResource");
	apply_type(0x13b7b1c, "RTTIPointer");

	// Ref<ElectricitySpawnEntityResource>
	set_name(0x13b86c4, "RTTI_Ref_ElectricitySpawnEntityResource");
	apply_type(0x13b86c4, "RTTIPointer");

	// Ref<EnergyProjectileResource>
	set_name(0x13b8438, "RTTI_Ref_EnergyProjectileResource");
	apply_type(0x13b8438, "RTTIPointer");

	// Ref<EntityActorResource>
	set_name(0x139a7c8, "RTTI_Ref_EntityActorResource");
	apply_type(0x139a7c8, "RTTIPointer");

	// Ref<EntityComponentResource>
	set_name(0x135d9ac, "RTTI_Ref_EntityComponentResource");
	apply_type(0x135d9ac, "RTTIPointer");

	// Ref<EntityResource>
	set_name(0x135d890, "RTTI_Ref_EntityResource");
	apply_type(0x135d890, "RTTIPointer");

	// Ref<EntityStickerResource>
	set_name(0x1378a8c, "RTTI_Ref_EntityStickerResource");
	apply_type(0x1378a8c, "RTTIPointer");

	// Ref<EventResource>
	set_name(0x1394468, "RTTI_Ref_EventResource");
	apply_type(0x1394468, "RTTIPointer");

	// Ref<ExplosionResource>
	set_name(0x139ed50, "RTTI_Ref_ExplosionResource");
	apply_type(0x139ed50, "RTTIPointer");

	// Ref<ExposureSettingsResource>
	set_name(0x1348384, "RTTI_Ref_ExposureSettingsResource");
	apply_type(0x1348384, "RTTIPointer");

	// Ref<FacialAnimationResource>
	set_name(0x13b6668, "RTTI_Ref_FacialAnimationResource");
	apply_type(0x13b6668, "RTTIPointer");

	// Ref<FacialExpressionAnimatorResource>
	set_name(0x13b66cc, "RTTI_Ref_FacialExpressionAnimatorResource");
	apply_type(0x13b66cc, "RTTIPointer");

	// Ref<FirstPersonAnimatedOverlayResource>
	set_name(0x13b6590, "RTTI_Ref_FirstPersonAnimatedOverlayResource");
	apply_type(0x13b6590, "RTTIPointer");

	// Ref<FirstPersonAnimationResource>
	set_name(0x13b652c, "RTTI_Ref_FirstPersonAnimationResource");
	apply_type(0x13b652c, "RTTIPointer");

	// Ref<FirstPersonHitEffectsResource>
	set_name(0x13859f0, "RTTI_Ref_FirstPersonHitEffectsResource");
	apply_type(0x13859f0, "RTTIPointer");

	// Ref<FontResource>
	set_name(0x1345058, "RTTI_Ref_FontResource");
	apply_type(0x1345058, "RTTIPointer");

	// Ref<GameInputJoystickResource>
	set_name(0x1367eb0, "RTTI_Ref_GameInputJoystickResource");
	apply_type(0x1367eb0, "RTTIPointer");

	// Ref<GestureCollectionResource>
	set_name(0x139b31c, "RTTI_Ref_GestureCollectionResource");
	apply_type(0x139b31c, "RTTIPointer");

	// Ref<GlobalDamageModifier>
	set_name(0x136c658, "RTTI_Ref_GlobalDamageModifier");
	apply_type(0x136c658, "RTTIPointer");

	// Ref<Gradient>
	set_name(0x135c484, "RTTI_Ref_Gradient");
	apply_type(0x135c484, "RTTIPointer");

	// Ref<GrainSettingsResource>
	set_name(0x1348058, "RTTI_Ref_GrainSettingsResource");
	apply_type(0x1348058, "RTTIPointer");

	// Ref<GrenadeEjectorResource>
	set_name(0x13a03fc, "RTTI_Ref_GrenadeEjectorResource");
	apply_type(0x13a03fc, "RTTIPointer");

	// Ref<HUDCrosshairParts>
	set_name(0x13acf4c, "RTTI_Ref_HUDCrosshairParts");
	apply_type(0x13acf4c, "RTTIPointer");

	// Ref<HUDCrosshairSettings>
	set_name(0x13acfb0, "RTTI_Ref_HUDCrosshairSettings");
	apply_type(0x13acfb0, "RTTIPointer");

	// Ref<HUDElementResource>
	set_name(0x13ac8f4, "RTTI_Ref_HUDElementResource");
	apply_type(0x13ac8f4, "RTTIPointer");

	// Ref<HUDInventoryEntitySettings>
	set_name(0x13b007c, "RTTI_Ref_HUDInventoryEntitySettings");
	apply_type(0x13b007c, "RTTIPointer");

	// Ref<HUDResource>
	set_name(0x13ac968, "RTTI_Ref_HUDResource");
	apply_type(0x13ac968, "RTTIPointer");

	// Ref<HUDScoreEventActivateAnimation>
	set_name(0x13b3420, "RTTI_Ref_HUDScoreEventActivateAnimation");
	apply_type(0x13b3420, "RTTIPointer");

	// Ref<HUDScoreEventAnimation>
	set_name(0x13b33bc, "RTTI_Ref_HUDScoreEventAnimation");
	apply_type(0x13b33bc, "RTTIPointer");

	// Ref<HUDTimerSettings>
	set_name(0x13acdcc, "RTTI_Ref_HUDTimerSettings");
	apply_type(0x13acdcc, "RTTIPointer");

	// Ref<HelghastGogglesComponentResource>
	set_name(0x1389c2c, "RTTI_Ref_HelghastGogglesComponentResource");
	apply_type(0x1389c2c, "RTTIPointer");

	// Ref<HitResponseAttachedParticlesResource>
	set_name(0x1385a54, "RTTI_Ref_HitResponseAttachedParticlesResource");
	apply_type(0x1385a54, "RTTIPointer");

	// Ref<HumanoidCinematicDeathSystemResource>
	set_name(0x1388f9c, "RTTI_Ref_HumanoidCinematicDeathSystemResource");
	apply_type(0x1388f9c, "RTTIPointer");

	// Ref<HumanoidDeadStateResource>
	set_name(0x1388a90, "RTTI_Ref_HumanoidDeadStateResource");
	apply_type(0x1388a90, "RTTIPointer");

	// Ref<HumanoidDirectionalStaggerStateResource>
	set_name(0x1388b48, "RTTI_Ref_HumanoidDirectionalStaggerStateResource");
	apply_type(0x1388b48, "RTTIPointer");

	// Ref<HumanoidHitResponseBehaviour>
	set_name(0x1385b70, "RTTI_Ref_HumanoidHitResponseBehaviour");
	apply_type(0x1385b70, "RTTIPointer");

	// Ref<HumanoidHitResponseBehaviourOutput>
	set_name(0x1385b0c, "RTTI_Ref_HumanoidHitResponseBehaviourOutput");
	apply_type(0x1385b0c, "RTTIPointer");

	// Ref<HumanoidSubStateUsingInteractiveEntityResource>
	set_name(0x1389150, "RTTI_Ref_HumanoidSubStateUsingInteractiveEntityResource");
	apply_type(0x1389150, "RTTIPointer");

	// Ref<ImageMap>
	set_name(0x1345d94, "RTTI_Ref_ImageMap");
	apply_type(0x1345d94, "RTTIPointer");

	// Ref<IndexArrayResource>
	set_name(0x134569c, "RTTI_Ref_IndexArrayResource");
	apply_type(0x134569c, "RTTIPointer");

	// Ref<InventoryCaptureSpawnAbilityResource>
	set_name(0x13923c4, "RTTI_Ref_InventoryCaptureSpawnAbilityResource");
	apply_type(0x13923c4, "RTTIPointer");

	// Ref<InventoryReviveAbilityResource>
	set_name(0x138e398, "RTTI_Ref_InventoryReviveAbilityResource");
	apply_type(0x138e398, "RTTIPointer");

	// Ref<InventoryWeaponPickUpResource>
	set_name(0x13924e0, "RTTI_Ref_InventoryWeaponPickUpResource");
	apply_type(0x13924e0, "RTTIPointer");

	// Ref<JoystickInputModifierResource>
	set_name(0x13b6988, "RTTI_Ref_JoystickInputModifierResource");
	apply_type(0x13b6988, "RTTIPointer");

	// Ref<LaserBeamResource>
	set_name(0x13ab588, "RTTI_Ref_LaserBeamResource");
	apply_type(0x13ab588, "RTTIPointer");

	// Ref<LeanAndPeekAction>
	set_name(0x137cef0, "RTTI_Ref_LeanAndPeekAction");
	apply_type(0x137cef0, "RTTIPointer");

	// Ref<LeanAndPeekPosition>
	set_name(0x137cf74, "RTTI_Ref_LeanAndPeekPosition");
	apply_type(0x137cf74, "RTTIPointer");

	// Ref<LevelListResource>
	set_name(0x136c8f4, "RTTI_Ref_LevelListResource");
	apply_type(0x136c8f4, "RTTIPointer");

	// Ref<LevelSection>
	set_name(0x135bfd4, "RTTI_Ref_LevelSection");
	apply_type(0x135bfd4, "RTTIPointer");

	// Ref<LightAttachedCorona>
	set_name(0x13397d4, "RTTI_Ref_LightAttachedCorona");
	apply_type(0x13397d4, "RTTIPointer");

	// Ref<LightResource>
	set_name(0x13453bc, "RTTI_Ref_LightResource");
	apply_type(0x13453bc, "RTTIPointer");

	// Ref<LocatorResource>
	set_name(0x139aa78, "RTTI_Ref_LocatorResource");
	apply_type(0x139aa78, "RTTIPointer");

	// Ref<LumpOptimizationSettings>
	set_name(0x135c5f4, "RTTI_Ref_LumpOptimizationSettings");
	apply_type(0x135c5f4, "RTTIPointer");

	// Ref<MapIconsResource>
	set_name(0x13ac570, "RTTI_Ref_MapIconsResource");
	apply_type(0x13ac570, "RTTIPointer");

	// Ref<MapResource>
	set_name(0x13ac744, "RTTI_Ref_MapResource");
	apply_type(0x13ac744, "RTTIPointer");

	// Ref<MeshResourceBase>
	set_name(0x133b5f8, "RTTI_Ref_MeshResourceBase");
	apply_type(0x133b5f8, "RTTIPointer");

	// Ref<MissionResource>
	set_name(0x13a3564, "RTTI_Ref_MissionResource");
	apply_type(0x13a3564, "RTTIPointer");

	// Ref<Model>
	set_name(0x13625b8, "RTTI_Ref_Model");
	apply_type(0x13625b8, "RTTIPointer");

	// Ref<ModelPartMeshReplacementResource>
	set_name(0x13629e4, "RTTI_Ref_ModelPartMeshReplacementResource");
	apply_type(0x13629e4, "RTTIPointer");

	// Ref<ModelPartResource>
	set_name(0x1362970, "RTTI_Ref_ModelPartResource");
	apply_type(0x1362970, "RTTIPointer");

	// Ref<ModelResource>
	set_name(0x136261c, "RTTI_Ref_ModelResource");
	apply_type(0x136261c, "RTTIPointer");

	// Ref<MotionControllerDeadzone>
	set_name(0x13b6ad8, "RTTI_Ref_MotionControllerDeadzone");
	apply_type(0x13b6ad8, "RTTIPointer");

	// Ref<MountedGunWeaponSettings>
	set_name(0x137d3f8, "RTTI_Ref_MountedGunWeaponSettings");
	apply_type(0x137d3f8, "RTTIPointer");

	// Ref<Mover>
	set_name(0x1362a58, "RTTI_Ref_Mover");
	apply_type(0x1362a58, "RTTIPointer");

	// Ref<MoverResource>
	set_name(0x1362abc, "RTTI_Ref_MoverResource");
	apply_type(0x1362abc, "RTTIPointer");

	// Ref<MovieResource>
	set_name(0x136cb08, "RTTI_Ref_MovieResource");
	apply_type(0x136cb08, "RTTIPointer");

	// Ref<MultiBlendedMeshResource>
	set_name(0x133bacc, "RTTI_Ref_MultiBlendedMeshResource");
	apply_type(0x133bacc, "RTTIPointer");

	// Ref<OSDEventParserResource>
	set_name(0x1379278, "RTTI_Ref_OSDEventParserResource");
	apply_type(0x1379278, "RTTIPointer");

	// Ref<ObjectAttributeAnimatorInstance>
	set_name(0x133789c, "RTTI_Ref_ObjectAttributeAnimatorInstance");
	apply_type(0x133789c, "RTTIPointer");

	// Ref<ObjectAttributeAnimatorResource>
	set_name(0x1337910, "RTTI_Ref_ObjectAttributeAnimatorResource");
	apply_type(0x1337910, "RTTIPointer");

	// Ref<ObjectAttributeAnimatorResourceBase>
	set_name(0x1338fa0, "RTTI_Ref_ObjectAttributeAnimatorResourceBase");
	apply_type(0x1338fa0, "RTTIPointer");

	// Ref<PBDBodyResource>
	set_name(0x1339d20, "RTTI_Ref_PBDBodyResource");
	apply_type(0x1339d20, "RTTIPointer");

	// Ref<ParTimeLevelInfo>
	set_name(0x13a6ac8, "RTTI_Ref_ParTimeLevelInfo");
	apply_type(0x13a6ac8, "RTTIPointer");

	// Ref<ParticleEmitter>
	set_name(0x1340cd0, "RTTI_Ref_ParticleEmitter");
	apply_type(0x1340cd0, "RTTIPointer");

	// Ref<ParticleSystemResource>
	set_name(0x1340fa4, "RTTI_Ref_ParticleSystemResource");
	apply_type(0x1340fa4, "RTTIPointer");

	// Ref<PathResource>
	set_name(0x133732c, "RTTI_Ref_PathResource");
	apply_type(0x133732c, "RTTIPointer");

	// Ref<PhonemeBoneAnimatorResource>
	set_name(0x13b68d0, "RTTI_Ref_PhonemeBoneAnimatorResource");
	apply_type(0x13b68d0, "RTTIPointer");

	// Ref<PhonemeBoneChannel>
	set_name(0x13b685c, "RTTI_Ref_PhonemeBoneChannel");
	apply_type(0x13b685c, "RTTIPointer");

	// Ref<PhonemeChannel>
	set_name(0x135eb94, "RTTI_Ref_PhonemeChannel");
	apply_type(0x135eb94, "RTTIPointer");

	// Ref<PhysicsCharacterMoverResource>
	set_name(0x1343044, "RTTI_Ref_PhysicsCharacterMoverResource");
	apply_type(0x1343044, "RTTIPointer");

	// Ref<PhysicsCollisionResource>
	set_name(0x1342f08, "RTTI_Ref_PhysicsCollisionResource");
	apply_type(0x1342f08, "RTTIPointer");

	// Ref<PhysicsConstraintResource>
	set_name(0x13444fc, "RTTI_Ref_PhysicsConstraintResource");
	apply_type(0x13444fc, "RTTIPointer");

	// Ref<PhysicsRagdollBodyControllerResource>
	set_name(0x1343e00, "RTTI_Ref_PhysicsRagdollBodyControllerResource");
	apply_type(0x1343e00, "RTTIPointer");

	// Ref<PhysicsRagdollMotorsResource>
	set_name(0x1343d38, "RTTI_Ref_PhysicsRagdollMotorsResource");
	apply_type(0x1343d38, "RTTIPointer");

	// Ref<PhysicsRagdollResource>
	set_name(0x1343e64, "RTTI_Ref_PhysicsRagdollResource");
	apply_type(0x1343e64, "RTTIPointer");

	// Ref<PhysicsResource>
	set_name(0x1342e94, "RTTI_Ref_PhysicsResource");
	apply_type(0x1342e94, "RTTIPointer");

	// Ref<PhysicsSkeleton>
	set_name(0x1343ec8, "RTTI_Ref_PhysicsSkeleton");
	apply_type(0x1343ec8, "RTTIPointer");

	// Ref<PhysicsVehicleResource>
	set_name(0x1342fe0, "RTTI_Ref_PhysicsVehicleResource");
	apply_type(0x1342fe0, "RTTIPointer");

	// Ref<PickUpDropSettings>
	set_name(0x1393458, "RTTI_Ref_PickUpDropSettings");
	apply_type(0x1393458, "RTTIPointer");

	// Ref<PickUpResource>
	set_name(0x13934cc, "RTTI_Ref_PickUpResource");
	apply_type(0x13934cc, "RTTIPointer");

	// Ref<PlaceableResource>
	set_name(0x13a08e4, "RTTI_Ref_PlaceableResource");
	apply_type(0x13a08e4, "RTTIPointer");

	// Ref<PlayAnimationObjectResource>
	set_name(0x137f758, "RTTI_Ref_PlayAnimationObjectResource");
	apply_type(0x137f758, "RTTIPointer");

	// Ref<PlayerActorResource>
	set_name(0x139abe8, "RTTI_Ref_PlayerActorResource");
	apply_type(0x139abe8, "RTTIPointer");

	// Ref<PortableTurretResource>
	set_name(0x1391afc, "RTTI_Ref_PortableTurretResource");
	apply_type(0x1391afc, "RTTIPointer");

	// Ref<PoseMatchingResource>
	set_name(0x1362550, "RTTI_Ref_PoseMatchingResource");
	apply_type(0x1362550, "RTTIPointer");

	// Ref<PositionEventResource>
	set_name(0x1397b58, "RTTI_Ref_PositionEventResource");
	apply_type(0x1397b58, "RTTIPointer");

	// Ref<PositionLocatorResource>
	set_name(0x139aca0, "RTTI_Ref_PositionLocatorResource");
	apply_type(0x139aca0, "RTTIPointer");

	// Ref<PostProcessEffectorResource>
	set_name(0x1348534, "RTTI_Ref_PostProcessEffectorResource");
	apply_type(0x1348534, "RTTIPointer");

	// Ref<PostProcessSettingsResource>
	set_name(0x134847c, "RTTI_Ref_PostProcessSettingsResource");
	apply_type(0x134847c, "RTTIPointer");

	// Ref<PrimitiveResource>
	set_name(0x1345754, "RTTI_Ref_PrimitiveResource");
	apply_type(0x1345754, "RTTIPointer");

	// Ref<RandomFireResource>
	set_name(0x138d42c, "RTTI_Ref_RandomFireResource");
	apply_type(0x138d42c, "RTTIPointer");

	// Ref<RandomMatrixResourceBase>
	set_name(0x13635cc, "RTTI_Ref_RandomMatrixResourceBase");
	apply_type(0x13635cc, "RTTIPointer");

	// Ref<RandomVectorResource>
	set_name(0x13636d8, "RTTI_Ref_RandomVectorResource");
	apply_type(0x13636d8, "RTTIPointer");

	// Ref<RegularSkinnedMeshResourceBase>
	set_name(0x1355f20, "RTTI_Ref_RegularSkinnedMeshResourceBase");
	apply_type(0x1355f20, "RTTIPointer");

	// Ref<RegularSkinnedMeshResourceSkinInfo>
	set_name(0x1355f84, "RTTI_Ref_RegularSkinnedMeshResourceSkinInfo");
	apply_type(0x1355f84, "RTTIPointer");

	// Ref<RenderEffectResource>
	set_name(0x13458f8, "RTTI_Ref_RenderEffectResource");
	apply_type(0x13458f8, "RTTIPointer");

	// Ref<RenderingPrimitiveResource>
	set_name(0x13457cc, "RTTI_Ref_RenderingPrimitiveResource");
	apply_type(0x13457cc, "RTTIPointer");

	// Ref<Resource>
	set_name(0x13393e0, "RTTI_Ref_Resource");
	apply_type(0x13393e0, "RTTIPointer");

	// Ref<ReverbPresetResource>
	set_name(0x1359104, "RTTI_Ref_ReverbPresetResource");
	apply_type(0x1359104, "RTTIPointer");

	// Ref<RumbleResource>
	set_name(0x1339e90, "RTTI_Ref_RumbleResource");
	apply_type(0x1339e90, "RTTIPointer");

	// Ref<SKDTreeResource>
	set_name(0x133b884, "RTTI_Ref_SKDTreeResource");
	apply_type(0x133b884, "RTTIPointer");

	// Ref<SSAOSettingsResource>
	set_name(0x13483e8, "RTTI_Ref_SSAOSettingsResource");
	apply_type(0x13483e8, "RTTIPointer");

	// Ref<SabotageComponentResource>
	set_name(0x138e784, "RTTI_Ref_SabotageComponentResource");
	apply_type(0x138e784, "RTTIPointer");

	// Ref<ScreenEffectResource>
	set_name(0x13ab9b4, "RTTI_Ref_ScreenEffectResource");
	apply_type(0x13ab9b4, "RTTIPointer");

	// Ref<ScriptedWeaponResource>
	set_name(0x13a0ba4, "RTTI_Ref_ScriptedWeaponResource");
	apply_type(0x13a0ba4, "RTTIPointer");

	// Ref<SearchAndRetrieveObjectResource>
	set_name(0x1391d14, "RTTI_Ref_SearchAndRetrieveObjectResource");
	apply_type(0x1391d14, "RTTIPointer");

	// Ref<SentryBotResource>
	set_name(0x137fbbc, "RTTI_Ref_SentryBotResource");
	apply_type(0x137fbbc, "RTTIPointer");

	// Ref<SequenceResource>
	set_name(0x139aff8, "RTTI_Ref_SequenceResource");
	apply_type(0x139aff8, "RTTIPointer");

	// Ref<ShaderAnimatorResourceBase>
	set_name(0x1337684, "RTTI_Ref_ShaderAnimatorResourceBase");
	apply_type(0x1337684, "RTTIPointer");

	// Ref<ShaderResource>
	set_name(0x1347910, "RTTI_Ref_ShaderResource");
	apply_type(0x1347910, "RTTIPointer");

	// Ref<ShakeResource>
	set_name(0x135c668, "RTTI_Ref_ShakeResource");
	apply_type(0x135c668, "RTTIPointer");

	// Ref<SimpleParticleSystemResource>
	set_name(0x13a0d58, "RTTI_Ref_SimpleParticleSystemResource");
	apply_type(0x13a0d58, "RTTIPointer");

	// Ref<SimpleSoundResource>
	set_name(0x1359878, "RTTI_Ref_SimpleSoundResource");
	apply_type(0x1359878, "RTTIPointer");

	// Ref<Skeleton>
	set_name(0x13563d4, "RTTI_Ref_Skeleton");
	apply_type(0x13563d4, "RTTIPointer");

	// Ref<SkeletonAnimationResource>
	set_name(0x1356738, "RTTI_Ref_SkeletonAnimationResource");
	apply_type(0x1356738, "RTTIPointer");

	// Ref<SkeletonBaseAnimationResource>
	set_name(0x13566c4, "RTTI_Ref_SkeletonBaseAnimationResource");
	apply_type(0x13566c4, "RTTIPointer");

	// Ref<SkeletonHelpers>
	set_name(0x135649c, "RTTI_Ref_SkeletonHelpers");
	apply_type(0x135649c, "RTTIPointer");

	// Ref<SkeletonTargetTree>
	set_name(0x135690c, "RTTI_Ref_SkeletonTargetTree");
	apply_type(0x135690c, "RTTIPointer");

	// Ref<SkinnedMeshBoneBindings>
	set_name(0x1356a28, "RTTI_Ref_SkinnedMeshBoneBindings");
	apply_type(0x1356a28, "RTTIPointer");

	// Ref<SkinnedMeshBoneBoundingBoxes>
	set_name(0x1356d38, "RTTI_Ref_SkinnedMeshBoneBoundingBoxes");
	apply_type(0x1356d38, "RTTIPointer");

	// Ref<SkinnedMeshResource>
	set_name(0x1356ae0, "RTTI_Ref_SkinnedMeshResource");
	apply_type(0x1356ae0, "RTTIPointer");

	// Ref<SkinnedModelResource>
	set_name(0x13626d4, "RTTI_Ref_SkinnedModelResource");
	apply_type(0x13626d4, "RTTIPointer");

	// Ref<SkinnedPointsResource>
	set_name(0x1356cd4, "RTTI_Ref_SkinnedPointsResource");
	apply_type(0x1356cd4, "RTTIPointer");

	// Ref<SoldierResource>
	set_name(0x1388888, "RTTI_Ref_SoldierResource");
	apply_type(0x1388888, "RTTIPointer");

	// Ref<SoundBankResource>
	set_name(0x13592f0, "RTTI_Ref_SoundBankResource");
	apply_type(0x13592f0, "RTTIPointer");

	// Ref<SoundMixResource>
	set_name(0x13588b0, "RTTI_Ref_SoundMixResource");
	apply_type(0x13588b0, "RTTIPointer");

	// Ref<SoundResource>
	set_name(0x135968c, "RTTI_Ref_SoundResource");
	apply_type(0x135968c, "RTTIPointer");

	// Ref<SoundStateMachineResource>
	set_name(0x13b9e94, "RTTI_Ref_SoundStateMachineResource");
	apply_type(0x13b9e94, "RTTIPointer");

	// Ref<SoundZoneResource>
	set_name(0x1358954, "RTTI_Ref_SoundZoneResource");
	apply_type(0x1358954, "RTTIPointer");

	// Ref<SpawnAreaResource>
	set_name(0x139c478, "RTTI_Ref_SpawnAreaResource");
	apply_type(0x139c478, "RTTIPointer");

	// Ref<SpotLightResource>
	set_name(0x1347c58, "RTTI_Ref_SpotLightResource");
	apply_type(0x1347c58, "RTTIPointer");

	// Ref<SpringResource>
	set_name(0x13bc768, "RTTI_Ref_SpringResource");
	apply_type(0x13bc768, "RTTIPointer");

	// Ref<StaticMeshResource>
	set_name(0x133b93c, "RTTI_Ref_StaticMeshResource");
	apply_type(0x133b93c, "RTTIPointer");

	// Ref<StaticModelResource>
	set_name(0x13627f0, "RTTI_Ref_StaticModelResource");
	apply_type(0x13627f0, "RTTIPointer");

	// Ref<SubmixPresetResource>
	set_name(0x1359ddc, "RTTI_Ref_SubmixPresetResource");
	apply_type(0x1359ddc, "RTTIPointer");

	// Ref<SwitchResource>
	set_name(0x1380084, "RTTI_Ref_SwitchResource");
	apply_type(0x1380084, "RTTIPointer");

	// Ref<TerrainAimReticuleResource>
	set_name(0x13a0dbc, "RTTI_Ref_TerrainAimReticuleResource");
	apply_type(0x13a0dbc, "RTTIPointer");

	// Ref<Texture>
	set_name(0x1347858, "RTTI_Ref_Texture");
	apply_type(0x1347858, "RTTIPointer");

	// Ref<TextureLUT>
	set_name(0x13477f4, "RTTI_Ref_TextureLUT");
	apply_type(0x13477f4, "RTTIPointer");

	// Ref<TextureWidgetResource>
	set_name(0x133e110, "RTTI_Ref_TextureWidgetResource");
	apply_type(0x133e110, "RTTIPointer");

	// Ref<ThrowableResource>
	set_name(0x13a307c, "RTTI_Ref_ThrowableResource");
	apply_type(0x13a307c, "RTTIPointer");

	// Ref<Typeface>
	set_name(0x1345e6c, "RTTI_Ref_Typeface");
	apply_type(0x1345e6c, "RTTIPointer");

	// Ref<TypefaceStyle>
	set_name(0x1345df8, "RTTI_Ref_TypefaceStyle");
	apply_type(0x1345df8, "RTTIPointer");

	// Ref<UniqueComponentResource>
	set_name(0x138a244, "RTTI_Ref_UniqueComponentResource");
	apply_type(0x138a244, "RTTIPointer");

	// Ref<UnlockableFeatureResource>
	set_name(0x13a67b4, "RTTI_Ref_UnlockableFeatureResource");
	apply_type(0x13a67b4, "RTTIPointer");

	// Ref<UseLocation>
	set_name(0x135d548, "RTTI_Ref_UseLocation");
	apply_type(0x135d548, "RTTIPointer");

	// Ref<UseLocationResource>
	set_name(0x135d5bc, "RTTI_Ref_UseLocationResource");
	apply_type(0x135d5bc, "RTTIPointer");

	// Ref<UseLocationResourceGame>
	set_name(0x136ceb8, "RTTI_Ref_UseLocationResourceGame");
	apply_type(0x136ceb8, "RTTIPointer");

	// Ref<VehicleWeaponResource>
	set_name(0x139c6d4, "RTTI_Ref_VehicleWeaponResource");
	apply_type(0x139c6d4, "RTTIPointer");

	// Ref<VertexArrayResource>
	set_name(0x1345638, "RTTI_Ref_VertexArrayResource");
	apply_type(0x1345638, "RTTIPointer");

	// Ref<VignetteSettingsResource>
	set_name(0x134831c, "RTTI_Ref_VignetteSettingsResource");
	apply_type(0x134831c, "RTTIPointer");

	// Ref<WaterResource>
	set_name(0x1349e28, "RTTI_Ref_WaterResource");
	apply_type(0x1349e28, "RTTIPointer");

	// Ref<WaterSystemResource>
	set_name(0x1349dc4, "RTTI_Ref_WaterSystemResource");
	apply_type(0x1349dc4, "RTTIPointer");

	// Ref<WeakResourceReference>
	set_name(0x13bc7cc, "RTTI_Ref_WeakResourceReference");
	apply_type(0x13bc7cc, "RTTIPointer");

	// Ref<WeaponPickUpResource>
	set_name(0x13937e0, "RTTI_Ref_WeaponPickUpResource");
	apply_type(0x13937e0, "RTTIPointer");

	// Ref<WeaponRackItem>
	set_name(0x13a2f0c, "RTTI_Ref_WeaponRackItem");
	apply_type(0x13a2f0c, "RTTIPointer");

	// Ref<WidgetDecorationBracket>
	set_name(0x133e40c, "RTTI_Ref_WidgetDecorationBracket");
	apply_type(0x133e40c, "RTTIPointer");

	// Ref<Zone>
	set_name(0x134a3d4, "RTTI_Ref_Zone");
	apply_type(0x134a3d4, "RTTIPointer");

	// Ref<ZoomSetting>
	set_name(0x13a30e0, "RTTI_Ref_ZoomSetting");
	apply_type(0x13a30e0, "RTTIPointer");

	// cptr<AIFaction>
	set_name(0x134b438, "RTTI_cptr_AIFaction");
	apply_type(0x134b438, "RTTIPointer");

	// cptr<AILinkTypeInfo>
	set_name(0x1352c60, "RTTI_cptr_AILinkTypeInfo");
	apply_type(0x1352c60, "RTTIPointer");

	// cptr<AnimationState>
	set_name(0x1336580, "RTTI_cptr_AnimationState");
	apply_type(0x1336580, "RTTIPointer");

	// cptr<CoreObject>
	set_name(0x1339004, "RTTI_cptr_CoreObject");
	apply_type(0x1339004, "RTTIPointer");

	// cptr<CreateEntityAction>
	set_name(0x137639c, "RTTI_cptr_CreateEntityAction");
	apply_type(0x137639c, "RTTIPointer");

	// cptr<DamageTypeResource>
	set_name(0x135d344, "RTTI_cptr_DamageTypeResource");
	apply_type(0x135d344, "RTTIPointer");

	// cptr<DestructionLogicAction>
	set_name(0x135e2ac, "RTTI_cptr_DestructionLogicAction");
	apply_type(0x135e2ac, "RTTIPointer");

	// cptr<Entity>
	set_name(0x135d688, "RTTI_cptr_Entity");
	apply_type(0x135d688, "RTTIPointer");

	// cptr<EntityRep>
	set_name(0x135d7a8, "RTTI_cptr_EntityRep");
	apply_type(0x135d7a8, "RTTIPointer");

	// cptr<GestureAction>
	set_name(0x136847c, "RTTI_cptr_GestureAction");
	apply_type(0x136847c, "RTTIPointer");

	// cptr<GestureNode>
	set_name(0x1368418, "RTTI_cptr_GestureNode");
	apply_type(0x1368418, "RTTIPointer");

	// cptr<GestureResource>
	set_name(0x13683a4, "RTTI_cptr_GestureResource");
	apply_type(0x13683a4, "RTTIPointer");

	// cptr<InventoryEntityResource>
	set_name(0x138e008, "RTTI_cptr_InventoryEntityResource");
	apply_type(0x138e008, "RTTIPointer");

	// cptr<InventoryPlaceableResource>
	set_name(0x138d664, "RTTI_cptr_InventoryPlaceableResource");
	apply_type(0x138d664, "RTTIPointer");

	// cptr<InventoryWeaponResource>
	set_name(0x138d558, "RTTI_cptr_InventoryWeaponResource");
	apply_type(0x138d558, "RTTIPointer");

	// cptr<LeanAndPeekAction>
	set_name(0x137ced0, "RTTI_cptr_LeanAndPeekAction");
	apply_type(0x137ced0, "RTTIPointer");

	// cptr<LeanAndPeekPosition>
	set_name(0x137cf64, "RTTI_cptr_LeanAndPeekPosition");
	apply_type(0x137cf64, "RTTIPointer");

	// cptr<Light>
	set_name(0x13450ec, "RTTI_cptr_Light");
	apply_type(0x13450ec, "RTTIPointer");

	// cptr<MeshHierachyShaderOverrides>
	set_name(0x1347ba0, "RTTI_cptr_MeshHierachyShaderOverrides");
	apply_type(0x1347ba0, "RTTIPointer");

	// cptr<MissileSiloResource>
	set_name(0x13a0730, "RTTI_cptr_MissileSiloResource");
	apply_type(0x13a0730, "RTTIPointer");

	// cptr<NetEntity>
	set_name(0x135e57c, "RTTI_cptr_NetEntity");
	apply_type(0x135e57c, "RTTIPointer");

	// cptr<PivotFollowCameraEntityResource>
	set_name(0x137913c, "RTTI_cptr_PivotFollowCameraEntityResource");
	apply_type(0x137913c, "RTTIPointer");

	// cptr<RadioMessage>
	set_name(0x136cdc8, "RTTI_cptr_RadioMessage");
	apply_type(0x136cdc8, "RTTIPointer");

	// cptr<UseLocationResource>
	set_name(0x135d5ac, "RTTI_cptr_UseLocationResource");
	apply_type(0x135d5ac, "RTTIPointer");

	// cptr<Zone>
	set_name(0x134a3b4, "RTTI_cptr_Zone");
	apply_type(0x134a3b4, "RTTIPointer");

	// Array<AIAreaPortal>
	set_name(0x13527a8, "RTTI_Array_AIAreaPortal");
	apply_type(0x13527a8, "RTTIContainer");

	// Array<AIFormationPosition>
	set_name(0x134f710, "RTTI_Array_AIFormationPosition");
	apply_type(0x134f710, "RTTIContainer");

	// Array<AIPlayerBehaviorCategory>
	set_name(0x135267c, "RTTI_Array_AIPlayerBehaviorCategory");
	apply_type(0x135267c, "RTTIContainer");

	// Array<AISequencedAimRow>
	set_name(0x134bad4, "RTTI_Array_AISequencedAimRow");
	apply_type(0x134bad4, "RTTIContainer");

	// Array<AIStatement>
	set_name(0x134b0d0, "RTTI_Array_AIStatement");
	apply_type(0x134b0d0, "RTTIContainer");

	// Array<AIStaticCoverMapObjectMappingEntry>
	set_name(0x13536c8, "RTTI_Array_AIStaticCoverMapObjectMappingEntry");
	apply_type(0x13536c8, "RTTIContainer");

	// Array<AIWaypoint>
	set_name(0x1353228, "RTTI_Array_AIWaypoint");
	apply_type(0x1353228, "RTTIContainer");

	// Array<AIWaypointAreaRadius>
	set_name(0x135328c, "RTTI_Array_AIWaypointAreaRadius");
	apply_type(0x135328c, "RTTIContainer");

	// Array<AIWaypointNeighborIds>
	set_name(0x1353460, "RTTI_Array_AIWaypointNeighborIds");
	apply_type(0x1353460, "RTTIContainer");

	// Array<AIWaypointNeighborLinkTypeInfo>
	set_name(0x13534c4, "RTTI_Array_AIWaypointNeighborLinkTypeInfo");
	apply_type(0x13534c4, "RTTIContainer");

	// Array<AIWaypointNeighborTravel>
	set_name(0x135358c, "RTTI_Array_AIWaypointNeighborTravel");
	apply_type(0x135358c, "RTTIContainer");

	// Array<AbilityRagdollConstraintMotorData>
	set_name(0x135ecc0, "RTTI_Array_AbilityRagdollConstraintMotorData");
	apply_type(0x135ecc0, "RTTIContainer");

	// Array<AbilityShaderAnimationResourceLink>
	set_name(0x135efd0, "RTTI_Array_AbilityShaderAnimationResourceLink");
	apply_type(0x135efd0, "RTTIContainer");

	// Array<Achievement>
	set_name(0x136d1cc, "RTTI_Array_Achievement");
	apply_type(0x136d1cc, "RTTIContainer");

	// Array<ActionPerAnimationEvent>
	set_name(0x1389464, "RTTI_Array_ActionPerAnimationEvent");
	apply_type(0x1389464, "RTTIContainer");

	// Array<AlphaPeg>
	set_name(0x135c420, "RTTI_Array_AlphaPeg");
	apply_type(0x135c420, "RTTIContainer");

	// Array<AmmoBeltAnimationSettings>
	set_name(0x137d340, "RTTI_Array_AmmoBeltAnimationSettings");
	apply_type(0x137d340, "RTTIContainer");

	// Array<AmmoBoxResourceReloadSettings>
	set_name(0x137a848, "RTTI_Array_AmmoBoxResourceReloadSettings");
	apply_type(0x137a848, "RTTIContainer");

	// Array<AmmoPickupSetting>
	set_name(0x139377c, "RTTI_Array_AmmoPickupSetting");
	apply_type(0x139377c, "RTTIContainer");

	// Array<AnimationEvent>
	set_name(0x133638c, "RTTI_Array_AnimationEvent");
	apply_type(0x133638c, "RTTIContainer");

	// Array<AnimationExpressionCouple>
	set_name(0x13b6604, "RTTI_Array_AnimationExpressionCouple");
	apply_type(0x13b6604, "RTTIContainer");

	// Array<AnimationPoseMatchingAnimationData>
	set_name(0x1363878, "RTTI_Array_AnimationPoseMatchingAnimationData");
	apply_type(0x1363878, "RTTIContainer");

	// Array<AnimationPoseMatchingBoneData>
	set_name(0x136373c, "RTTI_Array_AnimationPoseMatchingBoneData");
	apply_type(0x136373c, "RTTIContainer");

	// Array<AnimationPoseMatchingPose>
	set_name(0x13637a0, "RTTI_Array_AnimationPoseMatchingPose");
	apply_type(0x13637a0, "RTTIContainer");

	// Array<AnimationSoundEvent>
	set_name(0x13363f0, "RTTI_Array_AnimationSoundEvent");
	apply_type(0x13363f0, "RTTIContainer");

	// Array<AnimationStateGroup>
	set_name(0x1336614, "RTTI_Array_AnimationStateGroup");
	apply_type(0x1336614, "RTTIContainer");

	// Array<AnimationTrackKeyFrame_FQuat>
	set_name(0x1336a30, "RTTI_Array_AnimationTrackKeyFrame_FQuat");
	apply_type(0x1336a30, "RTTIContainer");

	// Array<AnimationTrackKeyFrame_FVector3>
	set_name(0x1336968, "RTTI_Array_AnimationTrackKeyFrame_FVector3");
	apply_type(0x1336968, "RTTIContainer");

	// Array<AnimationTrackKeyFrame_FVector4>
	set_name(0x13369cc, "RTTI_Array_AnimationTrackKeyFrame_FVector4");
	apply_type(0x13369cc, "RTTIContainer");

	// Array<AnimationTrackKeyFrame_RGBAColor>
	set_name(0x1336a94, "RTTI_Array_AnimationTrackKeyFrame_RGBAColor");
	apply_type(0x1336a94, "RTTIContainer");

	// Array<AnimationTrackKeyFrame_bool>
	set_name(0x13368a0, "RTTI_Array_AnimationTrackKeyFrame_bool");
	apply_type(0x13368a0, "RTTIContainer");

	// Array<AnimationTrackKeyFrame_float>
	set_name(0x1336904, "RTTI_Array_AnimationTrackKeyFrame_float");
	apply_type(0x1336904, "RTTIContainer");

	// Array<AttachedLightBinding>
	set_name(0x13896d0, "RTTI_Array_AttachedLightBinding");
	apply_type(0x13896d0, "RTTIContainer");

	// Array<AttachmentPConstraint>
	set_name(0x13633b8, "RTTI_Array_AttachmentPConstraint");
	apply_type(0x13633b8, "RTTIContainer");

	// Array<AttackerToVictimDamageModifier>
	set_name(0x136c5f4, "RTTI_Array_AttackerToVictimDamageModifier");
	apply_type(0x136c5f4, "RTTIContainer");

	// Array<AutoSelectNodeEntry>
	set_name(0x1363950, "RTTI_Array_AutoSelectNodeEntry");
	apply_type(0x1363950, "RTTIContainer");

	// Array<BadgeIcon>
	set_name(0x13ad164, "RTTI_Array_BadgeIcon");
	apply_type(0x13ad164, "RTTIContainer");

	// Array<BaselineTimes>
	set_name(0x13a6a64, "RTTI_Array_BaselineTimes");
	apply_type(0x13a6a64, "RTTIContainer");

	// Array<BlendExpressionByteCode>
	set_name(0x1336dd4, "RTTI_Array_BlendExpressionByteCode");
	apply_type(0x1336dd4, "RTTIContainer");

	// Array<BlendTargetDeformation>
	set_name(0x1356264, "RTTI_Array_BlendTargetDeformation");
	apply_type(0x1356264, "RTTIContainer");

	// Array<BlendedMeshEntry>
	set_name(0x133ba68, "RTTI_Array_BlendedMeshEntry");
	apply_type(0x133ba68, "RTTIContainer");

	// Array<BloodSplatterProperties>
	set_name(0x13afe20, "RTTI_Array_BloodSplatterProperties");
	apply_type(0x13afe20, "RTTIContainer");

	// Array<BoneAttachedParticleSystemLink>
	set_name(0x1362488, "RTTI_Array_BoneAttachedParticleSystemLink");
	apply_type(0x1362488, "RTTIContainer");

	// Array<BoundingBox3>
	set_name(0x132ae34, "RTTI_Array_BoundingBox3");
	apply_type(0x132ae34, "RTTIContainer");

	// Array<BoundingSphere>
	set_name(0x132ae98, "RTTI_Array_BoundingSphere");
	apply_type(0x132ae98, "RTTIContainer");

	// Array<BrutalMeleeDeathSoundOverride>
	set_name(0x1389a04, "RTTI_Array_BrutalMeleeDeathSoundOverride");
	apply_type(0x1389a04, "RTTIContainer");

	// Array<BrutalMeleeRegionSettings>
	set_name(0x1389acc, "RTTI_Array_BrutalMeleeRegionSettings");
	apply_type(0x1389acc, "RTTIContainer");

	// Array<ButtonFunctionMapping>
	set_name(0x1367f68, "RTTI_Array_ButtonFunctionMapping");
	apply_type(0x1367f68, "RTTIContainer");

	// Array<ButtonIcon>
	set_name(0x13ac7b8, "RTTI_Array_ButtonIcon");
	apply_type(0x13ac7b8, "RTTIContainer");

	// Array<ButtonPressureDefinition>
	set_name(0x1367e4c, "RTTI_Array_ButtonPressureDefinition");
	apply_type(0x1367e4c, "RTTIContainer");

	// Array<CaHObjective>
	set_name(0x13a33f4, "RTTI_Array_CaHObjective");
	apply_type(0x13a33f4, "RTTIContainer");

	// Array<CaptureAndHoldMapZone>
	set_name(0x13ac6e0, "RTTI_Array_CaptureAndHoldMapZone");
	apply_type(0x13ac6e0, "RTTIContainer");

	// Array<ChildEntityDescription>
	set_name(0x135d81c, "RTTI_Array_ChildEntityDescription");
	apply_type(0x135d81c, "RTTIContainer");

	// Array<CloseCombatEffect>
	set_name(0x13899a0, "RTTI_Array_CloseCombatEffect");
	apply_type(0x13899a0, "RTTIContainer");

	// Array<CloseCombatStrike>
	set_name(0x138d490, "RTTI_Array_CloseCombatStrike");
	apply_type(0x138d490, "RTTIContainer");

	// Array<CloseCombatVariation>
	set_name(0x138d4f4, "RTTI_Array_CloseCombatVariation");
	apply_type(0x138d4f4, "RTTIContainer");

	// Array<CollisionHullToRagdollMapping>
	set_name(0x135ed24, "RTTI_Array_CollisionHullToRagdollMapping");
	apply_type(0x135ed24, "RTTIContainer");

	// Array<ColorPeg>
	set_name(0x135c3bc, "RTTI_Array_ColorPeg");
	apply_type(0x135c3bc, "RTTIContainer");

	// Array<ColorizeSettings>
	set_name(0x1348198, "RTTI_Array_ColorizeSettings");
	apply_type(0x1348198, "RTTIContainer");

	// Array<ComponentPerAnimationEvent>
	set_name(0x1389570, "RTTI_Array_ComponentPerAnimationEvent");
	apply_type(0x1389570, "RTTIContainer");

	// Array<CompositeAnimationInfo>
	set_name(0x1355c84, "RTTI_Array_CompositeAnimationInfo");
	apply_type(0x1355c84, "RTTIContainer");

	// Array<CompoundStatResource>
	set_name(0x13ba8d4, "RTTI_Array_CompoundStatResource");
	apply_type(0x13ba8d4, "RTTIContainer");

	// Array<CompressedPathElement>
	set_name(0x13372c8, "RTTI_Array_CompressedPathElement");
	apply_type(0x13372c8, "RTTIContainer");

	// Array<ControllerLegend>
	set_name(0x1367fcc, "RTTI_Array_ControllerLegend");
	apply_type(0x1367fcc, "RTTIContainer");

	// Array<ConvexHullTriangle>
	set_name(0x132af00, "RTTI_Array_ConvexHullTriangle");
	apply_type(0x132af00, "RTTIContainer");

	// Array<CoverConnection>
	set_name(0x136d03c, "RTTI_Array_CoverConnection");
	apply_type(0x136d03c, "RTTIContainer");

	// Array<CoverWall>
	set_name(0x136d0a0, "RTTI_Array_CoverWall");
	apply_type(0x136d0a0, "RTTIContainer");

	// Array<DamageModifierPerDamageType>
	set_name(0x13771d8, "RTTI_Array_DamageModifierPerDamageType");
	apply_type(0x13771d8, "RTTIContainer");

	// Array<DamageModifierResource>
	set_name(0x137723c, "RTTI_Array_DamageModifierResource");
	apply_type(0x137723c, "RTTIContainer");

	// Array<DamagePassOnData>
	set_name(0x135de60, "RTTI_Array_DamagePassOnData");
	apply_type(0x135de60, "RTTIContainer");

	// Array<DestructibilityConstraint>
	set_name(0x135df28, "RTTI_Array_DestructibilityConstraint");
	apply_type(0x135df28, "RTTIContainer");

	// Array<DestructibilityHitReaction>
	set_name(0x135dd34, "RTTI_Array_DestructibilityHitReaction");
	apply_type(0x135dd34, "RTTIContainer");

	// Array<DestructibilityPart>
	set_name(0x135dec4, "RTTI_Array_DestructibilityPart");
	apply_type(0x135dec4, "RTTIContainer");

	// Array<DestructibilityTimeLineKey>
	set_name(0x135e1f4, "RTTI_Array_DestructibilityTimeLineKey");
	apply_type(0x135e1f4, "RTTIContainer");

	// Array<DestructiblePartToHitLocationMapping>
	set_name(0x1385da8, "RTTI_Array_DestructiblePartToHitLocationMapping");
	apply_type(0x1385da8, "RTTIContainer");

	// Array<DirectionalAnimationInfo>
	set_name(0x1355c20, "RTTI_Array_DirectionalAnimationInfo");
	apply_type(0x1355c20, "RTTIContainer");

	// Array<DisabledBrutalMeleeAnimation>
	set_name(0x1389a68, "RTTI_Array_DisabledBrutalMeleeAnimation");
	apply_type(0x1389a68, "RTTIContainer");

	// Array<EControlType>
	set_name(0x137a9fc, "RTTI_Array_EControlType");
	apply_type(0x137a9fc, "RTTIContainer");

	// Array<EDifficulty>
	set_name(0x1367ba4, "RTTI_Array_EDifficulty");
	apply_type(0x1367ba4, "RTTIContainer");

	// Array<EFaction>
	set_name(0x1368248, "RTTI_Array_EFaction");
	apply_type(0x1368248, "RTTIContainer");

	// Array<EHumanoidHitDirection>
	set_name(0x138595c, "RTTI_Array_EHumanoidHitDirection");
	apply_type(0x138595c, "RTTIContainer");

	// Array<EHumanoidHitLocation>
	set_name(0x138593c, "RTTI_Array_EHumanoidHitLocation");
	apply_type(0x138593c, "RTTIContainer");

	// Array<ELegendButton>
	set_name(0x133d004, "RTTI_Array_ELegendButton");
	apply_type(0x133d004, "RTTIContainer");

	// Array<EOSDEventID>
	set_name(0x13791f4, "RTTI_Array_EOSDEventID");
	apply_type(0x13791f4, "RTTIContainer");

	// Array<EPlayerScoreStat>
	set_name(0x136d2e0, "RTTI_Array_EPlayerScoreStat");
	apply_type(0x136d2e0, "RTTIContainer");

	// Array<ERegion>
	set_name(0x1335b64, "RTTI_Array_ERegion");
	apply_type(0x1335b64, "RTTIContainer");

	// Array<ESoundMasterVolumeGroup>
	set_name(0x1359448, "RTTI_Array_ESoundMasterVolumeGroup");
	apply_type(0x1359448, "RTTIContainer");

	// Array<ESoundSubmixBus>
	set_name(0x1359ce8, "RTTI_Array_ESoundSubmixBus");
	apply_type(0x1359ce8, "RTTIContainer");

	// Array<EjectLocation>
	set_name(0x139ca28, "RTTI_Array_EjectLocation");
	apply_type(0x139ca28, "RTTIContainer");

	// Array<EmitterVertex>
	set_name(0x1340b98, "RTTI_Array_EmitterVertex");
	apply_type(0x1340b98, "RTTIContainer");

	// Array<EntityPlaceHolderAttr>
	set_name(0x135d484, "RTTI_Array_EntityPlaceHolderAttr");
	apply_type(0x135d484, "RTTIContainer");

	// Array<EntityScoreSettings>
	set_name(0x136d42c, "RTTI_Array_EntityScoreSettings");
	apply_type(0x136d42c, "RTTIContainer");

	// Array<ExplosiveLocationIndicatorLight>
	set_name(0x137fdc4, "RTTI_Array_ExplosiveLocationIndicatorLight");
	apply_type(0x137fdc4, "RTTIContainer");

	// Array<ExternalAnimationEvent>
	set_name(0x1336678, "RTTI_Array_ExternalAnimationEvent");
	apply_type(0x1336678, "RTTIContainer");

	// Array<ExternalAnimationSoundEvent>
	set_name(0x13366dc, "RTTI_Array_ExternalAnimationSoundEvent");
	apply_type(0x13366dc, "RTTIContainer");

	// Array<ExtraAmmoSettings>
	set_name(0x136be38, "RTTI_Array_ExtraAmmoSettings");
	apply_type(0x136be38, "RTTIContainer");

	// Array<ExtraDamageSettings>
	set_name(0x136bf44, "RTTI_Array_ExtraDamageSettings");
	apply_type(0x136bf44, "RTTIContainer");

	// Array<FPDestructibilityEffect>
	set_name(0x13a106c, "RTTI_Array_FPDestructibilityEffect");
	apply_type(0x13a106c, "RTTIContainer");

	// Array<FPMoverSuspension>
	set_name(0x13a59a0, "RTTI_Array_FPMoverSuspension");
	apply_type(0x13a59a0, "RTTIContainer");

	// Array<FRange>
	set_name(0x13288e8, "RTTI_Array_FRange");
	apply_type(0x13288e8, "RTTIContainer");

	// Array<FVector2>
	set_name(0x1334dcc, "RTTI_Array_FVector2");
	apply_type(0x1334dcc, "RTTIContainer");

	// Array<FVector3>
	set_name(0x1334e30, "RTTI_Array_FVector3");
	apply_type(0x1334e30, "RTTIContainer");

	// Array<FacialExpressionLOD>
	set_name(0x13b6730, "RTTI_Array_FacialExpressionLOD");
	apply_type(0x13b6730, "RTTIContainer");

	// Array<Filename>
	set_name(0x13360ec, "RTTI_Array_Filename");
	apply_type(0x13360ec, "RTTIContainer");

	// Array<FloatPerDifficulty>
	set_name(0x1367bc4, "RTTI_Array_FloatPerDifficulty");
	apply_type(0x1367bc4, "RTTIContainer");

	// Array<FogSettings>
	set_name(0x13481fc, "RTTI_Array_FogSettings");
	apply_type(0x13481fc, "RTTIContainer");

	// Array<FontCharGlyphInfo>
	set_name(0x13314f8, "RTTI_Array_FontCharGlyphInfo");
	apply_type(0x13314f8, "RTTIContainer");

	// Array<FontKerningPair>
	set_name(0x133155c, "RTTI_Array_FontKerningPair");
	apply_type(0x133155c, "RTTIContainer");

	// Array<GainTemporaryModifier>
	set_name(0x1344800, "RTTI_Array_GainTemporaryModifier");
	apply_type(0x1344800, "RTTIContainer");

	// Array<Gesture>
	set_name(0x139b2b8, "RTTI_Array_Gesture");
	apply_type(0x139b2b8, "RTTIContainer");

	// Array<GlyphContour>
	set_name(0x1331344, "RTTI_Array_GlyphContour");
	apply_type(0x1331344, "RTTIContainer");

	// Array<GlyphContourCmd>
	set_name(0x13312e0, "RTTI_Array_GlyphContourCmd");
	apply_type(0x13312e0, "RTTIContainer");

	// Array<GroupedObjectFilter>
	set_name(0x13b6b3c, "RTTI_Array_GroupedObjectFilter");
	apply_type(0x13b6b3c, "RTTIContainer");

	// Array<HUDAnimatedIconAnimationTracks>
	set_name(0x13accc0, "RTTI_Array_HUDAnimatedIconAnimationTracks");
	apply_type(0x13accc0, "RTTIContainer");

	// Array<HUDCrosshairPart>
	set_name(0x13ace94, "RTTI_Array_HUDCrosshairPart");
	apply_type(0x13ace94, "RTTIContainer");

	// Array<HUDPartIcon>
	set_name(0x13abbdc, "RTTI_Array_HUDPartIcon");
	apply_type(0x13abbdc, "RTTIContainer");

	// Array<HUDPartText>
	set_name(0x13abcf8, "RTTI_Array_HUDPartText");
	apply_type(0x13abcf8, "RTTIContainer");

	// Array<HumanoidBodyVariant>
	set_name(0x1385ce0, "RTTI_Array_HumanoidBodyVariant");
	apply_type(0x1385ce0, "RTTIContainer");

	// Array<IRect>
	set_name(0x1334f1c, "RTTI_Array_IRect");
	apply_type(0x1334f1c, "RTTIContainer");

	// Array<ImpactEffectParticles>
	set_name(0x13399b8, "RTTI_Array_ImpactEffectParticles");
	apply_type(0x13399b8, "RTTIContainer");

	// Array<ImpactEffectRegionOverride>
	set_name(0x1339ad4, "RTTI_Array_ImpactEffectRegionOverride");
	apply_type(0x1339ad4, "RTTIContainer");

	// Array<ImpactEffectVariation>
	set_name(0x1339a70, "RTTI_Array_ImpactEffectVariation");
	apply_type(0x1339a70, "RTTIContainer");

	// Array<IntPerDifficulty>
	set_name(0x1367c28, "RTTI_Array_IntPerDifficulty");
	apply_type(0x1367c28, "RTTIContainer");

	// Array<InteractiveEntityIKTargetInfo>
	set_name(0x137cb14, "RTTI_Array_InteractiveEntityIKTargetInfo");
	apply_type(0x137cb14, "RTTIContainer");

	// Array<JetpackThrusterEffectSetupLocation>
	set_name(0x138d914, "RTTI_Array_JetpackThrusterEffectSetupLocation");
	apply_type(0x138d914, "RTTIContainer");

	// Array<Joint>
	set_name(0x1356370, "RTTI_Array_Joint");
	apply_type(0x1356370, "RTTIContainer");

	// Array<LadderClimbCycleSound>
	set_name(0x137cd70, "RTTI_Array_LadderClimbCycleSound");
	apply_type(0x137cd70, "RTTIContainer");

	// Array<LevelListLevel>
	set_name(0x136c890, "RTTI_Array_LevelListLevel");
	apply_type(0x136c890, "RTTIContainer");

	// Array<LevelListLevelNode>
	set_name(0x136c82c, "RTTI_Array_LevelListLevelNode");
	apply_type(0x136c82c, "RTTIContainer");

	// Array<LevelSectionLump>
	set_name(0x135bf70, "RTTI_Array_LevelSectionLump");
	apply_type(0x135bf70, "RTTIContainer");

	// Array<LiftWheel>
	set_name(0x1378b98, "RTTI_Array_LiftWheel");
	apply_type(0x1378b98, "RTTIContainer");

	// Array<LightProbe>
	set_name(0x13451a4, "RTTI_Array_LightProbe");
	apply_type(0x13451a4, "RTTIContainer");

	// Array<LightProbeKdTreeObject>
	set_name(0x1345304, "RTTI_Array_LightProbeKdTreeObject");
	apply_type(0x1345304, "RTTIContainer");

	// Array<LocalizedTextEntry>
	set_name(0x135c4e8, "RTTI_Array_LocalizedTextEntry");
	apply_type(0x135c4e8, "RTTIContainer");

	// Array<LodMeshResourcePart>
	set_name(0x133b540, "RTTI_Array_LodMeshResourcePart");
	apply_type(0x133b540, "RTTIContainer");

	// Array<MapIcon>
	set_name(0x13ac50c, "RTTI_Array_MapIcon");
	apply_type(0x13ac50c, "RTTIContainer");

	// Array<MapZone>
	set_name(0x13ac67c, "RTTI_Array_MapZone");
	apply_type(0x13ac67c, "RTTIContainer");

	// Array<MaterialTypeReplacement>
	set_name(0x13ab4d0, "RTTI_Array_MaterialTypeReplacement");
	apply_type(0x13ab4d0, "RTTIContainer");

	// Array<MedalRanksResource>
	set_name(0x13a6b90, "RTTI_Array_MedalRanksResource");
	apply_type(0x13a6b90, "RTTIContainer");

	// Array<MedalResource>
	set_name(0x13a6bf4, "RTTI_Array_MedalResource");
	apply_type(0x13a6bf4, "RTTIContainer");

	// Array<MenuScreenURI>
	set_name(0x13ba160, "RTTI_Array_MenuScreenURI");
	apply_type(0x13ba160, "RTTIContainer");

	// Array<MeshShaderOverrides>
	set_name(0x1347b3c, "RTTI_Array_MeshShaderOverrides");
	apply_type(0x1347b3c, "RTTIContainer");

	// Array<MissionEvent>
	set_name(0x13a3500, "RTTI_Array_MissionEvent");
	apply_type(0x13a3500, "RTTIContainer");

	// Array<MissionRadioMessage>
	set_name(0x13aba7c, "RTTI_Array_MissionRadioMessage");
	apply_type(0x13aba7c, "RTTIContainer");

	// Array<MissionSettings>
	set_name(0x13a3738, "RTTI_Array_MissionSettings");
	apply_type(0x13a3738, "RTTIContainer");

	// Array<ModelProxyRemapEntry>
	set_name(0x13628a8, "RTTI_Array_ModelProxyRemapEntry");
	apply_type(0x13628a8, "RTTIContainer");

	// Array<MountedGunWeaponSettingsModelPart>
	set_name(0x137d45c, "RTTI_Array_MountedGunWeaponSettingsModelPart");
	apply_type(0x137d45c, "RTTIContainer");

	// Array<MoveThroughSubGoalTarget>
	set_name(0x1397358, "RTTI_Array_MoveThroughSubGoalTarget");
	apply_type(0x1397358, "RTTIContainer");

	// Array<MovieSkipLocation>
	set_name(0x136caa4, "RTTI_Array_MovieSkipLocation");
	apply_type(0x136caa4, "RTTIContainer");

	// Array<MovieSubtitle>
	set_name(0x13ba0fc, "RTTI_Array_MovieSubtitle");
	apply_type(0x13ba0fc, "RTTIContainer");

	// Array<MultiMeshResourcePart>
	set_name(0x133b66c, "RTTI_Array_MultiMeshResourcePart");
	apply_type(0x133b66c, "RTTIContainer");

	// Array<NodeSectionMapping>
	set_name(0x136c6bc, "RTTI_Array_NodeSectionMapping");
	apply_type(0x136c6bc, "RTTIContainer");

	// Array<OSDEventSettings>
	set_name(0x1379214, "RTTI_Array_OSDEventSettings");
	apply_type(0x1379214, "RTTIContainer");

	// Array<ObjectiveCount>
	set_name(0x13a53a8, "RTTI_Array_ObjectiveCount");
	apply_type(0x13a53a8, "RTTIContainer");

	// Array<OrientationHelper>
	set_name(0x1356438, "RTTI_Array_OrientationHelper");
	apply_type(0x1356438, "RTTIContainer");

	// Array<PBDConstraintDesc>
	set_name(0x1339c58, "RTTI_Array_PBDConstraintDesc");
	apply_type(0x1339c58, "RTTIContainer");

	// Array<PBDVertexDesc>
	set_name(0x1339cbc, "RTTI_Array_PBDVertexDesc");
	apply_type(0x1339cbc, "RTTIContainer");

	// Array<ParTimeNodeInfo>
	set_name(0x13a6a00, "RTTI_Array_ParTimeNodeInfo");
	apply_type(0x13a6a00, "RTTIContainer");

	// Array<ParticleEventVirtualEmitter>
	set_name(0x13975b4, "RTTI_Array_ParticleEventVirtualEmitter");
	apply_type(0x13975b4, "RTTIContainer");

	// Array<ParticleShaderVariable>
	set_name(0x1340e6c, "RTTI_Array_ParticleShaderVariable");
	apply_type(0x1340e6c, "RTTIContainer");

	// Array<ParticleVertexAttribute>
	set_name(0x1340de8, "RTTI_Array_ParticleVertexAttribute");
	apply_type(0x1340de8, "RTTIContainer");

	// Array<PhonemeBoneTarget>
	set_name(0x13b6794, "RTTI_Array_PhonemeBoneTarget");
	apply_type(0x13b6794, "RTTIContainer");

	// Array<PhonemeFloatShaderTarget>
	set_name(0x13b67f8, "RTTI_Array_PhonemeFloatShaderTarget");
	apply_type(0x13b67f8, "RTTIContainer");

	// Array<PhonemeTarget>
	set_name(0x135eb30, "RTTI_Array_PhonemeTarget");
	apply_type(0x135eb30, "RTTIContainer");

	// Array<PhysicsDamageImpulseModifier>
	set_name(0x1362d6c, "RTTI_Array_PhysicsDamageImpulseModifier");
	apply_type(0x1362d6c, "RTTIContainer");

	// Array<PhysicsRagdollBodyControlData>
	set_name(0x1343d9c, "RTTI_Array_PhysicsRagdollBodyControlData");
	apply_type(0x1343d9c, "RTTIContainer");

	// Array<PhysicsRagdollMotorControlData>
	set_name(0x1343cd4, "RTTI_Array_PhysicsRagdollMotorControlData");
	apply_type(0x1343cd4, "RTTIContainer");

	// Array<PhysicsVehicleWheelInfo>
	set_name(0x1342f7c, "RTTI_Array_PhysicsVehicleWheelInfo");
	apply_type(0x1342f7c, "RTTIContainer");

	// Array<PickUpDropAmmoPickUp>
	set_name(0x139332c, "RTTI_Array_PickUpDropAmmoPickUp");
	apply_type(0x139332c, "RTTIContainer");

	// Array<PickUpDropRandomPickUp>
	set_name(0x1393390, "RTTI_Array_PickUpDropRandomPickUp");
	apply_type(0x1393390, "RTTIContainer");

	// Array<PickUpDropResourceWithOdds>
	set_name(0x13933f4, "RTTI_Array_PickUpDropResourceWithOdds");
	apply_type(0x13933f4, "RTTIContainer");

	// Array<PlayerRank>
	set_name(0x136d374, "RTTI_Array_PlayerRank");
	apply_type(0x136d374, "RTTIContainer");

	// Array<PrimitiveDeltaDeformation>
	set_name(0x1356200, "RTTI_Array_PrimitiveDeltaDeformation");
	apply_type(0x1356200, "RTTIContainer");

	// Array<PrimitiveSkinInfo>
	set_name(0x1356138, "RTTI_Array_PrimitiveSkinInfo");
	apply_type(0x1356138, "RTTIContainer");

	// Array<ProjMatrix>
	set_name(0x133506c, "RTTI_Array_ProjMatrix");
	apply_type(0x133506c, "RTTIContainer");

	// Array<RGBAColor>
	set_name(0x13289a0, "RTTI_Array_RGBAColor");
	apply_type(0x13289a0, "RTTIContainer");

	// Array<Ref<AIArea>>
	set_name(0x1352744, "RTTI_Array_Ref_AIArea");
	apply_type(0x1352744, "RTTIContainer");

	// Array<Ref<AIContextResource>>
	set_name(0x134bec0, "RTTI_Array_Ref_AIContextResource");
	apply_type(0x134bec0, "RTTIContainer");

	// Array<Ref<AIFaction>>
	set_name(0x134b468, "RTTI_Array_Ref_AIFaction");
	apply_type(0x134b468, "RTTIContainer");

	// Array<Ref<AIPositionPickerResource>>
	set_name(0x1352ea8, "RTTI_Array_Ref_AIPositionPickerResource");
	apply_type(0x1352ea8, "RTTIContainer");

	// Array<Ref<AIStaticCoverMap>>
	set_name(0x13537e4, "RTTI_Array_Ref_AIStaticCoverMap");
	apply_type(0x13537e4, "RTTIContainer");

	// Array<Ref<AIWeaponPreference>>
	set_name(0x134e840, "RTTI_Array_Ref_AIWeaponPreference");
	apply_type(0x134e840, "RTTIContainer");

	// Array<Ref<AIWeaponPreferenceSettings>>
	set_name(0x134e8b4, "RTTI_Array_Ref_AIWeaponPreferenceSettings");
	apply_type(0x134e8b4, "RTTIContainer");

	// Array<Ref<AbilityAnimationResource>>
	set_name(0x135e7a8, "RTTI_Array_Ref_AbilityAnimationResource");
	apply_type(0x135e7a8, "RTTIContainer");

	// Array<Ref<AbilityResource>>
	set_name(0x135ee60, "RTTI_Array_Ref_AbilityResource");
	apply_type(0x135ee60, "RTTIContainer");

	// Array<Ref<ActorResource>>
	set_name(0x139a300, "RTTI_Array_Ref_ActorResource");
	apply_type(0x139a300, "RTTIContainer");

	// Array<Ref<AmmoEjectorResource>>
	set_name(0x139c970, "RTTI_Array_Ref_AmmoEjectorResource");
	apply_type(0x139c970, "RTTIContainer");

	// Array<Ref<AnimationMotionBase>>
	set_name(0x13bc5a4, "RTTI_Array_Ref_AnimationMotionBase");
	apply_type(0x13bc5a4, "RTTIContainer");

	// Array<Ref<AnimationState>>
	set_name(0x13365b0, "RTTI_Array_Ref_AnimationState");
	apply_type(0x13365b0, "RTTIContainer");

	// Array<Ref<Asset>>
	set_name(0x1338ac0, "RTTI_Array_Ref_Asset");
	apply_type(0x1338ac0, "RTTIContainer");

	// Array<Ref<BaseConcreteAsset>>
	set_name(0x1338b34, "RTTI_Array_Ref_BaseConcreteAsset");
	apply_type(0x1338b34, "RTTIContainer");

	// Array<Ref<CaptureAndHoldAreaFactionSettings>>
	set_name(0x139c318, "RTTI_Array_Ref_CaptureAndHoldAreaFactionSettings");
	apply_type(0x139c318, "RTTIContainer");

	// Array<Ref<Career>>
	set_name(0x13ba7ec, "RTTI_Array_Ref_Career");
	apply_type(0x13ba7ec, "RTTIContainer");

	// Array<Ref<CareerUnlock>>
	set_name(0x13ba778, "RTTI_Array_Ref_CareerUnlock");
	apply_type(0x13ba778, "RTTIContainer");

	// Array<Ref<ClusterGrenadeFragmentResource>>
	set_name(0x13a0518, "RTTI_Array_Ref_ClusterGrenadeFragmentResource");
	apply_type(0x13a0518, "RTTIContainer");

	// Array<Ref<ConcreteAsset>>
	set_name(0x1338ba8, "RTTI_Array_Ref_ConcreteAsset");
	apply_type(0x1338ba8, "RTTIContainer");

	// Array<Ref<CoreObject>>
	set_name(0x1339034, "RTTI_Array_Ref_CoreObject");
	apply_type(0x1339034, "RTTIContainer");

	// Array<Ref<DamageTypeResource>>
	set_name(0x135d364, "RTTI_Array_Ref_DamageTypeResource");
	apply_type(0x135d364, "RTTIContainer");

	// Array<Ref<DestructibilityConstraintState>>
	set_name(0x135e11c, "RTTI_Array_Ref_DestructibilityConstraintState");
	apply_type(0x135e11c, "RTTIContainer");

	// Array<Ref<DestructibilityPartState>>
	set_name(0x135e0a8, "RTTI_Array_Ref_DestructibilityPartState");
	apply_type(0x135e0a8, "RTTIContainer");

	// Array<Ref<DestructibilityPartStateResource>>
	set_name(0x135dda8, "RTTI_Array_Ref_DestructibilityPartStateResource");
	apply_type(0x135dda8, "RTTIContainer");

	// Array<Ref<DestructibilityState>>
	set_name(0x135e190, "RTTI_Array_Ref_DestructibilityState");
	apply_type(0x135e190, "RTTIContainer");

	// Array<Ref<DifficultyRangeResource>>
	set_name(0x1367d00, "RTTI_Array_Ref_DifficultyRangeResource");
	apply_type(0x1367d00, "RTTIContainer");

	// Array<Ref<EffectComponentResource>>
	set_name(0x1389f94, "RTTI_Array_Ref_EffectComponentResource");
	apply_type(0x1389f94, "RTTIContainer");

	// Array<Ref<ElectricityDrawSettings>>
	set_name(0x13b85a8, "RTTI_Array_Ref_ElectricityDrawSettings");
	apply_type(0x13b85a8, "RTTIContainer");

	// Array<Ref<ElectricityGridNodeResource>>
	set_name(0x13b7dec, "RTTI_Array_Ref_ElectricityGridNodeResource");
	apply_type(0x13b7dec, "RTTIContainer");

	// Array<Ref<ElectricitySpawnEntityResource>>
	set_name(0x13b86d4, "RTTI_Array_Ref_ElectricitySpawnEntityResource");
	apply_type(0x13b86d4, "RTTIContainer");

	// Array<Ref<EntityComponentResource>>
	set_name(0x135d9bc, "RTTI_Array_Ref_EntityComponentResource");
	apply_type(0x135d9bc, "RTTIContainer");

	// Array<Ref<EntityResource>>
	set_name(0x135d8a0, "RTTI_Array_Ref_EntityResource");
	apply_type(0x135d8a0, "RTTIContainer");

	// Array<Ref<EventResource>>
	set_name(0x1394478, "RTTI_Array_Ref_EventResource");
	apply_type(0x1394478, "RTTIContainer");

	// Array<Ref<HUDElementResource>>
	set_name(0x13ac904, "RTTI_Array_Ref_HUDElementResource");
	apply_type(0x13ac904, "RTTIContainer");

	// Array<Ref<HumanoidHitResponseBehaviour>>
	set_name(0x1385b80, "RTTI_Array_Ref_HumanoidHitResponseBehaviour");
	apply_type(0x1385b80, "RTTIContainer");

	// Array<Ref<HumanoidSubStateUsingInteractiveEntityResource>>
	set_name(0x1389160, "RTTI_Array_Ref_HumanoidSubStateUsingInteractiveEntityResource");
	apply_type(0x1389160, "RTTIContainer");

	// Array<Ref<InventoryCaptureSpawnAbilityResource>>
	set_name(0x13923d4, "RTTI_Array_Ref_InventoryCaptureSpawnAbilityResource");
	apply_type(0x13923d4, "RTTIContainer");

	// Array<Ref<LeanAndPeekAction>>
	set_name(0x137cf00, "RTTI_Array_Ref_LeanAndPeekAction");
	apply_type(0x137cf00, "RTTIContainer");

	// Array<Ref<LeanAndPeekPosition>>
	set_name(0x137cf84, "RTTI_Array_Ref_LeanAndPeekPosition");
	apply_type(0x137cf84, "RTTIContainer");

	// Array<Ref<LevelListResource>>
	set_name(0x136c904, "RTTI_Array_Ref_LevelListResource");
	apply_type(0x136c904, "RTTIContainer");

	// Array<Ref<LevelSection>>
	set_name(0x135bfe4, "RTTI_Array_Ref_LevelSection");
	apply_type(0x135bfe4, "RTTIContainer");

	// Array<Ref<LightResource>>
	set_name(0x13453cc, "RTTI_Array_Ref_LightResource");
	apply_type(0x13453cc, "RTTIContainer");

	// Array<Ref<LocatorResource>>
	set_name(0x139aa88, "RTTI_Array_Ref_LocatorResource");
	apply_type(0x139aa88, "RTTIContainer");

	// Array<Ref<MeshResourceBase>>
	set_name(0x133b608, "RTTI_Array_Ref_MeshResourceBase");
	apply_type(0x133b608, "RTTIContainer");

	// Array<Ref<MissionResource>>
	set_name(0x13a3574, "RTTI_Array_Ref_MissionResource");
	apply_type(0x13a3574, "RTTIContainer");

	// Array<Ref<ModelPartMeshReplacementResource>>
	set_name(0x13629f4, "RTTI_Array_Ref_ModelPartMeshReplacementResource");
	apply_type(0x13629f4, "RTTIContainer");

	// Array<Ref<ModelPartResource>>
	set_name(0x1362980, "RTTI_Array_Ref_ModelPartResource");
	apply_type(0x1362980, "RTTIContainer");

	// Array<Ref<MovieResource>>
	set_name(0x136cb18, "RTTI_Array_Ref_MovieResource");
	apply_type(0x136cb18, "RTTIContainer");

	// Array<Ref<OSDEventParserResource>>
	set_name(0x1379288, "RTTI_Array_Ref_OSDEventParserResource");
	apply_type(0x1379288, "RTTIContainer");

	// Array<Ref<ObjectAttributeAnimatorInstance>>
	set_name(0x13378ac, "RTTI_Array_Ref_ObjectAttributeAnimatorInstance");
	apply_type(0x13378ac, "RTTIContainer");

	// Array<Ref<ObjectAttributeAnimatorResource>>
	set_name(0x1337920, "RTTI_Array_Ref_ObjectAttributeAnimatorResource");
	apply_type(0x1337920, "RTTIContainer");

	// Array<Ref<ParTimeLevelInfo>>
	set_name(0x13a6ad8, "RTTI_Array_Ref_ParTimeLevelInfo");
	apply_type(0x13a6ad8, "RTTIContainer");

	// Array<Ref<ParticleEmitter>>
	set_name(0x1340ce0, "RTTI_Array_Ref_ParticleEmitter");
	apply_type(0x1340ce0, "RTTIContainer");

	// Array<Ref<ParticleSystemResource>>
	set_name(0x1340fb4, "RTTI_Array_Ref_ParticleSystemResource");
	apply_type(0x1340fb4, "RTTIContainer");

	// Array<Ref<PhonemeBoneChannel>>
	set_name(0x13b686c, "RTTI_Array_Ref_PhonemeBoneChannel");
	apply_type(0x13b686c, "RTTIContainer");

	// Array<Ref<PhonemeChannel>>
	set_name(0x135eba4, "RTTI_Array_Ref_PhonemeChannel");
	apply_type(0x135eba4, "RTTIContainer");

	// Array<Ref<PortableTurretResource>>
	set_name(0x1391b0c, "RTTI_Array_Ref_PortableTurretResource");
	apply_type(0x1391b0c, "RTTIContainer");

	// Array<Ref<PostProcessEffectorResource>>
	set_name(0x1348544, "RTTI_Array_Ref_PostProcessEffectorResource");
	apply_type(0x1348544, "RTTIContainer");

	// Array<Ref<PrimitiveResource>>
	set_name(0x1345764, "RTTI_Array_Ref_PrimitiveResource");
	apply_type(0x1345764, "RTTIContainer");

	// Array<Ref<RenderEffectResource>>
	set_name(0x1345908, "RTTI_Array_Ref_RenderEffectResource");
	apply_type(0x1345908, "RTTIContainer");

	// Array<Ref<RenderingPrimitiveResource>>
	set_name(0x13457dc, "RTTI_Array_Ref_RenderingPrimitiveResource");
	apply_type(0x13457dc, "RTTIContainer");

	// Array<Ref<ShaderAnimatorResourceBase>>
	set_name(0x1337694, "RTTI_Array_Ref_ShaderAnimatorResourceBase");
	apply_type(0x1337694, "RTTIContainer");

	// Array<Ref<ShakeResource>>
	set_name(0x135c678, "RTTI_Array_Ref_ShakeResource");
	apply_type(0x135c678, "RTTIContainer");

	// Array<Ref<SimpleSoundResource>>
	set_name(0x1359888, "RTTI_Array_Ref_SimpleSoundResource");
	apply_type(0x1359888, "RTTIContainer");

	// Array<Ref<SkeletonAnimationResource>>
	set_name(0x1356748, "RTTI_Array_Ref_SkeletonAnimationResource");
	apply_type(0x1356748, "RTTIContainer");

	// Array<Ref<SkeletonBaseAnimationResource>>
	set_name(0x13566d4, "RTTI_Array_Ref_SkeletonBaseAnimationResource");
	apply_type(0x13566d4, "RTTIContainer");

	// Array<Ref<SoundResource>>
	set_name(0x135969c, "RTTI_Array_Ref_SoundResource");
	apply_type(0x135969c, "RTTIContainer");

	// Array<Ref<StaticMeshResource>>
	set_name(0x133b94c, "RTTI_Array_Ref_StaticMeshResource");
	apply_type(0x133b94c, "RTTIContainer");

	// Array<Ref<TypefaceStyle>>
	set_name(0x1345e08, "RTTI_Array_Ref_TypefaceStyle");
	apply_type(0x1345e08, "RTTIContainer");

	// Array<Ref<UnlockableFeatureResource>>
	set_name(0x13a67c4, "RTTI_Array_Ref_UnlockableFeatureResource");
	apply_type(0x13a67c4, "RTTIContainer");

	// Array<Ref<UseLocationResource>>
	set_name(0x135d5cc, "RTTI_Array_Ref_UseLocationResource");
	apply_type(0x135d5cc, "RTTIContainer");

	// Array<Ref<UseLocationResourceGame>>
	set_name(0x136cec8, "RTTI_Array_Ref_UseLocationResourceGame");
	apply_type(0x136cec8, "RTTIContainer");

	// Array<Ref<WeaponRackItem>>
	set_name(0x13a2f1c, "RTTI_Array_Ref_WeaponRackItem");
	apply_type(0x13a2f1c, "RTTIContainer");

	// Array<Ref<Zone>>
	set_name(0x134a3e4, "RTTI_Array_Ref_Zone");
	apply_type(0x134a3e4, "RTTIContainer");

	// Array<Ref<ZoomSetting>>
	set_name(0x13a30f0, "RTTI_Array_Ref_ZoomSetting");
	apply_type(0x13a30f0, "RTTIContainer");

	// Array<RegionAssetFilter>
	set_name(0x136c720, "RTTI_Array_RegionAssetFilter");
	apply_type(0x136c720, "RTTIContainer");

	// Array<RenderEffectShaderOverrides>
	set_name(0x1347a84, "RTTI_Array_RenderEffectShaderOverrides");
	apply_type(0x1347a84, "RTTIContainer");

	// Array<RenderTechnique>
	set_name(0x1345c88, "RTTI_Array_RenderTechnique");
	apply_type(0x1345c88, "RTTIContainer");

	// Array<ReviveAmmoSettings>
	set_name(0x138e334, "RTTI_Array_ReviveAmmoSettings");
	apply_type(0x138e334, "RTTIContainer");

	// Array<SKDTreeNode>
	set_name(0x132b150, "RTTI_Array_SKDTreeNode");
	apply_type(0x132b150, "RTTIContainer");

	// Array<ScoreStatRequirement>
	set_name(0x136d168, "RTTI_Array_ScoreStatRequirement");
	apply_type(0x136d168, "RTTIContainer");

	// Array<SectionAssetInfo>
	set_name(0x136c968, "RTTI_Array_SectionAssetInfo");
	apply_type(0x136c968, "RTTIContainer");

	// Array<SentryBotSetting>
	set_name(0x1391f1c, "RTTI_Array_SentryBotSetting");
	apply_type(0x1391f1c, "RTTIContainer");

	// Array<SequentialAnimationInfo>
	set_name(0x1355d3c, "RTTI_Array_SequentialAnimationInfo");
	apply_type(0x1355d3c, "RTTIContainer");

	// Array<SkeletonAnimChannel>
	set_name(0x1356564, "RTTI_Array_SkeletonAnimChannel");
	apply_type(0x1356564, "RTTIContainer");

	// Array<SkeletonTargetLink>
	set_name(0x13568a8, "RTTI_Array_SkeletonTargetLink");
	apply_type(0x13568a8, "RTTIContainer");

	// Array<SkinnedModelLOD>
	set_name(0x1362738, "RTTI_Array_SkinnedModelLOD");
	apply_type(0x1362738, "RTTIContainer");

	// Array<SkinnedPoint>
	set_name(0x1356c70, "RTTI_Array_SkinnedPoint");
	apply_type(0x1356c70, "RTTIContainer");

	// Array<SoundStateMachineEventSettings>
	set_name(0x13b9e30, "RTTI_Array_SoundStateMachineEventSettings");
	apply_type(0x13b9e30, "RTTIContainer");

	// Array<SoundStateMachineStateSettings>
	set_name(0x13b9dcc, "RTTI_Array_SoundStateMachineStateSettings");
	apply_type(0x13b9dcc, "RTTIContainer");

	// Array<SpawnEffectAnimatedShader>
	set_name(0x138a558, "RTTI_Array_SpawnEffectAnimatedShader");
	apply_type(0x138a558, "RTTIContainer");

	// Array<SpawnEffectTimedMeshSwitch>
	set_name(0x138a4f4, "RTTI_Array_SpawnEffectTimedMeshSwitch");
	apply_type(0x138a4f4, "RTTIContainer");

	// Array<Stat>
	set_name(0x136d768, "RTTI_Array_Stat");
	apply_type(0x136d768, "RTTIContainer");

	// Array<StatResource>
	set_name(0x13ba870, "RTTI_Array_StatResource");
	apply_type(0x13ba870, "RTTIContainer");

	// Array<StateSwitch>
	set_name(0x13364b8, "RTTI_Array_StateSwitch");
	apply_type(0x13364b8, "RTTIContainer");

	// Array<String>
	set_name(0x13360a8, "RTTI_Array_String");
	apply_type(0x13360a8, "RTTIContainer");

	// Array<Subtitle>
	set_name(0x136ca40, "RTTI_Array_Subtitle");
	apply_type(0x136ca40, "RTTIContainer");

	// Array<SuspensionUnit>
	set_name(0x1383550, "RTTI_Array_SuspensionUnit");
	apply_type(0x1383550, "RTTIContainer");

	// Array<SwitchMeshResourcePart>
	set_name(0x133b724, "RTTI_Array_SwitchMeshResourcePart");
	apply_type(0x133b724, "RTTIContainer");

	// Array<TargetBoneSetFlags>
	set_name(0x1356970, "RTTI_Array_TargetBoneSetFlags");
	apply_type(0x1356970, "RTTIContainer");

	// Array<TextureBindingWithHandle>
	set_name(0x1347d74, "RTTI_Array_TextureBindingWithHandle");
	apply_type(0x1347d74, "RTTIContainer");

	// Array<TextureLUTEntry>
	set_name(0x1347790, "RTTI_Array_TextureLUTEntry");
	apply_type(0x1347790, "RTTIContainer");

	// Array<TextureWidgetElement>
	set_name(0x133e0ac, "RTTI_Array_TextureWidgetElement");
	apply_type(0x133e0ac, "RTTIContainer");

	// Array<TimeMappingInfo>
	set_name(0x1355b68, "RTTI_Array_TimeMappingInfo");
	apply_type(0x1355b68, "RTTIContainer");

	// Array<TimeWarpFactor>
	set_name(0x139494c, "RTTI_Array_TimeWarpFactor");
	apply_type(0x139494c, "RTTIContainer");

	// Array<TimeWarpTag>
	set_name(0x1355a4c, "RTTI_Array_TimeWarpTag");
	apply_type(0x1355a4c, "RTTIContainer");

	// Array<TrackAnimatorUserExitOptions>
	set_name(0x137d70c, "RTTI_Array_TrackAnimatorUserExitOptions");
	apply_type(0x137d70c, "RTTIContainer");

	// Array<TriStateIcon>
	set_name(0x13b0e84, "RTTI_Array_TriStateIcon");
	apply_type(0x13b0e84, "RTTIContainer");

	// Array<Trophy>
	set_name(0x136d5ac, "RTTI_Array_Trophy");
	apply_type(0x136d5ac, "RTTIContainer");

	// Array<TwoBoneIkControl>
	set_name(0x1356500, "RTTI_Array_TwoBoneIkControl");
	apply_type(0x1356500, "RTTIContainer");

	// Array<TwoJointIkBendConfig>
	set_name(0x135e97c, "RTTI_Array_TwoJointIkBendConfig");
	apply_type(0x135e97c, "RTTIContainer");

	// Array<UseLocationInfo>
	set_name(0x137cab0, "RTTI_Array_UseLocationInfo");
	apply_type(0x137cab0, "RTTIContainer");

	// Array<UsedEntityScoreSettings>
	set_name(0x136d490, "RTTI_Array_UsedEntityScoreSettings");
	apply_type(0x136d490, "RTTIContainer");

	// Array<UserDamageModifier>
	set_name(0x137d090, "RTTI_Array_UserDamageModifier");
	apply_type(0x137d090, "RTTIContainer");

	// Array<UserModeInfo>
	set_name(0x137ca3c, "RTTI_Array_UserModeInfo");
	apply_type(0x137ca3c, "RTTIContainer");

	// Array<VariableBindingNGWithHandle>
	set_name(0x1347e90, "RTTI_Array_VariableBindingNGWithHandle");
	apply_type(0x1347e90, "RTTIContainer");

	// Array<VertexDeltaDeformation>
	set_name(0x135619c, "RTTI_Array_VertexDeltaDeformation");
	apply_type(0x135619c, "RTTIContainer");

	// Array<VertexSkin>
	set_name(0x1356ba8, "RTTI_Array_VertexSkin");
	apply_type(0x1356ba8, "RTTIContainer");

	// Array<VertexSkinNBT>
	set_name(0x1356c0c, "RTTI_Array_VertexSkinNBT");
	apply_type(0x1356c0c, "RTTIContainer");

	// Array<ViewportSetup>
	set_name(0x13a9c10, "RTTI_Array_ViewportSetup");
	apply_type(0x13a9c10, "RTTIContainer");

	// Array<WString>
	set_name(0x1336164, "RTTI_Array_WString");
	apply_type(0x1336164, "RTTIContainer");

	// Array<WeaponScoreMultipliers>
	set_name(0x136d4f4, "RTTI_Array_WeaponScoreMultipliers");
	apply_type(0x136d4f4, "RTTIContainer");

	// Array<WheelInfo>
	set_name(0x138365c, "RTTI_Array_WheelInfo");
	apply_type(0x138365c, "RTTIContainer");

	// Array<WheelLogic>
	set_name(0x13836c0, "RTTI_Array_WheelLogic");
	apply_type(0x13836c0, "RTTIContainer");

	// Array<WheelMapping>
	set_name(0x1382fac, "RTTI_Array_WheelMapping");
	apply_type(0x1382fac, "RTTIContainer");

	// Array<WidgetAnimationSettings>
	set_name(0x133df3c, "RTTI_Array_WidgetAnimationSettings");
	apply_type(0x133df3c, "RTTIContainer");

	// Array<cptr<AIFaction>>
	set_name(0x134b448, "RTTI_Array_cptr_AIFaction");
	apply_type(0x134b448, "RTTIContainer");

	// Array<cptr<AILinkTypeInfo>>
	set_name(0x1352c70, "RTTI_Array_cptr_AILinkTypeInfo");
	apply_type(0x1352c70, "RTTIContainer");

	// Array<cptr<AnimationState>>
	set_name(0x1336590, "RTTI_Array_cptr_AnimationState");
	apply_type(0x1336590, "RTTIContainer");

	// Array<cptr<CoreObject>>
	set_name(0x1339014, "RTTI_Array_cptr_CoreObject");
	apply_type(0x1339014, "RTTIContainer");

	// Array<cptr<DestructionLogicAction>>
	set_name(0x135e2bc, "RTTI_Array_cptr_DestructionLogicAction");
	apply_type(0x135e2bc, "RTTIContainer");

	// Array<cptr<GestureAction>>
	set_name(0x136848c, "RTTI_Array_cptr_GestureAction");
	apply_type(0x136848c, "RTTIContainer");

	// Array<cptr<GestureResource>>
	set_name(0x13683b4, "RTTI_Array_cptr_GestureResource");
	apply_type(0x13683b4, "RTTIContainer");

	// Array<cptr<LeanAndPeekAction>>
	set_name(0x137cee0, "RTTI_Array_cptr_LeanAndPeekAction");
	apply_type(0x137cee0, "RTTIContainer");

	// Array<cptr<Zone>>
	set_name(0x134a3c4, "RTTI_Array_cptr_Zone");
	apply_type(0x134a3c4, "RTTIContainer");

	// Array<float>
	set_name(0x1336030, "RTTI_Array_float");
	apply_type(0x1336030, "RTTIContainer");

	// Array<int16>
	set_name(0x1335e70, "RTTI_Array_int16");
	apply_type(0x1335e70, "RTTIContainer");

	// Array<int>
	set_name(0x1335d80, "RTTI_Array_int");
	apply_type(0x1335d80, "RTTIContainer");

	// Array<uint16>
	set_name(0x1335eb4, "RTTI_Array_uint16");
	apply_type(0x1335eb4, "RTTIContainer");

	// Array<uint8>
	set_name(0x1335e2c, "RTTI_Array_uint8");
	apply_type(0x1335e2c, "RTTIContainer");

	// TinyArray<ShaderVariable>
	set_name(0x1347dd8, "RTTI_TinyArray_ShaderVariable");
	apply_type(0x1347dd8, "RTTIContainer");

	// TinyArray<TextureBinding>
	set_name(0x1347d10, "RTTI_TinyArray_TextureBinding");
	apply_type(0x1347d10, "RTTIContainer");
}