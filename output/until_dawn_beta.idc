#include <idc.idc>

static main() {
	// AIATACTurretWeaponInterface
	set_name(0x14f8378, "AIATACTurretWeaponInterface");
	apply_type(0x14f8378, "RTTICompound");
	del_items(0x14f8958, DELIT_SIMPLE, 8);
	apply_type(0x14f8958, "RTTIBase[1]");
	set_name(0x14f8958, "AIATACTurretWeaponInterface::sBases");

	// AIAgent
	set_name(0x14ce97c, "AIAgent");
	apply_type(0x14ce97c, "RTTICompound");
	del_items(0x14d0580, DELIT_SIMPLE, 16);
	apply_type(0x14d0580, "RTTIBase[2]");
	set_name(0x14d0580, "AIAgent::sBases");
	del_items(0x14d0590, DELIT_SIMPLE, 72);
	apply_type(0x14d0590, "RTTIFunction[3]");
	set_name(0x14d0590, "AIAgent::sFunctions");

	// AIAnimationBehaviour
	set_name(0x1544598, "AIAnimationBehaviour");
	apply_type(0x1544598, "RTTICompound");
	del_items(0x1546808, DELIT_SIMPLE, 8);
	apply_type(0x1546808, "RTTIBase[1]");
	set_name(0x1546808, "AIAnimationBehaviour::sBases");
	del_items(0x1546810, DELIT_SIMPLE, 84);
	apply_type(0x1546810, "RTTIAttr[3]");
	set_name(0x1546810, "AIAnimationBehaviour::sAttrs");

	// AIArea
	set_name(0x14d6374, "AIArea");
	apply_type(0x14d6374, "RTTICompound");
	del_items(0x14d6490, DELIT_SIMPLE, 8);
	apply_type(0x14d6490, "RTTIBase[1]");
	set_name(0x14d6490, "AIArea::sBases");
	del_items(0x14d6498, DELIT_SIMPLE, 252);
	apply_type(0x14d6498, "RTTIAttr[9]");
	set_name(0x14d6498, "AIArea::sAttrs");

	// AIAreaFilter
	set_name(0x14ceadc, "AIAreaFilter");
	apply_type(0x14ceadc, "RTTICompound");
	del_items(0x14cfeb0, DELIT_SIMPLE, 56);
	apply_type(0x14cfeb0, "RTTIAttr[2]");
	set_name(0x14cfeb0, "AIAreaFilter::sAttrs");

	// AIAreaGraph
	set_name(0x14d643c, "AIAreaGraph");
	apply_type(0x14d643c, "RTTICompound");
	del_items(0x14d65cc, DELIT_SIMPLE, 8);
	apply_type(0x14d65cc, "RTTIBase[1]");
	set_name(0x14d65cc, "AIAreaGraph::sBases");
	del_items(0x14d65d4, DELIT_SIMPLE, 84);
	apply_type(0x14d65d4, "RTTIAttr[3]");
	set_name(0x14d65d4, "AIAreaGraph::sAttrs");

	// AIAreaPortal
	set_name(0x14d63d8, "AIAreaPortal");
	apply_type(0x14d63d8, "RTTICompound");
	del_items(0x14d6594, DELIT_SIMPLE, 56);
	apply_type(0x14d6594, "RTTIAttr[2]");
	set_name(0x14d6594, "AIAreaPortal::sAttrs");

	// AIAreaRestrictions
	set_name(0x14cea88, "AIAreaRestrictions");
	apply_type(0x14cea88, "RTTICompound");
	del_items(0x14cfe40, DELIT_SIMPLE, 112);
	apply_type(0x14cfe40, "RTTIAttr[4]");
	set_name(0x14cfe40, "AIAreaRestrictions::sAttrs");

	// AIAtmosphereBox
	set_name(0x14ceb30, "AIAtmosphereBox");
	apply_type(0x14ceb30, "RTTICompound");
	del_items(0x14d1238, DELIT_SIMPLE, 8);
	apply_type(0x14d1238, "RTTIBase[1]");
	set_name(0x14d1238, "AIAtmosphereBox::sBases");
	del_items(0x14d1240, DELIT_SIMPLE, 56);
	apply_type(0x14d1240, "RTTIAttr[2]");
	set_name(0x14d1240, "AIAtmosphereBox::sAttrs");

	// AIAtmosphereBoxResource
	set_name(0x14ceb94, "AIAtmosphereBoxResource");
	apply_type(0x14ceb94, "RTTICompound");
	del_items(0x14d127c, DELIT_SIMPLE, 8);
	apply_type(0x14d127c, "RTTIBase[1]");
	set_name(0x14d127c, "AIAtmosphereBoxResource::sBases");
	del_items(0x14d1284, DELIT_SIMPLE, 168);
	apply_type(0x14d1284, "RTTIAttr[6]");
	set_name(0x14d1284, "AIAtmosphereBoxResource::sAttrs");

	// AIAttackPositionPickerResource
	set_name(0x14d6b2c, "AIAttackPositionPickerResource");
	apply_type(0x14d6b2c, "RTTICompound");
	del_items(0x14d8a20, DELIT_SIMPLE, 8);
	apply_type(0x14d8a20, "RTTIBase[1]");
	set_name(0x14d8a20, "AIAttackPositionPickerResource::sBases");
	del_items(0x14d8a28, DELIT_SIMPLE, 28);
	apply_type(0x14d8a28, "RTTIAttr[1]");
	set_name(0x14d8a28, "AIAttackPositionPickerResource::sAttrs");

	// AIAvoidanceComponent
	set_name(0x14e270c, "AIAvoidanceComponent");
	apply_type(0x14e270c, "RTTICompound");
	del_items(0x14e5ef8, DELIT_SIMPLE, 8);
	apply_type(0x14e5ef8, "RTTIBase[1]");
	set_name(0x14e5ef8, "AIAvoidanceComponent::sBases");

	// AIAvoidanceComponentResource
	set_name(0x14e2760, "AIAvoidanceComponentResource");
	apply_type(0x14e2760, "RTTICompound");
	del_items(0x14e5e98, DELIT_SIMPLE, 8);
	apply_type(0x14e5e98, "RTTIBase[1]");
	set_name(0x14e5e98, "AIAvoidanceComponentResource::sBases");
	del_items(0x14e5ea0, DELIT_SIMPLE, 84);
	apply_type(0x14e5ea0, "RTTIAttr[3]");
	set_name(0x14e5ea0, "AIAvoidanceComponentResource::sAttrs");

	// AIBehaviour
	set_name(0x154447c, "AIBehaviour");
	apply_type(0x154447c, "RTTICompound");
	del_items(0x1546238, DELIT_SIMPLE, 8);
	apply_type(0x1546238, "RTTIBase[1]");
	set_name(0x1546238, "AIBehaviour::sBases");
	del_items(0x1546240, DELIT_SIMPLE, 252);
	apply_type(0x1546240, "RTTIAttr[9]");
	set_name(0x1546240, "AIBehaviour::sAttrs");
	del_items(0x154633c, DELIT_SIMPLE, 12);
	apply_type(0x154633c, "RTTIMessageHandler[1]");
	set_name(0x154633c, "AIBehaviour::sMessageHandlers");

	// AIBehaviourGroup
	set_name(0x15444d0, "AIBehaviourGroup");
	apply_type(0x15444d0, "RTTICompound");
	del_items(0x1545fd8, DELIT_SIMPLE, 8);
	apply_type(0x1545fd8, "RTTIBase[1]");
	set_name(0x1545fd8, "AIBehaviourGroup::sBases");
	del_items(0x1545fe0, DELIT_SIMPLE, 56);
	apply_type(0x1545fe0, "RTTIAttr[2]");
	set_name(0x1545fe0, "AIBehaviourGroup::sAttrs");

	// AIBehaviourManager
	set_name(0x1544408, "AIBehaviourManager");
	apply_type(0x1544408, "RTTICompound");
	del_items(0x1546018, DELIT_SIMPLE, 8);
	apply_type(0x1546018, "RTTIBase[1]");
	set_name(0x1546018, "AIBehaviourManager::sBases");

	// AIBodyAirVehicle
	set_name(0x14f4f0c, "AIBodyAirVehicle");
	apply_type(0x14f4f0c, "RTTICompound");
	del_items(0x14f56d4, DELIT_SIMPLE, 8);
	apply_type(0x14f56d4, "RTTIBase[1]");
	set_name(0x14f56d4, "AIBodyAirVehicle::sBases");

	// AIBodyControlledVehicle
	set_name(0x14f4eb8, "AIBodyControlledVehicle");
	apply_type(0x14f4eb8, "RTTICompound");
	del_items(0x14f56c4, DELIT_SIMPLE, 8);
	apply_type(0x14f56c4, "RTTIBase[1]");
	set_name(0x14f56c4, "AIBodyControlledVehicle::sBases");

	// AIBodyExoSkeleton
	set_name(0x14f4e10, "AIBodyExoSkeleton");
	apply_type(0x14f4e10, "RTTICompound");
	del_items(0x14f56bc, DELIT_SIMPLE, 8);
	apply_type(0x14f56bc, "RTTIBase[1]");
	set_name(0x14f56bc, "AIBodyExoSkeleton::sBases");

	// AIBodyExplosiveLocation
	set_name(0x14f50b0, "AIBodyExplosiveLocation");
	apply_type(0x14f50b0, "RTTICompound");
	del_items(0x14f56fc, DELIT_SIMPLE, 8);
	apply_type(0x14f56fc, "RTTIBase[1]");
	set_name(0x14f56fc, "AIBodyExplosiveLocation::sBases");

	// AIBodyGoal
	set_name(0x14d2538, "AIBodyGoal");
	apply_type(0x14d2538, "RTTICompound");
	del_items(0x14d343c, DELIT_SIMPLE, 8);
	apply_type(0x14d343c, "RTTIBase[1]");
	set_name(0x14d343c, "AIBodyGoal::sBases");

	// AIBodyGoalAimAt
	set_name(0x14d258c, "AIBodyGoalAimAt");
	apply_type(0x14d258c, "RTTICompound");
	del_items(0x14d3580, DELIT_SIMPLE, 8);
	apply_type(0x14d3580, "RTTIBase[1]");
	set_name(0x14d3580, "AIBodyGoalAimAt::sBases");

	// AIBodyGoalAttack
	set_name(0x14d25e0, "AIBodyGoalAttack");
	apply_type(0x14d25e0, "RTTICompound");
	del_items(0x14d3588, DELIT_SIMPLE, 8);
	apply_type(0x14d3588, "RTTIBase[1]");
	set_name(0x14d3588, "AIBodyGoalAttack::sBases");

	// AIBodyGoalCarry
	set_name(0x14d2634, "AIBodyGoalCarry");
	apply_type(0x14d2634, "RTTICompound");
	del_items(0x14d3590, DELIT_SIMPLE, 8);
	apply_type(0x14d3590, "RTTIBase[1]");
	set_name(0x14d3590, "AIBodyGoalCarry::sBases");

	// AIBodyGoalCarryBG
	set_name(0x14d2688, "AIBodyGoalCarryBG");
	apply_type(0x14d2688, "RTTICompound");
	del_items(0x14d3598, DELIT_SIMPLE, 8);
	apply_type(0x14d3598, "RTTIBase[1]");
	set_name(0x14d3598, "AIBodyGoalCarryBG::sBases");

	// AIBodyGoalCloseCombat
	set_name(0x14f6b4c, "AIBodyGoalCloseCombat");
	apply_type(0x14f6b4c, "RTTICompound");
	del_items(0x14f71c0, DELIT_SIMPLE, 8);
	apply_type(0x14f71c0, "RTTIBase[1]");
	set_name(0x14f71c0, "AIBodyGoalCloseCombat::sBases");

	// AIBodyGoalCollectObject
	set_name(0x14d26dc, "AIBodyGoalCollectObject");
	apply_type(0x14d26dc, "RTTICompound");
	del_items(0x14d35a0, DELIT_SIMPLE, 8);
	apply_type(0x14d35a0, "RTTIBase[1]");
	set_name(0x14d35a0, "AIBodyGoalCollectObject::sBases");

	// AIBodyGoalCommunicateSMG
	set_name(0x1545054, "AIBodyGoalCommunicateSMG");
	apply_type(0x1545054, "RTTICompound");
	del_items(0x1546fac, DELIT_SIMPLE, 8);
	apply_type(0x1546fac, "RTTIBase[1]");
	set_name(0x1546fac, "AIBodyGoalCommunicateSMG::sBases");

	// AIBodyGoalCustomAction
	set_name(0x14f6bf4, "AIBodyGoalCustomAction");
	apply_type(0x14f6bf4, "RTTICompound");
	del_items(0x14f71d0, DELIT_SIMPLE, 8);
	apply_type(0x14f71d0, "RTTIBase[1]");
	set_name(0x14f71d0, "AIBodyGoalCustomAction::sBases");

	// AIBodyGoalDrive
	set_name(0x14d2730, "AIBodyGoalDrive");
	apply_type(0x14d2730, "RTTICompound");
	del_items(0x14d35b0, DELIT_SIMPLE, 8);
	apply_type(0x14d35b0, "RTTIBase[1]");
	set_name(0x14d35b0, "AIBodyGoalDrive::sBases");

	// AIBodyGoalFaceTowards
	set_name(0x14d2784, "AIBodyGoalFaceTowards");
	apply_type(0x14d2784, "RTTICompound");
	del_items(0x14d35b8, DELIT_SIMPLE, 8);
	apply_type(0x14d35b8, "RTTIBase[1]");
	set_name(0x14d35b8, "AIBodyGoalFaceTowards::sBases");

	// AIBodyGoalFacialExpression
	set_name(0x14d27d8, "AIBodyGoalFacialExpression");
	apply_type(0x14d27d8, "RTTICompound");
	del_items(0x14d3444, DELIT_SIMPLE, 8);
	apply_type(0x14d3444, "RTTIBase[1]");
	set_name(0x14d3444, "AIBodyGoalFacialExpression::sBases");

	// AIBodyGoalFacialExpressionSMG
	set_name(0x15451a4, "AIBodyGoalFacialExpressionSMG");
	apply_type(0x15451a4, "RTTICompound");
	del_items(0x1546fbc, DELIT_SIMPLE, 8);
	apply_type(0x1546fbc, "RTTIBase[1]");
	set_name(0x1546fbc, "AIBodyGoalFacialExpressionSMG::sBases");

	// AIBodyGoalFacialGestureSMG
	set_name(0x15451f8, "AIBodyGoalFacialGestureSMG");
	apply_type(0x15451f8, "RTTICompound");
	del_items(0x1546fb4, DELIT_SIMPLE, 8);
	apply_type(0x1546fb4, "RTTIBase[1]");
	set_name(0x1546fb4, "AIBodyGoalFacialGestureSMG::sBases");

	// AIBodyGoalFloat
	set_name(0x14d282c, "AIBodyGoalFloat");
	apply_type(0x14d282c, "RTTICompound");
	del_items(0x14d35c0, DELIT_SIMPLE, 8);
	apply_type(0x14d35c0, "RTTIBase[1]");
	set_name(0x14d35c0, "AIBodyGoalFloat::sBases");

	// AIBodyGoalGesture
	set_name(0x14d2880, "AIBodyGoalGesture");
	apply_type(0x14d2880, "RTTICompound");
	del_items(0x14d35c8, DELIT_SIMPLE, 8);
	apply_type(0x14d35c8, "RTTIBase[1]");
	set_name(0x14d35c8, "AIBodyGoalGesture::sBases");

	// AIBodyGoalGestureSMG
	set_name(0x15450fc, "AIBodyGoalGestureSMG");
	apply_type(0x15450fc, "RTTICompound");
	del_items(0x1546f9c, DELIT_SIMPLE, 8);
	apply_type(0x1546f9c, "RTTIBase[1]");
	set_name(0x1546f9c, "AIBodyGoalGestureSMG::sBases");

	// AIBodyGoalGlance
	set_name(0x14d28d4, "AIBodyGoalGlance");
	apply_type(0x14d28d4, "RTTICompound");
	del_items(0x14d35d8, DELIT_SIMPLE, 8);
	apply_type(0x14d35d8, "RTTIBase[1]");
	set_name(0x14d35d8, "AIBodyGoalGlance::sBases");

	// AIBodyGoalIdleSMG
	set_name(0x154524c, "AIBodyGoalIdleSMG");
	apply_type(0x154524c, "RTTICompound");
	del_items(0x1546fec, DELIT_SIMPLE, 8);
	apply_type(0x1546fec, "RTTIBase[1]");
	set_name(0x1546fec, "AIBodyGoalIdleSMG::sBases");

	// AIBodyGoalLapaAction
	set_name(0x14f6aa4, "AIBodyGoalLapaAction");
	apply_type(0x14f6aa4, "RTTICompound");
	del_items(0x14f71b0, DELIT_SIMPLE, 8);
	apply_type(0x14f71b0, "RTTIBase[1]");
	set_name(0x14f71b0, "AIBodyGoalLapaAction::sBases");

	// AIBodyGoalListen
	set_name(0x14d2928, "AIBodyGoalListen");
	apply_type(0x14d2928, "RTTICompound");
	del_items(0x14d35e0, DELIT_SIMPLE, 8);
	apply_type(0x14d35e0, "RTTIBase[1]");
	set_name(0x14d35e0, "AIBodyGoalListen::sBases");

	// AIBodyGoalLookAt
	set_name(0x14d297c, "AIBodyGoalLookAt");
	apply_type(0x14d297c, "RTTICompound");
	del_items(0x14d35d0, DELIT_SIMPLE, 8);
	apply_type(0x14d35d0, "RTTIBase[1]");
	set_name(0x14d35d0, "AIBodyGoalLookAt::sBases");

	// AIBodyGoalLookAtSMG
	set_name(0x1545000, "AIBodyGoalLookAtSMG");
	apply_type(0x1545000, "RTTICompound");
	del_items(0x1546f8c, DELIT_SIMPLE, 8);
	apply_type(0x1546f8c, "RTTIBase[1]");
	set_name(0x1546f8c, "AIBodyGoalLookAtSMG::sBases");

	// AIBodyGoalMountObject
	set_name(0x14d29d0, "AIBodyGoalMountObject");
	apply_type(0x14d29d0, "RTTICompound");
	del_items(0x14d35e8, DELIT_SIMPLE, 8);
	apply_type(0x14d35e8, "RTTIBase[1]");
	set_name(0x14d35e8, "AIBodyGoalMountObject::sBases");

	// AIBodyGoalMove
	set_name(0x14d2a24, "AIBodyGoalMove");
	apply_type(0x14d2a24, "RTTICompound");
	del_items(0x14d35a8, DELIT_SIMPLE, 8);
	apply_type(0x14d35a8, "RTTIBase[1]");
	set_name(0x14d35a8, "AIBodyGoalMove::sBases");

	// AIBodyGoalMoveSMG
	set_name(0x1544fac, "AIBodyGoalMoveSMG");
	apply_type(0x1544fac, "RTTICompound");
	del_items(0x1546d94, DELIT_SIMPLE, 8);
	apply_type(0x1546d94, "RTTIBase[1]");
	set_name(0x1546d94, "AIBodyGoalMoveSMG::sBases");

	// AIBodyGoalPosture
	set_name(0x14d2a78, "AIBodyGoalPosture");
	apply_type(0x14d2a78, "RTTICompound");
	del_items(0x14d35f0, DELIT_SIMPLE, 8);
	apply_type(0x14d35f0, "RTTIBase[1]");
	set_name(0x14d35f0, "AIBodyGoalPosture::sBases");

	// AIBodyGoalSMG
	set_name(0x1544f58, "AIBodyGoalSMG");
	apply_type(0x1544f58, "RTTICompound");
	del_items(0x1546d8c, DELIT_SIMPLE, 8);
	apply_type(0x1546d8c, "RTTIBase[1]");
	set_name(0x1546d8c, "AIBodyGoalSMG::sBases");

	// AIBodyGoalSelectWeapon
	set_name(0x14d2acc, "AIBodyGoalSelectWeapon");
	apply_type(0x14d2acc, "RTTICompound");
	del_items(0x14d35f8, DELIT_SIMPLE, 8);
	apply_type(0x14d35f8, "RTTIBase[1]");
	set_name(0x14d35f8, "AIBodyGoalSelectWeapon::sBases");

	// AIBodyGoalShieldSelf
	set_name(0x14d2b20, "AIBodyGoalShieldSelf");
	apply_type(0x14d2b20, "RTTICompound");
	del_items(0x14d3600, DELIT_SIMPLE, 8);
	apply_type(0x14d3600, "RTTIBase[1]");
	set_name(0x14d3600, "AIBodyGoalShieldSelf::sBases");

	// AIBodyGoalSpecialMove
	set_name(0x14f6af8, "AIBodyGoalSpecialMove");
	apply_type(0x14f6af8, "RTTICompound");
	del_items(0x14f71b8, DELIT_SIMPLE, 8);
	apply_type(0x14f71b8, "RTTIBase[1]");
	set_name(0x14f71b8, "AIBodyGoalSpecialMove::sBases");

	// AIBodyGoalStepTowardsSMG
	set_name(0x15450a8, "AIBodyGoalStepTowardsSMG");
	apply_type(0x15450a8, "RTTICompound");
	del_items(0x1546fd4, DELIT_SIMPLE, 8);
	apply_type(0x1546fd4, "RTTIBase[1]");
	set_name(0x1546fd4, "AIBodyGoalStepTowardsSMG::sBases");

	// AIBodyGoalTalk
	set_name(0x14d2b74, "AIBodyGoalTalk");
	apply_type(0x14d2b74, "RTTICompound");
	del_items(0x14d3608, DELIT_SIMPLE, 8);
	apply_type(0x14d3608, "RTTIBase[1]");
	set_name(0x14d3608, "AIBodyGoalTalk::sBases");

	// AIBodyGoalTarget
	set_name(0x14d2bc8, "AIBodyGoalTarget");
	apply_type(0x14d2bc8, "RTTICompound");
	del_items(0x14d3578, DELIT_SIMPLE, 8);
	apply_type(0x14d3578, "RTTIBase[1]");
	set_name(0x14d3578, "AIBodyGoalTarget::sBases");

	// AIBodyGoalUnmountObject
	set_name(0x14d2c1c, "AIBodyGoalUnmountObject");
	apply_type(0x14d2c1c, "RTTICompound");
	del_items(0x14d3610, DELIT_SIMPLE, 8);
	apply_type(0x14d3610, "RTTIBase[1]");
	set_name(0x14d3610, "AIBodyGoalUnmountObject::sBases");

	// AIBodyGoalUseEntitySMG
	set_name(0x1545150, "AIBodyGoalUseEntitySMG");
	apply_type(0x1545150, "RTTICompound");
	del_items(0x1546f7c, DELIT_SIMPLE, 8);
	apply_type(0x1546f7c, "RTTIBase[1]");
	set_name(0x1546f7c, "AIBodyGoalUseEntitySMG::sBases");

	// AIBodyGoalUseIdleObject
	set_name(0x14d2c70, "AIBodyGoalUseIdleObject");
	apply_type(0x14d2c70, "RTTICompound");
	del_items(0x14d3618, DELIT_SIMPLE, 8);
	apply_type(0x14d3618, "RTTIBase[1]");
	set_name(0x14d3618, "AIBodyGoalUseIdleObject::sBases");

	// AIBodyGoalUseInventoryItem
	set_name(0x14f6ba0, "AIBodyGoalUseInventoryItem");
	apply_type(0x14f6ba0, "RTTICompound");
	del_items(0x14f71c8, DELIT_SIMPLE, 8);
	apply_type(0x14f71c8, "RTTIBase[1]");
	set_name(0x14f71c8, "AIBodyGoalUseInventoryItem::sBases");

	// AIBodyGoalUseOrderedObject
	set_name(0x14d2cc4, "AIBodyGoalUseOrderedObject");
	apply_type(0x14d2cc4, "RTTICompound");
	del_items(0x14d3620, DELIT_SIMPLE, 8);
	apply_type(0x14d3620, "RTTIBase[1]");
	set_name(0x14d3620, "AIBodyGoalUseOrderedObject::sBases");

	// AIBodyGoalWeaponLoad
	set_name(0x14d2d18, "AIBodyGoalWeaponLoad");
	apply_type(0x14d2d18, "RTTICompound");
	del_items(0x14d3628, DELIT_SIMPLE, 8);
	apply_type(0x14d3628, "RTTIBase[1]");
	set_name(0x14d3628, "AIBodyGoalWeaponLoad::sBases");

	// AIBodyHumanoid
	set_name(0x14f4d14, "AIBodyHumanoid");
	apply_type(0x14f4d14, "RTTICompound");
	del_items(0x14f51d4, DELIT_SIMPLE, 8);
	apply_type(0x14f51d4, "RTTIBase[1]");
	set_name(0x14f51d4, "AIBodyHumanoid::sBases");

	// AIBodyInterface
	set_name(0x14d61f0, "AIBodyInterface");
	apply_type(0x14d61f0, "RTTICompound");
	del_items(0x14d6638, DELIT_SIMPLE, 8);
	apply_type(0x14d6638, "RTTIBase[1]");
	set_name(0x14d6638, "AIBodyInterface::sBases");

	// AIBodyInterfaceGame
	set_name(0x14f4cc0, "AIBodyInterfaceGame");
	apply_type(0x14f4cc0, "RTTICompound");
	del_items(0x14f51cc, DELIT_SIMPLE, 8);
	apply_type(0x14f51cc, "RTTIBase[1]");
	set_name(0x14f51cc, "AIBodyInterfaceGame::sBases");

	// AIBodyLadder
	set_name(0x14f4d68, "AIBodyLadder");
	apply_type(0x14f4d68, "RTTICompound");
	del_items(0x14f56ac, DELIT_SIMPLE, 8);
	apply_type(0x14f56ac, "RTTIBase[1]");
	set_name(0x14f56ac, "AIBodyLadder::sBases");

	// AIBodyLandVehicle
	set_name(0x14f4dbc, "AIBodyLandVehicle");
	apply_type(0x14f4dbc, "RTTICompound");
	del_items(0x14f56b4, DELIT_SIMPLE, 8);
	apply_type(0x14f56b4, "RTTIBase[1]");
	set_name(0x14f56b4, "AIBodyLandVehicle::sBases");

	// AIBodyMountedGun
	set_name(0x14f4f60, "AIBodyMountedGun");
	apply_type(0x14f4f60, "RTTICompound");
	del_items(0x14f56dc, DELIT_SIMPLE, 8);
	apply_type(0x14f56dc, "RTTIBase[1]");
	set_name(0x14f56dc, "AIBodyMountedGun::sBases");

	// AIBodyPlayAnimationObject
	set_name(0x14f4fb4, "AIBodyPlayAnimationObject");
	apply_type(0x14f4fb4, "RTTICompound");
	del_items(0x14f56e4, DELIT_SIMPLE, 8);
	apply_type(0x14f56e4, "RTTIBase[1]");
	set_name(0x14f56e4, "AIBodyPlayAnimationObject::sBases");

	// AIBodySoldier
	set_name(0x14f5008, "AIBodySoldier");
	apply_type(0x14f5008, "RTTICompound");
	del_items(0x14f56ec, DELIT_SIMPLE, 8);
	apply_type(0x14f56ec, "RTTIBase[1]");
	set_name(0x14f56ec, "AIBodySoldier::sBases");

	// AIBodyTroopCarrier
	set_name(0x14f4e64, "AIBodyTroopCarrier");
	apply_type(0x14f4e64, "RTTICompound");
	del_items(0x14f56cc, DELIT_SIMPLE, 8);
	apply_type(0x14f56cc, "RTTIBase[1]");
	set_name(0x14f56cc, "AIBodyTroopCarrier::sBases");

	// AIBodyTurret
	set_name(0x14f505c, "AIBodyTurret");
	apply_type(0x14f505c, "RTTICompound");
	del_items(0x14f56f4, DELIT_SIMPLE, 8);
	apply_type(0x14f56f4, "RTTIBase[1]");
	set_name(0x14f56f4, "AIBodyTurret::sBases");

	// AIBrain
	set_name(0x1544234, "AIBrain");
	apply_type(0x1544234, "RTTICompound");
	del_items(0x1546028, DELIT_SIMPLE, 8);
	apply_type(0x1546028, "RTTIBase[1]");
	set_name(0x1546028, "AIBrain::sBases");

	// AIBrainDataResource
	set_name(0x15442ec, "AIBrainDataResource");
	apply_type(0x15442ec, "RTTICompound");
	del_items(0x1546800, DELIT_SIMPLE, 8);
	apply_type(0x1546800, "RTTIBase[1]");
	set_name(0x1546800, "AIBrainDataResource::sBases");

	// AIBrainFragment
	set_name(0x1544340, "AIBrainFragment");
	apply_type(0x1544340, "RTTICompound");
	del_items(0x1546228, DELIT_SIMPLE, 8);
	apply_type(0x1546228, "RTTIBase[1]");
	set_name(0x1546228, "AIBrainFragment::sBases");

	// AIBrainFragmentResource
	set_name(0x15443b4, "AIBrainFragmentResource");
	apply_type(0x15443b4, "RTTICompound");
	del_items(0x1546230, DELIT_SIMPLE, 8);
	apply_type(0x1546230, "RTTIBase[1]");
	set_name(0x1546230, "AIBrainFragmentResource::sBases");

	// AIBrainResource
	set_name(0x1544288, "AIBrainResource");
	apply_type(0x1544288, "RTTICompound");
	del_items(0x154615c, DELIT_SIMPLE, 8);
	apply_type(0x154615c, "RTTIBase[1]");
	set_name(0x154615c, "AIBrainResource::sBases");
	del_items(0x1546164, DELIT_SIMPLE, 196);
	apply_type(0x1546164, "RTTIAttr[7]");
	set_name(0x1546164, "AIBrainResource::sAttrs");

	// AICapsule
	set_name(0x14cef6c, "AICapsule");
	apply_type(0x14cef6c, "RTTICompound");
	del_items(0x14d0f4c, DELIT_SIMPLE, 112);
	apply_type(0x14d0f4c, "RTTIAttr[4]");
	set_name(0x14d0f4c, "AICapsule::sAttrs");

	// AICharacter
	set_name(0x1545594, "AICharacter");
	apply_type(0x1545594, "RTTICompound");
	del_items(0x1546750, DELIT_SIMPLE, 8);
	apply_type(0x1546750, "RTTIBase[1]");
	set_name(0x1546750, "AICharacter::sBases");
	del_items(0x1546758, DELIT_SIMPLE, 96);
	apply_type(0x1546758, "RTTIFunction[4]");
	set_name(0x1546758, "AICharacter::sFunctions");

	// AICharacterAIBody
	set_name(0x1545738, "AICharacterAIBody");
	apply_type(0x1545738, "RTTICompound");
	del_items(0x15467b8, DELIT_SIMPLE, 8);
	apply_type(0x15467b8, "RTTIBase[1]");
	set_name(0x15467b8, "AICharacterAIBody::sBases");

	// AICharacterAnimationBehaviour
	set_name(0x1545ed4, "AICharacterAnimationBehaviour");
	apply_type(0x1545ed4, "RTTICompound");
	del_items(0x1547100, DELIT_SIMPLE, 8);
	apply_type(0x1547100, "RTTIBase[1]");
	set_name(0x1547100, "AICharacterAnimationBehaviour::sBases");
	del_items(0x1547108, DELIT_SIMPLE, 56);
	apply_type(0x1547108, "RTTIAttr[2]");
	set_name(0x1547108, "AICharacterAnimationBehaviour::sAttrs");

	// AICharacterBehaviour
	set_name(0x1545e80, "AICharacterBehaviour");
	apply_type(0x1545e80, "RTTICompound");
	del_items(0x15470d8, DELIT_SIMPLE, 8);
	apply_type(0x15470d8, "RTTIBase[1]");
	set_name(0x15470d8, "AICharacterBehaviour::sBases");

	// AICharacterBrainDataResource
	set_name(0x15457f0, "AICharacterBrainDataResource");
	apply_type(0x15457f0, "RTTICompound");
	del_items(0x1547078, DELIT_SIMPLE, 8);
	apply_type(0x1547078, "RTTIBase[1]");
	set_name(0x1547078, "AICharacterBrainDataResource::sBases");
	del_items(0x1547080, DELIT_SIMPLE, 56);
	apply_type(0x1547080, "RTTIAttr[2]");
	set_name(0x1547080, "AICharacterBrainDataResource::sAttrs");

	// AICharacterBrainFragmentAuxiliaryAnimation
	set_name(0x1545994, "AICharacterBrainFragmentAuxiliaryAnimation");
	apply_type(0x1545994, "RTTICompound");
	del_items(0x15470e0, DELIT_SIMPLE, 8);
	apply_type(0x15470e0, "RTTIBase[1]");
	set_name(0x15470e0, "AICharacterBrainFragmentAuxiliaryAnimation::sBases");

	// AICharacterBrainFragmentAuxiliaryAnimationResource
	set_name(0x15459e8, "AICharacterBrainFragmentAuxiliaryAnimationResource");
	apply_type(0x15459e8, "RTTICompound");
	del_items(0x15470e8, DELIT_SIMPLE, 8);
	apply_type(0x15470e8, "RTTIBase[1]");
	set_name(0x15470e8, "AICharacterBrainFragmentAuxiliaryAnimationResource::sBases");

	// AICharacterBrainFragmentCommunication
	set_name(0x1545844, "AICharacterBrainFragmentCommunication");
	apply_type(0x1545844, "RTTICompound");
	del_items(0x15470b8, DELIT_SIMPLE, 8);
	apply_type(0x15470b8, "RTTIBase[1]");
	set_name(0x15470b8, "AICharacterBrainFragmentCommunication::sBases");

	// AICharacterBrainFragmentCommunicationResource
	set_name(0x1545898, "AICharacterBrainFragmentCommunicationResource");
	apply_type(0x1545898, "RTTICompound");
	del_items(0x15470c0, DELIT_SIMPLE, 8);
	apply_type(0x15470c0, "RTTIBase[1]");
	set_name(0x15470c0, "AICharacterBrainFragmentCommunicationResource::sBases");

	// AICharacterBrainFragmentFacialAnimation
	set_name(0x1545a3c, "AICharacterBrainFragmentFacialAnimation");
	apply_type(0x1545a3c, "RTTICompound");
	del_items(0x15470f0, DELIT_SIMPLE, 8);
	apply_type(0x15470f0, "RTTIBase[1]");
	set_name(0x15470f0, "AICharacterBrainFragmentFacialAnimation::sBases");

	// AICharacterBrainFragmentFacialAnimationResource
	set_name(0x1545a90, "AICharacterBrainFragmentFacialAnimationResource");
	apply_type(0x1545a90, "RTTICompound");
	del_items(0x15470f8, DELIT_SIMPLE, 8);
	apply_type(0x15470f8, "RTTIBase[1]");
	set_name(0x15470f8, "AICharacterBrainFragmentFacialAnimationResource::sBases");

	// AICharacterBrainFragmentVision
	set_name(0x15458ec, "AICharacterBrainFragmentVision");
	apply_type(0x15458ec, "RTTICompound");
	del_items(0x15470c8, DELIT_SIMPLE, 8);
	apply_type(0x15470c8, "RTTIBase[1]");
	set_name(0x15470c8, "AICharacterBrainFragmentVision::sBases");

	// AICharacterBrainFragmentVisionResource
	set_name(0x1545940, "AICharacterBrainFragmentVisionResource");
	apply_type(0x1545940, "RTTICompound");
	del_items(0x15470d0, DELIT_SIMPLE, 8);
	apply_type(0x15470d0, "RTTIBase[1]");
	set_name(0x15470d0, "AICharacterBrainFragmentVisionResource::sBases");

	// AICharacterController
	set_name(0x154578c, "AICharacterController");
	apply_type(0x154578c, "RTTICompound");
	del_items(0x154703c, DELIT_SIMPLE, 8);
	apply_type(0x154703c, "RTTIBase[1]");
	set_name(0x154703c, "AICharacterController::sBases");

	// AICharacterDaemon
	set_name(0x1545ae4, "AICharacterDaemon");
	apply_type(0x1545ae4, "RTTICompound");
	del_items(0x1547140, DELIT_SIMPLE, 8);
	apply_type(0x1547140, "RTTIBase[1]");
	set_name(0x1547140, "AICharacterDaemon::sBases");

	// AICharacterLookContext
	set_name(0x1545f7c, "AICharacterLookContext");
	apply_type(0x1545f7c, "RTTICompound");
	del_items(0x1546928, DELIT_SIMPLE, 8);
	apply_type(0x1546928, "RTTIBase[1]");
	set_name(0x1546928, "AICharacterLookContext::sBases");
	del_items(0x1546930, DELIT_SIMPLE, 280);
	apply_type(0x1546930, "RTTIAttr[10]");
	set_name(0x1546930, "AICharacterLookContext::sAttrs");

	// AICharacterMoveContext
	set_name(0x1545f28, "AICharacterMoveContext");
	apply_type(0x1545f28, "RTTICompound");
	del_items(0x1547188, DELIT_SIMPLE, 8);
	apply_type(0x1547188, "RTTIBase[1]");
	set_name(0x1547188, "AICharacterMoveContext::sBases");
	del_items(0x1547190, DELIT_SIMPLE, 84);
	apply_type(0x1547190, "RTTIAttr[3]");
	set_name(0x1547190, "AICharacterMoveContext::sAttrs");

	// AICharacterMover
	set_name(0x1545690, "AICharacterMover");
	apply_type(0x1545690, "RTTICompound");
	del_items(0x1547044, DELIT_SIMPLE, 8);
	apply_type(0x1547044, "RTTIBase[1]");
	set_name(0x1547044, "AICharacterMover::sBases");

	// AICharacterMoverResource
	set_name(0x15456e4, "AICharacterMoverResource");
	apply_type(0x15456e4, "RTTICompound");
	del_items(0x1547054, DELIT_SIMPLE, 8);
	apply_type(0x1547054, "RTTIBase[1]");
	set_name(0x1547054, "AICharacterMoverResource::sBases");
	del_items(0x154705c, DELIT_SIMPLE, 28);
	apply_type(0x154705c, "RTTIAttr[1]");
	set_name(0x154705c, "AICharacterMoverResource::sAttrs");

	// AICharacterRep
	set_name(0x154563c, "AICharacterRep");
	apply_type(0x154563c, "RTTICompound");
	del_items(0x154704c, DELIT_SIMPLE, 8);
	apply_type(0x154704c, "RTTIBase[1]");
	set_name(0x154704c, "AICharacterRep::sBases");

	// AICharacterResource
	set_name(0x15455e8, "AICharacterResource");
	apply_type(0x15455e8, "RTTICompound");
	del_items(0x1546748, DELIT_SIMPLE, 8);
	apply_type(0x1546748, "RTTIBase[1]");
	set_name(0x1546748, "AICharacterResource::sBases");

	// AICharacterSkill
	set_name(0x1545b38, "AICharacterSkill");
	apply_type(0x1545b38, "RTTICompound");

	// AICharacterSkillCommunicate
	set_name(0x1545b8c, "AICharacterSkillCommunicate");
	apply_type(0x1545b8c, "RTTICompound");
	del_items(0x1547148, DELIT_SIMPLE, 16);
	apply_type(0x1547148, "RTTIBase[2]");
	set_name(0x1547148, "AICharacterSkillCommunicate::sBases");

	// AICharacterSkillFacialExpression
	set_name(0x1545d84, "AICharacterSkillFacialExpression");
	apply_type(0x1545d84, "RTTICompound");
	del_items(0x1547204, DELIT_SIMPLE, 16);
	apply_type(0x1547204, "RTTIBase[2]");
	set_name(0x1547204, "AICharacterSkillFacialExpression::sBases");

	// AICharacterSkillFacialGesture
	set_name(0x1545dd8, "AICharacterSkillFacialGesture");
	apply_type(0x1545dd8, "RTTICompound");
	del_items(0x1547214, DELIT_SIMPLE, 8);
	apply_type(0x1547214, "RTTIBase[1]");
	set_name(0x1547214, "AICharacterSkillFacialGesture::sBases");

	// AICharacterSkillGesture
	set_name(0x1545be0, "AICharacterSkillGesture");
	apply_type(0x1545be0, "RTTICompound");
	del_items(0x1547158, DELIT_SIMPLE, 16);
	apply_type(0x1547158, "RTTIBase[2]");
	set_name(0x1547158, "AICharacterSkillGesture::sBases");

	// AICharacterSkillIdle
	set_name(0x1545e2c, "AICharacterSkillIdle");
	apply_type(0x1545e2c, "RTTICompound");
	del_items(0x154721c, DELIT_SIMPLE, 16);
	apply_type(0x154721c, "RTTIBase[2]");
	set_name(0x154721c, "AICharacterSkillIdle::sBases");

	// AICharacterSkillLookAt
	set_name(0x1545c34, "AICharacterSkillLookAt");
	apply_type(0x1545c34, "RTTICompound");
	del_items(0x1547168, DELIT_SIMPLE, 16);
	apply_type(0x1547168, "RTTIBase[2]");
	set_name(0x1547168, "AICharacterSkillLookAt::sBases");

	// AICharacterSkillMove
	set_name(0x1545c88, "AICharacterSkillMove");
	apply_type(0x1545c88, "RTTICompound");
	del_items(0x1547178, DELIT_SIMPLE, 16);
	apply_type(0x1547178, "RTTIBase[2]");
	set_name(0x1547178, "AICharacterSkillMove::sBases");

	// AICharacterSkillStepTowards
	set_name(0x1545cdc, "AICharacterSkillStepTowards");
	apply_type(0x1545cdc, "RTTICompound");
	del_items(0x15471e4, DELIT_SIMPLE, 16);
	apply_type(0x15471e4, "RTTIBase[2]");
	set_name(0x15471e4, "AICharacterSkillStepTowards::sBases");

	// AICharacterSkillUseEntity
	set_name(0x1545d30, "AICharacterSkillUseEntity");
	apply_type(0x1545d30, "RTTICompound");
	del_items(0x15471f4, DELIT_SIMPLE, 16);
	apply_type(0x15471f4, "RTTIBase[2]");
	set_name(0x15471f4, "AICharacterSkillUseEntity::sBases");

	// AICloseCombatWeaponInterface
	set_name(0x14f83cc, "AICloseCombatWeaponInterface");
	apply_type(0x14f83cc, "RTTICompound");
	del_items(0x14f85dc, DELIT_SIMPLE, 8);
	apply_type(0x14f85dc, "RTTIBase[1]");
	set_name(0x14f85dc, "AICloseCombatWeaponInterface::sBases");

	// AICollectableObject
	set_name(0x14cec3c, "AICollectableObject");
	apply_type(0x14cec3c, "RTTICompound");

	// AICommunicationBehaviour
	set_name(0x15446c4, "AICommunicationBehaviour");
	apply_type(0x15446c4, "RTTICompound");
	del_items(0x1546864, DELIT_SIMPLE, 8);
	apply_type(0x1546864, "RTTIBase[1]");
	set_name(0x1546864, "AICommunicationBehaviour::sBases");
	del_items(0x154686c, DELIT_SIMPLE, 112);
	apply_type(0x154686c, "RTTIAttr[4]");
	set_name(0x154686c, "AICommunicationBehaviour::sAttrs");

	// AIConditional
	set_name(0x14ced64, "AIConditional");
	apply_type(0x14ced64, "RTTICompound");
	del_items(0x14d0564, DELIT_SIMPLE, 28);
	apply_type(0x14d0564, "RTTIAttr[1]");
	set_name(0x14d0564, "AIConditional::sAttrs");

	// AIContextResource
	set_name(0x14cfb00, "AIContextResource");
	apply_type(0x14cfb00, "RTTICompound");
	del_items(0x14d1758, DELIT_SIMPLE, 8);
	apply_type(0x14d1758, "RTTIBase[1]");
	set_name(0x14d1758, "AIContextResource::sBases");
	del_items(0x14d1760, DELIT_SIMPLE, 1344);
	apply_type(0x14d1760, "RTTIAttr[48]");
	set_name(0x14d1760, "AIContextResource::sAttrs");
	del_items(0x14d1ca0, DELIT_SIMPLE, 12);
	apply_type(0x14d1ca0, "RTTIMessageHandler[1]");
	set_name(0x14d1ca0, "AIContextResource::sMessageHandlers");

	// AICoverManager
	set_name(0x14d7240, "AICoverManager");
	apply_type(0x14d7240, "RTTICompound");
	del_items(0x14d8c70, DELIT_SIMPLE, 8);
	apply_type(0x14d8c70, "RTTIBase[1]");
	set_name(0x14d8c70, "AICoverManager::sBases");
	del_items(0x14d8c78, DELIT_SIMPLE, 56);
	apply_type(0x14d8c78, "RTTIAttr[2]");
	set_name(0x14d8c78, "AICoverManager::sAttrs");

	// AICoverPositionPickerResource
	set_name(0x14d6bd4, "AICoverPositionPickerResource");
	apply_type(0x14d6bd4, "RTTICompound");
	del_items(0x14d8a4c, DELIT_SIMPLE, 8);
	apply_type(0x14d8a4c, "RTTIBase[1]");
	set_name(0x14d8a4c, "AICoverPositionPickerResource::sBases");

	// AIDangerArea
	set_name(0x14cedc8, "AIDangerArea");
	apply_type(0x14cedc8, "RTTICompound");
	del_items(0x14d0fbc, DELIT_SIMPLE, 8);
	apply_type(0x14d0fbc, "RTTIBase[1]");
	set_name(0x14d0fbc, "AIDangerArea::sBases");
	del_items(0x14d0fc4, DELIT_SIMPLE, 112);
	apply_type(0x14d0fc4, "RTTIAttr[4]");
	set_name(0x14d0fc4, "AIDangerArea::sAttrs");

	// AIDangerAreaCapsule
	set_name(0x14cee70, "AIDangerAreaCapsule");
	apply_type(0x14cee70, "RTTICompound");
	del_items(0x14d1044, DELIT_SIMPLE, 16);
	apply_type(0x14d1044, "RTTIBase[2]");
	set_name(0x14d1044, "AIDangerAreaCapsule::sBases");

	// AIDangerAreaOrientedBoudingBox
	set_name(0x14ceec4, "AIDangerAreaOrientedBoudingBox");
	apply_type(0x14ceec4, "RTTICompound");
	del_items(0x14d1054, DELIT_SIMPLE, 8);
	apply_type(0x14d1054, "RTTIBase[1]");
	set_name(0x14d1054, "AIDangerAreaOrientedBoudingBox::sBases");

	// AIDangerAreaSphere
	set_name(0x14cee1c, "AIDangerAreaSphere");
	apply_type(0x14cee1c, "RTTICompound");
	del_items(0x14d1034, DELIT_SIMPLE, 16);
	apply_type(0x14d1034, "RTTIBase[2]");
	set_name(0x14d1034, "AIDangerAreaSphere::sBases");

	// AIDarkBox
	set_name(0x14cebe8, "AIDarkBox");
	apply_type(0x14cebe8, "RTTICompound");
	del_items(0x14d10b8, DELIT_SIMPLE, 8);
	apply_type(0x14d10b8, "RTTIBase[1]");
	set_name(0x14d10b8, "AIDarkBox::sBases");
	del_items(0x14d10c0, DELIT_SIMPLE, 56);
	apply_type(0x14d10c0, "RTTIAttr[2]");
	set_name(0x14d10c0, "AIDarkBox::sAttrs");

	// AIDirectableAgent
	set_name(0x14cefc0, "AIDirectableAgent");
	apply_type(0x14cefc0, "RTTICompound");
	del_items(0x14d05d8, DELIT_SIMPLE, 8);
	apply_type(0x14d05d8, "RTTIBase[1]");
	set_name(0x14d05d8, "AIDirectableAgent::sBases");
	del_items(0x14d05e0, DELIT_SIMPLE, 456);
	apply_type(0x14d05e0, "RTTIFunction[19]");
	set_name(0x14d05e0, "AIDirectableAgent::sFunctions");

	// AIDynamicWaypointGrid
	set_name(0x14d6fc8, "AIDynamicWaypointGrid");
	apply_type(0x14d6fc8, "RTTICompound");
	del_items(0x14d7720, DELIT_SIMPLE, 8);
	apply_type(0x14d7720, "RTTIBase[1]");
	set_name(0x14d7720, "AIDynamicWaypointGrid::sBases");
	del_items(0x14d7728, DELIT_SIMPLE, 28);
	apply_type(0x14d7728, "RTTIAttr[1]");
	set_name(0x14d7728, "AIDynamicWaypointGrid::sAttrs");
	del_items(0x14d7744, DELIT_SIMPLE, 12);
	apply_type(0x14d7744, "RTTIMessageHandler[1]");
	set_name(0x14d7744, "AIDynamicWaypointGrid::sMessageHandlers");

	// AIEmplacedWeaponObject
	set_name(0x14cf014, "AIEmplacedWeaponObject");
	apply_type(0x14cf014, "RTTICompound");

	// AIEscortPositionPickerResource
	set_name(0x14d6b80, "AIEscortPositionPickerResource");
	apply_type(0x14d6b80, "RTTICompound");
	del_items(0x14d8a44, DELIT_SIMPLE, 8);
	apply_type(0x14d8a44, "RTTIBase[1]");
	set_name(0x14d8a44, "AIEscortPositionPickerResource::sBases");

	// AIFaction
	set_name(0x14cf0a8, "AIFaction");
	apply_type(0x14cf0a8, "RTTICompound");
	del_items(0x14d166c, DELIT_SIMPLE, 8);
	apply_type(0x14d166c, "RTTIBase[1]");
	set_name(0x14d166c, "AIFaction::sBases");
	del_items(0x14d1674, DELIT_SIMPLE, 168);
	apply_type(0x14d1674, "RTTIAttr[6]");
	set_name(0x14d1674, "AIFaction::sAttrs");
	del_items(0x14d171c, DELIT_SIMPLE, 48);
	apply_type(0x14d171c, "RTTIFunction[2]");
	set_name(0x14d171c, "AIFaction::sFunctions");
	del_items(0x14d174c, DELIT_SIMPLE, 12);
	apply_type(0x14d174c, "RTTIMessageHandler[1]");
	set_name(0x14d174c, "AIFaction::sMessageHandlers");

	// AIFleeDangerAreaPositionPickerResource
	set_name(0x14d6c38, "AIFleeDangerAreaPositionPickerResource");
	apply_type(0x14d6c38, "RTTICompound");
	del_items(0x14d8a54, DELIT_SIMPLE, 8);
	apply_type(0x14d8a54, "RTTIBase[1]");
	set_name(0x14d8a54, "AIFleeDangerAreaPositionPickerResource::sBases");

	// AIFormation
	set_name(0x14d3394, "AIFormation");
	apply_type(0x14d3394, "RTTICompound");
	del_items(0x14d3d44, DELIT_SIMPLE, 8);
	apply_type(0x14d3d44, "RTTIBase[1]");
	set_name(0x14d3d44, "AIFormation::sBases");
	del_items(0x14d3d4c, DELIT_SIMPLE, 84);
	apply_type(0x14d3d4c, "RTTIAttr[3]");
	set_name(0x14d3d4c, "AIFormation::sAttrs");

	// AIFormationPosition
	set_name(0x14d3340, "AIFormationPosition");
	apply_type(0x14d3340, "RTTICompound");
	del_items(0x14d3cf0, DELIT_SIMPLE, 84);
	apply_type(0x14d3cf0, "RTTIAttr[3]");
	set_name(0x14d3cf0, "AIFormationPosition::sAttrs");

	// AIGroup
	set_name(0x14d74ac, "AIGroup");
	apply_type(0x14d74ac, "RTTICompound");
	del_items(0x14d909c, DELIT_SIMPLE, 16);
	apply_type(0x14d909c, "RTTIBase[2]");
	set_name(0x14d909c, "AIGroup::sBases");
	del_items(0x14d90ac, DELIT_SIMPLE, 84);
	apply_type(0x14d90ac, "RTTIAttr[3]");
	set_name(0x14d90ac, "AIGroup::sAttrs");
	del_items(0x14d9100, DELIT_SIMPLE, 720);
	apply_type(0x14d9100, "RTTIFunction[30]");
	set_name(0x14d9100, "AIGroup::sFunctions");

	// AIGroupGame
	set_name(0x14f47f0, "AIGroupGame");
	apply_type(0x14f47f0, "RTTICompound");
	del_items(0x14f5104, DELIT_SIMPLE, 8);
	apply_type(0x14f5104, "RTTIBase[1]");
	set_name(0x14f5104, "AIGroupGame::sBases");
	del_items(0x14f510c, DELIT_SIMPLE, 192);
	apply_type(0x14f510c, "RTTIFunction[8]");
	set_name(0x14f510c, "AIGroupGame::sFunctions");

	// AIHTNPlannerDaemon
	set_name(0x14d40c8, "AIHTNPlannerDaemon");
	apply_type(0x14d40c8, "RTTICompound");
	del_items(0x14d43c0, DELIT_SIMPLE, 8);
	apply_type(0x14d43c0, "RTTIBase[1]");
	set_name(0x14d43c0, "AIHTNPlannerDaemon::sBases");

	// AIHTNPlannerDaemonAirStrafe
	set_name(0x14d41c4, "AIHTNPlannerDaemonAirStrafe");
	apply_type(0x14d41c4, "RTTICompound");
	del_items(0x14d44e8, DELIT_SIMPLE, 8);
	apply_type(0x14d44e8, "RTTIBase[1]");
	set_name(0x14d44e8, "AIHTNPlannerDaemonAirStrafe::sBases");

	// AIHTNPlannerDaemonAlertLevel
	set_name(0x14d4218, "AIHTNPlannerDaemonAlertLevel");
	apply_type(0x14d4218, "RTTICompound");
	del_items(0x14d44f0, DELIT_SIMPLE, 8);
	apply_type(0x14d44f0, "RTTIBase[1]");
	set_name(0x14d44f0, "AIHTNPlannerDaemonAlertLevel::sBases");

	// AIHTNPlannerDaemonBodyState
	set_name(0x14f5bf0, "AIHTNPlannerDaemonBodyState");
	apply_type(0x14f5bf0, "RTTICompound");
	del_items(0x14f67f0, DELIT_SIMPLE, 8);
	apply_type(0x14f67f0, "RTTIBase[1]");
	set_name(0x14f67f0, "AIHTNPlannerDaemonBodyState::sBases");

	// AIHTNPlannerDaemonCallForReinforcements
	set_name(0x14f5c98, "AIHTNPlannerDaemonCallForReinforcements");
	apply_type(0x14f5c98, "RTTICompound");
	del_items(0x14f6800, DELIT_SIMPLE, 8);
	apply_type(0x14f6800, "RTTIBase[1]");
	set_name(0x14f6800, "AIHTNPlannerDaemonCallForReinforcements::sBases");

	// AIHTNPlannerDaemonCaptureTrooper
	set_name(0x14f5a4c, "AIHTNPlannerDaemonCaptureTrooper");
	apply_type(0x14f5a4c, "RTTICompound");
	del_items(0x14f67c8, DELIT_SIMPLE, 8);
	apply_type(0x14f67c8, "RTTIBase[1]");
	set_name(0x14f67c8, "AIHTNPlannerDaemonCaptureTrooper::sBases");

	// AIHTNPlannerDaemonDestructibles
	set_name(0x14f59a4, "AIHTNPlannerDaemonDestructibles");
	apply_type(0x14f59a4, "RTTICompound");
	del_items(0x14f67b8, DELIT_SIMPLE, 8);
	apply_type(0x14f67b8, "RTTIBase[1]");
	set_name(0x14f67b8, "AIHTNPlannerDaemonDestructibles::sBases");

	// AIHTNPlannerDaemonFindAttackLocation
	set_name(0x14d4500, "AIHTNPlannerDaemonFindAttackLocation");
	apply_type(0x14d4500, "RTTICompound");
	del_items(0x14d5b60, DELIT_SIMPLE, 8);
	apply_type(0x14d5b60, "RTTIBase[1]");
	set_name(0x14d5b60, "AIHTNPlannerDaemonFindAttackLocation::sBases");

	// AIHTNPlannerDaemonFindCoverLocation
	set_name(0x14d4554, "AIHTNPlannerDaemonFindCoverLocation");
	apply_type(0x14d4554, "RTTICompound");
	del_items(0x14d5b90, DELIT_SIMPLE, 8);
	apply_type(0x14d5b90, "RTTIBase[1]");
	set_name(0x14d5b90, "AIHTNPlannerDaemonFindCoverLocation::sBases");

	// AIHTNPlannerDaemonFindGrenadeTarget
	set_name(0x14f5b48, "AIHTNPlannerDaemonFindGrenadeTarget");
	apply_type(0x14f5b48, "RTTICompound");
	del_items(0x14f67e0, DELIT_SIMPLE, 8);
	apply_type(0x14f67e0, "RTTIBase[1]");
	set_name(0x14f67e0, "AIHTNPlannerDaemonFindGrenadeTarget::sBases");

	// AIHTNPlannerDaemonFindLapaIdle
	set_name(0x14d45a8, "AIHTNPlannerDaemonFindLapaIdle");
	apply_type(0x14d45a8, "RTTICompound");
	del_items(0x14d5b98, DELIT_SIMPLE, 8);
	apply_type(0x14d5b98, "RTTIBase[1]");
	set_name(0x14d5b98, "AIHTNPlannerDaemonFindLapaIdle::sBases");

	// AIHTNPlannerDaemonFindLocation
	set_name(0x14d45fc, "AIHTNPlannerDaemonFindLocation");
	apply_type(0x14d45fc, "RTTICompound");
	del_items(0x14d5b58, DELIT_SIMPLE, 8);
	apply_type(0x14d5b58, "RTTIBase[1]");
	set_name(0x14d5b58, "AIHTNPlannerDaemonFindLocation::sBases");

	// AIHTNPlannerDaemonFindLocationShared
	set_name(0x14d4650, "AIHTNPlannerDaemonFindLocationShared");
	apply_type(0x14d4650, "RTTICompound");
	del_items(0x14d5b50, DELIT_SIMPLE, 8);
	apply_type(0x14d5b50, "RTTIBase[1]");
	set_name(0x14d5b50, "AIHTNPlannerDaemonFindLocationShared::sBases");

	// AIHTNPlannerDaemonFindPlayerDeathCamLocation
	set_name(0x14f5af4, "AIHTNPlannerDaemonFindPlayerDeathCamLocation");
	apply_type(0x14f5af4, "RTTICompound");
	del_items(0x14f67d8, DELIT_SIMPLE, 8);
	apply_type(0x14f67d8, "RTTIBase[1]");
	set_name(0x14f67d8, "AIHTNPlannerDaemonFindPlayerDeathCamLocation::sBases");

	// AIHTNPlannerDaemonFindSearchLocation
	set_name(0x14d46a4, "AIHTNPlannerDaemonFindSearchLocation");
	apply_type(0x14d46a4, "RTTICompound");
	del_items(0x14d5ba8, DELIT_SIMPLE, 8);
	apply_type(0x14d5ba8, "RTTIBase[1]");
	set_name(0x14d5ba8, "AIHTNPlannerDaemonFindSearchLocation::sBases");

	// AIHTNPlannerDaemonFleeDangerAreaLocation
	set_name(0x14d474c, "AIHTNPlannerDaemonFleeDangerAreaLocation");
	apply_type(0x14d474c, "RTTICompound");
	del_items(0x14d5bb8, DELIT_SIMPLE, 8);
	apply_type(0x14d5bb8, "RTTIBase[1]");
	set_name(0x14d5bb8, "AIHTNPlannerDaemonFleeDangerAreaLocation::sBases");

	// AIHTNPlannerDaemonFriendlies
	set_name(0x14d4848, "AIHTNPlannerDaemonFriendlies");
	apply_type(0x14d4848, "RTTICompound");
	del_items(0x14d5bc8, DELIT_SIMPLE, 8);
	apply_type(0x14d5bc8, "RTTIBase[1]");
	set_name(0x14d5bc8, "AIHTNPlannerDaemonFriendlies::sBases");

	// AIHTNPlannerDaemonGameInfo
	set_name(0x14f59f8, "AIHTNPlannerDaemonGameInfo");
	apply_type(0x14f59f8, "RTTICompound");
	del_items(0x14f67c0, DELIT_SIMPLE, 8);
	apply_type(0x14f67c0, "RTTIBase[1]");
	set_name(0x14f67c0, "AIHTNPlannerDaemonGameInfo::sBases");

	// AIHTNPlannerDaemonIndividual
	set_name(0x14d411c, "AIHTNPlannerDaemonIndividual");
	apply_type(0x14d411c, "RTTICompound");
	del_items(0x14d43c8, DELIT_SIMPLE, 8);
	apply_type(0x14d43c8, "RTTIBase[1]");
	set_name(0x14d43c8, "AIHTNPlannerDaemonIndividual::sBases");

	// AIHTNPlannerDaemonInventory
	set_name(0x14f5b9c, "AIHTNPlannerDaemonInventory");
	apply_type(0x14f5b9c, "RTTICompound");
	del_items(0x14f67e8, DELIT_SIMPLE, 8);
	apply_type(0x14f67e8, "RTTIBase[1]");
	set_name(0x14f67e8, "AIHTNPlannerDaemonInventory::sBases");

	// AIHTNPlannerDaemonLeanAndPeekAreas
	set_name(0x14f5758, "AIHTNPlannerDaemonLeanAndPeekAreas");
	apply_type(0x14f5758, "RTTICompound");
	del_items(0x14f6778, DELIT_SIMPLE, 8);
	apply_type(0x14f6778, "RTTIBase[1]");
	set_name(0x14f6778, "AIHTNPlannerDaemonLeanAndPeekAreas::sBases");

	// AIHTNPlannerDaemonMiniDrone
	set_name(0x14f5c44, "AIHTNPlannerDaemonMiniDrone");
	apply_type(0x14f5c44, "RTTICompound");
	del_items(0x14f67f8, DELIT_SIMPLE, 8);
	apply_type(0x14f67f8, "RTTIBase[1]");
	set_name(0x14f67f8, "AIHTNPlannerDaemonMiniDrone::sBases");

	// AIHTNPlannerDaemonMountedGuns
	set_name(0x14d49ec, "AIHTNPlannerDaemonMountedGuns");
	apply_type(0x14d49ec, "RTTICompound");
	del_items(0x14d5bf0, DELIT_SIMPLE, 8);
	apply_type(0x14d5bf0, "RTTIBase[1]");
	set_name(0x14d5bf0, "AIHTNPlannerDaemonMountedGuns::sBases");

	// AIHTNPlannerDaemonMultiplayerMissionInfo
	set_name(0x14f57ac, "AIHTNPlannerDaemonMultiplayerMissionInfo");
	apply_type(0x14f57ac, "RTTICompound");
	del_items(0x14f6780, DELIT_SIMPLE, 8);
	apply_type(0x14f6780, "RTTIBase[1]");
	set_name(0x14f6780, "AIHTNPlannerDaemonMultiplayerMissionInfo::sBases");

	// AIHTNPlannerDaemonMultiplayerTerrainInfo
	set_name(0x14f5800, "AIHTNPlannerDaemonMultiplayerTerrainInfo");
	apply_type(0x14f5800, "RTTICompound");
	del_items(0x14f6788, DELIT_SIMPLE, 8);
	apply_type(0x14f6788, "RTTIBase[1]");
	set_name(0x14f6788, "AIHTNPlannerDaemonMultiplayerTerrainInfo::sBases");

	// AIHTNPlannerDaemonObjectStates
	set_name(0x14f5854, "AIHTNPlannerDaemonObjectStates");
	apply_type(0x14f5854, "RTTICompound");
	del_items(0x14f6790, DELIT_SIMPLE, 8);
	apply_type(0x14f6790, "RTTIBase[1]");
	set_name(0x14f6790, "AIHTNPlannerDaemonObjectStates::sBases");

	// AIHTNPlannerDaemonPathFinder
	set_name(0x14d47a0, "AIHTNPlannerDaemonPathFinder");
	apply_type(0x14d47a0, "RTTICompound");
	del_items(0x14d5b68, DELIT_SIMPLE, 8);
	apply_type(0x14d5b68, "RTTIBase[1]");
	set_name(0x14d5b68, "AIHTNPlannerDaemonPathFinder::sBases");

	// AIHTNPlannerDaemonPlayerInfo
	set_name(0x14f58a8, "AIHTNPlannerDaemonPlayerInfo");
	apply_type(0x14f58a8, "RTTICompound");
	del_items(0x14f6798, DELIT_SIMPLE, 8);
	apply_type(0x14f6798, "RTTIBase[1]");
	set_name(0x14f6798, "AIHTNPlannerDaemonPlayerInfo::sBases");

	// AIHTNPlannerDaemonSpecialMoves
	set_name(0x14f58fc, "AIHTNPlannerDaemonSpecialMoves");
	apply_type(0x14f58fc, "RTTICompound");
	del_items(0x14f67a0, DELIT_SIMPLE, 8);
	apply_type(0x14f67a0, "RTTIBase[1]");
	set_name(0x14f67a0, "AIHTNPlannerDaemonSpecialMoves::sBases");

	// AIHTNPlannerDaemonSquad
	set_name(0x14d4170, "AIHTNPlannerDaemonSquad");
	apply_type(0x14d4170, "RTTICompound");
	del_items(0x14d43d0, DELIT_SIMPLE, 8);
	apply_type(0x14d43d0, "RTTIBase[1]");
	set_name(0x14d43d0, "AIHTNPlannerDaemonSquad::sBases");

	// AIHTNPlannerDaemonSquadState
	set_name(0x14d4944, "AIHTNPlannerDaemonSquadState");
	apply_type(0x14d4944, "RTTICompound");
	del_items(0x14d5be0, DELIT_SIMPLE, 8);
	apply_type(0x14d5be0, "RTTIBase[1]");
	set_name(0x14d5be0, "AIHTNPlannerDaemonSquadState::sBases");

	// AIHTNPlannerDaemonSquadStrategy
	set_name(0x14d4998, "AIHTNPlannerDaemonSquadStrategy");
	apply_type(0x14d4998, "RTTICompound");
	del_items(0x14d5be8, DELIT_SIMPLE, 8);
	apply_type(0x14d5be8, "RTTIBase[1]");
	set_name(0x14d5be8, "AIHTNPlannerDaemonSquadStrategy::sBases");

	// AIHTNPlannerDaemonTeamMember
	set_name(0x14d47f4, "AIHTNPlannerDaemonTeamMember");
	apply_type(0x14d47f4, "RTTICompound");
	del_items(0x14d5bc0, DELIT_SIMPLE, 8);
	apply_type(0x14d5bc0, "RTTIBase[1]");
	set_name(0x14d5bc0, "AIHTNPlannerDaemonTeamMember::sBases");

	// AIHTNPlannerDaemonTerrainInfo
	set_name(0x14d489c, "AIHTNPlannerDaemonTerrainInfo");
	apply_type(0x14d489c, "RTTICompound");
	del_items(0x14d5bd0, DELIT_SIMPLE, 8);
	apply_type(0x14d5bd0, "RTTIBase[1]");
	set_name(0x14d5bd0, "AIHTNPlannerDaemonTerrainInfo::sBases");

	// AIHTNPlannerDaemonThreatReappearanceLocation
	set_name(0x14d48f0, "AIHTNPlannerDaemonThreatReappearanceLocation");
	apply_type(0x14d48f0, "RTTICompound");
	del_items(0x14d5bd8, DELIT_SIMPLE, 8);
	apply_type(0x14d5bd8, "RTTIBase[1]");
	set_name(0x14d5bd8, "AIHTNPlannerDaemonThreatReappearanceLocation::sBases");

	// AIHTNPlannerDaemonTroopCarrier
	set_name(0x14f5aa0, "AIHTNPlannerDaemonTroopCarrier");
	apply_type(0x14f5aa0, "RTTICompound");
	del_items(0x14f67d0, DELIT_SIMPLE, 8);
	apply_type(0x14f67d0, "RTTIBase[1]");
	set_name(0x14f67d0, "AIHTNPlannerDaemonTroopCarrier::sBases");

	// AIHTNPlannerDaemonUseLocations
	set_name(0x14f5950, "AIHTNPlannerDaemonUseLocations");
	apply_type(0x14f5950, "RTTICompound");
	del_items(0x14f67b0, DELIT_SIMPLE, 8);
	apply_type(0x14f67b0, "RTTIBase[1]");
	set_name(0x14f67b0, "AIHTNPlannerDaemonUseLocations::sBases");

	// AIHTNPlannerDaemonVisibility
	set_name(0x14d4a40, "AIHTNPlannerDaemonVisibility");
	apply_type(0x14d4a40, "RTTICompound");
	del_items(0x14d5bf8, DELIT_SIMPLE, 8);
	apply_type(0x14d5bf8, "RTTIBase[1]");
	set_name(0x14d5bf8, "AIHTNPlannerDaemonVisibility::sBases");

	// AIHTNPlannerResource
	set_name(0x14d3f24, "AIHTNPlannerResource");
	apply_type(0x14d3f24, "RTTICompound");
	del_items(0x14d43e0, DELIT_SIMPLE, 8);
	apply_type(0x14d43e0, "RTTIBase[1]");
	set_name(0x14d43e0, "AIHTNPlannerResource::sBases");
	del_items(0x14d43e8, DELIT_SIMPLE, 112);
	apply_type(0x14d43e8, "RTTIAttr[4]");
	set_name(0x14d43e8, "AIHTNPlannerResource::sAttrs");

	// AIHTNPrimitiveTask
	set_name(0x14d4a94, "AIHTNPrimitiveTask");
	apply_type(0x14d4a94, "RTTICompound");
	del_items(0x14d5b70, DELIT_SIMPLE, 8);
	apply_type(0x14d5b70, "RTTIBase[1]");
	set_name(0x14d5b70, "AIHTNPrimitiveTask::sBases");

	// AIHTNPrimitiveTaskAgent
	set_name(0x14d4ae8, "AIHTNPrimitiveTaskAgent");
	apply_type(0x14d4ae8, "RTTICompound");
	del_items(0x14d5b78, DELIT_SIMPLE, 8);
	apply_type(0x14d5b78, "RTTIBase[1]");
	set_name(0x14d5b78, "AIHTNPrimitiveTaskAgent::sBases");

	// AIHTNPrimitiveTaskAimAtEntity
	set_name(0x14d4be4, "AIHTNPrimitiveTaskAimAtEntity");
	apply_type(0x14d4be4, "RTTICompound");
	del_items(0x14d5c00, DELIT_SIMPLE, 8);
	apply_type(0x14d5c00, "RTTIBase[1]");
	set_name(0x14d5c00, "AIHTNPrimitiveTaskAimAtEntity::sBases");

	// AIHTNPrimitiveTaskAimInHeading
	set_name(0x14d4c38, "AIHTNPrimitiveTaskAimInHeading");
	apply_type(0x14d4c38, "RTTICompound");
	del_items(0x14d5c08, DELIT_SIMPLE, 8);
	apply_type(0x14d5c08, "RTTIBase[1]");
	set_name(0x14d5c08, "AIHTNPrimitiveTaskAimInHeading::sBases");

	// AIHTNPrimitiveTaskAirStrafe
	set_name(0x14f5cf0, "AIHTNPrimitiveTaskAirStrafe");
	apply_type(0x14f5cf0, "RTTICompound");
	del_items(0x14f6808, DELIT_SIMPLE, 8);
	apply_type(0x14f6808, "RTTIBase[1]");
	set_name(0x14f6808, "AIHTNPrimitiveTaskAirStrafe::sBases");

	// AIHTNPrimitiveTaskAssumePosture
	set_name(0x14d4c8c, "AIHTNPrimitiveTaskAssumePosture");
	apply_type(0x14d4c8c, "RTTICompound");
	del_items(0x14d5c10, DELIT_SIMPLE, 8);
	apply_type(0x14d5c10, "RTTIBase[1]");
	set_name(0x14d5c10, "AIHTNPrimitiveTaskAssumePosture::sBases");

	// AIHTNPrimitiveTaskBroadcast
	set_name(0x14d4ce0, "AIHTNPrimitiveTaskBroadcast");
	apply_type(0x14d4ce0, "RTTICompound");
	del_items(0x14d5c18, DELIT_SIMPLE, 8);
	apply_type(0x14d5c18, "RTTIBase[1]");
	set_name(0x14d5c18, "AIHTNPrimitiveTaskBroadcast::sBases");

	// AIHTNPrimitiveTaskClaimWaypoint
	set_name(0x14d4d34, "AIHTNPrimitiveTaskClaimWaypoint");
	apply_type(0x14d4d34, "RTTICompound");
	del_items(0x14d5c20, DELIT_SIMPLE, 8);
	apply_type(0x14d5c20, "RTTIBase[1]");
	set_name(0x14d5c20, "AIHTNPrimitiveTaskClaimWaypoint::sBases");

	// AIHTNPrimitiveTaskClearAreaRestrictions
	set_name(0x14d4d88, "AIHTNPrimitiveTaskClearAreaRestrictions");
	apply_type(0x14d4d88, "RTTICompound");
	del_items(0x14d5c28, DELIT_SIMPLE, 8);
	apply_type(0x14d5c28, "RTTIBase[1]");
	set_name(0x14d5c28, "AIHTNPrimitiveTaskClearAreaRestrictions::sBases");

	// AIHTNPrimitiveTaskClearOrder
	set_name(0x14d4ddc, "AIHTNPrimitiveTaskClearOrder");
	apply_type(0x14d4ddc, "RTTICompound");
	del_items(0x14d5c30, DELIT_SIMPLE, 8);
	apply_type(0x14d5c30, "RTTIBase[1]");
	set_name(0x14d5c30, "AIHTNPrimitiveTaskClearOrder::sBases");

	// AIHTNPrimitiveTaskCommunicateSMG
	set_name(0x1544db4, "AIHTNPrimitiveTaskCommunicateSMG");
	apply_type(0x1544db4, "RTTICompound");
	del_items(0x1546fa4, DELIT_SIMPLE, 8);
	apply_type(0x1546fa4, "RTTIBase[1]");
	set_name(0x1546fa4, "AIHTNPrimitiveTaskCommunicateSMG::sBases");

	// AIHTNPrimitiveTaskConfirmThreatLost
	set_name(0x14d4e30, "AIHTNPrimitiveTaskConfirmThreatLost");
	apply_type(0x14d4e30, "RTTICompound");
	del_items(0x14d5c38, DELIT_SIMPLE, 8);
	apply_type(0x14d5c38, "RTTIBase[1]");
	set_name(0x14d5c38, "AIHTNPrimitiveTaskConfirmThreatLost::sBases");

	// AIHTNPrimitiveTaskCoverMountedGun
	set_name(0x14f5d44, "AIHTNPrimitiveTaskCoverMountedGun");
	apply_type(0x14f5d44, "RTTICompound");
	del_items(0x14f6810, DELIT_SIMPLE, 8);
	apply_type(0x14f6810, "RTTIBase[1]");
	set_name(0x14f6810, "AIHTNPrimitiveTaskCoverMountedGun::sBases");

	// AIHTNPrimitiveTaskDelayDeathCamFade
	set_name(0x14f69a8, "AIHTNPrimitiveTaskDelayDeathCamFade");
	apply_type(0x14f69a8, "RTTICompound");
	del_items(0x14f7198, DELIT_SIMPLE, 8);
	apply_type(0x14f7198, "RTTIBase[1]");
	set_name(0x14f7198, "AIHTNPrimitiveTaskDelayDeathCamFade::sBases");

	// AIHTNPrimitiveTaskDismountObject
	set_name(0x14d4e84, "AIHTNPrimitiveTaskDismountObject");
	apply_type(0x14d4e84, "RTTICompound");
	del_items(0x14d5c40, DELIT_SIMPLE, 8);
	apply_type(0x14d5c40, "RTTIBase[1]");
	set_name(0x14d5c40, "AIHTNPrimitiveTaskDismountObject::sBases");

	// AIHTNPrimitiveTaskDoCustomAction
	set_name(0x14f65cc, "AIHTNPrimitiveTaskDoCustomAction");
	apply_type(0x14f65cc, "RTTICompound");
	del_items(0x14f68d8, DELIT_SIMPLE, 8);
	apply_type(0x14f68d8, "RTTIBase[1]");
	set_name(0x14f68d8, "AIHTNPrimitiveTaskDoCustomAction::sBases");

	// AIHTNPrimitiveTaskDodgeGame
	set_name(0x14f5d98, "AIHTNPrimitiveTaskDodgeGame");
	apply_type(0x14f5d98, "RTTICompound");
	del_items(0x14f67a8, DELIT_SIMPLE, 8);
	apply_type(0x14f67a8, "RTTIBase[1]");
	set_name(0x14f67a8, "AIHTNPrimitiveTaskDodgeGame::sBases");

	// AIHTNPrimitiveTaskDraw
	set_name(0x14d4ed8, "AIHTNPrimitiveTaskDraw");
	apply_type(0x14d4ed8, "RTTICompound");
	del_items(0x14d5c48, DELIT_SIMPLE, 8);
	apply_type(0x14d5c48, "RTTIBase[1]");
	set_name(0x14d5c48, "AIHTNPrimitiveTaskDraw::sBases");

	// AIHTNPrimitiveTaskDriveSegment
	set_name(0x14d4f2c, "AIHTNPrimitiveTaskDriveSegment");
	apply_type(0x14d4f2c, "RTTICompound");
	del_items(0x14d5c58, DELIT_SIMPLE, 8);
	apply_type(0x14d5c58, "RTTIBase[1]");
	set_name(0x14d5c58, "AIHTNPrimitiveTaskDriveSegment::sBases");

	// AIHTNPrimitiveTaskDriveToCloseCombat
	set_name(0x14f5dec, "AIHTNPrimitiveTaskDriveToCloseCombat");
	apply_type(0x14f5dec, "RTTICompound");
	del_items(0x14f6818, DELIT_SIMPLE, 8);
	apply_type(0x14f6818, "RTTIBase[1]");
	set_name(0x14f6818, "AIHTNPrimitiveTaskDriveToCloseCombat::sBases");

	// AIHTNPrimitiveTaskEndCommandSequence
	set_name(0x14d4f80, "AIHTNPrimitiveTaskEndCommandSequence");
	apply_type(0x14d4f80, "RTTICompound");
	del_items(0x14d5c60, DELIT_SIMPLE, 8);
	apply_type(0x14d5c60, "RTTIBase[1]");
	set_name(0x14d5c60, "AIHTNPrimitiveTaskEndCommandSequence::sBases");

	// AIHTNPrimitiveTaskError
	set_name(0x14d4fd4, "AIHTNPrimitiveTaskError");
	apply_type(0x14d4fd4, "RTTICompound");
	del_items(0x14d5c68, DELIT_SIMPLE, 8);
	apply_type(0x14d5c68, "RTTIBase[1]");
	set_name(0x14d5c68, "AIHTNPrimitiveTaskError::sBases");

	// AIHTNPrimitiveTaskFaceEntityGame
	set_name(0x14f5e40, "AIHTNPrimitiveTaskFaceEntityGame");
	apply_type(0x14f5e40, "RTTICompound");
	del_items(0x14f6820, DELIT_SIMPLE, 8);
	apply_type(0x14f6820, "RTTIBase[1]");
	set_name(0x14f6820, "AIHTNPrimitiveTaskFaceEntityGame::sBases");

	// AIHTNPrimitiveTaskFacialAnimationSMG
	set_name(0x1544eb0, "AIHTNPrimitiveTaskFacialAnimationSMG");
	apply_type(0x1544eb0, "RTTICompound");
	del_items(0x1546fdc, DELIT_SIMPLE, 8);
	apply_type(0x1546fdc, "RTTIBase[1]");
	set_name(0x1546fdc, "AIHTNPrimitiveTaskFacialAnimationSMG::sBases");

	// AIHTNPrimitiveTaskFail
	set_name(0x14d5028, "AIHTNPrimitiveTaskFail");
	apply_type(0x14d5028, "RTTICompound");
	del_items(0x14d5c70, DELIT_SIMPLE, 8);
	apply_type(0x14d5c70, "RTTIBase[1]");
	set_name(0x14d5c70, "AIHTNPrimitiveTaskFail::sBases");

	// AIHTNPrimitiveTaskFireBurstAtEntity
	set_name(0x14d507c, "AIHTNPrimitiveTaskFireBurstAtEntity");
	apply_type(0x14d507c, "RTTICompound");
	del_items(0x14d5c78, DELIT_SIMPLE, 8);
	apply_type(0x14d5c78, "RTTIBase[1]");
	set_name(0x14d5c78, "AIHTNPrimitiveTaskFireBurstAtEntity::sBases");

	// AIHTNPrimitiveTaskFireBurstAtEntityAndMiss
	set_name(0x14d50d0, "AIHTNPrimitiveTaskFireBurstAtEntityAndMiss");
	apply_type(0x14d50d0, "RTTICompound");
	del_items(0x14d5c80, DELIT_SIMPLE, 8);
	apply_type(0x14d5c80, "RTTIBase[1]");
	set_name(0x14d5c80, "AIHTNPrimitiveTaskFireBurstAtEntityAndMiss::sBases");

	// AIHTNPrimitiveTaskFireBurstAtWaypoint
	set_name(0x14d5124, "AIHTNPrimitiveTaskFireBurstAtWaypoint");
	apply_type(0x14d5124, "RTTICompound");
	del_items(0x14d5c88, DELIT_SIMPLE, 8);
	apply_type(0x14d5c88, "RTTIBase[1]");
	set_name(0x14d5c88, "AIHTNPrimitiveTaskFireBurstAtWaypoint::sBases");

	// AIHTNPrimitiveTaskFireBurstInDirection
	set_name(0x14d5178, "AIHTNPrimitiveTaskFireBurstInDirection");
	apply_type(0x14d5178, "RTTICompound");
	del_items(0x14d5c90, DELIT_SIMPLE, 8);
	apply_type(0x14d5c90, "RTTIBase[1]");
	set_name(0x14d5c90, "AIHTNPrimitiveTaskFireBurstInDirection::sBases");

	// AIHTNPrimitiveTaskForget
	set_name(0x14d51cc, "AIHTNPrimitiveTaskForget");
	apply_type(0x14d51cc, "RTTICompound");
	del_items(0x14d5c98, DELIT_SIMPLE, 8);
	apply_type(0x14d5c98, "RTTIBase[1]");
	set_name(0x14d5c98, "AIHTNPrimitiveTaskForget::sBases");

	// AIHTNPrimitiveTaskGesture
	set_name(0x14f671c, "AIHTNPrimitiveTaskGesture");
	apply_type(0x14f671c, "RTTICompound");
	del_items(0x14f68f8, DELIT_SIMPLE, 8);
	apply_type(0x14f68f8, "RTTIBase[1]");
	set_name(0x14f68f8, "AIHTNPrimitiveTaskGesture::sBases");

	// AIHTNPrimitiveTaskGestureSMG
	set_name(0x1544d60, "AIHTNPrimitiveTaskGestureSMG");
	apply_type(0x1544d60, "RTTICompound");
	del_items(0x1546f94, DELIT_SIMPLE, 8);
	apply_type(0x1546f94, "RTTIBase[1]");
	set_name(0x1546f94, "AIHTNPrimitiveTaskGestureSMG::sBases");

	// AIHTNPrimitiveTaskGlanceAtEntity
	set_name(0x14d5274, "AIHTNPrimitiveTaskGlanceAtEntity");
	apply_type(0x14d5274, "RTTICompound");
	del_items(0x14d5ca8, DELIT_SIMPLE, 8);
	apply_type(0x14d5ca8, "RTTIBase[1]");
	set_name(0x14d5ca8, "AIHTNPrimitiveTaskGlanceAtEntity::sBases");

	// AIHTNPrimitiveTaskHoverSegment
	set_name(0x14d52c8, "AIHTNPrimitiveTaskHoverSegment");
	apply_type(0x14d52c8, "RTTICompound");
	del_items(0x14d5cb0, DELIT_SIMPLE, 8);
	apply_type(0x14d5cb0, "RTTIBase[1]");
	set_name(0x14d5cb0, "AIHTNPrimitiveTaskHoverSegment::sBases");

	// AIHTNPrimitiveTaskIdleSMG
	set_name(0x1544f04, "AIHTNPrimitiveTaskIdleSMG");
	apply_type(0x1544f04, "RTTICompound");
	del_items(0x1546fe4, DELIT_SIMPLE, 8);
	apply_type(0x1546fe4, "RTTIBase[1]");
	set_name(0x1546fe4, "AIHTNPrimitiveTaskIdleSMG::sBases");

	// AIHTNPrimitiveTaskIndividual
	set_name(0x14d4b3c, "AIHTNPrimitiveTaskIndividual");
	apply_type(0x14d4b3c, "RTTICompound");
	del_items(0x14d5b80, DELIT_SIMPLE, 8);
	apply_type(0x14d5b80, "RTTIBase[1]");
	set_name(0x14d5b80, "AIHTNPrimitiveTaskIndividual::sBases");

	// AIHTNPrimitiveTaskLapaAimInHeading
	set_name(0x14f5e94, "AIHTNPrimitiveTaskLapaAimInHeading");
	apply_type(0x14f5e94, "RTTICompound");
	del_items(0x14f6828, DELIT_SIMPLE, 8);
	apply_type(0x14f6828, "RTTIBase[1]");
	set_name(0x14f6828, "AIHTNPrimitiveTaskLapaAimInHeading::sBases");

	// AIHTNPrimitiveTaskLapaDoAction
	set_name(0x14f5ee8, "AIHTNPrimitiveTaskLapaDoAction");
	apply_type(0x14f5ee8, "RTTICompound");
	del_items(0x14f6830, DELIT_SIMPLE, 8);
	apply_type(0x14f6830, "RTTIBase[1]");
	set_name(0x14f6830, "AIHTNPrimitiveTaskLapaDoAction::sBases");

	// AIHTNPrimitiveTaskLapaLeanAim
	set_name(0x14f5f3c, "AIHTNPrimitiveTaskLapaLeanAim");
	apply_type(0x14f5f3c, "RTTICompound");
	del_items(0x14f6838, DELIT_SIMPLE, 8);
	apply_type(0x14f6838, "RTTIBase[1]");
	set_name(0x14f6838, "AIHTNPrimitiveTaskLapaLeanAim::sBases");

	// AIHTNPrimitiveTaskLapaLeanFire
	set_name(0x14f5f90, "AIHTNPrimitiveTaskLapaLeanFire");
	apply_type(0x14f5f90, "RTTICompound");
	del_items(0x14f6840, DELIT_SIMPLE, 8);
	apply_type(0x14f6840, "RTTIBase[1]");
	set_name(0x14f6840, "AIHTNPrimitiveTaskLapaLeanFire::sBases");

	// AIHTNPrimitiveTaskLapaPeekAtEntity
	set_name(0x14f5fe4, "AIHTNPrimitiveTaskLapaPeekAtEntity");
	apply_type(0x14f5fe4, "RTTICompound");
	del_items(0x14f6848, DELIT_SIMPLE, 8);
	apply_type(0x14f6848, "RTTIBase[1]");
	set_name(0x14f6848, "AIHTNPrimitiveTaskLapaPeekAtEntity::sBases");

	// AIHTNPrimitiveTaskLapaPeekInHeading
	set_name(0x14f6038, "AIHTNPrimitiveTaskLapaPeekInHeading");
	apply_type(0x14f6038, "RTTICompound");
	del_items(0x14f6850, DELIT_SIMPLE, 8);
	apply_type(0x14f6850, "RTTIBase[1]");
	set_name(0x14f6850, "AIHTNPrimitiveTaskLapaPeekInHeading::sBases");

	// AIHTNPrimitiveTaskLapaStayInCover
	set_name(0x14f608c, "AIHTNPrimitiveTaskLapaStayInCover");
	apply_type(0x14f608c, "RTTICompound");
	del_items(0x14f6858, DELIT_SIMPLE, 8);
	apply_type(0x14f6858, "RTTIBase[1]");
	set_name(0x14f6858, "AIHTNPrimitiveTaskLapaStayInCover::sBases");

	// AIHTNPrimitiveTaskLapaSuppressWaypointList
	set_name(0x14f60e0, "AIHTNPrimitiveTaskLapaSuppressWaypointList");
	apply_type(0x14f60e0, "RTTICompound");
	del_items(0x14f6860, DELIT_SIMPLE, 8);
	apply_type(0x14f6860, "RTTIBase[1]");
	set_name(0x14f6860, "AIHTNPrimitiveTaskLapaSuppressWaypointList::sBases");

	// AIHTNPrimitiveTaskLapaToCover
	set_name(0x14f6134, "AIHTNPrimitiveTaskLapaToCover");
	apply_type(0x14f6134, "RTTICompound");
	del_items(0x14f6868, DELIT_SIMPLE, 8);
	apply_type(0x14f6868, "RTTIBase[1]");
	set_name(0x14f6868, "AIHTNPrimitiveTaskLapaToCover::sBases");

	// AIHTNPrimitiveTaskListenSMG
	set_name(0x1544e08, "AIHTNPrimitiveTaskListenSMG");
	apply_type(0x1544e08, "RTTICompound");
	del_items(0x1546fc4, DELIT_SIMPLE, 8);
	apply_type(0x1546fc4, "RTTIBase[1]");
	set_name(0x1546fc4, "AIHTNPrimitiveTaskListenSMG::sBases");

	// AIHTNPrimitiveTaskLog
	set_name(0x14d531c, "AIHTNPrimitiveTaskLog");
	apply_type(0x14d531c, "RTTICompound");
	del_items(0x14d5cb8, DELIT_SIMPLE, 8);
	apply_type(0x14d5cb8, "RTTIBase[1]");
	set_name(0x14d5cb8, "AIHTNPrimitiveTaskLog::sBases");

	// AIHTNPrimitiveTaskLookAtEntityGame
	set_name(0x14f6188, "AIHTNPrimitiveTaskLookAtEntityGame");
	apply_type(0x14f6188, "RTTICompound");
	del_items(0x14f6870, DELIT_SIMPLE, 8);
	apply_type(0x14f6870, "RTTIBase[1]");
	set_name(0x14f6870, "AIHTNPrimitiveTaskLookAtEntityGame::sBases");

	// AIHTNPrimitiveTaskLookAtMarker
	set_name(0x14d5370, "AIHTNPrimitiveTaskLookAtMarker");
	apply_type(0x14d5370, "RTTICompound");
	del_items(0x14d5cc0, DELIT_SIMPLE, 8);
	apply_type(0x14d5cc0, "RTTIBase[1]");
	set_name(0x14d5cc0, "AIHTNPrimitiveTaskLookAtMarker::sBases");

	// AIHTNPrimitiveTaskLookAtSMG
	set_name(0x1544d0c, "AIHTNPrimitiveTaskLookAtSMG");
	apply_type(0x1544d0c, "RTTICompound");
	del_items(0x1546f84, DELIT_SIMPLE, 8);
	apply_type(0x1546f84, "RTTIBase[1]");
	set_name(0x1546f84, "AIHTNPrimitiveTaskLookAtSMG::sBases");

	// AIHTNPrimitiveTaskLookAtThreat
	set_name(0x14d53c4, "AIHTNPrimitiveTaskLookAtThreat");
	apply_type(0x14d53c4, "RTTICompound");
	del_items(0x14d5cc8, DELIT_SIMPLE, 8);
	apply_type(0x14d5cc8, "RTTIBase[1]");
	set_name(0x14d5cc8, "AIHTNPrimitiveTaskLookAtThreat::sBases");

	// AIHTNPrimitiveTaskLookInHeading
	set_name(0x14d5418, "AIHTNPrimitiveTaskLookInHeading");
	apply_type(0x14d5418, "RTTICompound");
	del_items(0x14d5cd0, DELIT_SIMPLE, 8);
	apply_type(0x14d5cd0, "RTTIBase[1]");
	set_name(0x14d5cd0, "AIHTNPrimitiveTaskLookInHeading::sBases");

	// AIHTNPrimitiveTaskLowCrouchGame
	set_name(0x14f61dc, "AIHTNPrimitiveTaskLowCrouchGame");
	apply_type(0x14f61dc, "RTTICompound");
	del_items(0x14f6878, DELIT_SIMPLE, 8);
	apply_type(0x14f6878, "RTTIBase[1]");
	set_name(0x14f6878, "AIHTNPrimitiveTaskLowCrouchGame::sBases");

	// AIHTNPrimitiveTaskMessage
	set_name(0x14d546c, "AIHTNPrimitiveTaskMessage");
	apply_type(0x14d546c, "RTTICompound");
	del_items(0x14d5cd8, DELIT_SIMPLE, 8);
	apply_type(0x14d5cd8, "RTTIBase[1]");
	set_name(0x14d5cd8, "AIHTNPrimitiveTaskMessage::sBases");

	// AIHTNPrimitiveTaskMiniDroneAttack
	set_name(0x14f6230, "AIHTNPrimitiveTaskMiniDroneAttack");
	apply_type(0x14f6230, "RTTICompound");
	del_items(0x14f6888, DELIT_SIMPLE, 8);
	apply_type(0x14f6888, "RTTIBase[1]");
	set_name(0x14f6888, "AIHTNPrimitiveTaskMiniDroneAttack::sBases");

	// AIHTNPrimitiveTaskMiniDroneFly
	set_name(0x14f6284, "AIHTNPrimitiveTaskMiniDroneFly");
	apply_type(0x14f6284, "RTTICompound");
	del_items(0x14f6880, DELIT_SIMPLE, 8);
	apply_type(0x14f6880, "RTTIBase[1]");
	set_name(0x14f6880, "AIHTNPrimitiveTaskMiniDroneFly::sBases");

	// AIHTNPrimitiveTaskMiniDroneScan
	set_name(0x14f62d8, "AIHTNPrimitiveTaskMiniDroneScan");
	apply_type(0x14f62d8, "RTTICompound");
	del_items(0x14f6890, DELIT_SIMPLE, 8);
	apply_type(0x14f6890, "RTTIBase[1]");
	set_name(0x14f6890, "AIHTNPrimitiveTaskMiniDroneScan::sBases");

	// AIHTNPrimitiveTaskMountObject
	set_name(0x14d54c0, "AIHTNPrimitiveTaskMountObject");
	apply_type(0x14d54c0, "RTTICompound");
	del_items(0x14d5ce0, DELIT_SIMPLE, 8);
	apply_type(0x14d5ce0, "RTTIBase[1]");
	set_name(0x14d5ce0, "AIHTNPrimitiveTaskMountObject::sBases");

	// AIHTNPrimitiveTaskMove
	set_name(0x14d5514, "AIHTNPrimitiveTaskMove");
	apply_type(0x14d5514, "RTTICompound");
	del_items(0x14d5c50, DELIT_SIMPLE, 8);
	apply_type(0x14d5c50, "RTTIBase[1]");
	set_name(0x14d5c50, "AIHTNPrimitiveTaskMove::sBases");

	// AIHTNPrimitiveTaskMoveSMG
	set_name(0x1544bbc, "AIHTNPrimitiveTaskMoveSMG");
	apply_type(0x1544bbc, "RTTICompound");
	del_items(0x1546f5c, DELIT_SIMPLE, 8);
	apply_type(0x1546f5c, "RTTIBase[1]");
	set_name(0x1546f5c, "AIHTNPrimitiveTaskMoveSMG::sBases");

	// AIHTNPrimitiveTaskMoveToSMG
	set_name(0x1544c10, "AIHTNPrimitiveTaskMoveToSMG");
	apply_type(0x1544c10, "RTTICompound");
	del_items(0x1546f64, DELIT_SIMPLE, 8);
	apply_type(0x1546f64, "RTTIBase[1]");
	set_name(0x1546f64, "AIHTNPrimitiveTaskMoveToSMG::sBases");

	// AIHTNPrimitiveTaskMoveToUsableObjectSMG
	set_name(0x1544c64, "AIHTNPrimitiveTaskMoveToUsableObjectSMG");
	apply_type(0x1544c64, "RTTICompound");
	del_items(0x1546f6c, DELIT_SIMPLE, 8);
	apply_type(0x1546f6c, "RTTIBase[1]");
	set_name(0x1546f6c, "AIHTNPrimitiveTaskMoveToUsableObjectSMG::sBases");

	// AIHTNPrimitiveTaskNotifyRevivingPlayer
	set_name(0x14f6a50, "AIHTNPrimitiveTaskNotifyRevivingPlayer");
	apply_type(0x14f6a50, "RTTICompound");
	del_items(0x14f71a8, DELIT_SIMPLE, 8);
	apply_type(0x14f71a8, "RTTIBase[1]");
	set_name(0x14f71a8, "AIHTNPrimitiveTaskNotifyRevivingPlayer::sBases");

	// AIHTNPrimitiveTaskNotifyStrategyGame
	set_name(0x14f69fc, "AIHTNPrimitiveTaskNotifyStrategyGame");
	apply_type(0x14f69fc, "RTTICompound");
	del_items(0x14f71a0, DELIT_SIMPLE, 8);
	apply_type(0x14f71a0, "RTTIBase[1]");
	set_name(0x14f71a0, "AIHTNPrimitiveTaskNotifyStrategyGame::sBases");

	// AIHTNPrimitiveTaskPauseGame
	set_name(0x14f632c, "AIHTNPrimitiveTaskPauseGame");
	apply_type(0x14f632c, "RTTICompound");
	del_items(0x14f6898, DELIT_SIMPLE, 8);
	apply_type(0x14f6898, "RTTIBase[1]");
	set_name(0x14f6898, "AIHTNPrimitiveTaskPauseGame::sBases");

	// AIHTNPrimitiveTaskPlaceHolder
	set_name(0x14d5568, "AIHTNPrimitiveTaskPlaceHolder");
	apply_type(0x14d5568, "RTTICompound");
	del_items(0x14d5ce8, DELIT_SIMPLE, 8);
	apply_type(0x14d5ce8, "RTTIBase[1]");
	set_name(0x14d5ce8, "AIHTNPrimitiveTaskPlaceHolder::sBases");

	// AIHTNPrimitiveTaskPlayAnimGame
	set_name(0x14f6380, "AIHTNPrimitiveTaskPlayAnimGame");
	apply_type(0x14f6380, "RTTICompound");
	del_items(0x14f68a0, DELIT_SIMPLE, 8);
	apply_type(0x14f68a0, "RTTIBase[1]");
	set_name(0x14f68a0, "AIHTNPrimitiveTaskPlayAnimGame::sBases");

	// AIHTNPrimitiveTaskReloadWeapon
	set_name(0x14d55bc, "AIHTNPrimitiveTaskReloadWeapon");
	apply_type(0x14d55bc, "RTTICompound");
	del_items(0x14d5cf0, DELIT_SIMPLE, 8);
	apply_type(0x14d5cf0, "RTTIBase[1]");
	set_name(0x14d5cf0, "AIHTNPrimitiveTaskReloadWeapon::sBases");

	// AIHTNPrimitiveTaskRemember
	set_name(0x14d5610, "AIHTNPrimitiveTaskRemember");
	apply_type(0x14d5610, "RTTICompound");
	del_items(0x14d5cf8, DELIT_SIMPLE, 8);
	apply_type(0x14d5cf8, "RTTIBase[1]");
	set_name(0x14d5cf8, "AIHTNPrimitiveTaskRemember::sBases");

	// AIHTNPrimitiveTaskRememberOnFail
	set_name(0x14d56b8, "AIHTNPrimitiveTaskRememberOnFail");
	apply_type(0x14d56b8, "RTTICompound");
	del_items(0x14d5d08, DELIT_SIMPLE, 8);
	apply_type(0x14d5d08, "RTTIBase[1]");
	set_name(0x14d5d08, "AIHTNPrimitiveTaskRememberOnFail::sBases");

	// AIHTNPrimitiveTaskRequestHealing
	set_name(0x14f6620, "AIHTNPrimitiveTaskRequestHealing");
	apply_type(0x14f6620, "RTTICompound");
	del_items(0x14f68e0, DELIT_SIMPLE, 8);
	apply_type(0x14f68e0, "RTTIBase[1]");
	set_name(0x14f68e0, "AIHTNPrimitiveTaskRequestHealing::sBases");

	// AIHTNPrimitiveTaskScanWaypointList
	set_name(0x14d570c, "AIHTNPrimitiveTaskScanWaypointList");
	apply_type(0x14d570c, "RTTICompound");
	del_items(0x14d5ba0, DELIT_SIMPLE, 8);
	apply_type(0x14d5ba0, "RTTIBase[1]");
	set_name(0x14d5ba0, "AIHTNPrimitiveTaskScanWaypointList::sBases");

	// AIHTNPrimitiveTaskScanWaypointListLapa
	set_name(0x14f6428, "AIHTNPrimitiveTaskScanWaypointListLapa");
	apply_type(0x14f6428, "RTTICompound");
	del_items(0x14f68b0, DELIT_SIMPLE, 8);
	apply_type(0x14f68b0, "RTTIBase[1]");
	set_name(0x14f68b0, "AIHTNPrimitiveTaskScanWaypointListLapa::sBases");

	// AIHTNPrimitiveTaskSelectTarget
	set_name(0x14d5760, "AIHTNPrimitiveTaskSelectTarget");
	apply_type(0x14d5760, "RTTICompound");
	del_items(0x14d5d10, DELIT_SIMPLE, 8);
	apply_type(0x14d5d10, "RTTIBase[1]");
	set_name(0x14d5d10, "AIHTNPrimitiveTaskSelectTarget::sBases");

	// AIHTNPrimitiveTaskSelectWeapon
	set_name(0x14d57b4, "AIHTNPrimitiveTaskSelectWeapon");
	apply_type(0x14d57b4, "RTTICompound");
	del_items(0x14d5d18, DELIT_SIMPLE, 8);
	apply_type(0x14d5d18, "RTTIBase[1]");
	set_name(0x14d5d18, "AIHTNPrimitiveTaskSelectWeapon::sBases");

	// AIHTNPrimitiveTaskSendScriptMessageGame
	set_name(0x14f6900, "AIHTNPrimitiveTaskSendScriptMessageGame");
	apply_type(0x14f6900, "RTTICompound");
	del_items(0x14f7188, DELIT_SIMPLE, 8);
	apply_type(0x14f7188, "RTTIBase[1]");
	set_name(0x14f7188, "AIHTNPrimitiveTaskSendScriptMessageGame::sBases");

	// AIHTNPrimitiveTaskSetAooCenter
	set_name(0x14d5808, "AIHTNPrimitiveTaskSetAooCenter");
	apply_type(0x14d5808, "RTTICompound");
	del_items(0x14d5d20, DELIT_SIMPLE, 8);
	apply_type(0x14d5d20, "RTTIBase[1]");
	set_name(0x14d5d20, "AIHTNPrimitiveTaskSetAooCenter::sBases");

	// AIHTNPrimitiveTaskSetAooRadius
	set_name(0x14d585c, "AIHTNPrimitiveTaskSetAooRadius");
	apply_type(0x14d585c, "RTTICompound");
	del_items(0x14d5d28, DELIT_SIMPLE, 8);
	apply_type(0x14d5d28, "RTTIBase[1]");
	set_name(0x14d5d28, "AIHTNPrimitiveTaskSetAooRadius::sBases");

	// AIHTNPrimitiveTaskSetAreaFilter
	set_name(0x14d58b0, "AIHTNPrimitiveTaskSetAreaFilter");
	apply_type(0x14d58b0, "RTTICompound");
	del_items(0x14d5d30, DELIT_SIMPLE, 8);
	apply_type(0x14d5d30, "RTTIBase[1]");
	set_name(0x14d5d30, "AIHTNPrimitiveTaskSetAreaFilter::sBases");

	// AIHTNPrimitiveTaskSetDeathCamTarget
	set_name(0x14f6954, "AIHTNPrimitiveTaskSetDeathCamTarget");
	apply_type(0x14f6954, "RTTICompound");
	del_items(0x14f7190, DELIT_SIMPLE, 8);
	apply_type(0x14f7190, "RTTIBase[1]");
	set_name(0x14f7190, "AIHTNPrimitiveTaskSetDeathCamTarget::sBases");

	// AIHTNPrimitiveTaskSetLockUser
	set_name(0x14f63d4, "AIHTNPrimitiveTaskSetLockUser");
	apply_type(0x14f63d4, "RTTICompound");
	del_items(0x14f68a8, DELIT_SIMPLE, 8);
	apply_type(0x14f68a8, "RTTIBase[1]");
	set_name(0x14f68a8, "AIHTNPrimitiveTaskSetLockUser::sBases");

	// AIHTNPrimitiveTaskSetSuppressionLevel
	set_name(0x14d5904, "AIHTNPrimitiveTaskSetSuppressionLevel");
	apply_type(0x14d5904, "RTTICompound");
	del_items(0x14d5d38, DELIT_SIMPLE, 8);
	apply_type(0x14d5d38, "RTTIBase[1]");
	set_name(0x14d5d38, "AIHTNPrimitiveTaskSetSuppressionLevel::sBases");

	// AIHTNPrimitiveTaskSignal
	set_name(0x14d5958, "AIHTNPrimitiveTaskSignal");
	apply_type(0x14d5958, "RTTICompound");
	del_items(0x14d5d40, DELIT_SIMPLE, 8);
	apply_type(0x14d5d40, "RTTIBase[1]");
	set_name(0x14d5d40, "AIHTNPrimitiveTaskSignal::sBases");

	// AIHTNPrimitiveTaskSignalSuppression
	set_name(0x14d59ac, "AIHTNPrimitiveTaskSignalSuppression");
	apply_type(0x14d59ac, "RTTICompound");
	del_items(0x14d5d48, DELIT_SIMPLE, 8);
	apply_type(0x14d5d48, "RTTIBase[1]");
	set_name(0x14d5d48, "AIHTNPrimitiveTaskSignalSuppression::sBases");

	// AIHTNPrimitiveTaskSquad
	set_name(0x14d4b90, "AIHTNPrimitiveTaskSquad");
	apply_type(0x14d4b90, "RTTICompound");
	del_items(0x14d5b88, DELIT_SIMPLE, 8);
	apply_type(0x14d5b88, "RTTIBase[1]");
	set_name(0x14d5b88, "AIHTNPrimitiveTaskSquad::sBases");

	// AIHTNPrimitiveTaskSquadForget
	set_name(0x14d5220, "AIHTNPrimitiveTaskSquadForget");
	apply_type(0x14d5220, "RTTICompound");
	del_items(0x14d5ca0, DELIT_SIMPLE, 8);
	apply_type(0x14d5ca0, "RTTIBase[1]");
	set_name(0x14d5ca0, "AIHTNPrimitiveTaskSquadForget::sBases");

	// AIHTNPrimitiveTaskSquadMemberMessage
	set_name(0x14d5a00, "AIHTNPrimitiveTaskSquadMemberMessage");
	apply_type(0x14d5a00, "RTTICompound");
	del_items(0x14d5d50, DELIT_SIMPLE, 8);
	apply_type(0x14d5d50, "RTTIBase[1]");
	set_name(0x14d5d50, "AIHTNPrimitiveTaskSquadMemberMessage::sBases");

	// AIHTNPrimitiveTaskSquadOrder
	set_name(0x14d6148, "AIHTNPrimitiveTaskSquadOrder");
	apply_type(0x14d6148, "RTTICompound");
	del_items(0x14d6688, DELIT_SIMPLE, 8);
	apply_type(0x14d6688, "RTTIBase[1]");
	set_name(0x14d6688, "AIHTNPrimitiveTaskSquadOrder::sBases");

	// AIHTNPrimitiveTaskSquadOrderCustom
	set_name(0x14d619c, "AIHTNPrimitiveTaskSquadOrderCustom");
	apply_type(0x14d619c, "RTTICompound");
	del_items(0x14d6690, DELIT_SIMPLE, 8);
	apply_type(0x14d6690, "RTTIBase[1]");
	set_name(0x14d6690, "AIHTNPrimitiveTaskSquadOrderCustom::sBases");

	// AIHTNPrimitiveTaskSquadRemember
	set_name(0x14d5664, "AIHTNPrimitiveTaskSquadRemember");
	apply_type(0x14d5664, "RTTICompound");
	del_items(0x14d5d00, DELIT_SIMPLE, 8);
	apply_type(0x14d5d00, "RTTIBase[1]");
	set_name(0x14d5d00, "AIHTNPrimitiveTaskSquadRemember::sBases");

	// AIHTNPrimitiveTaskStaggerFire
	set_name(0x14f647c, "AIHTNPrimitiveTaskStaggerFire");
	apply_type(0x14f647c, "RTTICompound");
	del_items(0x14f68b8, DELIT_SIMPLE, 8);
	apply_type(0x14f68b8, "RTTIBase[1]");
	set_name(0x14f68b8, "AIHTNPrimitiveTaskStaggerFire::sBases");

	// AIHTNPrimitiveTaskStartCommandSequence
	set_name(0x14d5a54, "AIHTNPrimitiveTaskStartCommandSequence");
	apply_type(0x14d5a54, "RTTICompound");
	del_items(0x14d5d58, DELIT_SIMPLE, 8);
	apply_type(0x14d5d58, "RTTIBase[1]");
	set_name(0x14d5d58, "AIHTNPrimitiveTaskStartCommandSequence::sBases");

	// AIHTNPrimitiveTaskStayInCover
	set_name(0x14d5aa8, "AIHTNPrimitiveTaskStayInCover");
	apply_type(0x14d5aa8, "RTTICompound");
	del_items(0x14d5d60, DELIT_SIMPLE, 8);
	apply_type(0x14d5d60, "RTTIBase[1]");
	set_name(0x14d5d60, "AIHTNPrimitiveTaskStayInCover::sBases");

	// AIHTNPrimitiveTaskStepAside
	set_name(0x14d5afc, "AIHTNPrimitiveTaskStepAside");
	apply_type(0x14d5afc, "RTTICompound");
	del_items(0x14d5d68, DELIT_SIMPLE, 8);
	apply_type(0x14d5d68, "RTTIBase[1]");
	set_name(0x14d5d68, "AIHTNPrimitiveTaskStepAside::sBases");

	// AIHTNPrimitiveTaskStepTowardsSMG
	set_name(0x1544e5c, "AIHTNPrimitiveTaskStepTowardsSMG");
	apply_type(0x1544e5c, "RTTICompound");
	del_items(0x1546fcc, DELIT_SIMPLE, 8);
	apply_type(0x1546fcc, "RTTIBase[1]");
	set_name(0x1546fcc, "AIHTNPrimitiveTaskStepTowardsSMG::sBases");

	// AIHTNPrimitiveTaskSuppressWaypointList
	set_name(0x14d5e54, "AIHTNPrimitiveTaskSuppressWaypointList");
	apply_type(0x14d5e54, "RTTICompound");
	del_items(0x14d6630, DELIT_SIMPLE, 8);
	apply_type(0x14d6630, "RTTIBase[1]");
	set_name(0x14d6630, "AIHTNPrimitiveTaskSuppressWaypointList::sBases");

	// AIHTNPrimitiveTaskTeleport
	set_name(0x14f64d0, "AIHTNPrimitiveTaskTeleport");
	apply_type(0x14f64d0, "RTTICompound");
	del_items(0x14f68c0, DELIT_SIMPLE, 8);
	apply_type(0x14f68c0, "RTTIBase[1]");
	set_name(0x14f68c0, "AIHTNPrimitiveTaskTeleport::sBases");

	// AIHTNPrimitiveTaskThrowGrenade
	set_name(0x14f6674, "AIHTNPrimitiveTaskThrowGrenade");
	apply_type(0x14f6674, "RTTICompound");
	del_items(0x14f68e8, DELIT_SIMPLE, 8);
	apply_type(0x14f68e8, "RTTIBase[1]");
	set_name(0x14f68e8, "AIHTNPrimitiveTaskThrowGrenade::sBases");

	// AIHTNPrimitiveTaskUseAttachableObject
	set_name(0x14d5ea8, "AIHTNPrimitiveTaskUseAttachableObject");
	apply_type(0x14d5ea8, "RTTICompound");
	del_items(0x14d6648, DELIT_SIMPLE, 8);
	apply_type(0x14d6648, "RTTIBase[1]");
	set_name(0x14d6648, "AIHTNPrimitiveTaskUseAttachableObject::sBases");

	// AIHTNPrimitiveTaskUseEntitySMG
	set_name(0x1544cb8, "AIHTNPrimitiveTaskUseEntitySMG");
	apply_type(0x1544cb8, "RTTICompound");
	del_items(0x1546f74, DELIT_SIMPLE, 8);
	apply_type(0x1546f74, "RTTIBase[1]");
	set_name(0x1546f74, "AIHTNPrimitiveTaskUseEntitySMG::sBases");

	// AIHTNPrimitiveTaskUseInventoryItem
	set_name(0x14f6524, "AIHTNPrimitiveTaskUseInventoryItem");
	apply_type(0x14f6524, "RTTICompound");
	del_items(0x14f68c8, DELIT_SIMPLE, 8);
	apply_type(0x14f68c8, "RTTIBase[1]");
	set_name(0x14f68c8, "AIHTNPrimitiveTaskUseInventoryItem::sBases");

	// AIHTNPrimitiveTaskUseItemOnEntity
	set_name(0x14d5efc, "AIHTNPrimitiveTaskUseItemOnEntity");
	apply_type(0x14d5efc, "RTTICompound");
	del_items(0x14d6650, DELIT_SIMPLE, 8);
	apply_type(0x14d6650, "RTTIBase[1]");
	set_name(0x14d6650, "AIHTNPrimitiveTaskUseItemOnEntity::sBases");

	// AIHTNPrimitiveTaskUseJetpack
	set_name(0x14f66c8, "AIHTNPrimitiveTaskUseJetpack");
	apply_type(0x14f66c8, "RTTICompound");
	del_items(0x14f68f0, DELIT_SIMPLE, 8);
	apply_type(0x14f68f0, "RTTIBase[1]");
	set_name(0x14f68f0, "AIHTNPrimitiveTaskUseJetpack::sBases");

	// AIHTNPrimitiveTaskUseOrderedObject
	set_name(0x14d5f50, "AIHTNPrimitiveTaskUseOrderedObject");
	apply_type(0x14d5f50, "RTTICompound");
	del_items(0x14d6658, DELIT_SIMPLE, 8);
	apply_type(0x14d6658, "RTTIBase[1]");
	set_name(0x14d6658, "AIHTNPrimitiveTaskUseOrderedObject::sBases");

	// AIHTNPrimitiveTaskUseOrderedObjects
	set_name(0x14d5fa4, "AIHTNPrimitiveTaskUseOrderedObjects");
	apply_type(0x14d5fa4, "RTTICompound");
	del_items(0x14d6660, DELIT_SIMPLE, 8);
	apply_type(0x14d6660, "RTTIBase[1]");
	set_name(0x14d6660, "AIHTNPrimitiveTaskUseOrderedObjects::sBases");

	// AIHTNPrimitiveTaskWait
	set_name(0x14d5ff8, "AIHTNPrimitiveTaskWait");
	apply_type(0x14d5ff8, "RTTICompound");
	del_items(0x14d6668, DELIT_SIMPLE, 8);
	apply_type(0x14d6668, "RTTIBase[1]");
	set_name(0x14d6668, "AIHTNPrimitiveTaskWait::sBases");

	// AIHTNPrimitiveTaskWalk
	set_name(0x14d604c, "AIHTNPrimitiveTaskWalk");
	apply_type(0x14d604c, "RTTICompound");
	del_items(0x14d6678, DELIT_SIMPLE, 8);
	apply_type(0x14d6678, "RTTIBase[1]");
	set_name(0x14d6678, "AIHTNPrimitiveTaskWalk::sBases");

	// AIHTNPrimitiveTaskWalkSegment
	set_name(0x14d60a0, "AIHTNPrimitiveTaskWalkSegment");
	apply_type(0x14d60a0, "RTTICompound");
	del_items(0x14d6670, DELIT_SIMPLE, 8);
	apply_type(0x14d6670, "RTTIBase[1]");
	set_name(0x14d6670, "AIHTNPrimitiveTaskWalkSegment::sBases");

	// AIHTNPrimitiveTaskWalkToCloseCombat
	set_name(0x14f6578, "AIHTNPrimitiveTaskWalkToCloseCombat");
	apply_type(0x14f6578, "RTTICompound");
	del_items(0x14f68d0, DELIT_SIMPLE, 8);
	apply_type(0x14f68d0, "RTTIBase[1]");
	set_name(0x14f68d0, "AIHTNPrimitiveTaskWalkToCloseCombat::sBases");

	// AIHTNPrimitiveTaskWalkToUseLocationSegment
	set_name(0x14d60f4, "AIHTNPrimitiveTaskWalkToUseLocationSegment");
	apply_type(0x14d60f4, "RTTICompound");
	del_items(0x14d6680, DELIT_SIMPLE, 8);
	apply_type(0x14d6680, "RTTIBase[1]");
	set_name(0x14d6680, "AIHTNPrimitiveTaskWalkToUseLocationSegment::sBases");

	// AIHintToContextMapping
	set_name(0x14cfbb4, "AIHintToContextMapping");
	apply_type(0x14cfbb4, "RTTICompound");
	del_items(0x14d236c, DELIT_SIMPLE, 56);
	apply_type(0x14d236c, "RTTIAttr[2]");
	set_name(0x14d236c, "AIHintToContextMapping::sAttrs");

	// AIHtnPlannerDaemonFindWanderLocation
	set_name(0x14d46f8, "AIHtnPlannerDaemonFindWanderLocation");
	apply_type(0x14d46f8, "RTTICompound");
	del_items(0x14d5bb0, DELIT_SIMPLE, 8);
	apply_type(0x14d5bb0, "RTTIBase[1]");
	set_name(0x14d5bb0, "AIHtnPlannerDaemonFindWanderLocation::sBases");

	// AIHtnPlannerDaemonIdleSMG
	set_name(0x1544ac0, "AIHtnPlannerDaemonIdleSMG");
	apply_type(0x1544ac0, "RTTICompound");
	del_items(0x1546058, DELIT_SIMPLE, 8);
	apply_type(0x1546058, "RTTIBase[1]");
	set_name(0x1546058, "AIHtnPlannerDaemonIdleSMG::sBases");

	// AIHtnPlannerDaemonIndividualCallTerms
	set_name(0x14d426c, "AIHtnPlannerDaemonIndividualCallTerms");
	apply_type(0x14d426c, "RTTICompound");
	del_items(0x14d44f8, DELIT_SIMPLE, 8);
	apply_type(0x14d44f8, "RTTIBase[1]");
	set_name(0x14d44f8, "AIHtnPlannerDaemonIndividualCallTerms::sBases");

	// AIHtnPlannerDaemonLeadEscortSMG
	set_name(0x15449c4, "AIHtnPlannerDaemonLeadEscortSMG");
	apply_type(0x15449c4, "RTTICompound");
	del_items(0x1546048, DELIT_SIMPLE, 8);
	apply_type(0x1546048, "RTTIBase[1]");
	set_name(0x1546048, "AIHtnPlannerDaemonLeadEscortSMG::sBases");

	// AIHtnPlannerDaemonPlayerInfoSMG
	set_name(0x1544970, "AIHtnPlannerDaemonPlayerInfoSMG");
	apply_type(0x1544970, "RTTICompound");
	del_items(0x1546040, DELIT_SIMPLE, 8);
	apply_type(0x1546040, "RTTIBase[1]");
	set_name(0x1546040, "AIHtnPlannerDaemonPlayerInfoSMG::sBases");

	// AIHtnPlannerDaemonSMG
	set_name(0x154491c, "AIHtnPlannerDaemonSMG");
	apply_type(0x154491c, "RTTICompound");
	del_items(0x1546030, DELIT_SIMPLE, 8);
	apply_type(0x1546030, "RTTIBase[1]");
	set_name(0x1546030, "AIHtnPlannerDaemonSMG::sBases");

	// AIHtnPlannerDaemonSpeechSMG
	set_name(0x1544b14, "AIHtnPlannerDaemonSpeechSMG");
	apply_type(0x1544b14, "RTTICompound");
	del_items(0x1546060, DELIT_SIMPLE, 8);
	apply_type(0x1546060, "RTTIBase[1]");
	set_name(0x1546060, "AIHtnPlannerDaemonSpeechSMG::sBases");

	// AIHtnPlannerDaemonStepAsideSMG
	set_name(0x1544a18, "AIHtnPlannerDaemonStepAsideSMG");
	apply_type(0x1544a18, "RTTICompound");
	del_items(0x1546050, DELIT_SIMPLE, 8);
	apply_type(0x1546050, "RTTIBase[1]");
	set_name(0x1546050, "AIHtnPlannerDaemonStepAsideSMG::sBases");

	// AIHtnPlannerDaemonUseLocationsSMG
	set_name(0x1544a6c, "AIHtnPlannerDaemonUseLocationsSMG");
	apply_type(0x1544a6c, "RTTICompound");
	del_items(0x1546038, DELIT_SIMPLE, 8);
	apply_type(0x1546038, "RTTIBase[1]");
	set_name(0x1546038, "AIHtnPlannerDaemonUseLocationsSMG::sBases");

	// AIHtnPlannerDaemonUtilityCallTerms
	set_name(0x14d3ec0, "AIHtnPlannerDaemonUtilityCallTerms");
	apply_type(0x14d3ec0, "RTTICompound");
	del_items(0x14d43d8, DELIT_SIMPLE, 8);
	apply_type(0x14d43d8, "RTTIBase[1]");
	set_name(0x14d43d8, "AIHtnPlannerDaemonUtilityCallTerms::sBases");

	// AIHtnPlannerDaemonUtilityCallTermsGame
	set_name(0x14f5704, "AIHtnPlannerDaemonUtilityCallTermsGame");
	apply_type(0x14f5704, "RTTICompound");
	del_items(0x14f6770, DELIT_SIMPLE, 8);
	apply_type(0x14f6770, "RTTIBase[1]");
	set_name(0x14f6770, "AIHtnPlannerDaemonUtilityCallTermsGame::sBases");

	// AIHtnPrimitiveTaskSMG
	set_name(0x1544b68, "AIHtnPrimitiveTaskSMG");
	apply_type(0x1544b68, "RTTICompound");
	del_items(0x154672c, DELIT_SIMPLE, 8);
	apply_type(0x154672c, "RTTIBase[1]");
	set_name(0x154672c, "AIHtnPrimitiveTaskSMG::sBases");

	// AIIdleBehaviour
	set_name(0x1544660, "AIIdleBehaviour");
	apply_type(0x1544660, "RTTICompound");
	del_items(0x1546a48, DELIT_SIMPLE, 8);
	apply_type(0x1546a48, "RTTIBase[1]");
	set_name(0x1546a48, "AIIdleBehaviour::sBases");
	del_items(0x1546a50, DELIT_SIMPLE, 336);
	apply_type(0x1546a50, "RTTIAttr[12]");
	set_name(0x1546a50, "AIIdleBehaviour::sAttrs");

	// AIIdleObject
	set_name(0x14cf0fc, "AIIdleObject");
	apply_type(0x14cf0fc, "RTTICompound");

	// AIIndividual
	set_name(0x14cf154, "AIIndividual");
	apply_type(0x14cf154, "RTTICompound");
	del_items(0x14d09c4, DELIT_SIMPLE, 8);
	apply_type(0x14d09c4, "RTTIBase[1]");
	set_name(0x14d09c4, "AIIndividual::sBases");

	// AIIndividualConfig
	set_name(0x14cfc18, "AIIndividualConfig");
	apply_type(0x14cfc18, "RTTICompound");
	del_items(0x14d09cc, DELIT_SIMPLE, 8);
	apply_type(0x14d09cc, "RTTIBase[1]");
	set_name(0x14d09cc, "AIIndividualConfig::sBases");
	del_items(0x14d09d4, DELIT_SIMPLE, 1344);
	apply_type(0x14d09d4, "RTTIAttr[48]");
	set_name(0x14d09d4, "AIIndividualConfig::sAttrs");

	// AIIndividualConfigGame
	set_name(0x14f4844, "AIIndividualConfigGame");
	apply_type(0x14f4844, "RTTICompound");
	del_items(0x14f5214, DELIT_SIMPLE, 8);
	apply_type(0x14f5214, "RTTIBase[1]");
	set_name(0x14f5214, "AIIndividualConfigGame::sBases");
	del_items(0x14f521c, DELIT_SIMPLE, 364);
	apply_type(0x14f521c, "RTTIAttr[13]");
	set_name(0x14f521c, "AIIndividualConfigGame::sAttrs");

	// AIIndividualHook
	set_name(0x14cfc6c, "AIIndividualHook");
	apply_type(0x14cfc6c, "RTTICompound");
	del_items(0x14d1218, DELIT_SIMPLE, 8);
	apply_type(0x14d1218, "RTTIBase[1]");
	set_name(0x14d1218, "AIIndividualHook::sBases");

	// AIIndividualHookHtnPlanner
	set_name(0x14d3f78, "AIIndividualHookHtnPlanner");
	apply_type(0x14d3f78, "RTTICompound");
	del_items(0x14d4498, DELIT_SIMPLE, 8);
	apply_type(0x14d4498, "RTTIBase[1]");
	set_name(0x14d4498, "AIIndividualHookHtnPlanner::sBases");

	// AIIndividualHookHtnPlannerResource
	set_name(0x14d3fcc, "AIIndividualHookHtnPlannerResource");
	apply_type(0x14d3fcc, "RTTICompound");
	del_items(0x14d4458, DELIT_SIMPLE, 8);
	apply_type(0x14d4458, "RTTIBase[1]");
	set_name(0x14d4458, "AIIndividualHookHtnPlannerResource::sBases");
	del_items(0x14d4460, DELIT_SIMPLE, 56);
	apply_type(0x14d4460, "RTTIAttr[2]");
	set_name(0x14d4460, "AIIndividualHookHtnPlannerResource::sAttrs");

	// AIIndividualHookResource
	set_name(0x14cfcd0, "AIIndividualHookResource");
	apply_type(0x14cfcd0, "RTTICompound");
	del_items(0x14d1220, DELIT_SIMPLE, 8);
	apply_type(0x14d1220, "RTTIBase[1]");
	set_name(0x14d1220, "AIIndividualHookResource::sBases");

	// AIIndividualResource
	set_name(0x14cfd24, "AIIndividualResource");
	apply_type(0x14cfd24, "RTTICompound");
	del_items(0x14d07a8, DELIT_SIMPLE, 8);
	apply_type(0x14d07a8, "RTTIBase[1]");
	set_name(0x14d07a8, "AIIndividualResource::sBases");
	del_items(0x14d07b0, DELIT_SIMPLE, 532);
	apply_type(0x14d07b0, "RTTIAttr[19]");
	set_name(0x14d07b0, "AIIndividualResource::sAttrs");

	// AIInteractionActivation
	set_name(0x154e21c, "AIInteractionActivation");
	apply_type(0x154e21c, "RTTICompound");
	del_items(0x154edd8, DELIT_SIMPLE, 8);
	apply_type(0x154edd8, "RTTIBase[1]");
	set_name(0x154edd8, "AIInteractionActivation::sBases");

	// AIInteractionActivationResource
	set_name(0x154e270, "AIInteractionActivationResource");
	apply_type(0x154e270, "RTTICompound");
	del_items(0x154ede0, DELIT_SIMPLE, 8);
	apply_type(0x154ede0, "RTTIBase[1]");
	set_name(0x154ede0, "AIInteractionActivationResource::sBases");

	// AIInventoryAmmoEjectorInterface
	set_name(0x14f8984, "AIInventoryAmmoEjectorInterface");
	apply_type(0x14f8984, "RTTICompound");
	del_items(0x14fd494, DELIT_SIMPLE, 8);
	apply_type(0x14fd494, "RTTIBase[1]");
	set_name(0x14fd494, "AIInventoryAmmoEjectorInterface::sBases");

	// AIInventoryBadgeAbilityInterface
	set_name(0x14f8a2c, "AIInventoryBadgeAbilityInterface");
	apply_type(0x14f8a2c, "RTTICompound");
	del_items(0x14fd4a4, DELIT_SIMPLE, 8);
	apply_type(0x14fd4a4, "RTTIBase[1]");
	set_name(0x14fd4a4, "AIInventoryBadgeAbilityInterface::sBases");

	// AIInventoryPlaceableInterface
	set_name(0x14f851c, "AIInventoryPlaceableInterface");
	apply_type(0x14f851c, "RTTICompound");
	del_items(0x14f8970, DELIT_SIMPLE, 8);
	apply_type(0x14f8970, "RTTIBase[1]");
	set_name(0x14f8970, "AIInventoryPlaceableInterface::sBases");

	// AIInventoryRocketLauncherInterface
	set_name(0x14f8570, "AIInventoryRocketLauncherInterface");
	apply_type(0x14f8570, "RTTICompound");
	del_items(0x14f8978, DELIT_SIMPLE, 8);
	apply_type(0x14f8978, "RTTIBase[1]");
	set_name(0x14f8978, "AIInventoryRocketLauncherInterface::sBases");

	// AIInventoryThrowableInterface
	set_name(0x14f89d8, "AIInventoryThrowableInterface");
	apply_type(0x14f89d8, "RTTICompound");
	del_items(0x14fd49c, DELIT_SIMPLE, 8);
	apply_type(0x14fd49c, "RTTIBase[1]");
	set_name(0x14fd49c, "AIInventoryThrowableInterface::sBases");

	// AIInventoryWeaponInterface
	set_name(0x14f8420, "AIInventoryWeaponInterface");
	apply_type(0x14f8420, "RTTICompound");
	del_items(0x14f85d4, DELIT_SIMPLE, 8);
	apply_type(0x14f85d4, "RTTIBase[1]");
	set_name(0x14f85d4, "AIInventoryWeaponInterface::sBases");

	// AILeadEscortBehaviour
	set_name(0x1544728, "AILeadEscortBehaviour");
	apply_type(0x1544728, "RTTICompound");
	del_items(0x1546ba0, DELIT_SIMPLE, 8);
	apply_type(0x1546ba0, "RTTIBase[1]");
	set_name(0x1546ba0, "AILeadEscortBehaviour::sBases");
	del_items(0x1546ba8, DELIT_SIMPLE, 420);
	apply_type(0x1546ba8, "RTTIAttr[15]");
	set_name(0x1546ba8, "AILeadEscortBehaviour::sAttrs");

	// AILinkTypeInfo
	set_name(0x14d68a0, "AILinkTypeInfo");
	apply_type(0x14d68a0, "RTTICompound");
	del_items(0x14d8cb0, DELIT_SIMPLE, 8);
	apply_type(0x14d8cb0, "RTTIBase[1]");
	set_name(0x14d8cb0, "AILinkTypeInfo::sBases");

	// AILinkTypeInfoJump
	set_name(0x14d6948, "AILinkTypeInfoJump");
	apply_type(0x14d6948, "RTTICompound");
	del_items(0x14d8cf8, DELIT_SIMPLE, 8);
	apply_type(0x14d8cf8, "RTTIBase[1]");
	set_name(0x14d8cf8, "AILinkTypeInfoJump::sBases");
	del_items(0x14d8d00, DELIT_SIMPLE, 28);
	apply_type(0x14d8d00, "RTTIAttr[1]");
	set_name(0x14d8d00, "AILinkTypeInfoJump::sAttrs");

	// AILinkTypeInfoSpecialObject
	set_name(0x14d68f4, "AILinkTypeInfoSpecialObject");
	apply_type(0x14d68f4, "RTTICompound");
	del_items(0x14d8cb8, DELIT_SIMPLE, 8);
	apply_type(0x14d8cb8, "RTTIBase[1]");
	set_name(0x14d8cb8, "AILinkTypeInfoSpecialObject::sBases");
	del_items(0x14d8cc0, DELIT_SIMPLE, 56);
	apply_type(0x14d8cc0, "RTTIAttr[2]");
	set_name(0x14d8cc0, "AILinkTypeInfoSpecialObject::sAttrs");

	// AILookBehaviour
	set_name(0x15445fc, "AILookBehaviour");
	apply_type(0x15445fc, "RTTICompound");
	del_items(0x15463a4, DELIT_SIMPLE, 8);
	apply_type(0x15463a4, "RTTIBase[1]");
	set_name(0x15463a4, "AILookBehaviour::sBases");
	del_items(0x15463ac, DELIT_SIMPLE, 896);
	apply_type(0x15463ac, "RTTIAttr[32]");
	set_name(0x15463ac, "AILookBehaviour::sAttrs");

	// AILookContext
	set_name(0x154479c, "AILookContext");
	apply_type(0x154479c, "RTTICompound");
	del_items(0x15468dc, DELIT_SIMPLE, 8);
	apply_type(0x15468dc, "RTTIBase[1]");
	set_name(0x15468dc, "AILookContext::sBases");
	del_items(0x15468e4, DELIT_SIMPLE, 56);
	apply_type(0x15468e4, "RTTIAttr[2]");
	set_name(0x15468e4, "AILookContext::sAttrs");
	del_items(0x154691c, DELIT_SIMPLE, 12);
	apply_type(0x154691c, "RTTIMessageHandler[1]");
	set_name(0x154691c, "AILookContext::sMessageHandlers");

	// AILookContextGroup
	set_name(0x1544800, "AILookContextGroup");
	apply_type(0x1544800, "RTTICompound");
	del_items(0x15467c0, DELIT_SIMPLE, 8);
	apply_type(0x15467c0, "RTTIBase[1]");
	set_name(0x15467c0, "AILookContextGroup::sBases");
	del_items(0x15467c8, DELIT_SIMPLE, 56);
	apply_type(0x15467c8, "RTTIAttr[2]");
	set_name(0x15467c8, "AILookContextGroup::sAttrs");

	// AIManager
	set_name(0x14cf214, "AIManager");
	apply_type(0x14cf214, "RTTICompound");
	del_items(0x14d10fc, DELIT_SIMPLE, 8);
	apply_type(0x14d10fc, "RTTIBase[1]");
	set_name(0x14d10fc, "AIManager::sBases");
	del_items(0x14d1104, DELIT_SIMPLE, 264);
	apply_type(0x14d1104, "RTTIFunction[11]");
	set_name(0x14d1104, "AIManager::sFunctions");
	del_items(0x14d120c, DELIT_SIMPLE, 12);
	apply_type(0x14d120c, "RTTIMessageHandler[1]");
	set_name(0x14d120c, "AIManager::sMessageHandlers");

	// AIManagerGame
	set_name(0x14f489c, "AIManagerGame");
	apply_type(0x14f489c, "RTTICompound");
	del_items(0x14f51dc, DELIT_SIMPLE, 8);
	apply_type(0x14f51dc, "RTTIBase[1]");
	set_name(0x14f51dc, "AIManagerGame::sBases");
	del_items(0x14f51e4, DELIT_SIMPLE, 48);
	apply_type(0x14f51e4, "RTTIFunction[2]");
	set_name(0x14f51e4, "AIManagerGame::sFunctions");

	// AIManagerSMG
	set_name(0x15441e0, "AIManagerSMG");
	apply_type(0x15441e0, "RTTICompound");
	del_items(0x1546020, DELIT_SIMPLE, 8);
	apply_type(0x1546020, "RTTIBase[1]");
	set_name(0x1546020, "AIManagerSMG::sBases");

	// AIMarker
	set_name(0x14cf54c, "AIMarker");
	apply_type(0x14cf54c, "RTTICompound");
	del_items(0x14d0424, DELIT_SIMPLE, 8);
	apply_type(0x14d0424, "RTTIBase[1]");
	set_name(0x14d0424, "AIMarker::sBases");
	del_items(0x14d042c, DELIT_SIMPLE, 168);
	apply_type(0x14d042c, "RTTIAttr[6]");
	set_name(0x14d042c, "AIMarker::sAttrs");

	// AIMarkerLocatorInstance
	set_name(0x151fd00, "AIMarkerLocatorInstance");
	apply_type(0x151fd00, "RTTICompound");
	del_items(0x152156c, DELIT_SIMPLE, 8);
	apply_type(0x152156c, "RTTIBase[1]");
	set_name(0x152156c, "AIMarkerLocatorInstance::sBases");

	// AIMarkerLocatorResource
	set_name(0x151fcac, "AIMarkerLocatorResource");
	apply_type(0x151fcac, "RTTICompound");
	del_items(0x1521510, DELIT_SIMPLE, 8);
	apply_type(0x1521510, "RTTIBase[1]");
	set_name(0x1521510, "AIMarkerLocatorResource::sBases");
	del_items(0x1521518, DELIT_SIMPLE, 84);
	apply_type(0x1521518, "RTTIAttr[3]");
	set_name(0x1521518, "AIMarkerLocatorResource::sAttrs");

	// AIMountableObject
	set_name(0x14cf5a0, "AIMountableObject");
	apply_type(0x14cf5a0, "RTTICompound");

	// AIMountedGunInterface
	set_name(0x14f8474, "AIMountedGunInterface");
	apply_type(0x14f8474, "RTTICompound");
	del_items(0x14f8960, DELIT_SIMPLE, 8);
	apply_type(0x14f8960, "RTTIBase[1]");
	set_name(0x14f8960, "AIMountedGunInterface::sBases");

	// AIMovementBehaviour
	set_name(0x1544534, "AIMovementBehaviour");
	apply_type(0x1544534, "RTTICompound");
	del_items(0x1546348, DELIT_SIMPLE, 8);
	apply_type(0x1546348, "RTTIBase[1]");
	set_name(0x1546348, "AIMovementBehaviour::sBases");
	del_items(0x1546350, DELIT_SIMPLE, 84);
	apply_type(0x1546350, "RTTIAttr[3]");
	set_name(0x1546350, "AIMovementBehaviour::sAttrs");

	// AIMovementContext
	set_name(0x1544874, "AIMovementContext");
	apply_type(0x1544874, "RTTICompound");
	del_items(0x1546068, DELIT_SIMPLE, 8);
	apply_type(0x1546068, "RTTIBase[1]");
	set_name(0x1546068, "AIMovementContext::sBases");
	del_items(0x1546070, DELIT_SIMPLE, 224);
	apply_type(0x1546070, "RTTIAttr[8]");
	set_name(0x1546070, "AIMovementContext::sAttrs");
	del_items(0x1546150, DELIT_SIMPLE, 12);
	apply_type(0x1546150, "RTTIMessageHandler[1]");
	set_name(0x1546150, "AIMovementContext::sMessageHandlers");

	// AIMovementContextGroup
	set_name(0x15448c8, "AIMovementContextGroup");
	apply_type(0x15448c8, "RTTICompound");
	del_items(0x1546d4c, DELIT_SIMPLE, 8);
	apply_type(0x1546d4c, "RTTIBase[1]");
	set_name(0x1546d4c, "AIMovementContextGroup::sBases");
	del_items(0x1546d54, DELIT_SIMPLE, 56);
	apply_type(0x1546d54, "RTTIAttr[2]");
	set_name(0x1546d54, "AIMovementContextGroup::sAttrs");

	// AINearestWaypoint
	set_name(0x14d6a10, "AINearestWaypoint");
	apply_type(0x14d6a10, "RTTICompound");
	del_items(0x14d8b60, DELIT_SIMPLE, 8);
	apply_type(0x14d8b60, "RTTIBase[1]");
	set_name(0x14d8b60, "AINearestWaypoint::sBases");
	del_items(0x14d8b68, DELIT_SIMPLE, 56);
	apply_type(0x14d8b68, "RTTIAttr[2]");
	set_name(0x14d8b68, "AINearestWaypoint::sAttrs");

	// AINullWeaponInterface
	set_name(0x14f84c8, "AINullWeaponInterface");
	apply_type(0x14f84c8, "RTTICompound");
	del_items(0x14f8968, DELIT_SIMPLE, 8);
	apply_type(0x14f8968, "RTTIBase[1]");
	set_name(0x14f8968, "AINullWeaponInterface::sBases");

	// AIObstacleAvoidanceCostsLookup
	set_name(0x14d69ac, "AIObstacleAvoidanceCostsLookup");
	apply_type(0x14d69ac, "RTTICompound");
	del_items(0x14d7664, DELIT_SIMPLE, 56);
	apply_type(0x14d7664, "RTTIAttr[2]");
	set_name(0x14d7664, "AIObstacleAvoidanceCostsLookup::sAttrs");

	// AIParameterId
	set_name(0x14cecac, "AIParameterId");
	apply_type(0x14cecac, "RTTICompound");
	del_items(0x14d04d8, DELIT_SIMPLE, 56);
	apply_type(0x14d04d8, "RTTIAttr[2]");
	set_name(0x14d04d8, "AIParameterId::sAttrs");

	// AIPerception
	set_name(0x14cf608, "AIPerception");
	apply_type(0x14cf608, "RTTICompound");
	del_items(0x14d132c, DELIT_SIMPLE, 8);
	apply_type(0x14d132c, "RTTIBase[1]");
	set_name(0x14d132c, "AIPerception::sBases");
	del_items(0x14d1334, DELIT_SIMPLE, 812);
	apply_type(0x14d1334, "RTTIAttr[29]");
	set_name(0x14d1334, "AIPerception::sAttrs");
	del_items(0x14d1660, DELIT_SIMPLE, 12);
	apply_type(0x14d1660, "RTTIMessageHandler[1]");
	set_name(0x14d1660, "AIPerception::sMessageHandlers");

	// AIPersonalSpacePositionPickerSettings
	set_name(0x14d6a64, "AIPersonalSpacePositionPickerSettings");
	apply_type(0x14d6a64, "RTTICompound");
	del_items(0x14d7c7c, DELIT_SIMPLE, 224);
	apply_type(0x14d7c7c, "RTTIAttr[8]");
	set_name(0x14d7c7c, "AIPersonalSpacePositionPickerSettings::sAttrs");

	// AIPlayAnimationObject
	set_name(0x1545348, "AIPlayAnimationObject");
	apply_type(0x1545348, "RTTICompound");
	del_items(0x1546e3c, DELIT_SIMPLE, 8);
	apply_type(0x1546e3c, "RTTIBase[1]");
	set_name(0x1546e3c, "AIPlayAnimationObject::sBases");

	// AIPlayAnimationObjectLocalSpace
	set_name(0x15454ec, "AIPlayAnimationObjectLocalSpace");
	apply_type(0x15454ec, "RTTICompound");
	del_items(0x154701c, DELIT_SIMPLE, 8);
	apply_type(0x154701c, "RTTIBase[1]");
	set_name(0x154701c, "AIPlayAnimationObjectLocalSpace::sBases");
	del_items(0x1547024, DELIT_SIMPLE, 24);
	apply_type(0x1547024, "RTTIFunction[1]");
	set_name(0x1547024, "AIPlayAnimationObjectLocalSpace::sFunctions");

	// AIPlayAnimationObjectLocalSpaceResource
	set_name(0x1545540, "AIPlayAnimationObjectLocalSpaceResource");
	apply_type(0x1545540, "RTTICompound");
	del_items(0x1547014, DELIT_SIMPLE, 8);
	apply_type(0x1547014, "RTTIBase[1]");
	set_name(0x1547014, "AIPlayAnimationObjectLocalSpaceResource::sBases");

	// AIPlayAnimationObjectResource
	set_name(0x154539c, "AIPlayAnimationObjectResource");
	apply_type(0x154539c, "RTTICompound");
	del_items(0x1546da8, DELIT_SIMPLE, 8);
	apply_type(0x1546da8, "RTTIBase[1]");
	set_name(0x1546da8, "AIPlayAnimationObjectResource::sBases");
	del_items(0x1546db0, DELIT_SIMPLE, 140);
	apply_type(0x1546db0, "RTTIAttr[5]");
	set_name(0x1546db0, "AIPlayAnimationObjectResource::sAttrs");

	// AIPlayerBehaviorCategories
	set_name(0x14d6300, "AIPlayerBehaviorCategories");
	apply_type(0x14d6300, "RTTICompound");
	del_items(0x14d66f0, DELIT_SIMPLE, 8);
	apply_type(0x14d66f0, "RTTIBase[1]");
	set_name(0x14d66f0, "AIPlayerBehaviorCategories::sBases");
	del_items(0x14d66f8, DELIT_SIMPLE, 56);
	apply_type(0x14d66f8, "RTTIAttr[2]");
	set_name(0x14d66f8, "AIPlayerBehaviorCategories::sAttrs");
	del_items(0x14d6730, DELIT_SIMPLE, 12);
	apply_type(0x14d6730, "RTTIMessageHandler[1]");
	set_name(0x14d6730, "AIPlayerBehaviorCategories::sMessageHandlers");

	// AIPlayerBehaviorCategory
	set_name(0x14d62ac, "AIPlayerBehaviorCategory");
	apply_type(0x14d62ac, "RTTICompound");
	del_items(0x14d669c, DELIT_SIMPLE, 84);
	apply_type(0x14d669c, "RTTIAttr[3]");
	set_name(0x14d669c, "AIPlayerBehaviorCategory::sAttrs");

	// AIPlayerPerformanceFeedbackResource
	set_name(0x14f4bc4, "AIPlayerPerformanceFeedbackResource");
	apply_type(0x14f4bc4, "RTTICompound");
	del_items(0x14f5458, DELIT_SIMPLE, 8);
	apply_type(0x14f5458, "RTTIBase[1]");
	set_name(0x14f5458, "AIPlayerPerformanceFeedbackResource::sBases");
	del_items(0x14f5460, DELIT_SIMPLE, 588);
	apply_type(0x14f5460, "RTTIAttr[21]");
	set_name(0x14f5460, "AIPlayerPerformanceFeedbackResource::sAttrs");

	// AIPlayerSquadGame
	set_name(0x14f4c18, "AIPlayerSquadGame");
	apply_type(0x14f4c18, "RTTICompound");
	del_items(0x14f5450, DELIT_SIMPLE, 8);
	apply_type(0x14f5450, "RTTIBase[1]");
	set_name(0x14f5450, "AIPlayerSquadGame::sBases");

	// AIPointOfInterest
	set_name(0x15453f0, "AIPointOfInterest");
	apply_type(0x15453f0, "RTTICompound");
	del_items(0x1546f54, DELIT_SIMPLE, 8);
	apply_type(0x1546f54, "RTTIBase[1]");
	set_name(0x1546f54, "AIPointOfInterest::sBases");

	// AIPointOfInterestManager
	set_name(0x1545498, "AIPointOfInterestManager");
	apply_type(0x1545498, "RTTICompound");
	del_items(0x1545fd0, DELIT_SIMPLE, 8);
	apply_type(0x1545fd0, "RTTIBase[1]");
	set_name(0x1545fd0, "AIPointOfInterestManager::sBases");

	// AIPointOfInterestResource
	set_name(0x1545444, "AIPointOfInterestResource");
	apply_type(0x1545444, "RTTICompound");
	del_items(0x1546e50, DELIT_SIMPLE, 8);
	apply_type(0x1546e50, "RTTIBase[1]");
	set_name(0x1546e50, "AIPointOfInterestResource::sBases");
	del_items(0x1546e58, DELIT_SIMPLE, 252);
	apply_type(0x1546e58, "RTTIAttr[9]");
	set_name(0x1546e58, "AIPointOfInterestResource::sAttrs");

	// AIPositionPickerResource
	set_name(0x14d6ad8, "AIPositionPickerResource");
	apply_type(0x14d6ad8, "RTTICompound");
	del_items(0x14d7d5c, DELIT_SIMPLE, 8);
	apply_type(0x14d7d5c, "RTTIBase[1]");
	set_name(0x14d7d5c, "AIPositionPickerResource::sBases");
	del_items(0x14d7d64, DELIT_SIMPLE, 3248);
	apply_type(0x14d7d64, "RTTIAttr[116]");
	set_name(0x14d7d64, "AIPositionPickerResource::sAttrs");
	del_items(0x14d8a14, DELIT_SIMPLE, 12);
	apply_type(0x14d8a14, "RTTIMessageHandler[1]");
	set_name(0x14d8a14, "AIPositionPickerResource::sMessageHandlers");

	// AIPursuePositionPickerResource
	set_name(0x14d6c8c, "AIPursuePositionPickerResource");
	apply_type(0x14d6c8c, "RTTICompound");
	del_items(0x14d8a5c, DELIT_SIMPLE, 8);
	apply_type(0x14d8a5c, "RTTIBase[1]");
	set_name(0x14d8a5c, "AIPursuePositionPickerResource::sBases");

	// AIReservedObject
	set_name(0x14cf65c, "AIReservedObject");
	apply_type(0x14cf65c, "RTTICompound");

	// AIScanContextResource
	set_name(0x14cfd88, "AIScanContextResource");
	apply_type(0x14cfd88, "RTTICompound");
	del_items(0x14d2188, DELIT_SIMPLE, 8);
	apply_type(0x14d2188, "RTTIBase[1]");
	set_name(0x14d2188, "AIScanContextResource::sBases");
	del_items(0x14d2190, DELIT_SIMPLE, 476);
	apply_type(0x14d2190, "RTTIAttr[17]");
	set_name(0x14d2190, "AIScanContextResource::sAttrs");

	// AISearchPositionPickerResource
	set_name(0x14d6ce0, "AISearchPositionPickerResource");
	apply_type(0x14d6ce0, "RTTICompound");
	del_items(0x14d8a64, DELIT_SIMPLE, 8);
	apply_type(0x14d8a64, "RTTIBase[1]");
	set_name(0x14d8a64, "AISearchPositionPickerResource::sBases");

	// AISectors16
	set_name(0x14cf6b0, "AISectors16");
	apply_type(0x14cf6b0, "RTTICompound");
	del_items(0x14d1cac, DELIT_SIMPLE, 28);
	apply_type(0x14d1cac, "RTTIAttr[1]");
	set_name(0x14d1cac, "AISectors16::sAttrs");

	// AISequencedAimRow
	set_name(0x14cf714, "AISequencedAimRow");
	apply_type(0x14cf714, "RTTICompound");
	del_items(0x14d1cd0, DELIT_SIMPLE, 112);
	apply_type(0x14d1cd0, "RTTIAttr[4]");
	set_name(0x14d1cd0, "AISequencedAimRow::sAttrs");

	// AISequencedWeaponOperationInstance
	set_name(0x14cf7bc, "AISequencedWeaponOperationInstance");
	apply_type(0x14cf7bc, "RTTICompound");
	del_items(0x14d1dfc, DELIT_SIMPLE, 8);
	apply_type(0x14d1dfc, "RTTIBase[1]");
	set_name(0x14d1dfc, "AISequencedWeaponOperationInstance::sBases");

	// AISequencedWeaponOperationResource
	set_name(0x14cf768, "AISequencedWeaponOperationResource");
	apply_type(0x14cf768, "RTTICompound");
	del_items(0x14d1d40, DELIT_SIMPLE, 8);
	apply_type(0x14d1d40, "RTTIBase[1]");
	set_name(0x14d1d40, "AISequencedWeaponOperationResource::sBases");
	del_items(0x14d1d48, DELIT_SIMPLE, 168);
	apply_type(0x14d1d48, "RTTIAttr[6]");
	set_name(0x14d1d48, "AISequencedWeaponOperationResource::sAttrs");
	del_items(0x14d1df0, DELIT_SIMPLE, 12);
	apply_type(0x14d1df0, "RTTIMessageHandler[1]");
	set_name(0x14d1df0, "AISequencedWeaponOperationResource::sMessageHandlers");

	// AISignalManager
	set_name(0x14cf884, "AISignalManager");
	apply_type(0x14cf884, "RTTICompound");
	del_items(0x14d01fc, DELIT_SIMPLE, 8);
	apply_type(0x14d01fc, "RTTIBase[1]");
	set_name(0x14d01fc, "AISignalManager::sBases");

	// AISignalType
	set_name(0x14cf830, "AISignalType");
	apply_type(0x14cf830, "RTTICompound");
	del_items(0x14cfee8, DELIT_SIMPLE, 8);
	apply_type(0x14cfee8, "RTTIBase[1]");
	set_name(0x14cfee8, "AISignalType::sBases");
	del_items(0x14cfef0, DELIT_SIMPLE, 672);
	apply_type(0x14cfef0, "RTTIAttr[24]");
	set_name(0x14cfef0, "AISignalType::sAttrs");
	del_items(0x14d0190, DELIT_SIMPLE, 96);
	apply_type(0x14d0190, "RTTIFunction[4]");
	set_name(0x14d0190, "AISignalType::sFunctions");
	del_items(0x14d01f0, DELIT_SIMPLE, 12);
	apply_type(0x14d01f0, "RTTIMessageHandler[1]");
	set_name(0x14d01f0, "AISignalType::sMessageHandlers");

	// AISkillAimAt
	set_name(0x14d2d6c, "AISkillAimAt");
	apply_type(0x14d2d6c, "RTTICompound");
	del_items(0x14d3630, DELIT_SIMPLE, 8);
	apply_type(0x14d3630, "RTTIBase[1]");
	set_name(0x14d3630, "AISkillAimAt::sBases");

	// AISkillAimGame
	set_name(0x14f6c48, "AISkillAimGame");
	apply_type(0x14f6c48, "RTTICompound");
	del_items(0x14f71d8, DELIT_SIMPLE, 8);
	apply_type(0x14f71d8, "RTTIBase[1]");
	set_name(0x14f71d8, "AISkillAimGame::sBases");

	// AISkillAimTurnOnSpot
	set_name(0x14f6c9c, "AISkillAimTurnOnSpot");
	apply_type(0x14f6c9c, "RTTICompound");
	del_items(0x14f71e0, DELIT_SIMPLE, 8);
	apply_type(0x14f71e0, "RTTIBase[1]");
	set_name(0x14f71e0, "AISkillAimTurnOnSpot::sBases");

	// AISkillAimTurnOnSpotAirVehicle
	set_name(0x14f74a4, "AISkillAimTurnOnSpotAirVehicle");
	apply_type(0x14f74a4, "RTTICompound");
	del_items(0x14f860c, DELIT_SIMPLE, 8);
	apply_type(0x14f860c, "RTTIBase[1]");
	set_name(0x14f860c, "AISkillAimTurnOnSpotAirVehicle::sBases");

	// AISkillAimTurnTroopCarrier
	set_name(0x14f75f4, "AISkillAimTurnTroopCarrier");
	apply_type(0x14f75f4, "RTTICompound");
	del_items(0x14f862c, DELIT_SIMPLE, 8);
	apply_type(0x14f862c, "RTTIBase[1]");
	set_name(0x14f862c, "AISkillAimTurnTroopCarrier::sBases");

	// AISkillBase
	set_name(0x14d2dc0, "AISkillBase");
	apply_type(0x14d2dc0, "RTTICompound");
	del_items(0x14d344c, DELIT_SIMPLE, 8);
	apply_type(0x14d344c, "RTTIBase[1]");
	set_name(0x14d344c, "AISkillBase::sBases");

	// AISkillChangeCarry
	set_name(0x14f7258, "AISkillChangeCarry");
	apply_type(0x14f7258, "RTTICompound");
	del_items(0x14f85c4, DELIT_SIMPLE, 8);
	apply_type(0x14f85c4, "RTTIBase[1]");
	set_name(0x14f85c4, "AISkillChangeCarry::sBases");

	// AISkillCloseCombat
	set_name(0x14f72ac, "AISkillCloseCombat");
	apply_type(0x14f72ac, "RTTICompound");
	del_items(0x14f85cc, DELIT_SIMPLE, 8);
	apply_type(0x14f85cc, "RTTIBase[1]");
	set_name(0x14f85cc, "AISkillCloseCombat::sBases");

	// AISkillCoverMountedGun
	set_name(0x14f6cf0, "AISkillCoverMountedGun");
	apply_type(0x14f6cf0, "RTTICompound");
	del_items(0x14f71e8, DELIT_SIMPLE, 8);
	apply_type(0x14f71e8, "RTTIBase[1]");
	set_name(0x14f71e8, "AISkillCoverMountedGun::sBases");

	// AISkillCustomAction
	set_name(0x14f7bdc, "AISkillCustomAction");
	apply_type(0x14f7bdc, "RTTICompound");
	del_items(0x14f86bc, DELIT_SIMPLE, 8);
	apply_type(0x14f86bc, "RTTIBase[1]");
	set_name(0x14f86bc, "AISkillCustomAction::sBases");

	// AISkillDismount
	set_name(0x14f6d44, "AISkillDismount");
	apply_type(0x14f6d44, "RTTICompound");
	del_items(0x14f71f0, DELIT_SIMPLE, 8);
	apply_type(0x14f71f0, "RTTIBase[1]");
	set_name(0x14f71f0, "AISkillDismount::sBases");

	// AISkillDodge
	set_name(0x14f6d98, "AISkillDodge");
	apply_type(0x14f6d98, "RTTICompound");
	del_items(0x14f71f8, DELIT_SIMPLE, 8);
	apply_type(0x14f71f8, "RTTIBase[1]");
	set_name(0x14f71f8, "AISkillDodge::sBases");

	// AISkillDrive
	set_name(0x14d2e98, "AISkillDrive");
	apply_type(0x14d2e98, "RTTICompound");
	del_items(0x14d396c, DELIT_SIMPLE, 8);
	apply_type(0x14d396c, "RTTIBase[1]");
	set_name(0x14d396c, "AISkillDrive::sBases");

	// AISkillDriveAlongPathBase
	set_name(0x14f6dec, "AISkillDriveAlongPathBase");
	apply_type(0x14f6dec, "RTTICompound");
	del_items(0x14f7200, DELIT_SIMPLE, 8);
	apply_type(0x14f7200, "RTTIBase[1]");
	set_name(0x14f7200, "AISkillDriveAlongPathBase::sBases");

	// AISkillDriveBackup
	set_name(0x14d2eec, "AISkillDriveBackup");
	apply_type(0x14d2eec, "RTTICompound");
	del_items(0x14d3974, DELIT_SIMPLE, 8);
	apply_type(0x14d3974, "RTTIBase[1]");
	set_name(0x14d3974, "AISkillDriveBackup::sBases");

	// AISkillDriveBackupGame
	set_name(0x14f6e40, "AISkillDriveBackupGame");
	apply_type(0x14f6e40, "RTTICompound");
	del_items(0x14f7208, DELIT_SIMPLE, 8);
	apply_type(0x14f7208, "RTTIBase[1]");
	set_name(0x14f7208, "AISkillDriveBackupGame::sBases");

	// AISkillDriveBackwardGame
	set_name(0x14f6e94, "AISkillDriveBackwardGame");
	apply_type(0x14f6e94, "RTTICompound");
	del_items(0x14f7210, DELIT_SIMPLE, 8);
	apply_type(0x14f7210, "RTTIBase[1]");
	set_name(0x14f7210, "AISkillDriveBackwardGame::sBases");

	// AISkillDriveForwardGame
	set_name(0x14f6ee8, "AISkillDriveForwardGame");
	apply_type(0x14f6ee8, "RTTICompound");
	del_items(0x14f7218, DELIT_SIMPLE, 8);
	apply_type(0x14f7218, "RTTIBase[1]");
	set_name(0x14f7218, "AISkillDriveForwardGame::sBases");

	// AISkillDriveHoldGame
	set_name(0x14f6f3c, "AISkillDriveHoldGame");
	apply_type(0x14f6f3c, "RTTICompound");
	del_items(0x14f7220, DELIT_SIMPLE, 8);
	apply_type(0x14f7220, "RTTIBase[1]");
	set_name(0x14f7220, "AISkillDriveHoldGame::sBases");

	// AISkillDriveMidAir
	set_name(0x14f6f90, "AISkillDriveMidAir");
	apply_type(0x14f6f90, "RTTICompound");
	del_items(0x14f7228, DELIT_SIMPLE, 8);
	apply_type(0x14f7228, "RTTIBase[1]");
	set_name(0x14f7228, "AISkillDriveMidAir::sBases");

	// AISkillDriveQuickTurn
	set_name(0x14d2f40, "AISkillDriveQuickTurn");
	apply_type(0x14d2f40, "RTTICompound");
	del_items(0x14d3c90, DELIT_SIMPLE, 8);
	apply_type(0x14d3c90, "RTTIBase[1]");
	set_name(0x14d3c90, "AISkillDriveQuickTurn::sBases");

	// AISkillDriveQuickTurnGame
	set_name(0x14f6fe4, "AISkillDriveQuickTurnGame");
	apply_type(0x14f6fe4, "RTTICompound");
	del_items(0x14f7230, DELIT_SIMPLE, 8);
	apply_type(0x14f7230, "RTTIBase[1]");
	set_name(0x14f7230, "AISkillDriveQuickTurnGame::sBases");

	// AISkillDriveResource
	set_name(0x14d2e44, "AISkillDriveResource");
	apply_type(0x14d2e44, "RTTICompound");
	del_items(0x14d3638, DELIT_SIMPLE, 8);
	apply_type(0x14d3638, "RTTIBase[1]");
	set_name(0x14d3638, "AISkillDriveResource::sBases");
	del_items(0x14d3640, DELIT_SIMPLE, 812);
	apply_type(0x14d3640, "RTTIAttr[29]");
	set_name(0x14d3640, "AISkillDriveResource::sAttrs");

	// AISkillDriveSideWays
	set_name(0x14d2f94, "AISkillDriveSideWays");
	apply_type(0x14d2f94, "RTTICompound");
	del_items(0x14d3c98, DELIT_SIMPLE, 8);
	apply_type(0x14d3c98, "RTTIBase[1]");
	set_name(0x14d3c98, "AISkillDriveSideWays::sBases");

	// AISkillDriveTurnOnSpot
	set_name(0x14d2fe8, "AISkillDriveTurnOnSpot");
	apply_type(0x14d2fe8, "RTTICompound");
	del_items(0x14d3ca0, DELIT_SIMPLE, 8);
	apply_type(0x14d3ca0, "RTTIBase[1]");
	set_name(0x14d3ca0, "AISkillDriveTurnOnSpot::sBases");

	// AISkillDriveTurnOnSpotGame
	set_name(0x14f7038, "AISkillDriveTurnOnSpotGame");
	apply_type(0x14f7038, "RTTICompound");
	del_items(0x14f7238, DELIT_SIMPLE, 8);
	apply_type(0x14f7238, "RTTIBase[1]");
	set_name(0x14f7238, "AISkillDriveTurnOnSpotGame::sBases");

	// AISkillFaceGame
	set_name(0x14f708c, "AISkillFaceGame");
	apply_type(0x14f708c, "RTTICompound");
	del_items(0x14f7240, DELIT_SIMPLE, 8);
	apply_type(0x14f7240, "RTTIBase[1]");
	set_name(0x14f7240, "AISkillFaceGame::sBases");

	// AISkillFaceTowards
	set_name(0x14d303c, "AISkillFaceTowards");
	apply_type(0x14d303c, "RTTICompound");
	del_items(0x14d3ca8, DELIT_SIMPLE, 8);
	apply_type(0x14d3ca8, "RTTIBase[1]");
	set_name(0x14d3ca8, "AISkillFaceTowards::sBases");

	// AISkillFaceTurnOnSpot
	set_name(0x14f70e0, "AISkillFaceTurnOnSpot");
	apply_type(0x14f70e0, "RTTICompound");
	del_items(0x14f7248, DELIT_SIMPLE, 8);
	apply_type(0x14f7248, "RTTIBase[1]");
	set_name(0x14f7248, "AISkillFaceTurnOnSpot::sBases");

	// AISkillFacialExpression
	set_name(0x14d3090, "AISkillFacialExpression");
	apply_type(0x14d3090, "RTTICompound");
	del_items(0x14d3cb0, DELIT_SIMPLE, 8);
	apply_type(0x14d3cb0, "RTTIBase[1]");
	set_name(0x14d3cb0, "AISkillFacialExpression::sBases");

	// AISkillFacialExpressionGame
	set_name(0x14f7134, "AISkillFacialExpressionGame");
	apply_type(0x14f7134, "RTTICompound");
	del_items(0x14f7250, DELIT_SIMPLE, 8);
	apply_type(0x14f7250, "RTTIBase[1]");
	set_name(0x14f7250, "AISkillFacialExpressionGame::sBases");

	// AISkillFire
	set_name(0x14f9e80, "AISkillFire");
	apply_type(0x14f9e80, "RTTICompound");
	del_items(0x14fec7c, DELIT_SIMPLE, 8);
	apply_type(0x14fec7c, "RTTIBase[1]");
	set_name(0x14fec7c, "AISkillFire::sBases");

	// AISkillFireMountedGun
	set_name(0x14f9ed4, "AISkillFireMountedGun");
	apply_type(0x14f9ed4, "RTTICompound");
	del_items(0x14fec84, DELIT_SIMPLE, 8);
	apply_type(0x14fec84, "RTTIBase[1]");
	set_name(0x14fec84, "AISkillFireMountedGun::sBases");

	// AISkillFireTurnOnSpot
	set_name(0x14f9f28, "AISkillFireTurnOnSpot");
	apply_type(0x14f9f28, "RTTICompound");
	del_items(0x14fec8c, DELIT_SIMPLE, 8);
	apply_type(0x14fec8c, "RTTIBase[1]");
	set_name(0x14fec8c, "AISkillFireTurnOnSpot::sBases");

	// AISkillFireTurnOnSpotAirVehicle
	set_name(0x14f754c, "AISkillFireTurnOnSpotAirVehicle");
	apply_type(0x14f754c, "RTTICompound");
	del_items(0x14f861c, DELIT_SIMPLE, 8);
	apply_type(0x14f861c, "RTTIBase[1]");
	set_name(0x14f861c, "AISkillFireTurnOnSpotAirVehicle::sBases");

	// AISkillFireTurnTroopCarrier
	set_name(0x14f7648, "AISkillFireTurnTroopCarrier");
	apply_type(0x14f7648, "RTTICompound");
	del_items(0x14f8634, DELIT_SIMPLE, 8);
	apply_type(0x14f8634, "RTTIBase[1]");
	set_name(0x14f8634, "AISkillFireTurnTroopCarrier::sBases");

	// AISkillFloat
	set_name(0x14f9fd0, "AISkillFloat");
	apply_type(0x14f9fd0, "RTTICompound");
	del_items(0x14fec9c, DELIT_SIMPLE, 8);
	apply_type(0x14fec9c, "RTTIBase[1]");
	set_name(0x14fec9c, "AISkillFloat::sBases");

	// AISkillFloatBase
	set_name(0x14f9f7c, "AISkillFloatBase");
	apply_type(0x14f9f7c, "RTTICompound");
	del_items(0x14fec94, DELIT_SIMPLE, 8);
	apply_type(0x14fec94, "RTTIBase[1]");
	set_name(0x14fec94, "AISkillFloatBase::sBases");

	// AISkillGesture
	set_name(0x14fa024, "AISkillGesture");
	apply_type(0x14fa024, "RTTICompound");
	del_items(0x14feca4, DELIT_SIMPLE, 8);
	apply_type(0x14feca4, "RTTIBase[1]");
	set_name(0x14feca4, "AISkillGesture::sBases");

	// AISkillGlance
	set_name(0x14fa078, "AISkillGlance");
	apply_type(0x14fa078, "RTTICompound");
	del_items(0x14fecbc, DELIT_SIMPLE, 8);
	apply_type(0x14fecbc, "RTTIBase[1]");
	set_name(0x14fecbc, "AISkillGlance::sBases");

	// AISkillGlanceUpperBody
	set_name(0x14fa0cc, "AISkillGlanceUpperBody");
	apply_type(0x14fa0cc, "RTTICompound");
	del_items(0x14fecc4, DELIT_SIMPLE, 8);
	apply_type(0x14fecc4, "RTTIBase[1]");
	set_name(0x14fecc4, "AISkillGlanceUpperBody::sBases");

	// AISkillLapaAction
	set_name(0x14fa120, "AISkillLapaAction");
	apply_type(0x14fa120, "RTTICompound");
	del_items(0x14feccc, DELIT_SIMPLE, 8);
	apply_type(0x14feccc, "RTTIBase[1]");
	set_name(0x14feccc, "AISkillLapaAction::sBases");

	// AISkillLeanFire
	set_name(0x14fa174, "AISkillLeanFire");
	apply_type(0x14fa174, "RTTICompound");
	del_items(0x14fecd4, DELIT_SIMPLE, 8);
	apply_type(0x14fecd4, "RTTIBase[1]");
	set_name(0x14fecd4, "AISkillLeanFire::sBases");

	// AISkillLeanLook
	set_name(0x14fa1c8, "AISkillLeanLook");
	apply_type(0x14fa1c8, "RTTICompound");
	del_items(0x14fecdc, DELIT_SIMPLE, 8);
	apply_type(0x14fecdc, "RTTIBase[1]");
	set_name(0x14fecdc, "AISkillLeanLook::sBases");

	// AISkillLoadWeapon
	set_name(0x14d30e4, "AISkillLoadWeapon");
	apply_type(0x14d30e4, "RTTICompound");
	del_items(0x14d3cb8, DELIT_SIMPLE, 8);
	apply_type(0x14d3cb8, "RTTIBase[1]");
	set_name(0x14d3cb8, "AISkillLoadWeapon::sBases");

	// AISkillLoadWeaponGame
	set_name(0x14fa21c, "AISkillLoadWeaponGame");
	apply_type(0x14fa21c, "RTTICompound");
	del_items(0x14fece4, DELIT_SIMPLE, 8);
	apply_type(0x14fece4, "RTTIBase[1]");
	set_name(0x14fece4, "AISkillLoadWeaponGame::sBases");

	// AISkillLookAt
	set_name(0x14d3138, "AISkillLookAt");
	apply_type(0x14d3138, "RTTICompound");
	del_items(0x14d3cc0, DELIT_SIMPLE, 8);
	apply_type(0x14d3cc0, "RTTIBase[1]");
	set_name(0x14d3cc0, "AISkillLookAt::sBases");

	// AISkillLookFullBody
	set_name(0x14fa414, "AISkillLookFullBody");
	apply_type(0x14fa414, "RTTICompound");
	del_items(0x14fed04, DELIT_SIMPLE, 8);
	apply_type(0x14fed04, "RTTIBase[1]");
	set_name(0x14fed04, "AISkillLookFullBody::sBases");

	// AISkillLookGame
	set_name(0x14fa270, "AISkillLookGame");
	apply_type(0x14fa270, "RTTICompound");
	del_items(0x14fecac, DELIT_SIMPLE, 8);
	apply_type(0x14fecac, "RTTIBase[1]");
	set_name(0x14fecac, "AISkillLookGame::sBases");

	// AISkillLookMountedGun
	set_name(0x14fa318, "AISkillLookMountedGun");
	apply_type(0x14fa318, "RTTICompound");
	del_items(0x14fecec, DELIT_SIMPLE, 8);
	apply_type(0x14fecec, "RTTIBase[1]");
	set_name(0x14fecec, "AISkillLookMountedGun::sBases");

	// AISkillLookTalk
	set_name(0x14d318c, "AISkillLookTalk");
	apply_type(0x14d318c, "RTTICompound");
	del_items(0x14d3cd0, DELIT_SIMPLE, 8);
	apply_type(0x14d3cd0, "RTTIBase[1]");
	set_name(0x14d3cd0, "AISkillLookTalk::sBases");

	// AISkillLookTalkGame
	set_name(0x14fa36c, "AISkillLookTalkGame");
	apply_type(0x14fa36c, "RTTICompound");
	del_items(0x14fecf4, DELIT_SIMPLE, 8);
	apply_type(0x14fecf4, "RTTIBase[1]");
	set_name(0x14fecf4, "AISkillLookTalkGame::sBases");

	// AISkillLookTurnOnSpot
	set_name(0x14fa3c0, "AISkillLookTurnOnSpot");
	apply_type(0x14fa3c0, "RTTICompound");
	del_items(0x14fecfc, DELIT_SIMPLE, 8);
	apply_type(0x14fecfc, "RTTIBase[1]");
	set_name(0x14fecfc, "AISkillLookTurnOnSpot::sBases");

	// AISkillLookTurnOnSpotAirVehicle
	set_name(0x14f74f8, "AISkillLookTurnOnSpotAirVehicle");
	apply_type(0x14f74f8, "RTTICompound");
	del_items(0x14f8614, DELIT_SIMPLE, 8);
	apply_type(0x14f8614, "RTTIBase[1]");
	set_name(0x14f8614, "AISkillLookTurnOnSpotAirVehicle::sBases");

	// AISkillLookTurnTroopCarrier
	set_name(0x14f769c, "AISkillLookTurnTroopCarrier");
	apply_type(0x14f769c, "RTTICompound");
	del_items(0x14f863c, DELIT_SIMPLE, 8);
	apply_type(0x14f863c, "RTTIBase[1]");
	set_name(0x14f863c, "AISkillLookTurnTroopCarrier::sBases");

	// AISkillLookUpperBody
	set_name(0x14fa2c4, "AISkillLookUpperBody");
	apply_type(0x14fa2c4, "RTTICompound");
	del_items(0x14fecb4, DELIT_SIMPLE, 8);
	apply_type(0x14fecb4, "RTTIBase[1]");
	set_name(0x14fecb4, "AISkillLookUpperBody::sBases");

	// AISkillLowCrouch
	set_name(0x14fa468, "AISkillLowCrouch");
	apply_type(0x14fa468, "RTTICompound");
	del_items(0x14fed0c, DELIT_SIMPLE, 8);
	apply_type(0x14fed0c, "RTTIBase[1]");
	set_name(0x14fed0c, "AISkillLowCrouch::sBases");

	// AISkillMountObject
	set_name(0x14fa4bc, "AISkillMountObject");
	apply_type(0x14fa4bc, "RTTICompound");
	del_items(0x14fed14, DELIT_SIMPLE, 8);
	apply_type(0x14fed14, "RTTIBase[1]");
	set_name(0x14fed14, "AISkillMountObject::sBases");

	// AISkillPickUp
	set_name(0x14fa564, "AISkillPickUp");
	apply_type(0x14fa564, "RTTICompound");
	del_items(0x14fed24, DELIT_SIMPLE, 8);
	apply_type(0x14fed24, "RTTIBase[1]");
	set_name(0x14fed24, "AISkillPickUp::sBases");

	// AISkillPostureChange
	set_name(0x14f7300, "AISkillPostureChange");
	apply_type(0x14f7300, "RTTICompound");
	del_items(0x14f85e4, DELIT_SIMPLE, 8);
	apply_type(0x14f85e4, "RTTIBase[1]");
	set_name(0x14f85e4, "AISkillPostureChange::sBases");

	// AISkillRelocateToLapa
	set_name(0x14fa510, "AISkillRelocateToLapa");
	apply_type(0x14fa510, "RTTICompound");
	del_items(0x14fed1c, DELIT_SIMPLE, 8);
	apply_type(0x14fed1c, "RTTIBase[1]");
	set_name(0x14fed1c, "AISkillRelocateToLapa::sBases");

	// AISkillResource
	set_name(0x14cfdec, "AISkillResource");
	apply_type(0x14cfdec, "RTTICompound");
	del_items(0x14d23a4, DELIT_SIMPLE, 8);
	apply_type(0x14d23a4, "RTTIBase[1]");
	set_name(0x14d23a4, "AISkillResource::sBases");
	del_items(0x14d23ac, DELIT_SIMPLE, 84);
	apply_type(0x14d23ac, "RTTIAttr[3]");
	set_name(0x14d23ac, "AISkillResource::sAttrs");
	del_items(0x14d2400, DELIT_SIMPLE, 12);
	apply_type(0x14d2400, "RTTIMessageHandler[1]");
	set_name(0x14d2400, "AISkillResource::sMessageHandlers");

	// AISkillResourceSMG
	set_name(0x15452f4, "AISkillResourceSMG");
	apply_type(0x15452f4, "RTTICompound");
	del_items(0x1546ff4, DELIT_SIMPLE, 8);
	apply_type(0x1546ff4, "RTTIBase[1]");
	set_name(0x1546ff4, "AISkillResourceSMG::sBases");
	del_items(0x1546ffc, DELIT_SIMPLE, 12);
	apply_type(0x1546ffc, "RTTIMessageHandler[1]");
	set_name(0x1546ffc, "AISkillResourceSMG::sMessageHandlers");

	// AISkillSMG
	set_name(0x15452a0, "AISkillSMG");
	apply_type(0x15452a0, "RTTICompound");
	del_items(0x1546734, DELIT_SIMPLE, 8);
	apply_type(0x1546734, "RTTIBase[1]");
	set_name(0x1546734, "AISkillSMG::sBases");

	// AISkillSprint
	set_name(0x14f7a8c, "AISkillSprint");
	apply_type(0x14f7a8c, "RTTICompound");
	del_items(0x14f869c, DELIT_SIMPLE, 8);
	apply_type(0x14f869c, "RTTIBase[1]");
	set_name(0x14f869c, "AISkillSprint::sBases");

	// AISkillSprintDebug
	set_name(0x14f7b34, "AISkillSprintDebug");
	apply_type(0x14f7b34, "RTTICompound");
	del_items(0x14f86ac, DELIT_SIMPLE, 8);
	apply_type(0x14f86ac, "RTTIBase[1]");
	set_name(0x14f86ac, "AISkillSprintDebug::sBases");

	// AISkillSwitchWeapon
	set_name(0x14d31e0, "AISkillSwitchWeapon");
	apply_type(0x14d31e0, "RTTICompound");
	del_items(0x14d3cd8, DELIT_SIMPLE, 8);
	apply_type(0x14d3cd8, "RTTIBase[1]");
	set_name(0x14d3cd8, "AISkillSwitchWeapon::sBases");

	// AISkillSwitchWeaponGame
	set_name(0x14f7354, "AISkillSwitchWeaponGame");
	apply_type(0x14f7354, "RTTICompound");
	del_items(0x14f85ec, DELIT_SIMPLE, 8);
	apply_type(0x14f85ec, "RTTIBase[1]");
	set_name(0x14f85ec, "AISkillSwitchWeaponGame::sBases");

	// AISkillTalk
	set_name(0x14d3234, "AISkillTalk");
	apply_type(0x14d3234, "RTTICompound");
	del_items(0x14d3cc8, DELIT_SIMPLE, 8);
	apply_type(0x14d3cc8, "RTTIBase[1]");
	set_name(0x14d3cc8, "AISkillTalk::sBases");

	// AISkillTalkGame
	set_name(0x14f73a8, "AISkillTalkGame");
	apply_type(0x14f73a8, "RTTICompound");
	del_items(0x14f85f4, DELIT_SIMPLE, 8);
	apply_type(0x14f85f4, "RTTIBase[1]");
	set_name(0x14f85f4, "AISkillTalkGame::sBases");

	// AISkillTeleport
	set_name(0x14f73fc, "AISkillTeleport");
	apply_type(0x14f73fc, "RTTICompound");
	del_items(0x14f85fc, DELIT_SIMPLE, 8);
	apply_type(0x14f85fc, "RTTIBase[1]");
	set_name(0x14f85fc, "AISkillTeleport::sBases");

	// AISkillTurnOnSpot
	set_name(0x14d3288, "AISkillTurnOnSpot");
	apply_type(0x14d3288, "RTTICompound");
	del_items(0x14d3ce0, DELIT_SIMPLE, 8);
	apply_type(0x14d3ce0, "RTTIBase[1]");
	set_name(0x14d3ce0, "AISkillTurnOnSpot::sBases");

	// AISkillTurnOnSpotAirVehicle
	set_name(0x14f7450, "AISkillTurnOnSpotAirVehicle");
	apply_type(0x14f7450, "RTTICompound");
	del_items(0x14f8604, DELIT_SIMPLE, 8);
	apply_type(0x14f8604, "RTTIBase[1]");
	set_name(0x14f8604, "AISkillTurnOnSpotAirVehicle::sBases");

	// AISkillTurnOnSpotGame
	set_name(0x14f75a0, "AISkillTurnOnSpotGame");
	apply_type(0x14f75a0, "RTTICompound");
	del_items(0x14f8624, DELIT_SIMPLE, 8);
	apply_type(0x14f8624, "RTTIBase[1]");
	set_name(0x14f8624, "AISkillTurnOnSpotGame::sBases");

	// AISkillUseAttachable
	set_name(0x14f76f0, "AISkillUseAttachable");
	apply_type(0x14f76f0, "RTTICompound");
	del_items(0x14f8644, DELIT_SIMPLE, 8);
	apply_type(0x14f8644, "RTTIBase[1]");
	set_name(0x14f8644, "AISkillUseAttachable::sBases");

	// AISkillUseDisguise
	set_name(0x14f7744, "AISkillUseDisguise");
	apply_type(0x14f7744, "RTTICompound");
	del_items(0x14f864c, DELIT_SIMPLE, 8);
	apply_type(0x14f864c, "RTTIBase[1]");
	set_name(0x14f864c, "AISkillUseDisguise::sBases");

	// AISkillUseDoor
	set_name(0x14f7798, "AISkillUseDoor");
	apply_type(0x14f7798, "RTTICompound");
	del_items(0x14f8654, DELIT_SIMPLE, 8);
	apply_type(0x14f8654, "RTTIBase[1]");
	set_name(0x14f8654, "AISkillUseDoor::sBases");

	// AISkillUseExplosiveLocation
	set_name(0x14f77ec, "AISkillUseExplosiveLocation");
	apply_type(0x14f77ec, "RTTICompound");
	del_items(0x14f865c, DELIT_SIMPLE, 8);
	apply_type(0x14f865c, "RTTIBase[1]");
	set_name(0x14f865c, "AISkillUseExplosiveLocation::sBases");

	// AISkillUseGun
	set_name(0x14d32dc, "AISkillUseGun");
	apply_type(0x14d32dc, "RTTICompound");
	del_items(0x14d3ce8, DELIT_SIMPLE, 8);
	apply_type(0x14d3ce8, "RTTIBase[1]");
	set_name(0x14d3ce8, "AISkillUseGun::sBases");

	// AISkillUseInventoryItem
	set_name(0x14f7840, "AISkillUseInventoryItem");
	apply_type(0x14f7840, "RTTICompound");
	del_items(0x14f8664, DELIT_SIMPLE, 8);
	apply_type(0x14f8664, "RTTIBase[1]");
	set_name(0x14f8664, "AISkillUseInventoryItem::sBases");

	// AISkillUseJetpack
	set_name(0x14f7894, "AISkillUseJetpack");
	apply_type(0x14f7894, "RTTICompound");
	del_items(0x14f866c, DELIT_SIMPLE, 8);
	apply_type(0x14f866c, "RTTIBase[1]");
	set_name(0x14f866c, "AISkillUseJetpack::sBases");

	// AISkillUseLadder
	set_name(0x14f78e8, "AISkillUseLadder");
	apply_type(0x14f78e8, "RTTICompound");
	del_items(0x14f8674, DELIT_SIMPLE, 8);
	apply_type(0x14f8674, "RTTIBase[1]");
	set_name(0x14f8674, "AISkillUseLadder::sBases");

	// AISkillUsePlayAnimationObject
	set_name(0x14f793c, "AISkillUsePlayAnimationObject");
	apply_type(0x14f793c, "RTTICompound");
	del_items(0x14f867c, DELIT_SIMPLE, 8);
	apply_type(0x14f867c, "RTTIBase[1]");
	set_name(0x14f867c, "AISkillUsePlayAnimationObject::sBases");

	// AISkillUseSimpleTrackAnimator
	set_name(0x14f7990, "AISkillUseSimpleTrackAnimator");
	apply_type(0x14f7990, "RTTICompound");
	del_items(0x14f8684, DELIT_SIMPLE, 8);
	apply_type(0x14f8684, "RTTIBase[1]");
	set_name(0x14f8684, "AISkillUseSimpleTrackAnimator::sBases");

	// AISkillUseSwitch
	set_name(0x14f79e4, "AISkillUseSwitch");
	apply_type(0x14f79e4, "RTTICompound");
	del_items(0x14f868c, DELIT_SIMPLE, 8);
	apply_type(0x14f868c, "RTTIBase[1]");
	set_name(0x14f868c, "AISkillUseSwitch::sBases");

	// AISkillWalk
	set_name(0x14f7a38, "AISkillWalk");
	apply_type(0x14f7a38, "RTTICompound");
	del_items(0x14f8694, DELIT_SIMPLE, 8);
	apply_type(0x14f8694, "RTTIBase[1]");
	set_name(0x14f8694, "AISkillWalk::sBases");

	// AISkillWalkDebug
	set_name(0x14f7ae0, "AISkillWalkDebug");
	apply_type(0x14f7ae0, "RTTICompound");
	del_items(0x14f86a4, DELIT_SIMPLE, 8);
	apply_type(0x14f86a4, "RTTIBase[1]");
	set_name(0x14f86a4, "AISkillWalkDebug::sBases");

	// AISkillWalkExoSkeleton
	set_name(0x14f7b88, "AISkillWalkExoSkeleton");
	apply_type(0x14f7b88, "RTTICompound");
	del_items(0x14f86b4, DELIT_SIMPLE, 8);
	apply_type(0x14f86b4, "RTTIBase[1]");
	set_name(0x14f86b4, "AISkillWalkExoSkeleton::sBases");

	// AISniperWeaponOperationInstance
	set_name(0x14cf8e8, "AISniperWeaponOperationInstance");
	apply_type(0x14cf8e8, "RTTICompound");
	del_items(0x14d1f24, DELIT_SIMPLE, 8);
	apply_type(0x14d1f24, "RTTIBase[1]");
	set_name(0x14d1f24, "AISniperWeaponOperationInstance::sBases");

	// AISniperWeaponOperationResource
	set_name(0x14cf93c, "AISniperWeaponOperationResource");
	apply_type(0x14cf93c, "RTTICompound");
	del_items(0x14d1e04, DELIT_SIMPLE, 8);
	apply_type(0x14d1e04, "RTTIBase[1]");
	set_name(0x14d1e04, "AISniperWeaponOperationResource::sBases");
	del_items(0x14d1e0c, DELIT_SIMPLE, 280);
	apply_type(0x14d1e0c, "RTTIAttr[10]");
	set_name(0x14d1e0c, "AISniperWeaponOperationResource::sAttrs");

	// AISphere
	set_name(0x14cef18, "AISphere");
	apply_type(0x14cef18, "RTTICompound");
	del_items(0x14d0f14, DELIT_SIMPLE, 56);
	apply_type(0x14d0f14, "RTTIAttr[2]");
	set_name(0x14d0f14, "AISphere::sAttrs");

	// AISpreadWeaponOperationInstance
	set_name(0x14cf990, "AISpreadWeaponOperationInstance");
	apply_type(0x14cf990, "RTTICompound");
	del_items(0x14d2180, DELIT_SIMPLE, 8);
	apply_type(0x14d2180, "RTTIBase[1]");
	set_name(0x14d2180, "AISpreadWeaponOperationInstance::sBases");

	// AISpreadWeaponOperationResource
	set_name(0x14cf9e4, "AISpreadWeaponOperationResource");
	apply_type(0x14cf9e4, "RTTICompound");
	del_items(0x14d1f2c, DELIT_SIMPLE, 8);
	apply_type(0x14d1f2c, "RTTIBase[1]");
	set_name(0x14d1f2c, "AISpreadWeaponOperationResource::sBases");
	del_items(0x14d1f34, DELIT_SIMPLE, 588);
	apply_type(0x14d1f34, "RTTIAttr[21]");
	set_name(0x14d1f34, "AISpreadWeaponOperationResource::sAttrs");

	// AISquad
	set_name(0x14d33e8, "AISquad");
	apply_type(0x14d33e8, "RTTICompound");
	del_items(0x14d397c, DELIT_SIMPLE, 8);
	apply_type(0x14d397c, "RTTIBase[1]");
	set_name(0x14d397c, "AISquad::sBases");
	del_items(0x14d3984, DELIT_SIMPLE, 84);
	apply_type(0x14d3984, "RTTIAttr[3]");
	set_name(0x14d3984, "AISquad::sAttrs");
	del_items(0x14d39d8, DELIT_SIMPLE, 696);
	apply_type(0x14d39d8, "RTTIFunction[29]");
	set_name(0x14d39d8, "AISquad::sFunctions");

	// AISquadGame
	set_name(0x14f4c6c, "AISquadGame");
	apply_type(0x14f4c6c, "RTTICompound");
	del_items(0x14f5388, DELIT_SIMPLE, 8);
	apply_type(0x14f5388, "RTTIBase[1]");
	set_name(0x14f5388, "AISquadGame::sBases");
	del_items(0x14f5390, DELIT_SIMPLE, 192);
	apply_type(0x14f5390, "RTTIFunction[8]");
	set_name(0x14f5390, "AISquadGame::sFunctions");

	// AISquadHook
	set_name(0x14d3da0, "AISquadHook");
	apply_type(0x14d3da0, "RTTICompound");
	del_items(0x14d4370, DELIT_SIMPLE, 8);
	apply_type(0x14d4370, "RTTIBase[1]");
	set_name(0x14d4370, "AISquadHook::sBases");

	// AISquadHookHtnPlanner
	set_name(0x14d4020, "AISquadHookHtnPlanner");
	apply_type(0x14d4020, "RTTICompound");
	del_items(0x14d44e0, DELIT_SIMPLE, 8);
	apply_type(0x14d44e0, "RTTIBase[1]");
	set_name(0x14d44e0, "AISquadHookHtnPlanner::sBases");

	// AISquadHookHtnPlannerResource
	set_name(0x14d4074, "AISquadHookHtnPlannerResource");
	apply_type(0x14d4074, "RTTICompound");
	del_items(0x14d44a0, DELIT_SIMPLE, 8);
	apply_type(0x14d44a0, "RTTIBase[1]");
	set_name(0x14d44a0, "AISquadHookHtnPlannerResource::sBases");
	del_items(0x14d44a8, DELIT_SIMPLE, 56);
	apply_type(0x14d44a8, "RTTIAttr[2]");
	set_name(0x14d44a8, "AISquadHookHtnPlannerResource::sAttrs");

	// AISquadHookResource
	set_name(0x14d3e04, "AISquadHookResource");
	apply_type(0x14d3e04, "RTTICompound");
	del_items(0x14d4378, DELIT_SIMPLE, 8);
	apply_type(0x14d4378, "RTTIBase[1]");
	set_name(0x14d4378, "AISquadHookResource::sBases");

	// AISquadResource
	set_name(0x14d3e68, "AISquadResource");
	apply_type(0x14d3e68, "RTTICompound");
	del_items(0x14d4380, DELIT_SIMPLE, 8);
	apply_type(0x14d4380, "RTTIBase[1]");
	set_name(0x14d4380, "AISquadResource::sBases");
	del_items(0x14d4388, DELIT_SIMPLE, 56);
	apply_type(0x14d4388, "RTTIAttr[2]");
	set_name(0x14d4388, "AISquadResource::sAttrs");

	// AIStatement
	set_name(0x14ced10, "AIStatement");
	apply_type(0x14ced10, "RTTICompound");
	del_items(0x14d0510, DELIT_SIMPLE, 84);
	apply_type(0x14d0510, "RTTIAttr[3]");
	set_name(0x14d0510, "AIStatement::sAttrs");

	// AIStaticCoverMap
	set_name(0x14d7414, "AIStaticCoverMap");
	apply_type(0x14d7414, "RTTICompound");
	del_items(0x14d8df0, DELIT_SIMPLE, 8);
	apply_type(0x14d8df0, "RTTIBase[1]");
	set_name(0x14d8df0, "AIStaticCoverMap::sBases");
	del_items(0x14d8df8, DELIT_SIMPLE, 504);
	apply_type(0x14d8df8, "RTTIAttr[18]");
	set_name(0x14d8df8, "AIStaticCoverMap::sAttrs");
	del_items(0x14d8ff0, DELIT_SIMPLE, 24);
	apply_type(0x14d8ff0, "RTTIMessageHandler[2]");
	set_name(0x14d8ff0, "AIStaticCoverMap::sMessageHandlers");

	// AIStaticCoverMapObjectMapping
	set_name(0x14d734c, "AIStaticCoverMapObjectMapping");
	apply_type(0x14d734c, "RTTICompound");
	del_items(0x14d905c, DELIT_SIMPLE, 8);
	apply_type(0x14d905c, "RTTIBase[1]");
	set_name(0x14d905c, "AIStaticCoverMapObjectMapping::sBases");
	del_items(0x14d9064, DELIT_SIMPLE, 56);
	apply_type(0x14d9064, "RTTIAttr[2]");
	set_name(0x14d9064, "AIStaticCoverMapObjectMapping::sAttrs");

	// AIStaticCoverMapObjectMappingEntry
	set_name(0x14d72f8, "AIStaticCoverMapObjectMappingEntry");
	apply_type(0x14d72f8, "RTTICompound");
	del_items(0x14d9008, DELIT_SIMPLE, 84);
	apply_type(0x14d9008, "RTTIAttr[3]");
	set_name(0x14d9008, "AIStaticCoverMapObjectMappingEntry::sAttrs");

	// AIStaticWaypointGrid
	set_name(0x14d6f74, "AIStaticWaypointGrid");
	apply_type(0x14d6f74, "RTTICompound");
	del_items(0x14d76e0, DELIT_SIMPLE, 8);
	apply_type(0x14d76e0, "RTTIBase[1]");
	set_name(0x14d76e0, "AIStaticWaypointGrid::sBases");
	del_items(0x14d76e8, DELIT_SIMPLE, 56);
	apply_type(0x14d76e8, "RTTIAttr[2]");
	set_name(0x14d76e8, "AIStaticWaypointGrid::sAttrs");

	// AIStrategicGraph
	set_name(0x14d7554, "AIStrategicGraph");
	apply_type(0x14d7554, "RTTICompound");
	del_items(0x14d93d0, DELIT_SIMPLE, 8);
	apply_type(0x14d93d0, "RTTIBase[1]");
	set_name(0x14d93d0, "AIStrategicGraph::sBases");

	// AIStrategicObjective
	set_name(0x14f812c, "AIStrategicObjective");
	apply_type(0x14f812c, "RTTICompound");
	del_items(0x14f86c4, DELIT_SIMPLE, 8);
	apply_type(0x14f86c4, "RTTIBase[1]");
	set_name(0x14f86c4, "AIStrategicObjective::sBases");

	// AIStrategicObjectiveAdvanceWaypoint
	set_name(0x14f81d4, "AIStrategicObjectiveAdvanceWaypoint");
	apply_type(0x14f81d4, "RTTICompound");
	del_items(0x14f86cc, DELIT_SIMPLE, 8);
	apply_type(0x14f86cc, "RTTIBase[1]");
	set_name(0x14f86cc, "AIStrategicObjectiveAdvanceWaypoint::sBases");

	// AIStrategicObjectiveAttackEntity
	set_name(0x14f8228, "AIStrategicObjectiveAttackEntity");
	apply_type(0x14f8228, "RTTICompound");
	del_items(0x14f86dc, DELIT_SIMPLE, 8);
	apply_type(0x14f86dc, "RTTIBase[1]");
	set_name(0x14f86dc, "AIStrategicObjectiveAttackEntity::sBases");

	// AIStrategicObjectiveCaptureSpawnArea
	set_name(0x14f8324, "AIStrategicObjectiveCaptureSpawnArea");
	apply_type(0x14f8324, "RTTICompound");
	del_items(0x14f86f4, DELIT_SIMPLE, 8);
	apply_type(0x14f86f4, "RTTIBase[1]");
	set_name(0x14f86f4, "AIStrategicObjectiveCaptureSpawnArea::sBases");

	// AIStrategicObjectiveDefendMarker
	set_name(0x14f827c, "AIStrategicObjectiveDefendMarker");
	apply_type(0x14f827c, "RTTICompound");
	del_items(0x14f86e4, DELIT_SIMPLE, 8);
	apply_type(0x14f86e4, "RTTIBase[1]");
	set_name(0x14f86e4, "AIStrategicObjectiveDefendMarker::sBases");

	// AIStrategicObjectiveEscortEntity
	set_name(0x14f82d0, "AIStrategicObjectiveEscortEntity");
	apply_type(0x14f82d0, "RTTICompound");
	del_items(0x14f86ec, DELIT_SIMPLE, 8);
	apply_type(0x14f86ec, "RTTIBase[1]");
	set_name(0x14f86ec, "AIStrategicObjectiveEscortEntity::sBases");

	// AIStrategicObjectiveExoHarass
	set_name(0x14f8180, "AIStrategicObjectiveExoHarass");
	apply_type(0x14f8180, "RTTICompound");
	del_items(0x14f86d4, DELIT_SIMPLE, 8);
	apply_type(0x14f86d4, "RTTIBase[1]");
	set_name(0x14f86d4, "AIStrategicObjectiveExoHarass::sBases");

	// AIStrategicPathFinder
	set_name(0x14d7500, "AIStrategicPathFinder");
	apply_type(0x14d7500, "RTTICompound");
	del_items(0x14d93d8, DELIT_SIMPLE, 8);
	apply_type(0x14d93d8, "RTTIBase[1]");
	set_name(0x14d93d8, "AIStrategicPathFinder::sBases");

	// AIStrategyAssassinationInstance
	set_name(0x14f7cd8, "AIStrategyAssassinationInstance");
	apply_type(0x14f7cd8, "RTTICompound");
	del_items(0x14f875c, DELIT_SIMPLE, 8);
	apply_type(0x14f875c, "RTTIBase[1]");
	set_name(0x14f875c, "AIStrategyAssassinationInstance::sBases");

	// AIStrategyAssassinationResource
	set_name(0x14f7d2c, "AIStrategyAssassinationResource");
	apply_type(0x14f7d2c, "RTTICompound");
	del_items(0x14f8764, DELIT_SIMPLE, 8);
	apply_type(0x14f8764, "RTTIBase[1]");
	set_name(0x14f8764, "AIStrategyAssassinationResource::sBases");
	del_items(0x14f876c, DELIT_SIMPLE, 112);
	apply_type(0x14f876c, "RTTIAttr[4]");
	set_name(0x14f876c, "AIStrategyAssassinationResource::sAttrs");

	// AIStrategyBodyCountInstance
	set_name(0x14f7ed0, "AIStrategyBodyCountInstance");
	apply_type(0x14f7ed0, "RTTICompound");
	del_items(0x14f88a4, DELIT_SIMPLE, 8);
	apply_type(0x14f88a4, "RTTIBase[1]");
	set_name(0x14f88a4, "AIStrategyBodyCountInstance::sBases");

	// AIStrategyBodyCountResource
	set_name(0x14f7f24, "AIStrategyBodyCountResource");
	apply_type(0x14f7f24, "RTTICompound");
	del_items(0x14f88ac, DELIT_SIMPLE, 8);
	apply_type(0x14f88ac, "RTTIBase[1]");
	set_name(0x14f88ac, "AIStrategyBodyCountResource::sBases");
	del_items(0x14f88b4, DELIT_SIMPLE, 56);
	apply_type(0x14f88b4, "RTTIAttr[2]");
	set_name(0x14f88b4, "AIStrategyBodyCountResource::sAttrs");

	// AIStrategyCaptureAndHoldInstance
	set_name(0x14f7c30, "AIStrategyCaptureAndHoldInstance");
	apply_type(0x14f7c30, "RTTICompound");
	del_items(0x14f870c, DELIT_SIMPLE, 8);
	apply_type(0x14f870c, "RTTIBase[1]");
	set_name(0x14f870c, "AIStrategyCaptureAndHoldInstance::sBases");

	// AIStrategyCaptureAndHoldResource
	set_name(0x14f7c84, "AIStrategyCaptureAndHoldResource");
	apply_type(0x14f7c84, "RTTICompound");
	del_items(0x14f8754, DELIT_SIMPLE, 8);
	apply_type(0x14f8754, "RTTIBase[1]");
	set_name(0x14f8754, "AIStrategyCaptureAndHoldResource::sBases");

	// AIStrategyInstance
	set_name(0x14f8020, "AIStrategyInstance");
	apply_type(0x14f8020, "RTTICompound");
	del_items(0x14f86fc, DELIT_SIMPLE, 8);
	apply_type(0x14f86fc, "RTTIBase[1]");
	set_name(0x14f86fc, "AIStrategyInstance::sBases");

	// AIStrategyManager
	set_name(0x14f8074, "AIStrategyManager");
	apply_type(0x14f8074, "RTTICompound");
	del_items(0x14f8950, DELIT_SIMPLE, 8);
	apply_type(0x14f8950, "RTTIBase[1]");
	set_name(0x14f8950, "AIStrategyManager::sBases");

	// AIStrategyResource
	set_name(0x14f80d8, "AIStrategyResource");
	apply_type(0x14f80d8, "RTTICompound");
	del_items(0x14f8714, DELIT_SIMPLE, 8);
	apply_type(0x14f8714, "RTTIBase[1]");
	set_name(0x14f8714, "AIStrategyResource::sBases");
	del_items(0x14f871c, DELIT_SIMPLE, 56);
	apply_type(0x14f871c, "RTTIAttr[2]");
	set_name(0x14f871c, "AIStrategyResource::sAttrs");

	// AIStrategyScavengeAndRetrieveInstance
	set_name(0x14f7f78, "AIStrategyScavengeAndRetrieveInstance");
	apply_type(0x14f7f78, "RTTICompound");
	del_items(0x14f88ec, DELIT_SIMPLE, 8);
	apply_type(0x14f88ec, "RTTIBase[1]");
	set_name(0x14f88ec, "AIStrategyScavengeAndRetrieveInstance::sBases");

	// AIStrategyScavengeAndRetrieveResource
	set_name(0x14f7fcc, "AIStrategyScavengeAndRetrieveResource");
	apply_type(0x14f7fcc, "RTTICompound");
	del_items(0x14f88f4, DELIT_SIMPLE, 8);
	apply_type(0x14f88f4, "RTTIBase[1]");
	set_name(0x14f88f4, "AIStrategyScavengeAndRetrieveResource::sBases");
	del_items(0x14f88fc, DELIT_SIMPLE, 84);
	apply_type(0x14f88fc, "RTTIAttr[3]");
	set_name(0x14f88fc, "AIStrategyScavengeAndRetrieveResource::sAttrs");

	// AIStrategySearchAndDestroyInstance
	set_name(0x14f7e28, "AIStrategySearchAndDestroyInstance");
	apply_type(0x14f7e28, "RTTICompound");
	del_items(0x14f8840, DELIT_SIMPLE, 8);
	apply_type(0x14f8840, "RTTIBase[1]");
	set_name(0x14f8840, "AIStrategySearchAndDestroyInstance::sBases");

	// AIStrategySearchAndDestroyResource
	set_name(0x14f7e7c, "AIStrategySearchAndDestroyResource");
	apply_type(0x14f7e7c, "RTTICompound");
	del_items(0x14f8848, DELIT_SIMPLE, 8);
	apply_type(0x14f8848, "RTTIBase[1]");
	set_name(0x14f8848, "AIStrategySearchAndDestroyResource::sBases");
	del_items(0x14f8850, DELIT_SIMPLE, 84);
	apply_type(0x14f8850, "RTTIAttr[3]");
	set_name(0x14f8850, "AIStrategySearchAndDestroyResource::sAttrs");

	// AIStrategySearchAndRetrieveInstance
	set_name(0x14f7d80, "AIStrategySearchAndRetrieveInstance");
	apply_type(0x14f7d80, "RTTICompound");
	del_items(0x14f87dc, DELIT_SIMPLE, 8);
	apply_type(0x14f87dc, "RTTIBase[1]");
	set_name(0x14f87dc, "AIStrategySearchAndRetrieveInstance::sBases");

	// AIStrategySearchAndRetrieveResource
	set_name(0x14f7dd4, "AIStrategySearchAndRetrieveResource");
	apply_type(0x14f7dd4, "RTTICompound");
	del_items(0x14f87e4, DELIT_SIMPLE, 8);
	apply_type(0x14f87e4, "RTTIBase[1]");
	set_name(0x14f87e4, "AIStrategySearchAndRetrieveResource::sBases");
	del_items(0x14f87ec, DELIT_SIMPLE, 84);
	apply_type(0x14f87ec, "RTTIAttr[3]");
	set_name(0x14f87ec, "AIStrategySearchAndRetrieveResource::sAttrs");

	// AITerrainManager
	set_name(0x14d6d8c, "AITerrainManager");
	apply_type(0x14d6d8c, "RTTICompound");
	del_items(0x14d8a6c, DELIT_SIMPLE, 8);
	apply_type(0x14d8a6c, "RTTIBase[1]");
	set_name(0x14d8a6c, "AITerrainManager::sBases");
	del_items(0x14d8a74, DELIT_SIMPLE, 224);
	apply_type(0x14d8a74, "RTTIAttr[8]");
	set_name(0x14d8a74, "AITerrainManager::sAttrs");
	del_items(0x14d8b54, DELIT_SIMPLE, 12);
	apply_type(0x14d8b54, "RTTIMessageHandler[1]");
	set_name(0x14d8b54, "AITerrainManager::sMessageHandlers");

	// AITurretWeaponInterface
	set_name(0x14f8a80, "AITurretWeaponInterface");
	apply_type(0x14f8a80, "RTTICompound");
	del_items(0x14fd4b4, DELIT_SIMPLE, 8);
	apply_type(0x14fd4b4, "RTTIBase[1]");
	set_name(0x14fd4b4, "AITurretWeaponInterface::sBases");

	// AIUsableObject
	set_name(0x14cfa38, "AIUsableObject");
	apply_type(0x14cfa38, "RTTICompound");

	// AIVehicleWeaponInterface
	set_name(0x14f8ad4, "AIVehicleWeaponInterface");
	apply_type(0x14f8ad4, "RTTICompound");
	del_items(0x14fd4bc, DELIT_SIMPLE, 8);
	apply_type(0x14fd4bc, "RTTIBase[1]");
	set_name(0x14fd4bc, "AIVehicleWeaponInterface::sBases");

	// AIVisualStimulusComponent
	set_name(0x150ec38, "AIVisualStimulusComponent");
	apply_type(0x150ec38, "RTTICompound");
	del_items(0x1511f20, DELIT_SIMPLE, 8);
	apply_type(0x1511f20, "RTTIBase[1]");
	set_name(0x1511f20, "AIVisualStimulusComponent::sBases");

	// AIVisualStimulusComponentResource
	set_name(0x150ec8c, "AIVisualStimulusComponentResource");
	apply_type(0x150ec8c, "RTTICompound");
	del_items(0x1511e6c, DELIT_SIMPLE, 8);
	apply_type(0x1511e6c, "RTTIBase[1]");
	set_name(0x1511e6c, "AIVisualStimulusComponentResource::sBases");
	del_items(0x1511e74, DELIT_SIMPLE, 168);
	apply_type(0x1511e74, "RTTIAttr[6]");
	set_name(0x1511e74, "AIVisualStimulusComponentResource::sAttrs");

	// AIWaypoint
	set_name(0x14d6e58, "AIWaypoint");
	apply_type(0x14d6e58, "RTTICompound");
	del_items(0x14d769c, DELIT_SIMPLE, 56);
	apply_type(0x14d769c, "RTTIAttr[2]");
	set_name(0x14d769c, "AIWaypoint::sAttrs");

	// AIWaypointAreaRadius
	set_name(0x14d6ebc, "AIWaypointAreaRadius");
	apply_type(0x14d6ebc, "RTTICompound");
	del_items(0x14d8d24, DELIT_SIMPLE, 56);
	apply_type(0x14d8d24, "RTTIAttr[2]");
	set_name(0x14d8d24, "AIWaypointAreaRadius::sAttrs");

	// AIWaypointAreaRadiusTable
	set_name(0x14d6f20, "AIWaypointAreaRadiusTable");
	apply_type(0x14d6f20, "RTTICompound");
	del_items(0x14d8d5c, DELIT_SIMPLE, 8);
	apply_type(0x14d8d5c, "RTTIBase[1]");
	set_name(0x14d8d5c, "AIWaypointAreaRadiusTable::sBases");
	del_items(0x14d8d64, DELIT_SIMPLE, 84);
	apply_type(0x14d8d64, "RTTIAttr[3]");
	set_name(0x14d8d64, "AIWaypointAreaRadiusTable::sAttrs");

	// AIWaypointBufferManager
	set_name(0x14d6d38, "AIWaypointBufferManager");
	apply_type(0x14d6d38, "RTTICompound");

	// AIWaypointGrid
	set_name(0x14d702c, "AIWaypointGrid");
	apply_type(0x14d702c, "RTTICompound");
	del_items(0x14d7750, DELIT_SIMPLE, 8);
	apply_type(0x14d7750, "RTTIBase[1]");
	set_name(0x14d7750, "AIWaypointGrid::sBases");

	// AIWaypointNeighborIds
	set_name(0x14d7090, "AIWaypointNeighborIds");
	apply_type(0x14d7090, "RTTICompound");
	del_items(0x14d78fc, DELIT_SIMPLE, 448);
	apply_type(0x14d78fc, "RTTIAttr[16]");
	set_name(0x14d78fc, "AIWaypointNeighborIds::sAttrs");

	// AIWaypointNeighborLinkTypeInfo
	set_name(0x14d70f4, "AIWaypointNeighborLinkTypeInfo");
	apply_type(0x14d70f4, "RTTICompound");
	del_items(0x14d7758, DELIT_SIMPLE, 420);
	apply_type(0x14d7758, "RTTIAttr[15]");
	set_name(0x14d7758, "AIWaypointNeighborLinkTypeInfo::sAttrs");

	// AIWaypointNeighborTravel
	set_name(0x14d71bc, "AIWaypointNeighborTravel");
	apply_type(0x14d71bc, "RTTICompound");
	del_items(0x14d7abc, DELIT_SIMPLE, 448);
	apply_type(0x14d7abc, "RTTIAttr[16]");
	set_name(0x14d7abc, "AIWaypointNeighborTravel::sAttrs");

	// AIWaypointNeighbors
	set_name(0x14d7158, "AIWaypointNeighbors");
	apply_type(0x14d7158, "RTTICompound");
	del_items(0x14d8ba4, DELIT_SIMPLE, 8);
	apply_type(0x14d8ba4, "RTTIBase[1]");
	set_name(0x14d8ba4, "AIWaypointNeighbors::sBases");
	del_items(0x14d8bac, DELIT_SIMPLE, 196);
	apply_type(0x14d8bac, "RTTIAttr[7]");
	set_name(0x14d8bac, "AIWaypointNeighbors::sAttrs");

	// AIWaypointVisibility
	set_name(0x14cf1a8, "AIWaypointVisibility");
	apply_type(0x14cf1a8, "RTTICompound");
	del_items(0x14d1cc8, DELIT_SIMPLE, 8);
	apply_type(0x14d1cc8, "RTTIBase[1]");
	set_name(0x14d1cc8, "AIWaypointVisibility::sBases");

	// AIWeaponInterface
	set_name(0x14d6244, "AIWeaponInterface");
	apply_type(0x14d6244, "RTTICompound");
	del_items(0x14d6628, DELIT_SIMPLE, 8);
	apply_type(0x14d6628, "RTTIBase[1]");
	set_name(0x14d6628, "AIWeaponInterface::sBases");

	// AIWeaponInterfaceGame
	set_name(0x14f8b28, "AIWeaponInterfaceGame");
	apply_type(0x14f8b28, "RTTICompound");
	del_items(0x14fd48c, DELIT_SIMPLE, 8);
	apply_type(0x14fd48c, "RTTIBase[1]");
	set_name(0x14fd48c, "AIWeaponInterfaceGame::sBases");

	// AIWeaponOperationInstance
	set_name(0x14cea34, "AIWeaponOperationInstance");
	apply_type(0x14cea34, "RTTICompound");
	del_items(0x14d1228, DELIT_SIMPLE, 8);
	apply_type(0x14d1228, "RTTIBase[1]");
	set_name(0x14d1228, "AIWeaponOperationInstance::sBases");

	// AIWeaponOperationResource
	set_name(0x14ce9e0, "AIWeaponOperationResource");
	apply_type(0x14ce9e0, "RTTICompound");
	del_items(0x14d1230, DELIT_SIMPLE, 8);
	apply_type(0x14d1230, "RTTIBase[1]");
	set_name(0x14d1230, "AIWeaponOperationResource::sBases");

	// AIWeaponPreference
	set_name(0x14d2470, "AIWeaponPreference");
	apply_type(0x14d2470, "RTTICompound");
	del_items(0x14d3454, DELIT_SIMPLE, 8);
	apply_type(0x14d3454, "RTTIBase[1]");
	set_name(0x14d3454, "AIWeaponPreference::sBases");
	del_items(0x14d345c, DELIT_SIMPLE, 84);
	apply_type(0x14d345c, "RTTIAttr[3]");
	set_name(0x14d345c, "AIWeaponPreference::sAttrs");
	del_items(0x14d34b0, DELIT_SIMPLE, 12);
	apply_type(0x14d34b0, "RTTIMessageHandler[1]");
	set_name(0x14d34b0, "AIWeaponPreference::sMessageHandlers");

	// AIWeaponPreferenceSettings
	set_name(0x14d24e4, "AIWeaponPreferenceSettings");
	apply_type(0x14d24e4, "RTTICompound");
	del_items(0x14d34bc, DELIT_SIMPLE, 8);
	apply_type(0x14d34bc, "RTTIBase[1]");
	set_name(0x14d34bc, "AIWeaponPreferenceSettings::sBases");
	del_items(0x14d34c4, DELIT_SIMPLE, 168);
	apply_type(0x14d34c4, "RTTIAttr[6]");
	set_name(0x14d34c4, "AIWeaponPreferenceSettings::sAttrs");
	del_items(0x14d356c, DELIT_SIMPLE, 12);
	apply_type(0x14d356c, "RTTIMessageHandler[1]");
	set_name(0x14d356c, "AIWeaponPreferenceSettings::sMessageHandlers");

	// AOEUseLocationActions
	set_name(0x154fe88, "AOEUseLocationActions");
	apply_type(0x154fe88, "RTTICompound");
	del_items(0x15504b4, DELIT_SIMPLE, 8);
	apply_type(0x15504b4, "RTTIBase[1]");
	set_name(0x15504b4, "AOEUseLocationActions::sBases");
	del_items(0x15504bc, DELIT_SIMPLE, 56);
	apply_type(0x15504bc, "RTTIAttr[2]");
	set_name(0x15504bc, "AOEUseLocationActions::sAttrs");

	// AOEUseLocationInfo
	set_name(0x154fe24, "AOEUseLocationInfo");
	apply_type(0x154fe24, "RTTICompound");
	del_items(0x1550490, DELIT_SIMPLE, 8);
	apply_type(0x1550490, "RTTIBase[1]");
	set_name(0x1550490, "AOEUseLocationInfo::sBases");
	del_items(0x1550498, DELIT_SIMPLE, 28);
	apply_type(0x1550498, "RTTIAttr[1]");
	set_name(0x1550498, "AOEUseLocationInfo::sAttrs");

	// AOEUseLocationInfoActionPair
	set_name(0x154fefc, "AOEUseLocationInfoActionPair");
	apply_type(0x154fefc, "RTTICompound");
	del_items(0x15504f4, DELIT_SIMPLE, 8);
	apply_type(0x15504f4, "RTTIBase[1]");
	set_name(0x15504f4, "AOEUseLocationInfoActionPair::sBases");
	del_items(0x15504fc, DELIT_SIMPLE, 56);
	apply_type(0x15504fc, "RTTIAttr[2]");
	set_name(0x15504fc, "AOEUseLocationInfoActionPair::sAttrs");

	// ATAC
	set_name(0x1507c00, "ATAC");
	apply_type(0x1507c00, "RTTICompound");
	del_items(0x1508f8c, DELIT_SIMPLE, 8);
	apply_type(0x1508f8c, "RTTIBase[1]");
	set_name(0x1508f8c, "ATAC::sBases");

	// ATACAiController
	set_name(0x1507c54, "ATACAiController");
	apply_type(0x1507c54, "RTTICompound");
	del_items(0x1508f9c, DELIT_SIMPLE, 8);
	apply_type(0x1508f9c, "RTTIBase[1]");
	set_name(0x1508f9c, "ATACAiController::sBases");

	// ATACController
	set_name(0x1507ca8, "ATACController");
	apply_type(0x1507ca8, "RTTICompound");
	del_items(0x1508f94, DELIT_SIMPLE, 8);
	apply_type(0x1508f94, "RTTIBase[1]");
	set_name(0x1508f94, "ATACController::sBases");

	// ATACResource
	set_name(0x1507cfc, "ATACResource");
	apply_type(0x1507cfc, "RTTICompound");
	del_items(0x1508e34, DELIT_SIMPLE, 8);
	apply_type(0x1508e34, "RTTIBase[1]");
	set_name(0x1508e34, "ATACResource::sBases");
	del_items(0x1508e3c, DELIT_SIMPLE, 336);
	apply_type(0x1508e3c, "RTTIAttr[12]");
	set_name(0x1508e3c, "ATACResource::sAttrs");

	// Ability
	set_name(0x14e3170, "Ability");
	apply_type(0x14e3170, "RTTICompound");
	del_items(0x14e4ed4, DELIT_SIMPLE, 8);
	apply_type(0x14e4ed4, "RTTIBase[1]");
	set_name(0x14e4ed4, "Ability::sBases");

	// AbilityAnimatedByParent
	set_name(0x14e31c4, "AbilityAnimatedByParent");
	apply_type(0x14e31c4, "RTTICompound");
	del_items(0x14e64a4, DELIT_SIMPLE, 8);
	apply_type(0x14e64a4, "RTTIBase[1]");
	set_name(0x14e64a4, "AbilityAnimatedByParent::sBases");

	// AbilityAnimatedByParentResource
	set_name(0x14e3228, "AbilityAnimatedByParentResource");
	apply_type(0x14e3228, "RTTICompound");
	del_items(0x14e64ac, DELIT_SIMPLE, 8);
	apply_type(0x14e64ac, "RTTIBase[1]");
	set_name(0x14e64ac, "AbilityAnimatedByParentResource::sBases");
	del_items(0x14e64b4, DELIT_SIMPLE, 84);
	apply_type(0x14e64b4, "RTTIAttr[3]");
	set_name(0x14e64b4, "AbilityAnimatedByParentResource::sAttrs");

	// AbilityAnimation
	set_name(0x14e327c, "AbilityAnimation");
	apply_type(0x14e327c, "RTTICompound");
	del_items(0x14e5778, DELIT_SIMPLE, 16);
	apply_type(0x14e5778, "RTTIBase[2]");
	set_name(0x14e5778, "AbilityAnimation::sBases");

	// AbilityAnimationResource
	set_name(0x14e32f0, "AbilityAnimationResource");
	apply_type(0x14e32f0, "RTTICompound");
	del_items(0x14e6590, DELIT_SIMPLE, 8);
	apply_type(0x14e6590, "RTTIBase[1]");
	set_name(0x14e6590, "AbilityAnimationResource::sBases");
	del_items(0x14e6598, DELIT_SIMPLE, 196);
	apply_type(0x14e6598, "RTTIAttr[7]");
	set_name(0x14e6598, "AbilityAnimationResource::sAttrs");

	// AbilityCharacterLookAt
	set_name(0x14e3f9c, "AbilityCharacterLookAt");
	apply_type(0x14e3f9c, "RTTICompound");
	del_items(0x14e75ec, DELIT_SIMPLE, 8);
	apply_type(0x14e75ec, "RTTIBase[1]");
	set_name(0x14e75ec, "AbilityCharacterLookAt::sBases");

	// AbilityCharacterLookAtResource
	set_name(0x14e3ff0, "AbilityCharacterLookAtResource");
	apply_type(0x14e3ff0, "RTTICompound");
	del_items(0x14e7408, DELIT_SIMPLE, 8);
	apply_type(0x14e7408, "RTTIBase[1]");
	set_name(0x14e7408, "AbilityCharacterLookAtResource::sBases");
	del_items(0x14e7410, DELIT_SIMPLE, 476);
	apply_type(0x14e7410, "RTTIAttr[17]");
	set_name(0x14e7410, "AbilityCharacterLookAtResource::sAttrs");

	// AbilityFootPlacement
	set_name(0x14e33fc, "AbilityFootPlacement");
	apply_type(0x14e33fc, "RTTICompound");
	del_items(0x14e66a4, DELIT_SIMPLE, 8);
	apply_type(0x14e66a4, "RTTIBase[1]");
	set_name(0x14e66a4, "AbilityFootPlacement::sBases");

	// AbilityFootPlacementResource
	set_name(0x14e3460, "AbilityFootPlacementResource");
	apply_type(0x14e3460, "RTTICompound");
	del_items(0x14e6a00, DELIT_SIMPLE, 8);
	apply_type(0x14e6a00, "RTTIBase[1]");
	set_name(0x14e6a00, "AbilityFootPlacementResource::sBases");
	del_items(0x14e6a08, DELIT_SIMPLE, 644);
	apply_type(0x14e6a08, "RTTIAttr[23]");
	set_name(0x14e6a08, "AbilityFootPlacementResource::sAttrs");

	// AbilityHeldItemOveride
	set_name(0x14e3e3c, "AbilityHeldItemOveride");
	apply_type(0x14e3e3c, "RTTICompound");
	del_items(0x14e6580, DELIT_SIMPLE, 16);
	apply_type(0x14e6580, "RTTIBase[2]");
	set_name(0x14e6580, "AbilityHeldItemOveride::sBases");

	// AbilityHeldItemOverideResource
	set_name(0x14e3ea0, "AbilityHeldItemOverideResource");
	apply_type(0x14e3ea0, "RTTICompound");
	del_items(0x14e6508, DELIT_SIMPLE, 8);
	apply_type(0x14e6508, "RTTIBase[1]");
	set_name(0x14e6508, "AbilityHeldItemOverideResource::sBases");
	del_items(0x14e6510, DELIT_SIMPLE, 112);
	apply_type(0x14e6510, "RTTIAttr[4]");
	set_name(0x14e6510, "AbilityHeldItemOverideResource::sAttrs");

	// AbilityLookAt
	set_name(0x14e3d94, "AbilityLookAt");
	apply_type(0x14e3d94, "RTTICompound");
	del_items(0x14e7364, DELIT_SIMPLE, 8);
	apply_type(0x14e7364, "RTTIBase[1]");
	set_name(0x14e7364, "AbilityLookAt::sBases");

	// AbilityLookAtResource
	set_name(0x14e3de8, "AbilityLookAtResource");
	apply_type(0x14e3de8, "RTTICompound");
	del_items(0x14e72b4, DELIT_SIMPLE, 8);
	apply_type(0x14e72b4, "RTTIBase[1]");
	set_name(0x14e72b4, "AbilityLookAtResource::sBases");
	del_items(0x14e72bc, DELIT_SIMPLE, 168);
	apply_type(0x14e72bc, "RTTIAttr[6]");
	set_name(0x14e72bc, "AbilityLookAtResource::sAttrs");

	// AbilityPBDTwoJointIk
	set_name(0x14e356c, "AbilityPBDTwoJointIk");
	apply_type(0x14e356c, "RTTICompound");
	del_items(0x14e6e70, DELIT_SIMPLE, 8);
	apply_type(0x14e6e70, "RTTIBase[1]");
	set_name(0x14e6e70, "AbilityPBDTwoJointIk::sBases");

	// AbilityPBDTwoJointIkResource
	set_name(0x14e3518, "AbilityPBDTwoJointIkResource");
	apply_type(0x14e3518, "RTTICompound");
	del_items(0x14e6df8, DELIT_SIMPLE, 8);
	apply_type(0x14e6df8, "RTTIBase[1]");
	set_name(0x14e6df8, "AbilityPBDTwoJointIkResource::sBases");
	del_items(0x14e6e00, DELIT_SIMPLE, 112);
	apply_type(0x14e6e00, "RTTIAttr[4]");
	set_name(0x14e6e00, "AbilityPBDTwoJointIkResource::sAttrs");

	// AbilityPhonemeAnimation
	set_name(0x14e35c0, "AbilityPhonemeAnimation");
	apply_type(0x14e35c0, "RTTICompound");
	del_items(0x14e6e78, DELIT_SIMPLE, 8);
	apply_type(0x14e6e78, "RTTIBase[1]");
	set_name(0x14e6e78, "AbilityPhonemeAnimation::sBases");

	// AbilityPhonemeAnimationRep
	set_name(0x14e3614, "AbilityPhonemeAnimationRep");
	apply_type(0x14e3614, "RTTICompound");
	del_items(0x14e6fa8, DELIT_SIMPLE, 8);
	apply_type(0x14e6fa8, "RTTIBase[1]");
	set_name(0x14e6fa8, "AbilityPhonemeAnimationRep::sBases");

	// AbilityPhonemeAnimationResource
	set_name(0x14e3750, "AbilityPhonemeAnimationResource");
	apply_type(0x14e3750, "RTTICompound");
	del_items(0x14e6f4c, DELIT_SIMPLE, 8);
	apply_type(0x14e6f4c, "RTTIBase[1]");
	set_name(0x14e6f4c, "AbilityPhonemeAnimationResource::sBases");
	del_items(0x14e6f54, DELIT_SIMPLE, 84);
	apply_type(0x14e6f54, "RTTIAttr[3]");
	set_name(0x14e6f54, "AbilityPhonemeAnimationResource::sAttrs");

	// AbilityPointAt
	set_name(0x14e3ef4, "AbilityPointAt");
	apply_type(0x14e3ef4, "RTTICompound");
	del_items(0x14e7400, DELIT_SIMPLE, 8);
	apply_type(0x14e7400, "RTTIBase[1]");
	set_name(0x14e7400, "AbilityPointAt::sBases");

	// AbilityPointAtResource
	set_name(0x14e3f48, "AbilityPointAtResource");
	apply_type(0x14e3f48, "RTTICompound");
	del_items(0x14e736c, DELIT_SIMPLE, 8);
	apply_type(0x14e736c, "RTTIBase[1]");
	set_name(0x14e736c, "AbilityPointAtResource::sBases");
	del_items(0x14e7374, DELIT_SIMPLE, 140);
	apply_type(0x14e7374, "RTTIAttr[5]");
	set_name(0x14e7374, "AbilityPointAtResource::sAttrs");

	// AbilityRagdoll
	set_name(0x14e37a4, "AbilityRagdoll");
	apply_type(0x14e37a4, "RTTICompound");
	del_items(0x14e4edc, DELIT_SIMPLE, 8);
	apply_type(0x14e4edc, "RTTIBase[1]");
	set_name(0x14e4edc, "AbilityRagdoll::sBases");

	// AbilityRagdollConstraintMotorData
	set_name(0x14e3808, "AbilityRagdollConstraintMotorData");
	apply_type(0x14e3808, "RTTICompound");
	del_items(0x14e66ac, DELIT_SIMPLE, 140);
	apply_type(0x14e66ac, "RTTIAttr[5]");
	set_name(0x14e66ac, "AbilityRagdollConstraintMotorData::sAttrs");

	// AbilityRagdollResource
	set_name(0x14e3934, "AbilityRagdollResource");
	apply_type(0x14e3934, "RTTICompound");
	del_items(0x14e67b0, DELIT_SIMPLE, 8);
	apply_type(0x14e67b0, "RTTIBase[1]");
	set_name(0x14e67b0, "AbilityRagdollResource::sBases");
	del_items(0x14e67b8, DELIT_SIMPLE, 560);
	apply_type(0x14e67b8, "RTTIAttr[20]");
	set_name(0x14e67b8, "AbilityRagdollResource::sAttrs");
	del_items(0x14e69e8, DELIT_SIMPLE, 24);
	apply_type(0x14e69e8, "RTTIMessageHandler[2]");
	set_name(0x14e69e8, "AbilityRagdollResource::sMessageHandlers");

	// AbilityRep
	set_name(0x14e75f4, "AbilityRep");
	apply_type(0x14e75f4, "RTTICompound");
	del_items(0x14e8f20, DELIT_SIMPLE, 8);
	apply_type(0x14e8f20, "RTTIBase[1]");
	set_name(0x14e8f20, "AbilityRep::sBases");

	// AbilityResource
	set_name(0x14e39a8, "AbilityResource");
	apply_type(0x14e39a8, "RTTICompound");
	del_items(0x14e649c, DELIT_SIMPLE, 8);
	apply_type(0x14e649c, "RTTIBase[1]");
	set_name(0x14e649c, "AbilityResource::sBases");

	// AbilityRollBone
	set_name(0x14e39fc, "AbilityRollBone");
	apply_type(0x14e39fc, "RTTICompound");
	del_items(0x14e6fb0, DELIT_SIMPLE, 8);
	apply_type(0x14e6fb0, "RTTIBase[1]");
	set_name(0x14e6fb0, "AbilityRollBone::sBases");

	// AbilityRollBoneResource
	set_name(0x14e3ab4, "AbilityRollBoneResource");
	apply_type(0x14e3ab4, "RTTICompound");
	del_items(0x14e7068, DELIT_SIMPLE, 8);
	apply_type(0x14e7068, "RTTIBase[1]");
	set_name(0x14e7068, "AbilityRollBoneResource::sBases");
	del_items(0x14e7070, DELIT_SIMPLE, 56);
	apply_type(0x14e7070, "RTTIAttr[2]");
	set_name(0x14e7070, "AbilityRollBoneResource::sAttrs");

	// AbilityShaderAnimation
	set_name(0x14e3bc0, "AbilityShaderAnimation");
	apply_type(0x14e3bc0, "RTTICompound");
	del_items(0x14e7128, DELIT_SIMPLE, 8);
	apply_type(0x14e7128, "RTTIBase[1]");
	set_name(0x14e7128, "AbilityShaderAnimation::sBases");

	// AbilityShaderAnimationRep
	set_name(0x14e769c, "AbilityShaderAnimationRep");
	apply_type(0x14e769c, "RTTICompound");
	del_items(0x14e933c, DELIT_SIMPLE, 8);
	apply_type(0x14e933c, "RTTIBase[1]");
	set_name(0x14e933c, "AbilityShaderAnimationRep::sBases");

	// AbilityShaderAnimationResource
	set_name(0x14e3c88, "AbilityShaderAnimationResource");
	apply_type(0x14e3c88, "RTTICompound");
	del_items(0x14e7168, DELIT_SIMPLE, 8);
	apply_type(0x14e7168, "RTTIBase[1]");
	set_name(0x14e7168, "AbilityShaderAnimationResource::sBases");
	del_items(0x14e7170, DELIT_SIMPLE, 56);
	apply_type(0x14e7170, "RTTIAttr[2]");
	set_name(0x14e7170, "AbilityShaderAnimationResource::sAttrs");

	// AbilityShaderAnimationResourceLink
	set_name(0x14e3c24, "AbilityShaderAnimationResourceLink");
	apply_type(0x14e3c24, "RTTICompound");
	del_items(0x14e7130, DELIT_SIMPLE, 56);
	apply_type(0x14e7130, "RTTIAttr[2]");
	set_name(0x14e7130, "AbilityShaderAnimationResourceLink::sAttrs");

	// AbilitySimpleAnimation
	set_name(0x14e3344, "AbilitySimpleAnimation");
	apply_type(0x14e3344, "RTTICompound");
	del_items(0x14e665c, DELIT_SIMPLE, 8);
	apply_type(0x14e665c, "RTTIBase[1]");
	set_name(0x14e665c, "AbilitySimpleAnimation::sBases");

	// AbilitySimpleAnimationRep
	set_name(0x14e7648, "AbilitySimpleAnimationRep");
	apply_type(0x14e7648, "RTTICompound");
	del_items(0x14e8f28, DELIT_SIMPLE, 8);
	apply_type(0x14e8f28, "RTTIBase[1]");
	set_name(0x14e8f28, "AbilitySimpleAnimationRep::sBases");

	// AbilitySimpleAnimationResource
	set_name(0x14e33a8, "AbilitySimpleAnimationResource");
	apply_type(0x14e33a8, "RTTICompound");
	del_items(0x14e6664, DELIT_SIMPLE, 8);
	apply_type(0x14e6664, "RTTIBase[1]");
	set_name(0x14e6664, "AbilitySimpleAnimationResource::sBases");
	del_items(0x14e666c, DELIT_SIMPLE, 56);
	apply_type(0x14e666c, "RTTIAttr[2]");
	set_name(0x14e666c, "AbilitySimpleAnimationResource::sAttrs");

	// AbilityTwoBoneIK
	set_name(0x14e3b08, "AbilityTwoBoneIK");
	apply_type(0x14e3b08, "RTTICompound");
	del_items(0x14e70a8, DELIT_SIMPLE, 8);
	apply_type(0x14e70a8, "RTTIBase[1]");
	set_name(0x14e70a8, "AbilityTwoBoneIK::sBases");

	// AbilityTwoBoneIKResource
	set_name(0x14e3b6c, "AbilityTwoBoneIKResource");
	apply_type(0x14e3b6c, "RTTICompound");
	del_items(0x14e70b0, DELIT_SIMPLE, 8);
	apply_type(0x14e70b0, "RTTIBase[1]");
	set_name(0x14e70b0, "AbilityTwoBoneIKResource::sBases");
	del_items(0x14e70b8, DELIT_SIMPLE, 112);
	apply_type(0x14e70b8, "RTTIAttr[4]");
	set_name(0x14e70b8, "AbilityTwoBoneIKResource::sAttrs");

	// AbilityWindAnimation
	set_name(0x14e3cdc, "AbilityWindAnimation");
	apply_type(0x14e3cdc, "RTTICompound");
	del_items(0x14e72ac, DELIT_SIMPLE, 8);
	apply_type(0x14e72ac, "RTTIBase[1]");
	set_name(0x14e72ac, "AbilityWindAnimation::sBases");

	// AbilityWindAnimationRep
	set_name(0x14e76f0, "AbilityWindAnimationRep");
	apply_type(0x14e76f0, "RTTICompound");
	del_items(0x14e9344, DELIT_SIMPLE, 8);
	apply_type(0x14e9344, "RTTIBase[1]");
	set_name(0x14e9344, "AbilityWindAnimationRep::sBases");

	// AbilityWindAnimationResource
	set_name(0x14e3d40, "AbilityWindAnimationResource");
	apply_type(0x14e3d40, "RTTICompound");
	del_items(0x14e71a8, DELIT_SIMPLE, 8);
	apply_type(0x14e71a8, "RTTIBase[1]");
	set_name(0x14e71a8, "AbilityWindAnimationResource::sBases");
	del_items(0x14e71b0, DELIT_SIMPLE, 252);
	apply_type(0x14e71b0, "RTTIAttr[9]");
	set_name(0x14e71b0, "AbilityWindAnimationResource::sAttrs");

	// AccuracySettings
	set_name(0x15221e0, "AccuracySettings");
	apply_type(0x15221e0, "RTTICompound");
	del_items(0x1523bdc, DELIT_SIMPLE, 8);
	apply_type(0x1523bdc, "RTTIBase[1]");
	set_name(0x1523bdc, "AccuracySettings::sBases");
	del_items(0x1523be4, DELIT_SIMPLE, 308);
	apply_type(0x1523be4, "RTTIAttr[11]");
	set_name(0x1523be4, "AccuracySettings::sAttrs");

	// Achievement
	set_name(0x14f02d4, "Achievement");
	apply_type(0x14f02d4, "RTTICompound");
	del_items(0x14f3e10, DELIT_SIMPLE, 140);
	apply_type(0x14f3e10, "RTTIAttr[5]");
	set_name(0x14f3e10, "Achievement::sAttrs");

	// AchievementsResource
	set_name(0x14f0328, "AchievementsResource");
	apply_type(0x14f0328, "RTTICompound");
	del_items(0x14f3e9c, DELIT_SIMPLE, 8);
	apply_type(0x14f3e9c, "RTTIBase[1]");
	set_name(0x14f3e9c, "AchievementsResource::sBases");
	del_items(0x14f3ea4, DELIT_SIMPLE, 56);
	apply_type(0x14f3ea4, "RTTIAttr[2]");
	set_name(0x14f3ea4, "AchievementsResource::sAttrs");

	// ActionModeController
	set_name(0x154836c, "ActionModeController");
	apply_type(0x154836c, "RTTICompound");
	del_items(0x1549e38, DELIT_SIMPLE, 8);
	apply_type(0x1549e38, "RTTIBase[1]");
	set_name(0x1549e38, "ActionModeController::sBases");

	// ActionModeMover
	set_name(0x1548318, "ActionModeMover");
	apply_type(0x1548318, "RTTICompound");
	del_items(0x1549b8c, DELIT_SIMPLE, 8);
	apply_type(0x1549b8c, "RTTIBase[1]");
	set_name(0x1549b8c, "ActionModeMover::sBases");

	// ActionModeResource
	set_name(0x15483d0, "ActionModeResource");
	apply_type(0x15483d0, "RTTICompound");
	del_items(0x1549adc, DELIT_SIMPLE, 8);
	apply_type(0x1549adc, "RTTIBase[1]");
	set_name(0x1549adc, "ActionModeResource::sBases");
	del_items(0x1549ae4, DELIT_SIMPLE, 168);
	apply_type(0x1549ae4, "RTTIAttr[6]");
	set_name(0x1549ae4, "ActionModeResource::sAttrs");

	// ActionPerAnimationEvent
	set_name(0x150ed44, "ActionPerAnimationEvent");
	apply_type(0x150ed44, "RTTICompound");
	del_items(0x1511f2c, DELIT_SIMPLE, 56);
	apply_type(0x1511f2c, "RTTIAttr[2]");
	set_name(0x1511f2c, "ActionPerAnimationEvent::sAttrs");

	// ActivateWindBoxEventInstance
	set_name(0x151c6b0, "ActivateWindBoxEventInstance");
	apply_type(0x151c6b0, "RTTICompound");
	del_items(0x151e570, DELIT_SIMPLE, 8);
	apply_type(0x151e570, "RTTIBase[1]");
	set_name(0x151e570, "ActivateWindBoxEventInstance::sBases");

	// ActivateWindBoxEventResource
	set_name(0x151c65c, "ActivateWindBoxEventResource");
	apply_type(0x151c65c, "RTTICompound");
	del_items(0x151e514, DELIT_SIMPLE, 8);
	apply_type(0x151e514, "RTTIBase[1]");
	set_name(0x151e514, "ActivateWindBoxEventResource::sBases");
	del_items(0x151e51c, DELIT_SIMPLE, 84);
	apply_type(0x151e51c, "RTTIAttr[3]");
	set_name(0x151e51c, "ActivateWindBoxEventResource::sAttrs");

	// ActorInstance
	set_name(0x151fdc8, "ActorInstance");
	apply_type(0x151fdc8, "RTTICompound");
	del_items(0x1521250, DELIT_SIMPLE, 8);
	apply_type(0x1521250, "RTTIBase[1]");
	set_name(0x1521250, "ActorInstance::sBases");

	// ActorResource
	set_name(0x151fd74, "ActorResource");
	apply_type(0x151fd74, "RTTICompound");
	del_items(0x1521248, DELIT_SIMPLE, 8);
	apply_type(0x1521248, "RTTIBase[1]");
	set_name(0x1521248, "ActorResource::sBases");

	// AimAtEventInstance
	set_name(0x1519064, "AimAtEventInstance");
	apply_type(0x1519064, "RTTICompound");
	del_items(0x151b1ac, DELIT_SIMPLE, 8);
	apply_type(0x151b1ac, "RTTIBase[1]");
	set_name(0x151b1ac, "AimAtEventInstance::sBases");

	// AimAtEventResource
	set_name(0x1519010, "AimAtEventResource");
	apply_type(0x1519010, "RTTICompound");
	del_items(0x151b0fc, DELIT_SIMPLE, 8);
	apply_type(0x151b0fc, "RTTIBase[1]");
	set_name(0x151b0fc, "AimAtEventResource::sBases");
	del_items(0x151b104, DELIT_SIMPLE, 168);
	apply_type(0x151b104, "RTTIAttr[6]");
	set_name(0x151b104, "AimAtEventResource::sAttrs");

	// AimDeviation
	set_name(0x1522244, "AimDeviation");
	apply_type(0x1522244, "RTTICompound");

	// AimDeviationResource
	set_name(0x15222a8, "AimDeviationResource");
	apply_type(0x15222a8, "RTTICompound");
	del_items(0x1523d24, DELIT_SIMPLE, 8);
	apply_type(0x1523d24, "RTTIBase[1]");
	set_name(0x1523d24, "AimDeviationResource::sBases");
	del_items(0x1523d2c, DELIT_SIMPLE, 504);
	apply_type(0x1523d2c, "RTTIAttr[18]");
	set_name(0x1523d2c, "AimDeviationResource::sAttrs");
	del_items(0x1523f24, DELIT_SIMPLE, 12);
	apply_type(0x1523f24, "RTTIMessageHandler[1]");
	set_name(0x1523f24, "AimDeviationResource::sMessageHandlers");

	// AimLagSettings
	set_name(0x1512cbc, "AimLagSettings");
	apply_type(0x1512cbc, "RTTICompound");
	del_items(0x15146b0, DELIT_SIMPLE, 8);
	apply_type(0x15146b0, "RTTIBase[1]");
	set_name(0x15146b0, "AimLagSettings::sBases");
	del_items(0x15146b8, DELIT_SIMPLE, 196);
	apply_type(0x15146b8, "RTTIAttr[7]");
	set_name(0x15146b8, "AimLagSettings::sAttrs");

	// AimLimitsEventInstance
	set_name(0x151910c, "AimLimitsEventInstance");
	apply_type(0x151910c, "RTTICompound");
	del_items(0x151b248, DELIT_SIMPLE, 8);
	apply_type(0x151b248, "RTTIBase[1]");
	set_name(0x151b248, "AimLimitsEventInstance::sBases");

	// AimLimitsEventResource
	set_name(0x15190b8, "AimLimitsEventResource");
	apply_type(0x15190b8, "RTTICompound");
	del_items(0x151b1b4, DELIT_SIMPLE, 8);
	apply_type(0x151b1b4, "RTTIBase[1]");
	set_name(0x151b1b4, "AimLimitsEventResource::sBases");
	del_items(0x151b1bc, DELIT_SIMPLE, 140);
	apply_type(0x151b1bc, "RTTIAttr[5]");
	set_name(0x151b1bc, "AimLimitsEventResource::sAttrs");

	// AirSupportGrenade
	set_name(0x1517694, "AirSupportGrenade");
	apply_type(0x1517694, "RTTICompound");
	del_items(0x1518384, DELIT_SIMPLE, 8);
	apply_type(0x1518384, "RTTIBase[1]");
	set_name(0x1518384, "AirSupportGrenade::sBases");

	// AirSupportGrenadeResource
	set_name(0x151774c, "AirSupportGrenadeResource");
	apply_type(0x151774c, "RTTICompound");
	del_items(0x15183d0, DELIT_SIMPLE, 8);
	apply_type(0x15183d0, "RTTIBase[1]");
	set_name(0x15183d0, "AirSupportGrenadeResource::sBases");
	del_items(0x15183d8, DELIT_SIMPLE, 224);
	apply_type(0x15183d8, "RTTIAttr[8]");
	set_name(0x15183d8, "AirSupportGrenadeResource::sAttrs");

	// AirVehicle
	set_name(0x1507a4c, "AirVehicle");
	apply_type(0x1507a4c, "RTTICompound");
	del_items(0x1508df8, DELIT_SIMPLE, 8);
	apply_type(0x1508df8, "RTTIBase[1]");
	set_name(0x1508df8, "AirVehicle::sBases");
	del_items(0x1508e00, DELIT_SIMPLE, 24);
	apply_type(0x1508e00, "RTTIFunction[1]");
	set_name(0x1508e00, "AirVehicle::sFunctions");

	// AirVehicleController
	set_name(0x1507bac, "AirVehicleController");
	apply_type(0x1507bac, "RTTICompound");
	del_items(0x1508e20, DELIT_SIMPLE, 8);
	apply_type(0x1508e20, "RTTIBase[1]");
	set_name(0x1508e20, "AirVehicleController::sBases");

	// AirVehicleMover
	set_name(0x152acb0, "AirVehicleMover");
	apply_type(0x152acb0, "RTTICompound");
	del_items(0x152b754, DELIT_SIMPLE, 8);
	apply_type(0x152b754, "RTTIBase[1]");
	set_name(0x152b754, "AirVehicleMover::sBases");

	// AirVehicleMoverResource
	set_name(0x152ad04, "AirVehicleMoverResource");
	apply_type(0x152ad04, "RTTICompound");
	del_items(0x152b75c, DELIT_SIMPLE, 8);
	apply_type(0x152b75c, "RTTIBase[1]");
	set_name(0x152b75c, "AirVehicleMoverResource::sBases");
	del_items(0x152b764, DELIT_SIMPLE, 728);
	apply_type(0x152b764, "RTTIAttr[26]");
	set_name(0x152b764, "AirVehicleMoverResource::sAttrs");

	// AirVehiclePendulumResource
	set_name(0x1507ab0, "AirVehiclePendulumResource");
	apply_type(0x1507ab0, "RTTICompound");
	del_items(0x1508b90, DELIT_SIMPLE, 8);
	apply_type(0x1508b90, "RTTIBase[1]");
	set_name(0x1508b90, "AirVehiclePendulumResource::sBases");
	del_items(0x1508b98, DELIT_SIMPLE, 196);
	apply_type(0x1508b98, "RTTIAttr[7]");
	set_name(0x1508b98, "AirVehiclePendulumResource::sAttrs");

	// AirVehicleRep
	set_name(0x1507b58, "AirVehicleRep");
	apply_type(0x1507b58, "RTTICompound");
	del_items(0x1508e18, DELIT_SIMPLE, 8);
	apply_type(0x1508e18, "RTTIBase[1]");
	set_name(0x1508e18, "AirVehicleRep::sBases");

	// AirVehicleResource
	set_name(0x1507b04, "AirVehicleResource");
	apply_type(0x1507b04, "RTTICompound");
	del_items(0x1508c5c, DELIT_SIMPLE, 8);
	apply_type(0x1508c5c, "RTTIBase[1]");
	set_name(0x1508c5c, "AirVehicleResource::sBases");
	del_items(0x1508c64, DELIT_SIMPLE, 392);
	apply_type(0x1508c64, "RTTIAttr[14]");
	set_name(0x1508c64, "AirVehicleResource::sAttrs");
	del_items(0x1508dec, DELIT_SIMPLE, 12);
	apply_type(0x1508dec, "RTTIMessageHandler[1]");
	set_name(0x1508dec, "AirVehicleResource::sMessageHandlers");

	// AlphaPeg
	set_name(0x14e0f30, "AlphaPeg");
	apply_type(0x14e0f30, "RTTICompound");
	del_items(0x14e1358, DELIT_SIMPLE, 8);
	apply_type(0x14e1358, "RTTIBase[1]");
	set_name(0x14e1358, "AlphaPeg::sBases");
	del_items(0x14e1360, DELIT_SIMPLE, 56);
	apply_type(0x14e1360, "RTTIAttr[2]");
	set_name(0x14e1360, "AlphaPeg::sAttrs");

	// AmbientSoundEventInstance
	set_name(0x15191b4, "AmbientSoundEventInstance");
	apply_type(0x15191b4, "RTTICompound");
	del_items(0x151b3d4, DELIT_SIMPLE, 8);
	apply_type(0x151b3d4, "RTTIBase[1]");
	set_name(0x151b3d4, "AmbientSoundEventInstance::sBases");

	// AmbientSoundEventResource
	set_name(0x1519160, "AmbientSoundEventResource");
	apply_type(0x1519160, "RTTICompound");
	del_items(0x151b340, DELIT_SIMPLE, 8);
	apply_type(0x151b340, "RTTIBase[1]");
	set_name(0x151b340, "AmbientSoundEventResource::sBases");
	del_items(0x151b348, DELIT_SIMPLE, 140);
	apply_type(0x151b348, "RTTIAttr[5]");
	set_name(0x151b348, "AmbientSoundEventResource::sAttrs");

	// AmbientSoundPortal
	set_name(0x14dce14, "AmbientSoundPortal");
	apply_type(0x14dce14, "RTTICompound");
	del_items(0x14e0954, DELIT_SIMPLE, 8);
	apply_type(0x14e0954, "RTTIBase[1]");
	set_name(0x14e0954, "AmbientSoundPortal::sBases");

	// AmbientSoundPortalManager
	set_name(0x14dcd70, "AmbientSoundPortalManager");
	apply_type(0x14dcd70, "RTTICompound");
	del_items(0x14e094c, DELIT_SIMPLE, 8);
	apply_type(0x14e094c, "RTTIBase[1]");
	set_name(0x14e094c, "AmbientSoundPortalManager::sBases");

	// AmbientSoundZone
	set_name(0x14dceb8, "AmbientSoundZone");
	apply_type(0x14dceb8, "RTTICompound");
	del_items(0x14e095c, DELIT_SIMPLE, 8);
	apply_type(0x14e095c, "RTTIBase[1]");
	set_name(0x14e095c, "AmbientSoundZone::sBases");

	// Ammo
	set_name(0x15222fc, "Ammo");
	apply_type(0x15222fc, "RTTICompound");
	del_items(0x1523bb0, DELIT_SIMPLE, 16);
	apply_type(0x1523bb0, "RTTIBase[2]");
	set_name(0x1523bb0, "Ammo::sBases");
	del_items(0x1523bc0, DELIT_SIMPLE, 28);
	apply_type(0x1523bc0, "RTTIAttr[1]");
	set_name(0x1523bc0, "Ammo::sAttrs");

	// AmmoBeltAnimationSettings
	set_name(0x1505618, "AmmoBeltAnimationSettings");
	apply_type(0x1505618, "RTTICompound");
	del_items(0x1506aec, DELIT_SIMPLE, 56);
	apply_type(0x1506aec, "RTTIAttr[2]");
	set_name(0x1506aec, "AmmoBeltAnimationSettings::sAttrs");

	// AmmoBox
	set_name(0x1502a38, "AmmoBox");
	apply_type(0x1502a38, "RTTICompound");
	del_items(0x1504904, DELIT_SIMPLE, 8);
	apply_type(0x1504904, "RTTIBase[1]");
	set_name(0x1504904, "AmmoBox::sBases");
	del_items(0x150490c, DELIT_SIMPLE, 12);
	apply_type(0x150490c, "RTTIMessageHandler[1]");
	set_name(0x150490c, "AmmoBox::sMessageHandlers");

	// AmmoBoxRep
	set_name(0x1502a8c, "AmmoBoxRep");
	apply_type(0x1502a8c, "RTTICompound");
	del_items(0x1504928, DELIT_SIMPLE, 8);
	apply_type(0x1504928, "RTTIBase[1]");
	set_name(0x1504928, "AmmoBoxRep::sBases");

	// AmmoBoxResource
	set_name(0x1502b44, "AmmoBoxResource");
	apply_type(0x1502b44, "RTTICompound");
	del_items(0x1504788, DELIT_SIMPLE, 8);
	apply_type(0x1504788, "RTTIBase[1]");
	set_name(0x1504788, "AmmoBoxResource::sBases");
	del_items(0x1504790, DELIT_SIMPLE, 112);
	apply_type(0x1504790, "RTTIAttr[4]");
	set_name(0x1504790, "AmmoBoxResource::sAttrs");

	// AmmoBoxResourceReloadSettings
	set_name(0x1502af0, "AmmoBoxResourceReloadSettings");
	apply_type(0x1502af0, "RTTICompound");
	del_items(0x15046cc, DELIT_SIMPLE, 8);
	apply_type(0x15046cc, "RTTIBase[1]");
	set_name(0x15046cc, "AmmoBoxResourceReloadSettings::sBases");
	del_items(0x15046d4, DELIT_SIMPLE, 168);
	apply_type(0x15046d4, "RTTIAttr[6]");
	set_name(0x15046d4, "AmmoBoxResourceReloadSettings::sAttrs");

	// AmmoEjector
	set_name(0x1522350, "AmmoEjector");
	apply_type(0x1522350, "RTTICompound");
	del_items(0x1523d18, DELIT_SIMPLE, 8);
	apply_type(0x1523d18, "RTTIBase[1]");
	set_name(0x1523d18, "AmmoEjector::sBases");

	// AmmoEjectorRep
	set_name(0x15223a4, "AmmoEjectorRep");
	apply_type(0x15223a4, "RTTICompound");
	del_items(0x1523f30, DELIT_SIMPLE, 8);
	apply_type(0x1523f30, "RTTIBase[1]");
	set_name(0x1523f30, "AmmoEjectorRep::sBases");

	// AmmoEjectorResource
	set_name(0x1522418, "AmmoEjectorResource");
	apply_type(0x1522418, "RTTICompound");
	del_items(0x15231f0, DELIT_SIMPLE, 8);
	apply_type(0x15231f0, "RTTIBase[1]");
	set_name(0x15231f0, "AmmoEjectorResource::sBases");
	del_items(0x15231f8, DELIT_SIMPLE, 2296);
	apply_type(0x15231f8, "RTTIAttr[82]");
	set_name(0x15231f8, "AmmoEjectorResource::sAttrs");
	del_items(0x1523af0, DELIT_SIMPLE, 12);
	apply_type(0x1523af0, "RTTIMessageHandler[1]");
	set_name(0x1523af0, "AmmoEjectorResource::sMessageHandlers");

	// AmmoPickupSetting
	set_name(0x1518f04, "AmmoPickupSetting");
	apply_type(0x1518f04, "RTTICompound");
	del_items(0x151ad94, DELIT_SIMPLE, 56);
	apply_type(0x151ad94, "RTTIAttr[2]");
	set_name(0x151ad94, "AmmoPickupSetting::sAttrs");

	// AmmoResource
	set_name(0x1522534, "AmmoResource");
	apply_type(0x1522534, "RTTICompound");
	del_items(0x1523b00, DELIT_SIMPLE, 8);
	apply_type(0x1523b00, "RTTIBase[1]");
	set_name(0x1523b00, "AmmoResource::sBases");
	del_items(0x1523b08, DELIT_SIMPLE, 168);
	apply_type(0x1523b08, "RTTIAttr[6]");
	set_name(0x1523b08, "AmmoResource::sAttrs");

	// AngularBoneSpeedTrackerResource
	set_name(0x1541ba8, "AngularBoneSpeedTrackerResource");
	apply_type(0x1541ba8, "RTTICompound");
	del_items(0x1543194, DELIT_SIMPLE, 8);
	apply_type(0x1543194, "RTTIBase[1]");
	set_name(0x1543194, "AngularBoneSpeedTrackerResource::sBases");
	del_items(0x154319c, DELIT_SIMPLE, 56);
	apply_type(0x154319c, "RTTIAttr[2]");
	set_name(0x154319c, "AngularBoneSpeedTrackerResource::sAttrs");

	// AnimatedActionModeCharacter
	set_name(0x15501bc, "AnimatedActionModeCharacter");
	apply_type(0x15501bc, "RTTICompound");
	del_items(0x15507a0, DELIT_SIMPLE, 8);
	apply_type(0x15507a0, "RTTIBase[1]");
	set_name(0x15507a0, "AnimatedActionModeCharacter::sBases");

	// AnimatedActionModeController
	set_name(0x1550264, "AnimatedActionModeController");
	apply_type(0x1550264, "RTTICompound");
	del_items(0x15507a8, DELIT_SIMPLE, 8);
	apply_type(0x15507a8, "RTTIBase[1]");
	set_name(0x15507a8, "AnimatedActionModeController::sBases");

	// AnimatedActionModeResource
	set_name(0x1550210, "AnimatedActionModeResource");
	apply_type(0x1550210, "RTTICompound");
	del_items(0x1550798, DELIT_SIMPLE, 8);
	apply_type(0x1550798, "RTTIBase[1]");
	set_name(0x1550798, "AnimatedActionModeResource::sBases");

	// AnimatedCameraEventInstance
	set_name(0x151925c, "AnimatedCameraEventInstance");
	apply_type(0x151925c, "RTTICompound");
	del_items(0x151b4e0, DELIT_SIMPLE, 8);
	apply_type(0x151b4e0, "RTTIBase[1]");
	set_name(0x151b4e0, "AnimatedCameraEventInstance::sBases");

	// AnimatedCameraEventResource
	set_name(0x1519208, "AnimatedCameraEventResource");
	apply_type(0x1519208, "RTTICompound");
	del_items(0x151b3dc, DELIT_SIMPLE, 8);
	apply_type(0x151b3dc, "RTTIBase[1]");
	set_name(0x151b3dc, "AnimatedCameraEventResource::sBases");
	del_items(0x151b3e4, DELIT_SIMPLE, 252);
	apply_type(0x151b3e4, "RTTIAttr[9]");
	set_name(0x151b3e4, "AnimatedCameraEventResource::sAttrs");

	// AnimatedEntityActorInstance
	set_name(0x151fe80, "AnimatedEntityActorInstance");
	apply_type(0x151fe80, "RTTICompound");
	del_items(0x1521478, DELIT_SIMPLE, 8);
	apply_type(0x1521478, "RTTIBase[1]");
	set_name(0x1521478, "AnimatedEntityActorInstance::sBases");

	// AnimatedEntityActorResource
	set_name(0x151fe2c, "AnimatedEntityActorResource");
	apply_type(0x151fe2c, "RTTICompound");
	del_items(0x1521438, DELIT_SIMPLE, 8);
	apply_type(0x1521438, "RTTIBase[1]");
	set_name(0x1521438, "AnimatedEntityActorResource::sBases");
	del_items(0x1521440, DELIT_SIMPLE, 56);
	apply_type(0x1521440, "RTTIAttr[2]");
	set_name(0x1521440, "AnimatedEntityActorResource::sAttrs");

	// AnimatedEntityEventInstance
	set_name(0x151c758, "AnimatedEntityEventInstance");
	apply_type(0x151c758, "RTTICompound");
	del_items(0x151e6bc, DELIT_SIMPLE, 8);
	apply_type(0x151e6bc, "RTTIBase[1]");
	set_name(0x151e6bc, "AnimatedEntityEventInstance::sBases");

	// AnimatedEntityEventResource
	set_name(0x151c704, "AnimatedEntityEventResource");
	apply_type(0x151c704, "RTTICompound");
	del_items(0x151e5d4, DELIT_SIMPLE, 8);
	apply_type(0x151e5d4, "RTTIBase[1]");
	set_name(0x151e5d4, "AnimatedEntityEventResource::sBases");
	del_items(0x151e5dc, DELIT_SIMPLE, 224);
	apply_type(0x151e5dc, "RTTIAttr[8]");
	set_name(0x151e5dc, "AnimatedEntityEventResource::sAttrs");

	// AnimatedMeshEventInstance
	set_name(0x151c800, "AnimatedMeshEventInstance");
	apply_type(0x151c800, "RTTICompound");
	del_items(0x151e810, DELIT_SIMPLE, 8);
	apply_type(0x151e810, "RTTIBase[1]");
	set_name(0x151e810, "AnimatedMeshEventInstance::sBases");

	// AnimatedMeshEventResource
	set_name(0x151c7ac, "AnimatedMeshEventResource");
	apply_type(0x151c7ac, "RTTICompound");
	del_items(0x151e77c, DELIT_SIMPLE, 8);
	apply_type(0x151e77c, "RTTIBase[1]");
	set_name(0x151e77c, "AnimatedMeshEventResource::sBases");
	del_items(0x151e784, DELIT_SIMPLE, 140);
	apply_type(0x151e784, "RTTIAttr[5]");
	set_name(0x151e784, "AnimatedMeshEventResource::sAttrs");

	// AnimatedModelActorInstance
	set_name(0x151ff28, "AnimatedModelActorInstance");
	apply_type(0x151ff28, "RTTICompound");
	del_items(0x15215b4, DELIT_SIMPLE, 8);
	apply_type(0x15215b4, "RTTIBase[1]");
	set_name(0x15215b4, "AnimatedModelActorInstance::sBases");

	// AnimatedModelActorResource
	set_name(0x151fed4, "AnimatedModelActorResource");
	apply_type(0x151fed4, "RTTICompound");
	del_items(0x1521574, DELIT_SIMPLE, 8);
	apply_type(0x1521574, "RTTIBase[1]");
	set_name(0x1521574, "AnimatedModelActorResource::sBases");
	del_items(0x152157c, DELIT_SIMPLE, 56);
	apply_type(0x152157c, "RTTIAttr[2]");
	set_name(0x152157c, "AnimatedModelActorResource::sAttrs");

	// AnimatedModelEntity
	set_name(0x152090c, "AnimatedModelEntity");
	apply_type(0x152090c, "RTTICompound");
	del_items(0x152196c, DELIT_SIMPLE, 8);
	apply_type(0x152196c, "RTTIBase[1]");
	set_name(0x152196c, "AnimatedModelEntity::sBases");

	// AnimatedModelEntityResource
	set_name(0x1520960, "AnimatedModelEntityResource");
	apply_type(0x1520960, "RTTICompound");
	del_items(0x1521980, DELIT_SIMPLE, 8);
	apply_type(0x1521980, "RTTIBase[1]");
	set_name(0x1521980, "AnimatedModelEntityResource::sBases");

	// AnimatedPlayerCameraEventInstance
	set_name(0x1519304, "AnimatedPlayerCameraEventInstance");
	apply_type(0x1519304, "RTTICompound");
	del_items(0x151b560, DELIT_SIMPLE, 8);
	apply_type(0x151b560, "RTTIBase[1]");
	set_name(0x151b560, "AnimatedPlayerCameraEventInstance::sBases");

	// AnimatedPlayerCameraEventResource
	set_name(0x15192b0, "AnimatedPlayerCameraEventResource");
	apply_type(0x15192b0, "RTTICompound");
	del_items(0x151b4e8, DELIT_SIMPLE, 8);
	apply_type(0x151b4e8, "RTTIBase[1]");
	set_name(0x151b4e8, "AnimatedPlayerCameraEventResource::sBases");
	del_items(0x151b4f0, DELIT_SIMPLE, 112);
	apply_type(0x151b4f0, "RTTIAttr[4]");
	set_name(0x151b4f0, "AnimatedPlayerCameraEventResource::sAttrs");

	// AnimatedPositionLocatorEventInstance
	set_name(0x151c8a8, "AnimatedPositionLocatorEventInstance");
	apply_type(0x151c8a8, "RTTICompound");
	del_items(0x151e874, DELIT_SIMPLE, 8);
	apply_type(0x151e874, "RTTIBase[1]");
	set_name(0x151e874, "AnimatedPositionLocatorEventInstance::sBases");

	// AnimatedPositionLocatorEventResource
	set_name(0x151c854, "AnimatedPositionLocatorEventResource");
	apply_type(0x151c854, "RTTICompound");
	del_items(0x151e818, DELIT_SIMPLE, 8);
	apply_type(0x151e818, "RTTIBase[1]");
	set_name(0x151e818, "AnimatedPositionLocatorEventResource::sBases");
	del_items(0x151e820, DELIT_SIMPLE, 84);
	apply_type(0x151e820, "RTTIAttr[3]");
	set_name(0x151e820, "AnimatedPositionLocatorEventResource::sAttrs");

	// AnimatedRenderZoneEventInstance
	set_name(0x1519454, "AnimatedRenderZoneEventInstance");
	apply_type(0x1519454, "RTTICompound");
	del_items(0x151b6b4, DELIT_SIMPLE, 8);
	apply_type(0x151b6b4, "RTTIBase[1]");
	set_name(0x151b6b4, "AnimatedRenderZoneEventInstance::sBases");

	// AnimatedRenderZoneEventResource
	set_name(0x1519400, "AnimatedRenderZoneEventResource");
	apply_type(0x1519400, "RTTICompound");
	del_items(0x151b620, DELIT_SIMPLE, 8);
	apply_type(0x151b620, "RTTIBase[1]");
	set_name(0x151b620, "AnimatedRenderZoneEventResource::sBases");
	del_items(0x151b628, DELIT_SIMPLE, 140);
	apply_type(0x151b628, "RTTIAttr[5]");
	set_name(0x151b628, "AnimatedRenderZoneEventResource::sAttrs");

	// AnimatedScreenEffectResource
	set_name(0x14fab18, "AnimatedScreenEffectResource");
	apply_type(0x14fab18, "RTTICompound");
	del_items(0x14fef38, DELIT_SIMPLE, 8);
	apply_type(0x14fef38, "RTTIBase[1]");
	set_name(0x14fef38, "AnimatedScreenEffectResource::sBases");
	del_items(0x14fef40, DELIT_SIMPLE, 28);
	apply_type(0x14fef40, "RTTIAttr[1]");
	set_name(0x14fef40, "AnimatedScreenEffectResource::sAttrs");

	// AnimatedShaderEventInstance
	set_name(0x15193ac, "AnimatedShaderEventInstance");
	apply_type(0x15193ac, "RTTICompound");
	del_items(0x151b618, DELIT_SIMPLE, 8);
	apply_type(0x151b618, "RTTIBase[1]");
	set_name(0x151b618, "AnimatedShaderEventInstance::sBases");

	// AnimatedShaderEventResource
	set_name(0x1519358, "AnimatedShaderEventResource");
	apply_type(0x1519358, "RTTICompound");
	del_items(0x151b568, DELIT_SIMPLE, 8);
	apply_type(0x151b568, "RTTIBase[1]");
	set_name(0x151b568, "AnimatedShaderEventResource::sBases");
	del_items(0x151b570, DELIT_SIMPLE, 168);
	apply_type(0x151b570, "RTTIAttr[6]");
	set_name(0x151b570, "AnimatedShaderEventResource::sAttrs");

	// AnimatedStaticMeshInstance
	set_name(0x14b9cb4, "AnimatedStaticMeshInstance");
	apply_type(0x14b9cb4, "RTTICompound");
	del_items(0x14bbcb4, DELIT_SIMPLE, 8);
	apply_type(0x14bbcb4, "RTTIBase[1]");
	set_name(0x14bbcb4, "AnimatedStaticMeshInstance::sBases");

	// AnimatedStaticMeshResource
	set_name(0x14b9d08, "AnimatedStaticMeshResource");
	apply_type(0x14b9d08, "RTTICompound");
	del_items(0x14bbcfc, DELIT_SIMPLE, 8);
	apply_type(0x14bbcfc, "RTTIBase[1]");
	set_name(0x14bbcfc, "AnimatedStaticMeshResource::sBases");
	del_items(0x14bbd04, DELIT_SIMPLE, 56);
	apply_type(0x14bbd04, "RTTIAttr[2]");
	set_name(0x14bbd04, "AnimatedStaticMeshResource::sAttrs");

	// AnimationActionEventInstance
	set_name(0x15194fc, "AnimationActionEventInstance");
	apply_type(0x15194fc, "RTTICompound");
	del_items(0x151b718, DELIT_SIMPLE, 8);
	apply_type(0x151b718, "RTTIBase[1]");
	set_name(0x151b718, "AnimationActionEventInstance::sBases");

	// AnimationActionEventResource
	set_name(0x15194a8, "AnimationActionEventResource");
	apply_type(0x15194a8, "RTTICompound");
	del_items(0x151b6bc, DELIT_SIMPLE, 8);
	apply_type(0x151b6bc, "RTTIBase[1]");
	set_name(0x151b6bc, "AnimationActionEventResource::sBases");
	del_items(0x151b6c4, DELIT_SIMPLE, 84);
	apply_type(0x151b6c4, "RTTIAttr[3]");
	set_name(0x151b6c4, "AnimationActionEventResource::sAttrs");

	// AnimationDiagramState
	set_name(0x154208c, "AnimationDiagramState");
	apply_type(0x154208c, "RTTICompound");
	del_items(0x1543768, DELIT_SIMPLE, 8);
	apply_type(0x1543768, "RTTIBase[1]");
	set_name(0x1543768, "AnimationDiagramState::sBases");
	del_items(0x1543770, DELIT_SIMPLE, 616);
	apply_type(0x1543770, "RTTIAttr[22]");
	set_name(0x1543770, "AnimationDiagramState::sAttrs");

	// AnimationDiagramStateAnimationArray
	set_name(0x1542018, "AnimationDiagramStateAnimationArray");
	apply_type(0x1542018, "RTTICompound");
	del_items(0x15439d8, DELIT_SIMPLE, 8);
	apply_type(0x15439d8, "RTTIBase[1]");
	set_name(0x15439d8, "AnimationDiagramStateAnimationArray::sBases");
	del_items(0x15439e0, DELIT_SIMPLE, 84);
	apply_type(0x15439e0, "RTTIAttr[3]");
	set_name(0x15439e0, "AnimationDiagramStateAnimationArray::sAttrs");

	// AnimationDiagramStateAnimationInfo
	set_name(0x1541fa4, "AnimationDiagramStateAnimationInfo");
	apply_type(0x1541fa4, "RTTICompound");
	del_items(0x1543a34, DELIT_SIMPLE, 8);
	apply_type(0x1543a34, "RTTIBase[1]");
	set_name(0x1543a34, "AnimationDiagramStateAnimationInfo::sBases");
	del_items(0x1543a3c, DELIT_SIMPLE, 56);
	apply_type(0x1543a3c, "RTTIAttr[2]");
	set_name(0x1543a3c, "AnimationDiagramStateAnimationInfo::sAttrs");
	del_items(0x1543a74, DELIT_SIMPLE, 12);
	apply_type(0x1543a74, "RTTIMessageHandler[1]");
	set_name(0x1543a74, "AnimationDiagramStateAnimationInfo::sMessageHandlers");

	// AnimationEvent
	set_name(0x14b97e4, "AnimationEvent");
	apply_type(0x14b97e4, "RTTICompound");
	del_items(0x14bb13c, DELIT_SIMPLE, 84);
	apply_type(0x14bb13c, "RTTIAttr[3]");
	set_name(0x14bb13c, "AnimationEvent::sAttrs");

	// AnimationEventActionComponent
	set_name(0x150ece0, "AnimationEventActionComponent");
	apply_type(0x150ece0, "RTTICompound");
	del_items(0x1511fa8, DELIT_SIMPLE, 8);
	apply_type(0x1511fa8, "RTTIBase[1]");
	set_name(0x1511fa8, "AnimationEventActionComponent::sBases");

	// AnimationEventActionComponentResource
	set_name(0x150ed98, "AnimationEventActionComponentResource");
	apply_type(0x150ed98, "RTTICompound");
	del_items(0x1511f64, DELIT_SIMPLE, 8);
	apply_type(0x1511f64, "RTTIBase[1]");
	set_name(0x1511f64, "AnimationEventActionComponentResource::sBases");
	del_items(0x1511f6c, DELIT_SIMPLE, 56);
	apply_type(0x1511f6c, "RTTIAttr[2]");
	set_name(0x1511f6c, "AnimationEventActionComponentResource::sAttrs");

	// AnimationEventComponent
	set_name(0x150edec, "AnimationEventComponent");
	apply_type(0x150edec, "RTTICompound");
	del_items(0x1512030, DELIT_SIMPLE, 8);
	apply_type(0x1512030, "RTTIBase[1]");
	set_name(0x1512030, "AnimationEventComponent::sBases");

	// AnimationEventComponentResource
	set_name(0x150eea4, "AnimationEventComponentResource");
	apply_type(0x150eea4, "RTTICompound");
	del_items(0x1511fec, DELIT_SIMPLE, 8);
	apply_type(0x1511fec, "RTTIBase[1]");
	set_name(0x1511fec, "AnimationEventComponentResource::sBases");
	del_items(0x1511ff4, DELIT_SIMPLE, 56);
	apply_type(0x1511ff4, "RTTIAttr[2]");
	set_name(0x1511ff4, "AnimationEventComponentResource::sAttrs");

	// AnimationEventResource
	set_name(0x14b971c, "AnimationEventResource");
	apply_type(0x14b971c, "RTTICompound");
	del_items(0x14bb254, DELIT_SIMPLE, 8);
	apply_type(0x14bb254, "RTTIBase[1]");
	set_name(0x14bb254, "AnimationEventResource::sBases");
	del_items(0x14bb25c, DELIT_SIMPLE, 140);
	apply_type(0x14bb25c, "RTTIAttr[5]");
	set_name(0x14bb25c, "AnimationEventResource::sAttrs");

	// AnimationExpressionCouple
	set_name(0x153a94c, "AnimationExpressionCouple");
	apply_type(0x153a94c, "RTTICompound");
	del_items(0x153b3d4, DELIT_SIMPLE, 56);
	apply_type(0x153b3d4, "RTTIAttr[2]");
	set_name(0x153b3d4, "AnimationExpressionCouple::sAttrs");

	// AnimationMotionBase
	set_name(0x1540870, "AnimationMotionBase");
	apply_type(0x1540870, "RTTICompound");
	del_items(0x1540cd4, DELIT_SIMPLE, 8);
	apply_type(0x1540cd4, "RTTIBase[1]");
	set_name(0x1540cd4, "AnimationMotionBase::sBases");

	// AnimationMotionCurve
	set_name(0x15408c4, "AnimationMotionCurve");
	apply_type(0x15408c4, "RTTICompound");
	del_items(0x1540cdc, DELIT_SIMPLE, 8);
	apply_type(0x1540cdc, "RTTIBase[1]");
	set_name(0x1540cdc, "AnimationMotionCurve::sBases");
	del_items(0x1540ce4, DELIT_SIMPLE, 84);
	apply_type(0x1540ce4, "RTTIAttr[3]");
	set_name(0x1540ce4, "AnimationMotionCurve::sAttrs");

	// AnimationMotionDirectional
	set_name(0x1540918, "AnimationMotionDirectional");
	apply_type(0x1540918, "RTTICompound");
	del_items(0x1540d38, DELIT_SIMPLE, 8);
	apply_type(0x1540d38, "RTTIBase[1]");
	set_name(0x1540d38, "AnimationMotionDirectional::sBases");
	del_items(0x1540d40, DELIT_SIMPLE, 84);
	apply_type(0x1540d40, "RTTIAttr[3]");
	set_name(0x1540d40, "AnimationMotionDirectional::sAttrs");

	// AnimationOverrideActivation
	set_name(0x154fdc0, "AnimationOverrideActivation");
	apply_type(0x154fdc0, "RTTICompound");
	del_items(0x1550488, DELIT_SIMPLE, 8);
	apply_type(0x1550488, "RTTIBase[1]");
	set_name(0x1550488, "AnimationOverrideActivation::sBases");

	// AnimationOverrideActivationResource
	set_name(0x154ff60, "AnimationOverrideActivationResource");
	apply_type(0x154ff60, "RTTICompound");
	del_items(0x1550534, DELIT_SIMPLE, 8);
	apply_type(0x1550534, "RTTIBase[1]");
	set_name(0x1550534, "AnimationOverrideActivationResource::sBases");
	del_items(0x155053c, DELIT_SIMPLE, 28);
	apply_type(0x155053c, "RTTIAttr[1]");
	set_name(0x155053c, "AnimationOverrideActivationResource::sAttrs");

	// AnimationOverrideCharacterActivation
	set_name(0x1550008, "AnimationOverrideCharacterActivation");
	apply_type(0x1550008, "RTTICompound");
	del_items(0x1550568, DELIT_SIMPLE, 8);
	apply_type(0x1550568, "RTTIBase[1]");
	set_name(0x1550568, "AnimationOverrideCharacterActivation::sBases");

	// AnimationOverrideCharacterActivationResource
	set_name(0x155006c, "AnimationOverrideCharacterActivationResource");
	apply_type(0x155006c, "RTTICompound");
	del_items(0x15505b0, DELIT_SIMPLE, 8);
	apply_type(0x15505b0, "RTTIBase[1]");
	set_name(0x15505b0, "AnimationOverrideCharacterActivationResource::sBases");
	del_items(0x15505b8, DELIT_SIMPLE, 140);
	apply_type(0x15505b8, "RTTIAttr[5]");
	set_name(0x15505b8, "AnimationOverrideCharacterActivationResource::sAttrs");

	// AnimationOverrideCharacterEntity
	set_name(0x1550114, "AnimationOverrideCharacterEntity");
	apply_type(0x1550114, "RTTICompound");
	del_items(0x1550754, DELIT_SIMPLE, 8);
	apply_type(0x1550754, "RTTIBase[1]");
	set_name(0x1550754, "AnimationOverrideCharacterEntity::sBases");
	del_items(0x155075c, DELIT_SIMPLE, 48);
	apply_type(0x155075c, "RTTIFunction[2]");
	set_name(0x155075c, "AnimationOverrideCharacterEntity::sFunctions");

	// AnimationOverrideCharacterEntityResource
	set_name(0x1550168, "AnimationOverrideCharacterEntityResource");
	apply_type(0x1550168, "RTTICompound");
	del_items(0x1550650, DELIT_SIMPLE, 8);
	apply_type(0x1550650, "RTTIBase[1]");
	set_name(0x1550650, "AnimationOverrideCharacterEntityResource::sBases");
	del_items(0x1550658, DELIT_SIMPLE, 252);
	apply_type(0x1550658, "RTTIAttr[9]");
	set_name(0x1550658, "AnimationOverrideCharacterEntityResource::sAttrs");

	// AnimationOverrideEntity
	set_name(0x154fcc4, "AnimationOverrideEntity");
	apply_type(0x154fcc4, "RTTICompound");
	del_items(0x1550438, DELIT_SIMPLE, 8);
	apply_type(0x1550438, "RTTIBase[1]");
	set_name(0x1550438, "AnimationOverrideEntity::sBases");
	del_items(0x1550440, DELIT_SIMPLE, 72);
	apply_type(0x1550440, "RTTIFunction[3]");
	set_name(0x1550440, "AnimationOverrideEntity::sFunctions");

	// AnimationOverrideEntityResource
	set_name(0x154fd18, "AnimationOverrideEntityResource");
	apply_type(0x154fd18, "RTTICompound");
	del_items(0x15502c4, DELIT_SIMPLE, 8);
	apply_type(0x15502c4, "RTTIBase[1]");
	set_name(0x15502c4, "AnimationOverrideEntityResource::sBases");
	del_items(0x15502cc, DELIT_SIMPLE, 364);
	apply_type(0x15502cc, "RTTIAttr[13]");
	set_name(0x15502cc, "AnimationOverrideEntityResource::sAttrs");

	// AnimationOverrideUser
	set_name(0x154fd6c, "AnimationOverrideUser");
	apply_type(0x154fd6c, "RTTICompound");
	del_items(0x1550558, DELIT_SIMPLE, 8);
	apply_type(0x1550558, "RTTIBase[1]");
	set_name(0x1550558, "AnimationOverrideUser::sBases");

	// AnimationOverrideUserCharacter
	set_name(0x154ffb4, "AnimationOverrideUserCharacter");
	apply_type(0x154ffb4, "RTTICompound");
	del_items(0x1550560, DELIT_SIMPLE, 8);
	apply_type(0x1550560, "RTTIBase[1]");
	set_name(0x1550560, "AnimationOverrideUserCharacter::sBases");

	// AnimationPoseMatchingAnimationData
	set_name(0x14e8d90, "AnimationPoseMatchingAnimationData");
	apply_type(0x14e8d90, "RTTICompound");
	del_items(0x14ea348, DELIT_SIMPLE, 28);
	apply_type(0x14ea348, "RTTIAttr[1]");
	set_name(0x14ea348, "AnimationPoseMatchingAnimationData::sAttrs");

	// AnimationPoseMatchingBoneData
	set_name(0x14e8c54, "AnimationPoseMatchingBoneData");
	apply_type(0x14e8c54, "RTTICompound");
	del_items(0x14ea24c, DELIT_SIMPLE, 56);
	apply_type(0x14ea24c, "RTTIAttr[2]");
	set_name(0x14ea24c, "AnimationPoseMatchingBoneData::sAttrs");

	// AnimationPoseMatchingConfigData
	set_name(0x14e8d1c, "AnimationPoseMatchingConfigData");
	apply_type(0x14e8d1c, "RTTICompound");
	del_items(0x14ea188, DELIT_SIMPLE, 196);
	apply_type(0x14ea188, "RTTIAttr[7]");
	set_name(0x14ea188, "AnimationPoseMatchingConfigData::sAttrs");

	// AnimationPoseMatchingDataBase
	set_name(0x14e8df4, "AnimationPoseMatchingDataBase");
	apply_type(0x14e8df4, "RTTICompound");
	del_items(0x14ea150, DELIT_SIMPLE, 56);
	apply_type(0x14ea150, "RTTIAttr[2]");
	set_name(0x14ea150, "AnimationPoseMatchingDataBase::sAttrs");

	// AnimationPoseMatchingHelperResource
	set_name(0x14e8ecc, "AnimationPoseMatchingHelperResource");
	apply_type(0x14e8ecc, "RTTICompound");
	del_items(0x14ea3b8, DELIT_SIMPLE, 8);
	apply_type(0x14ea3b8, "RTTIBase[1]");
	set_name(0x14ea3b8, "AnimationPoseMatchingHelperResource::sBases");
	del_items(0x14ea3c0, DELIT_SIMPLE, 252);
	apply_type(0x14ea3c0, "RTTIAttr[9]");
	set_name(0x14ea3c0, "AnimationPoseMatchingHelperResource::sAttrs");

	// AnimationPoseMatchingPose
	set_name(0x14e8cb8, "AnimationPoseMatchingPose");
	apply_type(0x14e8cb8, "RTTICompound");
	del_items(0x14ea284, DELIT_SIMPLE, 196);
	apply_type(0x14ea284, "RTTIAttr[7]");
	set_name(0x14ea284, "AnimationPoseMatchingPose::sAttrs");

	// AnimationResource
	set_name(0x14b9780, "AnimationResource");
	apply_type(0x14b9780, "RTTICompound");
	del_items(0x14bb2e8, DELIT_SIMPLE, 8);
	apply_type(0x14bb2e8, "RTTIBase[1]");
	set_name(0x14bb2e8, "AnimationResource::sBases");
	del_items(0x14bb2f0, DELIT_SIMPLE, 84);
	apply_type(0x14bb2f0, "RTTIAttr[3]");
	set_name(0x14bb2f0, "AnimationResource::sAttrs");

	// AnimationSoundEvent
	set_name(0x14b9848, "AnimationSoundEvent");
	apply_type(0x14b9848, "RTTICompound");
	del_items(0x14bb190, DELIT_SIMPLE, 84);
	apply_type(0x14bb190, "RTTIAttr[3]");
	set_name(0x14bb190, "AnimationSoundEvent::sAttrs");

	// AnimationState
	set_name(0x14b9a6c, "AnimationState");
	apply_type(0x14b9a6c, "RTTICompound");
	del_items(0x14bb528, DELIT_SIMPLE, 8);
	apply_type(0x14bb528, "RTTIBase[1]");
	set_name(0x14bb528, "AnimationState::sBases");
	del_items(0x14bb530, DELIT_SIMPLE, 196);
	apply_type(0x14bb530, "RTTIAttr[7]");
	set_name(0x14bb530, "AnimationState::sAttrs");

	// AnimationStateEvents
	set_name(0x14b99d8, "AnimationStateEvents");
	apply_type(0x14b99d8, "RTTICompound");
	del_items(0x14bb4b0, DELIT_SIMPLE, 8);
	apply_type(0x14bb4b0, "RTTIBase[1]");
	set_name(0x14bb4b0, "AnimationStateEvents::sBases");
	del_items(0x14bb4b8, DELIT_SIMPLE, 112);
	apply_type(0x14bb4b8, "RTTIAttr[4]");
	set_name(0x14bb4b8, "AnimationStateEvents::sAttrs");

	// AnimationStateGroup
	set_name(0x14b9ad0, "AnimationStateGroup");
	apply_type(0x14b9ad0, "RTTICompound");
	del_items(0x14bb634, DELIT_SIMPLE, 112);
	apply_type(0x14bb634, "RTTIAttr[4]");
	set_name(0x14bb634, "AnimationStateGroup::sAttrs");

	// AnimationStateGroupMask
	set_name(0x14b9900, "AnimationStateGroupMask");
	apply_type(0x14b9900, "RTTICompound");
	del_items(0x14bb344, DELIT_SIMPLE, 28);
	apply_type(0x14bb344, "RTTIAttr[1]");
	set_name(0x14bb344, "AnimationStateGroupMask::sAttrs");

	// AnimationStateInterface
	set_name(0x14ba774, "AnimationStateInterface");
	apply_type(0x14ba774, "RTTICompound");

	// AnimationStateManager
	set_name(0x14b9c60, "AnimationStateManager");
	apply_type(0x14b9c60, "RTTICompound");
	del_items(0x14bb710, DELIT_SIMPLE, 8);
	apply_type(0x14bb710, "RTTIBase[1]");
	set_name(0x14bb710, "AnimationStateManager::sBases");
	del_items(0x14bb718, DELIT_SIMPLE, 336);
	apply_type(0x14bb718, "RTTIAttr[12]");
	set_name(0x14bb718, "AnimationStateManager::sAttrs");
	del_items(0x14bb868, DELIT_SIMPLE, 12);
	apply_type(0x14bb868, "RTTIMessageHandler[1]");
	set_name(0x14bb868, "AnimationStateManager::sMessageHandlers");

	// AnimationTrackBase
	set_name(0x14ba008, "AnimationTrackBase");
	apply_type(0x14ba008, "RTTICompound");
	del_items(0x14bb8c0, DELIT_SIMPLE, 8);
	apply_type(0x14bb8c0, "RTTIBase[1]");
	set_name(0x14bb8c0, "AnimationTrackBase::sBases");

	// AnimationTrackKeyFrame_FQuat
	set_name(0x14b9f50, "AnimationTrackKeyFrame_FQuat");
	apply_type(0x14b9f50, "RTTICompound");
	del_items(0x14bb974, DELIT_SIMPLE, 8);
	apply_type(0x14bb974, "RTTIBase[1]");
	set_name(0x14bb974, "AnimationTrackKeyFrame_FQuat::sBases");
	del_items(0x14bb97c, DELIT_SIMPLE, 28);
	apply_type(0x14bb97c, "RTTIAttr[1]");
	set_name(0x14bb97c, "AnimationTrackKeyFrame_FQuat::sAttrs");

	// AnimationTrackKeyFrame_FVector3
	set_name(0x14b9e88, "AnimationTrackKeyFrame_FVector3");
	apply_type(0x14b9e88, "RTTICompound");
	del_items(0x14bb92c, DELIT_SIMPLE, 8);
	apply_type(0x14bb92c, "RTTIBase[1]");
	set_name(0x14bb92c, "AnimationTrackKeyFrame_FVector3::sBases");
	del_items(0x14bb934, DELIT_SIMPLE, 28);
	apply_type(0x14bb934, "RTTIAttr[1]");
	set_name(0x14bb934, "AnimationTrackKeyFrame_FVector3::sAttrs");

	// AnimationTrackKeyFrame_FVector4
	set_name(0x14b9eec, "AnimationTrackKeyFrame_FVector4");
	apply_type(0x14b9eec, "RTTICompound");
	del_items(0x14bb950, DELIT_SIMPLE, 8);
	apply_type(0x14bb950, "RTTIBase[1]");
	set_name(0x14bb950, "AnimationTrackKeyFrame_FVector4::sBases");
	del_items(0x14bb958, DELIT_SIMPLE, 28);
	apply_type(0x14bb958, "RTTIAttr[1]");
	set_name(0x14bb958, "AnimationTrackKeyFrame_FVector4::sAttrs");

	// AnimationTrackKeyFrame_RGBAColor
	set_name(0x14b9fb4, "AnimationTrackKeyFrame_RGBAColor");
	apply_type(0x14b9fb4, "RTTICompound");
	del_items(0x14bb998, DELIT_SIMPLE, 8);
	apply_type(0x14bb998, "RTTIBase[1]");
	set_name(0x14bb998, "AnimationTrackKeyFrame_RGBAColor::sBases");
	del_items(0x14bb9a0, DELIT_SIMPLE, 28);
	apply_type(0x14bb9a0, "RTTIAttr[1]");
	set_name(0x14bb9a0, "AnimationTrackKeyFrame_RGBAColor::sAttrs");

	// AnimationTrackKeyFrame_bool
	set_name(0x14b9dc0, "AnimationTrackKeyFrame_bool");
	apply_type(0x14b9dc0, "RTTICompound");
	del_items(0x14bb8e4, DELIT_SIMPLE, 8);
	apply_type(0x14bb8e4, "RTTIBase[1]");
	set_name(0x14bb8e4, "AnimationTrackKeyFrame_bool::sBases");
	del_items(0x14bb8ec, DELIT_SIMPLE, 28);
	apply_type(0x14bb8ec, "RTTIAttr[1]");
	set_name(0x14bb8ec, "AnimationTrackKeyFrame_bool::sAttrs");

	// AnimationTrackKeyFrame_float
	set_name(0x14b9e24, "AnimationTrackKeyFrame_float");
	apply_type(0x14b9e24, "RTTICompound");
	del_items(0x14bb908, DELIT_SIMPLE, 8);
	apply_type(0x14bb908, "RTTIBase[1]");
	set_name(0x14bb908, "AnimationTrackKeyFrame_float::sBases");
	del_items(0x14bb910, DELIT_SIMPLE, 28);
	apply_type(0x14bb910, "RTTIAttr[1]");
	set_name(0x14bb910, "AnimationTrackKeyFrame_float::sAttrs");

	// AnimationTrackKeyTime
	set_name(0x14b9d5c, "AnimationTrackKeyTime");
	apply_type(0x14b9d5c, "RTTICompound");
	del_items(0x14bb8c8, DELIT_SIMPLE, 28);
	apply_type(0x14bb8c8, "RTTIAttr[1]");
	set_name(0x14bb8c8, "AnimationTrackKeyTime::sAttrs");

	// AnimationTrackLinearBool
	set_name(0x14ba198, "AnimationTrackLinearBool");
	apply_type(0x14ba198, "RTTICompound");
	del_items(0x14bba7c, DELIT_SIMPLE, 8);
	apply_type(0x14bba7c, "RTTIBase[1]");
	set_name(0x14bba7c, "AnimationTrackLinearBool::sBases");
	del_items(0x14bba84, DELIT_SIMPLE, 56);
	apply_type(0x14bba84, "RTTIAttr[2]");
	set_name(0x14bba84, "AnimationTrackLinearBool::sAttrs");

	// AnimationTrackLinearFQuat
	set_name(0x14ba1fc, "AnimationTrackLinearFQuat");
	apply_type(0x14ba1fc, "RTTICompound");
	del_items(0x14bbabc, DELIT_SIMPLE, 8);
	apply_type(0x14bbabc, "RTTIBase[1]");
	set_name(0x14bbabc, "AnimationTrackLinearFQuat::sBases");
	del_items(0x14bbac4, DELIT_SIMPLE, 56);
	apply_type(0x14bbac4, "RTTIAttr[2]");
	set_name(0x14bbac4, "AnimationTrackLinearFQuat::sAttrs");

	// AnimationTrackLinearFVector3
	set_name(0x14ba0d0, "AnimationTrackLinearFVector3");
	apply_type(0x14ba0d0, "RTTICompound");
	del_items(0x14bb9fc, DELIT_SIMPLE, 8);
	apply_type(0x14bb9fc, "RTTIBase[1]");
	set_name(0x14bb9fc, "AnimationTrackLinearFVector3::sBases");
	del_items(0x14bba04, DELIT_SIMPLE, 56);
	apply_type(0x14bba04, "RTTIAttr[2]");
	set_name(0x14bba04, "AnimationTrackLinearFVector3::sAttrs");

	// AnimationTrackLinearFVector4
	set_name(0x14ba134, "AnimationTrackLinearFVector4");
	apply_type(0x14ba134, "RTTICompound");
	del_items(0x14bba3c, DELIT_SIMPLE, 8);
	apply_type(0x14bba3c, "RTTIBase[1]");
	set_name(0x14bba3c, "AnimationTrackLinearFVector4::sBases");
	del_items(0x14bba44, DELIT_SIMPLE, 56);
	apply_type(0x14bba44, "RTTIAttr[2]");
	set_name(0x14bba44, "AnimationTrackLinearFVector4::sAttrs");

	// AnimationTrackLinearFloat
	set_name(0x14ba06c, "AnimationTrackLinearFloat");
	apply_type(0x14ba06c, "RTTICompound");
	del_items(0x14bb9bc, DELIT_SIMPLE, 8);
	apply_type(0x14bb9bc, "RTTIBase[1]");
	set_name(0x14bb9bc, "AnimationTrackLinearFloat::sBases");
	del_items(0x14bb9c4, DELIT_SIMPLE, 56);
	apply_type(0x14bb9c4, "RTTIAttr[2]");
	set_name(0x14bb9c4, "AnimationTrackLinearFloat::sAttrs");

	// AnimationTrackLinearRGBAColor
	set_name(0x14ba260, "AnimationTrackLinearRGBAColor");
	apply_type(0x14ba260, "RTTICompound");
	del_items(0x14bbafc, DELIT_SIMPLE, 8);
	apply_type(0x14bbafc, "RTTIBase[1]");
	set_name(0x14bbafc, "AnimationTrackLinearRGBAColor::sBases");
	del_items(0x14bbb04, DELIT_SIMPLE, 56);
	apply_type(0x14bbb04, "RTTIAttr[2]");
	set_name(0x14bbb04, "AnimationTrackLinearRGBAColor::sAttrs");

	// AnimationVariableEventInstance
	set_name(0x15195a4, "AnimationVariableEventInstance");
	apply_type(0x15195a4, "RTTICompound");
	del_items(0x151b7d0, DELIT_SIMPLE, 8);
	apply_type(0x151b7d0, "RTTIBase[1]");
	set_name(0x151b7d0, "AnimationVariableEventInstance::sBases");

	// AnimationVariableEventResource
	set_name(0x1519550, "AnimationVariableEventResource");
	apply_type(0x1519550, "RTTICompound");
	del_items(0x151b720, DELIT_SIMPLE, 8);
	apply_type(0x151b720, "RTTIBase[1]");
	set_name(0x151b720, "AnimationVariableEventResource::sBases");
	del_items(0x151b728, DELIT_SIMPLE, 168);
	apply_type(0x151b728, "RTTIAttr[6]");
	set_name(0x151b728, "AnimationVariableEventResource::sAttrs");

	// AnimationWWiseSoundEvent
	set_name(0x14b98ac, "AnimationWWiseSoundEvent");
	apply_type(0x14b98ac, "RTTICompound");
	del_items(0x14bb1e4, DELIT_SIMPLE, 112);
	apply_type(0x14bb1e4, "RTTIAttr[4]");
	set_name(0x14bb1e4, "AnimationWWiseSoundEvent::sAttrs");

	// ApplyForceEntity
	set_name(0x14f9af8, "ApplyForceEntity");
	apply_type(0x14f9af8, "RTTICompound");
	del_items(0x14fe798, DELIT_SIMPLE, 8);
	apply_type(0x14fe798, "RTTIBase[1]");
	set_name(0x14fe798, "ApplyForceEntity::sBases");

	// ApplyForceEntityResource
	set_name(0x14f9b4c, "ApplyForceEntityResource");
	apply_type(0x14f9b4c, "RTTICompound");
	del_items(0x14fe7ac, DELIT_SIMPLE, 8);
	apply_type(0x14fe7ac, "RTTIBase[1]");
	set_name(0x14fe7ac, "ApplyForceEntityResource::sBases");
	del_items(0x14fe7b4, DELIT_SIMPLE, 84);
	apply_type(0x14fe7b4, "RTTIAttr[3]");
	set_name(0x14fe7b4, "ApplyForceEntityResource::sAttrs");

	// ApplyHealthContinuouslyComponent
	set_name(0x150fee0, "ApplyHealthContinuouslyComponent");
	apply_type(0x150fee0, "RTTICompound");
	del_items(0x1512604, DELIT_SIMPLE, 8);
	apply_type(0x1512604, "RTTIBase[1]");
	set_name(0x1512604, "ApplyHealthContinuouslyComponent::sBases");

	// ApplyPhysicsImpulseAction
	set_name(0x14f93c0, "ApplyPhysicsImpulseAction");
	apply_type(0x14f93c0, "RTTICompound");
	del_items(0x14fdf8c, DELIT_SIMPLE, 8);
	apply_type(0x14fdf8c, "RTTIBase[1]");
	set_name(0x14fdf8c, "ApplyPhysicsImpulseAction::sBases");
	del_items(0x14fdf94, DELIT_SIMPLE, 196);
	apply_type(0x14fdf94, "RTTIAttr[7]");
	set_name(0x14fdf94, "ApplyPhysicsImpulseAction::sAttrs");

	// Asset
	set_name(0x14bc140, "Asset");
	apply_type(0x14bc140, "RTTICompound");
	del_items(0x14bc324, DELIT_SIMPLE, 8);
	apply_type(0x14bc324, "RTTIBase[1]");
	set_name(0x14bc324, "Asset::sBases");
	del_items(0x14bc32c, DELIT_SIMPLE, 28);
	apply_type(0x14bc32c, "RTTIAttr[1]");
	set_name(0x14bc32c, "Asset::sAttrs");

	// AssetCollection
	set_name(0x14bc27c, "AssetCollection");
	apply_type(0x14bc27c, "RTTICompound");
	del_items(0x14bc3c8, DELIT_SIMPLE, 8);
	apply_type(0x14bc3c8, "RTTIBase[1]");
	set_name(0x14bc3c8, "AssetCollection::sBases");
	del_items(0x14bc3d0, DELIT_SIMPLE, 28);
	apply_type(0x14bc3d0, "RTTIAttr[1]");
	set_name(0x14bc3d0, "AssetCollection::sAttrs");

	// AttachPhysicsRagdollToBoneMover
	set_name(0x14e87c4, "AttachPhysicsRagdollToBoneMover");
	apply_type(0x14e87c4, "RTTICompound");
	del_items(0x14e9e68, DELIT_SIMPLE, 8);
	apply_type(0x14e9e68, "RTTIBase[1]");
	set_name(0x14e9e68, "AttachPhysicsRagdollToBoneMover::sBases");

	// AttachPhysicsRagdollToBoneMoverResource
	set_name(0x14e8818, "AttachPhysicsRagdollToBoneMoverResource");
	apply_type(0x14e8818, "RTTICompound");
	del_items(0x14e9e28, DELIT_SIMPLE, 8);
	apply_type(0x14e9e28, "RTTIBase[1]");
	set_name(0x14e9e28, "AttachPhysicsRagdollToBoneMoverResource::sBases");
	del_items(0x14e9e30, DELIT_SIMPLE, 56);
	apply_type(0x14e9e30, "RTTIAttr[2]");
	set_name(0x14e9e30, "AttachPhysicsRagdollToBoneMoverResource::sAttrs");

	// AttachToAimMatrixMover
	set_name(0x152c108, "AttachToAimMatrixMover");
	apply_type(0x152c108, "RTTICompound");
	del_items(0x152cd4c, DELIT_SIMPLE, 8);
	apply_type(0x152cd4c, "RTTIBase[1]");
	set_name(0x152cd4c, "AttachToAimMatrixMover::sBases");

	// AttachToAimMatrixMoverResource
	set_name(0x152c15c, "AttachToAimMatrixMoverResource");
	apply_type(0x152c15c, "RTTICompound");
	del_items(0x152cd54, DELIT_SIMPLE, 8);
	apply_type(0x152cd54, "RTTIBase[1]");
	set_name(0x152cd54, "AttachToAimMatrixMoverResource::sBases");
	del_items(0x152cd5c, DELIT_SIMPLE, 28);
	apply_type(0x152cd5c, "RTTIAttr[1]");
	set_name(0x152cd5c, "AttachToAimMatrixMoverResource::sAttrs");

	// AttachToBoneMover
	set_name(0x14e81dc, "AttachToBoneMover");
	apply_type(0x14e81dc, "RTTICompound");
	del_items(0x14e9c14, DELIT_SIMPLE, 8);
	apply_type(0x14e9c14, "RTTIBase[1]");
	set_name(0x14e9c14, "AttachToBoneMover::sBases");

	// AttachToBoneMoverResource
	set_name(0x14e8230, "AttachToBoneMoverResource");
	apply_type(0x14e8230, "RTTICompound");
	del_items(0x14e9bc8, DELIT_SIMPLE, 8);
	apply_type(0x14e9bc8, "RTTIBase[1]");
	set_name(0x14e9bc8, "AttachToBoneMoverResource::sBases");
	del_items(0x14e9bd0, DELIT_SIMPLE, 56);
	apply_type(0x14e9bd0, "RTTIAttr[2]");
	set_name(0x14e9bd0, "AttachToBoneMoverResource::sAttrs");
	del_items(0x14e9c08, DELIT_SIMPLE, 12);
	apply_type(0x14e9c08, "RTTIMessageHandler[1]");
	set_name(0x14e9c08, "AttachToBoneMoverResource::sMessageHandlers");

	// AttachToEntityBlendFromMover
	set_name(0x14e8524, "AttachToEntityBlendFromMover");
	apply_type(0x14e8524, "RTTICompound");
	del_items(0x14e9d8c, DELIT_SIMPLE, 8);
	apply_type(0x14e9d8c, "RTTIBase[1]");
	set_name(0x14e9d8c, "AttachToEntityBlendFromMover::sBases");

	// AttachToEntityBlendFromMoverResource
	set_name(0x14e8578, "AttachToEntityBlendFromMoverResource");
	apply_type(0x14e8578, "RTTICompound");
	del_items(0x14e9d94, DELIT_SIMPLE, 8);
	apply_type(0x14e9d94, "RTTIBase[1]");
	set_name(0x14e9d94, "AttachToEntityBlendFromMoverResource::sBases");

	// AttachToEntityBoneMover
	set_name(0x14e8284, "AttachToEntityBoneMover");
	apply_type(0x14e8284, "RTTICompound");
	del_items(0x14e9c8c, DELIT_SIMPLE, 8);
	apply_type(0x14e9c8c, "RTTIBase[1]");
	set_name(0x14e9c8c, "AttachToEntityBoneMover::sBases");

	// AttachToEntityBoneMoverResource
	set_name(0x14e832c, "AttachToEntityBoneMoverResource");
	apply_type(0x14e832c, "RTTICompound");
	del_items(0x14e9c1c, DELIT_SIMPLE, 8);
	apply_type(0x14e9c1c, "RTTIBase[1]");
	set_name(0x14e9c1c, "AttachToEntityBoneMoverResource::sBases");
	del_items(0x14e9c24, DELIT_SIMPLE, 84);
	apply_type(0x14e9c24, "RTTIAttr[3]");
	set_name(0x14e9c24, "AttachToEntityBoneMoverResource::sAttrs");
	del_items(0x14e9c78, DELIT_SIMPLE, 12);
	apply_type(0x14e9c78, "RTTIMessageHandler[1]");
	set_name(0x14e9c78, "AttachToEntityBoneMoverResource::sMessageHandlers");

	// AttachToEntityByPConstraintMover
	set_name(0x14e886c, "AttachToEntityByPConstraintMover");
	apply_type(0x14e886c, "RTTICompound");
	del_items(0x14e9f74, DELIT_SIMPLE, 8);
	apply_type(0x14e9f74, "RTTIBase[1]");
	set_name(0x14e9f74, "AttachToEntityByPConstraintMover::sBases");

	// AttachToEntityByPConstraintMoverResource
	set_name(0x14e8924, "AttachToEntityByPConstraintMoverResource");
	apply_type(0x14e8924, "RTTICompound");
	del_items(0x14e9f34, DELIT_SIMPLE, 8);
	apply_type(0x14e9f34, "RTTIBase[1]");
	set_name(0x14e9f34, "AttachToEntityByPConstraintMoverResource::sBases");
	del_items(0x14e9f3c, DELIT_SIMPLE, 56);
	apply_type(0x14e9f3c, "RTTIAttr[2]");
	set_name(0x14e9f3c, "AttachToEntityByPConstraintMoverResource::sAttrs");

	// AttachToEntityMover
	set_name(0x14e847c, "AttachToEntityMover");
	apply_type(0x14e847c, "RTTICompound");
	del_items(0x14e9bc0, DELIT_SIMPLE, 8);
	apply_type(0x14e9bc0, "RTTIBase[1]");
	set_name(0x14e9bc0, "AttachToEntityMover::sBases");

	// AttachToEntityMoverResource
	set_name(0x14e84d0, "AttachToEntityMoverResource");
	apply_type(0x14e84d0, "RTTICompound");
	del_items(0x14e9b64, DELIT_SIMPLE, 8);
	apply_type(0x14e9b64, "RTTIBase[1]");
	set_name(0x14e9b64, "AttachToEntityMoverResource::sBases");
	del_items(0x14e9b6c, DELIT_SIMPLE, 84);
	apply_type(0x14e9b6c, "RTTIAttr[3]");
	set_name(0x14e9b6c, "AttachToEntityMoverResource::sAttrs");

	// AttachToEntityParentMover
	set_name(0x14e82d8, "AttachToEntityParentMover");
	apply_type(0x14e82d8, "RTTICompound");
	del_items(0x14e9c94, DELIT_SIMPLE, 8);
	apply_type(0x14e9c94, "RTTIBase[1]");
	set_name(0x14e9c94, "AttachToEntityParentMover::sBases");

	// AttachToEntityParentMoverResource
	set_name(0x14e8380, "AttachToEntityParentMoverResource");
	apply_type(0x14e8380, "RTTICompound");
	del_items(0x14e9c84, DELIT_SIMPLE, 8);
	apply_type(0x14e9c84, "RTTIBase[1]");
	set_name(0x14e9c84, "AttachToEntityParentMoverResource::sBases");

	// AttachToHelperMover
	set_name(0x14e85cc, "AttachToHelperMover");
	apply_type(0x14e85cc, "RTTICompound");
	del_items(0x14e9d9c, DELIT_SIMPLE, 8);
	apply_type(0x14e9d9c, "RTTIBase[1]");
	set_name(0x14e9d9c, "AttachToHelperMover::sBases");
	del_items(0x14e9da4, DELIT_SIMPLE, 24);
	apply_type(0x14e9da4, "RTTIFunction[1]");
	set_name(0x14e9da4, "AttachToHelperMover::sFunctions");

	// AttachToHelperMoverResource
	set_name(0x14e8620, "AttachToHelperMoverResource");
	apply_type(0x14e8620, "RTTICompound");
	del_items(0x14e9d40, DELIT_SIMPLE, 8);
	apply_type(0x14e9d40, "RTTIBase[1]");
	set_name(0x14e9d40, "AttachToHelperMoverResource::sBases");
	del_items(0x14e9d48, DELIT_SIMPLE, 56);
	apply_type(0x14e9d48, "RTTIAttr[2]");
	set_name(0x14e9d48, "AttachToHelperMoverResource::sAttrs");
	del_items(0x14e9d80, DELIT_SIMPLE, 12);
	apply_type(0x14e9d80, "RTTIMessageHandler[1]");
	set_name(0x14e9d80, "AttachToHelperMoverResource::sMessageHandlers");

	// AttachToPartMover
	set_name(0x14e83d4, "AttachToPartMover");
	apply_type(0x14e83d4, "RTTICompound");
	del_items(0x14e9cdc, DELIT_SIMPLE, 8);
	apply_type(0x14e9cdc, "RTTIBase[1]");
	set_name(0x14e9cdc, "AttachToPartMover::sBases");

	// AttachToPartMoverResource
	set_name(0x14e8428, "AttachToPartMoverResource");
	apply_type(0x14e8428, "RTTICompound");
	del_items(0x14e9c9c, DELIT_SIMPLE, 8);
	apply_type(0x14e9c9c, "RTTIBase[1]");
	set_name(0x14e9c9c, "AttachToPartMoverResource::sBases");
	del_items(0x14e9ca4, DELIT_SIMPLE, 56);
	apply_type(0x14e9ca4, "RTTIAttr[2]");
	set_name(0x14e9ca4, "AttachToPartMoverResource::sAttrs");

	// AttachToPlayerCharacterBoneMover
	set_name(0x1541df4, "AttachToPlayerCharacterBoneMover");
	apply_type(0x1541df4, "RTTICompound");
	del_items(0x154359c, DELIT_SIMPLE, 8);
	apply_type(0x154359c, "RTTIBase[1]");
	set_name(0x154359c, "AttachToPlayerCharacterBoneMover::sBases");

	// AttachToPlayerCharacterBoneMoverResource
	set_name(0x1541e48, "AttachToPlayerCharacterBoneMoverResource");
	apply_type(0x1541e48, "RTTICompound");
	del_items(0x15435a4, DELIT_SIMPLE, 8);
	apply_type(0x15435a4, "RTTIBase[1]");
	set_name(0x15435a4, "AttachToPlayerCharacterBoneMoverResource::sBases");
	del_items(0x15435ac, DELIT_SIMPLE, 84);
	apply_type(0x15435ac, "RTTIAttr[3]");
	set_name(0x15435ac, "AttachToPlayerCharacterBoneMoverResource::sAttrs");
	del_items(0x1543600, DELIT_SIMPLE, 12);
	apply_type(0x1543600, "RTTIMessageHandler[1]");
	set_name(0x1543600, "AttachToPlayerCharacterBoneMoverResource::sMessageHandlers");

	// AttachToSequenceLocatorMover
	set_name(0x14fb5d8, "AttachToSequenceLocatorMover");
	apply_type(0x14fb5d8, "RTTICompound");
	del_items(0x14ff9c0, DELIT_SIMPLE, 8);
	apply_type(0x14ff9c0, "RTTIBase[1]");
	set_name(0x14ff9c0, "AttachToSequenceLocatorMover::sBases");

	// AttachToSequenceLocatorMoverResource
	set_name(0x14fb62c, "AttachToSequenceLocatorMoverResource");
	apply_type(0x14fb62c, "RTTICompound");
	del_items(0x14ff9c8, DELIT_SIMPLE, 8);
	apply_type(0x14ff9c8, "RTTIBase[1]");
	set_name(0x14ff9c8, "AttachToSequenceLocatorMoverResource::sBases");
	del_items(0x14ff9d0, DELIT_SIMPLE, 84);
	apply_type(0x14ff9d0, "RTTIAttr[3]");
	set_name(0x14ff9d0, "AttachToSequenceLocatorMoverResource::sAttrs");
	del_items(0x14ffa24, DELIT_SIMPLE, 12);
	apply_type(0x14ffa24, "RTTIMessageHandler[1]");
	set_name(0x14ffa24, "AttachToSequenceLocatorMoverResource::sMessageHandlers");

	// AttachToWorldMatrixMover
	set_name(0x14e8674, "AttachToWorldMatrixMover");
	apply_type(0x14e8674, "RTTICompound");
	del_items(0x14e9dbc, DELIT_SIMPLE, 8);
	apply_type(0x14e9dbc, "RTTIBase[1]");
	set_name(0x14e9dbc, "AttachToWorldMatrixMover::sBases");

	// AttachToWorldMatrixMoverResource
	set_name(0x14e86c8, "AttachToWorldMatrixMoverResource");
	apply_type(0x14e86c8, "RTTICompound");
	del_items(0x14e9ce4, DELIT_SIMPLE, 8);
	apply_type(0x14e9ce4, "RTTIBase[1]");
	set_name(0x14e9ce4, "AttachToWorldMatrixMoverResource::sBases");
	del_items(0x14e9cec, DELIT_SIMPLE, 84);
	apply_type(0x14e9cec, "RTTIAttr[3]");
	set_name(0x14e9cec, "AttachToWorldMatrixMoverResource::sAttrs");

	// AttachToWorldMatrixVerticalDampeningMover
	set_name(0x14e871c, "AttachToWorldMatrixVerticalDampeningMover");
	apply_type(0x14e871c, "RTTICompound");
	del_items(0x14e9dc4, DELIT_SIMPLE, 8);
	apply_type(0x14e9dc4, "RTTIBase[1]");
	set_name(0x14e9dc4, "AttachToWorldMatrixVerticalDampeningMover::sBases");

	// AttachToWorldMatrixVerticalDampeningMoverResource
	set_name(0x14e8770, "AttachToWorldMatrixVerticalDampeningMoverResource");
	apply_type(0x14e8770, "RTTICompound");
	del_items(0x14e9dcc, DELIT_SIMPLE, 8);
	apply_type(0x14e9dcc, "RTTIBase[1]");
	set_name(0x14e9dcc, "AttachToWorldMatrixVerticalDampeningMoverResource::sBases");
	del_items(0x14e9dd4, DELIT_SIMPLE, 84);
	apply_type(0x14e9dd4, "RTTIAttr[3]");
	set_name(0x14e9dd4, "AttachToWorldMatrixVerticalDampeningMoverResource::sAttrs");

	// AttachableExplosive
	set_name(0x1522588, "AttachableExplosive");
	apply_type(0x1522588, "RTTICompound");
	del_items(0x1523ff4, DELIT_SIMPLE, 8);
	apply_type(0x1523ff4, "RTTIBase[1]");
	set_name(0x1523ff4, "AttachableExplosive::sBases");
	del_items(0x1523ffc, DELIT_SIMPLE, 48);
	apply_type(0x1523ffc, "RTTIFunction[2]");
	set_name(0x1523ffc, "AttachableExplosive::sFunctions");

	// AttachableExplosiveResource
	set_name(0x15225ec, "AttachableExplosiveResource");
	apply_type(0x15225ec, "RTTICompound");
	del_items(0x1523f44, DELIT_SIMPLE, 8);
	apply_type(0x1523f44, "RTTIBase[1]");
	set_name(0x1523f44, "AttachableExplosiveResource::sBases");
	del_items(0x1523f4c, DELIT_SIMPLE, 168);
	apply_type(0x1523f4c, "RTTIAttr[6]");
	set_name(0x1523f4c, "AttachableExplosiveResource::sAttrs");

	// AttachableUseLocation
	set_name(0x1522640, "AttachableUseLocation");
	apply_type(0x1522640, "RTTICompound");
	del_items(0x152402c, DELIT_SIMPLE, 8);
	apply_type(0x152402c, "RTTIBase[1]");
	set_name(0x152402c, "AttachableUseLocation::sBases");
	del_items(0x1524034, DELIT_SIMPLE, 48);
	apply_type(0x1524034, "RTTIFunction[2]");
	set_name(0x1524034, "AttachableUseLocation::sFunctions");

	// AttachableUseLocationResource
	set_name(0x1524094, "AttachableUseLocationResource");
	apply_type(0x1524094, "RTTICompound");
	del_items(0x1524890, DELIT_SIMPLE, 8);
	apply_type(0x1524890, "RTTIBase[1]");
	set_name(0x1524890, "AttachableUseLocationResource::sBases");
	del_items(0x1524898, DELIT_SIMPLE, 252);
	apply_type(0x1524898, "RTTIAttr[9]");
	set_name(0x1524898, "AttachableUseLocationResource::sAttrs");

	// AttachedLightBinding
	set_name(0x150efb0, "AttachedLightBinding");
	apply_type(0x150efb0, "RTTICompound");
	del_items(0x151203c, DELIT_SIMPLE, 140);
	apply_type(0x151203c, "RTTIAttr[5]");
	set_name(0x151203c, "AttachedLightBinding::sAttrs");

	// AttachedLightsComponent
	set_name(0x150eef8, "AttachedLightsComponent");
	apply_type(0x150eef8, "RTTICompound");
	del_items(0x1512118, DELIT_SIMPLE, 8);
	apply_type(0x1512118, "RTTIBase[1]");
	set_name(0x1512118, "AttachedLightsComponent::sBases");

	// AttachedLightsComponentRep
	set_name(0x150ef4c, "AttachedLightsComponentRep");
	apply_type(0x150ef4c, "RTTICompound");
	del_items(0x1512124, DELIT_SIMPLE, 8);
	apply_type(0x1512124, "RTTIBase[1]");
	set_name(0x1512124, "AttachedLightsComponentRep::sBases");

	// AttachedLightsComponentResource
	set_name(0x150f004, "AttachedLightsComponentResource");
	apply_type(0x150f004, "RTTICompound");
	del_items(0x15120c8, DELIT_SIMPLE, 8);
	apply_type(0x15120c8, "RTTIBase[1]");
	set_name(0x15120c8, "AttachedLightsComponentResource::sBases");
	del_items(0x15120d0, DELIT_SIMPLE, 56);
	apply_type(0x15120d0, "RTTIAttr[2]");
	set_name(0x15120d0, "AttachedLightsComponentResource::sAttrs");
	del_items(0x1512108, DELIT_SIMPLE, 12);
	apply_type(0x1512108, "RTTIMessageHandler[1]");
	set_name(0x1512108, "AttachedLightsComponentResource::sMessageHandlers");

	// AttachmentPConstraint
	set_name(0x14e88d0, "AttachmentPConstraint");
	apply_type(0x14e88d0, "RTTICompound");
	del_items(0x14e9e70, DELIT_SIMPLE, 196);
	apply_type(0x14e9e70, "RTTIAttr[7]");
	set_name(0x14e9e70, "AttachmentPConstraint::sAttrs");

	// AttackEventInstance
	set_name(0x151964c, "AttackEventInstance");
	apply_type(0x151964c, "RTTICompound");
	del_items(0x151b850, DELIT_SIMPLE, 8);
	apply_type(0x151b850, "RTTIBase[1]");
	set_name(0x151b850, "AttackEventInstance::sBases");

	// AttackEventResource
	set_name(0x15195f8, "AttackEventResource");
	apply_type(0x15195f8, "RTTICompound");
	del_items(0x151b7d8, DELIT_SIMPLE, 8);
	apply_type(0x151b7d8, "RTTIBase[1]");
	set_name(0x151b7d8, "AttackEventResource::sBases");
	del_items(0x151b7e0, DELIT_SIMPLE, 112);
	apply_type(0x151b7e0, "RTTIAttr[4]");
	set_name(0x151b7e0, "AttackEventResource::sAttrs");

	// AttackerToVictimDamageModifier
	set_name(0x14ef634, "AttackerToVictimDamageModifier");
	apply_type(0x14ef634, "RTTICompound");
	del_items(0x14f29d0, DELIT_SIMPLE, 252);
	apply_type(0x14f29d0, "RTTIAttr[9]");
	set_name(0x14f29d0, "AttackerToVictimDamageModifier::sAttrs");

	// AttributeAnimatorInstance
	set_name(0x14bab40, "AttributeAnimatorInstance");
	apply_type(0x14bab40, "RTTICompound");
	del_items(0x14bc05c, DELIT_SIMPLE, 8);
	apply_type(0x14bc05c, "RTTIBase[1]");
	set_name(0x14bc05c, "AttributeAnimatorInstance::sBases");

	// AttributeAnimatorResourceBase
	set_name(0x14ba8f4, "AttributeAnimatorResourceBase");
	apply_type(0x14ba8f4, "RTTICompound");
	del_items(0x14bbe64, DELIT_SIMPLE, 8);
	apply_type(0x14bbe64, "RTTIBase[1]");
	set_name(0x14bbe64, "AttributeAnimatorResourceBase::sBases");
	del_items(0x14bbe6c, DELIT_SIMPLE, 84);
	apply_type(0x14bbe6c, "RTTIAttr[3]");
	set_name(0x14bbe6c, "AttributeAnimatorResourceBase::sAttrs");

	// AttributeBoolAnimatorResource
	set_name(0x14ba99c, "AttributeBoolAnimatorResource");
	apply_type(0x14ba99c, "RTTICompound");
	del_items(0x14bbf00, DELIT_SIMPLE, 8);
	apply_type(0x14bbf00, "RTTIBase[1]");
	set_name(0x14bbf00, "AttributeBoolAnimatorResource::sBases");
	del_items(0x14bbf08, DELIT_SIMPLE, 28);
	apply_type(0x14bbf08, "RTTIAttr[1]");
	set_name(0x14bbf08, "AttributeBoolAnimatorResource::sAttrs");

	// AttributeFVector3AnimatorResource
	set_name(0x14ba9f0, "AttributeFVector3AnimatorResource");
	apply_type(0x14ba9f0, "RTTICompound");
	del_items(0x14bbf24, DELIT_SIMPLE, 8);
	apply_type(0x14bbf24, "RTTIBase[1]");
	set_name(0x14bbf24, "AttributeFVector3AnimatorResource::sBases");
	del_items(0x14bbf2c, DELIT_SIMPLE, 56);
	apply_type(0x14bbf2c, "RTTIAttr[2]");
	set_name(0x14bbf2c, "AttributeFVector3AnimatorResource::sAttrs");

	// AttributeFVector4AnimatorResource
	set_name(0x14baa44, "AttributeFVector4AnimatorResource");
	apply_type(0x14baa44, "RTTICompound");
	del_items(0x14bbf64, DELIT_SIMPLE, 8);
	apply_type(0x14bbf64, "RTTIBase[1]");
	set_name(0x14bbf64, "AttributeFVector4AnimatorResource::sBases");
	del_items(0x14bbf6c, DELIT_SIMPLE, 56);
	apply_type(0x14bbf6c, "RTTIAttr[2]");
	set_name(0x14bbf6c, "AttributeFVector4AnimatorResource::sAttrs");

	// AttributeFloatAnimatorResource
	set_name(0x14ba948, "AttributeFloatAnimatorResource");
	apply_type(0x14ba948, "RTTICompound");
	del_items(0x14bbec0, DELIT_SIMPLE, 8);
	apply_type(0x14bbec0, "RTTIBase[1]");
	set_name(0x14bbec0, "AttributeFloatAnimatorResource::sBases");
	del_items(0x14bbec8, DELIT_SIMPLE, 56);
	apply_type(0x14bbec8, "RTTIAttr[2]");
	set_name(0x14bbec8, "AttributeFloatAnimatorResource::sAttrs");

	// AttributeProjMatrixAnimatorInstance
	set_name(0x14bab94, "AttributeProjMatrixAnimatorInstance");
	apply_type(0x14bab94, "RTTICompound");
	del_items(0x14bc064, DELIT_SIMPLE, 8);
	apply_type(0x14bc064, "RTTIBase[1]");
	set_name(0x14bc064, "AttributeProjMatrixAnimatorInstance::sBases");

	// AttributeProjMatrixAnimatorResource
	set_name(0x14baa98, "AttributeProjMatrixAnimatorResource");
	apply_type(0x14baa98, "RTTICompound");
	del_items(0x14bbfa4, DELIT_SIMPLE, 8);
	apply_type(0x14bbfa4, "RTTIBase[1]");
	set_name(0x14bbfa4, "AttributeProjMatrixAnimatorResource::sBases");
	del_items(0x14bbfac, DELIT_SIMPLE, 112);
	apply_type(0x14bbfac, "RTTIAttr[4]");
	set_name(0x14bbfac, "AttributeProjMatrixAnimatorResource::sAttrs");

	// AttributeRGBAColorAnimatorResource
	set_name(0x14baaec, "AttributeRGBAColorAnimatorResource");
	apply_type(0x14baaec, "RTTICompound");
	del_items(0x14bc01c, DELIT_SIMPLE, 8);
	apply_type(0x14bc01c, "RTTIBase[1]");
	set_name(0x14bc01c, "AttributeRGBAColorAnimatorResource::sBases");
	del_items(0x14bc024, DELIT_SIMPLE, 56);
	apply_type(0x14bc024, "RTTIAttr[2]");
	set_name(0x14bc024, "AttributeRGBAColorAnimatorResource::sAttrs");

	// AudioEventInstance
	set_name(0x15196f4, "AudioEventInstance");
	apply_type(0x15196f4, "RTTICompound");
	del_items(0x151b338, DELIT_SIMPLE, 8);
	apply_type(0x151b338, "RTTIBase[1]");
	set_name(0x151b338, "AudioEventInstance::sBases");

	// AudioEventResource
	set_name(0x15196a0, "AudioEventResource");
	apply_type(0x15196a0, "RTTICompound");
	del_items(0x151b250, DELIT_SIMPLE, 8);
	apply_type(0x151b250, "RTTIBase[1]");
	set_name(0x151b250, "AudioEventResource::sBases");
	del_items(0x151b258, DELIT_SIMPLE, 224);
	apply_type(0x151b258, "RTTIAttr[8]");
	set_name(0x151b258, "AudioEventResource::sAttrs");

	// AutoAimHull
	set_name(0x153a7bc, "AutoAimHull");
	apply_type(0x153a7bc, "RTTICompound");
	del_items(0x153af80, DELIT_SIMPLE, 8);
	apply_type(0x153af80, "RTTIBase[1]");
	set_name(0x153af80, "AutoAimHull::sBases");
	del_items(0x153af88, DELIT_SIMPLE, 308);
	apply_type(0x153af88, "RTTIAttr[11]");
	set_name(0x153af88, "AutoAimHull::sAttrs");

	// AutoSelectNodeEntry
	set_name(0x14e8e68, "AutoSelectNodeEntry");
	apply_type(0x14e8e68, "RTTICompound");
	del_items(0x14ea364, DELIT_SIMPLE, 84);
	apply_type(0x14ea364, "RTTIAttr[3]");
	set_name(0x14ea364, "AutoSelectNodeEntry::sAttrs");

	// AutoSelectSkeletonAnimationResource
	set_name(0x14d9788, "AutoSelectSkeletonAnimationResource");
	apply_type(0x14d9788, "RTTICompound");
	del_items(0x14dc0a4, DELIT_SIMPLE, 8);
	apply_type(0x14dc0a4, "RTTIBase[1]");
	set_name(0x14dc0a4, "AutoSelectSkeletonAnimationResource::sBases");
	del_items(0x14dc0ac, DELIT_SIMPLE, 224);
	apply_type(0x14dc0ac, "RTTIAttr[8]");
	set_name(0x14dc0ac, "AutoSelectSkeletonAnimationResource::sAttrs");

	// AxisFunctionMapping
	set_name(0x14eabd4, "AxisFunctionMapping");
	apply_type(0x14eabd4, "RTTICompound");
	del_items(0x14ed8b4, DELIT_SIMPLE, 56);
	apply_type(0x14ed8b4, "RTTIAttr[2]");
	set_name(0x14ed8b4, "AxisFunctionMapping::sAttrs");

	// BadgeIcon
	set_name(0x1531310, "BadgeIcon");
	apply_type(0x1531310, "RTTICompound");
	del_items(0x15337ec, DELIT_SIMPLE, 56);
	apply_type(0x15337ec, "RTTIAttr[2]");
	set_name(0x15337ec, "BadgeIcon::sAttrs");

	// BaseConcreteAsset
	set_name(0x14bc1b4, "BaseConcreteAsset");
	apply_type(0x14bc1b4, "RTTICompound");
	del_items(0x14bc3c0, DELIT_SIMPLE, 8);
	apply_type(0x14bc3c0, "RTTIBase[1]");
	set_name(0x14bc3c0, "BaseConcreteAsset::sBases");

	// BaseHeldItem
	set_name(0x14ea4c8, "BaseHeldItem");
	apply_type(0x14ea4c8, "RTTICompound");
	del_items(0x14ea698, DELIT_SIMPLE, 8);
	apply_type(0x14ea698, "RTTIBase[1]");
	set_name(0x14ea698, "BaseHeldItem::sBases");
	del_items(0x14ea6a0, DELIT_SIMPLE, 72);
	apply_type(0x14ea6a0, "RTTIFunction[3]");
	set_name(0x14ea6a0, "BaseHeldItem::sFunctions");

	// BaseHeldItemController
	set_name(0x154aad8, "BaseHeldItemController");
	apply_type(0x154aad8, "RTTICompound");
	del_items(0x154ad4c, DELIT_SIMPLE, 8);
	apply_type(0x154ad4c, "RTTIBase[1]");
	set_name(0x154ad4c, "BaseHeldItemController::sBases");

	// BaseHeldItemRep
	set_name(0x14ea534, "BaseHeldItemRep");
	apply_type(0x14ea534, "RTTICompound");
	del_items(0x14ea6e8, DELIT_SIMPLE, 8);
	apply_type(0x14ea6e8, "RTTIBase[1]");
	set_name(0x14ea6e8, "BaseHeldItemRep::sBases");

	// BaseHeldItemResource
	set_name(0x14ea588, "BaseHeldItemResource");
	apply_type(0x14ea588, "RTTICompound");
	del_items(0x14ea5e8, DELIT_SIMPLE, 8);
	apply_type(0x14ea5e8, "RTTIBase[1]");
	set_name(0x14ea5e8, "BaseHeldItemResource::sBases");
	del_items(0x14ea5f0, DELIT_SIMPLE, 168);
	apply_type(0x14ea5f0, "RTTIAttr[6]");
	set_name(0x14ea5f0, "BaseHeldItemResource::sAttrs");

	// BaseResource
	set_name(0x14bca2c, "BaseResource");
	apply_type(0x14bca2c, "RTTICompound");
	del_items(0x14bcb90, DELIT_SIMPLE, 8);
	apply_type(0x14bcb90, "RTTIBase[1]");
	set_name(0x14bcb90, "BaseResource::sBases");

	// BaselineTimes
	set_name(0x152b114, "BaselineTimes");
	apply_type(0x152b114, "RTTICompound");
	del_items(0x152bd1c, DELIT_SIMPLE, 8);
	apply_type(0x152bd1c, "RTTIBase[1]");
	set_name(0x152bd1c, "BaselineTimes::sBases");
	del_items(0x152bd24, DELIT_SIMPLE, 112);
	apply_type(0x152bd24, "RTTIAttr[4]");
	set_name(0x152bd24, "BaselineTimes::sAttrs");

	// BeyondCamera
	set_name(0x154afa0, "BeyondCamera");
	apply_type(0x154afa0, "RTTICompound");
	del_items(0x154b2cc, DELIT_SIMPLE, 8);
	apply_type(0x154b2cc, "RTTIBase[1]");
	set_name(0x154b2cc, "BeyondCamera::sBases");

	// BeyondCameraRep
	set_name(0x154b058, "BeyondCameraRep");
	apply_type(0x154b058, "RTTICompound");
	del_items(0x154b2d4, DELIT_SIMPLE, 8);
	apply_type(0x154b2d4, "RTTIBase[1]");
	set_name(0x154b2d4, "BeyondCameraRep::sBases");

	// BeyondCameraResource
	set_name(0x154b004, "BeyondCameraResource");
	apply_type(0x154b004, "RTTICompound");
	del_items(0x154b2c4, DELIT_SIMPLE, 8);
	apply_type(0x154b2c4, "RTTIBase[1]");
	set_name(0x154b2c4, "BeyondCameraResource::sBases");

	// BeyondInteractionModeQTE
	set_name(0x154b6dc, "BeyondInteractionModeQTE");
	apply_type(0x154b6dc, "RTTICompound");
	del_items(0x154c110, DELIT_SIMPLE, 8);
	apply_type(0x154c110, "RTTIBase[1]");
	set_name(0x154c110, "BeyondInteractionModeQTE::sBases");

	// BeyondInteractionModeQTEJoystickController
	set_name(0x154b784, "BeyondInteractionModeQTEJoystickController");
	apply_type(0x154b784, "RTTICompound");
	del_items(0x154c0f4, DELIT_SIMPLE, 8);
	apply_type(0x154c0f4, "RTTIBase[1]");
	set_name(0x154c0f4, "BeyondInteractionModeQTEJoystickController::sBases");

	// BeyondInteractionModeQTEResource
	set_name(0x154b730, "BeyondInteractionModeQTEResource");
	apply_type(0x154b730, "RTTICompound");
	del_items(0x154c108, DELIT_SIMPLE, 8);
	apply_type(0x154c108, "RTTIBase[1]");
	set_name(0x154c108, "BeyondInteractionModeQTEResource::sBases");

	// BeyondInteractionModeShotgun
	set_name(0x154b7d8, "BeyondInteractionModeShotgun");
	apply_type(0x154b7d8, "RTTICompound");
	del_items(0x154c13c, DELIT_SIMPLE, 8);
	apply_type(0x154c13c, "RTTIBase[1]");
	set_name(0x154c13c, "BeyondInteractionModeShotgun::sBases");

	// BeyondInteractionModeShotgunJoystickController
	set_name(0x154b880, "BeyondInteractionModeShotgunJoystickController");
	apply_type(0x154b880, "RTTICompound");
	del_items(0x154c120, DELIT_SIMPLE, 8);
	apply_type(0x154c120, "RTTIBase[1]");
	set_name(0x154c120, "BeyondInteractionModeShotgunJoystickController::sBases");

	// BeyondInteractionModeShotgunRep
	set_name(0x154b8d4, "BeyondInteractionModeShotgunRep");
	apply_type(0x154b8d4, "RTTICompound");
	del_items(0x154c118, DELIT_SIMPLE, 8);
	apply_type(0x154c118, "RTTIBase[1]");
	set_name(0x154c118, "BeyondInteractionModeShotgunRep::sBases");

	// BeyondInteractionModeShotgunResource
	set_name(0x154b82c, "BeyondInteractionModeShotgunResource");
	apply_type(0x154b82c, "RTTICompound");
	del_items(0x154c134, DELIT_SIMPLE, 8);
	apply_type(0x154c134, "RTTIBase[1]");
	set_name(0x154c134, "BeyondInteractionModeShotgunResource::sBases");

	// BeyondInteractiveEntity
	set_name(0x154e9b8, "BeyondInteractiveEntity");
	apply_type(0x154e9b8, "RTTICompound");
	del_items(0x154f078, DELIT_SIMPLE, 8);
	apply_type(0x154f078, "RTTIBase[1]");
	set_name(0x154f078, "BeyondInteractiveEntity::sBases");
	del_items(0x154f080, DELIT_SIMPLE, 72);
	apply_type(0x154f080, "RTTIFunction[3]");
	set_name(0x154f080, "BeyondInteractiveEntity::sFunctions");
	del_items(0x154f0c8, DELIT_SIMPLE, 12);
	apply_type(0x154f0c8, "RTTIMessageHandler[1]");
	set_name(0x154f0c8, "BeyondInteractiveEntity::sMessageHandlers");

	// BeyondInteractiveEntityController
	set_name(0x154eac4, "BeyondInteractiveEntityController");
	apply_type(0x154eac4, "RTTICompound");
	del_items(0x154f904, DELIT_SIMPLE, 8);
	apply_type(0x154f904, "RTTIBase[1]");
	set_name(0x154f904, "BeyondInteractiveEntityController::sBases");

	// BeyondInteractiveEntityResource
	set_name(0x154ea70, "BeyondInteractiveEntityResource");
	apply_type(0x154ea70, "RTTICompound");
	del_items(0x154ef0c, DELIT_SIMPLE, 8);
	apply_type(0x154ef0c, "RTTIBase[1]");
	set_name(0x154ef0c, "BeyondInteractiveEntityResource::sBases");
	del_items(0x154ef14, DELIT_SIMPLE, 336);
	apply_type(0x154ef14, "RTTIAttr[12]");
	set_name(0x154ef14, "BeyondInteractiveEntityResource::sAttrs");
	del_items(0x154f064, DELIT_SIMPLE, 12);
	apply_type(0x154f064, "RTTIMessageHandler[1]");
	set_name(0x154f064, "BeyondInteractiveEntityResource::sMessageHandlers");

	// BeyondInteractiveLookatEntity
	set_name(0x154eb28, "BeyondInteractiveLookatEntity");
	apply_type(0x154eb28, "RTTICompound");
	del_items(0x154f708, DELIT_SIMPLE, 8);
	apply_type(0x154f708, "RTTIBase[1]");
	set_name(0x154f708, "BeyondInteractiveLookatEntity::sBases");
	del_items(0x154f710, DELIT_SIMPLE, 168);
	apply_type(0x154f710, "RTTIAttr[6]");
	set_name(0x154f710, "BeyondInteractiveLookatEntity::sAttrs");
	del_items(0x154f7b8, DELIT_SIMPLE, 120);
	apply_type(0x154f7b8, "RTTIFunction[5]");
	set_name(0x154f7b8, "BeyondInteractiveLookatEntity::sFunctions");

	// BeyondInteractiveLookatEntityController
	set_name(0x154ebd0, "BeyondInteractiveLookatEntityController");
	apply_type(0x154ebd0, "RTTICompound");
	del_items(0x154f940, DELIT_SIMPLE, 8);
	apply_type(0x154f940, "RTTIBase[1]");
	set_name(0x154f940, "BeyondInteractiveLookatEntityController::sBases");

	// BeyondInteractiveLookatEntityResource
	set_name(0x154eb7c, "BeyondInteractiveLookatEntityResource");
	apply_type(0x154eb7c, "RTTICompound");
	del_items(0x154f690, DELIT_SIMPLE, 8);
	apply_type(0x154f690, "RTTIBase[1]");
	set_name(0x154f690, "BeyondInteractiveLookatEntityResource::sBases");
	del_items(0x154f698, DELIT_SIMPLE, 112);
	apply_type(0x154f698, "RTTIAttr[4]");
	set_name(0x154f698, "BeyondInteractiveLookatEntityResource::sAttrs");

	// BeyondUseLocationInfo
	set_name(0x154ea1c, "BeyondUseLocationInfo");
	apply_type(0x154ea1c, "RTTICompound");
	del_items(0x154ede8, DELIT_SIMPLE, 280);
	apply_type(0x154ede8, "RTTIAttr[10]");
	set_name(0x154ede8, "BeyondUseLocationInfo::sAttrs");

	// BindEventInstance
	set_name(0x1519844, "BindEventInstance");
	apply_type(0x1519844, "RTTICompound");
	del_items(0x151b8fc, DELIT_SIMPLE, 8);
	apply_type(0x151b8fc, "RTTIBase[1]");
	set_name(0x151b8fc, "BindEventInstance::sBases");

	// BindEventResource
	set_name(0x15197f0, "BindEventResource");
	apply_type(0x15197f0, "RTTICompound");
	del_items(0x151b8bc, DELIT_SIMPLE, 8);
	apply_type(0x151b8bc, "RTTIBase[1]");
	set_name(0x151b8bc, "BindEventResource::sBases");
	del_items(0x151b8c4, DELIT_SIMPLE, 56);
	apply_type(0x151b8c4, "RTTIAttr[2]");
	set_name(0x151b8c4, "BindEventResource::sAttrs");

	// BitstreamData
	set_name(0x14d73a0, "BitstreamData");
	apply_type(0x14d73a0, "RTTICompound");
	del_items(0x14d8dd4, DELIT_SIMPLE, 28);
	apply_type(0x14d8dd4, "RTTIAttr[1]");
	set_name(0x14d8dd4, "BitstreamData::sAttrs");

	// BlendExpression
	set_name(0x14ba358, "BlendExpression");
	apply_type(0x14ba358, "RTTICompound");
	del_items(0x14bb054, DELIT_SIMPLE, 8);
	apply_type(0x14bb054, "RTTIBase[1]");
	set_name(0x14bb054, "BlendExpression::sBases");
	del_items(0x14bb05c, DELIT_SIMPLE, 84);
	apply_type(0x14bb05c, "RTTIAttr[3]");
	set_name(0x14bb05c, "BlendExpression::sAttrs");

	// BlendExpressionByteCode
	set_name(0x14ba2f4, "BlendExpressionByteCode");
	apply_type(0x14ba2f4, "RTTICompound");
	del_items(0x14bafe4, DELIT_SIMPLE, 112);
	apply_type(0x14bafe4, "RTTIAttr[4]");
	set_name(0x14bafe4, "BlendExpressionByteCode::sAttrs");

	// BlendInfo
	set_name(0x14ba3ac, "BlendInfo");
	apply_type(0x14ba3ac, "RTTICompound");
	del_items(0x14bb0b0, DELIT_SIMPLE, 140);
	apply_type(0x14bb0b0, "RTTIAttr[5]");
	set_name(0x14bb0b0, "BlendInfo::sAttrs");

	// BlendSkeletonAnimationResource
	set_name(0x14d966c, "BlendSkeletonAnimationResource");
	apply_type(0x14d966c, "RTTICompound");
	del_items(0x14dbf0c, DELIT_SIMPLE, 8);
	apply_type(0x14dbf0c, "RTTIBase[1]");
	set_name(0x14dbf0c, "BlendSkeletonAnimationResource::sBases");
	del_items(0x14dbf14, DELIT_SIMPLE, 140);
	apply_type(0x14dbf14, "RTTIAttr[5]");
	set_name(0x14dbf14, "BlendSkeletonAnimationResource::sAttrs");

	// BlendTargetDeformation
	set_name(0x14da004, "BlendTargetDeformation");
	apply_type(0x14da004, "RTTICompound");
	del_items(0x14dc53c, DELIT_SIMPLE, 56);
	apply_type(0x14dc53c, "RTTIAttr[2]");
	set_name(0x14dc53c, "BlendTargetDeformation::sAttrs");

	// BlendedMeshEntry
	set_name(0x14bf0f8, "BlendedMeshEntry");
	apply_type(0x14bf0f8, "RTTICompound");
	del_items(0x14bf918, DELIT_SIMPLE, 84);
	apply_type(0x14bf918, "RTTIAttr[3]");
	set_name(0x14bf918, "BlendedMeshEntry::sAttrs");

	// BlendedMeshEventInstance
	set_name(0x151c9f8, "BlendedMeshEventInstance");
	apply_type(0x151c9f8, "RTTICompound");
	del_items(0x151e93c, DELIT_SIMPLE, 8);
	apply_type(0x151e93c, "RTTIBase[1]");
	set_name(0x151e93c, "BlendedMeshEventInstance::sBases");

	// BlendedMeshEventResource
	set_name(0x151c9a4, "BlendedMeshEventResource");
	apply_type(0x151c9a4, "RTTICompound");
	del_items(0x151e8a8, DELIT_SIMPLE, 8);
	apply_type(0x151e8a8, "RTTIBase[1]");
	set_name(0x151e8a8, "BlendedMeshEventResource::sBases");
	del_items(0x151e8b0, DELIT_SIMPLE, 140);
	apply_type(0x151e8b0, "RTTIAttr[5]");
	set_name(0x151e8b0, "BlendedMeshEventResource::sAttrs");

	// BlendedMeshInstance
	set_name(0x14bf094, "BlendedMeshInstance");
	apply_type(0x14bf094, "RTTICompound");
	del_items(0x14bf894, DELIT_SIMPLE, 8);
	apply_type(0x14bf894, "RTTIBase[1]");
	set_name(0x14bf894, "BlendedMeshInstance::sBases");
	del_items(0x14bf89c, DELIT_SIMPLE, 112);
	apply_type(0x14bf89c, "RTTIAttr[4]");
	set_name(0x14bf89c, "BlendedMeshInstance::sAttrs");
	del_items(0x14bf90c, DELIT_SIMPLE, 12);
	apply_type(0x14bf90c, "RTTIMessageHandler[1]");
	set_name(0x14bf90c, "BlendedMeshInstance::sMessageHandlers");

	// BlendedMeshResource
	set_name(0x14bf040, "BlendedMeshResource");
	apply_type(0x14bf040, "RTTICompound");
	del_items(0x14bf7d8, DELIT_SIMPLE, 8);
	apply_type(0x14bf7d8, "RTTIBase[1]");
	set_name(0x14bf7d8, "BlendedMeshResource::sBases");
	del_items(0x14bf7e0, DELIT_SIMPLE, 168);
	apply_type(0x14bf7e0, "RTTIAttr[6]");
	set_name(0x14bf7e0, "BlendedMeshResource::sAttrs");
	del_items(0x14bf888, DELIT_SIMPLE, 12);
	apply_type(0x14bf888, "RTTIMessageHandler[1]");
	set_name(0x14bf888, "BlendedMeshResource::sMessageHandlers");

	// BloodPuddleSettings
	set_name(0x14fb2d4, "BloodPuddleSettings");
	apply_type(0x14fb2d4, "RTTICompound");
	del_items(0x14fc070, DELIT_SIMPLE, 8);
	apply_type(0x14fc070, "RTTIBase[1]");
	set_name(0x14fc070, "BloodPuddleSettings::sBases");
	del_items(0x14fc078, DELIT_SIMPLE, 140);
	apply_type(0x14fc078, "RTTIAttr[5]");
	set_name(0x14fc078, "BloodPuddleSettings::sAttrs");

	// BloodSplatterProperties
	set_name(0x1533fb0, "BloodSplatterProperties");
	apply_type(0x1533fb0, "RTTICompound");
	del_items(0x1534468, DELIT_SIMPLE, 84);
	apply_type(0x1534468, "RTTIAttr[3]");
	set_name(0x1534468, "BloodSplatterProperties::sAttrs");

	// BloomSettingsResource
	set_name(0x14cba04, "BloomSettingsResource");
	apply_type(0x14cba04, "RTTICompound");
	del_items(0x14cc978, DELIT_SIMPLE, 8);
	apply_type(0x14cc978, "RTTIBase[1]");
	set_name(0x14cc978, "BloomSettingsResource::sBases");
	del_items(0x14cc980, DELIT_SIMPLE, 168);
	apply_type(0x14cc980, "RTTIAttr[6]");
	set_name(0x14cc980, "BloomSettingsResource::sAttrs");

	// BlurSettingsResource
	set_name(0x14cba6c, "BlurSettingsResource");
	apply_type(0x14cba6c, "RTTICompound");
	del_items(0x14ccb50, DELIT_SIMPLE, 8);
	apply_type(0x14ccb50, "RTTIBase[1]");
	set_name(0x14ccb50, "BlurSettingsResource::sBases");
	del_items(0x14ccb58, DELIT_SIMPLE, 280);
	apply_type(0x14ccb58, "RTTIAttr[10]");
	set_name(0x14ccb58, "BlurSettingsResource::sAttrs");

	// BoneAttachedParticleSystem
	set_name(0x14e7744, "BoneAttachedParticleSystem");
	apply_type(0x14e7744, "RTTICompound");
	del_items(0x14e934c, DELIT_SIMPLE, 8);
	apply_type(0x14e934c, "RTTIBase[1]");
	set_name(0x14e934c, "BoneAttachedParticleSystem::sBases");
	del_items(0x14e9354, DELIT_SIMPLE, 24);
	apply_type(0x14e9354, "RTTIMessageHandler[2]");
	set_name(0x14e9354, "BoneAttachedParticleSystem::sMessageHandlers");

	// BoneAttachedParticleSystemLink
	set_name(0x14e77a8, "BoneAttachedParticleSystemLink");
	apply_type(0x14e77a8, "RTTICompound");
	del_items(0x14e936c, DELIT_SIMPLE, 140);
	apply_type(0x14e936c, "RTTIAttr[5]");
	set_name(0x14e936c, "BoneAttachedParticleSystemLink::sAttrs");

	// BoneAttachedParticleSystemResource
	set_name(0x14e780c, "BoneAttachedParticleSystemResource");
	apply_type(0x14e780c, "RTTICompound");
	del_items(0x14e93f8, DELIT_SIMPLE, 8);
	apply_type(0x14e93f8, "RTTIBase[1]");
	set_name(0x14e93f8, "BoneAttachedParticleSystemResource::sBases");
	del_items(0x14e9400, DELIT_SIMPLE, 84);
	apply_type(0x14e9400, "RTTIAttr[3]");
	set_name(0x14e9400, "BoneAttachedParticleSystemResource::sAttrs");

	// BoneLocatorInstance
	set_name(0x151ffd0, "BoneLocatorInstance");
	apply_type(0x151ffd0, "RTTICompound");
	del_items(0x1521634, DELIT_SIMPLE, 8);
	apply_type(0x1521634, "RTTIBase[1]");
	set_name(0x1521634, "BoneLocatorInstance::sBases");

	// BoneLocatorResource
	set_name(0x151ff7c, "BoneLocatorResource");
	apply_type(0x151ff7c, "RTTICompound");
	del_items(0x15215bc, DELIT_SIMPLE, 8);
	apply_type(0x15215bc, "RTTIBase[1]");
	set_name(0x15215bc, "BoneLocatorResource::sBases");
	del_items(0x15215c4, DELIT_SIMPLE, 112);
	apply_type(0x15215c4, "RTTIAttr[4]");
	set_name(0x15215c4, "BoneLocatorResource::sAttrs");

	// BoneRemapEntry
	set_name(0x14da358, "BoneRemapEntry");
	apply_type(0x14da358, "RTTICompound");
	del_items(0x14daf14, DELIT_SIMPLE, 56);
	apply_type(0x14daf14, "RTTIAttr[2]");
	set_name(0x14daf14, "BoneRemapEntry::sAttrs");

	// BoneSetFlags
	set_name(0x14da3ac, "BoneSetFlags");
	apply_type(0x14da3ac, "RTTICompound");
	del_items(0x14dab34, DELIT_SIMPLE, 28);
	apply_type(0x14dab34, "RTTIAttr[1]");
	set_name(0x14dab34, "BoneSetFlags::sAttrs");

	// BoneSetFlagsList
	set_name(0x14da764, "BoneSetFlagsList");
	apply_type(0x14da764, "RTTICompound");
	del_items(0x14db604, DELIT_SIMPLE, 28);
	apply_type(0x14db604, "RTTIAttr[1]");
	set_name(0x14db604, "BoneSetFlagsList::sAttrs");

	// BotNames
	set_name(0x153a810, "BotNames");
	apply_type(0x153a810, "RTTICompound");
	del_items(0x153b0bc, DELIT_SIMPLE, 8);
	apply_type(0x153b0bc, "RTTIBase[1]");
	set_name(0x153b0bc, "BotNames::sBases");
	del_items(0x153b0c4, DELIT_SIMPLE, 84);
	apply_type(0x153b0c4, "RTTIAttr[3]");
	set_name(0x153b0c4, "BotNames::sAttrs");

	// BoundingBox2
	set_name(0x14ada18, "BoundingBox2");
	apply_type(0x14ada18, "RTTICompound");
	del_items(0x14adfb4, DELIT_SIMPLE, 56);
	apply_type(0x14adfb4, "RTTIAttr[2]");
	set_name(0x14adfb4, "BoundingBox2::sAttrs");

	// BoundingBox3
	set_name(0x14ada7c, "BoundingBox3");
	apply_type(0x14ada7c, "RTTICompound");
	del_items(0x14ade78, DELIT_SIMPLE, 56);
	apply_type(0x14ade78, "RTTIAttr[2]");
	set_name(0x14ade78, "BoundingBox3::sAttrs");

	// BoundingSphere
	set_name(0x14adae0, "BoundingSphere");
	apply_type(0x14adae0, "RTTICompound");
	del_items(0x14adeb0, DELIT_SIMPLE, 56);
	apply_type(0x14adeb0, "RTTIAttr[2]");
	set_name(0x14adeb0, "BoundingSphere::sAttrs");

	// BreakSuspensionAction
	set_name(0x14f94bc, "BreakSuspensionAction");
	apply_type(0x14f94bc, "RTTICompound");
	del_items(0x14fe0f4, DELIT_SIMPLE, 8);
	apply_type(0x14fe0f4, "RTTIBase[1]");
	set_name(0x14fe0f4, "BreakSuspensionAction::sBases");
	del_items(0x14fe0fc, DELIT_SIMPLE, 56);
	apply_type(0x14fe0fc, "RTTIAttr[2]");
	set_name(0x14fe0fc, "BreakSuspensionAction::sAttrs");

	// BreakWheelAction
	set_name(0x14f9414, "BreakWheelAction");
	apply_type(0x14f9414, "RTTICompound");
	del_items(0x14fe058, DELIT_SIMPLE, 8);
	apply_type(0x14fe058, "RTTIBase[1]");
	set_name(0x14fe058, "BreakWheelAction::sBases");
	del_items(0x14fe060, DELIT_SIMPLE, 84);
	apply_type(0x14fe060, "RTTIAttr[3]");
	set_name(0x14fe060, "BreakWheelAction::sAttrs");

	// BrutalMeleeDeathSoundOverride
	set_name(0x150f2e4, "BrutalMeleeDeathSoundOverride");
	apply_type(0x150f2e4, "RTTICompound");
	del_items(0x15104e0, DELIT_SIMPLE, 84);
	apply_type(0x15104e0, "RTTIAttr[3]");
	set_name(0x15104e0, "BrutalMeleeDeathSoundOverride::sAttrs");

	// BrutalMeleeRegionSettings
	set_name(0x150f3ac, "BrutalMeleeRegionSettings");
	apply_type(0x150f3ac, "RTTICompound");
	del_items(0x1510588, DELIT_SIMPLE, 56);
	apply_type(0x1510588, "RTTIAttr[2]");
	set_name(0x1510588, "BrutalMeleeRegionSettings::sAttrs");

	// Buggy
	set_name(0x1508960, "Buggy");
	apply_type(0x1508960, "RTTICompound");
	del_items(0x150aa18, DELIT_SIMPLE, 8);
	apply_type(0x150aa18, "RTTIBase[1]");
	set_name(0x150aa18, "Buggy::sBases");

	// BuggyJoystickController
	set_name(0x150ba24, "BuggyJoystickController");
	apply_type(0x150ba24, "RTTICompound");
	del_items(0x150d6d8, DELIT_SIMPLE, 8);
	apply_type(0x150d6d8, "RTTIBase[1]");
	set_name(0x150d6d8, "BuggyJoystickController::sBases");

	// BuggyRep
	set_name(0x150bb20, "BuggyRep");
	apply_type(0x150bb20, "RTTICompound");
	del_items(0x150d6f4, DELIT_SIMPLE, 8);
	apply_type(0x150d6f4, "RTTIBase[1]");
	set_name(0x150d6f4, "BuggyRep::sBases");

	// BuggyResource
	set_name(0x150b230, "BuggyResource");
	apply_type(0x150b230, "RTTICompound");
	del_items(0x150c70c, DELIT_SIMPLE, 8);
	apply_type(0x150c70c, "RTTIBase[1]");
	set_name(0x150c70c, "BuggyResource::sBases");
	del_items(0x150c714, DELIT_SIMPLE, 56);
	apply_type(0x150c714, "RTTIAttr[2]");
	set_name(0x150c714, "BuggyResource::sAttrs");

	// BulletEjectorResource
	set_name(0x15240e8, "BulletEjectorResource");
	apply_type(0x15240e8, "RTTICompound");
	del_items(0x1524b44, DELIT_SIMPLE, 8);
	apply_type(0x1524b44, "RTTIBase[1]");
	set_name(0x1524b44, "BulletEjectorResource::sBases");
	del_items(0x1524b4c, DELIT_SIMPLE, 1008);
	apply_type(0x1524b4c, "RTTIAttr[36]");
	set_name(0x1524b4c, "BulletEjectorResource::sAttrs");

	// BulletSystem
	set_name(0x152413c, "BulletSystem");
	apply_type(0x152413c, "RTTICompound");
	del_items(0x1525158, DELIT_SIMPLE, 8);
	apply_type(0x1525158, "RTTIBase[1]");
	set_name(0x1525158, "BulletSystem::sBases");
	del_items(0x1525160, DELIT_SIMPLE, 12);
	apply_type(0x1525160, "RTTIMessageHandler[1]");
	set_name(0x1525160, "BulletSystem::sMessageHandlers");

	// BulletSystemRep
	set_name(0x1524190, "BulletSystemRep");
	apply_type(0x1524190, "RTTICompound");
	del_items(0x152516c, DELIT_SIMPLE, 8);
	apply_type(0x152516c, "RTTIBase[1]");
	set_name(0x152516c, "BulletSystemRep::sBases");
	del_items(0x1525174, DELIT_SIMPLE, 12);
	apply_type(0x1525174, "RTTIMessageHandler[1]");
	set_name(0x1525174, "BulletSystemRep::sMessageHandlers");

	// BulletSystemResource
	set_name(0x15241e4, "BulletSystemResource");
	apply_type(0x15241e4, "RTTICompound");
	del_items(0x1524f90, DELIT_SIMPLE, 8);
	apply_type(0x1524f90, "RTTIBase[1]");
	set_name(0x1524f90, "BulletSystemResource::sBases");
	del_items(0x1524f98, DELIT_SIMPLE, 448);
	apply_type(0x1524f98, "RTTIAttr[16]");
	set_name(0x1524f98, "BulletSystemResource::sAttrs");

	// ButtonFunctionMapping
	set_name(0x14eab70, "ButtonFunctionMapping");
	apply_type(0x14eab70, "RTTICompound");
	del_items(0x14ed87c, DELIT_SIMPLE, 56);
	apply_type(0x14ed87c, "RTTIAttr[2]");
	set_name(0x14ed87c, "ButtonFunctionMapping::sAttrs");

	// ButtonIcon
	set_name(0x1530964, "ButtonIcon");
	apply_type(0x1530964, "RTTICompound");
	del_items(0x1531c3c, DELIT_SIMPLE, 112);
	apply_type(0x1531c3c, "RTTIAttr[4]");
	set_name(0x1531c3c, "ButtonIcon::sAttrs");

	// ButtonIconCollection
	set_name(0x15309c8, "ButtonIconCollection");
	apply_type(0x15309c8, "RTTICompound");
	del_items(0x1531cac, DELIT_SIMPLE, 8);
	apply_type(0x1531cac, "RTTIBase[1]");
	set_name(0x1531cac, "ButtonIconCollection::sBases");
	del_items(0x1531cb4, DELIT_SIMPLE, 84);
	apply_type(0x1531cb4, "RTTIAttr[3]");
	set_name(0x1531cb4, "ButtonIconCollection::sAttrs");
	del_items(0x1531d08, DELIT_SIMPLE, 12);
	apply_type(0x1531d08, "RTTIMessageHandler[1]");
	set_name(0x1531d08, "ButtonIconCollection::sMessageHandlers");

	// ButtonPressureDefinition
	set_name(0x14ea9e0, "ButtonPressureDefinition");
	apply_type(0x14ea9e0, "RTTICompound");
	del_items(0x14ed378, DELIT_SIMPLE, 56);
	apply_type(0x14ed378, "RTTIAttr[2]");
	set_name(0x14ed378, "ButtonPressureDefinition::sAttrs");

	// ButtonTag
	set_name(0x14c03d0, "ButtonTag");
	apply_type(0x14c03d0, "RTTICompound");
	del_items(0x14c29f0, DELIT_SIMPLE, 8);
	apply_type(0x14c29f0, "RTTIBase[1]");
	set_name(0x14c29f0, "ButtonTag::sBases");

	// ButtonWidget
	set_name(0x14c0c78, "ButtonWidget");
	apply_type(0x14c0c78, "RTTICompound");
	del_items(0x14c2f04, DELIT_SIMPLE, 8);
	apply_type(0x14c2f04, "RTTIBase[1]");
	set_name(0x14c2f04, "ButtonWidget::sBases");

	// BuzzWireInteraction
	set_name(0x154ba24, "BuzzWireInteraction");
	apply_type(0x154ba24, "RTTICompound");
	del_items(0x154c1b4, DELIT_SIMPLE, 8);
	apply_type(0x154c1b4, "RTTIBase[1]");
	set_name(0x154c1b4, "BuzzWireInteraction::sBases");

	// BuzzWireInteractionResource
	set_name(0x154ba78, "BuzzWireInteractionResource");
	apply_type(0x154ba78, "RTTICompound");
	del_items(0x154c16c, DELIT_SIMPLE, 8);
	apply_type(0x154c16c, "RTTIBase[1]");
	set_name(0x154c16c, "BuzzWireInteractionResource::sBases");
	del_items(0x154c174, DELIT_SIMPLE, 56);
	apply_type(0x154c174, "RTTIAttr[2]");
	set_name(0x154c174, "BuzzWireInteractionResource::sAttrs");

	// BuzzWireInteractionUser
	set_name(0x154b9d0, "BuzzWireInteractionUser");
	apply_type(0x154b9d0, "RTTICompound");
	del_items(0x154c1ac, DELIT_SIMPLE, 8);
	apply_type(0x154c1ac, "RTTIBase[1]");
	set_name(0x154c1ac, "BuzzWireInteractionUser::sBases");

	// C4
	set_name(0x1524238, "C4");
	apply_type(0x1524238, "RTTICompound");
	del_items(0x1525274, DELIT_SIMPLE, 8);
	apply_type(0x1525274, "RTTIBase[1]");
	set_name(0x1525274, "C4::sBases");

	// C4Rep
	set_name(0x152428c, "C4Rep");
	apply_type(0x152428c, "RTTICompound");
	del_items(0x15254b0, DELIT_SIMPLE, 8);
	apply_type(0x15254b0, "RTTIBase[1]");
	set_name(0x15254b0, "C4Rep::sBases");

	// C4Resource
	set_name(0x15242e0, "C4Resource");
	apply_type(0x15242e0, "RTTICompound");
	del_items(0x152518c, DELIT_SIMPLE, 8);
	apply_type(0x152518c, "RTTIBase[1]");
	set_name(0x152518c, "C4Resource::sBases");
	del_items(0x1525194, DELIT_SIMPLE, 224);
	apply_type(0x1525194, "RTTIAttr[8]");
	set_name(0x1525194, "C4Resource::sAttrs");

	// CaHObjective
	set_name(0x1528b8c, "CaHObjective");
	apply_type(0x1528b8c, "RTTICompound");
	del_items(0x152a490, DELIT_SIMPLE, 28);
	apply_type(0x152a490, "RTTIAttr[1]");
	set_name(0x152a490, "CaHObjective::sAttrs");

	// CallScriptEventInstance
	set_name(0x15198ec, "CallScriptEventInstance");
	apply_type(0x15198ec, "RTTICompound");
	del_items(0x151b960, DELIT_SIMPLE, 8);
	apply_type(0x151b960, "RTTIBase[1]");
	set_name(0x151b960, "CallScriptEventInstance::sBases");

	// CallScriptEventResource
	set_name(0x1519898, "CallScriptEventResource");
	apply_type(0x1519898, "RTTICompound");
	del_items(0x151b904, DELIT_SIMPLE, 8);
	apply_type(0x151b904, "RTTIBase[1]");
	set_name(0x151b904, "CallScriptEventResource::sBases");
	del_items(0x151b90c, DELIT_SIMPLE, 84);
	apply_type(0x151b90c, "RTTIAttr[3]");
	set_name(0x151b90c, "CallScriptEventResource::sAttrs");

	// Camera
	set_name(0x14e1810, "Camera");
	apply_type(0x14e1810, "RTTICompound");
	del_items(0x14e19e4, DELIT_SIMPLE, 8);
	apply_type(0x14e19e4, "RTTIBase[1]");
	set_name(0x14e19e4, "Camera::sBases");
	del_items(0x14e19ec, DELIT_SIMPLE, 448);
	apply_type(0x14e19ec, "RTTIAttr[16]");
	set_name(0x14e19ec, "Camera::sAttrs");

	// CameraCollisionRail
	set_name(0x1501070, "CameraCollisionRail");
	apply_type(0x1501070, "RTTICompound");

	// CameraEntity
	set_name(0x14e2558, "CameraEntity");
	apply_type(0x14e2558, "RTTICompound");
	del_items(0x14e52cc, DELIT_SIMPLE, 8);
	apply_type(0x14e52cc, "RTTIBase[1]");
	set_name(0x14e52cc, "CameraEntity::sBases");
	del_items(0x14e52d4, DELIT_SIMPLE, 336);
	apply_type(0x14e52d4, "RTTIAttr[12]");
	set_name(0x14e52d4, "CameraEntity::sAttrs");

	// CameraEntityRep
	set_name(0x14e25ac, "CameraEntityRep");
	apply_type(0x14e25ac, "RTTICompound");
	del_items(0x14e5428, DELIT_SIMPLE, 8);
	apply_type(0x14e5428, "RTTIBase[1]");
	set_name(0x14e5428, "CameraEntityRep::sBases");

	// CameraEntityResource
	set_name(0x14e2610, "CameraEntityResource");
	apply_type(0x14e2610, "RTTICompound");
	del_items(0x14e505c, DELIT_SIMPLE, 8);
	apply_type(0x14e505c, "RTTIBase[1]");
	set_name(0x14e505c, "CameraEntityResource::sBases");
	del_items(0x14e5064, DELIT_SIMPLE, 616);
	apply_type(0x14e5064, "RTTIAttr[22]");
	set_name(0x14e5064, "CameraEntityResource::sAttrs");

	// CameraEventInstance
	set_name(0x1519994, "CameraEventInstance");
	apply_type(0x1519994, "RTTICompound");
	del_items(0x151ba50, DELIT_SIMPLE, 8);
	apply_type(0x151ba50, "RTTIBase[1]");
	set_name(0x151ba50, "CameraEventInstance::sBases");

	// CameraEventResource
	set_name(0x1519940, "CameraEventResource");
	apply_type(0x1519940, "RTTICompound");
	del_items(0x151b968, DELIT_SIMPLE, 8);
	apply_type(0x151b968, "RTTIBase[1]");
	set_name(0x151b968, "CameraEventResource::sBases");
	del_items(0x151b970, DELIT_SIMPLE, 224);
	apply_type(0x151b970, "RTTIAttr[8]");
	set_name(0x151b970, "CameraEventResource::sAttrs");

	// CameraManager
	set_name(0x14e1864, "CameraManager");
	apply_type(0x14e1864, "RTTICompound");
	del_items(0x14e1bac, DELIT_SIMPLE, 8);
	apply_type(0x14e1bac, "RTTIBase[1]");
	set_name(0x14e1bac, "CameraManager::sBases");
	del_items(0x14e1bb4, DELIT_SIMPLE, 12);
	apply_type(0x14e1bb4, "RTTIMessageHandler[1]");
	set_name(0x14e1bb4, "CameraManager::sMessageHandlers");

	// CameraShakeEventInstance
	set_name(0x1519a3c, "CameraShakeEventInstance");
	apply_type(0x1519a3c, "RTTICompound");
	del_items(0x151bad0, DELIT_SIMPLE, 8);
	apply_type(0x151bad0, "RTTIBase[1]");
	set_name(0x151bad0, "CameraShakeEventInstance::sBases");

	// CameraShakeEventResource
	set_name(0x15199e8, "CameraShakeEventResource");
	apply_type(0x15199e8, "RTTICompound");
	del_items(0x151ba58, DELIT_SIMPLE, 8);
	apply_type(0x151ba58, "RTTIBase[1]");
	set_name(0x151ba58, "CameraShakeEventResource::sBases");
	del_items(0x151ba60, DELIT_SIMPLE, 112);
	apply_type(0x151ba60, "RTTIAttr[4]");
	set_name(0x151ba60, "CameraShakeEventResource::sAttrs");

	// CaptureAndHoldArea
	set_name(0x1520de4, "CaptureAndHoldArea");
	apply_type(0x1520de4, "RTTICompound");
	del_items(0x1521d08, DELIT_SIMPLE, 8);
	apply_type(0x1521d08, "RTTIBase[1]");
	set_name(0x1521d08, "CaptureAndHoldArea::sBases");
	del_items(0x1521d10, DELIT_SIMPLE, 144);
	apply_type(0x1521d10, "RTTIFunction[6]");
	set_name(0x1521d10, "CaptureAndHoldArea::sFunctions");

	// CaptureAndHoldAreaFactionSettings
	set_name(0x1521dc0, "CaptureAndHoldAreaFactionSettings");
	apply_type(0x1521dc0, "RTTICompound");
	del_items(0x152284c, DELIT_SIMPLE, 8);
	apply_type(0x152284c, "RTTIBase[1]");
	set_name(0x152284c, "CaptureAndHoldAreaFactionSettings::sBases");
	del_items(0x1522854, DELIT_SIMPLE, 168);
	apply_type(0x1522854, "RTTIAttr[6]");
	set_name(0x1522854, "CaptureAndHoldAreaFactionSettings::sAttrs");

	// CaptureAndHoldAreaRep
	set_name(0x1521e68, "CaptureAndHoldAreaRep");
	apply_type(0x1521e68, "RTTICompound");
	del_items(0x1522ad8, DELIT_SIMPLE, 8);
	apply_type(0x1522ad8, "RTTIBase[1]");
	set_name(0x1522ad8, "CaptureAndHoldAreaRep::sBases");

	// CaptureAndHoldAreaResource
	set_name(0x1521e14, "CaptureAndHoldAreaResource");
	apply_type(0x1521e14, "RTTICompound");
	del_items(0x1522908, DELIT_SIMPLE, 8);
	apply_type(0x1522908, "RTTIBase[1]");
	set_name(0x1522908, "CaptureAndHoldAreaResource::sBases");
	del_items(0x1522910, DELIT_SIMPLE, 448);
	apply_type(0x1522910, "RTTIAttr[16]");
	set_name(0x1522910, "CaptureAndHoldAreaResource::sAttrs");

	// CaptureAndHoldMapZone
	set_name(0x153088c, "CaptureAndHoldMapZone");
	apply_type(0x153088c, "RTTICompound");
	del_items(0x1531ac8, DELIT_SIMPLE, 8);
	apply_type(0x1531ac8, "RTTIBase[1]");
	set_name(0x1531ac8, "CaptureAndHoldMapZone::sBases");
	del_items(0x1531ad0, DELIT_SIMPLE, 28);
	apply_type(0x1531ad0, "RTTIAttr[1]");
	set_name(0x1531ad0, "CaptureAndHoldMapZone::sAttrs");

	// CaptureTrooperComponent
	set_name(0x150f058, "CaptureTrooperComponent");
	apply_type(0x150f058, "RTTICompound");
	del_items(0x1512218, DELIT_SIMPLE, 8);
	apply_type(0x1512218, "RTTIBase[1]");
	set_name(0x1512218, "CaptureTrooperComponent::sBases");
	del_items(0x1512220, DELIT_SIMPLE, 24);
	apply_type(0x1512220, "RTTIFunction[1]");
	set_name(0x1512220, "CaptureTrooperComponent::sFunctions");

	// CaptureTrooperComponentResource
	set_name(0x150f0ac, "CaptureTrooperComponentResource");
	apply_type(0x150f0ac, "RTTICompound");
	del_items(0x151212c, DELIT_SIMPLE, 8);
	apply_type(0x151212c, "RTTIBase[1]");
	set_name(0x151212c, "CaptureTrooperComponentResource::sBases");
	del_items(0x1512134, DELIT_SIMPLE, 224);
	apply_type(0x1512134, "RTTIAttr[8]");
	set_name(0x1512134, "CaptureTrooperComponentResource::sAttrs");

	// Career
	set_name(0x153e918, "Career");
	apply_type(0x153e918, "RTTICompound");
	del_items(0x1540164, DELIT_SIMPLE, 8);
	apply_type(0x1540164, "RTTIBase[1]");
	set_name(0x1540164, "Career::sBases");
	del_items(0x154016c, DELIT_SIMPLE, 224);
	apply_type(0x154016c, "RTTIAttr[8]");
	set_name(0x154016c, "Career::sAttrs");

	// CareerAbility
	set_name(0x14eedb0, "CareerAbility");
	apply_type(0x14eedb0, "RTTICompound");
	del_items(0x14f0b00, DELIT_SIMPLE, 8);
	apply_type(0x14f0b00, "RTTIBase[1]");
	set_name(0x14f0b00, "CareerAbility::sBases");

	// CareerAbilityExtraAmmoResource
	set_name(0x14eeecc, "CareerAbilityExtraAmmoResource");
	apply_type(0x14eeecc, "RTTICompound");
	del_items(0x14f207c, DELIT_SIMPLE, 8);
	apply_type(0x14f207c, "RTTIBase[1]");
	set_name(0x14f207c, "CareerAbilityExtraAmmoResource::sBases");
	del_items(0x14f2084, DELIT_SIMPLE, 28);
	apply_type(0x14f2084, "RTTIAttr[1]");
	set_name(0x14f2084, "CareerAbilityExtraAmmoResource::sAttrs");

	// CareerAbilityExtraDamage
	set_name(0x14eef20, "CareerAbilityExtraDamage");
	apply_type(0x14eef20, "RTTICompound");
	del_items(0x14f20fc, DELIT_SIMPLE, 8);
	apply_type(0x14f20fc, "RTTIBase[1]");
	set_name(0x14f20fc, "CareerAbilityExtraDamage::sBases");

	// CareerAbilityExtraDamageResource
	set_name(0x14eefd8, "CareerAbilityExtraDamageResource");
	apply_type(0x14eefd8, "RTTICompound");
	del_items(0x14f20d8, DELIT_SIMPLE, 8);
	apply_type(0x14f20d8, "RTTIBase[1]");
	set_name(0x14f20d8, "CareerAbilityExtraDamageResource::sBases");
	del_items(0x14f20e0, DELIT_SIMPLE, 28);
	apply_type(0x14f20e0, "RTTIAttr[1]");
	set_name(0x14f20e0, "CareerAbilityExtraDamageResource::sAttrs");

	// CareerAbilityExtraHealthResource
	set_name(0x14ef278, "CareerAbilityExtraHealthResource");
	apply_type(0x14ef278, "RTTICompound");
	del_items(0x14f22a8, DELIT_SIMPLE, 8);
	apply_type(0x14f22a8, "RTTIBase[1]");
	set_name(0x14f22a8, "CareerAbilityExtraHealthResource::sBases");
	del_items(0x14f22b0, DELIT_SIMPLE, 84);
	apply_type(0x14f22b0, "RTTIAttr[3]");
	set_name(0x14f22b0, "CareerAbilityExtraHealthResource::sAttrs");

	// CareerAbilityExtraPrimaryWeaponResource
	set_name(0x14ef02c, "CareerAbilityExtraPrimaryWeaponResource");
	apply_type(0x14ef02c, "RTTICompound");
	del_items(0x14f2104, DELIT_SIMPLE, 8);
	apply_type(0x14f2104, "RTTIBase[1]");
	set_name(0x14f2104, "CareerAbilityExtraPrimaryWeaponResource::sBases");

	// CareerAbilityFasterActionsResource
	set_name(0x14ef080, "CareerAbilityFasterActionsResource");
	apply_type(0x14ef080, "RTTICompound");
	del_items(0x14f210c, DELIT_SIMPLE, 8);
	apply_type(0x14f210c, "RTTIBase[1]");
	set_name(0x14f210c, "CareerAbilityFasterActionsResource::sBases");
	del_items(0x14f2114, DELIT_SIMPLE, 56);
	apply_type(0x14f2114, "RTTIAttr[2]");
	set_name(0x14f2114, "CareerAbilityFasterActionsResource::sAttrs");

	// CareerAbilityFasterZoomResource
	set_name(0x14ef0d4, "CareerAbilityFasterZoomResource");
	apply_type(0x14ef0d4, "RTTICompound");
	del_items(0x14f214c, DELIT_SIMPLE, 8);
	apply_type(0x14f214c, "RTTIBase[1]");
	set_name(0x14f214c, "CareerAbilityFasterZoomResource::sBases");
	del_items(0x14f2154, DELIT_SIMPLE, 84);
	apply_type(0x14f2154, "RTTIAttr[3]");
	set_name(0x14f2154, "CareerAbilityFasterZoomResource::sAttrs");

	// CareerAbilityHealthAuraResource
	set_name(0x14ef41c, "CareerAbilityHealthAuraResource");
	apply_type(0x14ef41c, "RTTICompound");
	del_items(0x14f23cc, DELIT_SIMPLE, 8);
	apply_type(0x14f23cc, "RTTIBase[1]");
	set_name(0x14f23cc, "CareerAbilityHealthAuraResource::sBases");
	del_items(0x14f23d4, DELIT_SIMPLE, 84);
	apply_type(0x14f23d4, "RTTIAttr[3]");
	set_name(0x14f23d4, "CareerAbilityHealthAuraResource::sAttrs");

	// CareerAbilityHigherAccuracyResource
	set_name(0x14ef128, "CareerAbilityHigherAccuracyResource");
	apply_type(0x14ef128, "RTTICompound");
	del_items(0x14f21a8, DELIT_SIMPLE, 8);
	apply_type(0x14f21a8, "RTTIBase[1]");
	set_name(0x14f21a8, "CareerAbilityHigherAccuracyResource::sBases");
	del_items(0x14f21b0, DELIT_SIMPLE, 56);
	apply_type(0x14f21b0, "RTTIAttr[2]");
	set_name(0x14f21b0, "CareerAbilityHigherAccuracyResource::sAttrs");

	// CareerAbilityIncreasedTurretRateResource
	set_name(0x14ef470, "CareerAbilityIncreasedTurretRateResource");
	apply_type(0x14ef470, "RTTICompound");
	del_items(0x14f2428, DELIT_SIMPLE, 8);
	apply_type(0x14f2428, "RTTIBase[1]");
	set_name(0x14f2428, "CareerAbilityIncreasedTurretRateResource::sBases");

	// CareerAbilityRadarJamming
	set_name(0x14ef2cc, "CareerAbilityRadarJamming");
	apply_type(0x14ef2cc, "RTTICompound");
	del_items(0x14f237c, DELIT_SIMPLE, 8);
	apply_type(0x14f237c, "RTTIBase[1]");
	set_name(0x14f237c, "CareerAbilityRadarJamming::sBases");

	// CareerAbilityRadarJammingResource
	set_name(0x14ef320, "CareerAbilityRadarJammingResource");
	apply_type(0x14ef320, "RTTICompound");
	del_items(0x14f2304, DELIT_SIMPLE, 8);
	apply_type(0x14f2304, "RTTIBase[1]");
	set_name(0x14f2304, "CareerAbilityRadarJammingResource::sBases");
	del_items(0x14f230c, DELIT_SIMPLE, 112);
	apply_type(0x14f230c, "RTTIAttr[4]");
	set_name(0x14f230c, "CareerAbilityRadarJammingResource::sAttrs");

	// CareerAbilityResource
	set_name(0x14eee14, "CareerAbilityResource");
	apply_type(0x14eee14, "RTTICompound");
	del_items(0x14f1f24, DELIT_SIMPLE, 8);
	apply_type(0x14f1f24, "RTTIBase[1]");
	set_name(0x14f1f24, "CareerAbilityResource::sBases");
	del_items(0x14f1f2c, DELIT_SIMPLE, 252);
	apply_type(0x14f1f2c, "RTTIAttr[9]");
	set_name(0x14f1f2c, "CareerAbilityResource::sAttrs");

	// CareerAbilitySilentFootstepsResource
	set_name(0x14ef17c, "CareerAbilitySilentFootstepsResource");
	apply_type(0x14ef17c, "RTTICompound");
	del_items(0x14f21e8, DELIT_SIMPLE, 8);
	apply_type(0x14f21e8, "RTTIBase[1]");
	set_name(0x14f21e8, "CareerAbilitySilentFootstepsResource::sBases");

	// CareerAbilitySpotAndMark
	set_name(0x14ef374, "CareerAbilitySpotAndMark");
	apply_type(0x14ef374, "RTTICompound");
	del_items(0x14f23c4, DELIT_SIMPLE, 8);
	apply_type(0x14f23c4, "RTTIBase[1]");
	set_name(0x14f23c4, "CareerAbilitySpotAndMark::sBases");

	// CareerAbilitySpotAndMarkResource
	set_name(0x14ef3c8, "CareerAbilitySpotAndMarkResource");
	apply_type(0x14ef3c8, "RTTICompound");
	del_items(0x14f2384, DELIT_SIMPLE, 8);
	apply_type(0x14f2384, "RTTIBase[1]");
	set_name(0x14f2384, "CareerAbilitySpotAndMarkResource::sBases");
	del_items(0x14f238c, DELIT_SIMPLE, 56);
	apply_type(0x14f238c, "RTTIAttr[2]");
	set_name(0x14f238c, "CareerAbilitySpotAndMarkResource::sAttrs");

	// CareerAbilitySprintSpeedMultiplierResource
	set_name(0x14ef224, "CareerAbilitySprintSpeedMultiplierResource");
	apply_type(0x14ef224, "RTTICompound");
	del_items(0x14f2268, DELIT_SIMPLE, 8);
	apply_type(0x14f2268, "RTTIBase[1]");
	set_name(0x14f2268, "CareerAbilitySprintSpeedMultiplierResource::sBases");
	del_items(0x14f2270, DELIT_SIMPLE, 56);
	apply_type(0x14f2270, "RTTIAttr[2]");
	set_name(0x14f2270, "CareerAbilitySprintSpeedMultiplierResource::sAttrs");

	// CareerAbilityStaminaMultiplierResource
	set_name(0x14ef1d0, "CareerAbilityStaminaMultiplierResource");
	apply_type(0x14ef1d0, "RTTICompound");
	del_items(0x14f21f0, DELIT_SIMPLE, 8);
	apply_type(0x14f21f0, "RTTIBase[1]");
	set_name(0x14f21f0, "CareerAbilityStaminaMultiplierResource::sBases");
	del_items(0x14f21f8, DELIT_SIMPLE, 112);
	apply_type(0x14f21f8, "RTTIAttr[4]");
	set_name(0x14f21f8, "CareerAbilityStaminaMultiplierResource::sAttrs");

	// CareerAbilitySurviveBleedoutResource
	set_name(0x14ef4c4, "CareerAbilitySurviveBleedoutResource");
	apply_type(0x14ef4c4, "RTTICompound");
	del_items(0x14f2430, DELIT_SIMPLE, 8);
	apply_type(0x14f2430, "RTTIBase[1]");
	set_name(0x14f2430, "CareerAbilitySurviveBleedoutResource::sBases");
	del_items(0x14f2438, DELIT_SIMPLE, 112);
	apply_type(0x14f2438, "RTTIAttr[4]");
	set_name(0x14f2438, "CareerAbilitySurviveBleedoutResource::sAttrs");

	// CareerAbilityTimeLimited
	set_name(0x1536ec0, "CareerAbilityTimeLimited");
	apply_type(0x1536ec0, "RTTICompound");
	del_items(0x1537c9c, DELIT_SIMPLE, 8);
	apply_type(0x1537c9c, "RTTIBase[1]");
	set_name(0x1537c9c, "CareerAbilityTimeLimited::sBases");

	// CareerAbilityTimeLimitedResource
	set_name(0x1536f14, "CareerAbilityTimeLimitedResource");
	apply_type(0x1536f14, "RTTICompound");
	del_items(0x1537be8, DELIT_SIMPLE, 8);
	apply_type(0x1537be8, "RTTIBase[1]");
	set_name(0x1537be8, "CareerAbilityTimeLimitedResource::sBases");
	del_items(0x1537bf0, DELIT_SIMPLE, 112);
	apply_type(0x1537bf0, "RTTIAttr[4]");
	set_name(0x1537bf0, "CareerAbilityTimeLimitedResource::sAttrs");

	// CareerAbilityXpMultiplier
	set_name(0x1536f68, "CareerAbilityXpMultiplier");
	apply_type(0x1536f68, "RTTICompound");
	del_items(0x1537ce4, DELIT_SIMPLE, 8);
	apply_type(0x1537ce4, "RTTIBase[1]");
	set_name(0x1537ce4, "CareerAbilityXpMultiplier::sBases");

	// CareerAbilityXpMultiplierResource
	set_name(0x1536fbc, "CareerAbilityXpMultiplierResource");
	apply_type(0x1536fbc, "RTTICompound");
	del_items(0x1537ca4, DELIT_SIMPLE, 8);
	apply_type(0x1537ca4, "RTTIBase[1]");
	set_name(0x1537ca4, "CareerAbilityXpMultiplierResource::sBases");
	del_items(0x1537cac, DELIT_SIMPLE, 56);
	apply_type(0x1537cac, "RTTIAttr[2]");
	set_name(0x1537cac, "CareerAbilityXpMultiplierResource::sAttrs");

	// CareerUnlock
	set_name(0x153e8a4, "CareerUnlock");
	apply_type(0x153e8a4, "RTTICompound");
	del_items(0x154007c, DELIT_SIMPLE, 8);
	apply_type(0x154007c, "RTTIBase[1]");
	set_name(0x154007c, "CareerUnlock::sBases");
	del_items(0x1540084, DELIT_SIMPLE, 224);
	apply_type(0x1540084, "RTTIAttr[8]");
	set_name(0x1540084, "CareerUnlock::sAttrs");

	// CareerUnlockSystem
	set_name(0x14ef518, "CareerUnlockSystem");
	apply_type(0x14ef518, "RTTICompound");
	del_items(0x14f24a8, DELIT_SIMPLE, 8);
	apply_type(0x14f24a8, "RTTIBase[1]");
	set_name(0x14f24a8, "CareerUnlockSystem::sBases");
	del_items(0x14f24b0, DELIT_SIMPLE, 96);
	apply_type(0x14f24b0, "RTTIFunction[4]");
	set_name(0x14f24b0, "CareerUnlockSystem::sFunctions");

	// CareerUnlockSystemResource
	set_name(0x14ef56c, "CareerUnlockSystemResource");
	apply_type(0x14ef56c, "RTTICompound");
	del_items(0x14f2514, DELIT_SIMPLE, 8);
	apply_type(0x14f2514, "RTTIBase[1]");
	set_name(0x14f2514, "CareerUnlockSystemResource::sBases");
	del_items(0x14f251c, DELIT_SIMPLE, 84);
	apply_type(0x14f251c, "RTTIAttr[3]");
	set_name(0x14f251c, "CareerUnlockSystemResource::sAttrs");
	del_items(0x14f2570, DELIT_SIMPLE, 12);
	apply_type(0x14f2570, "RTTIMessageHandler[1]");
	set_name(0x14f2570, "CareerUnlockSystemResource::sMessageHandlers");

	// ChangeInvulnerabilityEventInstance
	set_name(0x1519ae4, "ChangeInvulnerabilityEventInstance");
	apply_type(0x1519ae4, "RTTICompound");
	del_items(0x151bb50, DELIT_SIMPLE, 8);
	apply_type(0x151bb50, "RTTIBase[1]");
	set_name(0x151bb50, "ChangeInvulnerabilityEventInstance::sBases");

	// ChangeInvulnerabilityEventResource
	set_name(0x1519a90, "ChangeInvulnerabilityEventResource");
	apply_type(0x1519a90, "RTTICompound");
	del_items(0x151bad8, DELIT_SIMPLE, 8);
	apply_type(0x151bad8, "RTTIBase[1]");
	set_name(0x151bad8, "ChangeInvulnerabilityEventResource::sBases");
	del_items(0x151bae0, DELIT_SIMPLE, 112);
	apply_type(0x151bae0, "RTTIAttr[4]");
	set_name(0x151bae0, "ChangeInvulnerabilityEventResource::sAttrs");

	// ChapterListResource
	set_name(0x153e074, "ChapterListResource");
	apply_type(0x153e074, "RTTICompound");
	del_items(0x153faf8, DELIT_SIMPLE, 8);
	apply_type(0x153faf8, "RTTIBase[1]");
	set_name(0x153faf8, "ChapterListResource::sBases");
	del_items(0x153fb00, DELIT_SIMPLE, 28);
	apply_type(0x153fb00, "RTTIAttr[1]");
	set_name(0x153fb00, "ChapterListResource::sAttrs");
	del_items(0x153fb1c, DELIT_SIMPLE, 432);
	apply_type(0x153fb1c, "RTTIFunction[18]");
	set_name(0x153fb1c, "ChapterListResource::sFunctions");

	// Character
	set_name(0x1547ab8, "Character");
	apply_type(0x1547ab8, "RTTICompound");
	del_items(0x1548b08, DELIT_SIMPLE, 8);
	apply_type(0x1548b08, "RTTIBase[1]");
	set_name(0x1548b08, "Character::sBases");
	del_items(0x1548b10, DELIT_SIMPLE, 288);
	apply_type(0x1548b10, "RTTIFunction[12]");
	set_name(0x1548b10, "Character::sFunctions");
	del_items(0x1548c30, DELIT_SIMPLE, 24);
	apply_type(0x1548c30, "RTTIMessageHandler[2]");
	set_name(0x1548c30, "Character::sMessageHandlers");

	// CharacterAnimationOverrideCallbacks
	set_name(0x1547c6c, "CharacterAnimationOverrideCallbacks");
	apply_type(0x1547c6c, "RTTICompound");

	// CharacterBodyVariant
	set_name(0x1547b70, "CharacterBodyVariant");
	apply_type(0x1547b70, "RTTICompound");
	del_items(0x1548c48, DELIT_SIMPLE, 8);
	apply_type(0x1548c48, "RTTIBase[1]");
	set_name(0x1548c48, "CharacterBodyVariant::sBases");
	del_items(0x1548c50, DELIT_SIMPLE, 812);
	apply_type(0x1548c50, "RTTIAttr[29]");
	set_name(0x1548c50, "CharacterBodyVariant::sAttrs");
	del_items(0x1548f7c, DELIT_SIMPLE, 12);
	apply_type(0x1548f7c, "RTTIMessageHandler[1]");
	set_name(0x1548f7c, "CharacterBodyVariant::sMessageHandlers");

	// CharacterController
	set_name(0x1547c18, "CharacterController");
	apply_type(0x1547c18, "RTTICompound");
	del_items(0x1548f88, DELIT_SIMPLE, 8);
	apply_type(0x1548f88, "RTTIBase[1]");
	set_name(0x1548f88, "CharacterController::sBases");

	// CharacterEyeAnimatorResource
	set_name(0x1547ec4, "CharacterEyeAnimatorResource");
	apply_type(0x1547ec4, "RTTICompound");
	del_items(0x1549018, DELIT_SIMPLE, 8);
	apply_type(0x1549018, "RTTIBase[1]");
	set_name(0x1549018, "CharacterEyeAnimatorResource::sBases");
	del_items(0x1549020, DELIT_SIMPLE, 196);
	apply_type(0x1549020, "RTTIAttr[7]");
	set_name(0x1549020, "CharacterEyeAnimatorResource::sAttrs");

	// CharacterFacialExpressionAnimation
	set_name(0x1547d98, "CharacterFacialExpressionAnimation");
	apply_type(0x1547d98, "RTTICompound");
	del_items(0x15487b8, DELIT_SIMPLE, 8);
	apply_type(0x15487b8, "RTTIBase[1]");
	set_name(0x15487b8, "CharacterFacialExpressionAnimation::sBases");
	del_items(0x15487c0, DELIT_SIMPLE, 140);
	apply_type(0x15487c0, "RTTIAttr[5]");
	set_name(0x15487c0, "CharacterFacialExpressionAnimation::sAttrs");

	// CharacterFacialGesture
	set_name(0x1547fc0, "CharacterFacialGesture");
	apply_type(0x1547fc0, "RTTICompound");
	del_items(0x1548fd8, DELIT_SIMPLE, 8);
	apply_type(0x1548fd8, "RTTIBase[1]");
	set_name(0x1548fd8, "CharacterFacialGesture::sBases");
	del_items(0x1548fe0, DELIT_SIMPLE, 56);
	apply_type(0x1548fe0, "RTTIAttr[2]");
	set_name(0x1548fe0, "CharacterFacialGesture::sAttrs");

	// CharacterGesture
	set_name(0x1547f18, "CharacterGesture");
	apply_type(0x1547f18, "RTTICompound");
	del_items(0x1548f98, DELIT_SIMPLE, 8);
	apply_type(0x1548f98, "RTTIBase[1]");
	set_name(0x1548f98, "CharacterGesture::sBases");
	del_items(0x1548fa0, DELIT_SIMPLE, 56);
	apply_type(0x1548fa0, "RTTIAttr[2]");
	set_name(0x1548fa0, "CharacterGesture::sAttrs");

	// CharacterHeadLOD
	set_name(0x1547dfc, "CharacterHeadLOD");
	apply_type(0x1547dfc, "RTTICompound");
	del_items(0x154884c, DELIT_SIMPLE, 8);
	apply_type(0x154884c, "RTTIBase[1]");
	set_name(0x154884c, "CharacterHeadLOD::sBases");
	del_items(0x1548854, DELIT_SIMPLE, 112);
	apply_type(0x1548854, "RTTIAttr[4]");
	set_name(0x1548854, "CharacterHeadLOD::sAttrs");

	// CharacterHeadResource
	set_name(0x1547e60, "CharacterHeadResource");
	apply_type(0x1547e60, "RTTICompound");
	del_items(0x15488c4, DELIT_SIMPLE, 8);
	apply_type(0x15488c4, "RTTIBase[1]");
	set_name(0x15488c4, "CharacterHeadResource::sBases");
	del_items(0x15488cc, DELIT_SIMPLE, 560);
	apply_type(0x15488cc, "RTTIAttr[20]");
	set_name(0x15488cc, "CharacterHeadResource::sAttrs");
	del_items(0x1548afc, DELIT_SIMPLE, 12);
	apply_type(0x1548afc, "RTTIMessageHandler[1]");
	set_name(0x1548afc, "CharacterHeadResource::sMessageHandlers");

	// CharacterHeldItem
	set_name(0x154a418, "CharacterHeldItem");
	apply_type(0x154a418, "RTTICompound");
	del_items(0x154abf8, DELIT_SIMPLE, 8);
	apply_type(0x154abf8, "RTTIBase[1]");
	set_name(0x154abf8, "CharacterHeldItem::sBases");

	// CharacterHeldItemMover
	set_name(0x154a2c8, "CharacterHeldItemMover");
	apply_type(0x154a2c8, "RTTICompound");
	del_items(0x154ab80, DELIT_SIMPLE, 8);
	apply_type(0x154ab80, "RTTIBase[1]");
	set_name(0x154ab80, "CharacterHeldItemMover::sBases");

	// CharacterHeldItemMoverResource
	set_name(0x154a31c, "CharacterHeldItemMoverResource");
	apply_type(0x154a31c, "RTTICompound");
	del_items(0x154ab88, DELIT_SIMPLE, 8);
	apply_type(0x154ab88, "RTTIBase[1]");
	set_name(0x154ab88, "CharacterHeldItemMoverResource::sBases");
	del_items(0x154ab90, DELIT_SIMPLE, 84);
	apply_type(0x154ab90, "RTTIAttr[3]");
	set_name(0x154ab90, "CharacterHeldItemMoverResource::sAttrs");
	del_items(0x154abe4, DELIT_SIMPLE, 12);
	apply_type(0x154abe4, "RTTIMessageHandler[1]");
	set_name(0x154abe4, "CharacterHeldItemMoverResource::sMessageHandlers");

	// CharacterHeldItemRep
	set_name(0x154a46c, "CharacterHeldItemRep");
	apply_type(0x154a46c, "RTTICompound");
	del_items(0x154ac8c, DELIT_SIMPLE, 8);
	apply_type(0x154ac8c, "RTTIBase[1]");
	set_name(0x154ac8c, "CharacterHeldItemRep::sBases");

	// CharacterHeldItemResource
	set_name(0x154a4c0, "CharacterHeldItemResource");
	apply_type(0x154a4c0, "RTTICompound");
	del_items(0x154ac0c, DELIT_SIMPLE, 8);
	apply_type(0x154ac0c, "RTTIBase[1]");
	set_name(0x154ac0c, "CharacterHeldItemResource::sBases");

	// CharacterLocomotionGesture
	set_name(0x1547f6c, "CharacterLocomotionGesture");
	apply_type(0x1547f6c, "RTTICompound");
	del_items(0x1549110, DELIT_SIMPLE, 8);
	apply_type(0x1549110, "RTTIBase[1]");
	set_name(0x1549110, "CharacterLocomotionGesture::sBases");
	del_items(0x1549118, DELIT_SIMPLE, 112);
	apply_type(0x1549118, "RTTIAttr[4]");
	set_name(0x1549118, "CharacterLocomotionGesture::sAttrs");

	// CharacterMover
	set_name(0x1547cc0, "CharacterMover");
	apply_type(0x1547cc0, "RTTICompound");
	del_items(0x15490e4, DELIT_SIMPLE, 8);
	apply_type(0x15490e4, "RTTIBase[1]");
	set_name(0x15490e4, "CharacterMover::sBases");

	// CharacterMoverResource
	set_name(0x1547d14, "CharacterMoverResource");
	apply_type(0x1547d14, "RTTICompound");
	del_items(0x15490ec, DELIT_SIMPLE, 8);
	apply_type(0x15490ec, "RTTIBase[1]");
	set_name(0x15490ec, "CharacterMoverResource::sBases");
	del_items(0x15490f4, DELIT_SIMPLE, 28);
	apply_type(0x15490f4, "RTTIAttr[1]");
	set_name(0x15490f4, "CharacterMoverResource::sAttrs");

	// CharacterPhysicsMover
	set_name(0x1540fdc, "CharacterPhysicsMover");
	apply_type(0x1540fdc, "RTTICompound");
	del_items(0x154113c, DELIT_SIMPLE, 8);
	apply_type(0x154113c, "RTTIBase[1]");
	set_name(0x154113c, "CharacterPhysicsMover::sBases");

	// CharacterPhysicsMoverProxy
	set_name(0x1541084, "CharacterPhysicsMoverProxy");
	apply_type(0x1541084, "RTTICompound");
	del_items(0x154114c, DELIT_SIMPLE, 8);
	apply_type(0x154114c, "RTTIBase[1]");
	set_name(0x154114c, "CharacterPhysicsMoverProxy::sBases");

	// CharacterPhysicsMoverResource
	set_name(0x15410e8, "CharacterPhysicsMoverResource");
	apply_type(0x15410e8, "RTTICompound");
	del_items(0x1541154, DELIT_SIMPLE, 8);
	apply_type(0x1541154, "RTTIBase[1]");
	set_name(0x1541154, "CharacterPhysicsMoverResource::sBases");
	del_items(0x154115c, DELIT_SIMPLE, 364);
	apply_type(0x154115c, "RTTIAttr[13]");
	set_name(0x154115c, "CharacterPhysicsMoverResource::sAttrs");

	// CharacterPhysicsMoverRigidBody
	set_name(0x1541030, "CharacterPhysicsMoverRigidBody");
	apply_type(0x1541030, "RTTICompound");
	del_items(0x1541144, DELIT_SIMPLE, 8);
	apply_type(0x1541144, "RTTIBase[1]");
	set_name(0x1541144, "CharacterPhysicsMoverRigidBody::sBases");

	// CharacterRep
	set_name(0x1547bc4, "CharacterRep");
	apply_type(0x1547bc4, "RTTICompound");
	del_items(0x1548f90, DELIT_SIMPLE, 8);
	apply_type(0x1548f90, "RTTIBase[1]");
	set_name(0x1548f90, "CharacterRep::sBases");

	// CharacterResource
	set_name(0x1547b0c, "CharacterResource");
	apply_type(0x1547b0c, "RTTICompound");
	del_items(0x154853c, DELIT_SIMPLE, 8);
	apply_type(0x154853c, "RTTIBase[1]");
	set_name(0x154853c, "CharacterResource::sBases");
	del_items(0x1548544, DELIT_SIMPLE, 616);
	apply_type(0x1548544, "RTTIAttr[22]");
	set_name(0x1548544, "CharacterResource::sAttrs");
	del_items(0x15487ac, DELIT_SIMPLE, 12);
	apply_type(0x15487ac, "RTTIMessageHandler[1]");
	set_name(0x15487ac, "CharacterResource::sMessageHandlers");

	// CharacterSelectTag
	set_name(0x153e2d0, "CharacterSelectTag");
	apply_type(0x153e2d0, "RTTICompound");
	del_items(0x15402fc, DELIT_SIMPLE, 8);
	apply_type(0x15402fc, "RTTIBase[1]");
	set_name(0x15402fc, "CharacterSelectTag::sBases");
	del_items(0x1540304, DELIT_SIMPLE, 144);
	apply_type(0x1540304, "RTTIFunction[6]");
	set_name(0x1540304, "CharacterSelectTag::sFunctions");

	// CharacterSelectWidget
	set_name(0x153e334, "CharacterSelectWidget");
	apply_type(0x153e334, "RTTICompound");
	del_items(0x15404f4, DELIT_SIMPLE, 8);
	apply_type(0x15404f4, "RTTIBase[1]");
	set_name(0x15404f4, "CharacterSelectWidget::sBases");

	// CharacterSelectWidgetResource
	set_name(0x153e388, "CharacterSelectWidgetResource");
	apply_type(0x153e388, "RTTICompound");
	del_items(0x15404fc, DELIT_SIMPLE, 8);
	apply_type(0x15404fc, "RTTIBase[1]");
	set_name(0x15404fc, "CharacterSelectWidgetResource::sBases");
	del_items(0x1540504, DELIT_SIMPLE, 224);
	apply_type(0x1540504, "RTTIAttr[8]");
	set_name(0x1540504, "CharacterSelectWidgetResource::sAttrs");

	// CharacterUseLocationInfo
	set_name(0x15500c0, "CharacterUseLocationInfo");
	apply_type(0x15500c0, "RTTICompound");
	del_items(0x1550570, DELIT_SIMPLE, 8);
	apply_type(0x1550570, "RTTIBase[1]");
	set_name(0x1550570, "CharacterUseLocationInfo::sBases");
	del_items(0x1550578, DELIT_SIMPLE, 56);
	apply_type(0x1550578, "RTTIAttr[2]");
	set_name(0x1550578, "CharacterUseLocationInfo::sAttrs");

	// CheckboxTag
	set_name(0x14c0424, "CheckboxTag");
	apply_type(0x14c0424, "RTTICompound");
	del_items(0x14c2a94, DELIT_SIMPLE, 8);
	apply_type(0x14c2a94, "RTTIBase[1]");
	set_name(0x14c2a94, "CheckboxTag::sBases");
	del_items(0x14c2a9c, DELIT_SIMPLE, 48);
	apply_type(0x14c2a9c, "RTTIFunction[2]");
	set_name(0x14c2a9c, "CheckboxTag::sFunctions");

	// CheckboxWidget
	set_name(0x14c0ccc, "CheckboxWidget");
	apply_type(0x14c0ccc, "RTTICompound");
	del_items(0x14c2f0c, DELIT_SIMPLE, 8);
	apply_type(0x14c2f0c, "RTTIBase[1]");
	set_name(0x14c2f0c, "CheckboxWidget::sBases");

	// ChildEntityDescription
	set_name(0x14e2364, "ChildEntityDescription");
	apply_type(0x14e2364, "RTTICompound");
	del_items(0x14e4054, DELIT_SIMPLE, 56);
	apply_type(0x14e4054, "RTTIAttr[2]");
	set_name(0x14e4054, "ChildEntityDescription::sAttrs");

	// CinematicVehicleDeathAction
	set_name(0x14f9858, "CinematicVehicleDeathAction");
	apply_type(0x14f9858, "RTTICompound");
	del_items(0x14fe440, DELIT_SIMPLE, 8);
	apply_type(0x14fe440, "RTTIBase[1]");
	set_name(0x14fe440, "CinematicVehicleDeathAction::sBases");

	// CircleSettings
	set_name(0x14cbc68, "CircleSettings");
	apply_type(0x14cbc68, "RTTICompound");
	del_items(0x14cc774, DELIT_SIMPLE, 140);
	apply_type(0x14cc774, "RTTIAttr[5]");
	set_name(0x14cc774, "CircleSettings::sAttrs");

	// CircleSettingsResource
	set_name(0x14cbccc, "CircleSettingsResource");
	apply_type(0x14cbccc, "RTTICompound");
	del_items(0x14cc800, DELIT_SIMPLE, 8);
	apply_type(0x14cc800, "RTTIBase[1]");
	set_name(0x14cc800, "CircleSettingsResource::sBases");
	del_items(0x14cc808, DELIT_SIMPLE, 56);
	apply_type(0x14cc808, "RTTIAttr[2]");
	set_name(0x14cc808, "CircleSettingsResource::sAttrs");

	// CloseCombatComponent
	set_name(0x150f100, "CloseCombatComponent");
	apply_type(0x150f100, "RTTICompound");
	del_items(0x1511554, DELIT_SIMPLE, 8);
	apply_type(0x1511554, "RTTIBase[1]");
	set_name(0x1511554, "CloseCombatComponent::sBases");

	// CloseCombatComponentRep
	set_name(0x150f1fc, "CloseCombatComponentRep");
	apply_type(0x150f1fc, "RTTICompound");
	del_items(0x1511ab0, DELIT_SIMPLE, 8);
	apply_type(0x1511ab0, "RTTIBase[1]");
	set_name(0x1511ab0, "CloseCombatComponentRep::sBases");

	// CloseCombatComponentResource
	set_name(0x150f400, "CloseCombatComponentResource");
	apply_type(0x150f400, "RTTICompound");
	del_items(0x15105c0, DELIT_SIMPLE, 8);
	apply_type(0x15105c0, "RTTIBase[1]");
	set_name(0x15105c0, "CloseCombatComponentResource::sBases");
	del_items(0x15105c8, DELIT_SIMPLE, 980);
	apply_type(0x15105c8, "RTTIAttr[35]");
	set_name(0x15105c8, "CloseCombatComponentResource::sAttrs");

	// CloseCombatEffect
	set_name(0x150f280, "CloseCombatEffect");
	apply_type(0x150f280, "RTTICompound");
	del_items(0x151041c, DELIT_SIMPLE, 196);
	apply_type(0x151041c, "RTTIAttr[7]");
	set_name(0x151041c, "CloseCombatEffect::sAttrs");

	// CloseCombatStrike
	set_name(0x1512d84, "CloseCombatStrike");
	apply_type(0x1512d84, "RTTICompound");
	del_items(0x151477c, DELIT_SIMPLE, 448);
	apply_type(0x151477c, "RTTIAttr[16]");
	set_name(0x151477c, "CloseCombatStrike::sAttrs");

	// CloseCombatVariation
	set_name(0x1512de8, "CloseCombatVariation");
	apply_type(0x1512de8, "RTTICompound");
	del_items(0x151493c, DELIT_SIMPLE, 56);
	apply_type(0x151493c, "RTTIAttr[2]");
	set_name(0x151493c, "CloseCombatVariation::sAttrs");

	// Clue
	set_name(0x15424ec, "Clue");
	apply_type(0x15424ec, "RTTICompound");
	del_items(0x1542dc4, DELIT_SIMPLE, 8);
	apply_type(0x1542dc4, "RTTIBase[1]");
	set_name(0x1542dc4, "Clue::sBases");

	// ClueLine
	set_name(0x154233c, "ClueLine");
	apply_type(0x154233c, "RTTICompound");
	del_items(0x1542ca4, DELIT_SIMPLE, 8);
	apply_type(0x1542ca4, "RTTIBase[1]");
	set_name(0x1542ca4, "ClueLine::sBases");

	// ClueLineResource
	set_name(0x15423c0, "ClueLineResource");
	apply_type(0x15423c0, "RTTICompound");
	del_items(0x1543aec, DELIT_SIMPLE, 8);
	apply_type(0x1543aec, "RTTIBase[1]");
	set_name(0x1543aec, "ClueLineResource::sBases");
	del_items(0x1543af4, DELIT_SIMPLE, 84);
	apply_type(0x1543af4, "RTTIAttr[3]");
	set_name(0x1543af4, "ClueLineResource::sAttrs");

	// CluePage
	set_name(0x1542414, "CluePage");
	apply_type(0x1542414, "RTTICompound");
	del_items(0x1543ae4, DELIT_SIMPLE, 8);
	apply_type(0x1543ae4, "RTTIBase[1]");
	set_name(0x1543ae4, "CluePage::sBases");

	// CluePageResource
	set_name(0x1542498, "CluePageResource");
	apply_type(0x1542498, "RTTICompound");
	del_items(0x1543b88, DELIT_SIMPLE, 8);
	apply_type(0x1543b88, "RTTIBase[1]");
	set_name(0x1543b88, "CluePageResource::sBases");
	del_items(0x1543b90, DELIT_SIMPLE, 112);
	apply_type(0x1543b90, "RTTIAttr[4]");
	set_name(0x1543b90, "CluePageResource::sAttrs");

	// ClueResource
	set_name(0x1542570, "ClueResource");
	apply_type(0x1542570, "RTTICompound");
	del_items(0x1543c00, DELIT_SIMPLE, 8);
	apply_type(0x1543c00, "RTTIBase[1]");
	set_name(0x1543c00, "ClueResource::sBases");
	del_items(0x1543c08, DELIT_SIMPLE, 140);
	apply_type(0x1543c08, "RTTIAttr[5]");
	set_name(0x1543c08, "ClueResource::sAttrs");

	// ClueRevelation
	set_name(0x15425c4, "ClueRevelation");
	apply_type(0x15425c4, "RTTICompound");
	del_items(0x1543adc, DELIT_SIMPLE, 8);
	apply_type(0x1543adc, "RTTIBase[1]");
	set_name(0x1543adc, "ClueRevelation::sBases");

	// ClueRevelationResource
	set_name(0x1542648, "ClueRevelationResource");
	apply_type(0x1542648, "RTTICompound");
	del_items(0x1543c94, DELIT_SIMPLE, 8);
	apply_type(0x1543c94, "RTTIBase[1]");
	set_name(0x1543c94, "ClueRevelationResource::sBases");
	del_items(0x1543c9c, DELIT_SIMPLE, 140);
	apply_type(0x1543c9c, "RTTIAttr[5]");
	set_name(0x1543c9c, "ClueRevelationResource::sAttrs");

	// ClueSystem
	set_name(0x1542240, "ClueSystem");
	apply_type(0x1542240, "RTTICompound");
	del_items(0x1542cb4, DELIT_SIMPLE, 8);
	apply_type(0x1542cb4, "RTTIBase[1]");
	set_name(0x1542cb4, "ClueSystem::sBases");
	del_items(0x1542cbc, DELIT_SIMPLE, 264);
	apply_type(0x1542cbc, "RTTIFunction[11]");
	set_name(0x1542cbc, "ClueSystem::sFunctions");

	// ClueSystemData
	set_name(0x1542294, "ClueSystemData");
	apply_type(0x1542294, "RTTICompound");
	del_items(0x1542cac, DELIT_SIMPLE, 8);
	apply_type(0x1542cac, "RTTIBase[1]");
	set_name(0x1542cac, "ClueSystemData::sBases");

	// ClueSystemDataResource
	set_name(0x15422e8, "ClueSystemDataResource");
	apply_type(0x15422e8, "RTTICompound");
	del_items(0x1543b48, DELIT_SIMPLE, 8);
	apply_type(0x1543b48, "RTTIBase[1]");
	set_name(0x1543b48, "ClueSystemDataResource::sBases");
	del_items(0x1543b50, DELIT_SIMPLE, 56);
	apply_type(0x1543b50, "RTTIAttr[2]");
	set_name(0x1543b50, "ClueSystemDataResource::sAttrs");

	// ClueSystemInteractionChildEntity
	set_name(0x154bb74, "ClueSystemInteractionChildEntity");
	apply_type(0x154bb74, "RTTICompound");
	del_items(0x154c240, DELIT_SIMPLE, 8);
	apply_type(0x154c240, "RTTIBase[1]");
	set_name(0x154c240, "ClueSystemInteractionChildEntity::sBases");

	// ClueSystemInteractionChildEntityResource
	set_name(0x154bbc8, "ClueSystemInteractionChildEntityResource");
	apply_type(0x154bbc8, "RTTICompound");
	del_items(0x154c200, DELIT_SIMPLE, 8);
	apply_type(0x154c200, "RTTIBase[1]");
	set_name(0x154c200, "ClueSystemInteractionChildEntityResource::sBases");
	del_items(0x154c208, DELIT_SIMPLE, 56);
	apply_type(0x154c208, "RTTIAttr[2]");
	set_name(0x154c208, "ClueSystemInteractionChildEntityResource::sAttrs");

	// ClueSystemInteractionClueEntity
	set_name(0x154bc1c, "ClueSystemInteractionClueEntity");
	apply_type(0x154bc1c, "RTTICompound");
	del_items(0x154c248, DELIT_SIMPLE, 8);
	apply_type(0x154c248, "RTTIBase[1]");
	set_name(0x154c248, "ClueSystemInteractionClueEntity::sBases");

	// ClueSystemInteractionClueEntityResource
	set_name(0x154bc70, "ClueSystemInteractionClueEntityResource");
	apply_type(0x154bc70, "RTTICompound");
	del_items(0x154c25c, DELIT_SIMPLE, 8);
	apply_type(0x154c25c, "RTTIBase[1]");
	set_name(0x154c25c, "ClueSystemInteractionClueEntityResource::sBases");
	del_items(0x154c264, DELIT_SIMPLE, 252);
	apply_type(0x154c264, "RTTIAttr[9]");
	set_name(0x154c264, "ClueSystemInteractionClueEntityResource::sAttrs");

	// ClueSystemInteractionEntity
	set_name(0x154bacc, "ClueSystemInteractionEntity");
	apply_type(0x154bacc, "RTTICompound");
	del_items(0x154c1ec, DELIT_SIMPLE, 8);
	apply_type(0x154c1ec, "RTTIBase[1]");
	set_name(0x154c1ec, "ClueSystemInteractionEntity::sBases");

	// ClueSystemInteractionEntityResource
	set_name(0x154bb20, "ClueSystemInteractionEntityResource");
	apply_type(0x154bb20, "RTTICompound");
	del_items(0x154c1c8, DELIT_SIMPLE, 8);
	apply_type(0x154c1c8, "RTTIBase[1]");
	set_name(0x154c1c8, "ClueSystemInteractionEntityResource::sBases");
	del_items(0x154c1d0, DELIT_SIMPLE, 28);
	apply_type(0x154c1d0, "RTTIAttr[1]");
	set_name(0x154c1d0, "ClueSystemInteractionEntityResource::sAttrs");

	// ClusterGrenade
	set_name(0x1525d38, "ClusterGrenade");
	apply_type(0x1525d38, "RTTICompound");
	del_items(0x1526eb4, DELIT_SIMPLE, 8);
	apply_type(0x1526eb4, "RTTIBase[1]");
	set_name(0x1526eb4, "ClusterGrenade::sBases");

	// ClusterGrenadeFragmentResource
	set_name(0x1525dac, "ClusterGrenadeFragmentResource");
	apply_type(0x1525dac, "RTTICompound");
	del_items(0x1526e0c, DELIT_SIMPLE, 8);
	apply_type(0x1526e0c, "RTTIBase[1]");
	set_name(0x1526e0c, "ClusterGrenadeFragmentResource::sBases");
	del_items(0x1526e14, DELIT_SIMPLE, 84);
	apply_type(0x1526e14, "RTTIAttr[3]");
	set_name(0x1526e14, "ClusterGrenadeFragmentResource::sAttrs");

	// ClusterGrenadeResource
	set_name(0x1525e00, "ClusterGrenadeResource");
	apply_type(0x1525e00, "RTTICompound");
	del_items(0x1526e74, DELIT_SIMPLE, 8);
	apply_type(0x1526e74, "RTTIBase[1]");
	set_name(0x1526e74, "ClusterGrenadeResource::sBases");
	del_items(0x1526e7c, DELIT_SIMPLE, 56);
	apply_type(0x1526e7c, "RTTIAttr[2]");
	set_name(0x1526e7c, "ClusterGrenadeResource::sAttrs");

	// CollisionHullToRagdollMapping
	set_name(0x14e386c, "CollisionHullToRagdollMapping");
	apply_type(0x14e386c, "RTTICompound");
	del_items(0x14e6738, DELIT_SIMPLE, 56);
	apply_type(0x14e6738, "RTTIAttr[2]");
	set_name(0x14e6738, "CollisionHullToRagdollMapping::sAttrs");

	// CollisionHullToRagdollMappingResource
	set_name(0x14e38d0, "CollisionHullToRagdollMappingResource");
	apply_type(0x14e38d0, "RTTICompound");
	del_items(0x14e6770, DELIT_SIMPLE, 8);
	apply_type(0x14e6770, "RTTIBase[1]");
	set_name(0x14e6770, "CollisionHullToRagdollMappingResource::sBases");
	del_items(0x14e6778, DELIT_SIMPLE, 56);
	apply_type(0x14e6778, "RTTIAttr[2]");
	set_name(0x14e6778, "CollisionHullToRagdollMappingResource::sAttrs");

	// CollisionMeshInstance
	set_name(0x14bc470, "CollisionMeshInstance");
	apply_type(0x14bc470, "RTTICompound");
	del_items(0x14bc518, DELIT_SIMPLE, 8);
	apply_type(0x14bc518, "RTTIBase[1]");
	set_name(0x14bc518, "CollisionMeshInstance::sBases");
	del_items(0x14bc520, DELIT_SIMPLE, 56);
	apply_type(0x14bc520, "RTTIAttr[2]");
	set_name(0x14bc520, "CollisionMeshInstance::sAttrs");

	// CollisionTrigger
	set_name(0x14bc4c4, "CollisionTrigger");
	apply_type(0x14bc4c4, "RTTICompound");
	del_items(0x14bc558, DELIT_SIMPLE, 8);
	apply_type(0x14bc558, "RTTIBase[1]");
	set_name(0x14bc558, "CollisionTrigger::sBases");
	del_items(0x14bc560, DELIT_SIMPLE, 168);
	apply_type(0x14bc560, "RTTIAttr[6]");
	set_name(0x14bc560, "CollisionTrigger::sAttrs");
	del_items(0x14bc608, DELIT_SIMPLE, 48);
	apply_type(0x14bc608, "RTTIFunction[2]");
	set_name(0x14bc608, "CollisionTrigger::sFunctions");

	// ColorPeg
	set_name(0x14e0ecc, "ColorPeg");
	apply_type(0x14e0ecc, "RTTICompound");
	del_items(0x14e1318, DELIT_SIMPLE, 8);
	apply_type(0x14e1318, "RTTIBase[1]");
	set_name(0x14e1318, "ColorPeg::sBases");
	del_items(0x14e1320, DELIT_SIMPLE, 56);
	apply_type(0x14e1320, "RTTIAttr[2]");
	set_name(0x14e1320, "ColorPeg::sAttrs");

	// ColorizeSettings
	set_name(0x14cbae0, "ColorizeSettings");
	apply_type(0x14cbae0, "RTTICompound");
	del_items(0x14cc3c4, DELIT_SIMPLE, 252);
	apply_type(0x14cc3c4, "RTTIAttr[9]");
	set_name(0x14cc3c4, "ColorizeSettings::sAttrs");

	// ColorizeSettingsResource
	set_name(0x14cbbfc, "ColorizeSettingsResource");
	apply_type(0x14cbbfc, "RTTICompound");
	del_items(0x14cc5d8, DELIT_SIMPLE, 8);
	apply_type(0x14cc5d8, "RTTIBase[1]");
	set_name(0x14cc5d8, "ColorizeSettingsResource::sBases");
	del_items(0x14cc5e0, DELIT_SIMPLE, 364);
	apply_type(0x14cc5e0, "RTTIAttr[13]");
	set_name(0x14cc5e0, "ColorizeSettingsResource::sAttrs");
	del_items(0x14cc74c, DELIT_SIMPLE, 12);
	apply_type(0x14cc74c, "RTTIMessageHandler[1]");
	set_name(0x14cc74c, "ColorizeSettingsResource::sMessageHandlers");

	// CommunicateEventInstance
	set_name(0x1541cf8, "CommunicateEventInstance");
	apply_type(0x1541cf8, "RTTICompound");
	del_items(0x154354c, DELIT_SIMPLE, 8);
	apply_type(0x154354c, "RTTIBase[1]");
	set_name(0x154354c, "CommunicateEventInstance::sBases");

	// CommunicateEventResource
	set_name(0x1541ca4, "CommunicateEventResource");
	apply_type(0x1541ca4, "RTTICompound");
	del_items(0x154350c, DELIT_SIMPLE, 8);
	apply_type(0x154350c, "RTTIBase[1]");
	set_name(0x154350c, "CommunicateEventResource::sBases");
	del_items(0x1543514, DELIT_SIMPLE, 56);
	apply_type(0x1543514, "RTTIAttr[2]");
	set_name(0x1543514, "CommunicateEventResource::sAttrs");

	// CommunicationComponent
	set_name(0x15508bc, "CommunicationComponent");
	apply_type(0x15508bc, "RTTICompound");
	del_items(0x1550b58, DELIT_SIMPLE, 8);
	apply_type(0x1550b58, "RTTIBase[1]");
	set_name(0x1550b58, "CommunicationComponent::sBases");

	// CommunicationComponentResource
	set_name(0x1550910, "CommunicationComponentResource");
	apply_type(0x1550910, "RTTICompound");
	del_items(0x1550b64, DELIT_SIMPLE, 8);
	apply_type(0x1550b64, "RTTIBase[1]");
	set_name(0x1550b64, "CommunicationComponentResource::sBases");
	del_items(0x1550b6c, DELIT_SIMPLE, 28);
	apply_type(0x1550b6c, "RTTIAttr[1]");
	set_name(0x1550b6c, "CommunicationComponentResource::sAttrs");

	// CommunicationEntity
	set_name(0x154fb24, "CommunicationEntity");
	apply_type(0x154fb24, "RTTICompound");
	del_items(0x154fc84, DELIT_SIMPLE, 8);
	apply_type(0x154fc84, "RTTIBase[1]");
	set_name(0x154fc84, "CommunicationEntity::sBases");
	del_items(0x154fc8c, DELIT_SIMPLE, 56);
	apply_type(0x154fc8c, "RTTIAttr[2]");
	set_name(0x154fc8c, "CommunicationEntity::sAttrs");

	// CommunicationEntityResource
	set_name(0x154fb78, "CommunicationEntityResource");
	apply_type(0x154fb78, "RTTICompound");
	del_items(0x154fc7c, DELIT_SIMPLE, 8);
	apply_type(0x154fc7c, "RTTIBase[1]");
	set_name(0x154fc7c, "CommunicationEntityResource::sBases");

	// CommunicationMessage
	set_name(0x15472d4, "CommunicationMessage");
	apply_type(0x15472d4, "RTTICompound");
	del_items(0x15479d4, DELIT_SIMPLE, 8);
	apply_type(0x15479d4, "RTTIBase[1]");
	set_name(0x15479d4, "CommunicationMessage::sBases");

	// CommunicationMessageEvent
	set_name(0x1547348, "CommunicationMessageEvent");
	apply_type(0x1547348, "RTTICompound");
	del_items(0x154778c, DELIT_SIMPLE, 8);
	apply_type(0x154778c, "RTTIBase[1]");
	set_name(0x154778c, "CommunicationMessageEvent::sBases");
	del_items(0x1547794, DELIT_SIMPLE, 84);
	apply_type(0x1547794, "RTTIAttr[3]");
	set_name(0x1547794, "CommunicationMessageEvent::sAttrs");

	// CommunicationMessageEventFacialExpression
	set_name(0x154739c, "CommunicationMessageEventFacialExpression");
	apply_type(0x154739c, "RTTICompound");
	del_items(0x15477e8, DELIT_SIMPLE, 8);
	apply_type(0x15477e8, "RTTIBase[1]");
	set_name(0x15477e8, "CommunicationMessageEventFacialExpression::sBases");
	del_items(0x15477f0, DELIT_SIMPLE, 56);
	apply_type(0x15477f0, "RTTIAttr[2]");
	set_name(0x15477f0, "CommunicationMessageEventFacialExpression::sAttrs");

	// CommunicationMessageEventFacialGesture
	set_name(0x15473f0, "CommunicationMessageEventFacialGesture");
	apply_type(0x15473f0, "RTTICompound");
	del_items(0x1547828, DELIT_SIMPLE, 8);
	apply_type(0x1547828, "RTTIBase[1]");
	set_name(0x1547828, "CommunicationMessageEventFacialGesture::sBases");
	del_items(0x1547830, DELIT_SIMPLE, 56);
	apply_type(0x1547830, "RTTIAttr[2]");
	set_name(0x1547830, "CommunicationMessageEventFacialGesture::sAttrs");

	// CommunicationMessageEventGesture
	set_name(0x1547444, "CommunicationMessageEventGesture");
	apply_type(0x1547444, "RTTICompound");
	del_items(0x1547868, DELIT_SIMPLE, 8);
	apply_type(0x1547868, "RTTIBase[1]");
	set_name(0x1547868, "CommunicationMessageEventGesture::sBases");
	del_items(0x1547870, DELIT_SIMPLE, 56);
	apply_type(0x1547870, "RTTIAttr[2]");
	set_name(0x1547870, "CommunicationMessageEventGesture::sAttrs");

	// CommunicationMessageGroup
	set_name(0x15474ec, "CommunicationMessageGroup");
	apply_type(0x15474ec, "RTTICompound");
	del_items(0x15479e4, DELIT_SIMPLE, 8);
	apply_type(0x15479e4, "RTTIBase[1]");
	set_name(0x15479e4, "CommunicationMessageGroup::sBases");

	// CommunicationMessageGroupManager
	set_name(0x1547540, "CommunicationMessageGroupManager");
	apply_type(0x1547540, "RTTICompound");
	del_items(0x1547a2c, DELIT_SIMPLE, 8);
	apply_type(0x1547a2c, "RTTIBase[1]");
	set_name(0x1547a2c, "CommunicationMessageGroupManager::sBases");

	// CommunicationMessageGroupOneShotsOrdered
	set_name(0x1547738, "CommunicationMessageGroupOneShotsOrdered");
	apply_type(0x1547738, "RTTICompound");
	del_items(0x1547aa8, DELIT_SIMPLE, 8);
	apply_type(0x1547aa8, "RTTIBase[1]");
	set_name(0x1547aa8, "CommunicationMessageGroupOneShotsOrdered::sBases");

	// CommunicationMessageGroupOneShotsOrderedResource
	set_name(0x15476e4, "CommunicationMessageGroupOneShotsOrderedResource");
	apply_type(0x15476e4, "RTTICompound");
	del_items(0x1547ab0, DELIT_SIMPLE, 8);
	apply_type(0x1547ab0, "RTTIBase[1]");
	set_name(0x1547ab0, "CommunicationMessageGroupOneShotsOrderedResource::sBases");

	// CommunicationMessageGroupOneShotsRandom
	set_name(0x1547690, "CommunicationMessageGroupOneShotsRandom");
	apply_type(0x1547690, "RTTICompound");
	del_items(0x1547a98, DELIT_SIMPLE, 8);
	apply_type(0x1547a98, "RTTIBase[1]");
	set_name(0x1547a98, "CommunicationMessageGroupOneShotsRandom::sBases");

	// CommunicationMessageGroupOneShotsRandomResource
	set_name(0x154763c, "CommunicationMessageGroupOneShotsRandomResource");
	apply_type(0x154763c, "RTTICompound");
	del_items(0x1547aa0, DELIT_SIMPLE, 8);
	apply_type(0x1547aa0, "RTTIBase[1]");
	set_name(0x1547aa0, "CommunicationMessageGroupOneShotsRandomResource::sBases");

	// CommunicationMessageGroupResource
	set_name(0x1547498, "CommunicationMessageGroupResource");
	apply_type(0x1547498, "RTTICompound");
	del_items(0x15479ec, DELIT_SIMPLE, 8);
	apply_type(0x15479ec, "RTTIBase[1]");
	set_name(0x15479ec, "CommunicationMessageGroupResource::sBases");
	del_items(0x15479f4, DELIT_SIMPLE, 56);
	apply_type(0x15479f4, "RTTIAttr[2]");
	set_name(0x15479f4, "CommunicationMessageGroupResource::sAttrs");

	// CommunicationMessageGroupSequenced
	set_name(0x15475e8, "CommunicationMessageGroupSequenced");
	apply_type(0x15475e8, "RTTICompound");
	del_items(0x1547a34, DELIT_SIMPLE, 8);
	apply_type(0x1547a34, "RTTIBase[1]");
	set_name(0x1547a34, "CommunicationMessageGroupSequenced::sBases");

	// CommunicationMessageGroupSequencedResource
	set_name(0x1547594, "CommunicationMessageGroupSequencedResource");
	apply_type(0x1547594, "RTTICompound");
	del_items(0x1547a3c, DELIT_SIMPLE, 8);
	apply_type(0x1547a3c, "RTTIBase[1]");
	set_name(0x1547a3c, "CommunicationMessageGroupSequencedResource::sBases");
	del_items(0x1547a44, DELIT_SIMPLE, 84);
	apply_type(0x1547a44, "RTTIAttr[3]");
	set_name(0x1547a44, "CommunicationMessageGroupSequencedResource::sAttrs");

	// CommunicationMessageManager
	set_name(0x1547280, "CommunicationMessageManager");
	apply_type(0x1547280, "RTTICompound");
	del_items(0x15479dc, DELIT_SIMPLE, 8);
	apply_type(0x15479dc, "RTTIBase[1]");
	set_name(0x15479dc, "CommunicationMessageManager::sBases");

	// CommunicationMessageResource
	set_name(0x154722c, "CommunicationMessageResource");
	apply_type(0x154722c, "RTTICompound");
	del_items(0x15478a8, DELIT_SIMPLE, 8);
	apply_type(0x15478a8, "RTTIBase[1]");
	set_name(0x15478a8, "CommunicationMessageResource::sBases");
	del_items(0x15478b0, DELIT_SIMPLE, 280);
	apply_type(0x15478b0, "RTTIAttr[10]");
	set_name(0x15478b0, "CommunicationMessageResource::sAttrs");
	del_items(0x15479c8, DELIT_SIMPLE, 12);
	apply_type(0x15479c8, "RTTIMessageHandler[1]");
	set_name(0x15479c8, "CommunicationMessageResource::sMessageHandlers");

	// CompareScaleTag
	set_name(0x14c08dc, "CompareScaleTag");
	apply_type(0x14c08dc, "RTTICompound");
	del_items(0x14c2d0c, DELIT_SIMPLE, 8);
	apply_type(0x14c2d0c, "RTTIBase[1]");
	set_name(0x14c2d0c, "CompareScaleTag::sBases");

	// CompareScaleWidget
	set_name(0x14c1260, "CompareScaleWidget");
	apply_type(0x14c1260, "RTTICompound");
	del_items(0x14c2f1c, DELIT_SIMPLE, 8);
	apply_type(0x14c2f1c, "RTTIBase[1]");
	set_name(0x14c2f1c, "CompareScaleWidget::sBases");

	// ComponentPerAnimationEvent
	set_name(0x150ee50, "ComponentPerAnimationEvent");
	apply_type(0x150ee50, "RTTICompound");
	del_items(0x1511fb4, DELIT_SIMPLE, 56);
	apply_type(0x1511fb4, "RTTIAttr[2]");
	set_name(0x1511fb4, "ComponentPerAnimationEvent::sAttrs");

	// CompositeAnimationInfo
	set_name(0x14d99b0, "CompositeAnimationInfo");
	apply_type(0x14d99b0, "RTTICompound");
	del_items(0x14dbc44, DELIT_SIMPLE, 224);
	apply_type(0x14dbc44, "RTTIAttr[8]");
	set_name(0x14dbc44, "CompositeAnimationInfo::sAttrs");

	// CompositeSkeletonAnimationResource
	set_name(0x14d9a04, "CompositeSkeletonAnimationResource");
	apply_type(0x14d9a04, "RTTICompound");
	del_items(0x14dbd24, DELIT_SIMPLE, 8);
	apply_type(0x14dbd24, "RTTIBase[1]");
	set_name(0x14dbd24, "CompositeSkeletonAnimationResource::sBases");
	del_items(0x14dbd2c, DELIT_SIMPLE, 84);
	apply_type(0x14dbd2c, "RTTIAttr[3]");
	set_name(0x14dbd2c, "CompositeSkeletonAnimationResource::sAttrs");

	// CompoundStatResource
	set_name(0x153ea00, "CompoundStatResource");
	apply_type(0x153ea00, "RTTICompound");
	del_items(0x15407b0, DELIT_SIMPLE, 84);
	apply_type(0x15407b0, "RTTIAttr[3]");
	set_name(0x15407b0, "CompoundStatResource::sAttrs");

	// Compressed16Vector3
	set_name(0x14b7a7c, "Compressed16Vector3");
	apply_type(0x14b7a7c, "RTTICompound");
	del_items(0x14b82a4, DELIT_SIMPLE, 84);
	apply_type(0x14b82a4, "RTTIAttr[3]");
	set_name(0x14b82a4, "Compressed16Vector3::sAttrs");

	// CompressedPathElement
	set_name(0x14ba83c, "CompressedPathElement");
	apply_type(0x14ba83c, "RTTICompound");
	del_items(0x14bbdb4, DELIT_SIMPLE, 112);
	apply_type(0x14bbdb4, "RTTIAttr[4]");
	set_name(0x14bbdb4, "CompressedPathElement::sAttrs");

	// CompressedSHVector4x9
	set_name(0x14c8a74, "CompressedSHVector4x9");
	apply_type(0x14c8a74, "RTTICompound");
	del_items(0x14c9920, DELIT_SIMPLE, 252);
	apply_type(0x14c9920, "RTTIAttr[9]");
	set_name(0x14c9920, "CompressedSHVector4x9::sAttrs");

	// CompressedUnitVector3B
	set_name(0x14da8e4, "CompressedUnitVector3B");
	apply_type(0x14da8e4, "RTTICompound");
	del_items(0x14daf74, DELIT_SIMPLE, 84);
	apply_type(0x14daf74, "RTTIAttr[3]");
	set_name(0x14daf74, "CompressedUnitVector3B::sAttrs");

	// ConcreteAsset
	set_name(0x14bc228, "ConcreteAsset");
	apply_type(0x14bc228, "RTTICompound");
	del_items(0x14bc348, DELIT_SIMPLE, 8);
	apply_type(0x14bc348, "RTTIBase[1]");
	set_name(0x14bc348, "ConcreteAsset::sBases");
	del_items(0x14bc350, DELIT_SIMPLE, 112);
	apply_type(0x14bc350, "RTTIAttr[4]");
	set_name(0x14bc350, "ConcreteAsset::sAttrs");

	// ConditionalAction
	set_name(0x14e27b4, "ConditionalAction");
	apply_type(0x14e27b4, "RTTICompound");
	del_items(0x14e5f14, DELIT_SIMPLE, 8);
	apply_type(0x14e5f14, "RTTIBase[1]");
	set_name(0x14e5f14, "ConditionalAction::sBases");
	del_items(0x14e5f1c, DELIT_SIMPLE, 84);
	apply_type(0x14e5f1c, "RTTIAttr[3]");
	set_name(0x14e5f1c, "ConditionalAction::sAttrs");

	// ContentWidget
	set_name(0x14c0d20, "ContentWidget");
	apply_type(0x14c0d20, "RTTICompound");
	del_items(0x14c3004, DELIT_SIMPLE, 8);
	apply_type(0x14c3004, "RTTIBase[1]");
	set_name(0x14c3004, "ContentWidget::sBases");

	// ContinuousAmmoEjector
	set_name(0x1524334, "ContinuousAmmoEjector");
	apply_type(0x1524334, "RTTICompound");
	del_items(0x15254b8, DELIT_SIMPLE, 8);
	apply_type(0x15254b8, "RTTIBase[1]");
	set_name(0x15254b8, "ContinuousAmmoEjector::sBases");

	// ContinuousAmmoEjectorRep
	set_name(0x1524388, "ContinuousAmmoEjectorRep");
	apply_type(0x1524388, "RTTICompound");
	del_items(0x1525508, DELIT_SIMPLE, 8);
	apply_type(0x1525508, "RTTIBase[1]");
	set_name(0x1525508, "ContinuousAmmoEjectorRep::sBases");

	// ContinuousAmmoEjectorResource
	set_name(0x15243dc, "ContinuousAmmoEjectorResource");
	apply_type(0x15243dc, "RTTICompound");
	del_items(0x15254c4, DELIT_SIMPLE, 8);
	apply_type(0x15254c4, "RTTIBase[1]");
	set_name(0x15254c4, "ContinuousAmmoEjectorResource::sBases");
	del_items(0x15254cc, DELIT_SIMPLE, 56);
	apply_type(0x15254cc, "RTTIAttr[2]");
	set_name(0x15254cc, "ContinuousAmmoEjectorResource::sAttrs");

	// ControlledEntity
	set_name(0x1502b98, "ControlledEntity");
	apply_type(0x1502b98, "RTTICompound");
	del_items(0x150334c, DELIT_SIMPLE, 8);
	apply_type(0x150334c, "RTTIBase[1]");
	set_name(0x150334c, "ControlledEntity::sBases");
	del_items(0x1503354, DELIT_SIMPLE, 140);
	apply_type(0x1503354, "RTTIAttr[5]");
	set_name(0x1503354, "ControlledEntity::sAttrs");
	del_items(0x15033e0, DELIT_SIMPLE, 2688);
	apply_type(0x15033e0, "RTTIFunction[112]");
	set_name(0x15033e0, "ControlledEntity::sFunctions");
	del_items(0x1503e60, DELIT_SIMPLE, 12);
	apply_type(0x1503e60, "RTTIMessageHandler[1]");
	set_name(0x1503e60, "ControlledEntity::sMessageHandlers");

	// ControlledEntityActorInstance
	set_name(0x1520088, "ControlledEntityActorInstance");
	apply_type(0x1520088, "RTTICompound");
	del_items(0x15214f8, DELIT_SIMPLE, 8);
	apply_type(0x15214f8, "RTTIBase[1]");
	set_name(0x15214f8, "ControlledEntityActorInstance::sBases");

	// ControlledEntityActorResource
	set_name(0x1520034, "ControlledEntityActorResource");
	apply_type(0x1520034, "RTTICompound");
	del_items(0x1521480, DELIT_SIMPLE, 8);
	apply_type(0x1521480, "RTTIBase[1]");
	set_name(0x1521480, "ControlledEntityActorResource::sBases");
	del_items(0x1521488, DELIT_SIMPLE, 112);
	apply_type(0x1521488, "RTTIAttr[4]");
	set_name(0x1521488, "ControlledEntityActorResource::sAttrs");

	// ControlledEntityRep
	set_name(0x1502bec, "ControlledEntityRep");
	apply_type(0x1502bec, "RTTICompound");
	del_items(0x1504920, DELIT_SIMPLE, 8);
	apply_type(0x1504920, "RTTIBase[1]");
	set_name(0x1504920, "ControlledEntityRep::sBases");

	// ControlledEntityResource
	set_name(0x1502c40, "ControlledEntityResource");
	apply_type(0x1502c40, "RTTICompound");
	del_items(0x1502f04, DELIT_SIMPLE, 8);
	apply_type(0x1502f04, "RTTIBase[1]");
	set_name(0x1502f04, "ControlledEntityResource::sBases");
	del_items(0x1502f0c, DELIT_SIMPLE, 1064);
	apply_type(0x1502f0c, "RTTIAttr[38]");
	set_name(0x1502f0c, "ControlledEntityResource::sAttrs");
	del_items(0x1503334, DELIT_SIMPLE, 24);
	apply_type(0x1503334, "RTTIMessageHandler[2]");
	set_name(0x1503334, "ControlledEntityResource::sMessageHandlers");

	// ControlledFollowCameraEntity
	set_name(0x15010c4, "ControlledFollowCameraEntity");
	apply_type(0x15010c4, "RTTICompound");
	del_items(0x1501ed0, DELIT_SIMPLE, 8);
	apply_type(0x1501ed0, "RTTIBase[1]");
	set_name(0x1501ed0, "ControlledFollowCameraEntity::sBases");

	// ControlledFollowCameraEntityResource
	set_name(0x1501118, "ControlledFollowCameraEntityResource");
	apply_type(0x1501118, "RTTICompound");
	del_items(0x1501cb4, DELIT_SIMPLE, 8);
	apply_type(0x1501cb4, "RTTIBase[1]");
	set_name(0x1501cb4, "ControlledFollowCameraEntityResource::sBases");
	del_items(0x1501cbc, DELIT_SIMPLE, 532);
	apply_type(0x1501cbc, "RTTIAttr[19]");
	set_name(0x1501cbc, "ControlledFollowCameraEntityResource::sAttrs");

	// ControlledSoundInstance
	set_name(0x14dcc24, "ControlledSoundInstance");
	apply_type(0x14dcc24, "RTTICompound");
	del_items(0x14df704, DELIT_SIMPLE, 8);
	apply_type(0x14df704, "RTTIBase[1]");
	set_name(0x14df704, "ControlledSoundInstance::sBases");
	del_items(0x14df70c, DELIT_SIMPLE, 12);
	apply_type(0x14df70c, "RTTIMessageHandler[1]");
	set_name(0x14df70c, "ControlledSoundInstance::sMessageHandlers");

	// ControlledSoundResource
	set_name(0x14dcb80, "ControlledSoundResource");
	apply_type(0x14dcb80, "RTTICompound");
	del_items(0x14df6a0, DELIT_SIMPLE, 8);
	apply_type(0x14df6a0, "RTTIBase[1]");
	set_name(0x14df6a0, "ControlledSoundResource::sBases");
	del_items(0x14df6a8, DELIT_SIMPLE, 56);
	apply_type(0x14df6a8, "RTTIAttr[2]");
	set_name(0x14df6a8, "ControlledSoundResource::sAttrs");
	del_items(0x14df6e0, DELIT_SIMPLE, 36);
	apply_type(0x14df6e0, "RTTIMessageHandler[3]");
	set_name(0x14df6e0, "ControlledSoundResource::sMessageHandlers");

	// ControlledVehicle
	set_name(0x150b288, "ControlledVehicle");
	apply_type(0x150b288, "RTTICompound");
	del_items(0x150cca0, DELIT_SIMPLE, 8);
	apply_type(0x150cca0, "RTTIBase[1]");
	set_name(0x150cca0, "ControlledVehicle::sBases");
	del_items(0x150cca8, DELIT_SIMPLE, 96);
	apply_type(0x150cca8, "RTTIFunction[4]");
	set_name(0x150cca8, "ControlledVehicle::sFunctions");

	// ControlledVehicleAIController
	set_name(0x150b330, "ControlledVehicleAIController");
	apply_type(0x150b330, "RTTICompound");
	del_items(0x150cd18, DELIT_SIMPLE, 8);
	apply_type(0x150cd18, "RTTIBase[1]");
	set_name(0x150cd18, "ControlledVehicleAIController::sBases");

	// ControlledVehicleController
	set_name(0x150b2dc, "ControlledVehicleController");
	apply_type(0x150b2dc, "RTTICompound");
	del_items(0x150cd10, DELIT_SIMPLE, 8);
	apply_type(0x150cd10, "RTTIBase[1]");
	set_name(0x150cd10, "ControlledVehicleController::sBases");

	// ControlledVehicleRep
	set_name(0x150b384, "ControlledVehicleRep");
	apply_type(0x150b384, "RTTICompound");
	del_items(0x150cd08, DELIT_SIMPLE, 8);
	apply_type(0x150cd08, "RTTIBase[1]");
	set_name(0x150cd08, "ControlledVehicleRep::sBases");

	// ControlledVehicleResource
	set_name(0x150b3d8, "ControlledVehicleResource");
	apply_type(0x150b3d8, "RTTICompound");
	del_items(0x150bef8, DELIT_SIMPLE, 8);
	apply_type(0x150bef8, "RTTIBase[1]");
	set_name(0x150bef8, "ControlledVehicleResource::sBases");
	del_items(0x150bf00, DELIT_SIMPLE, 1036);
	apply_type(0x150bf00, "RTTIAttr[37]");
	set_name(0x150bf00, "ControlledVehicleResource::sAttrs");
	del_items(0x150c30c, DELIT_SIMPLE, 12);
	apply_type(0x150c30c, "RTTIMessageHandler[1]");
	set_name(0x150c30c, "ControlledVehicleResource::sMessageHandlers");

	// Controller
	set_name(0x1502cc4, "Controller");
	apply_type(0x1502cc4, "RTTICompound");
	del_items(0x1502ee8, DELIT_SIMPLE, 16);
	apply_type(0x1502ee8, "RTTIBase[2]");
	set_name(0x1502ee8, "Controller::sBases");

	// ControllerConfigResource
	set_name(0x14eacf0, "ControllerConfigResource");
	apply_type(0x14eacf0, "RTTICompound");
	del_items(0x14ed978, DELIT_SIMPLE, 8);
	apply_type(0x14ed978, "RTTIBase[1]");
	set_name(0x14ed978, "ControllerConfigResource::sBases");
	del_items(0x14ed980, DELIT_SIMPLE, 392);
	apply_type(0x14ed980, "RTTIAttr[14]");
	set_name(0x14ed980, "ControllerConfigResource::sAttrs");

	// ControllerLegend
	set_name(0x14eac9c, "ControllerLegend");
	apply_type(0x14eac9c, "RTTICompound");
	del_items(0x14ed924, DELIT_SIMPLE, 84);
	apply_type(0x14ed924, "RTTIAttr[3]");
	set_name(0x14ed924, "ControllerLegend::sAttrs");

	// ConvexHull
	set_name(0x14adb9c, "ConvexHull");
	apply_type(0x14adb9c, "RTTICompound");
	del_items(0x14adf7c, DELIT_SIMPLE, 56);
	apply_type(0x14adf7c, "RTTIAttr[2]");
	set_name(0x14adf7c, "ConvexHull::sAttrs");

	// ConvexHullTriangle
	set_name(0x14adb48, "ConvexHullTriangle");
	apply_type(0x14adb48, "RTTICompound");
	del_items(0x14adf0c, DELIT_SIMPLE, 112);
	apply_type(0x14adf0c, "RTTIAttr[4]");
	set_name(0x14adf0c, "ConvexHullTriangle::sAttrs");

	// CoreObject
	set_name(0x14bc6e4, "CoreObject");
	apply_type(0x14bc6e4, "RTTICompound");
	del_items(0x14bcb70, DELIT_SIMPLE, 8);
	apply_type(0x14bcb70, "RTTIBase[1]");
	set_name(0x14bcb70, "CoreObject::sBases");
	del_items(0x14bcb78, DELIT_SIMPLE, 24);
	apply_type(0x14bcb78, "RTTIFunction[1]");
	set_name(0x14bcb78, "CoreObject::sFunctions");

	// CoreScript
	set_name(0x14ce3b0, "CoreScript");
	apply_type(0x14ce3b0, "RTTICompound");
	del_items(0x14ce5c4, DELIT_SIMPLE, 8);
	apply_type(0x14ce5c4, "RTTIBase[1]");
	set_name(0x14ce5c4, "CoreScript::sBases");
	del_items(0x14ce5cc, DELIT_SIMPLE, 84);
	apply_type(0x14ce5cc, "RTTIAttr[3]");
	set_name(0x14ce5cc, "CoreScript::sAttrs");
	del_items(0x14ce620, DELIT_SIMPLE, 24);
	apply_type(0x14ce620, "RTTIMessageHandler[2]");
	set_name(0x14ce620, "CoreScript::sMessageHandlers");

	// CoronaInstance
	set_name(0x14bcdbc, "CoronaInstance");
	apply_type(0x14bcdbc, "RTTICompound");
	del_items(0x14bd9d4, DELIT_SIMPLE, 8);
	apply_type(0x14bd9d4, "RTTIBase[1]");
	set_name(0x14bd9d4, "CoronaInstance::sBases");
	del_items(0x14bd9dc, DELIT_SIMPLE, 56);
	apply_type(0x14bd9dc, "RTTIAttr[2]");
	set_name(0x14bd9dc, "CoronaInstance::sAttrs");
	del_items(0x14bda14, DELIT_SIMPLE, 24);
	apply_type(0x14bda14, "RTTIMessageHandler[2]");
	set_name(0x14bda14, "CoronaInstance::sMessageHandlers");

	// CoronaManager
	set_name(0x14bcd68, "CoronaManager");
	apply_type(0x14bcd68, "RTTICompound");
	del_items(0x14bda88, DELIT_SIMPLE, 8);
	apply_type(0x14bda88, "RTTIBase[1]");
	set_name(0x14bda88, "CoronaManager::sBases");

	// CoronaResource
	set_name(0x14bce20, "CoronaResource");
	apply_type(0x14bce20, "RTTICompound");
	del_items(0x14bd6e8, DELIT_SIMPLE, 8);
	apply_type(0x14bd6e8, "RTTIBase[1]");
	set_name(0x14bd6e8, "CoronaResource::sBases");
	del_items(0x14bd6f0, DELIT_SIMPLE, 728);
	apply_type(0x14bd6f0, "RTTIAttr[26]");
	set_name(0x14bd6f0, "CoronaResource::sAttrs");
	del_items(0x14bd9c8, DELIT_SIMPLE, 12);
	apply_type(0x14bd9c8, "RTTIMessageHandler[1]");
	set_name(0x14bd9c8, "CoronaResource::sMessageHandlers");

	// CoverCompressionDepthTable
	set_name(0x14d7294, "CoverCompressionDepthTable");
	apply_type(0x14d7294, "RTTICompound");
	del_items(0x14d8db8, DELIT_SIMPLE, 28);
	apply_type(0x14d8db8, "RTTIAttr[1]");
	set_name(0x14d8db8, "CoverCompressionDepthTable::sAttrs");

	// CoverConnection
	set_name(0x14f0144, "CoverConnection");
	apply_type(0x14f0144, "RTTICompound");
	del_items(0x14f33b4, DELIT_SIMPLE, 112);
	apply_type(0x14f33b4, "RTTIAttr[4]");
	set_name(0x14f33b4, "CoverConnection::sAttrs");

	// CoverGraphResource
	set_name(0x14f00d0, "CoverGraphResource");
	apply_type(0x14f00d0, "RTTICompound");
	del_items(0x14f3bbc, DELIT_SIMPLE, 8);
	apply_type(0x14f3bbc, "RTTIBase[1]");
	set_name(0x14f3bbc, "CoverGraphResource::sBases");
	del_items(0x14f3bc4, DELIT_SIMPLE, 420);
	apply_type(0x14f3bc4, "RTTIAttr[15]");
	set_name(0x14f3bc4, "CoverGraphResource::sAttrs");

	// CoverResource
	set_name(0x14f01fc, "CoverResource");
	apply_type(0x14f01fc, "RTTICompound");
	del_items(0x14f3494, DELIT_SIMPLE, 8);
	apply_type(0x14f3494, "RTTIBase[1]");
	set_name(0x14f3494, "CoverResource::sBases");
	del_items(0x14f349c, DELIT_SIMPLE, 84);
	apply_type(0x14f349c, "RTTIAttr[3]");
	set_name(0x14f349c, "CoverResource::sAttrs");

	// CoverWall
	set_name(0x14f01a8, "CoverWall");
	apply_type(0x14f01a8, "RTTICompound");
	del_items(0x14f3424, DELIT_SIMPLE, 112);
	apply_type(0x14f3424, "RTTIAttr[4]");
	set_name(0x14f3424, "CoverWall::sAttrs");

	// CrashAction
	set_name(0x14f98ac, "CrashAction");
	apply_type(0x14f98ac, "RTTICompound");
	del_items(0x14fe448, DELIT_SIMPLE, 8);
	apply_type(0x14fe448, "RTTIBase[1]");
	set_name(0x14fe448, "CrashAction::sBases");
	del_items(0x14fe450, DELIT_SIMPLE, 56);
	apply_type(0x14fe450, "RTTIAttr[2]");
	set_name(0x14fe450, "CrashAction::sAttrs");

	// CrashComponent
	set_name(0x150ff34, "CrashComponent");
	apply_type(0x150ff34, "RTTICompound");
	del_items(0x1512610, DELIT_SIMPLE, 8);
	apply_type(0x1512610, "RTTIBase[1]");
	set_name(0x1512610, "CrashComponent::sBases");
	del_items(0x1512618, DELIT_SIMPLE, 120);
	apply_type(0x1512618, "RTTIFunction[5]");
	set_name(0x1512618, "CrashComponent::sFunctions");

	// CrashComponentResource
	set_name(0x150ff88, "CrashComponentResource");
	apply_type(0x150ff88, "RTTICompound");
	del_items(0x1512694, DELIT_SIMPLE, 8);
	apply_type(0x1512694, "RTTIBase[1]");
	set_name(0x1512694, "CrashComponentResource::sBases");

	// CrashMover
	set_name(0x14fbbd0, "CrashMover");
	apply_type(0x14fbbd0, "RTTICompound");
	del_items(0x1500070, DELIT_SIMPLE, 8);
	apply_type(0x1500070, "RTTIBase[1]");
	set_name(0x1500070, "CrashMover::sBases");

	// CrashMoverResource
	set_name(0x14fbc44, "CrashMoverResource");
	apply_type(0x14fbc44, "RTTICompound");
	del_items(0x14fe490, DELIT_SIMPLE, 8);
	apply_type(0x14fe490, "RTTIBase[1]");
	set_name(0x14fe490, "CrashMoverResource::sBases");
	del_items(0x14fe498, DELIT_SIMPLE, 448);
	apply_type(0x14fe498, "RTTIAttr[16]");
	set_name(0x14fe498, "CrashMoverResource::sAttrs");

	// CreateComponentAction
	set_name(0x14f8ed4, "CreateComponentAction");
	apply_type(0x14f8ed4, "RTTICompound");
	del_items(0x14fd79c, DELIT_SIMPLE, 8);
	apply_type(0x14fd79c, "RTTIBase[1]");
	set_name(0x14fd79c, "CreateComponentAction::sBases");
	del_items(0x14fd7a4, DELIT_SIMPLE, 84);
	apply_type(0x14fd7a4, "RTTIAttr[3]");
	set_name(0x14fd7a4, "CreateComponentAction::sAttrs");

	// CreateControlledEntityActorInstance
	set_name(0x1520130, "CreateControlledEntityActorInstance");
	apply_type(0x1520130, "RTTICompound");
	del_items(0x15216b4, DELIT_SIMPLE, 8);
	apply_type(0x15216b4, "RTTIBase[1]");
	set_name(0x15216b4, "CreateControlledEntityActorInstance::sBases");

	// CreateControlledEntityActorResource
	set_name(0x15200dc, "CreateControlledEntityActorResource");
	apply_type(0x15200dc, "RTTICompound");
	del_items(0x152163c, DELIT_SIMPLE, 8);
	apply_type(0x152163c, "RTTIBase[1]");
	set_name(0x152163c, "CreateControlledEntityActorResource::sBases");
	del_items(0x1521644, DELIT_SIMPLE, 112);
	apply_type(0x1521644, "RTTIAttr[4]");
	set_name(0x1521644, "CreateControlledEntityActorResource::sAttrs");

	// CreateDangerAreaAction
	set_name(0x14f96b4, "CreateDangerAreaAction");
	apply_type(0x14f96b4, "RTTICompound");
	del_items(0x14fe274, DELIT_SIMPLE, 8);
	apply_type(0x14fe274, "RTTIBase[1]");
	set_name(0x14fe274, "CreateDangerAreaAction::sBases");
	del_items(0x14fe27c, DELIT_SIMPLE, 140);
	apply_type(0x14fe27c, "RTTIAttr[5]");
	set_name(0x14fe27c, "CreateDangerAreaAction::sAttrs");

	// CreateEffectComponentAction
	set_name(0x14f8f7c, "CreateEffectComponentAction");
	apply_type(0x14f8f7c, "RTTICompound");
	del_items(0x14fd838, DELIT_SIMPLE, 8);
	apply_type(0x14fd838, "RTTIBase[1]");
	set_name(0x14fd838, "CreateEffectComponentAction::sBases");
	del_items(0x14fd840, DELIT_SIMPLE, 224);
	apply_type(0x14fd840, "RTTIAttr[8]");
	set_name(0x14fd840, "CreateEffectComponentAction::sAttrs");

	// CreateElectricityAction
	set_name(0x14f9954, "CreateElectricityAction");
	apply_type(0x14f9954, "RTTICompound");
	del_items(0x14fe658, DELIT_SIMPLE, 8);
	apply_type(0x14fe658, "RTTIBase[1]");
	set_name(0x14fe658, "CreateElectricityAction::sBases");
	del_items(0x14fe660, DELIT_SIMPLE, 84);
	apply_type(0x14fe660, "RTTIAttr[3]");
	set_name(0x14fe660, "CreateElectricityAction::sAttrs");

	// CreateEntityAction
	set_name(0x14f8e80, "CreateEntityAction");
	apply_type(0x14f8e80, "RTTICompound");
	del_items(0x14fd920, DELIT_SIMPLE, 8);
	apply_type(0x14fd920, "RTTIBase[1]");
	set_name(0x14fd920, "CreateEntityAction::sBases");
	del_items(0x14fd928, DELIT_SIMPLE, 392);
	apply_type(0x14fd928, "RTTIAttr[14]");
	set_name(0x14fd928, "CreateEntityAction::sAttrs");

	// CreateEntityActorInstance
	set_name(0x15201d8, "CreateEntityActorInstance");
	apply_type(0x15201d8, "RTTICompound");
	del_items(0x1521788, DELIT_SIMPLE, 8);
	apply_type(0x1521788, "RTTIBase[1]");
	set_name(0x1521788, "CreateEntityActorInstance::sBases");

	// CreateEntityActorResource
	set_name(0x1520184, "CreateEntityActorResource");
	apply_type(0x1520184, "RTTICompound");
	del_items(0x15216bc, DELIT_SIMPLE, 8);
	apply_type(0x15216bc, "RTTIBase[1]");
	set_name(0x15216bc, "CreateEntityActorResource::sBases");
	del_items(0x15216c4, DELIT_SIMPLE, 196);
	apply_type(0x15216c4, "RTTIAttr[7]");
	set_name(0x15216c4, "CreateEntityActorResource::sAttrs");

	// CreateExplosionAction
	set_name(0x14f8fd0, "CreateExplosionAction");
	apply_type(0x14f8fd0, "RTTICompound");
	del_items(0x14fdab0, DELIT_SIMPLE, 8);
	apply_type(0x14fdab0, "RTTIBase[1]");
	set_name(0x14fdab0, "CreateExplosionAction::sBases");
	del_items(0x14fdab8, DELIT_SIMPLE, 84);
	apply_type(0x14fdab8, "RTTIAttr[3]");
	set_name(0x14fdab8, "CreateExplosionAction::sAttrs");

	// Critter
	set_name(0x1507eb0, "Critter");
	apply_type(0x1507eb0, "RTTICompound");
	del_items(0x1509af4, DELIT_SIMPLE, 8);
	apply_type(0x1509af4, "RTTIBase[1]");
	set_name(0x1509af4, "Critter::sBases");
	del_items(0x1509afc, DELIT_SIMPLE, 48);
	apply_type(0x1509afc, "RTTIFunction[2]");
	set_name(0x1509afc, "Critter::sFunctions");

	// CritterAiController
	set_name(0x1507f04, "CritterAiController");
	apply_type(0x1507f04, "RTTICompound");
	del_items(0x1509b2c, DELIT_SIMPLE, 8);
	apply_type(0x1509b2c, "RTTIBase[1]");
	set_name(0x1509b2c, "CritterAiController::sBases");

	// CritterController
	set_name(0x1507f58, "CritterController");
	apply_type(0x1507f58, "RTTICompound");
	del_items(0x1509538, DELIT_SIMPLE, 8);
	apply_type(0x1509538, "RTTIBase[1]");
	set_name(0x1509538, "CritterController::sBases");

	// CritterMover
	set_name(0x152ac08, "CritterMover");
	apply_type(0x152ac08, "RTTICompound");
	del_items(0x152b744, DELIT_SIMPLE, 8);
	apply_type(0x152b744, "RTTIBase[1]");
	set_name(0x152b744, "CritterMover::sBases");

	// CritterMoverResource
	set_name(0x152ac5c, "CritterMoverResource");
	apply_type(0x152ac5c, "RTTICompound");
	del_items(0x152b74c, DELIT_SIMPLE, 8);
	apply_type(0x152b74c, "RTTIBase[1]");
	set_name(0x152b74c, "CritterMoverResource::sBases");

	// CritterRep
	set_name(0x1507fac, "CritterRep");
	apply_type(0x1507fac, "RTTICompound");
	del_items(0x1509b34, DELIT_SIMPLE, 8);
	apply_type(0x1509b34, "RTTIBase[1]");
	set_name(0x1509b34, "CritterRep::sBases");

	// CritterResource
	set_name(0x1508000, "CritterResource");
	apply_type(0x1508000, "RTTICompound");
	del_items(0x150954c, DELIT_SIMPLE, 8);
	apply_type(0x150954c, "RTTIBase[1]");
	set_name(0x150954c, "CritterResource::sBases");
	del_items(0x1509554, DELIT_SIMPLE, 1428);
	apply_type(0x1509554, "RTTIAttr[51]");
	set_name(0x1509554, "CritterResource::sAttrs");
	del_items(0x1509ae8, DELIT_SIMPLE, 12);
	apply_type(0x1509ae8, "RTTIMessageHandler[1]");
	set_name(0x1509ae8, "CritterResource::sMessageHandlers");

	// CrosshairWidget
	set_name(0x14c0d74, "CrosshairWidget");
	apply_type(0x14c0d74, "RTTICompound");
	del_items(0x14c2ff4, DELIT_SIMPLE, 8);
	apply_type(0x14c2ff4, "RTTIBase[1]");
	set_name(0x14c2ff4, "CrosshairWidget::sBases");

	// CrosshairWidgetResource
	set_name(0x14c1718, "CrosshairWidgetResource");
	apply_type(0x14c1718, "RTTICompound");
	del_items(0x14c300c, DELIT_SIMPLE, 8);
	apply_type(0x14c300c, "RTTIBase[1]");
	set_name(0x14c300c, "CrosshairWidgetResource::sBases");
	del_items(0x14c3014, DELIT_SIMPLE, 84);
	apply_type(0x14c3014, "RTTIAttr[3]");
	set_name(0x14c3014, "CrosshairWidgetResource::sAttrs");

	// CursorWidget
	set_name(0x14c0dc8, "CursorWidget");
	apply_type(0x14c0dc8, "RTTICompound");
	del_items(0x14c2fec, DELIT_SIMPLE, 8);
	apply_type(0x14c2fec, "RTTIBase[1]");
	set_name(0x14c2fec, "CursorWidget::sBases");

	// CursorWidgetResource
	set_name(0x14c16c4, "CursorWidgetResource");
	apply_type(0x14c16c4, "RTTICompound");
	del_items(0x14c3068, DELIT_SIMPLE, 8);
	apply_type(0x14c3068, "RTTIBase[1]");
	set_name(0x14c3068, "CursorWidgetResource::sBases");
	del_items(0x14c3070, DELIT_SIMPLE, 308);
	apply_type(0x14c3070, "RTTIAttr[11]");
	set_name(0x14c3070, "CursorWidgetResource::sAttrs");

	// CurveResource
	set_name(0x14e0e14, "CurveResource");
	apply_type(0x14e0e14, "RTTICompound");
	del_items(0x14e11dc, DELIT_SIMPLE, 8);
	apply_type(0x14e11dc, "RTTIBase[1]");
	set_name(0x14e11dc, "CurveResource::sBases");
	del_items(0x14e11e4, DELIT_SIMPLE, 168);
	apply_type(0x14e11e4, "RTTIAttr[6]");
	set_name(0x14e11e4, "CurveResource::sAttrs");
	del_items(0x14e128c, DELIT_SIMPLE, 12);
	apply_type(0x14e128c, "RTTIMessageHandler[1]");
	set_name(0x14e128c, "CurveResource::sMessageHandlers");

	// CycleSkeletonAnimationResource
	set_name(0x14d9608, "CycleSkeletonAnimationResource");
	apply_type(0x14d9608, "RTTICompound");
	del_items(0x14dbe5c, DELIT_SIMPLE, 8);
	apply_type(0x14dbe5c, "RTTIBase[1]");
	set_name(0x14dbe5c, "CycleSkeletonAnimationResource::sBases");
	del_items(0x14dbe64, DELIT_SIMPLE, 168);
	apply_type(0x14dbe64, "RTTIAttr[6]");
	set_name(0x14dbe64, "CycleSkeletonAnimationResource::sAttrs");

	// DLCProductResource
	set_name(0x14efac4, "DLCProductResource");
	apply_type(0x14efac4, "RTTICompound");
	del_items(0x14f3070, DELIT_SIMPLE, 8);
	apply_type(0x14f3070, "RTTIBase[1]");
	set_name(0x14f3070, "DLCProductResource::sBases");
	del_items(0x14f3078, DELIT_SIMPLE, 56);
	apply_type(0x14f3078, "RTTIAttr[2]");
	set_name(0x14f3078, "DLCProductResource::sAttrs");

	// DLCResource
	set_name(0x14efa70, "DLCResource");
	apply_type(0x14efa70, "RTTICompound");
	del_items(0x14f2fec, DELIT_SIMPLE, 8);
	apply_type(0x14f2fec, "RTTIBase[1]");
	set_name(0x14f2fec, "DLCResource::sBases");
	del_items(0x14f2ff4, DELIT_SIMPLE, 112);
	apply_type(0x14f2ff4, "RTTIAttr[4]");
	set_name(0x14f2ff4, "DLCResource::sAttrs");
	del_items(0x14f3064, DELIT_SIMPLE, 12);
	apply_type(0x14f3064, "RTTIMessageHandler[1]");
	set_name(0x14f3064, "DLCResource::sMessageHandlers");

	// DRange
	set_name(0x14ab4cc, "DRange");
	apply_type(0x14ab4cc, "RTTICompound");
	del_items(0x14ab9c0, DELIT_SIMPLE, 56);
	apply_type(0x14ab9c0, "RTTIAttr[2]");
	set_name(0x14ab9c0, "DRange::sAttrs");

	// DamageActorEventInstance
	set_name(0x1519b8c, "DamageActorEventInstance");
	apply_type(0x1519b8c, "RTTICompound");
	del_items(0x151bc40, DELIT_SIMPLE, 8);
	apply_type(0x151bc40, "RTTIBase[1]");
	set_name(0x151bc40, "DamageActorEventInstance::sBases");

	// DamageActorEventResource
	set_name(0x1519b38, "DamageActorEventResource");
	apply_type(0x1519b38, "RTTICompound");
	del_items(0x151bb58, DELIT_SIMPLE, 8);
	apply_type(0x151bb58, "RTTIBase[1]");
	set_name(0x151bb58, "DamageActorEventResource::sBases");
	del_items(0x151bb60, DELIT_SIMPLE, 224);
	apply_type(0x151bb60, "RTTIAttr[8]");
	set_name(0x151bb60, "DamageActorEventResource::sAttrs");

	// DamageArea
	set_name(0x14f9ba0, "DamageArea");
	apply_type(0x14f9ba0, "RTTICompound");
	del_items(0x14fea68, DELIT_SIMPLE, 8);
	apply_type(0x14fea68, "RTTIBase[1]");
	set_name(0x14fea68, "DamageArea::sBases");
	del_items(0x14fea70, DELIT_SIMPLE, 280);
	apply_type(0x14fea70, "RTTIAttr[10]");
	set_name(0x14fea70, "DamageArea::sAttrs");
	del_items(0x14feb88, DELIT_SIMPLE, 12);
	apply_type(0x14feb88, "RTTIMessageHandler[1]");
	set_name(0x14feb88, "DamageArea::sMessageHandlers");

	// DamageAreaRep
	set_name(0x14f9bf4, "DamageAreaRep");
	apply_type(0x14f9bf4, "RTTICompound");
	del_items(0x14feb94, DELIT_SIMPLE, 8);
	apply_type(0x14feb94, "RTTIBase[1]");
	set_name(0x14feb94, "DamageAreaRep::sBases");

	// DamageAreaResource
	set_name(0x14f9c58, "DamageAreaResource");
	apply_type(0x14f9c58, "RTTICompound");
	del_items(0x14fe814, DELIT_SIMPLE, 8);
	apply_type(0x14fe814, "RTTIBase[1]");
	set_name(0x14fe814, "DamageAreaResource::sBases");
	del_items(0x14fe81c, DELIT_SIMPLE, 588);
	apply_type(0x14fe81c, "RTTIAttr[21]");
	set_name(0x14fe81c, "DamageAreaResource::sAttrs");

	// DamageChildAction
	set_name(0x14f9174, "DamageChildAction");
	apply_type(0x14f9174, "RTTICompound");
	del_items(0x14fdc60, DELIT_SIMPLE, 8);
	apply_type(0x14fdc60, "RTTIBase[1]");
	set_name(0x14fdc60, "DamageChildAction::sBases");
	del_items(0x14fdc68, DELIT_SIMPLE, 168);
	apply_type(0x14fdc68, "RTTIAttr[6]");
	set_name(0x14fdc68, "DamageChildAction::sAttrs");

	// DamageComponent
	set_name(0x150f704, "DamageComponent");
	apply_type(0x150f704, "RTTICompound");
	del_items(0x1512334, DELIT_SIMPLE, 8);
	apply_type(0x1512334, "RTTIBase[1]");
	set_name(0x1512334, "DamageComponent::sBases");

	// DamageComponentResource
	set_name(0x150f758, "DamageComponentResource");
	apply_type(0x150f758, "RTTICompound");
	del_items(0x15122b8, DELIT_SIMPLE, 8);
	apply_type(0x15122b8, "RTTIBase[1]");
	set_name(0x15122b8, "DamageComponentResource::sBases");
	del_items(0x15122c0, DELIT_SIMPLE, 112);
	apply_type(0x15122c0, "RTTIAttr[4]");
	set_name(0x15122c0, "DamageComponentResource::sAttrs");

	// DamageModelResource
	set_name(0x14f9d84, "DamageModelResource");
	apply_type(0x14f9d84, "RTTICompound");
	del_items(0x14fec28, DELIT_SIMPLE, 8);
	apply_type(0x14fec28, "RTTIBase[1]");
	set_name(0x14fec28, "DamageModelResource::sBases");
	del_items(0x14fec30, DELIT_SIMPLE, 56);
	apply_type(0x14fec30, "RTTIAttr[2]");
	set_name(0x14fec30, "DamageModelResource::sAttrs");
	del_items(0x14fec68, DELIT_SIMPLE, 12);
	apply_type(0x14fec68, "RTTIMessageHandler[1]");
	set_name(0x14fec68, "DamageModelResource::sMessageHandlers");

	// DamageModifierPerDamageType
	set_name(0x14f9cbc, "DamageModifierPerDamageType");
	apply_type(0x14f9cbc, "RTTICompound");
	del_items(0x14feb9c, DELIT_SIMPLE, 84);
	apply_type(0x14feb9c, "RTTIAttr[3]");
	set_name(0x14feb9c, "DamageModifierPerDamageType::sAttrs");

	// DamageModifierResource
	set_name(0x14f9d20, "DamageModifierResource");
	apply_type(0x14f9d20, "RTTICompound");
	del_items(0x14febf0, DELIT_SIMPLE, 56);
	apply_type(0x14febf0, "RTTIAttr[2]");
	set_name(0x14febf0, "DamageModifierResource::sAttrs");

	// DamageParentAction
	set_name(0x14f91c8, "DamageParentAction");
	apply_type(0x14f91c8, "RTTICompound");
	del_items(0x14fdd10, DELIT_SIMPLE, 8);
	apply_type(0x14fdd10, "RTTIBase[1]");
	set_name(0x14fdd10, "DamageParentAction::sBases");
	del_items(0x14fdd18, DELIT_SIMPLE, 168);
	apply_type(0x14fdd18, "RTTIAttr[6]");
	set_name(0x14fdd18, "DamageParentAction::sAttrs");

	// DamagePassOnData
	set_name(0x14e29a8, "DamagePassOnData");
	apply_type(0x14e29a8, "RTTICompound");
	del_items(0x14e58d8, DELIT_SIMPLE, 56);
	apply_type(0x14e58d8, "RTTIAttr[2]");
	set_name(0x14e58d8, "DamagePassOnData::sAttrs");

	// DamageTypeGroup
	set_name(0x14faf1c, "DamageTypeGroup");
	apply_type(0x14faf1c, "RTTICompound");
	del_items(0x14fbc98, DELIT_SIMPLE, 8);
	apply_type(0x14fbc98, "RTTIBase[1]");
	set_name(0x14fbc98, "DamageTypeGroup::sBases");
	del_items(0x14fbca0, DELIT_SIMPLE, 28);
	apply_type(0x14fbca0, "RTTIAttr[1]");
	set_name(0x14fbca0, "DamageTypeGroup::sAttrs");

	// DamageTypeResource
	set_name(0x14e1eac, "DamageTypeResource");
	apply_type(0x14e1eac, "RTTICompound");
	del_items(0x14e454c, DELIT_SIMPLE, 8);
	apply_type(0x14e454c, "RTTIBase[1]");
	set_name(0x14e454c, "DamageTypeResource::sBases");
	del_items(0x14e4554, DELIT_SIMPLE, 56);
	apply_type(0x14e4554, "RTTIAttr[2]");
	set_name(0x14e4554, "DamageTypeResource::sAttrs");

	// DamageTypeResourceSettings
	set_name(0x14e1f00, "DamageTypeResourceSettings");
	apply_type(0x14e1f00, "RTTICompound");
	del_items(0x14e458c, DELIT_SIMPLE, 8);
	apply_type(0x14e458c, "RTTIBase[1]");
	set_name(0x14e458c, "DamageTypeResourceSettings::sBases");
	del_items(0x14e4594, DELIT_SIMPLE, 84);
	apply_type(0x14e4594, "RTTIAttr[3]");
	set_name(0x14e4594, "DamageTypeResourceSettings::sAttrs");

	// DamageTypeResourceSettingsGame
	set_name(0x14ef5c0, "DamageTypeResourceSettingsGame");
	apply_type(0x14ef5c0, "RTTICompound");
	del_items(0x14f2974, DELIT_SIMPLE, 8);
	apply_type(0x14f2974, "RTTIBase[1]");
	set_name(0x14f2974, "DamageTypeResourceSettingsGame::sBases");
	del_items(0x14f297c, DELIT_SIMPLE, 84);
	apply_type(0x14f297c, "RTTIAttr[3]");
	set_name(0x14f297c, "DamageTypeResourceSettingsGame::sAttrs");

	// DamagerIDAction
	set_name(0x14f8bd0, "DamagerIDAction");
	apply_type(0x14f8bd0, "RTTICompound");
	del_items(0x14fd5b8, DELIT_SIMPLE, 8);
	apply_type(0x14fd5b8, "RTTIBase[1]");
	set_name(0x14fd5b8, "DamagerIDAction::sBases");
	del_items(0x14fd5c0, DELIT_SIMPLE, 56);
	apply_type(0x14fd5c0, "RTTIAttr[2]");
	set_name(0x14fd5c0, "DamagerIDAction::sAttrs");

	// DataNode
	set_name(0x14c00cc, "DataNode");
	apply_type(0x14c00cc, "RTTICompound");
	del_items(0x14c29fc, DELIT_SIMPLE, 8);
	apply_type(0x14c29fc, "RTTIBase[1]");
	set_name(0x14c29fc, "DataNode::sBases");

	// DataTag
	set_name(0x14c0120, "DataTag");
	apply_type(0x14c0120, "RTTICompound");
	del_items(0x14c2a04, DELIT_SIMPLE, 8);
	apply_type(0x14c2a04, "RTTIBase[1]");
	set_name(0x14c2a04, "DataTag::sBases");
	del_items(0x14c2a0c, DELIT_SIMPLE, 48);
	apply_type(0x14c2a0c, "RTTIFunction[2]");
	set_name(0x14c2a0c, "DataTag::sFunctions");

	// DeathCameraEntity
	set_name(0x1501214, "DeathCameraEntity");
	apply_type(0x1501214, "RTTICompound");
	del_items(0x1501ff8, DELIT_SIMPLE, 8);
	apply_type(0x1501ff8, "RTTIBase[1]");
	set_name(0x1501ff8, "DeathCameraEntity::sBases");

	// DeathCameraEntityRep
	set_name(0x1501268, "DeathCameraEntityRep");
	apply_type(0x1501268, "RTTICompound");
	del_items(0x1502000, DELIT_SIMPLE, 8);
	apply_type(0x1502000, "RTTIBase[1]");
	set_name(0x1502000, "DeathCameraEntityRep::sBases");

	// DeathCameraEntityResource
	set_name(0x15012bc, "DeathCameraEntityResource");
	apply_type(0x15012bc, "RTTICompound");
	del_items(0x1501f9c, DELIT_SIMPLE, 8);
	apply_type(0x1501f9c, "RTTIBase[1]");
	set_name(0x1501f9c, "DeathCameraEntityResource::sBases");
	del_items(0x1501fa4, DELIT_SIMPLE, 84);
	apply_type(0x1501fa4, "RTTIAttr[3]");
	set_name(0x1501fa4, "DeathCameraEntityResource::sAttrs");

	// DecalManager
	set_name(0x14bced8, "DecalManager");
	apply_type(0x14bced8, "RTTICompound");
	del_items(0x14bdcf0, DELIT_SIMPLE, 8);
	apply_type(0x14bdcf0, "RTTIBase[1]");
	set_name(0x14bdcf0, "DecalManager::sBases");

	// DecalResource
	set_name(0x14bcf5c, "DecalResource");
	apply_type(0x14bcf5c, "RTTICompound");
	del_items(0x14bda90, DELIT_SIMPLE, 8);
	apply_type(0x14bda90, "RTTIBase[1]");
	set_name(0x14bda90, "DecalResource::sBases");
	del_items(0x14bda98, DELIT_SIMPLE, 588);
	apply_type(0x14bda98, "RTTIAttr[21]");
	set_name(0x14bda98, "DecalResource::sAttrs");
	del_items(0x14bdce4, DELIT_SIMPLE, 12);
	apply_type(0x14bdce4, "RTTIMessageHandler[1]");
	set_name(0x14bdce4, "DecalResource::sMessageHandlers");

	// DelayedAction
	set_name(0x14e2f64, "DelayedAction");
	apply_type(0x14e2f64, "RTTICompound");
	del_items(0x14e6318, DELIT_SIMPLE, 8);
	apply_type(0x14e6318, "RTTIBase[1]");
	set_name(0x14e6318, "DelayedAction::sBases");
	del_items(0x14e6320, DELIT_SIMPLE, 112);
	apply_type(0x14e6320, "RTTIAttr[4]");
	set_name(0x14e6320, "DelayedAction::sAttrs");

	// DelayedScriptMessage
	set_name(0x14ce4c8, "DelayedScriptMessage");
	apply_type(0x14ce4c8, "RTTICompound");
	del_items(0x14ce854, DELIT_SIMPLE, 8);
	apply_type(0x14ce854, "RTTIBase[1]");
	set_name(0x14ce854, "DelayedScriptMessage::sBases");

	// DependentConcreteAsset
	set_name(0x14bc2d0, "DependentConcreteAsset");
	apply_type(0x14bc2d0, "RTTICompound");
	del_items(0x14bc3ec, DELIT_SIMPLE, 8);
	apply_type(0x14bc3ec, "RTTIBase[1]");
	set_name(0x14bc3ec, "DependentConcreteAsset::sBases");
	del_items(0x14bc3f4, DELIT_SIMPLE, 56);
	apply_type(0x14bc3f4, "RTTIAttr[2]");
	set_name(0x14bc3f4, "DependentConcreteAsset::sAttrs");

	// DepthOfFieldSettings
	set_name(0x14cb8d4, "DepthOfFieldSettings");
	apply_type(0x14cb8d4, "RTTICompound");
	del_items(0x14cca28, DELIT_SIMPLE, 224);
	apply_type(0x14cca28, "RTTIAttr[8]");
	set_name(0x14cca28, "DepthOfFieldSettings::sAttrs");

	// DepthOfFieldSettingsResource
	set_name(0x14cb938, "DepthOfFieldSettingsResource");
	apply_type(0x14cb938, "RTTICompound");
	del_items(0x14ccb08, DELIT_SIMPLE, 8);
	apply_type(0x14ccb08, "RTTIBase[1]");
	set_name(0x14ccb08, "DepthOfFieldSettingsResource::sBases");
	del_items(0x14ccb10, DELIT_SIMPLE, 56);
	apply_type(0x14ccb10, "RTTIAttr[2]");
	set_name(0x14ccb10, "DepthOfFieldSettingsResource::sAttrs");

	// DerivedStatResource
	set_name(0x153ea54, "DerivedStatResource");
	apply_type(0x153ea54, "RTTICompound");
	del_items(0x1540804, DELIT_SIMPLE, 8);
	apply_type(0x1540804, "RTTIBase[1]");
	set_name(0x1540804, "DerivedStatResource::sBases");
	del_items(0x154080c, DELIT_SIMPLE, 56);
	apply_type(0x154080c, "RTTIAttr[2]");
	set_name(0x154080c, "DerivedStatResource::sAttrs");
	del_items(0x1540844, DELIT_SIMPLE, 12);
	apply_type(0x1540844, "RTTIMessageHandler[1]");
	set_name(0x1540844, "DerivedStatResource::sMessageHandlers");

	// DestroyComponentAction
	set_name(0x14f8f28, "DestroyComponentAction");
	apply_type(0x14f8f28, "RTTICompound");
	del_items(0x14fd7f8, DELIT_SIMPLE, 8);
	apply_type(0x14fd7f8, "RTTIBase[1]");
	set_name(0x14fd7f8, "DestroyComponentAction::sBases");
	del_items(0x14fd800, DELIT_SIMPLE, 56);
	apply_type(0x14fd800, "RTTIAttr[2]");
	set_name(0x14fd800, "DestroyComponentAction::sAttrs");

	// Destructibility
	set_name(0x14e2818, "Destructibility");
	apply_type(0x14e2818, "RTTICompound");
	del_items(0x14e4ee4, DELIT_SIMPLE, 16);
	apply_type(0x14e4ee4, "RTTIBase[2]");
	set_name(0x14e4ee4, "Destructibility::sBases");

	// DestructibilityConstraint
	set_name(0x14e2a70, "DestructibilityConstraint");
	apply_type(0x14e2a70, "RTTICompound");
	del_items(0x14e5910, DELIT_SIMPLE, 168);
	apply_type(0x14e5910, "RTTIAttr[6]");
	set_name(0x14e5910, "DestructibilityConstraint::sAttrs");

	// DestructibilityConstraintState
	set_name(0x14e2c64, "DestructibilityConstraintState");
	apply_type(0x14e2c64, "RTTICompound");
	del_items(0x14e5560, DELIT_SIMPLE, 8);
	apply_type(0x14e5560, "RTTIBase[1]");
	set_name(0x14e5560, "DestructibilityConstraintState::sBases");
	del_items(0x14e5568, DELIT_SIMPLE, 56);
	apply_type(0x14e5568, "RTTIAttr[2]");
	set_name(0x14e5568, "DestructibilityConstraintState::sAttrs");

	// DestructibilityHitReaction
	set_name(0x14e287c, "DestructibilityHitReaction");
	apply_type(0x14e287c, "RTTICompound");
	del_items(0x14e5f70, DELIT_SIMPLE, 112);
	apply_type(0x14e5f70, "RTTIAttr[4]");
	set_name(0x14e5f70, "DestructibilityHitReaction::sAttrs");

	// DestructibilityPart
	set_name(0x14e2a0c, "DestructibilityPart");
	apply_type(0x14e2a0c, "RTTICompound");
	del_items(0x14e5788, DELIT_SIMPLE, 336);
	apply_type(0x14e5788, "RTTIAttr[12]");
	set_name(0x14e5788, "DestructibilityPart::sAttrs");

	// DestructibilityPartState
	set_name(0x14e2bf0, "DestructibilityPartState");
	apply_type(0x14e2bf0, "RTTICompound");
	del_items(0x14e54e8, DELIT_SIMPLE, 8);
	apply_type(0x14e54e8, "RTTIBase[1]");
	set_name(0x14e54e8, "DestructibilityPartState::sBases");
	del_items(0x14e54f0, DELIT_SIMPLE, 112);
	apply_type(0x14e54f0, "RTTIAttr[4]");
	set_name(0x14e54f0, "DestructibilityPartState::sAttrs");

	// DestructibilityPartStateResource
	set_name(0x14e28f0, "DestructibilityPartStateResource");
	apply_type(0x14e28f0, "RTTICompound");
	del_items(0x14e5fe0, DELIT_SIMPLE, 8);
	apply_type(0x14e5fe0, "RTTIBase[1]");
	set_name(0x14e5fe0, "DestructibilityPartStateResource::sBases");
	del_items(0x14e5fe8, DELIT_SIMPLE, 616);
	apply_type(0x14e5fe8, "RTTIAttr[22]");
	set_name(0x14e5fe8, "DestructibilityPartStateResource::sAttrs");

	// DestructibilityRep
	set_name(0x14e2944, "DestructibilityRep");
	apply_type(0x14e2944, "RTTICompound");

	// DestructibilityResource
	set_name(0x14e2b28, "DestructibilityResource");
	apply_type(0x14e2b28, "RTTICompound");
	del_items(0x14e59f0, DELIT_SIMPLE, 8);
	apply_type(0x14e59f0, "RTTIBase[1]");
	set_name(0x14e59f0, "DestructibilityResource::sBases");
	del_items(0x14e59f8, DELIT_SIMPLE, 1176);
	apply_type(0x14e59f8, "RTTIAttr[42]");
	set_name(0x14e59f8, "DestructibilityResource::sAttrs");

	// DestructibilityState
	set_name(0x14e2cd8, "DestructibilityState");
	apply_type(0x14e2cd8, "RTTICompound");
	del_items(0x14e55a0, DELIT_SIMPLE, 8);
	apply_type(0x14e55a0, "RTTIBase[1]");
	set_name(0x14e55a0, "DestructibilityState::sBases");
	del_items(0x14e55a8, DELIT_SIMPLE, 140);
	apply_type(0x14e55a8, "RTTIAttr[5]");
	set_name(0x14e55a8, "DestructibilityState::sAttrs");

	// DestructibilityTimeLineKey
	set_name(0x14e2d3c, "DestructibilityTimeLineKey");
	apply_type(0x14e2d3c, "RTTICompound");
	del_items(0x14e6408, DELIT_SIMPLE, 84);
	apply_type(0x14e6408, "RTTIAttr[3]");
	set_name(0x14e6408, "DestructibilityTimeLineKey::sAttrs");

	// DestructibilityTimeLineResource
	set_name(0x14e2d90, "DestructibilityTimeLineResource");
	apply_type(0x14e2d90, "RTTICompound");
	del_items(0x14e645c, DELIT_SIMPLE, 8);
	apply_type(0x14e645c, "RTTIBase[1]");
	set_name(0x14e645c, "DestructibilityTimeLineResource::sBases");
	del_items(0x14e6464, DELIT_SIMPLE, 56);
	apply_type(0x14e6464, "RTTIAttr[2]");
	set_name(0x14e6464, "DestructibilityTimeLineResource::sAttrs");

	// DestructiblePartToHitLocationMapping
	set_name(0x14fb338, "DestructiblePartToHitLocationMapping");
	apply_type(0x14fb338, "RTTICompound");
	del_items(0x14fc104, DELIT_SIMPLE, 56);
	apply_type(0x14fc104, "RTTIAttr[2]");
	set_name(0x14fc104, "DestructiblePartToHitLocationMapping::sAttrs");

	// DestructionLogicAction
	set_name(0x14e2e14, "DestructionLogicAction");
	apply_type(0x14e2e14, "RTTICompound");
	del_items(0x14e5f04, DELIT_SIMPLE, 8);
	apply_type(0x14e5f04, "RTTIBase[1]");
	set_name(0x14e5f04, "DestructionLogicAction::sBases");

	// DestructionLogicLeafAction
	set_name(0x14e300c, "DestructionLogicLeafAction");
	apply_type(0x14e300c, "RTTICompound");
	del_items(0x14e6250, DELIT_SIMPLE, 8);
	apply_type(0x14e6250, "RTTIBase[1]");
	set_name(0x14e6250, "DestructionLogicLeafAction::sBases");

	// DestructionLogicNodeAction
	set_name(0x14e3060, "DestructionLogicNodeAction");
	apply_type(0x14e3060, "RTTICompound");
	del_items(0x14e5f0c, DELIT_SIMPLE, 8);
	apply_type(0x14e5f0c, "RTTIBase[1]");
	set_name(0x14e5f0c, "DestructionLogicNodeAction::sBases");

	// DialogOptionTag
	set_name(0x14c0520, "DialogOptionTag");
	apply_type(0x14c0520, "RTTICompound");
	del_items(0x14c29b8, DELIT_SIMPLE, 8);
	apply_type(0x14c29b8, "RTTIBase[1]");
	set_name(0x14c29b8, "DialogOptionTag::sBases");

	// DialogTag
	set_name(0x14c04cc, "DialogTag");
	apply_type(0x14c04cc, "RTTICompound");
	del_items(0x14c29b0, DELIT_SIMPLE, 8);
	apply_type(0x14c29b0, "RTTIBase[1]");
	set_name(0x14c29b0, "DialogTag::sBases");

	// DialogWidget
	set_name(0x14c0e1c, "DialogWidget");
	apply_type(0x14c0e1c, "RTTICompound");
	del_items(0x14c2ffc, DELIT_SIMPLE, 8);
	apply_type(0x14c2ffc, "RTTIBase[1]");
	set_name(0x14c2ffc, "DialogWidget::sBases");

	// DialogWidgetResource
	set_name(0x14c1834, "DialogWidgetResource");
	apply_type(0x14c1834, "RTTICompound");
	del_items(0x14c31a4, DELIT_SIMPLE, 8);
	apply_type(0x14c31a4, "RTTIBase[1]");
	set_name(0x14c31a4, "DialogWidgetResource::sBases");
	del_items(0x14c31ac, DELIT_SIMPLE, 112);
	apply_type(0x14c31ac, "RTTIAttr[4]");
	set_name(0x14c31ac, "DialogWidgetResource::sAttrs");

	// DieEffectComponentAction
	set_name(0x15419c4, "DieEffectComponentAction");
	apply_type(0x15419c4, "RTTICompound");
	del_items(0x1543354, DELIT_SIMPLE, 8);
	apply_type(0x1543354, "RTTIBase[1]");
	set_name(0x1543354, "DieEffectComponentAction::sBases");
	del_items(0x154335c, DELIT_SIMPLE, 56);
	apply_type(0x154335c, "RTTIAttr[2]");
	set_name(0x154335c, "DieEffectComponentAction::sAttrs");

	// DifferenceAnimationInfo
	set_name(0x14d9894, "DifferenceAnimationInfo");
	apply_type(0x14d9894, "RTTICompound");
	del_items(0x14db974, DELIT_SIMPLE, 56);
	apply_type(0x14db974, "RTTIAttr[2]");
	set_name(0x14db974, "DifferenceAnimationInfo::sAttrs");

	// DifferenceAnimationResource
	set_name(0x14d94b8, "DifferenceAnimationResource");
	apply_type(0x14d94b8, "RTTICompound");
	del_items(0x14db9ac, DELIT_SIMPLE, 8);
	apply_type(0x14db9ac, "RTTIBase[1]");
	set_name(0x14db9ac, "DifferenceAnimationResource::sBases");
	del_items(0x14db9b4, DELIT_SIMPLE, 112);
	apply_type(0x14db9b4, "RTTIAttr[4]");
	set_name(0x14db9b4, "DifferenceAnimationResource::sAttrs");

	// DifficultyFloatResource
	set_name(0x14ea800, "DifficultyFloatResource");
	apply_type(0x14ea800, "RTTICompound");
	del_items(0x14ed2f0, DELIT_SIMPLE, 8);
	apply_type(0x14ed2f0, "RTTIBase[1]");
	set_name(0x14ed2f0, "DifficultyFloatResource::sBases");
	del_items(0x14ed2f8, DELIT_SIMPLE, 28);
	apply_type(0x14ed2f8, "RTTIAttr[1]");
	set_name(0x14ed2f8, "DifficultyFloatResource::sAttrs");

	// DifficultyIntResource
	set_name(0x14ea8c8, "DifficultyIntResource");
	apply_type(0x14ea8c8, "RTTICompound");
	del_items(0x14ed314, DELIT_SIMPLE, 8);
	apply_type(0x14ed314, "RTTIBase[1]");
	set_name(0x14ed314, "DifficultyIntResource::sBases");
	del_items(0x14ed31c, DELIT_SIMPLE, 28);
	apply_type(0x14ed31c, "RTTIAttr[1]");
	set_name(0x14ed31c, "DifficultyIntResource::sAttrs");

	// DifficultyManager
	set_name(0x152aff8, "DifficultyManager");
	apply_type(0x152aff8, "RTTICompound");
	del_items(0x152bae0, DELIT_SIMPLE, 8);
	apply_type(0x152bae0, "RTTIBase[1]");
	set_name(0x152bae0, "DifficultyManager::sBases");

	// DifficultyManagerResource
	set_name(0x152b1dc, "DifficultyManagerResource");
	apply_type(0x152b1dc, "RTTICompound");
	del_items(0x152bdd4, DELIT_SIMPLE, 8);
	apply_type(0x152bdd4, "RTTIBase[1]");
	set_name(0x152bdd4, "DifficultyManagerResource::sBases");
	del_items(0x152bddc, DELIT_SIMPLE, 308);
	apply_type(0x152bddc, "RTTIAttr[11]");
	set_name(0x152bddc, "DifficultyManagerResource::sAttrs");

	// DifficultyRangeResource
	set_name(0x14ea874, "DifficultyRangeResource");
	apply_type(0x14ea874, "RTTICompound");
	del_items(0x14ed25c, DELIT_SIMPLE, 8);
	apply_type(0x14ed25c, "RTTIBase[1]");
	set_name(0x14ed25c, "DifficultyRangeResource::sBases");
	del_items(0x14ed264, DELIT_SIMPLE, 140);
	apply_type(0x14ed264, "RTTIAttr[5]");
	set_name(0x14ed264, "DifficultyRangeResource::sAttrs");

	// DirectionElasticControlledFollowCameraEntity
	set_name(0x150116c, "DirectionElasticControlledFollowCameraEntity");
	apply_type(0x150116c, "RTTICompound");
	del_items(0x1501f94, DELIT_SIMPLE, 8);
	apply_type(0x1501f94, "RTTIBase[1]");
	set_name(0x1501f94, "DirectionElasticControlledFollowCameraEntity::sBases");

	// DirectionElasticControlledFollowCameraEntityResource
	set_name(0x15011c0, "DirectionElasticControlledFollowCameraEntityResource");
	apply_type(0x15011c0, "RTTICompound");
	del_items(0x1501ee4, DELIT_SIMPLE, 8);
	apply_type(0x1501ee4, "RTTIBase[1]");
	set_name(0x1501ee4, "DirectionElasticControlledFollowCameraEntityResource::sBases");
	del_items(0x1501eec, DELIT_SIMPLE, 168);
	apply_type(0x1501eec, "RTTIAttr[6]");
	set_name(0x1501eec, "DirectionElasticControlledFollowCameraEntityResource::sAttrs");

	// DirectionalAnimationInfo
	set_name(0x14d98f8, "DirectionalAnimationInfo");
	apply_type(0x14d98f8, "RTTICompound");
	del_items(0x14dba24, DELIT_SIMPLE, 112);
	apply_type(0x14dba24, "RTTIAttr[4]");
	set_name(0x14dba24, "DirectionalAnimationInfo::sAttrs");

	// DirectionalAnimationResource
	set_name(0x14d950c, "DirectionalAnimationResource");
	apply_type(0x14d950c, "RTTICompound");
	del_items(0x14dba94, DELIT_SIMPLE, 8);
	apply_type(0x14dba94, "RTTIBase[1]");
	set_name(0x14dba94, "DirectionalAnimationResource::sBases");
	del_items(0x14dba9c, DELIT_SIMPLE, 140);
	apply_type(0x14dba9c, "RTTIAttr[5]");
	set_name(0x14dba9c, "DirectionalAnimationResource::sAttrs");
	del_items(0x14dbb28, DELIT_SIMPLE, 12);
	apply_type(0x14dbb28, "RTTIMessageHandler[1]");
	set_name(0x14dbb28, "DirectionalAnimationResource::sMessageHandlers");

	// DirectionalPhaseAnimationInfo
	set_name(0x14d994c, "DirectionalPhaseAnimationInfo");
	apply_type(0x14d994c, "RTTICompound");
	del_items(0x14dbb34, DELIT_SIMPLE, 112);
	apply_type(0x14dbb34, "RTTIAttr[4]");
	set_name(0x14dbb34, "DirectionalPhaseAnimationInfo::sAttrs");

	// DirectionalPhaseAnimationResource
	set_name(0x14d9560, "DirectionalPhaseAnimationResource");
	apply_type(0x14d9560, "RTTICompound");
	del_items(0x14dbba4, DELIT_SIMPLE, 8);
	apply_type(0x14dbba4, "RTTIBase[1]");
	set_name(0x14dbba4, "DirectionalPhaseAnimationResource::sBases");
	del_items(0x14dbbac, DELIT_SIMPLE, 140);
	apply_type(0x14dbbac, "RTTIAttr[5]");
	set_name(0x14dbbac, "DirectionalPhaseAnimationResource::sAttrs");
	del_items(0x14dbc38, DELIT_SIMPLE, 12);
	apply_type(0x14dbc38, "RTTIMessageHandler[1]");
	set_name(0x14dbc38, "DirectionalPhaseAnimationResource::sMessageHandlers");

	// DisableConstraintsAction
	set_name(0x14f9318, "DisableConstraintsAction");
	apply_type(0x14f9318, "RTTICompound");
	del_items(0x14fdf0c, DELIT_SIMPLE, 8);
	apply_type(0x14fdf0c, "RTTIBase[1]");
	set_name(0x14fdf0c, "DisableConstraintsAction::sBases");
	del_items(0x14fdf14, DELIT_SIMPLE, 56);
	apply_type(0x14fdf14, "RTTIAttr[2]");
	set_name(0x14fdf14, "DisableConstraintsAction::sAttrs");

	// DisableLightAction
	set_name(0x14f9708, "DisableLightAction");
	apply_type(0x14f9708, "RTTICompound");
	del_items(0x14fe308, DELIT_SIMPLE, 8);
	apply_type(0x14fe308, "RTTIBase[1]");
	set_name(0x14fe308, "DisableLightAction::sBases");
	del_items(0x14fe310, DELIT_SIMPLE, 56);
	apply_type(0x14fe310, "RTTIAttr[2]");
	set_name(0x14fe310, "DisableLightAction::sAttrs");

	// DisabledBrutalMeleeAnimation
	set_name(0x150f348, "DisabledBrutalMeleeAnimation");
	apply_type(0x150f348, "RTTICompound");
	del_items(0x1510534, DELIT_SIMPLE, 84);
	apply_type(0x1510534, "RTTIAttr[3]");
	set_name(0x1510534, "DisabledBrutalMeleeAnimation::sAttrs");

	// DiscreteAmmoEjector
	set_name(0x1524430, "DiscreteAmmoEjector");
	apply_type(0x1524430, "RTTICompound");
	del_items(0x1524f40, DELIT_SIMPLE, 8);
	apply_type(0x1524f40, "RTTIBase[1]");
	set_name(0x1524f40, "DiscreteAmmoEjector::sBases");
	del_items(0x1524f48, DELIT_SIMPLE, 56);
	apply_type(0x1524f48, "RTTIAttr[2]");
	set_name(0x1524f48, "DiscreteAmmoEjector::sAttrs");

	// DiscreteAmmoEjectorRep
	set_name(0x1524484, "DiscreteAmmoEjectorRep");
	apply_type(0x1524484, "RTTICompound");
	del_items(0x1525510, DELIT_SIMPLE, 8);
	apply_type(0x1525510, "RTTIBase[1]");
	set_name(0x1525510, "DiscreteAmmoEjectorRep::sBases");

	// DiscreteAmmoEjectorResource
	set_name(0x15244d8, "DiscreteAmmoEjectorResource");
	apply_type(0x15244d8, "RTTICompound");
	del_items(0x1524994, DELIT_SIMPLE, 8);
	apply_type(0x1524994, "RTTIBase[1]");
	set_name(0x1524994, "DiscreteAmmoEjectorResource::sBases");
	del_items(0x152499c, DELIT_SIMPLE, 420);
	apply_type(0x152499c, "RTTIAttr[15]");
	set_name(0x152499c, "DiscreteAmmoEjectorResource::sAttrs");

	// DisintegratorEjector
	set_name(0x153c604, "DisintegratorEjector");
	apply_type(0x153c604, "RTTICompound");
	del_items(0x153deb0, DELIT_SIMPLE, 8);
	apply_type(0x153deb0, "RTTIBase[1]");
	set_name(0x153deb0, "DisintegratorEjector::sBases");

	// DisintegratorEjectorRep
	set_name(0x153c658, "DisintegratorEjectorRep");
	apply_type(0x153c658, "RTTICompound");
	del_items(0x153debc, DELIT_SIMPLE, 8);
	apply_type(0x153debc, "RTTIBase[1]");
	set_name(0x153debc, "DisintegratorEjectorRep::sBases");

	// DisintegratorEjectorResource
	set_name(0x153c6ac, "DisintegratorEjectorResource");
	apply_type(0x153c6ac, "RTTICompound");
	del_items(0x153d980, DELIT_SIMPLE, 8);
	apply_type(0x153d980, "RTTIBase[1]");
	set_name(0x153d980, "DisintegratorEjectorResource::sBases");
	del_items(0x153d988, DELIT_SIMPLE, 1316);
	apply_type(0x153d988, "RTTIAttr[47]");
	set_name(0x153d988, "DisintegratorEjectorResource::sAttrs");

	// DispensableEntityManagerSettings
	set_name(0x14eae70, "DispensableEntityManagerSettings");
	apply_type(0x14eae70, "RTTICompound");
	del_items(0x14edb08, DELIT_SIMPLE, 8);
	apply_type(0x14edb08, "RTTIBase[1]");
	set_name(0x14edb08, "DispensableEntityManagerSettings::sBases");
	del_items(0x14edb10, DELIT_SIMPLE, 112);
	apply_type(0x14edb10, "RTTIAttr[4]");
	set_name(0x14edb10, "DispensableEntityManagerSettings::sAttrs");

	// Door
	set_name(0x1502d28, "Door");
	apply_type(0x1502d28, "RTTICompound");
	del_items(0x1504a08, DELIT_SIMPLE, 8);
	apply_type(0x1504a08, "RTTIBase[1]");
	set_name(0x1504a08, "Door::sBases");
	del_items(0x1504a10, DELIT_SIMPLE, 84);
	apply_type(0x1504a10, "RTTIAttr[3]");
	set_name(0x1504a10, "Door::sAttrs");
	del_items(0x1504a64, DELIT_SIMPLE, 240);
	apply_type(0x1504a64, "RTTIFunction[10]");
	set_name(0x1504a64, "Door::sFunctions");

	// DoorRep
	set_name(0x1502d7c, "DoorRep");
	apply_type(0x1502d7c, "RTTICompound");
	del_items(0x1504b54, DELIT_SIMPLE, 8);
	apply_type(0x1504b54, "RTTIBase[1]");
	set_name(0x1504b54, "DoorRep::sBases");

	// DoorResource
	set_name(0x1502dd0, "DoorResource");
	apply_type(0x1502dd0, "RTTICompound");
	del_items(0x150493c, DELIT_SIMPLE, 8);
	apply_type(0x150493c, "RTTIBase[1]");
	set_name(0x150493c, "DoorResource::sBases");
	del_items(0x1504944, DELIT_SIMPLE, 196);
	apply_type(0x1504944, "RTTIAttr[7]");
	set_name(0x1504944, "DoorResource::sAttrs");

	// DrawFlags
	set_name(0x14cc01c, "DrawFlags");
	apply_type(0x14cc01c, "RTTICompound");
	del_items(0x14cc160, DELIT_SIMPLE, 196);
	apply_type(0x14cc160, "RTTIAttr[7]");
	set_name(0x14cc160, "DrawFlags::sAttrs");

	// DrawableCullInfo
	set_name(0x14cb82c, "DrawableCullInfo");
	apply_type(0x14cb82c, "RTTICompound");
	del_items(0x14cc34c, DELIT_SIMPLE, 28);
	apply_type(0x14cc34c, "RTTIAttr[1]");
	set_name(0x14cc34c, "DrawableCullInfo::sAttrs");

	// DrawableObjectInstance
	set_name(0x14cb880, "DrawableObjectInstance");
	apply_type(0x14cb880, "RTTICompound");
	del_items(0x14cc36c, DELIT_SIMPLE, 84);
	apply_type(0x14cc36c, "RTTIAttr[3]");
	set_name(0x14cc36c, "DrawableObjectInstance::sAttrs");

	// EMPBlast
	set_name(0x152452c, "EMPBlast");
	apply_type(0x152452c, "RTTICompound");
	del_items(0x15255d4, DELIT_SIMPLE, 8);
	apply_type(0x15255d4, "RTTIBase[1]");
	set_name(0x15255d4, "EMPBlast::sBases");
	del_items(0x15255dc, DELIT_SIMPLE, 24);
	apply_type(0x15255dc, "RTTIFunction[1]");
	set_name(0x15255dc, "EMPBlast::sFunctions");

	// EMPBlastResource
	set_name(0x1524580, "EMPBlastResource");
	apply_type(0x1524580, "RTTICompound");
	del_items(0x1525524, DELIT_SIMPLE, 8);
	apply_type(0x1525524, "RTTIBase[1]");
	set_name(0x1525524, "EMPBlastResource::sBases");
	del_items(0x152552c, DELIT_SIMPLE, 168);
	apply_type(0x152552c, "RTTIAttr[6]");
	set_name(0x152552c, "EMPBlastResource::sAttrs");

	// EffectComponent
	set_name(0x150f7ac, "EffectComponent");
	apply_type(0x150f7ac, "RTTICompound");
	del_items(0x1510410, DELIT_SIMPLE, 8);
	apply_type(0x1510410, "RTTIBase[1]");
	set_name(0x1510410, "EffectComponent::sBases");

	// EffectComponentRep
	set_name(0x150f800, "EffectComponentRep");
	apply_type(0x150f800, "RTTICompound");
	del_items(0x1512340, DELIT_SIMPLE, 8);
	apply_type(0x1512340, "RTTIBase[1]");
	set_name(0x1512340, "EffectComponentRep::sBases");

	// EffectComponentResource
	set_name(0x150f874, "EffectComponentResource");
	apply_type(0x150f874, "RTTICompound");
	del_items(0x1510060, DELIT_SIMPLE, 8);
	apply_type(0x1510060, "RTTIBase[1]");
	set_name(0x1510060, "EffectComponentResource::sBases");
	del_items(0x1510068, DELIT_SIMPLE, 924);
	apply_type(0x1510068, "RTTIAttr[33]");
	set_name(0x1510068, "EffectComponentResource::sAttrs");

	// EffectEntity
	set_name(0x14f9dd8, "EffectEntity");
	apply_type(0x14f9dd8, "RTTICompound");
	del_items(0x14fd4c4, DELIT_SIMPLE, 8);
	apply_type(0x14fd4c4, "RTTIBase[1]");
	set_name(0x14fd4c4, "EffectEntity::sBases");
	del_items(0x14fd4cc, DELIT_SIMPLE, 144);
	apply_type(0x14fd4cc, "RTTIFunction[6]");
	set_name(0x14fd4cc, "EffectEntity::sFunctions");

	// EffectEntityRep
	set_name(0x14f9e2c, "EffectEntityRep");
	apply_type(0x14f9e2c, "RTTICompound");
	del_items(0x14fec74, DELIT_SIMPLE, 8);
	apply_type(0x14fec74, "RTTIBase[1]");
	set_name(0x14fec74, "EffectEntityRep::sBases");

	// EffectEntityResource
	set_name(0x1500cb4, "EffectEntityResource");
	apply_type(0x1500cb4, "RTTICompound");
	del_items(0x15015c8, DELIT_SIMPLE, 8);
	apply_type(0x15015c8, "RTTIBase[1]");
	set_name(0x15015c8, "EffectEntityResource::sBases");
	del_items(0x15015d0, DELIT_SIMPLE, 140);
	apply_type(0x15015d0, "RTTIAttr[5]");
	set_name(0x15015d0, "EffectEntityResource::sAttrs");

	// EjectLocation
	set_name(0x15224d0, "EjectLocation");
	apply_type(0x15224d0, "RTTICompound");
	del_items(0x1523030, DELIT_SIMPLE, 448);
	apply_type(0x1523030, "RTTIAttr[16]");
	set_name(0x1523030, "EjectLocation::sAttrs");

	// EjectLocationPart
	set_name(0x152246c, "EjectLocationPart");
	apply_type(0x152246c, "RTTICompound");
	del_items(0x1522fdc, DELIT_SIMPLE, 84);
	apply_type(0x1522fdc, "RTTIAttr[3]");
	set_name(0x1522fdc, "EjectLocationPart::sAttrs");

	// ElasticVehicleFollowCameraEntity
	set_name(0x1501310, "ElasticVehicleFollowCameraEntity");
	apply_type(0x1501310, "RTTICompound");
	del_items(0x1502118, DELIT_SIMPLE, 8);
	apply_type(0x1502118, "RTTIBase[1]");
	set_name(0x1502118, "ElasticVehicleFollowCameraEntity::sBases");

	// ElasticVehicleFollowCameraEntityResource
	set_name(0x1501364, "ElasticVehicleFollowCameraEntityResource");
	apply_type(0x1501364, "RTTICompound");
	del_items(0x1502014, DELIT_SIMPLE, 8);
	apply_type(0x1502014, "RTTIBase[1]");
	set_name(0x1502014, "ElasticVehicleFollowCameraEntityResource::sBases");
	del_items(0x150201c, DELIT_SIMPLE, 252);
	apply_type(0x150201c, "RTTIAttr[9]");
	set_name(0x150201c, "ElasticVehicleFollowCameraEntityResource::sAttrs");

	// ElectricityComponent
	set_name(0x153c9e0, "ElectricityComponent");
	apply_type(0x153c9e0, "RTTICompound");
	del_items(0x153d438, DELIT_SIMPLE, 8);
	apply_type(0x153d438, "RTTIBase[1]");
	set_name(0x153d438, "ElectricityComponent::sBases");

	// ElectricityComponentResource
	set_name(0x153cafc, "ElectricityComponentResource");
	apply_type(0x153cafc, "RTTICompound");
	del_items(0x153ce14, DELIT_SIMPLE, 8);
	apply_type(0x153ce14, "RTTIBase[1]");
	set_name(0x153ce14, "ElectricityComponentResource::sBases");
	del_items(0x153ce1c, DELIT_SIMPLE, 84);
	apply_type(0x153ce1c, "RTTIAttr[3]");
	set_name(0x153ce1c, "ElectricityComponentResource::sAttrs");

	// ElectricityDrawSettings
	set_name(0x153c928, "ElectricityDrawSettings");
	apply_type(0x153c928, "RTTICompound");
	del_items(0x153cf5c, DELIT_SIMPLE, 8);
	apply_type(0x153cf5c, "RTTIBase[1]");
	set_name(0x153cf5c, "ElectricityDrawSettings::sBases");
	del_items(0x153cf64, DELIT_SIMPLE, 252);
	apply_type(0x153cf64, "RTTIAttr[9]");
	set_name(0x153cf64, "ElectricityDrawSettings::sAttrs");

	// ElectricityDrawSettingsModifierResource
	set_name(0x153be38, "ElectricityDrawSettingsModifierResource");
	apply_type(0x153be38, "RTTICompound");
	del_items(0x153cba4, DELIT_SIMPLE, 8);
	apply_type(0x153cba4, "RTTIBase[1]");
	set_name(0x153cba4, "ElectricityDrawSettingsModifierResource::sBases");
	del_items(0x153cbac, DELIT_SIMPLE, 84);
	apply_type(0x153cbac, "RTTIAttr[3]");
	set_name(0x153cbac, "ElectricityDrawSettingsModifierResource::sAttrs");

	// ElectricityEjector
	set_name(0x153c40c, "ElectricityEjector");
	apply_type(0x153c40c, "RTTICompound");
	del_items(0x153d454, DELIT_SIMPLE, 8);
	apply_type(0x153d454, "RTTIBase[1]");
	set_name(0x153d454, "ElectricityEjector::sBases");

	// ElectricityEjectorRep
	set_name(0x153c460, "ElectricityEjectorRep");
	apply_type(0x153c460, "RTTICompound");
	del_items(0x153d460, DELIT_SIMPLE, 8);
	apply_type(0x153d460, "RTTIBase[1]");
	set_name(0x153d460, "ElectricityEjectorRep::sBases");

	// ElectricityEjectorResource
	set_name(0x153c4b4, "ElectricityEjectorResource");
	apply_type(0x153c4b4, "RTTICompound");
	del_items(0x153d468, DELIT_SIMPLE, 8);
	apply_type(0x153d468, "RTTIBase[1]");
	set_name(0x153d468, "ElectricityEjectorResource::sBases");
	del_items(0x153d470, DELIT_SIMPLE, 840);
	apply_type(0x153d470, "RTTIAttr[30]");
	set_name(0x153d470, "ElectricityEjectorResource::sAttrs");

	// ElectricityEmitNode
	set_name(0x153c040, "ElectricityEmitNode");
	apply_type(0x153c040, "RTTICompound");
	del_items(0x153d258, DELIT_SIMPLE, 8);
	apply_type(0x153d258, "RTTIBase[1]");
	set_name(0x153d258, "ElectricityEmitNode::sBases");

	// ElectricityEmitNodeResource
	set_name(0x153c0a4, "ElectricityEmitNodeResource");
	apply_type(0x153c0a4, "RTTICompound");
	del_items(0x153d1fc, DELIT_SIMPLE, 8);
	apply_type(0x153d1fc, "RTTIBase[1]");
	set_name(0x153d1fc, "ElectricityEmitNodeResource::sBases");
	del_items(0x153d204, DELIT_SIMPLE, 84);
	apply_type(0x153d204, "RTTIAttr[3]");
	set_name(0x153d204, "ElectricityEmitNodeResource::sAttrs");

	// ElectricityEmitSettings
	set_name(0x153c98c, "ElectricityEmitSettings");
	apply_type(0x153c98c, "RTTICompound");
	del_items(0x153ccc0, DELIT_SIMPLE, 8);
	apply_type(0x153ccc0, "RTTIBase[1]");
	set_name(0x153ccc0, "ElectricityEmitSettings::sBases");
	del_items(0x153ccc8, DELIT_SIMPLE, 196);
	apply_type(0x153ccc8, "RTTIAttr[7]");
	set_name(0x153ccc8, "ElectricityEmitSettings::sAttrs");

	// ElectricityEntity
	set_name(0x153bef0, "ElectricityEntity");
	apply_type(0x153bef0, "RTTICompound");
	del_items(0x153cd8c, DELIT_SIMPLE, 8);
	apply_type(0x153cd8c, "RTTIBase[1]");
	set_name(0x153cd8c, "ElectricityEntity::sBases");

	// ElectricityEntityNode
	set_name(0x153bf98, "ElectricityEntityNode");
	apply_type(0x153bf98, "RTTICompound");
	del_items(0x153cf54, DELIT_SIMPLE, 8);
	apply_type(0x153cf54, "RTTIBase[1]");
	set_name(0x153cf54, "ElectricityEntityNode::sBases");

	// ElectricityEntityNodeResource
	set_name(0x153bfec, "ElectricityEntityNodeResource");
	apply_type(0x153bfec, "RTTICompound");
	del_items(0x153cec0, DELIT_SIMPLE, 8);
	apply_type(0x153cec0, "RTTIBase[1]");
	set_name(0x153cec0, "ElectricityEntityNodeResource::sBases");
	del_items(0x153cec8, DELIT_SIMPLE, 140);
	apply_type(0x153cec8, "RTTIAttr[5]");
	set_name(0x153cec8, "ElectricityEntityNodeResource::sAttrs");

	// ElectricityEntityResource
	set_name(0x153bf44, "ElectricityEntityResource");
	apply_type(0x153bf44, "RTTICompound");
	del_items(0x153ce80, DELIT_SIMPLE, 8);
	apply_type(0x153ce80, "RTTIBase[1]");
	set_name(0x153ce80, "ElectricityEntityResource::sBases");
	del_items(0x153ce88, DELIT_SIMPLE, 56);
	apply_type(0x153ce88, "RTTIAttr[2]");
	set_name(0x153ce88, "ElectricityEntityResource::sAttrs");

	// ElectricityGrenade
	set_name(0x153c80c, "ElectricityGrenade");
	apply_type(0x153c80c, "RTTICompound");
	del_items(0x153e058, DELIT_SIMPLE, 8);
	apply_type(0x153e058, "RTTIBase[1]");
	set_name(0x153e058, "ElectricityGrenade::sBases");

	// ElectricityGrenadeRep
	set_name(0x153c860, "ElectricityGrenadeRep");
	apply_type(0x153c860, "RTTICompound");
	del_items(0x153e060, DELIT_SIMPLE, 8);
	apply_type(0x153e060, "RTTIBase[1]");
	set_name(0x153e060, "ElectricityGrenadeRep::sBases");

	// ElectricityGrenadeResource
	set_name(0x153c8b4, "ElectricityGrenadeResource");
	apply_type(0x153c8b4, "RTTICompound");
	del_items(0x153df9c, DELIT_SIMPLE, 8);
	apply_type(0x153df9c, "RTTIBase[1]");
	set_name(0x153df9c, "ElectricityGrenadeResource::sBases");
	del_items(0x153dfa4, DELIT_SIMPLE, 168);
	apply_type(0x153dfa4, "RTTIAttr[6]");
	set_name(0x153dfa4, "ElectricityGrenadeResource::sAttrs");
	del_items(0x153e04c, DELIT_SIMPLE, 12);
	apply_type(0x153e04c, "RTTIMessageHandler[1]");
	set_name(0x153e04c, "ElectricityGrenadeResource::sMessageHandlers");

	// ElectricityGrid
	set_name(0x153c1c0, "ElectricityGrid");
	apply_type(0x153c1c0, "RTTICompound");
	del_items(0x153d3d4, DELIT_SIMPLE, 8);
	apply_type(0x153d3d4, "RTTIBase[1]");
	set_name(0x153d3d4, "ElectricityGrid::sBases");

	// ElectricityGridNode
	set_name(0x153c0f8, "ElectricityGridNode");
	apply_type(0x153c0f8, "RTTICompound");
	del_items(0x153d380, DELIT_SIMPLE, 8);
	apply_type(0x153d380, "RTTIBase[1]");
	set_name(0x153d380, "ElectricityGridNode::sBases");

	// ElectricityGridNodeResource
	set_name(0x153c16c, "ElectricityGridNodeResource");
	apply_type(0x153c16c, "RTTICompound");
	del_items(0x153d260, DELIT_SIMPLE, 8);
	apply_type(0x153d260, "RTTIBase[1]");
	set_name(0x153d260, "ElectricityGridNodeResource::sBases");
	del_items(0x153d268, DELIT_SIMPLE, 280);
	apply_type(0x153d268, "RTTIAttr[10]");
	set_name(0x153d268, "ElectricityGridNodeResource::sAttrs");

	// ElectricityGridProperties
	set_name(0x153c2bc, "ElectricityGridProperties");
	apply_type(0x153c2bc, "RTTICompound");
	del_items(0x153d3dc, DELIT_SIMPLE, 8);
	apply_type(0x153d3dc, "RTTIBase[1]");
	set_name(0x153d3dc, "ElectricityGridProperties::sBases");
	del_items(0x153d3e4, DELIT_SIMPLE, 84);
	apply_type(0x153d3e4, "RTTIAttr[3]");
	set_name(0x153d3e4, "ElectricityGridProperties::sAttrs");

	// ElectricityGridRep
	set_name(0x153c268, "ElectricityGridRep");
	apply_type(0x153c268, "RTTICompound");
	del_items(0x153d444, DELIT_SIMPLE, 8);
	apply_type(0x153d444, "RTTIBase[1]");
	set_name(0x153d444, "ElectricityGridRep::sBases");

	// ElectricityGridResource
	set_name(0x153c214, "ElectricityGridResource");
	apply_type(0x153c214, "RTTICompound");
	del_items(0x153d394, DELIT_SIMPLE, 8);
	apply_type(0x153d394, "RTTIBase[1]");
	set_name(0x153d394, "ElectricityGridResource::sBases");
	del_items(0x153d39c, DELIT_SIMPLE, 56);
	apply_type(0x153d39c, "RTTIAttr[2]");
	set_name(0x153d39c, "ElectricityGridResource::sAttrs");

	// ElectricityNode
	set_name(0x153bdd4, "ElectricityNode");
	apply_type(0x153bdd4, "RTTICompound");
	del_items(0x153ccb0, DELIT_SIMPLE, 8);
	apply_type(0x153ccb0, "RTTIBase[1]");
	set_name(0x153ccb0, "ElectricityNode::sBases");

	// ElectricityNodeManager
	set_name(0x153c310, "ElectricityNodeManager");
	apply_type(0x153c310, "RTTICompound");
	del_items(0x153ccb8, DELIT_SIMPLE, 8);
	apply_type(0x153ccb8, "RTTIBase[1]");
	set_name(0x153ccb8, "ElectricityNodeManager::sBases");

	// ElectricityNodeManagerRep
	set_name(0x153c3b8, "ElectricityNodeManagerRep");
	apply_type(0x153c3b8, "RTTICompound");
	del_items(0x153d44c, DELIT_SIMPLE, 8);
	apply_type(0x153d44c, "RTTIBase[1]");
	set_name(0x153d44c, "ElectricityNodeManagerRep::sBases");

	// ElectricityNodeManagerResource
	set_name(0x153c364, "ElectricityNodeManagerResource");
	apply_type(0x153c364, "RTTICompound");
	del_items(0x153d06c, DELIT_SIMPLE, 8);
	apply_type(0x153d06c, "RTTIBase[1]");
	set_name(0x153d06c, "ElectricityNodeManagerResource::sBases");
	del_items(0x153d074, DELIT_SIMPLE, 392);
	apply_type(0x153d074, "RTTIAttr[14]");
	set_name(0x153d074, "ElectricityNodeManagerResource::sAttrs");

	// ElectricityNodeResource
	set_name(0x153be9c, "ElectricityNodeResource");
	apply_type(0x153be9c, "RTTICompound");
	del_items(0x153cc00, DELIT_SIMPLE, 8);
	apply_type(0x153cc00, "RTTIBase[1]");
	set_name(0x153cc00, "ElectricityNodeResource::sBases");
	del_items(0x153cc08, DELIT_SIMPLE, 168);
	apply_type(0x153cc08, "RTTIAttr[6]");
	set_name(0x153cc08, "ElectricityNodeResource::sAttrs");

	// ElectricitySetCanJumpFromAction
	set_name(0x14f9a50, "ElectricitySetCanJumpFromAction");
	apply_type(0x14f9a50, "RTTICompound");
	del_items(0x14fe718, DELIT_SIMPLE, 8);
	apply_type(0x14fe718, "RTTIBase[1]");
	set_name(0x14fe718, "ElectricitySetCanJumpFromAction::sBases");
	del_items(0x14fe720, DELIT_SIMPLE, 56);
	apply_type(0x14fe720, "RTTIAttr[2]");
	set_name(0x14fe720, "ElectricitySetCanJumpFromAction::sAttrs");

	// ElectricitySetCanJumpToAction
	set_name(0x14f9aa4, "ElectricitySetCanJumpToAction");
	apply_type(0x14f9aa4, "RTTICompound");
	del_items(0x14fe758, DELIT_SIMPLE, 8);
	apply_type(0x14fe758, "RTTIBase[1]");
	set_name(0x14fe758, "ElectricitySetCanJumpToAction::sBases");
	del_items(0x14fe760, DELIT_SIMPLE, 56);
	apply_type(0x14fe760, "RTTIAttr[2]");
	set_name(0x14fe760, "ElectricitySetCanJumpToAction::sAttrs");

	// ElectricitySpawnEffectEntityResource
	set_name(0x153caa8, "ElectricitySpawnEffectEntityResource");
	apply_type(0x153caa8, "RTTICompound");
	del_items(0x153ce0c, DELIT_SIMPLE, 8);
	apply_type(0x153ce0c, "RTTIBase[1]");
	set_name(0x153ce0c, "ElectricitySpawnEffectEntityResource::sBases");

	// ElectricitySpawnEntityResource
	set_name(0x153ca54, "ElectricitySpawnEntityResource");
	apply_type(0x153ca54, "RTTICompound");
	del_items(0x153cd94, DELIT_SIMPLE, 8);
	apply_type(0x153cd94, "RTTIBase[1]");
	set_name(0x153cd94, "ElectricitySpawnEntityResource::sBases");
	del_items(0x153cd9c, DELIT_SIMPLE, 112);
	apply_type(0x153cd9c, "RTTIAttr[4]");
	set_name(0x153cd9c, "ElectricitySpawnEntityResource::sAttrs");

	// EmitElectricityAction
	set_name(0x14f99a8, "EmitElectricityAction");
	apply_type(0x14f99a8, "RTTICompound");
	del_items(0x14fe6b4, DELIT_SIMPLE, 8);
	apply_type(0x14fe6b4, "RTTIBase[1]");
	set_name(0x14fe6b4, "EmitElectricityAction::sBases");
	del_items(0x14fe6bc, DELIT_SIMPLE, 84);
	apply_type(0x14fe6bc, "RTTIAttr[3]");
	set_name(0x14fe6bc, "EmitElectricityAction::sAttrs");

	// EmitterMeshShapeData
	set_name(0x14c43cc, "EmitterMeshShapeData");
	apply_type(0x14c43cc, "RTTICompound");
	del_items(0x14c4b88, DELIT_SIMPLE, 56);
	apply_type(0x14c4b88, "RTTIAttr[2]");
	set_name(0x14c4b88, "EmitterMeshShapeData::sAttrs");

	// EmitterVertex
	set_name(0x14c4348, "EmitterVertex");
	apply_type(0x14c4348, "RTTICompound");
	del_items(0x14c4b50, DELIT_SIMPLE, 56);
	apply_type(0x14c4b50, "RTTIAttr[2]");
	set_name(0x14c4b50, "EmitterVertex::sAttrs");

	// EnableAnimationOverrideAction
	set_name(0x1541820, "EnableAnimationOverrideAction");
	apply_type(0x1541820, "RTTICompound");
	del_items(0x15431dc, DELIT_SIMPLE, 8);
	apply_type(0x15431dc, "RTTIBase[1]");
	set_name(0x15431dc, "EnableAnimationOverrideAction::sBases");
	del_items(0x15431e4, DELIT_SIMPLE, 56);
	apply_type(0x15431e4, "RTTIAttr[2]");
	set_name(0x15431e4, "EnableAnimationOverrideAction::sAttrs");

	// EnableConstraintsAction
	set_name(0x14f936c, "EnableConstraintsAction");
	apply_type(0x14f936c, "RTTICompound");
	del_items(0x14fdf4c, DELIT_SIMPLE, 8);
	apply_type(0x14fdf4c, "RTTIBase[1]");
	set_name(0x14fdf4c, "EnableConstraintsAction::sBases");
	del_items(0x14fdf54, DELIT_SIMPLE, 56);
	apply_type(0x14fdf54, "RTTIAttr[2]");
	set_name(0x14fdf54, "EnableConstraintsAction::sAttrs");

	// EnableInteractiveEntityAction
	set_name(0x14f90cc, "EnableInteractiveEntityAction");
	apply_type(0x14f90cc, "RTTICompound");
	del_items(0x14fdc18, DELIT_SIMPLE, 8);
	apply_type(0x14fdc18, "RTTIBase[1]");
	set_name(0x14fdc18, "EnableInteractiveEntityAction::sBases");
	del_items(0x14fdc20, DELIT_SIMPLE, 56);
	apply_type(0x14fdc20, "RTTIAttr[2]");
	set_name(0x14fdc20, "EnableInteractiveEntityAction::sAttrs");

	// EnablePartsAction
	set_name(0x14f9024, "EnablePartsAction");
	apply_type(0x14f9024, "RTTICompound");
	del_items(0x14fdb0c, DELIT_SIMPLE, 8);
	apply_type(0x14fdb0c, "RTTIBase[1]");
	set_name(0x14fdb0c, "EnablePartsAction::sBases");
	del_items(0x14fdb14, DELIT_SIMPLE, 140);
	apply_type(0x14fdb14, "RTTIAttr[5]");
	set_name(0x14fdb14, "EnablePartsAction::sAttrs");

	// EncounterDifficultyModifier
	set_name(0x152b04c, "EncounterDifficultyModifier");
	apply_type(0x152b04c, "RTTICompound");
	del_items(0x152bbf4, DELIT_SIMPLE, 8);
	apply_type(0x152bbf4, "RTTIBase[1]");
	set_name(0x152bbf4, "EncounterDifficultyModifier::sBases");
	del_items(0x152bbfc, DELIT_SIMPLE, 196);
	apply_type(0x152bbfc, "RTTIAttr[7]");
	set_name(0x152bbfc, "EncounterDifficultyModifier::sAttrs");

	// EndDemoEventInstance
	set_name(0x151a470, "EndDemoEventInstance");
	apply_type(0x151a470, "RTTICompound");
	del_items(0x151c174, DELIT_SIMPLE, 8);
	apply_type(0x151c174, "RTTIBase[1]");
	set_name(0x151c174, "EndDemoEventInstance::sBases");

	// EndDemoEventResource
	set_name(0x151a41c, "EndDemoEventResource");
	apply_type(0x151a41c, "RTTICompound");
	del_items(0x151c16c, DELIT_SIMPLE, 8);
	apply_type(0x151c16c, "RTTIBase[1]");
	set_name(0x151c16c, "EndDemoEventResource::sBases");

	// EnemyFactionAction
	set_name(0x14f8d20, "EnemyFactionAction");
	apply_type(0x14f8d20, "RTTICompound");
	del_items(0x14fd6d4, DELIT_SIMPLE, 8);
	apply_type(0x14fd6d4, "RTTIBase[1]");
	set_name(0x14fd6d4, "EnemyFactionAction::sBases");

	// EnergyProjectile
	set_name(0x153c754, "EnergyProjectile");
	apply_type(0x153c754, "RTTICompound");
	del_items(0x153df80, DELIT_SIMPLE, 8);
	apply_type(0x153df80, "RTTIBase[1]");
	set_name(0x153df80, "EnergyProjectile::sBases");

	// EnergyProjectileRep
	set_name(0x153c700, "EnergyProjectileRep");
	apply_type(0x153c700, "RTTICompound");
	del_items(0x153df88, DELIT_SIMPLE, 8);
	apply_type(0x153df88, "RTTIBase[1]");
	set_name(0x153df88, "EnergyProjectileRep::sBases");

	// EnergyProjectileResource
	set_name(0x153c7b8, "EnergyProjectileResource");
	apply_type(0x153c7b8, "RTTICompound");
	del_items(0x153ded0, DELIT_SIMPLE, 8);
	apply_type(0x153ded0, "RTTIBase[1]");
	set_name(0x153ded0, "EnergyProjectileResource::sBases");
	del_items(0x153ded8, DELIT_SIMPLE, 168);
	apply_type(0x153ded8, "RTTIAttr[6]");
	set_name(0x153ded8, "EnergyProjectileResource::sAttrs");

	// Entity
	set_name(0x14e21d0, "Entity");
	apply_type(0x14e21d0, "RTTICompound");
	del_items(0x14e4778, DELIT_SIMPLE, 32);
	apply_type(0x14e4778, "RTTIBase[4]");
	set_name(0x14e4778, "Entity::sBases");
	del_items(0x14e4798, DELIT_SIMPLE, 336);
	apply_type(0x14e4798, "RTTIAttr[12]");
	set_name(0x14e4798, "Entity::sAttrs");
	del_items(0x14e48e8, DELIT_SIMPLE, 1464);
	apply_type(0x14e48e8, "RTTIFunction[61]");
	set_name(0x14e48e8, "Entity::sFunctions");

	// EntityActorInstance
	set_name(0x1520290, "EntityActorInstance");
	apply_type(0x1520290, "RTTICompound");
	del_items(0x1521394, DELIT_SIMPLE, 8);
	apply_type(0x1521394, "RTTIBase[1]");
	set_name(0x1521394, "EntityActorInstance::sBases");

	// EntityActorResource
	set_name(0x152023c, "EntityActorResource");
	apply_type(0x152023c, "RTTICompound");
	del_items(0x1521258, DELIT_SIMPLE, 8);
	apply_type(0x1521258, "RTTIBase[1]");
	set_name(0x1521258, "EntityActorResource::sBases");
	del_items(0x1521260, DELIT_SIMPLE, 308);
	apply_type(0x1521260, "RTTIAttr[11]");
	set_name(0x1521260, "EntityActorResource::sAttrs");

	// EntityComponent
	set_name(0x14e243c, "EntityComponent");
	apply_type(0x14e243c, "RTTICompound");
	del_items(0x14e4764, DELIT_SIMPLE, 16);
	apply_type(0x14e4764, "RTTIBase[2]");
	set_name(0x14e4764, "EntityComponent::sBases");

	// EntityComponentRep
	set_name(0x14e2490, "EntityComponentRep");
	apply_type(0x14e2490, "RTTICompound");
	del_items(0x14e4ea8, DELIT_SIMPLE, 8);
	apply_type(0x14e4ea8, "RTTIBase[1]");
	set_name(0x14e4ea8, "EntityComponentRep::sBases");

	// EntityComponentResource
	set_name(0x14e2504, "EntityComponentResource");
	apply_type(0x14e2504, "RTTICompound");
	del_items(0x14e404c, DELIT_SIMPLE, 8);
	apply_type(0x14e404c, "RTTIBase[1]");
	set_name(0x14e404c, "EntityComponentResource::sBases");

	// EntityPlaceHolder
	set_name(0x14e2020, "EntityPlaceHolder");
	apply_type(0x14e2020, "RTTICompound");
	del_items(0x14e4660, DELIT_SIMPLE, 8);
	apply_type(0x14e4660, "RTTIBase[1]");
	set_name(0x14e4660, "EntityPlaceHolder::sBases");
	del_items(0x14e4668, DELIT_SIMPLE, 252);
	apply_type(0x14e4668, "RTTIAttr[9]");
	set_name(0x14e4668, "EntityPlaceHolder::sAttrs");

	// EntityPlaceHolderAttr
	set_name(0x14e1fcc, "EntityPlaceHolderAttr");
	apply_type(0x14e1fcc, "RTTICompound");
	del_items(0x14e45e8, DELIT_SIMPLE, 8);
	apply_type(0x14e45e8, "RTTIBase[1]");
	set_name(0x14e45e8, "EntityPlaceHolderAttr::sBases");
	del_items(0x14e45f0, DELIT_SIMPLE, 112);
	apply_type(0x14e45f0, "RTTIAttr[4]");
	set_name(0x14e45f0, "EntityPlaceHolderAttr::sAttrs");

	// EntityRep
	set_name(0x14e22f0, "EntityRep");
	apply_type(0x14e22f0, "RTTICompound");
	del_items(0x14e4eb8, DELIT_SIMPLE, 16);
	apply_type(0x14e4eb8, "RTTIBase[2]");
	set_name(0x14e4eb8, "EntityRep::sBases");
	del_items(0x14e4ec8, DELIT_SIMPLE, 12);
	apply_type(0x14e4ec8, "RTTIMessageHandler[1]");
	set_name(0x14e4ec8, "EntityRep::sMessageHandlers");

	// EntityResource
	set_name(0x14e23e8, "EntityResource");
	apply_type(0x14e23e8, "RTTICompound");
	del_items(0x14e4098, DELIT_SIMPLE, 8);
	apply_type(0x14e4098, "RTTIBase[1]");
	set_name(0x14e4098, "EntityResource::sBases");
	del_items(0x14e40a0, DELIT_SIMPLE, 812);
	apply_type(0x14e40a0, "RTTIAttr[29]");
	set_name(0x14e40a0, "EntityResource::sAttrs");

	// EntityScoreSettings
	set_name(0x14f0534, "EntityScoreSettings");
	apply_type(0x14f0534, "RTTICompound");
	del_items(0x14f3edc, DELIT_SIMPLE, 8);
	apply_type(0x14f3edc, "RTTIBase[1]");
	set_name(0x14f3edc, "EntityScoreSettings::sBases");
	del_items(0x14f3ee4, DELIT_SIMPLE, 112);
	apply_type(0x14f3ee4, "RTTIAttr[4]");
	set_name(0x14f3ee4, "EntityScoreSettings::sAttrs");

	// EntityStatUnlockableResource
	set_name(0x152af1c, "EntityStatUnlockableResource");
	apply_type(0x152af1c, "RTTICompound");
	del_items(0x152bb30, DELIT_SIMPLE, 8);
	apply_type(0x152bb30, "RTTIBase[1]");
	set_name(0x152bb30, "EntityStatUnlockableResource::sBases");
	del_items(0x152bb38, DELIT_SIMPLE, 112);
	apply_type(0x152bb38, "RTTIAttr[4]");
	set_name(0x152bb38, "EntityStatUnlockableResource::sAttrs");

	// EntitySticker
	set_name(0x1500d08, "EntitySticker");
	apply_type(0x1500d08, "RTTICompound");
	del_items(0x150165c, DELIT_SIMPLE, 16);
	apply_type(0x150165c, "RTTIBase[2]");
	set_name(0x150165c, "EntitySticker::sBases");

	// EntityStickerResource
	set_name(0x1500d6c, "EntityStickerResource");
	apply_type(0x1500d6c, "RTTICompound");
	del_items(0x150166c, DELIT_SIMPLE, 8);
	apply_type(0x150166c, "RTTIBase[1]");
	set_name(0x150166c, "EntityStickerResource::sBases");
	del_items(0x1501674, DELIT_SIMPLE, 168);
	apply_type(0x1501674, "RTTIAttr[6]");
	set_name(0x1501674, "EntityStickerResource::sAttrs");

	// EventInstance
	set_name(0x1519c54, "EventInstance");
	apply_type(0x1519c54, "RTTICompound");
	del_items(0x151b0ec, DELIT_SIMPLE, 16);
	apply_type(0x151b0ec, "RTTIBase[2]");
	set_name(0x151b0ec, "EventInstance::sBases");

	// EventPositionLocatorInstance
	set_name(0x1520338, "EventPositionLocatorInstance");
	apply_type(0x1520338, "RTTICompound");
	del_items(0x15217ec, DELIT_SIMPLE, 8);
	apply_type(0x15217ec, "RTTIBase[1]");
	set_name(0x15217ec, "EventPositionLocatorInstance::sBases");

	// EventPositionLocatorResource
	set_name(0x15202e4, "EventPositionLocatorResource");
	apply_type(0x15202e4, "RTTICompound");
	del_items(0x1521790, DELIT_SIMPLE, 8);
	apply_type(0x1521790, "RTTIBase[1]");
	set_name(0x1521790, "EventPositionLocatorResource::sBases");
	del_items(0x1521798, DELIT_SIMPLE, 84);
	apply_type(0x1521798, "RTTIAttr[3]");
	set_name(0x1521798, "EventPositionLocatorResource::sAttrs");

	// EventResource
	set_name(0x1519c00, "EventResource");
	apply_type(0x1519c00, "RTTICompound");
	del_items(0x151b004, DELIT_SIMPLE, 8);
	apply_type(0x151b004, "RTTIBase[1]");
	set_name(0x151b004, "EventResource::sBases");
	del_items(0x151b00c, DELIT_SIMPLE, 224);
	apply_type(0x151b00c, "RTTIAttr[8]");
	set_name(0x151b00c, "EventResource::sAttrs");

	// ExoSkeleton
	set_name(0x152674c, "ExoSkeleton");
	apply_type(0x152674c, "RTTICompound");
	del_items(0x1528450, DELIT_SIMPLE, 8);
	apply_type(0x1528450, "RTTIBase[1]");
	set_name(0x1528450, "ExoSkeleton::sBases");
	del_items(0x1528458, DELIT_SIMPLE, 48);
	apply_type(0x1528458, "RTTIFunction[2]");
	set_name(0x1528458, "ExoSkeleton::sFunctions");

	// ExoSkeletonAIController
	set_name(0x1526848, "ExoSkeletonAIController");
	apply_type(0x1526848, "RTTICompound");
	del_items(0x15284a0, DELIT_SIMPLE, 8);
	apply_type(0x15284a0, "RTTIBase[1]");
	set_name(0x15284a0, "ExoSkeletonAIController::sBases");

	// ExoSkeletonController
	set_name(0x15267f4, "ExoSkeletonController");
	apply_type(0x15267f4, "RTTICompound");
	del_items(0x1528488, DELIT_SIMPLE, 8);
	apply_type(0x1528488, "RTTIBase[1]");
	set_name(0x1528488, "ExoSkeletonController::sBases");

	// ExoSkeletonJoystickController
	set_name(0x152689c, "ExoSkeletonJoystickController");
	apply_type(0x152689c, "RTTICompound");
	del_items(0x15284a8, DELIT_SIMPLE, 8);
	apply_type(0x15284a8, "RTTIBase[1]");
	set_name(0x15284a8, "ExoSkeletonJoystickController::sBases");

	// ExoSkeletonMover
	set_name(0x15269a8, "ExoSkeletonMover");
	apply_type(0x15269a8, "RTTICompound");
	del_items(0x1528490, DELIT_SIMPLE, 8);
	apply_type(0x1528490, "RTTIBase[1]");
	set_name(0x1528490, "ExoSkeletonMover::sBases");

	// ExoSkeletonMoverResource
	set_name(0x15269fc, "ExoSkeletonMoverResource");
	apply_type(0x15269fc, "RTTICompound");
	del_items(0x15284b0, DELIT_SIMPLE, 8);
	apply_type(0x15284b0, "RTTIBase[1]");
	set_name(0x15284b0, "ExoSkeletonMoverResource::sBases");

	// ExoSkeletonRep
	set_name(0x15267a0, "ExoSkeletonRep");
	apply_type(0x15267a0, "RTTICompound");
	del_items(0x1528498, DELIT_SIMPLE, 8);
	apply_type(0x1528498, "RTTIBase[1]");
	set_name(0x1528498, "ExoSkeletonRep::sBases");

	// ExoSkeletonResource
	set_name(0x1526954, "ExoSkeletonResource");
	apply_type(0x1526954, "RTTICompound");
	del_items(0x1527e54, DELIT_SIMPLE, 8);
	apply_type(0x1527e54, "RTTIBase[1]");
	set_name(0x1527e54, "ExoSkeletonResource::sBases");
	del_items(0x1527e5c, DELIT_SIMPLE, 1512);
	apply_type(0x1527e5c, "RTTIAttr[54]");
	set_name(0x1527e5c, "ExoSkeletonResource::sAttrs");
	del_items(0x1528444, DELIT_SIMPLE, 12);
	apply_type(0x1528444, "RTTIMessageHandler[1]");
	set_name(0x1528444, "ExoSkeletonResource::sMessageHandlers");

	// Explosion
	set_name(0x15245d4, "Explosion");
	apply_type(0x15245d4, "RTTICompound");
	del_items(0x15255f4, DELIT_SIMPLE, 8);
	apply_type(0x15255f4, "RTTIBase[1]");
	set_name(0x15255f4, "Explosion::sBases");

	// ExplosionOnContactComponent
	set_name(0x152468c, "ExplosionOnContactComponent");
	apply_type(0x152468c, "RTTICompound");
	del_items(0x15255fc, DELIT_SIMPLE, 8);
	apply_type(0x15255fc, "RTTIBase[1]");
	set_name(0x15255fc, "ExplosionOnContactComponent::sBases");

	// ExplosionResource
	set_name(0x1524638, "ExplosionResource");
	apply_type(0x1524638, "RTTICompound");
	del_items(0x1525288, DELIT_SIMPLE, 8);
	apply_type(0x1525288, "RTTIBase[1]");
	set_name(0x1525288, "ExplosionResource::sBases");
	del_items(0x1525290, DELIT_SIMPLE, 532);
	apply_type(0x1525290, "RTTIAttr[19]");
	set_name(0x1525290, "ExplosionResource::sAttrs");
	del_items(0x15254a4, DELIT_SIMPLE, 12);
	apply_type(0x15254a4, "RTTIMessageHandler[1]");
	set_name(0x15254a4, "ExplosionResource::sMessageHandlers");

	// ExplosiveLocation
	set_name(0x150811c, "ExplosiveLocation");
	apply_type(0x150811c, "RTTICompound");
	del_items(0x1509e44, DELIT_SIMPLE, 8);
	apply_type(0x1509e44, "RTTIBase[1]");
	set_name(0x1509e44, "ExplosiveLocation::sBases");
	del_items(0x1509e4c, DELIT_SIMPLE, 120);
	apply_type(0x1509e4c, "RTTIFunction[5]");
	set_name(0x1509e4c, "ExplosiveLocation::sFunctions");

	// ExplosiveLocationAiController
	set_name(0x150826c, "ExplosiveLocationAiController");
	apply_type(0x150826c, "RTTICompound");
	del_items(0x1509edc, DELIT_SIMPLE, 8);
	apply_type(0x1509edc, "RTTIBase[1]");
	set_name(0x1509edc, "ExplosiveLocationAiController::sBases");

	// ExplosiveLocationController
	set_name(0x15081c4, "ExplosiveLocationController");
	apply_type(0x15081c4, "RTTICompound");
	del_items(0x1509ec4, DELIT_SIMPLE, 8);
	apply_type(0x1509ec4, "RTTIBase[1]");
	set_name(0x1509ec4, "ExplosiveLocationController::sBases");

	// ExplosiveLocationIndicatorLight
	set_name(0x1508064, "ExplosiveLocationIndicatorLight");
	apply_type(0x1508064, "RTTICompound");
	del_items(0x1509b3c, DELIT_SIMPLE, 84);
	apply_type(0x1509b3c, "RTTIAttr[3]");
	set_name(0x1509b3c, "ExplosiveLocationIndicatorLight::sAttrs");

	// ExplosiveLocationJoystickController
	set_name(0x1508218, "ExplosiveLocationJoystickController");
	apply_type(0x1508218, "RTTICompound");
	del_items(0x1509ed4, DELIT_SIMPLE, 8);
	apply_type(0x1509ed4, "RTTIBase[1]");
	set_name(0x1509ed4, "ExplosiveLocationJoystickController::sBases");

	// ExplosiveLocationRep
	set_name(0x1508170, "ExplosiveLocationRep");
	apply_type(0x1508170, "RTTICompound");
	del_items(0x1509ecc, DELIT_SIMPLE, 8);
	apply_type(0x1509ecc, "RTTIBase[1]");
	set_name(0x1509ecc, "ExplosiveLocationRep::sBases");

	// ExplosiveLocationResource
	set_name(0x15080b8, "ExplosiveLocationResource");
	apply_type(0x15080b8, "RTTICompound");
	del_items(0x1509b9c, DELIT_SIMPLE, 8);
	apply_type(0x1509b9c, "RTTIBase[1]");
	set_name(0x1509b9c, "ExplosiveLocationResource::sBases");
	del_items(0x1509ba4, DELIT_SIMPLE, 672);
	apply_type(0x1509ba4, "RTTIAttr[24]");
	set_name(0x1509ba4, "ExplosiveLocationResource::sAttrs");

	// ExposureSettingsResource
	set_name(0x14cbd9c, "ExposureSettingsResource");
	apply_type(0x14cbd9c, "RTTICompound");
	del_items(0x14ccd28, DELIT_SIMPLE, 8);
	apply_type(0x14ccd28, "RTTIBase[1]");
	set_name(0x14ccd28, "ExposureSettingsResource::sBases");
	del_items(0x14ccd30, DELIT_SIMPLE, 252);
	apply_type(0x14ccd30, "RTTIAttr[9]");
	set_name(0x14ccd30, "ExposureSettingsResource::sAttrs");

	// ExternalAnimationEvent
	set_name(0x14b9b34, "ExternalAnimationEvent");
	apply_type(0x14b9b34, "RTTICompound");
	del_items(0x14bb6a4, DELIT_SIMPLE, 8);
	apply_type(0x14bb6a4, "RTTIBase[1]");
	set_name(0x14bb6a4, "ExternalAnimationEvent::sBases");
	del_items(0x14bb6ac, DELIT_SIMPLE, 28);
	apply_type(0x14bb6ac, "RTTIAttr[1]");
	set_name(0x14bb6ac, "ExternalAnimationEvent::sAttrs");

	// ExternalAnimationSoundEvent
	set_name(0x14b9b98, "ExternalAnimationSoundEvent");
	apply_type(0x14b9b98, "RTTICompound");
	del_items(0x14bb6c8, DELIT_SIMPLE, 8);
	apply_type(0x14bb6c8, "RTTIBase[1]");
	set_name(0x14bb6c8, "ExternalAnimationSoundEvent::sBases");
	del_items(0x14bb6d0, DELIT_SIMPLE, 28);
	apply_type(0x14bb6d0, "RTTIAttr[1]");
	set_name(0x14bb6d0, "ExternalAnimationSoundEvent::sAttrs");

	// ExternalAnimationWWiseSoundEvent
	set_name(0x14b9bfc, "ExternalAnimationWWiseSoundEvent");
	apply_type(0x14b9bfc, "RTTICompound");
	del_items(0x14bb6ec, DELIT_SIMPLE, 8);
	apply_type(0x14bb6ec, "RTTIBase[1]");
	set_name(0x14bb6ec, "ExternalAnimationWWiseSoundEvent::sBases");
	del_items(0x14bb6f4, DELIT_SIMPLE, 28);
	apply_type(0x14bb6f4, "RTTIAttr[1]");
	set_name(0x14bb6f4, "ExternalAnimationWWiseSoundEvent::sAttrs");

	// ExtraAmmoSettings
	set_name(0x14eee78, "ExtraAmmoSettings");
	apply_type(0x14eee78, "RTTICompound");
	del_items(0x14f2028, DELIT_SIMPLE, 84);
	apply_type(0x14f2028, "RTTIAttr[3]");
	set_name(0x14f2028, "ExtraAmmoSettings::sAttrs");

	// ExtraDamageSettings
	set_name(0x14eef84, "ExtraDamageSettings");
	apply_type(0x14eef84, "RTTICompound");
	del_items(0x14f20a0, DELIT_SIMPLE, 56);
	apply_type(0x14f20a0, "RTTIAttr[2]");
	set_name(0x14f20a0, "ExtraDamageSettings::sAttrs");

	// FArc
	set_name(0x14b7ad0, "FArc");
	apply_type(0x14b7ad0, "RTTICompound");
	del_items(0x14b83bc, DELIT_SIMPLE, 56);
	apply_type(0x14b83bc, "RTTIAttr[2]");
	set_name(0x14b83bc, "FArc::sAttrs");

	// FOrientation
	set_name(0x14b7b24, "FOrientation");
	apply_type(0x14b7b24, "RTTICompound");
	del_items(0x14b83a0, DELIT_SIMPLE, 28);
	apply_type(0x14b83a0, "RTTIAttr[1]");
	set_name(0x14b83a0, "FOrientation::sAttrs");

	// FPDestructibilityEffect
	set_name(0x1526900, "FPDestructibilityEffect");
	apply_type(0x1526900, "RTTICompound");
	del_items(0x1527d68, DELIT_SIMPLE, 224);
	apply_type(0x1527d68, "RTTIAttr[8]");
	set_name(0x1527d68, "FPDestructibilityEffect::sAttrs");

	// FPMoverSuspension
	set_name(0x14fba80, "FPMoverSuspension");
	apply_type(0x14fba80, "RTTICompound");
	del_items(0x14ffb58, DELIT_SIMPLE, 56);
	apply_type(0x14ffb58, "RTTIAttr[2]");
	set_name(0x14ffb58, "FPMoverSuspension::sAttrs");

	// FQuat
	set_name(0x14b7ed0, "FQuat");
	apply_type(0x14b7ed0, "RTTICompound");
	del_items(0x14b82f8, DELIT_SIMPLE, 112);
	apply_type(0x14b82f8, "RTTIAttr[4]");
	set_name(0x14b82f8, "FQuat::sAttrs");

	// FRGBAColor
	set_name(0x14ae4d8, "FRGBAColor");
	apply_type(0x14ae4d8, "RTTICompound");
	del_items(0x14aed48, DELIT_SIMPLE, 112);
	apply_type(0x14aed48, "RTTIAttr[4]");
	set_name(0x14aed48, "FRGBAColor::sAttrs");

	// FRGBColor
	set_name(0x14ae52c, "FRGBColor");
	apply_type(0x14ae52c, "RTTICompound");
	del_items(0x14aedb8, DELIT_SIMPLE, 84);
	apply_type(0x14aedb8, "RTTIAttr[3]");
	set_name(0x14aedb8, "FRGBColor::sAttrs");

	// FRange
	set_name(0x14ab478, "FRange");
	apply_type(0x14ab478, "RTTICompound");
	del_items(0x14ab988, DELIT_SIMPLE, 56);
	apply_type(0x14ab988, "RTTIAttr[2]");
	set_name(0x14ab988, "FRange::sAttrs");

	// FRect
	set_name(0x14b7b78, "FRect");
	apply_type(0x14b7b78, "RTTICompound");
	del_items(0x14b8510, DELIT_SIMPLE, 112);
	apply_type(0x14b8510, "RTTIAttr[4]");
	set_name(0x14b8510, "FRect::sAttrs");

	// FSize
	set_name(0x14b8020, "FSize");
	apply_type(0x14b8020, "RTTICompound");
	del_items(0x14b83f8, DELIT_SIMPLE, 56);
	apply_type(0x14b83f8, "RTTIAttr[2]");
	set_name(0x14b83f8, "FSize::sAttrs");

	// FVector2
	set_name(0x14b7bdc, "FVector2");
	apply_type(0x14b7bdc, "RTTICompound");
	del_items(0x14b8368, DELIT_SIMPLE, 56);
	apply_type(0x14b8368, "RTTIAttr[2]");
	set_name(0x14b8368, "FVector2::sAttrs");

	// FVector3
	set_name(0x14b7c40, "FVector3");
	apply_type(0x14b7c40, "RTTICompound");
	del_items(0x14b8170, DELIT_SIMPLE, 84);
	apply_type(0x14b8170, "RTTIAttr[3]");
	set_name(0x14b8170, "FVector3::sAttrs");

	// FVector4
	set_name(0x14b7c94, "FVector4");
	apply_type(0x14b7c94, "RTTICompound");
	del_items(0x14b81c4, DELIT_SIMPLE, 112);
	apply_type(0x14b81c4, "RTTIAttr[4]");
	set_name(0x14b81c4, "FVector4::sAttrs");

	// FaceTowardsEventInstance
	set_name(0x1519dc0, "FaceTowardsEventInstance");
	apply_type(0x1519dc0, "RTTICompound");
	del_items(0x151bd24, DELIT_SIMPLE, 8);
	apply_type(0x151bd24, "RTTIBase[1]");
	set_name(0x151bd24, "FaceTowardsEventInstance::sBases");

	// FaceTowardsEventResource
	set_name(0x1519d6c, "FaceTowardsEventResource");
	apply_type(0x1519d6c, "RTTICompound");
	del_items(0x151bce4, DELIT_SIMPLE, 8);
	apply_type(0x151bce4, "RTTIBase[1]");
	set_name(0x151bce4, "FaceTowardsEventResource::sBases");
	del_items(0x151bcec, DELIT_SIMPLE, 56);
	apply_type(0x151bcec, "RTTIAttr[2]");
	set_name(0x151bcec, "FaceTowardsEventResource::sAttrs");

	// FacialAnimationEventInstance
	set_name(0x1519f64, "FacialAnimationEventInstance");
	apply_type(0x1519f64, "RTTICompound");
	del_items(0x151be64, DELIT_SIMPLE, 8);
	apply_type(0x151be64, "RTTIBase[1]");
	set_name(0x151be64, "FacialAnimationEventInstance::sBases");

	// FacialAnimationEventResource
	set_name(0x1519f10, "FacialAnimationEventResource");
	apply_type(0x1519f10, "RTTICompound");
	del_items(0x151bdd0, DELIT_SIMPLE, 8);
	apply_type(0x151bdd0, "RTTIBase[1]");
	set_name(0x151bdd0, "FacialAnimationEventResource::sBases");
	del_items(0x151bdd8, DELIT_SIMPLE, 140);
	apply_type(0x151bdd8, "RTTIAttr[5]");
	set_name(0x151bdd8, "FacialAnimationEventResource::sAttrs");

	// FacialAnimationResource
	set_name(0x153a9b0, "FacialAnimationResource");
	apply_type(0x153a9b0, "RTTICompound");
	del_items(0x153b40c, DELIT_SIMPLE, 8);
	apply_type(0x153b40c, "RTTIBase[1]");
	set_name(0x153b40c, "FacialAnimationResource::sBases");
	del_items(0x153b414, DELIT_SIMPLE, 56);
	apply_type(0x153b414, "RTTIAttr[2]");
	set_name(0x153b414, "FacialAnimationResource::sAttrs");

	// FacialExpressionAnimatorResource
	set_name(0x153aa14, "FacialExpressionAnimatorResource");
	apply_type(0x153aa14, "RTTICompound");
	del_items(0x153b4c4, DELIT_SIMPLE, 8);
	apply_type(0x153b4c4, "RTTIBase[1]");
	set_name(0x153b4c4, "FacialExpressionAnimatorResource::sBases");
	del_items(0x153b4cc, DELIT_SIMPLE, 392);
	apply_type(0x153b4cc, "RTTIAttr[14]");
	set_name(0x153b4cc, "FacialExpressionAnimatorResource::sAttrs");
	del_items(0x153b654, DELIT_SIMPLE, 12);
	apply_type(0x153b654, "RTTIMessageHandler[1]");
	set_name(0x153b654, "FacialExpressionAnimatorResource::sMessageHandlers");

	// FacialExpressionEventInstance
	set_name(0x1519e68, "FacialExpressionEventInstance");
	apply_type(0x1519e68, "RTTICompound");
	del_items(0x151bdc0, DELIT_SIMPLE, 8);
	apply_type(0x151bdc0, "RTTIBase[1]");
	set_name(0x151bdc0, "FacialExpressionEventInstance::sBases");

	// FacialExpressionEventResource
	set_name(0x1519e14, "FacialExpressionEventResource");
	apply_type(0x1519e14, "RTTICompound");
	del_items(0x151bd2c, DELIT_SIMPLE, 8);
	apply_type(0x151bd2c, "RTTIBase[1]");
	set_name(0x151bd2c, "FacialExpressionEventResource::sBases");
	del_items(0x151bd34, DELIT_SIMPLE, 140);
	apply_type(0x151bd34, "RTTIAttr[5]");
	set_name(0x151bd34, "FacialExpressionEventResource::sAttrs");

	// FacialExpressionLOD
	set_name(0x153aa78, "FacialExpressionLOD");
	apply_type(0x153aa78, "RTTICompound");
	del_items(0x153b44c, DELIT_SIMPLE, 8);
	apply_type(0x153b44c, "RTTIBase[1]");
	set_name(0x153b44c, "FacialExpressionLOD::sBases");
	del_items(0x153b454, DELIT_SIMPLE, 112);
	apply_type(0x153b454, "RTTIAttr[4]");
	set_name(0x153b454, "FacialExpressionLOD::sAttrs");

	// FactionAction
	set_name(0x14f8ccc, "FactionAction");
	apply_type(0x14f8ccc, "RTTICompound");
	del_items(0x14fd694, DELIT_SIMPLE, 8);
	apply_type(0x14fd694, "RTTIBase[1]");
	set_name(0x14fd694, "FactionAction::sBases");
	del_items(0x14fd69c, DELIT_SIMPLE, 56);
	apply_type(0x14fd69c, "RTTIAttr[2]");
	set_name(0x14fd69c, "FactionAction::sAttrs");

	// FactionScore
	set_name(0x14f037c, "FactionScore");
	apply_type(0x14f037c, "RTTICompound");
	del_items(0x14f28b0, DELIT_SIMPLE, 8);
	apply_type(0x14f28b0, "RTTIBase[1]");
	set_name(0x14f28b0, "FactionScore::sBases");
	del_items(0x14f28b8, DELIT_SIMPLE, 48);
	apply_type(0x14f28b8, "RTTIFunction[2]");
	set_name(0x14f28b8, "FactionScore::sFunctions");

	// FellThroughWorldManager
	set_name(0x14f0a28, "FellThroughWorldManager");
	apply_type(0x14f0a28, "RTTICompound");
	del_items(0x14f1f1c, DELIT_SIMPLE, 8);
	apply_type(0x14f1f1c, "RTTIBase[1]");
	set_name(0x14f1f1c, "FellThroughWorldManager::sBases");

	// FellThroughWorldResource
	set_name(0x14f09d4, "FellThroughWorldResource");
	apply_type(0x14f09d4, "RTTICompound");
	del_items(0x14f1ef8, DELIT_SIMPLE, 8);
	apply_type(0x14f1ef8, "RTTIBase[1]");
	set_name(0x14f1ef8, "FellThroughWorldResource::sBases");
	del_items(0x14f1f00, DELIT_SIMPLE, 28);
	apply_type(0x14f1f00, "RTTIAttr[1]");
	set_name(0x14f1f00, "FellThroughWorldResource::sAttrs");

	// FireSystem
	set_name(0x15246e0, "FireSystem");
	apply_type(0x15246e0, "RTTICompound");
	del_items(0x1525608, DELIT_SIMPLE, 8);
	apply_type(0x1525608, "RTTIBase[1]");
	set_name(0x1525608, "FireSystem::sBases");

	// FireWeaponEventInstance
	set_name(0x151a0c4, "FireWeaponEventInstance");
	apply_type(0x151a0c4, "RTTICompound");
	del_items(0x151bfb8, DELIT_SIMPLE, 8);
	apply_type(0x151bfb8, "RTTIBase[1]");
	set_name(0x151bfb8, "FireWeaponEventInstance::sBases");

	// FireWeaponEventResource
	set_name(0x151a070, "FireWeaponEventResource");
	apply_type(0x151a070, "RTTICompound");
	del_items(0x151beb4, DELIT_SIMPLE, 8);
	apply_type(0x151beb4, "RTTIBase[1]");
	set_name(0x151beb4, "FireWeaponEventResource::sBases");
	del_items(0x151bebc, DELIT_SIMPLE, 252);
	apply_type(0x151bebc, "RTTIAttr[9]");
	set_name(0x151bebc, "FireWeaponEventResource::sAttrs");

	// Firearm
	set_name(0x154a8c0, "Firearm");
	apply_type(0x154a8c0, "RTTICompound");
	del_items(0x154ad5c, DELIT_SIMPLE, 8);
	apply_type(0x154ad5c, "RTTIBase[1]");
	set_name(0x154ad5c, "Firearm::sBases");
	del_items(0x154ad64, DELIT_SIMPLE, 48);
	apply_type(0x154ad64, "RTTIFunction[2]");
	set_name(0x154ad64, "Firearm::sFunctions");

	// FirearmController
	set_name(0x154ab2c, "FirearmController");
	apply_type(0x154ab2c, "RTTICompound");
	del_items(0x154ad54, DELIT_SIMPLE, 8);
	apply_type(0x154ad54, "RTTIBase[1]");
	set_name(0x154ad54, "FirearmController::sBases");

	// FirearmResource
	set_name(0x154a934, "FirearmResource");
	apply_type(0x154a934, "RTTICompound");
	del_items(0x154acbc, DELIT_SIMPLE, 8);
	apply_type(0x154acbc, "RTTIBase[1]");
	set_name(0x154acbc, "FirearmResource::sBases");
	del_items(0x154acc4, DELIT_SIMPLE, 56);
	apply_type(0x154acc4, "RTTIAttr[2]");
	set_name(0x154acc4, "FirearmResource::sAttrs");

	// FirstPersonAnimatedOverlayResource
	set_name(0x153a8d8, "FirstPersonAnimatedOverlayResource");
	apply_type(0x153a8d8, "RTTICompound");
	del_items(0x153b2b4, DELIT_SIMPLE, 8);
	apply_type(0x153b2b4, "RTTIBase[1]");
	set_name(0x153b2b4, "FirstPersonAnimatedOverlayResource::sBases");
	del_items(0x153b2bc, DELIT_SIMPLE, 280);
	apply_type(0x153b2bc, "RTTIAttr[10]");
	set_name(0x153b2bc, "FirstPersonAnimatedOverlayResource::sAttrs");

	// FirstPersonAnimationResource
	set_name(0x153a874, "FirstPersonAnimationResource");
	apply_type(0x153a874, "RTTICompound");
	del_items(0x153b118, DELIT_SIMPLE, 8);
	apply_type(0x153b118, "RTTIBase[1]");
	set_name(0x153b118, "FirstPersonAnimationResource::sBases");
	del_items(0x153b120, DELIT_SIMPLE, 392);
	apply_type(0x153b120, "RTTIAttr[14]");
	set_name(0x153b120, "FirstPersonAnimationResource::sAttrs");
	del_items(0x153b2a8, DELIT_SIMPLE, 12);
	apply_type(0x153b2a8, "RTTIMessageHandler[1]");
	set_name(0x153b2a8, "FirstPersonAnimationResource::sMessageHandlers");

	// FirstPersonCameraEntity
	set_name(0x1501470, "FirstPersonCameraEntity");
	apply_type(0x1501470, "RTTICompound");
	del_items(0x15021e4, DELIT_SIMPLE, 8);
	apply_type(0x15021e4, "RTTIBase[1]");
	set_name(0x15021e4, "FirstPersonCameraEntity::sBases");

	// FirstPersonCameraEntityRep
	set_name(0x1502450, "FirstPersonCameraEntityRep");
	apply_type(0x1502450, "RTTICompound");
	del_items(0x1502ee0, DELIT_SIMPLE, 8);
	apply_type(0x1502ee0, "RTTIBase[1]");
	set_name(0x1502ee0, "FirstPersonCameraEntityRep::sBases");

	// FirstPersonCameraEntityResource
	set_name(0x15024a4, "FirstPersonCameraEntityResource");
	apply_type(0x15024a4, "RTTICompound");
	del_items(0x1502ed8, DELIT_SIMPLE, 8);
	apply_type(0x1502ed8, "RTTIBase[1]");
	set_name(0x1502ed8, "FirstPersonCameraEntityResource::sBases");

	// FirstPersonDeathCameraEntity
	set_name(0x15024f8, "FirstPersonDeathCameraEntity");
	apply_type(0x15024f8, "RTTICompound");
	del_items(0x1504158, DELIT_SIMPLE, 8);
	apply_type(0x1504158, "RTTIBase[1]");
	set_name(0x1504158, "FirstPersonDeathCameraEntity::sBases");

	// FirstPersonDeathCameraEntityRep
	set_name(0x150254c, "FirstPersonDeathCameraEntityRep");
	apply_type(0x150254c, "RTTICompound");
	del_items(0x1504160, DELIT_SIMPLE, 8);
	apply_type(0x1504160, "RTTIBase[1]");
	set_name(0x1504160, "FirstPersonDeathCameraEntityRep::sBases");

	// FirstPersonDeathCameraEntityResource
	set_name(0x15025a0, "FirstPersonDeathCameraEntityResource");
	apply_type(0x15025a0, "RTTICompound");
	del_items(0x1503e78, DELIT_SIMPLE, 8);
	apply_type(0x1503e78, "RTTIBase[1]");
	set_name(0x1503e78, "FirstPersonDeathCameraEntityResource::sBases");
	del_items(0x1503e80, DELIT_SIMPLE, 728);
	apply_type(0x1503e80, "RTTIAttr[26]");
	set_name(0x1503e80, "FirstPersonDeathCameraEntityResource::sAttrs");

	// FirstPersonHitEffectsResource
	set_name(0x14faf80, "FirstPersonHitEffectsResource");
	apply_type(0x14faf80, "RTTICompound");
	del_items(0x14fbcbc, DELIT_SIMPLE, 8);
	apply_type(0x14fbcbc, "RTTIBase[1]");
	set_name(0x14fbcbc, "FirstPersonHitEffectsResource::sBases");
	del_items(0x14fbcc4, DELIT_SIMPLE, 224);
	apply_type(0x14fbcc4, "RTTIAttr[8]");
	set_name(0x14fbcc4, "FirstPersonHitEffectsResource::sAttrs");

	// FirstPersonOverlayComponent
	set_name(0x150f560, "FirstPersonOverlayComponent");
	apply_type(0x150f560, "RTTICompound");
	del_items(0x1510e54, DELIT_SIMPLE, 8);
	apply_type(0x1510e54, "RTTIBase[1]");
	set_name(0x1510e54, "FirstPersonOverlayComponent::sBases");

	// FirstPersonOverlayComponentRep
	set_name(0x150f5b4, "FirstPersonOverlayComponentRep");
	apply_type(0x150f5b4, "RTTICompound");
	del_items(0x151223c, DELIT_SIMPLE, 8);
	apply_type(0x151223c, "RTTIBase[1]");
	set_name(0x151223c, "FirstPersonOverlayComponentRep::sBases");

	// FirstPersonOverlayComponentResource
	set_name(0x150f608, "FirstPersonOverlayComponentResource");
	apply_type(0x150f608, "RTTICompound");
	del_items(0x1510e10, DELIT_SIMPLE, 8);
	apply_type(0x1510e10, "RTTIBase[1]");
	set_name(0x1510e10, "FirstPersonOverlayComponentResource::sBases");
	del_items(0x1510e18, DELIT_SIMPLE, 56);
	apply_type(0x1510e18, "RTTIAttr[2]");
	set_name(0x1510e18, "FirstPersonOverlayComponentResource::sAttrs");

	// FlameThrowerEjector
	set_name(0x1524734, "FlameThrowerEjector");
	apply_type(0x1524734, "RTTICompound");
	del_items(0x1525610, DELIT_SIMPLE, 8);
	apply_type(0x1525610, "RTTIBase[1]");
	set_name(0x1525610, "FlameThrowerEjector::sBases");

	// FlameThrowerEjectorRep
	set_name(0x1524788, "FlameThrowerEjectorRep");
	apply_type(0x1524788, "RTTICompound");
	del_items(0x152561c, DELIT_SIMPLE, 8);
	apply_type(0x152561c, "RTTIBase[1]");
	set_name(0x152561c, "FlameThrowerEjectorRep::sBases");

	// FlameThrowerEjectorResource
	set_name(0x1524830, "FlameThrowerEjectorResource");
	apply_type(0x1524830, "RTTICompound");
	del_items(0x152565c, DELIT_SIMPLE, 8);
	apply_type(0x152565c, "RTTIBase[1]");
	set_name(0x152565c, "FlameThrowerEjectorResource::sBases");
	del_items(0x1525664, DELIT_SIMPLE, 952);
	apply_type(0x1525664, "RTTIAttr[34]");
	set_name(0x1525664, "FlameThrowerEjectorResource::sAttrs");

	// Flare
	set_name(0x154a6c8, "Flare");
	apply_type(0x154a6c8, "RTTICompound");
	del_items(0x154ad18, DELIT_SIMPLE, 8);
	apply_type(0x154ad18, "RTTIBase[1]");
	set_name(0x154ad18, "Flare::sBases");

	// FlareResource
	set_name(0x154a71c, "FlareResource");
	apply_type(0x154a71c, "RTTICompound");
	del_items(0x154ad10, DELIT_SIMPLE, 8);
	apply_type(0x154ad10, "RTTIBase[1]");
	set_name(0x154ad10, "FlareResource::sBases");

	// FloatPerDifficulty
	set_name(0x14ea738, "FloatPerDifficulty");
	apply_type(0x14ea738, "RTTICompound");
	del_items(0x14ed1ec, DELIT_SIMPLE, 56);
	apply_type(0x14ed1ec, "RTTIAttr[2]");
	set_name(0x14ed1ec, "FloatPerDifficulty::sAttrs");

	// FlyoverCameraEntity
	set_name(0x15025f4, "FlyoverCameraEntity");
	apply_type(0x15025f4, "RTTICompound");
	del_items(0x15042b0, DELIT_SIMPLE, 8);
	apply_type(0x15042b0, "RTTIBase[1]");
	set_name(0x15042b0, "FlyoverCameraEntity::sBases");

	// FlyoverCameraEntityRep
	set_name(0x1502648, "FlyoverCameraEntityRep");
	apply_type(0x1502648, "RTTICompound");
	del_items(0x15042b8, DELIT_SIMPLE, 8);
	apply_type(0x15042b8, "RTTIBase[1]");
	set_name(0x15042b8, "FlyoverCameraEntityRep::sBases");

	// FlyoverCameraEntityResource
	set_name(0x150269c, "FlyoverCameraEntityResource");
	apply_type(0x150269c, "RTTICompound");
	del_items(0x1504174, DELIT_SIMPLE, 8);
	apply_type(0x1504174, "RTTIBase[1]");
	set_name(0x1504174, "FlyoverCameraEntityResource::sBases");
	del_items(0x150417c, DELIT_SIMPLE, 308);
	apply_type(0x150417c, "RTTIAttr[11]");
	set_name(0x150417c, "FlyoverCameraEntityResource::sAttrs");

	// FlyoverDeathCameraEntity
	set_name(0x15026f0, "FlyoverDeathCameraEntity");
	apply_type(0x15026f0, "RTTICompound");
	del_items(0x1504430, DELIT_SIMPLE, 8);
	apply_type(0x1504430, "RTTIBase[1]");
	set_name(0x1504430, "FlyoverDeathCameraEntity::sBases");

	// FlyoverDeathCameraEntityRep
	set_name(0x1502744, "FlyoverDeathCameraEntityRep");
	apply_type(0x1502744, "RTTICompound");
	del_items(0x1504438, DELIT_SIMPLE, 8);
	apply_type(0x1504438, "RTTIBase[1]");
	set_name(0x1504438, "FlyoverDeathCameraEntityRep::sBases");

	// FlyoverDeathCameraEntityResource
	set_name(0x1502798, "FlyoverDeathCameraEntityResource");
	apply_type(0x1502798, "RTTICompound");
	del_items(0x15042cc, DELIT_SIMPLE, 8);
	apply_type(0x15042cc, "RTTIBase[1]");
	set_name(0x15042cc, "FlyoverDeathCameraEntityResource::sBases");
	del_items(0x15042d4, DELIT_SIMPLE, 336);
	apply_type(0x15042d4, "RTTIAttr[12]");
	set_name(0x15042d4, "FlyoverDeathCameraEntityResource::sAttrs");
	del_items(0x1504424, DELIT_SIMPLE, 12);
	apply_type(0x1504424, "RTTIMessageHandler[1]");
	set_name(0x1504424, "FlyoverDeathCameraEntityResource::sMessageHandlers");

	// FogSettings
	set_name(0x14cbb44, "FogSettings");
	apply_type(0x14cbb44, "RTTICompound");
	del_items(0x14cc4c0, DELIT_SIMPLE, 112);
	apply_type(0x14cc4c0, "RTTIAttr[4]");
	set_name(0x14cc4c0, "FogSettings::sAttrs");

	// FollowCameraEntity
	set_name(0x15027ec, "FollowCameraEntity");
	apply_type(0x15027ec, "RTTICompound");
	del_items(0x1504518, DELIT_SIMPLE, 8);
	apply_type(0x1504518, "RTTIBase[1]");
	set_name(0x1504518, "FollowCameraEntity::sBases");

	// FollowCameraEntityResource
	set_name(0x1502840, "FollowCameraEntityResource");
	apply_type(0x1502840, "RTTICompound");
	del_items(0x150444c, DELIT_SIMPLE, 8);
	apply_type(0x150444c, "RTTIBase[1]");
	set_name(0x150444c, "FollowCameraEntityResource::sBases");
	del_items(0x1504454, DELIT_SIMPLE, 196);
	apply_type(0x1504454, "RTTIAttr[7]");
	set_name(0x1504454, "FollowCameraEntityResource::sAttrs");

	// FollowPathMover
	set_name(0x14fba1c, "FollowPathMover");
	apply_type(0x14fba1c, "RTTICompound");
	del_items(0x14ffd74, DELIT_SIMPLE, 8);
	apply_type(0x14ffd74, "RTTIBase[1]");
	set_name(0x14ffd74, "FollowPathMover::sBases");
	del_items(0x14ffd7c, DELIT_SIMPLE, 480);
	apply_type(0x14ffd7c, "RTTIFunction[20]");
	set_name(0x14ffd7c, "FollowPathMover::sFunctions");

	// FollowPathMoverResource
	set_name(0x14fbad4, "FollowPathMoverResource");
	apply_type(0x14fbad4, "RTTICompound");
	del_items(0x14ffb90, DELIT_SIMPLE, 8);
	apply_type(0x14ffb90, "RTTIBase[1]");
	set_name(0x14ffb90, "FollowPathMoverResource::sBases");
	del_items(0x14ffb98, DELIT_SIMPLE, 476);
	apply_type(0x14ffb98, "RTTIAttr[17]");
	set_name(0x14ffb98, "FollowPathMoverResource::sAttrs");

	// FontCharGlyphInfo
	set_name(0x14b4250, "FontCharGlyphInfo");
	apply_type(0x14b4250, "RTTICompound");
	del_items(0x14b462c, DELIT_SIMPLE, 8);
	apply_type(0x14b462c, "RTTIBase[1]");
	set_name(0x14b462c, "FontCharGlyphInfo::sBases");
	del_items(0x14b4634, DELIT_SIMPLE, 28);
	apply_type(0x14b4634, "RTTIAttr[1]");
	set_name(0x14b4634, "FontCharGlyphInfo::sAttrs");

	// FontCharInfo
	set_name(0x14b41ec, "FontCharInfo");
	apply_type(0x14b41ec, "RTTICompound");
	del_items(0x14b45f4, DELIT_SIMPLE, 56);
	apply_type(0x14b45f4, "RTTIAttr[2]");
	set_name(0x14b45f4, "FontCharInfo::sAttrs");

	// FontGlyphMetrics
	set_name(0x14b4198, "FontGlyphMetrics");
	apply_type(0x14b4198, "RTTICompound");
	del_items(0x14b45bc, DELIT_SIMPLE, 56);
	apply_type(0x14b45bc, "RTTIAttr[2]");
	set_name(0x14b45bc, "FontGlyphMetrics::sAttrs");

	// FontKerningPair
	set_name(0x14b42b4, "FontKerningPair");
	apply_type(0x14b42b4, "RTTICompound");
	del_items(0x14b4650, DELIT_SIMPLE, 84);
	apply_type(0x14b4650, "RTTIAttr[3]");
	set_name(0x14b4650, "FontKerningPair::sAttrs");

	// FontResource
	set_name(0x14c882c, "FontResource");
	apply_type(0x14c882c, "RTTICompound");
	del_items(0x14ca0fc, DELIT_SIMPLE, 8);
	apply_type(0x14ca0fc, "RTTIBase[1]");
	set_name(0x14ca0fc, "FontResource::sBases");
	del_items(0x14ca104, DELIT_SIMPLE, 28);
	apply_type(0x14ca104, "RTTIAttr[1]");
	set_name(0x14ca104, "FontResource::sAttrs");

	// FontResourceData
	set_name(0x14b4308, "FontResourceData");
	apply_type(0x14b4308, "RTTICompound");
	del_items(0x14b46a4, DELIT_SIMPLE, 112);
	apply_type(0x14b46a4, "RTTIAttr[4]");
	set_name(0x14b46a4, "FontResourceData::sAttrs");

	// FontTextMetrics
	set_name(0x14b4144, "FontTextMetrics");
	apply_type(0x14b4144, "RTTICompound");
	del_items(0x14b454c, DELIT_SIMPLE, 112);
	apply_type(0x14b454c, "RTTIAttr[4]");
	set_name(0x14b454c, "FontTextMetrics::sAttrs");

	// FormTag
	set_name(0x14c0174, "FormTag");
	apply_type(0x14c0174, "RTTICompound");
	del_items(0x14c2ca4, DELIT_SIMPLE, 8);
	apply_type(0x14c2ca4, "RTTIBase[1]");
	set_name(0x14c2ca4, "FormTag::sBases");
	del_items(0x14c2cac, DELIT_SIMPLE, 24);
	apply_type(0x14c2cac, "RTTIFunction[1]");
	set_name(0x14c2cac, "FormTag::sFunctions");

	// ForwardRenderingFogSettings
	set_name(0x14cbb98, "ForwardRenderingFogSettings");
	apply_type(0x14cbb98, "RTTICompound");
	del_items(0x14cc530, DELIT_SIMPLE, 168);
	apply_type(0x14cc530, "RTTIAttr[6]");
	set_name(0x14cc530, "ForwardRenderingFogSettings::sAttrs");

	// Frustum
	set_name(0x14adbf0, "Frustum");
	apply_type(0x14adbf0, "RTTICompound");
	del_items(0x14adfec, DELIT_SIMPLE, 1008);
	apply_type(0x14adfec, "RTTIAttr[36]");
	set_name(0x14adfec, "Frustum::sAttrs");

	// GainTemporaryModifier
	set_name(0x14c7fbc, "GainTemporaryModifier");
	apply_type(0x14c7fbc, "RTTICompound");
	del_items(0x14c847c, DELIT_SIMPLE, 84);
	apply_type(0x14c847c, "RTTIAttr[3]");
	set_name(0x14c847c, "GainTemporaryModifier::sAttrs");

	// GameEventAction
	set_name(0x14f97b0, "GameEventAction");
	apply_type(0x14f97b0, "RTTICompound");
	del_items(0x14fe3c0, DELIT_SIMPLE, 8);
	apply_type(0x14fe3c0, "RTTIBase[1]");
	set_name(0x14fe3c0, "GameEventAction::sBases");
	del_items(0x14fe3c8, DELIT_SIMPLE, 56);
	apply_type(0x14fe3c8, "RTTIAttr[2]");
	set_name(0x14fe3c8, "GameEventAction::sAttrs");

	// GameHeadset
	set_name(0x14eae1c, "GameHeadset");
	apply_type(0x14eae1c, "RTTICompound");
	del_items(0x14ed1b4, DELIT_SIMPLE, 8);
	apply_type(0x14ed1b4, "RTTIBase[1]");
	set_name(0x14ed1b4, "GameHeadset::sBases");
	del_items(0x14ed1bc, DELIT_SIMPLE, 48);
	apply_type(0x14ed1bc, "RTTIFunction[2]");
	set_name(0x14ed1bc, "GameHeadset::sFunctions");

	// GameInputJoystickResource
	set_name(0x14eaa44, "GameInputJoystickResource");
	apply_type(0x14eaa44, "RTTICompound");
	del_items(0x14ed3b0, DELIT_SIMPLE, 8);
	apply_type(0x14ed3b0, "RTTIBase[1]");
	set_name(0x14ed3b0, "GameInputJoystickResource::sBases");
	del_items(0x14ed3b8, DELIT_SIMPLE, 252);
	apply_type(0x14ed3b8, "RTTIAttr[9]");
	set_name(0x14ed3b8, "GameInputJoystickResource::sAttrs");

	// GameInputMotionControllerResource
	set_name(0x14eab0c, "GameInputMotionControllerResource");
	apply_type(0x14eab0c, "RTTICompound");
	del_items(0x14ed4f4, DELIT_SIMPLE, 8);
	apply_type(0x14ed4f4, "RTTIBase[1]");
	set_name(0x14ed4f4, "GameInputMotionControllerResource::sBases");
	del_items(0x14ed4fc, DELIT_SIMPLE, 896);
	apply_type(0x14ed4fc, "RTTIAttr[32]");
	set_name(0x14ed4fc, "GameInputMotionControllerResource::sAttrs");

	// GameModule
	set_name(0x152b3a8, "GameModule");
	apply_type(0x152b3a8, "RTTICompound");
	del_items(0x152bae8, DELIT_SIMPLE, 8);
	apply_type(0x152bae8, "RTTIBase[1]");
	set_name(0x152bae8, "GameModule::sBases");

	// GameRoundSettings
	set_name(0x14eaec4, "GameRoundSettings");
	apply_type(0x14eaec4, "RTTICompound");
	del_items(0x14eb2f4, DELIT_SIMPLE, 8);
	apply_type(0x14eb2f4, "RTTIBase[1]");
	set_name(0x14eb2f4, "GameRoundSettings::sBases");
	del_items(0x14eb2fc, DELIT_SIMPLE, 48);
	apply_type(0x14eb2fc, "RTTIFunction[2]");
	set_name(0x14eb2fc, "GameRoundSettings::sFunctions");

	// GameScript
	set_name(0x15379b4, "GameScript");
	apply_type(0x15379b4, "RTTICompound");
	del_items(0x1539804, DELIT_SIMPLE, 8);
	apply_type(0x1539804, "RTTIBase[1]");
	set_name(0x1539804, "GameScript::sBases");

	// GameSettingsResource
	set_name(0x14eaf48, "GameSettingsResource");
	apply_type(0x14eaf48, "RTTICompound");
	del_items(0x14edb80, DELIT_SIMPLE, 8);
	apply_type(0x14edb80, "RTTIBase[1]");
	set_name(0x14edb80, "GameSettingsResource::sBases");
	del_items(0x14edb88, DELIT_SIMPLE, 3220);
	apply_type(0x14edb88, "RTTIAttr[115]");
	set_name(0x14edb88, "GameSettingsResource::sAttrs");

	// GameState
	set_name(0x14eaf9c, "GameState");
	apply_type(0x14eaf9c, "RTTICompound");
	del_items(0x14eb32c, DELIT_SIMPLE, 8);
	apply_type(0x14eb32c, "RTTIBase[1]");
	set_name(0x14eb32c, "GameState::sBases");
	del_items(0x14eb334, DELIT_SIMPLE, 2952);
	apply_type(0x14eb334, "RTTIFunction[123]");
	set_name(0x14eb334, "GameState::sFunctions");

	// GameView
	set_name(0x14e8978, "GameView");
	apply_type(0x14e8978, "RTTICompound");
	del_items(0x14e9f7c, DELIT_SIMPLE, 8);
	apply_type(0x14e9f7c, "RTTIBase[1]");
	set_name(0x14e9f7c, "GameView::sBases");

	// GameViewGame
	set_name(0x152e294, "GameViewGame");
	apply_type(0x152e294, "RTTICompound");
	del_items(0x152ffa4, DELIT_SIMPLE, 8);
	apply_type(0x152ffa4, "RTTIBase[1]");
	set_name(0x152ffa4, "GameViewGame::sBases");

	// GameViewResource
	set_name(0x152e2e8, "GameViewResource");
	apply_type(0x152e2e8, "RTTICompound");
	del_items(0x152ffac, DELIT_SIMPLE, 8);
	apply_type(0x152ffac, "RTTIBase[1]");
	set_name(0x152ffac, "GameViewResource::sBases");
	del_items(0x152ffb4, DELIT_SIMPLE, 1260);
	apply_type(0x152ffb4, "RTTIAttr[45]");
	set_name(0x152ffb4, "GameViewResource::sAttrs");
	del_items(0x15304a0, DELIT_SIMPLE, 12);
	apply_type(0x15304a0, "RTTIMessageHandler[1]");
	set_name(0x15304a0, "GameViewResource::sMessageHandlers");

	// GenericPlayerInteractionController
	set_name(0x154e3c0, "GenericPlayerInteractionController");
	apply_type(0x154e3c0, "RTTICompound");
	del_items(0x154f530, DELIT_SIMPLE, 8);
	apply_type(0x154f530, "RTTIBase[1]");
	set_name(0x154f530, "GenericPlayerInteractionController::sBases");

	// GenericPlayerInteractionEntity
	set_name(0x154e2c4, "GenericPlayerInteractionEntity");
	apply_type(0x154e2c4, "RTTICompound");
	del_items(0x154ecbc, DELIT_SIMPLE, 16);
	apply_type(0x154ecbc, "RTTIBase[2]");
	set_name(0x154ecbc, "GenericPlayerInteractionEntity::sBases");
	del_items(0x154eccc, DELIT_SIMPLE, 240);
	apply_type(0x154eccc, "RTTIFunction[10]");
	set_name(0x154eccc, "GenericPlayerInteractionEntity::sFunctions");

	// GenericPlayerInteractionEntityRep
	set_name(0x154e318, "GenericPlayerInteractionEntityRep");
	apply_type(0x154e318, "RTTICompound");
	del_items(0x154f538, DELIT_SIMPLE, 8);
	apply_type(0x154f538, "RTTIBase[1]");
	set_name(0x154f538, "GenericPlayerInteractionEntityRep::sBases");

	// GenericPlayerInteractionEntityResource
	set_name(0x154e36c, "GenericPlayerInteractionEntityResource");
	apply_type(0x154e36c, "RTTICompound");
	del_items(0x154f384, DELIT_SIMPLE, 8);
	apply_type(0x154f384, "RTTIBase[1]");
	set_name(0x154f384, "GenericPlayerInteractionEntityResource::sBases");
	del_items(0x154f38c, DELIT_SIMPLE, 420);
	apply_type(0x154f38c, "RTTIAttr[15]");
	set_name(0x154f38c, "GenericPlayerInteractionEntityResource::sAttrs");

	// GeometryObject
	set_name(0x14beb6c, "GeometryObject");
	apply_type(0x14beb6c, "RTTICompound");
	del_items(0x14bf244, DELIT_SIMPLE, 16);
	apply_type(0x14bf244, "RTTIBase[2]");
	set_name(0x14bf244, "GeometryObject::sBases");
	del_items(0x14bf254, DELIT_SIMPLE, 12);
	apply_type(0x14bf254, "RTTIMessageHandler[1]");
	set_name(0x14bf254, "GeometryObject::sMessageHandlers");

	// Gesture
	set_name(0x1520d2c, "Gesture");
	apply_type(0x1520d2c, "RTTICompound");
	del_items(0x1521b94, DELIT_SIMPLE, 308);
	apply_type(0x1521b94, "RTTIAttr[11]");
	set_name(0x1521b94, "Gesture::sAttrs");

	// GestureAction
	set_name(0x14eb16c, "GestureAction");
	apply_type(0x14eb16c, "RTTICompound");
	del_items(0x14ee990, DELIT_SIMPLE, 8);
	apply_type(0x14ee990, "RTTIBase[1]");
	set_name(0x14ee990, "GestureAction::sBases");

	// GestureActionFunction
	set_name(0x14eb214, "GestureActionFunction");
	apply_type(0x14eb214, "RTTICompound");
	del_items(0x14eea10, DELIT_SIMPLE, 8);
	apply_type(0x14eea10, "RTTIBase[1]");
	set_name(0x14eea10, "GestureActionFunction::sBases");
	del_items(0x14eea18, DELIT_SIMPLE, 56);
	apply_type(0x14eea18, "RTTIAttr[2]");
	set_name(0x14eea18, "GestureActionFunction::sAttrs");

	// GestureActionMotion
	set_name(0x14eb1c0, "GestureActionMotion");
	apply_type(0x14eb1c0, "RTTICompound");
	del_items(0x14ee998, DELIT_SIMPLE, 8);
	apply_type(0x14ee998, "RTTIBase[1]");
	set_name(0x14ee998, "GestureActionMotion::sBases");
	del_items(0x14ee9a0, DELIT_SIMPLE, 112);
	apply_type(0x14ee9a0, "RTTIAttr[4]");
	set_name(0x14ee9a0, "GestureActionMotion::sAttrs");

	// GestureCollectionResource
	set_name(0x1520d90, "GestureCollectionResource");
	apply_type(0x1520d90, "RTTICompound");
	del_items(0x1521cc8, DELIT_SIMPLE, 8);
	apply_type(0x1521cc8, "RTTIBase[1]");
	set_name(0x1521cc8, "GestureCollectionResource::sBases");
	del_items(0x1521cd0, DELIT_SIMPLE, 56);
	apply_type(0x1521cd0, "RTTIAttr[2]");
	set_name(0x1521cd0, "GestureCollectionResource::sAttrs");

	// GestureEventInstance
	set_name(0x151a1d0, "GestureEventInstance");
	apply_type(0x151a1d0, "RTTICompound");
	del_items(0x151c08c, DELIT_SIMPLE, 8);
	apply_type(0x151c08c, "RTTIBase[1]");
	set_name(0x151c08c, "GestureEventInstance::sBases");

	// GestureEventResource
	set_name(0x151a17c, "GestureEventResource");
	apply_type(0x151a17c, "RTTICompound");
	del_items(0x151bff8, DELIT_SIMPLE, 8);
	apply_type(0x151bff8, "RTTIBase[1]");
	set_name(0x151bff8, "GestureEventResource::sBases");
	del_items(0x151c000, DELIT_SIMPLE, 140);
	apply_type(0x151c000, "RTTIAttr[5]");
	set_name(0x151c000, "GestureEventResource::sAttrs");

	// GestureNode
	set_name(0x14eb0f8, "GestureNode");
	apply_type(0x14eb0f8, "RTTICompound");
	del_items(0x14ee950, DELIT_SIMPLE, 8);
	apply_type(0x14ee950, "RTTIBase[1]");
	set_name(0x14ee950, "GestureNode::sBases");
	del_items(0x14ee958, DELIT_SIMPLE, 56);
	apply_type(0x14ee958, "RTTIAttr[2]");
	set_name(0x14ee958, "GestureNode::sAttrs");

	// GestureResource
	set_name(0x14eb094, "GestureResource");
	apply_type(0x14eb094, "RTTICompound");
	del_items(0x14ee884, DELIT_SIMPLE, 8);
	apply_type(0x14ee884, "RTTIBase[1]");
	set_name(0x14ee884, "GestureResource::sBases");
	del_items(0x14ee88c, DELIT_SIMPLE, 196);
	apply_type(0x14ee88c, "RTTIAttr[7]");
	set_name(0x14ee88c, "GestureResource::sAttrs");

	// GestureUsageMask
	set_name(0x1520cb8, "GestureUsageMask");
	apply_type(0x1520cb8, "RTTICompound");
	del_items(0x1521b54, DELIT_SIMPLE, 28);
	apply_type(0x1521b54, "RTTIAttr[1]");
	set_name(0x1521b54, "GestureUsageMask::sAttrs");

	// GlobalDamageModifier
	set_name(0x14ef698, "GlobalDamageModifier");
	apply_type(0x14ef698, "RTTICompound");
	del_items(0x14f2acc, DELIT_SIMPLE, 8);
	apply_type(0x14f2acc, "RTTIBase[1]");
	set_name(0x14f2acc, "GlobalDamageModifier::sBases");
	del_items(0x14f2ad4, DELIT_SIMPLE, 112);
	apply_type(0x14f2ad4, "RTTIAttr[4]");
	set_name(0x14f2ad4, "GlobalDamageModifier::sAttrs");

	// GlyphContour
	set_name(0x14b409c, "GlyphContour");
	apply_type(0x14b409c, "RTTICompound");
	del_items(0x14b44dc, DELIT_SIMPLE, 56);
	apply_type(0x14b44dc, "RTTIAttr[2]");
	set_name(0x14b44dc, "GlyphContour::sAttrs");

	// GlyphContourCmd
	set_name(0x14b4038, "GlyphContourCmd");
	apply_type(0x14b4038, "RTTICompound");
	del_items(0x14b44c0, DELIT_SIMPLE, 28);
	apply_type(0x14b44c0, "RTTIAttr[1]");
	set_name(0x14b44c0, "GlyphContourCmd::sAttrs");

	// GlyphContourList
	set_name(0x14b40f0, "GlyphContourList");
	apply_type(0x14b40f0, "RTTICompound");
	del_items(0x14b4514, DELIT_SIMPLE, 56);
	apply_type(0x14b4514, "RTTIAttr[2]");
	set_name(0x14b4514, "GlyphContourList::sAttrs");

	// Gradient
	set_name(0x14e0f94, "Gradient");
	apply_type(0x14e0f94, "RTTICompound");
	del_items(0x14e1398, DELIT_SIMPLE, 8);
	apply_type(0x14e1398, "RTTIBase[1]");
	set_name(0x14e1398, "Gradient::sBases");
	del_items(0x14e13a0, DELIT_SIMPLE, 252);
	apply_type(0x14e13a0, "RTTIAttr[9]");
	set_name(0x14e13a0, "Gradient::sAttrs");

	// GrainSettingsResource
	set_name(0x14cb9a0, "GrainSettingsResource");
	apply_type(0x14cb9a0, "RTTICompound");
	del_items(0x14cc91c, DELIT_SIMPLE, 8);
	apply_type(0x14cc91c, "RTTIBase[1]");
	set_name(0x14cc91c, "GrainSettingsResource::sBases");
	del_items(0x14cc924, DELIT_SIMPLE, 84);
	apply_type(0x14cc924, "RTTIAttr[3]");
	set_name(0x14cc924, "GrainSettingsResource::sAttrs");

	// GrapplingHook
	set_name(0x1525a24, "GrapplingHook");
	apply_type(0x1525a24, "RTTICompound");
	del_items(0x1526bec, DELIT_SIMPLE, 8);
	apply_type(0x1526bec, "RTTIBase[1]");
	set_name(0x1526bec, "GrapplingHook::sBases");

	// GrapplingHookEjector
	set_name(0x1525a78, "GrapplingHookEjector");
	apply_type(0x1525a78, "RTTICompound");
	del_items(0x1526d64, DELIT_SIMPLE, 8);
	apply_type(0x1526d64, "RTTIBase[1]");
	set_name(0x1526d64, "GrapplingHookEjector::sBases");

	// GrapplingHookEjectorResource
	set_name(0x1525acc, "GrapplingHookEjectorResource");
	apply_type(0x1525acc, "RTTICompound");
	del_items(0x1526d58, DELIT_SIMPLE, 8);
	apply_type(0x1526d58, "RTTIBase[1]");
	set_name(0x1526d58, "GrapplingHookEjectorResource::sBases");

	// GrapplingHookRep
	set_name(0x1525b20, "GrapplingHookRep");
	apply_type(0x1525b20, "RTTICompound");
	del_items(0x1526d70, DELIT_SIMPLE, 8);
	apply_type(0x1526d70, "RTTIBase[1]");
	set_name(0x1526d70, "GrapplingHookRep::sBases");

	// GrapplingHookResource
	set_name(0x1525b74, "GrapplingHookResource");
	apply_type(0x1525b74, "RTTICompound");
	del_items(0x1526ab0, DELIT_SIMPLE, 8);
	apply_type(0x1526ab0, "RTTIBase[1]");
	set_name(0x1526ab0, "GrapplingHookResource::sBases");
	del_items(0x1526ab8, DELIT_SIMPLE, 308);
	apply_type(0x1526ab8, "RTTIAttr[11]");
	set_name(0x1526ab8, "GrapplingHookResource::sAttrs");

	// Grenade
	set_name(0x1525bc8, "Grenade");
	apply_type(0x1525bc8, "RTTICompound");
	del_items(0x1526dfc, DELIT_SIMPLE, 8);
	apply_type(0x1526dfc, "RTTIBase[1]");
	set_name(0x1526dfc, "Grenade::sBases");

	// GrenadeEjectorResource
	set_name(0x1525c90, "GrenadeEjectorResource");
	apply_type(0x1525c90, "RTTICompound");
	del_items(0x1526bf4, DELIT_SIMPLE, 8);
	apply_type(0x1526bf4, "RTTIBase[1]");
	set_name(0x1526bf4, "GrenadeEjectorResource::sBases");
	del_items(0x1526bfc, DELIT_SIMPLE, 308);
	apply_type(0x1526bfc, "RTTIAttr[11]");
	set_name(0x1526bfc, "GrenadeEjectorResource::sAttrs");
	del_items(0x1526d30, DELIT_SIMPLE, 12);
	apply_type(0x1526d30, "RTTIMessageHandler[1]");
	set_name(0x1526d30, "GrenadeEjectorResource::sMessageHandlers");

	// GrenadeRep
	set_name(0x1525c1c, "GrenadeRep");
	apply_type(0x1525c1c, "RTTICompound");
	del_items(0x1526e04, DELIT_SIMPLE, 8);
	apply_type(0x1526e04, "RTTIBase[1]");
	set_name(0x1526e04, "GrenadeRep::sBases");

	// GrenadeResource
	set_name(0x1525ce4, "GrenadeResource");
	apply_type(0x1525ce4, "RTTICompound");
	del_items(0x1526d84, DELIT_SIMPLE, 8);
	apply_type(0x1526d84, "RTTIBase[1]");
	set_name(0x1526d84, "GrenadeResource::sBases");
	del_items(0x1526d8c, DELIT_SIMPLE, 112);
	apply_type(0x1526d8c, "RTTIAttr[4]");
	set_name(0x1526d8c, "GrenadeResource::sAttrs");

	// GridColTag
	set_name(0x14c061c, "GridColTag");
	apply_type(0x14c061c, "RTTICompound");
	del_items(0x14c2d84, DELIT_SIMPLE, 8);
	apply_type(0x14c2d84, "RTTIBase[1]");
	set_name(0x14c2d84, "GridColTag::sBases");

	// GridColWidget
	set_name(0x14c0f6c, "GridColWidget");
	apply_type(0x14c0f6c, "RTTICompound");
	del_items(0x14c3290, DELIT_SIMPLE, 8);
	apply_type(0x14c3290, "RTTIBase[1]");
	set_name(0x14c3290, "GridColWidget::sBases");

	// GridRowTag
	set_name(0x14c05c8, "GridRowTag");
	apply_type(0x14c05c8, "RTTICompound");
	del_items(0x14c2d7c, DELIT_SIMPLE, 8);
	apply_type(0x14c2d7c, "RTTIBase[1]");
	set_name(0x14c2d7c, "GridRowTag::sBases");

	// GridRowWidget
	set_name(0x14c0f18, "GridRowWidget");
	apply_type(0x14c0f18, "RTTICompound");
	del_items(0x14c3288, DELIT_SIMPLE, 8);
	apply_type(0x14c3288, "RTTIBase[1]");
	set_name(0x14c3288, "GridRowWidget::sBases");

	// GridTag
	set_name(0x14c0574, "GridTag");
	apply_type(0x14c0574, "RTTICompound");
	del_items(0x14c2d14, DELIT_SIMPLE, 8);
	apply_type(0x14c2d14, "RTTIBase[1]");
	set_name(0x14c2d14, "GridTag::sBases");
	del_items(0x14c2d1c, DELIT_SIMPLE, 96);
	apply_type(0x14c2d1c, "RTTIFunction[4]");
	set_name(0x14c2d1c, "GridTag::sFunctions");

	// GridWidget
	set_name(0x14c0e70, "GridWidget");
	apply_type(0x14c0e70, "RTTICompound");
	del_items(0x14c3224, DELIT_SIMPLE, 8);
	apply_type(0x14c3224, "RTTIBase[1]");
	set_name(0x14c3224, "GridWidget::sBases");

	// GridWidgetResource
	set_name(0x14c0ec4, "GridWidgetResource");
	apply_type(0x14c0ec4, "RTTICompound");
	del_items(0x14c322c, DELIT_SIMPLE, 8);
	apply_type(0x14c322c, "RTTIBase[1]");
	set_name(0x14c322c, "GridWidgetResource::sBases");
	del_items(0x14c3234, DELIT_SIMPLE, 84);
	apply_type(0x14c3234, "RTTIAttr[3]");
	set_name(0x14c3234, "GridWidgetResource::sAttrs");

	// GroupSubmixRoutingResource
	set_name(0x14ddd7c, "GroupSubmixRoutingResource");
	apply_type(0x14ddd7c, "RTTICompound");
	del_items(0x14df4f8, DELIT_SIMPLE, 8);
	apply_type(0x14df4f8, "RTTIBase[1]");
	set_name(0x14df4f8, "GroupSubmixRoutingResource::sBases");
	del_items(0x14df500, DELIT_SIMPLE, 84);
	apply_type(0x14df500, "RTTIAttr[3]");
	set_name(0x14df500, "GroupSubmixRoutingResource::sAttrs");

	// GroupedLights
	set_name(0x153af2c, "GroupedLights");
	apply_type(0x153af2c, "RTTICompound");
	del_items(0x153bd60, DELIT_SIMPLE, 8);
	apply_type(0x153bd60, "RTTIBase[1]");
	set_name(0x153bd60, "GroupedLights::sBases");
	del_items(0x153bd68, DELIT_SIMPLE, 28);
	apply_type(0x153bd68, "RTTIAttr[1]");
	set_name(0x153bd68, "GroupedLights::sAttrs");
	del_items(0x153bd84, DELIT_SIMPLE, 12);
	apply_type(0x153bd84, "RTTIMessageHandler[1]");
	set_name(0x153bd84, "GroupedLights::sMessageHandlers");

	// GroupedObjectFilter
	set_name(0x153ae84, "GroupedObjectFilter");
	apply_type(0x153ae84, "RTTICompound");
	del_items(0x153bc94, DELIT_SIMPLE, 56);
	apply_type(0x153bc94, "RTTIAttr[2]");
	set_name(0x153bc94, "GroupedObjectFilter::sAttrs");

	// GroupedObjects
	set_name(0x153aed8, "GroupedObjects");
	apply_type(0x153aed8, "RTTICompound");
	del_items(0x153bccc, DELIT_SIMPLE, 8);
	apply_type(0x153bccc, "RTTIBase[1]");
	set_name(0x153bccc, "GroupedObjects::sBases");
	del_items(0x153bcd4, DELIT_SIMPLE, 140);
	apply_type(0x153bcd4, "RTTIAttr[5]");
	set_name(0x153bcd4, "GroupedObjects::sAttrs");

	// HUDActionIconResource
	set_name(0x15341a8, "HUDActionIconResource");
	apply_type(0x15341a8, "RTTICompound");
	del_items(0x1534b0c, DELIT_SIMPLE, 8);
	apply_type(0x1534b0c, "RTTIBase[1]");
	set_name(0x1534b0c, "HUDActionIconResource::sBases");
	del_items(0x1534b14, DELIT_SIMPLE, 168);
	apply_type(0x1534b14, "RTTIAttr[6]");
	set_name(0x1534b14, "HUDActionIconResource::sAttrs");

	// HUDAimLockResource
	set_name(0x1530c10, "HUDAimLockResource");
	apply_type(0x1530c10, "RTTICompound");
	del_items(0x153218c, DELIT_SIMPLE, 8);
	apply_type(0x153218c, "RTTIBase[1]");
	set_name(0x153218c, "HUDAimLockResource::sBases");
	del_items(0x1532194, DELIT_SIMPLE, 140);
	apply_type(0x1532194, "RTTIAttr[5]");
	set_name(0x1532194, "HUDAimLockResource::sAttrs");
	del_items(0x1532220, DELIT_SIMPLE, 12);
	apply_type(0x1532220, "RTTIMessageHandler[1]");
	set_name(0x1532220, "HUDAimLockResource::sMessageHandlers");

	// HUDAmmoBarResource
	set_name(0x1530cb8, "HUDAmmoBarResource");
	apply_type(0x1530cb8, "RTTICompound");
	del_items(0x153230c, DELIT_SIMPLE, 252);
	apply_type(0x153230c, "RTTIAttr[9]");
	set_name(0x153230c, "HUDAmmoBarResource::sAttrs");

	// HUDAmmoLowResource
	set_name(0x1530db4, "HUDAmmoLowResource");
	apply_type(0x1530db4, "RTTICompound");
	del_items(0x1532918, DELIT_SIMPLE, 8);
	apply_type(0x1532918, "RTTIBase[1]");
	set_name(0x1532918, "HUDAmmoLowResource::sBases");
	del_items(0x1532920, DELIT_SIMPLE, 84);
	apply_type(0x1532920, "RTTIAttr[3]");
	set_name(0x1532920, "HUDAmmoLowResource::sAttrs");
	del_items(0x1532974, DELIT_SIMPLE, 12);
	apply_type(0x1532974, "RTTIMessageHandler[1]");
	set_name(0x1532974, "HUDAmmoLowResource::sMessageHandlers");

	// HUDAmmoResource
	set_name(0x1530d60, "HUDAmmoResource");
	apply_type(0x1530d60, "RTTICompound");
	del_items(0x1532408, DELIT_SIMPLE, 8);
	apply_type(0x1532408, "RTTIBase[1]");
	set_name(0x1532408, "HUDAmmoResource::sBases");
	del_items(0x1532410, DELIT_SIMPLE, 1288);
	apply_type(0x1532410, "RTTIAttr[46]");
	set_name(0x1532410, "HUDAmmoResource::sAttrs");

	// HUDAmmoSeparatorResource
	set_name(0x1530c64, "HUDAmmoSeparatorResource");
	apply_type(0x1530c64, "RTTICompound");
	del_items(0x15322b8, DELIT_SIMPLE, 84);
	apply_type(0x15322b8, "RTTIAttr[3]");
	set_name(0x15322b8, "HUDAmmoSeparatorResource::sAttrs");

	// HUDAmmoStackResource
	set_name(0x1530d0c, "HUDAmmoStackResource");
	apply_type(0x1530d0c, "RTTICompound");
	del_items(0x153222c, DELIT_SIMPLE, 140);
	apply_type(0x153222c, "RTTIAttr[5]");
	set_name(0x153222c, "HUDAmmoStackResource::sAttrs");

	// HUDAnimatedIconAnimationTracks
	set_name(0x1530e6c, "HUDAnimatedIconAnimationTracks");
	apply_type(0x1530e6c, "RTTICompound");
	del_items(0x1532a58, DELIT_SIMPLE, 112);
	apply_type(0x1532a58, "RTTIAttr[4]");
	set_name(0x1532a58, "HUDAnimatedIconAnimationTracks::sAttrs");

	// HUDAnimatedIconResource
	set_name(0x1530e08, "HUDAnimatedIconResource");
	apply_type(0x1530e08, "RTTICompound");
	del_items(0x1532980, DELIT_SIMPLE, 8);
	apply_type(0x1532980, "RTTIBase[1]");
	set_name(0x1532980, "HUDAnimatedIconResource::sBases");
	del_items(0x1532988, DELIT_SIMPLE, 196);
	apply_type(0x1532988, "RTTIAttr[7]");
	set_name(0x1532988, "HUDAnimatedIconResource::sAttrs");
	del_items(0x1532a4c, DELIT_SIMPLE, 12);
	apply_type(0x1532a4c, "RTTIMessageHandler[1]");
	set_name(0x1532a4c, "HUDAnimatedIconResource::sMessageHandlers");

	// HUDAwardMessageEventResource
	set_name(0x1537810, "HUDAwardMessageEventResource");
	apply_type(0x1537810, "RTTICompound");
	del_items(0x153935c, DELIT_SIMPLE, 8);
	apply_type(0x153935c, "RTTIBase[1]");
	set_name(0x153935c, "HUDAwardMessageEventResource::sBases");
	del_items(0x1539364, DELIT_SIMPLE, 224);
	apply_type(0x1539364, "RTTIAttr[8]");
	set_name(0x1539364, "HUDAwardMessageEventResource::sAttrs");
	del_items(0x1539444, DELIT_SIMPLE, 12);
	apply_type(0x1539444, "RTTIMessageHandler[1]");
	set_name(0x1539444, "HUDAwardMessageEventResource::sMessageHandlers");

	// HUDBackgroundResource
	set_name(0x1537304, "HUDBackgroundResource");
	apply_type(0x1537304, "RTTICompound");
	del_items(0x1538404, DELIT_SIMPLE, 8);
	apply_type(0x1538404, "RTTIBase[1]");
	set_name(0x1538404, "HUDBackgroundResource::sBases");
	del_items(0x153840c, DELIT_SIMPLE, 56);
	apply_type(0x153840c, "RTTIAttr[2]");
	set_name(0x153840c, "HUDBackgroundResource::sAttrs");
	del_items(0x1538444, DELIT_SIMPLE, 12);
	apply_type(0x1538444, "RTTIMessageHandler[1]");
	set_name(0x1538444, "HUDBackgroundResource::sMessageHandlers");

	// HUDBloodSplattersResource
	set_name(0x1534004, "HUDBloodSplattersResource");
	apply_type(0x1534004, "RTTICompound");
	del_items(0x15344bc, DELIT_SIMPLE, 8);
	apply_type(0x15344bc, "RTTIBase[1]");
	set_name(0x15344bc, "HUDBloodSplattersResource::sBases");
	del_items(0x15344c4, DELIT_SIMPLE, 308);
	apply_type(0x15344c4, "RTTIAttr[11]");
	set_name(0x15344c4, "HUDBloodSplattersResource::sAttrs");
	del_items(0x15345f8, DELIT_SIMPLE, 12);
	apply_type(0x15345f8, "RTTIMessageHandler[1]");
	set_name(0x15345f8, "HUDBloodSplattersResource::sMessageHandlers");

	// HUDBoostResource
	set_name(0x1537400, "HUDBoostResource");
	apply_type(0x1537400, "RTTICompound");
	del_items(0x1538610, DELIT_SIMPLE, 8);
	apply_type(0x1538610, "RTTIBase[1]");
	set_name(0x1538610, "HUDBoostResource::sBases");
	del_items(0x1538618, DELIT_SIMPLE, 196);
	apply_type(0x1538618, "RTTIAttr[7]");
	set_name(0x1538618, "HUDBoostResource::sAttrs");
	del_items(0x15386dc, DELIT_SIMPLE, 12);
	apply_type(0x15386dc, "RTTIMessageHandler[1]");
	set_name(0x15386dc, "HUDBoostResource::sMessageHandlers");

	// HUDCampaignScoreResource
	set_name(0x1530ec0, "HUDCampaignScoreResource");
	apply_type(0x1530ec0, "RTTICompound");
	del_items(0x1532ac8, DELIT_SIMPLE, 8);
	apply_type(0x1532ac8, "RTTIBase[1]");
	set_name(0x1532ac8, "HUDCampaignScoreResource::sBases");
	del_items(0x1532ad0, DELIT_SIMPLE, 168);
	apply_type(0x1532ad0, "RTTIAttr[6]");
	set_name(0x1532ad0, "HUDCampaignScoreResource::sAttrs");
	del_items(0x1532b78, DELIT_SIMPLE, 12);
	apply_type(0x1532b78, "RTTIMessageHandler[1]");
	set_name(0x1532b78, "HUDCampaignScoreResource::sMessageHandlers");

	// HUDCaptureAndHoldUseBarResource
	set_name(0x1530f14, "HUDCaptureAndHoldUseBarResource");
	apply_type(0x1530f14, "RTTICompound");
	del_items(0x1532b84, DELIT_SIMPLE, 8);
	apply_type(0x1532b84, "RTTIBase[1]");
	set_name(0x1532b84, "HUDCaptureAndHoldUseBarResource::sBases");
	del_items(0x1532b8c, DELIT_SIMPLE, 392);
	apply_type(0x1532b8c, "RTTIAttr[14]");
	set_name(0x1532b8c, "HUDCaptureAndHoldUseBarResource::sAttrs");
	del_items(0x1532d14, DELIT_SIMPLE, 12);
	apply_type(0x1532d14, "RTTIMessageHandler[1]");
	set_name(0x1532d14, "HUDCaptureAndHoldUseBarResource::sMessageHandlers");

	// HUDCloseCombatIconResource
	set_name(0x1534058, "HUDCloseCombatIconResource");
	apply_type(0x1534058, "RTTICompound");
	del_items(0x1534604, DELIT_SIMPLE, 8);
	apply_type(0x1534604, "RTTIBase[1]");
	set_name(0x1534604, "HUDCloseCombatIconResource::sBases");
	del_items(0x153460c, DELIT_SIMPLE, 84);
	apply_type(0x153460c, "RTTIAttr[3]");
	set_name(0x153460c, "HUDCloseCombatIconResource::sAttrs");

	// HUDClueCrosshairResource
	set_name(0x1542798, "HUDClueCrosshairResource");
	apply_type(0x1542798, "RTTICompound");
	del_items(0x1543f54, DELIT_SIMPLE, 8);
	apply_type(0x1543f54, "RTTIBase[1]");
	set_name(0x1543f54, "HUDClueCrosshairResource::sBases");
	del_items(0x1543f5c, DELIT_SIMPLE, 112);
	apply_type(0x1543f5c, "RTTIAttr[4]");
	set_name(0x1543f5c, "HUDClueCrosshairResource::sAttrs");

	// HUDClueInteractionSelectedTextResource
	set_name(0x1542744, "HUDClueInteractionSelectedTextResource");
	apply_type(0x1542744, "RTTICompound");
	del_items(0x1543ec0, DELIT_SIMPLE, 8);
	apply_type(0x1543ec0, "RTTIBase[1]");
	set_name(0x1543ec0, "HUDClueInteractionSelectedTextResource::sBases");
	del_items(0x1543ec8, DELIT_SIMPLE, 140);
	apply_type(0x1543ec8, "RTTIAttr[5]");
	set_name(0x1543ec8, "HUDClueInteractionSelectedTextResource::sAttrs");

	// HUDClueTextResource
	set_name(0x154269c, "HUDClueTextResource");
	apply_type(0x154269c, "RTTICompound");
	del_items(0x1543d28, DELIT_SIMPLE, 8);
	apply_type(0x1543d28, "RTTIBase[1]");
	set_name(0x1543d28, "HUDClueTextResource::sBases");
	del_items(0x1543d30, DELIT_SIMPLE, 196);
	apply_type(0x1543d30, "RTTIAttr[7]");
	set_name(0x1543d30, "HUDClueTextResource::sAttrs");

	// HUDClueTextTitleResource
	set_name(0x15426f0, "HUDClueTextTitleResource");
	apply_type(0x15426f0, "RTTICompound");
	del_items(0x1543df4, DELIT_SIMPLE, 8);
	apply_type(0x1543df4, "RTTIBase[1]");
	set_name(0x1543df4, "HUDClueTextTitleResource::sBases");
	del_items(0x1543dfc, DELIT_SIMPLE, 196);
	apply_type(0x1543dfc, "RTTIAttr[7]");
	set_name(0x1543dfc, "HUDClueTextTitleResource::sAttrs");

	// HUDCollectableResource
	set_name(0x1537358, "HUDCollectableResource");
	apply_type(0x1537358, "RTTICompound");
	del_items(0x1538450, DELIT_SIMPLE, 8);
	apply_type(0x1538450, "RTTIBase[1]");
	set_name(0x1538450, "HUDCollectableResource::sBases");
	del_items(0x1538458, DELIT_SIMPLE, 252);
	apply_type(0x1538458, "RTTIAttr[9]");
	set_name(0x1538458, "HUDCollectableResource::sAttrs");
	del_items(0x1538554, DELIT_SIMPLE, 12);
	apply_type(0x1538554, "RTTIMessageHandler[1]");
	set_name(0x1538554, "HUDCollectableResource::sMessageHandlers");

	// HUDConnectionLostResource
	set_name(0x15340ac, "HUDConnectionLostResource");
	apply_type(0x15340ac, "RTTICompound");
	del_items(0x1534660, DELIT_SIMPLE, 8);
	apply_type(0x1534660, "RTTIBase[1]");
	set_name(0x1534660, "HUDConnectionLostResource::sBases");
	del_items(0x1534668, DELIT_SIMPLE, 196);
	apply_type(0x1534668, "RTTIAttr[7]");
	set_name(0x1534668, "HUDConnectionLostResource::sAttrs");
	del_items(0x153472c, DELIT_SIMPLE, 12);
	apply_type(0x153472c, "RTTIMessageHandler[1]");
	set_name(0x153472c, "HUDConnectionLostResource::sMessageHandlers");

	// HUDCountdownTimerResource
	set_name(0x1530fcc, "HUDCountdownTimerResource");
	apply_type(0x1530fcc, "RTTICompound");
	del_items(0x1532e5c, DELIT_SIMPLE, 8);
	apply_type(0x1532e5c, "RTTIBase[1]");
	set_name(0x1532e5c, "HUDCountdownTimerResource::sBases");
	del_items(0x1532e64, DELIT_SIMPLE, 336);
	apply_type(0x1532e64, "RTTIAttr[12]");
	set_name(0x1532e64, "HUDCountdownTimerResource::sAttrs");

	// HUDCriticallyWoundedResource
	set_name(0x1537160, "HUDCriticallyWoundedResource");
	apply_type(0x1537160, "RTTICompound");
	del_items(0x15381e8, DELIT_SIMPLE, 8);
	apply_type(0x15381e8, "RTTIBase[1]");
	set_name(0x15381e8, "HUDCriticallyWoundedResource::sBases");
	del_items(0x15381f0, DELIT_SIMPLE, 252);
	apply_type(0x15381f0, "RTTIAttr[9]");
	set_name(0x15381f0, "HUDCriticallyWoundedResource::sAttrs");
	del_items(0x15382ec, DELIT_SIMPLE, 12);
	apply_type(0x15382ec, "RTTIMessageHandler[1]");
	set_name(0x15382ec, "HUDCriticallyWoundedResource::sMessageHandlers");

	// HUDCrosshairPart
	set_name(0x1531040, "HUDCrosshairPart");
	apply_type(0x1531040, "RTTICompound");
	del_items(0x1531740, DELIT_SIMPLE, 476);
	apply_type(0x1531740, "RTTIAttr[17]");
	set_name(0x1531740, "HUDCrosshairPart::sAttrs");

	// HUDCrosshairParts
	set_name(0x15310f8, "HUDCrosshairParts");
	apply_type(0x15310f8, "RTTICompound");
	del_items(0x1531924, DELIT_SIMPLE, 8);
	apply_type(0x1531924, "RTTIBase[1]");
	set_name(0x1531924, "HUDCrosshairParts::sBases");
	del_items(0x153192c, DELIT_SIMPLE, 28);
	apply_type(0x153192c, "RTTIAttr[1]");
	set_name(0x153192c, "HUDCrosshairParts::sAttrs");

	// HUDCrosshairResource
	set_name(0x1531094, "HUDCrosshairResource");
	apply_type(0x1531094, "RTTICompound");
	del_items(0x1532fb4, DELIT_SIMPLE, 8);
	apply_type(0x1532fb4, "RTTIBase[1]");
	set_name(0x1532fb4, "HUDCrosshairResource::sBases");
	del_items(0x1532fbc, DELIT_SIMPLE, 336);
	apply_type(0x1532fbc, "RTTIAttr[12]");
	set_name(0x1532fbc, "HUDCrosshairResource::sAttrs");

	// HUDCrosshairSettings
	set_name(0x153115c, "HUDCrosshairSettings");
	apply_type(0x153115c, "RTTICompound");
	del_items(0x1531948, DELIT_SIMPLE, 8);
	apply_type(0x1531948, "RTTIBase[1]");
	set_name(0x1531948, "HUDCrosshairSettings::sBases");
	del_items(0x1531950, DELIT_SIMPLE, 252);
	apply_type(0x1531950, "RTTIAttr[9]");
	set_name(0x1531950, "HUDCrosshairSettings::sAttrs");
	del_items(0x1531a4c, DELIT_SIMPLE, 12);
	apply_type(0x1531a4c, "RTTIMessageHandler[1]");
	set_name(0x1531a4c, "HUDCrosshairSettings::sMessageHandlers");

	// HUDDisguiseBarResource
	set_name(0x1537208, "HUDDisguiseBarResource");
	apply_type(0x1537208, "RTTICompound");
	del_items(0x1538338, DELIT_SIMPLE, 8);
	apply_type(0x1538338, "RTTIBase[1]");
	set_name(0x1538338, "HUDDisguiseBarResource::sBases");

	// HUDDisguiseIconResource
	set_name(0x153725c, "HUDDisguiseIconResource");
	apply_type(0x153725c, "RTTICompound");
	del_items(0x1538340, DELIT_SIMPLE, 8);
	apply_type(0x1538340, "RTTIBase[1]");
	set_name(0x1538340, "HUDDisguiseIconResource::sBases");
	del_items(0x1538348, DELIT_SIMPLE, 56);
	apply_type(0x1538348, "RTTIAttr[2]");
	set_name(0x1538348, "HUDDisguiseIconResource::sAttrs");
	del_items(0x1538380, DELIT_SIMPLE, 12);
	apply_type(0x1538380, "RTTIMessageHandler[1]");
	set_name(0x1538380, "HUDDisguiseIconResource::sMessageHandlers");

	// HUDEffectSettings
	set_name(0x1513a74, "HUDEffectSettings");
	apply_type(0x1513a74, "RTTICompound");
	del_items(0x1516360, DELIT_SIMPLE, 112);
	apply_type(0x1516360, "RTTIAttr[4]");
	set_name(0x1516360, "HUDEffectSettings::sAttrs");

	// HUDElementCompoundResource
	set_name(0x1530a1c, "HUDElementCompoundResource");
	apply_type(0x1530a1c, "RTTICompound");
	del_items(0x153202c, DELIT_SIMPLE, 8);
	apply_type(0x153202c, "RTTIBase[1]");
	set_name(0x153202c, "HUDElementCompoundResource::sBases");
	del_items(0x1532034, DELIT_SIMPLE, 56);
	apply_type(0x1532034, "RTTIAttr[2]");
	set_name(0x1532034, "HUDElementCompoundResource::sAttrs");

	// HUDElementResource
	set_name(0x1530ab0, "HUDElementResource");
	apply_type(0x1530ab0, "RTTICompound");
	del_items(0x1531d14, DELIT_SIMPLE, 8);
	apply_type(0x1531d14, "RTTIBase[1]");
	set_name(0x1531d14, "HUDElementResource::sBases");
	del_items(0x1531d1c, DELIT_SIMPLE, 784);
	apply_type(0x1531d1c, "RTTIAttr[28]");
	set_name(0x1531d1c, "HUDElementResource::sAttrs");

	// HUDEntityUseBarResource
	set_name(0x15311b0, "HUDEntityUseBarResource");
	apply_type(0x15311b0, "RTTICompound");
	del_items(0x153310c, DELIT_SIMPLE, 8);
	apply_type(0x153310c, "RTTIBase[1]");
	set_name(0x153310c, "HUDEntityUseBarResource::sBases");

	// HUDFactionWinResource
	set_name(0x153790c, "HUDFactionWinResource");
	apply_type(0x153790c, "RTTICompound");
	del_items(0x153968c, DELIT_SIMPLE, 8);
	apply_type(0x153968c, "RTTIBase[1]");
	set_name(0x153968c, "HUDFactionWinResource::sBases");
	del_items(0x1539694, DELIT_SIMPLE, 196);
	apply_type(0x1539694, "RTTIAttr[7]");
	set_name(0x1539694, "HUDFactionWinResource::sAttrs");
	del_items(0x1539758, DELIT_SIMPLE, 12);
	apply_type(0x1539758, "RTTIMessageHandler[1]");
	set_name(0x1539758, "HUDFactionWinResource::sMessageHandlers");

	// HUDFireChargeResource
	set_name(0x1537960, "HUDFireChargeResource");
	apply_type(0x1537960, "RTTICompound");
	del_items(0x1539764, DELIT_SIMPLE, 8);
	apply_type(0x1539764, "RTTIBase[1]");
	set_name(0x1539764, "HUDFireChargeResource::sBases");
	del_items(0x153976c, DELIT_SIMPLE, 140);
	apply_type(0x153976c, "RTTIAttr[5]");
	set_name(0x153976c, "HUDFireChargeResource::sAttrs");
	del_items(0x15397f8, DELIT_SIMPLE, 12);
	apply_type(0x15397f8, "RTTIMessageHandler[1]");
	set_name(0x15397f8, "HUDFireChargeResource::sMessageHandlers");

	// HUDHealAbilityResource
	set_name(0x15371b4, "HUDHealAbilityResource");
	apply_type(0x15371b4, "RTTICompound");
	del_items(0x15382f8, DELIT_SIMPLE, 8);
	apply_type(0x15382f8, "RTTIBase[1]");
	set_name(0x15382f8, "HUDHealAbilityResource::sBases");
	del_items(0x1538300, DELIT_SIMPLE, 56);
	apply_type(0x1538300, "RTTIAttr[2]");
	set_name(0x1538300, "HUDHealAbilityResource::sAttrs");

	// HUDHealthBarsResource
	set_name(0x1531204, "HUDHealthBarsResource");
	apply_type(0x1531204, "RTTICompound");
	del_items(0x1533114, DELIT_SIMPLE, 8);
	apply_type(0x1533114, "RTTIBase[1]");
	set_name(0x1533114, "HUDHealthBarsResource::sBases");
	del_items(0x153311c, DELIT_SIMPLE, 112);
	apply_type(0x153311c, "RTTIAttr[4]");
	set_name(0x153311c, "HUDHealthBarsResource::sAttrs");

	// HUDHealthResource
	set_name(0x15312ac, "HUDHealthResource");
	apply_type(0x15312ac, "RTTICompound");
	del_items(0x1533384, DELIT_SIMPLE, 8);
	apply_type(0x1533384, "RTTIBase[1]");
	set_name(0x1533384, "HUDHealthResource::sBases");
	del_items(0x153338c, DELIT_SIMPLE, 1120);
	apply_type(0x153338c, "RTTIAttr[40]");
	set_name(0x153338c, "HUDHealthResource::sAttrs");

	// HUDHintResource
	set_name(0x15373ac, "HUDHintResource");
	apply_type(0x15373ac, "RTTICompound");
	del_items(0x1538560, DELIT_SIMPLE, 8);
	apply_type(0x1538560, "RTTIBase[1]");
	set_name(0x1538560, "HUDHintResource::sBases");
	del_items(0x1538568, DELIT_SIMPLE, 168);
	apply_type(0x1538568, "RTTIAttr[6]");
	set_name(0x1538568, "HUDHintResource::sAttrs");

	// HUDHitOverlayResource
	set_name(0x1534100, "HUDHitOverlayResource");
	apply_type(0x1534100, "RTTICompound");
	del_items(0x1534738, DELIT_SIMPLE, 8);
	apply_type(0x1534738, "RTTIBase[1]");
	set_name(0x1534738, "HUDHitOverlayResource::sBases");
	del_items(0x1534740, DELIT_SIMPLE, 728);
	apply_type(0x1534740, "RTTIAttr[26]");
	set_name(0x1534740, "HUDHitOverlayResource::sAttrs");
	del_items(0x1534a18, DELIT_SIMPLE, 12);
	apply_type(0x1534a18, "RTTIMessageHandler[1]");
	set_name(0x1534a18, "HUDHitOverlayResource::sMessageHandlers");

	// HUDIconResource
	set_name(0x15372b0, "HUDIconResource");
	apply_type(0x15372b0, "RTTICompound");
	del_items(0x153838c, DELIT_SIMPLE, 8);
	apply_type(0x153838c, "RTTIBase[1]");
	set_name(0x153838c, "HUDIconResource::sBases");
	del_items(0x1538394, DELIT_SIMPLE, 112);
	apply_type(0x1538394, "RTTIAttr[4]");
	set_name(0x1538394, "HUDIconResource::sAttrs");

	// HUDInteractiveEntityHealthResource
	set_name(0x1531470, "HUDInteractiveEntityHealthResource");
	apply_type(0x1531470, "RTTICompound");
	del_items(0x1533da0, DELIT_SIMPLE, 8);
	apply_type(0x1533da0, "RTTIBase[1]");
	set_name(0x1533da0, "HUDInteractiveEntityHealthResource::sBases");
	del_items(0x1533da8, DELIT_SIMPLE, 504);
	apply_type(0x1533da8, "RTTIAttr[18]");
	set_name(0x1533da8, "HUDInteractiveEntityHealthResource::sAttrs");

	// HUDInventoryChargeBarResource
	set_name(0x153140c, "HUDInventoryChargeBarResource");
	apply_type(0x153140c, "RTTICompound");
	del_items(0x1533d10, DELIT_SIMPLE, 8);
	apply_type(0x1533d10, "RTTIBase[1]");
	set_name(0x1533d10, "HUDInventoryChargeBarResource::sBases");
	del_items(0x1533d18, DELIT_SIMPLE, 112);
	apply_type(0x1533d18, "RTTIAttr[4]");
	set_name(0x1533d18, "HUDInventoryChargeBarResource::sAttrs");
	del_items(0x1533d88, DELIT_SIMPLE, 24);
	apply_type(0x1533d88, "RTTIMessageHandler[2]");
	set_name(0x1533d88, "HUDInventoryChargeBarResource::sMessageHandlers");

	// HUDInventoryEntitySettings
	set_name(0x153420c, "HUDInventoryEntitySettings");
	apply_type(0x153420c, "RTTICompound");
	del_items(0x1534bbc, DELIT_SIMPLE, 8);
	apply_type(0x1534bbc, "RTTIBase[1]");
	set_name(0x1534bbc, "HUDInventoryEntitySettings::sBases");
	del_items(0x1534bc4, DELIT_SIMPLE, 420);
	apply_type(0x1534bc4, "RTTIAttr[15]");
	set_name(0x1534bc4, "HUDInventoryEntitySettings::sAttrs");

	// HUDLocationResource
	set_name(0x1537454, "HUDLocationResource");
	apply_type(0x1537454, "RTTICompound");
	del_items(0x15386e8, DELIT_SIMPLE, 8);
	apply_type(0x15386e8, "RTTIBase[1]");
	set_name(0x15386e8, "HUDLocationResource::sBases");
	del_items(0x15386f0, DELIT_SIMPLE, 140);
	apply_type(0x15386f0, "RTTIAttr[5]");
	set_name(0x15386f0, "HUDLocationResource::sAttrs");

	// HUDMissionDescriptionResource
	set_name(0x1534270, "HUDMissionDescriptionResource");
	apply_type(0x1534270, "RTTICompound");
	del_items(0x1534d68, DELIT_SIMPLE, 8);
	apply_type(0x1534d68, "RTTIBase[1]");
	set_name(0x1534d68, "HUDMissionDescriptionResource::sBases");

	// HUDMissionResource
	set_name(0x15342c4, "HUDMissionResource");
	apply_type(0x15342c4, "RTTICompound");
	del_items(0x1534d70, DELIT_SIMPLE, 8);
	apply_type(0x1534d70, "RTTIBase[1]");
	set_name(0x1534d70, "HUDMissionResource::sBases");

	// HUDMissionScoreResource
	set_name(0x1535140, "HUDMissionScoreResource");
	apply_type(0x1535140, "RTTICompound");
	del_items(0x15355ec, DELIT_SIMPLE, 8);
	apply_type(0x15355ec, "RTTIBase[1]");
	set_name(0x15355ec, "HUDMissionScoreResource::sBases");
	del_items(0x15355f4, DELIT_SIMPLE, 868);
	apply_type(0x15355f4, "RTTIAttr[31]");
	set_name(0x15355f4, "HUDMissionScoreResource::sAttrs");
	del_items(0x1535958, DELIT_SIMPLE, 12);
	apply_type(0x1535958, "RTTIMessageHandler[1]");
	set_name(0x1535958, "HUDMissionScoreResource::sMessageHandlers");

	// HUDMissionTextResource
	set_name(0x15351e8, "HUDMissionTextResource");
	apply_type(0x15351e8, "RTTICompound");
	del_items(0x1535b7c, DELIT_SIMPLE, 8);
	apply_type(0x1535b7c, "RTTIBase[1]");
	set_name(0x1535b7c, "HUDMissionTextResource::sBases");
	del_items(0x1535b84, DELIT_SIMPLE, 196);
	apply_type(0x1535b84, "RTTIAttr[7]");
	set_name(0x1535b84, "HUDMissionTextResource::sAttrs");

	// HUDMissionTimerResource
	set_name(0x1535240, "HUDMissionTimerResource");
	apply_type(0x1535240, "RTTICompound");
	del_items(0x1535c48, DELIT_SIMPLE, 8);
	apply_type(0x1535c48, "RTTIBase[1]");
	set_name(0x1535c48, "HUDMissionTimerResource::sBases");

	// HUDMissionWinsResource
	set_name(0x1535294, "HUDMissionWinsResource");
	apply_type(0x1535294, "RTTICompound");
	del_items(0x1535c50, DELIT_SIMPLE, 8);
	apply_type(0x1535c50, "RTTIBase[1]");
	set_name(0x1535c50, "HUDMissionWinsResource::sBases");
	del_items(0x1535c58, DELIT_SIMPLE, 224);
	apply_type(0x1535c58, "RTTIAttr[8]");
	set_name(0x1535c58, "HUDMissionWinsResource::sAttrs");
	del_items(0x1535d38, DELIT_SIMPLE, 12);
	apply_type(0x1535d38, "RTTIMessageHandler[1]");
	set_name(0x1535d38, "HUDMissionWinsResource::sMessageHandlers");

	// HUDMotionControllerInvisibleIconResource
	set_name(0x1534318, "HUDMotionControllerInvisibleIconResource");
	apply_type(0x1534318, "RTTICompound");
	del_items(0x1534d78, DELIT_SIMPLE, 8);
	apply_type(0x1534d78, "RTTIBase[1]");
	set_name(0x1534d78, "HUDMotionControllerInvisibleIconResource::sBases");

	// HUDMovableTextResource
	set_name(0x15427ec, "HUDMovableTextResource");
	apply_type(0x15427ec, "RTTICompound");
	del_items(0x1543fcc, DELIT_SIMPLE, 8);
	apply_type(0x1543fcc, "RTTIBase[1]");
	set_name(0x1543fcc, "HUDMovableTextResource::sBases");
	del_items(0x1543fd4, DELIT_SIMPLE, 112);
	apply_type(0x1543fd4, "RTTIAttr[4]");
	set_name(0x1543fd4, "HUDMovableTextResource::sAttrs");

	// HUDNameComponent
	set_name(0x150f8c8, "HUDNameComponent");
	apply_type(0x150f8c8, "RTTICompound");
	del_items(0x1512348, DELIT_SIMPLE, 8);
	apply_type(0x1512348, "RTTIBase[1]");
	set_name(0x1512348, "HUDNameComponent::sBases");

	// HUDNavigationResource
	set_name(0x15352f8, "HUDNavigationResource");
	apply_type(0x15352f8, "RTTICompound");
	del_items(0x1535d44, DELIT_SIMPLE, 8);
	apply_type(0x1535d44, "RTTIBase[1]");
	set_name(0x1535d44, "HUDNavigationResource::sBases");
	del_items(0x1535d4c, DELIT_SIMPLE, 1204);
	apply_type(0x1535d4c, "RTTIAttr[43]");
	set_name(0x1535d4c, "HUDNavigationResource::sAttrs");

	// HUDObjectivesResource
	set_name(0x15377bc, "HUDObjectivesResource");
	apply_type(0x15377bc, "RTTICompound");
	del_items(0x1538f04, DELIT_SIMPLE, 8);
	apply_type(0x1538f04, "RTTIBase[1]");
	set_name(0x1538f04, "HUDObjectivesResource::sBases");
	del_items(0x1538f0c, DELIT_SIMPLE, 1092);
	apply_type(0x1538f0c, "RTTIAttr[39]");
	set_name(0x1538f0c, "HUDObjectivesResource::sAttrs");
	del_items(0x1539350, DELIT_SIMPLE, 12);
	apply_type(0x1539350, "RTTIMessageHandler[1]");
	set_name(0x1539350, "HUDObjectivesResource::sMessageHandlers");

	// HUDPart
	set_name(0x14fac24, "HUDPart");
	apply_type(0x14fac24, "RTTICompound");
	del_items(0x14ff1cc, DELIT_SIMPLE, 56);
	apply_type(0x14ff1cc, "RTTIAttr[2]");
	set_name(0x14ff1cc, "HUDPart::sAttrs");

	// HUDPartBackground
	set_name(0x14facdc, "HUDPartBackground");
	apply_type(0x14facdc, "RTTICompound");
	del_items(0x14ff244, DELIT_SIMPLE, 8);
	apply_type(0x14ff244, "RTTIBase[1]");
	set_name(0x14ff244, "HUDPartBackground::sBases");
	del_items(0x14ff24c, DELIT_SIMPLE, 308);
	apply_type(0x14ff24c, "RTTIAttr[11]");
	set_name(0x14ff24c, "HUDPartBackground::sAttrs");

	// HUDPartIcon
	set_name(0x14fac88, "HUDPartIcon");
	apply_type(0x14fac88, "RTTICompound");
	del_items(0x14ff204, DELIT_SIMPLE, 8);
	apply_type(0x14ff204, "RTTIBase[1]");
	set_name(0x14ff204, "HUDPartIcon::sBases");
	del_items(0x14ff20c, DELIT_SIMPLE, 56);
	apply_type(0x14ff20c, "RTTIAttr[2]");
	set_name(0x14ff20c, "HUDPartIcon::sAttrs");

	// HUDPartProgressBar
	set_name(0x14fad30, "HUDPartProgressBar");
	apply_type(0x14fad30, "RTTICompound");
	del_items(0x14ff380, DELIT_SIMPLE, 8);
	apply_type(0x14ff380, "RTTIBase[1]");
	set_name(0x14ff380, "HUDPartProgressBar::sBases");
	del_items(0x14ff388, DELIT_SIMPLE, 140);
	apply_type(0x14ff388, "RTTIAttr[5]");
	set_name(0x14ff388, "HUDPartProgressBar::sAttrs");

	// HUDPartText
	set_name(0x14fada4, "HUDPartText");
	apply_type(0x14fada4, "RTTICompound");
	del_items(0x14ff414, DELIT_SIMPLE, 8);
	apply_type(0x14ff414, "RTTIBase[1]");
	set_name(0x14ff414, "HUDPartText::sBases");
	del_items(0x14ff41c, DELIT_SIMPLE, 504);
	apply_type(0x14ff41c, "RTTIAttr[18]");
	set_name(0x14ff41c, "HUDPartText::sAttrs");

	// HUDPauseGameNotificationResource
	set_name(0x15374a8, "HUDPauseGameNotificationResource");
	apply_type(0x15374a8, "RTTICompound");
	del_items(0x153877c, DELIT_SIMPLE, 8);
	apply_type(0x153877c, "RTTIBase[1]");
	set_name(0x153877c, "HUDPauseGameNotificationResource::sBases");
	del_items(0x1538784, DELIT_SIMPLE, 28);
	apply_type(0x1538784, "RTTIAttr[1]");
	set_name(0x1538784, "HUDPauseGameNotificationResource::sAttrs");

	// HUDPersonalScoreResource
	set_name(0x1535194, "HUDPersonalScoreResource");
	apply_type(0x1535194, "RTTICompound");
	del_items(0x1535964, DELIT_SIMPLE, 8);
	apply_type(0x1535964, "RTTIBase[1]");
	set_name(0x1535964, "HUDPersonalScoreResource::sBases");
	del_items(0x153596c, DELIT_SIMPLE, 504);
	apply_type(0x153596c, "RTTIAttr[18]");
	set_name(0x153596c, "HUDPersonalScoreResource::sAttrs");
	del_items(0x1535b64, DELIT_SIMPLE, 24);
	apply_type(0x1535b64, "RTTIMessageHandler[2]");
	set_name(0x1535b64, "HUDPersonalScoreResource::sMessageHandlers");

	// HUDPickUpIconResource
	set_name(0x1534154, "HUDPickUpIconResource");
	apply_type(0x1534154, "RTTICompound");
	del_items(0x1534a24, DELIT_SIMPLE, 8);
	apply_type(0x1534a24, "RTTIBase[1]");
	set_name(0x1534a24, "HUDPickUpIconResource::sBases");
	del_items(0x1534a2c, DELIT_SIMPLE, 224);
	apply_type(0x1534a2c, "RTTIAttr[8]");
	set_name(0x1534a2c, "HUDPickUpIconResource::sAttrs");

	// HUDPlayerNamesResource
	set_name(0x153534c, "HUDPlayerNamesResource");
	apply_type(0x153534c, "RTTICompound");
	del_items(0x1536200, DELIT_SIMPLE, 8);
	apply_type(0x1536200, "RTTIBase[1]");
	set_name(0x1536200, "HUDPlayerNamesResource::sBases");
	del_items(0x1536208, DELIT_SIMPLE, 448);
	apply_type(0x1536208, "RTTIAttr[16]");
	set_name(0x1536208, "HUDPlayerNamesResource::sAttrs");
	del_items(0x15363c8, DELIT_SIMPLE, 12);
	apply_type(0x15363c8, "RTTIMessageHandler[1]");
	set_name(0x15363c8, "HUDPlayerNamesResource::sMessageHandlers");

	// HUDQuickSelectIconResource
	set_name(0x15353f4, "HUDQuickSelectIconResource");
	apply_type(0x15353f4, "RTTICompound");
	del_items(0x1536428, DELIT_SIMPLE, 252);
	apply_type(0x1536428, "RTTIAttr[9]");
	set_name(0x1536428, "HUDQuickSelectIconResource::sAttrs");

	// HUDQuickSelectResource
	set_name(0x1535448, "HUDQuickSelectResource");
	apply_type(0x1535448, "RTTICompound");
	del_items(0x1536524, DELIT_SIMPLE, 8);
	apply_type(0x1536524, "RTTIBase[1]");
	set_name(0x1536524, "HUDQuickSelectResource::sBases");
	del_items(0x153652c, DELIT_SIMPLE, 616);
	apply_type(0x153652c, "RTTIAttr[22]");
	set_name(0x153652c, "HUDQuickSelectResource::sAttrs");
	del_items(0x1536794, DELIT_SIMPLE, 12);
	apply_type(0x1536794, "RTTIMessageHandler[1]");
	set_name(0x1536794, "HUDQuickSelectResource::sMessageHandlers");

	// HUDQuickThrowButton
	set_name(0x15353a0, "HUDQuickThrowButton");
	apply_type(0x15353a0, "RTTICompound");
	del_items(0x15363d4, DELIT_SIMPLE, 84);
	apply_type(0x15363d4, "RTTIAttr[3]");
	set_name(0x15363d4, "HUDQuickThrowButton::sAttrs");

	// HUDRadarResource
	set_name(0x15374fc, "HUDRadarResource");
	apply_type(0x15374fc, "RTTICompound");
	del_items(0x15387a0, DELIT_SIMPLE, 8);
	apply_type(0x15387a0, "RTTIBase[1]");
	set_name(0x15387a0, "HUDRadarResource::sBases");
	del_items(0x15387a8, DELIT_SIMPLE, 476);
	apply_type(0x15387a8, "RTTIAttr[17]");
	set_name(0x15387a8, "HUDRadarResource::sAttrs");
	del_items(0x1538984, DELIT_SIMPLE, 12);
	apply_type(0x1538984, "RTTIMessageHandler[1]");
	set_name(0x1538984, "HUDRadarResource::sMessageHandlers");

	// HUDResource
	set_name(0x1530b14, "HUDResource");
	apply_type(0x1530b14, "RTTICompound");
	del_items(0x153206c, DELIT_SIMPLE, 8);
	apply_type(0x153206c, "RTTIBase[1]");
	set_name(0x153206c, "HUDResource::sBases");
	del_items(0x1532074, DELIT_SIMPLE, 168);
	apply_type(0x1532074, "RTTIAttr[6]");
	set_name(0x1532074, "HUDResource::sAttrs");

	// HUDRibbonIconsResource
	set_name(0x1537864, "HUDRibbonIconsResource");
	apply_type(0x1537864, "RTTICompound");
	del_items(0x1539450, DELIT_SIMPLE, 8);
	apply_type(0x1539450, "RTTIBase[1]");
	set_name(0x1539450, "HUDRibbonIconsResource::sBases");
	del_items(0x1539458, DELIT_SIMPLE, 252);
	apply_type(0x1539458, "RTTIAttr[9]");
	set_name(0x1539458, "HUDRibbonIconsResource::sAttrs");
	del_items(0x1539554, DELIT_SIMPLE, 12);
	apply_type(0x1539554, "RTTIMessageHandler[1]");
	set_name(0x1539554, "HUDRibbonIconsResource::sMessageHandlers");

	// HUDSabotageAbilityResource
	set_name(0x1534414, "HUDSabotageAbilityResource");
	apply_type(0x1534414, "RTTICompound");
	del_items(0x153509c, DELIT_SIMPLE, 8);
	apply_type(0x153509c, "RTTIBase[1]");
	set_name(0x153509c, "HUDSabotageAbilityResource::sBases");
	del_items(0x15350a4, DELIT_SIMPLE, 56);
	apply_type(0x15350a4, "RTTIAttr[2]");
	set_name(0x15350a4, "HUDSabotageAbilityResource::sAttrs");

	// HUDScoreEventActivateAnimation
	set_name(0x15375c4, "HUDScoreEventActivateAnimation");
	apply_type(0x15375c4, "RTTICompound");
	del_items(0x1538a40, DELIT_SIMPLE, 8);
	apply_type(0x1538a40, "RTTIBase[1]");
	set_name(0x1538a40, "HUDScoreEventActivateAnimation::sBases");
	del_items(0x1538a48, DELIT_SIMPLE, 56);
	apply_type(0x1538a48, "RTTIAttr[2]");
	set_name(0x1538a48, "HUDScoreEventActivateAnimation::sAttrs");

	// HUDScoreEventAnimation
	set_name(0x1537560, "HUDScoreEventAnimation");
	apply_type(0x1537560, "RTTICompound");
	del_items(0x1538990, DELIT_SIMPLE, 8);
	apply_type(0x1538990, "RTTIBase[1]");
	set_name(0x1538990, "HUDScoreEventAnimation::sBases");
	del_items(0x1538998, DELIT_SIMPLE, 168);
	apply_type(0x1538998, "RTTIAttr[6]");
	set_name(0x1538998, "HUDScoreEventAnimation::sAttrs");

	// HUDScoreEventResource
	set_name(0x1537618, "HUDScoreEventResource");
	apply_type(0x1537618, "RTTICompound");
	del_items(0x1538a80, DELIT_SIMPLE, 8);
	apply_type(0x1538a80, "RTTIBase[1]");
	set_name(0x1538a80, "HUDScoreEventResource::sBases");
	del_items(0x1538a88, DELIT_SIMPLE, 336);
	apply_type(0x1538a88, "RTTIAttr[12]");
	set_name(0x1538a88, "HUDScoreEventResource::sAttrs");

	// HUDShowInitialWeaponLayoutResource
	set_name(0x153766c, "HUDShowInitialWeaponLayoutResource");
	apply_type(0x153766c, "RTTICompound");
	del_items(0x1538bd8, DELIT_SIMPLE, 8);
	apply_type(0x1538bd8, "RTTIBase[1]");
	set_name(0x1538bd8, "HUDShowInitialWeaponLayoutResource::sBases");
	del_items(0x1538be0, DELIT_SIMPLE, 336);
	apply_type(0x1538be0, "RTTIAttr[12]");
	set_name(0x1538be0, "HUDShowInitialWeaponLayoutResource::sAttrs");
	del_items(0x1538d30, DELIT_SIMPLE, 12);
	apply_type(0x1538d30, "RTTIMessageHandler[1]");
	set_name(0x1538d30, "HUDShowInitialWeaponLayoutResource::sMessageHandlers");

	// HUDSpectatorResource
	set_name(0x15378b8, "HUDSpectatorResource");
	apply_type(0x15378b8, "RTTICompound");
	del_items(0x1539560, DELIT_SIMPLE, 8);
	apply_type(0x1539560, "RTTIBase[1]");
	set_name(0x1539560, "HUDSpectatorResource::sBases");
	del_items(0x1539568, DELIT_SIMPLE, 280);
	apply_type(0x1539568, "RTTIAttr[10]");
	set_name(0x1539568, "HUDSpectatorResource::sAttrs");
	del_items(0x1539680, DELIT_SIMPLE, 12);
	apply_type(0x1539680, "RTTIMessageHandler[1]");
	set_name(0x1539680, "HUDSpectatorResource::sMessageHandlers");

	// HUDSpotAndMarkResource
	set_name(0x153436c, "HUDSpotAndMarkResource");
	apply_type(0x153436c, "RTTICompound");
	del_items(0x1534d80, DELIT_SIMPLE, 8);
	apply_type(0x1534d80, "RTTIBase[1]");
	set_name(0x1534d80, "HUDSpotAndMarkResource::sBases");
	del_items(0x1534d88, DELIT_SIMPLE, 644);
	apply_type(0x1534d88, "RTTIAttr[23]");
	set_name(0x1534d88, "HUDSpotAndMarkResource::sAttrs");
	del_items(0x153500c, DELIT_SIMPLE, 12);
	apply_type(0x153500c, "RTTIMessageHandler[1]");
	set_name(0x153500c, "HUDSpotAndMarkResource::sMessageHandlers");

	// HUDSpotAndMarkResourcePatched
	set_name(0x15343c0, "HUDSpotAndMarkResourcePatched");
	apply_type(0x15343c0, "RTTICompound");
	del_items(0x1535018, DELIT_SIMPLE, 8);
	apply_type(0x1535018, "RTTIBase[1]");
	set_name(0x1535018, "HUDSpotAndMarkResourcePatched::sBases");
	del_items(0x1535020, DELIT_SIMPLE, 112);
	apply_type(0x1535020, "RTTIAttr[4]");
	set_name(0x1535020, "HUDSpotAndMarkResourcePatched::sAttrs");
	del_items(0x1535090, DELIT_SIMPLE, 12);
	apply_type(0x1535090, "RTTIMessageHandler[1]");
	set_name(0x1535090, "HUDSpotAndMarkResourcePatched::sMessageHandlers");

	// HUDSpriteProperties
	set_name(0x1530bbc, "HUDSpriteProperties");
	apply_type(0x1530bbc, "RTTICompound");
	del_items(0x1531708, DELIT_SIMPLE, 56);
	apply_type(0x1531708, "RTTIAttr[2]");
	set_name(0x1531708, "HUDSpriteProperties::sAttrs");

	// HUDSquadResource
	set_name(0x1531364, "HUDSquadResource");
	apply_type(0x1531364, "RTTICompound");
	del_items(0x1533824, DELIT_SIMPLE, 8);
	apply_type(0x1533824, "RTTIBase[1]");
	set_name(0x1533824, "HUDSquadResource::sBases");
	del_items(0x153382c, DELIT_SIMPLE, 504);
	apply_type(0x153382c, "RTTIAttr[18]");
	set_name(0x153382c, "HUDSquadResource::sAttrs");
	del_items(0x1533a24, DELIT_SIMPLE, 12);
	apply_type(0x1533a24, "RTTIMessageHandler[1]");
	set_name(0x1533a24, "HUDSquadResource::sMessageHandlers");

	// HUDSubtitlesResource
	set_name(0x15376c0, "HUDSubtitlesResource");
	apply_type(0x15376c0, "RTTICompound");
	del_items(0x1538ed8, DELIT_SIMPLE, 8);
	apply_type(0x1538ed8, "RTTIBase[1]");
	set_name(0x1538ed8, "HUDSubtitlesResource::sBases");

	// HUDTargetEntityResource
	set_name(0x153549c, "HUDTargetEntityResource");
	apply_type(0x153549c, "RTTICompound");
	del_items(0x15367a0, DELIT_SIMPLE, 8);
	apply_type(0x15367a0, "RTTIBase[1]");
	set_name(0x15367a0, "HUDTargetEntityResource::sBases");
	del_items(0x15367a8, DELIT_SIMPLE, 644);
	apply_type(0x15367a8, "RTTIAttr[23]");
	set_name(0x15367a8, "HUDTargetEntityResource::sAttrs");
	del_items(0x1536a2c, DELIT_SIMPLE, 12);
	apply_type(0x1536a2c, "RTTIMessageHandler[1]");
	set_name(0x1536a2c, "HUDTargetEntityResource::sMessageHandlers");

	// HUDTextElementResource
	set_name(0x1537714, "HUDTextElementResource");
	apply_type(0x1537714, "RTTICompound");
	del_items(0x1538d3c, DELIT_SIMPLE, 8);
	apply_type(0x1538d3c, "RTTIBase[1]");
	set_name(0x1538d3c, "HUDTextElementResource::sBases");
	del_items(0x1538d44, DELIT_SIMPLE, 392);
	apply_type(0x1538d44, "RTTIAttr[14]");
	set_name(0x1538d44, "HUDTextElementResource::sAttrs");
	del_items(0x1538ecc, DELIT_SIMPLE, 12);
	apply_type(0x1538ecc, "RTTIMessageHandler[1]");
	set_name(0x1538ecc, "HUDTextElementResource::sMessageHandlers");

	// HUDTextEventResource
	set_name(0x15313b8, "HUDTextEventResource");
	apply_type(0x15313b8, "RTTICompound");
	del_items(0x1533a30, DELIT_SIMPLE, 8);
	apply_type(0x1533a30, "RTTIBase[1]");
	set_name(0x1533a30, "HUDTextEventResource::sBases");
	del_items(0x1533a38, DELIT_SIMPLE, 728);
	apply_type(0x1533a38, "RTTIAttr[26]");
	set_name(0x1533a38, "HUDTextEventResource::sAttrs");

	// HUDTextResource
	set_name(0x1537010, "HUDTextResource");
	apply_type(0x1537010, "RTTICompound");
	del_items(0x1537cec, DELIT_SIMPLE, 8);
	apply_type(0x1537cec, "RTTIBase[1]");
	set_name(0x1537cec, "HUDTextResource::sBases");
	del_items(0x1537cf4, DELIT_SIMPLE, 280);
	apply_type(0x1537cf4, "RTTIAttr[10]");
	set_name(0x1537cf4, "HUDTextResource::sAttrs");

	// HUDTilePart
	set_name(0x1530b68, "HUDTilePart");
	apply_type(0x1530b68, "RTTICompound");
	del_items(0x153211c, DELIT_SIMPLE, 112);
	apply_type(0x153211c, "RTTIAttr[4]");
	set_name(0x153211c, "HUDTilePart::sAttrs");

	// HUDTimerSettings
	set_name(0x1530f78, "HUDTimerSettings");
	apply_type(0x1530f78, "RTTICompound");
	del_items(0x1532d20, DELIT_SIMPLE, 8);
	apply_type(0x1532d20, "RTTIBase[1]");
	set_name(0x1532d20, "HUDTimerSettings::sBases");
	del_items(0x1532d28, DELIT_SIMPLE, 308);
	apply_type(0x1532d28, "RTTIAttr[11]");
	set_name(0x1532d28, "HUDTimerSettings::sAttrs");

	// HUDTutorialResource
	set_name(0x1542894, "HUDTutorialResource");
	apply_type(0x1542894, "RTTICompound");
	del_items(0x1544044, DELIT_SIMPLE, 8);
	apply_type(0x1544044, "RTTIBase[1]");
	set_name(0x1544044, "HUDTutorialResource::sBases");
	del_items(0x154404c, DELIT_SIMPLE, 280);
	apply_type(0x154404c, "RTTIAttr[10]");
	set_name(0x154404c, "HUDTutorialResource::sAttrs");

	// HUDUseBarResource
	set_name(0x1537064, "HUDUseBarResource");
	apply_type(0x1537064, "RTTICompound");
	del_items(0x1537e0c, DELIT_SIMPLE, 8);
	apply_type(0x1537e0c, "RTTIBase[1]");
	set_name(0x1537e0c, "HUDUseBarResource::sBases");
	del_items(0x1537e14, DELIT_SIMPLE, 196);
	apply_type(0x1537e14, "RTTIAttr[7]");
	set_name(0x1537e14, "HUDUseBarResource::sAttrs");
	del_items(0x1537ed8, DELIT_SIMPLE, 12);
	apply_type(0x1537ed8, "RTTIMessageHandler[1]");
	set_name(0x1537ed8, "HUDUseBarResource::sMessageHandlers");

	// HUDVehicleHealthWarningResource
	set_name(0x15370b8, "HUDVehicleHealthWarningResource");
	apply_type(0x15370b8, "RTTICompound");
	del_items(0x1537ee4, DELIT_SIMPLE, 8);
	apply_type(0x1537ee4, "RTTIBase[1]");
	set_name(0x1537ee4, "HUDVehicleHealthWarningResource::sBases");
	del_items(0x1537eec, DELIT_SIMPLE, 84);
	apply_type(0x1537eec, "RTTIAttr[3]");
	set_name(0x1537eec, "HUDVehicleHealthWarningResource::sAttrs");

	// HUDVoiceCommResource
	set_name(0x153710c, "HUDVoiceCommResource");
	apply_type(0x153710c, "RTTICompound");
	del_items(0x1537f40, DELIT_SIMPLE, 8);
	apply_type(0x1537f40, "RTTIBase[1]");
	set_name(0x1537f40, "HUDVoiceCommResource::sBases");
	del_items(0x1537f48, DELIT_SIMPLE, 672);
	apply_type(0x1537f48, "RTTIAttr[24]");
	set_name(0x1537f48, "HUDVoiceCommResource::sAttrs");

	// HUDWeaponSelectIconResource
	set_name(0x15354f0, "HUDWeaponSelectIconResource");
	apply_type(0x15354f0, "RTTICompound");
	del_items(0x1536a38, DELIT_SIMPLE, 224);
	apply_type(0x1536a38, "RTTIAttr[8]");
	set_name(0x1536a38, "HUDWeaponSelectIconResource::sAttrs");

	// HUDWeaponSelectResource
	set_name(0x1535544, "HUDWeaponSelectResource");
	apply_type(0x1535544, "RTTICompound");
	del_items(0x1536b18, DELIT_SIMPLE, 8);
	apply_type(0x1536b18, "RTTIBase[1]");
	set_name(0x1536b18, "HUDWeaponSelectResource::sBases");
	del_items(0x1536b20, DELIT_SIMPLE, 588);
	apply_type(0x1536b20, "RTTIAttr[21]");
	set_name(0x1536b20, "HUDWeaponSelectResource::sAttrs");

	// HUDWeaponTextElementResource
	set_name(0x1537768, "HUDWeaponTextElementResource");
	apply_type(0x1537768, "RTTICompound");
	del_items(0x1538ee0, DELIT_SIMPLE, 8);
	apply_type(0x1538ee0, "RTTIBase[1]");
	set_name(0x1538ee0, "HUDWeaponTextElementResource::sBases");
	del_items(0x1538ee8, DELIT_SIMPLE, 28);
	apply_type(0x1538ee8, "RTTIAttr[1]");
	set_name(0x1538ee8, "HUDWeaponTextElementResource::sAttrs");

	// HammerVehicle
	set_name(0x150b784, "HammerVehicle");
	apply_type(0x150b784, "RTTICompound");
	del_items(0x150d4c8, DELIT_SIMPLE, 8);
	apply_type(0x150d4c8, "RTTIBase[1]");
	set_name(0x150d4c8, "HammerVehicle::sBases");
	del_items(0x150d4d0, DELIT_SIMPLE, 48);
	apply_type(0x150d4d0, "RTTIFunction[2]");
	set_name(0x150d4d0, "HammerVehicle::sFunctions");

	// HammerVehicleJoystickController
	set_name(0x150b9d0, "HammerVehicleJoystickController");
	apply_type(0x150b9d0, "RTTICompound");
	del_items(0x150d6d0, DELIT_SIMPLE, 8);
	apply_type(0x150d6d0, "RTTIBase[1]");
	set_name(0x150d6d0, "HammerVehicleJoystickController::sBases");

	// HammerVehicleRep
	set_name(0x150bacc, "HammerVehicleRep");
	apply_type(0x150bacc, "RTTICompound");
	del_items(0x150d6e8, DELIT_SIMPLE, 8);
	apply_type(0x150d6e8, "RTTIBase[1]");
	set_name(0x150d6e8, "HammerVehicleRep::sBases");

	// HammerVehicleResource
	set_name(0x150bbc8, "HammerVehicleResource");
	apply_type(0x150bbc8, "RTTICompound");
	del_items(0x150d354, DELIT_SIMPLE, 8);
	apply_type(0x150d354, "RTTIBase[1]");
	set_name(0x150d354, "HammerVehicleResource::sBases");
	del_items(0x150d35c, DELIT_SIMPLE, 364);
	apply_type(0x150d35c, "RTTIAttr[13]");
	set_name(0x150d35c, "HammerVehicleResource::sAttrs");

	// HeadshotAllowedAction
	set_name(0x14f9900, "HeadshotAllowedAction");
	apply_type(0x14f9900, "RTTICompound");
	del_items(0x14fe488, DELIT_SIMPLE, 8);
	apply_type(0x14fe488, "RTTIBase[1]");
	set_name(0x14fe488, "HeadshotAllowedAction::sBases");

	// HealAction
	set_name(0x14f921c, "HealAction");
	apply_type(0x14f921c, "RTTICompound");
	del_items(0x14fddc0, DELIT_SIMPLE, 8);
	apply_type(0x14fddc0, "RTTIBase[1]");
	set_name(0x14fddc0, "HealAction::sBases");
	del_items(0x14fddc8, DELIT_SIMPLE, 112);
	apply_type(0x14fddc8, "RTTIAttr[4]");
	set_name(0x14fddc8, "HealAction::sAttrs");

	// HealthBarResource
	set_name(0x1531258, "HealthBarResource");
	apply_type(0x1531258, "RTTICompound");
	del_items(0x153318c, DELIT_SIMPLE, 504);
	apply_type(0x153318c, "RTTIAttr[18]");
	set_name(0x153318c, "HealthBarResource::sAttrs");

	// HealthPickUpResource
	set_name(0x1517d10, "HealthPickUpResource");
	apply_type(0x1517d10, "RTTICompound");
	del_items(0x1518964, DELIT_SIMPLE, 8);
	apply_type(0x1518964, "RTTIBase[1]");
	set_name(0x1518964, "HealthPickUpResource::sBases");
	del_items(0x151896c, DELIT_SIMPLE, 140);
	apply_type(0x151896c, "RTTIAttr[5]");
	set_name(0x151896c, "HealthPickUpResource::sAttrs");

	// HeldItemsHolderEntity
	set_name(0x154b330, "HeldItemsHolderEntity");
	apply_type(0x154b330, "RTTICompound");
	del_items(0x154c04c, DELIT_SIMPLE, 8);
	apply_type(0x154c04c, "RTTIBase[1]");
	set_name(0x154c04c, "HeldItemsHolderEntity::sBases");
	del_items(0x154c054, DELIT_SIMPLE, 72);
	apply_type(0x154c054, "RTTIFunction[3]");
	set_name(0x154c054, "HeldItemsHolderEntity::sFunctions");

	// HeldItemsHolderEntityController
	set_name(0x154b43c, "HeldItemsHolderEntityController");
	apply_type(0x154b43c, "RTTICompound");
	del_items(0x154c09c, DELIT_SIMPLE, 8);
	apply_type(0x154c09c, "RTTIBase[1]");
	set_name(0x154c09c, "HeldItemsHolderEntityController::sBases");

	// HeldItemsHolderEntityResource
	set_name(0x154b3e8, "HeldItemsHolderEntityResource");
	apply_type(0x154b3e8, "RTTICompound");
	del_items(0x154c00c, DELIT_SIMPLE, 8);
	apply_type(0x154c00c, "RTTIBase[1]");
	set_name(0x154c00c, "HeldItemsHolderEntityResource::sBases");
	del_items(0x154c014, DELIT_SIMPLE, 56);
	apply_type(0x154c014, "RTTIAttr[2]");
	set_name(0x154c014, "HeldItemsHolderEntityResource::sAttrs");

	// HeldItemsHolderSlot
	set_name(0x154b394, "HeldItemsHolderSlot");
	apply_type(0x154b394, "RTTICompound");
	del_items(0x154bf6c, DELIT_SIMPLE, 8);
	apply_type(0x154bf6c, "RTTIBase[1]");
	set_name(0x154bf6c, "HeldItemsHolderSlot::sBases");
	del_items(0x154bf74, DELIT_SIMPLE, 140);
	apply_type(0x154bf74, "RTTIAttr[5]");
	set_name(0x154bf74, "HeldItemsHolderSlot::sAttrs");

	// HeldItemsHolderUser
	set_name(0x154b2dc, "HeldItemsHolderUser");
	apply_type(0x154b2dc, "RTTICompound");
	del_items(0x154bf64, DELIT_SIMPLE, 8);
	apply_type(0x154bf64, "RTTIBase[1]");
	set_name(0x154bf64, "HeldItemsHolderUser::sBases");

	// HelghastGogglesComponent
	set_name(0x150f454, "HelghastGogglesComponent");
	apply_type(0x150f454, "RTTICompound");
	del_items(0x151102c, DELIT_SIMPLE, 8);
	apply_type(0x151102c, "RTTIBase[1]");
	set_name(0x151102c, "HelghastGogglesComponent::sBases");

	// HelghastGogglesComponentRep
	set_name(0x150f4a8, "HelghastGogglesComponentRep");
	apply_type(0x150f4a8, "RTTICompound");
	del_items(0x1512244, DELIT_SIMPLE, 8);
	apply_type(0x1512244, "RTTIBase[1]");
	set_name(0x1512244, "HelghastGogglesComponentRep::sBases");

	// HelghastGogglesComponentResource
	set_name(0x150f50c, "HelghastGogglesComponentResource");
	apply_type(0x150f50c, "RTTICompound");
	del_items(0x1510e60, DELIT_SIMPLE, 8);
	apply_type(0x1510e60, "RTTIBase[1]");
	set_name(0x1510e60, "HelghastGogglesComponentResource::sBases");
	del_items(0x1510e68, DELIT_SIMPLE, 448);
	apply_type(0x1510e68, "RTTIAttr[16]");
	set_name(0x1510e68, "HelghastGogglesComponentResource::sAttrs");

	// HelperNode
	set_name(0x14e18c4, "HelperNode");
	apply_type(0x14e18c4, "RTTICompound");
	del_items(0x14e1bc0, DELIT_SIMPLE, 8);
	apply_type(0x14e1bc0, "RTTIBase[1]");
	set_name(0x14e1bc0, "HelperNode::sBases");
	del_items(0x14e1bc8, DELIT_SIMPLE, 84);
	apply_type(0x14e1bc8, "RTTIAttr[3]");
	set_name(0x14e1bc8, "HelperNode::sAttrs");

	// HideActorEventInstance
	set_name(0x151a278, "HideActorEventInstance");
	apply_type(0x151a278, "RTTICompound");
	del_items(0x151c10c, DELIT_SIMPLE, 8);
	apply_type(0x151c10c, "RTTIBase[1]");
	set_name(0x151c10c, "HideActorEventInstance::sBases");

	// HideActorEventResource
	set_name(0x151a224, "HideActorEventResource");
	apply_type(0x151a224, "RTTICompound");
	del_items(0x151c094, DELIT_SIMPLE, 8);
	apply_type(0x151c094, "RTTIBase[1]");
	set_name(0x151c094, "HideActorEventResource::sBases");
	del_items(0x151c09c, DELIT_SIMPLE, 112);
	apply_type(0x151c09c, "RTTIAttr[4]");
	set_name(0x151c09c, "HideActorEventResource::sAttrs");

	// HideAllPlayersEventInstance
	set_name(0x151a320, "HideAllPlayersEventInstance");
	apply_type(0x151a320, "RTTICompound");
	del_items(0x151c11c, DELIT_SIMPLE, 8);
	apply_type(0x151c11c, "RTTIBase[1]");
	set_name(0x151c11c, "HideAllPlayersEventInstance::sBases");

	// HideAllPlayersEventResource
	set_name(0x151a2cc, "HideAllPlayersEventResource");
	apply_type(0x151a2cc, "RTTICompound");
	del_items(0x151c114, DELIT_SIMPLE, 8);
	apply_type(0x151c114, "RTTIBase[1]");
	set_name(0x151c114, "HideAllPlayersEventResource::sBases");

	// HideHUDEventInstance
	set_name(0x151a3c8, "HideHUDEventInstance");
	apply_type(0x151a3c8, "RTTICompound");
	del_items(0x151c164, DELIT_SIMPLE, 8);
	apply_type(0x151c164, "RTTIBase[1]");
	set_name(0x151c164, "HideHUDEventInstance::sBases");

	// HideHUDEventResource
	set_name(0x151a374, "HideHUDEventResource");
	apply_type(0x151a374, "RTTICompound");
	del_items(0x151c124, DELIT_SIMPLE, 8);
	apply_type(0x151c124, "RTTIBase[1]");
	set_name(0x151c124, "HideHUDEventResource::sBases");
	del_items(0x151c12c, DELIT_SIMPLE, 56);
	apply_type(0x151c12c, "RTTIAttr[2]");
	set_name(0x151c12c, "HideHUDEventResource::sAttrs");

	// HitResponseAttachedParticlesResource
	set_name(0x14fafe4, "HitResponseAttachedParticlesResource");
	apply_type(0x14fafe4, "RTTICompound");
	del_items(0x14fbda4, DELIT_SIMPLE, 8);
	apply_type(0x14fbda4, "RTTIBase[1]");
	set_name(0x14fbda4, "HitResponseAttachedParticlesResource::sBases");
	del_items(0x14fbdac, DELIT_SIMPLE, 168);
	apply_type(0x14fbdac, "RTTIAttr[6]");
	set_name(0x14fbdac, "HitResponseAttachedParticlesResource::sAttrs");

	// HtnAtom
	set_name(0x14d42c0, "HtnAtom");
	apply_type(0x14d42c0, "RTTICompound");

	// HtnFactDatabase
	set_name(0x14d4314, "HtnFactDatabase");
	apply_type(0x14d4314, "RTTICompound");

	// Humanoid
	set_name(0x150be98, "Humanoid");
	apply_type(0x150be98, "RTTICompound");
	del_items(0x150c74c, DELIT_SIMPLE, 8);
	apply_type(0x150c74c, "RTTIBase[1]");
	set_name(0x150c74c, "Humanoid::sBases");
	del_items(0x150c754, DELIT_SIMPLE, 1344);
	apply_type(0x150c754, "RTTIFunction[56]");
	set_name(0x150c754, "Humanoid::sFunctions");
	del_items(0x150cc94, DELIT_SIMPLE, 12);
	apply_type(0x150cc94, "RTTIMessageHandler[1]");
	set_name(0x150cc94, "Humanoid::sMessageHandlers");

	// HumanoidAnimatedStaggerState
	set_name(0x150e1bc, "HumanoidAnimatedStaggerState");
	apply_type(0x150e1bc, "RTTICompound");
	del_items(0x1511ab8, DELIT_SIMPLE, 8);
	apply_type(0x1511ab8, "RTTIBase[1]");
	set_name(0x1511ab8, "HumanoidAnimatedStaggerState::sBases");

	// HumanoidAnimatedStaggerStateResource
	set_name(0x150e210, "HumanoidAnimatedStaggerStateResource");
	apply_type(0x150e210, "RTTICompound");
	del_items(0x1511ac0, DELIT_SIMPLE, 8);
	apply_type(0x1511ac0, "RTTIBase[1]");
	set_name(0x1511ac0, "HumanoidAnimatedStaggerStateResource::sBases");

	// HumanoidBodyVariant
	set_name(0x14fb270, "HumanoidBodyVariant");
	apply_type(0x14fb270, "RTTICompound");
	del_items(0x14fc000, DELIT_SIMPLE, 112);
	apply_type(0x14fc000, "RTTIAttr[4]");
	set_name(0x14fc000, "HumanoidBodyVariant::sAttrs");

	// HumanoidCinematicDeathSystem
	set_name(0x150e818, "HumanoidCinematicDeathSystem");
	apply_type(0x150e818, "RTTICompound");
	del_items(0x15109c8, DELIT_SIMPLE, 8);
	apply_type(0x15109c8, "RTTIBase[1]");
	set_name(0x15109c8, "HumanoidCinematicDeathSystem::sBases");

	// HumanoidCinematicDeathSystemResource
	set_name(0x150e87c, "HumanoidCinematicDeathSystemResource");
	apply_type(0x150e87c, "RTTICompound");
	del_items(0x1511cac, DELIT_SIMPLE, 8);
	apply_type(0x1511cac, "RTTIBase[1]");
	set_name(0x1511cac, "HumanoidCinematicDeathSystemResource::sBases");
	del_items(0x1511cb4, DELIT_SIMPLE, 84);
	apply_type(0x1511cb4, "RTTIAttr[3]");
	set_name(0x1511cb4, "HumanoidCinematicDeathSystemResource::sAttrs");

	// HumanoidController
	set_name(0x14fadf8, "HumanoidController");
	apply_type(0x14fadf8, "RTTICompound");
	del_items(0x14fd4ac, DELIT_SIMPLE, 8);
	apply_type(0x14fd4ac, "RTTIBase[1]");
	set_name(0x14fd4ac, "HumanoidController::sBases");

	// HumanoidCoverState
	set_name(0x150e264, "HumanoidCoverState");
	apply_type(0x150e264, "RTTICompound");
	del_items(0x1511560, DELIT_SIMPLE, 8);
	apply_type(0x1511560, "RTTIBase[1]");
	set_name(0x1511560, "HumanoidCoverState::sBases");

	// HumanoidCoverStateResource
	set_name(0x150e2b8, "HumanoidCoverStateResource");
	apply_type(0x150e2b8, "RTTICompound");
	del_items(0x1511570, DELIT_SIMPLE, 8);
	apply_type(0x1511570, "RTTIBase[1]");
	set_name(0x1511570, "HumanoidCoverStateResource::sBases");
	del_items(0x1511578, DELIT_SIMPLE, 1232);
	apply_type(0x1511578, "RTTIAttr[44]");
	set_name(0x1511578, "HumanoidCoverStateResource::sAttrs");
	del_items(0x1511a48, DELIT_SIMPLE, 12);
	apply_type(0x1511a48, "RTTIMessageHandler[1]");
	set_name(0x1511a48, "HumanoidCoverStateResource::sMessageHandlers");

	// HumanoidDeadState
	set_name(0x150e30c, "HumanoidDeadState");
	apply_type(0x150e30c, "RTTICompound");
	del_items(0x1511ac8, DELIT_SIMPLE, 8);
	apply_type(0x1511ac8, "RTTIBase[1]");
	set_name(0x1511ac8, "HumanoidDeadState::sBases");

	// HumanoidDeadStateResource
	set_name(0x150e370, "HumanoidDeadStateResource");
	apply_type(0x150e370, "RTTICompound");
	del_items(0x1511ad0, DELIT_SIMPLE, 8);
	apply_type(0x1511ad0, "RTTIBase[1]");
	set_name(0x1511ad0, "HumanoidDeadStateResource::sBases");
	del_items(0x1511ad8, DELIT_SIMPLE, 140);
	apply_type(0x1511ad8, "RTTIAttr[5]");
	set_name(0x1511ad8, "HumanoidDeadStateResource::sAttrs");

	// HumanoidDirectionalStaggerState
	set_name(0x150e3c4, "HumanoidDirectionalStaggerState");
	apply_type(0x150e3c4, "RTTICompound");
	del_items(0x1511b64, DELIT_SIMPLE, 8);
	apply_type(0x1511b64, "RTTIBase[1]");
	set_name(0x1511b64, "HumanoidDirectionalStaggerState::sBases");

	// HumanoidDirectionalStaggerStateResource
	set_name(0x150e428, "HumanoidDirectionalStaggerStateResource");
	apply_type(0x150e428, "RTTICompound");
	del_items(0x1511b6c, DELIT_SIMPLE, 8);
	apply_type(0x1511b6c, "RTTIBase[1]");
	set_name(0x1511b6c, "HumanoidDirectionalStaggerStateResource::sBases");
	del_items(0x1511b74, DELIT_SIMPLE, 56);
	apply_type(0x1511b74, "RTTIAttr[2]");
	set_name(0x1511b74, "HumanoidDirectionalStaggerStateResource::sAttrs");

	// HumanoidFallOverState
	set_name(0x150e47c, "HumanoidFallOverState");
	apply_type(0x150e47c, "RTTICompound");
	del_items(0x15109b0, DELIT_SIMPLE, 8);
	apply_type(0x15109b0, "RTTIBase[1]");
	set_name(0x15109b0, "HumanoidFallOverState::sBases");

	// HumanoidFallOverStateResource
	set_name(0x150e4d0, "HumanoidFallOverStateResource");
	apply_type(0x150e4d0, "RTTICompound");
	del_items(0x1511bac, DELIT_SIMPLE, 8);
	apply_type(0x1511bac, "RTTIBase[1]");
	set_name(0x1511bac, "HumanoidFallOverStateResource::sBases");
	del_items(0x1511bb4, DELIT_SIMPLE, 168);
	apply_type(0x1511bb4, "RTTIAttr[6]");
	set_name(0x1511bb4, "HumanoidFallOverStateResource::sAttrs");

	// HumanoidFlyState
	set_name(0x150e524, "HumanoidFlyState");
	apply_type(0x150e524, "RTTICompound");
	del_items(0x1511c5c, DELIT_SIMPLE, 8);
	apply_type(0x1511c5c, "RTTIBase[1]");
	set_name(0x1511c5c, "HumanoidFlyState::sBases");

	// HumanoidFlyStateResource
	set_name(0x150e578, "HumanoidFlyStateResource");
	apply_type(0x150e578, "RTTICompound");
	del_items(0x1511a54, DELIT_SIMPLE, 8);
	apply_type(0x1511a54, "RTTIBase[1]");
	set_name(0x1511a54, "HumanoidFlyStateResource::sBases");
	del_items(0x1511a5c, DELIT_SIMPLE, 84);
	apply_type(0x1511a5c, "RTTIAttr[3]");
	set_name(0x1511a5c, "HumanoidFlyStateResource::sAttrs");

	// HumanoidHitLocationMapping
	set_name(0x14fb164, "HumanoidHitLocationMapping");
	apply_type(0x14fb164, "RTTICompound");
	del_items(0x14fbfc8, DELIT_SIMPLE, 56);
	apply_type(0x14fbfc8, "RTTIAttr[2]");
	set_name(0x14fbfc8, "HumanoidHitLocationMapping::sAttrs");

	// HumanoidHitResponseBehaviour
	set_name(0x14fb110, "HumanoidHitResponseBehaviour");
	apply_type(0x14fb110, "RTTICompound");
	del_items(0x14ff8c0, DELIT_SIMPLE, 8);
	apply_type(0x14ff8c0, "RTTIBase[1]");
	set_name(0x14ff8c0, "HumanoidHitResponseBehaviour::sBases");
	del_items(0x14ff8c8, DELIT_SIMPLE, 84);
	apply_type(0x14ff8c8, "RTTIAttr[3]");
	set_name(0x14ff8c8, "HumanoidHitResponseBehaviour::sAttrs");

	// HumanoidHitResponseBehaviourInput
	set_name(0x14fb038, "HumanoidHitResponseBehaviourInput");
	apply_type(0x14fb038, "RTTICompound");
	del_items(0x14ff634, DELIT_SIMPLE, 224);
	apply_type(0x14ff634, "RTTIAttr[8]");
	set_name(0x14ff634, "HumanoidHitResponseBehaviourInput::sAttrs");

	// HumanoidHitResponseBehaviourOutput
	set_name(0x14fb09c, "HumanoidHitResponseBehaviourOutput");
	apply_type(0x14fb09c, "RTTICompound");
	del_items(0x14ff714, DELIT_SIMPLE, 8);
	apply_type(0x14ff714, "RTTIBase[1]");
	set_name(0x14ff714, "HumanoidHitResponseBehaviourOutput::sBases");
	del_items(0x14ff71c, DELIT_SIMPLE, 420);
	apply_type(0x14ff71c, "RTTIAttr[15]");
	set_name(0x14ff71c, "HumanoidHitResponseBehaviourOutput::sAttrs");

	// HumanoidHitResponseResource
	set_name(0x14fb1b8, "HumanoidHitResponseResource");
	apply_type(0x14fb1b8, "RTTICompound");
	del_items(0x14fbe54, DELIT_SIMPLE, 8);
	apply_type(0x14fbe54, "RTTIBase[1]");
	set_name(0x14fbe54, "HumanoidHitResponseResource::sBases");
	del_items(0x14fbe5c, DELIT_SIMPLE, 364);
	apply_type(0x14fbe5c, "RTTIAttr[13]");
	set_name(0x14fbe5c, "HumanoidHitResponseResource::sAttrs");

	// HumanoidInventory
	set_name(0x1512b08, "HumanoidInventory");
	apply_type(0x1512b08, "RTTICompound");
	del_items(0x151469c, DELIT_SIMPLE, 8);
	apply_type(0x151469c, "RTTIBase[1]");
	set_name(0x151469c, "HumanoidInventory::sBases");

	// HumanoidKnockBackState
	set_name(0x150e5cc, "HumanoidKnockBackState");
	apply_type(0x150e5cc, "RTTICompound");
	del_items(0x1510e08, DELIT_SIMPLE, 8);
	apply_type(0x1510e08, "RTTIBase[1]");
	set_name(0x1510e08, "HumanoidKnockBackState::sBases");

	// HumanoidKnockBackStateResource
	set_name(0x150e620, "HumanoidKnockBackStateResource");
	apply_type(0x150e620, "RTTICompound");
	del_items(0x1511c64, DELIT_SIMPLE, 8);
	apply_type(0x1511c64, "RTTIBase[1]");
	set_name(0x1511c64, "HumanoidKnockBackStateResource::sBases");
	del_items(0x1511c6c, DELIT_SIMPLE, 56);
	apply_type(0x1511c6c, "RTTIAttr[2]");
	set_name(0x1511c6c, "HumanoidKnockBackStateResource::sAttrs");

	// HumanoidLeanAndPeekState
	set_name(0x150e674, "HumanoidLeanAndPeekState");
	apply_type(0x150e674, "RTTICompound");
	del_items(0x151154c, DELIT_SIMPLE, 8);
	apply_type(0x151154c, "RTTIBase[1]");
	set_name(0x151154c, "HumanoidLeanAndPeekState::sBases");

	// HumanoidLeanAndPeekStateResource
	set_name(0x150e6c8, "HumanoidLeanAndPeekStateResource");
	apply_type(0x150e6c8, "RTTICompound");
	del_items(0x15113d8, DELIT_SIMPLE, 8);
	apply_type(0x15113d8, "RTTIBase[1]");
	set_name(0x15113d8, "HumanoidLeanAndPeekStateResource::sBases");
	del_items(0x15113e0, DELIT_SIMPLE, 364);
	apply_type(0x15113e0, "RTTIAttr[13]");
	set_name(0x15113e0, "HumanoidLeanAndPeekStateResource::sAttrs");

	// HumanoidMover
	set_name(0x14fb680, "HumanoidMover");
	apply_type(0x14fb680, "RTTICompound");
	del_items(0x14ff614, DELIT_SIMPLE, 8);
	apply_type(0x14ff614, "RTTIBase[1]");
	set_name(0x14ff614, "HumanoidMover::sBases");
	del_items(0x14ff61c, DELIT_SIMPLE, 24);
	apply_type(0x14ff61c, "RTTIFunction[1]");
	set_name(0x14ff61c, "HumanoidMover::sFunctions");

	// HumanoidMoverResource
	set_name(0x14fb6d4, "HumanoidMoverResource");
	apply_type(0x14fb6d4, "RTTICompound");
	del_items(0x14ffa30, DELIT_SIMPLE, 8);
	apply_type(0x14ffa30, "RTTIBase[1]");
	set_name(0x14ffa30, "HumanoidMoverResource::sBases");
	del_items(0x14ffa38, DELIT_SIMPLE, 56);
	apply_type(0x14ffa38, "RTTIAttr[2]");
	set_name(0x14ffa38, "HumanoidMoverResource::sAttrs");

	// HumanoidRep
	set_name(0x14fb20c, "HumanoidRep");
	apply_type(0x14fb20c, "RTTICompound");
	del_items(0x14feed4, DELIT_SIMPLE, 8);
	apply_type(0x14feed4, "RTTIBase[1]");
	set_name(0x14feed4, "HumanoidRep::sBases");

	// HumanoidResource
	set_name(0x14fb38c, "HumanoidResource");
	apply_type(0x14fb38c, "RTTICompound");
	del_items(0x14fc148, DELIT_SIMPLE, 8);
	apply_type(0x14fc148, "RTTIBase[1]");
	set_name(0x14fc148, "HumanoidResource::sBases");
	del_items(0x14fd474, DELIT_SIMPLE, 24);
	apply_type(0x14fd474, "RTTIMessageHandler[2]");
	set_name(0x14fd474, "HumanoidResource::sMessageHandlers");

	// HumanoidSubState
	set_name(0x150e71c, "HumanoidSubState");
	apply_type(0x150e71c, "RTTICompound");
	del_items(0x15109a0, DELIT_SIMPLE, 16);
	apply_type(0x15109a0, "RTTIBase[2]");
	set_name(0x15109a0, "HumanoidSubState::sBases");

	// HumanoidSubStatePoseOverriddenByInteractiveEntity
	set_name(0x150e8d0, "HumanoidSubStatePoseOverriddenByInteractiveEntity");
	apply_type(0x150e8d0, "RTTICompound");
	del_items(0x1511d08, DELIT_SIMPLE, 8);
	apply_type(0x1511d08, "RTTIBase[1]");
	set_name(0x1511d08, "HumanoidSubStatePoseOverriddenByInteractiveEntity::sBases");

	// HumanoidSubStatePoseOverriddenByInteractiveEntityResource
	set_name(0x150e924, "HumanoidSubStatePoseOverriddenByInteractiveEntityResource");
	apply_type(0x150e924, "RTTICompound");
	del_items(0x1511d10, DELIT_SIMPLE, 8);
	apply_type(0x1511d10, "RTTIBase[1]");
	set_name(0x1511d10, "HumanoidSubStatePoseOverriddenByInteractiveEntityResource::sBases");
	del_items(0x1511d18, DELIT_SIMPLE, 84);
	apply_type(0x1511d18, "RTTIAttr[3]");
	set_name(0x1511d18, "HumanoidSubStatePoseOverriddenByInteractiveEntityResource::sAttrs");

	// HumanoidSubStateResource
	set_name(0x150e978, "HumanoidSubStateResource");
	apply_type(0x150e978, "RTTICompound");
	del_items(0x1511048, DELIT_SIMPLE, 8);
	apply_type(0x1511048, "RTTIBase[1]");
	set_name(0x1511048, "HumanoidSubStateResource::sBases");
	del_items(0x1511050, DELIT_SIMPLE, 140);
	apply_type(0x1511050, "RTTIAttr[5]");
	set_name(0x1511050, "HumanoidSubStateResource::sAttrs");

	// HumanoidSubStateUsingInteractiveEntity
	set_name(0x150e9cc, "HumanoidSubStateUsingInteractiveEntity");
	apply_type(0x150e9cc, "RTTICompound");
	del_items(0x15113c8, DELIT_SIMPLE, 8);
	apply_type(0x15113c8, "RTTIBase[1]");
	set_name(0x15113c8, "HumanoidSubStateUsingInteractiveEntity::sBases");

	// HumanoidSubStateUsingInteractiveEntityResource
	set_name(0x150ea40, "HumanoidSubStateUsingInteractiveEntityResource");
	apply_type(0x150ea40, "RTTICompound");
	del_items(0x15113d0, DELIT_SIMPLE, 8);
	apply_type(0x15113d0, "RTTIBase[1]");
	set_name(0x15113d0, "HumanoidSubStateUsingInteractiveEntityResource::sBases");

	// HumanoidSubSystem
	set_name(0x150e770, "HumanoidSubSystem");
	apply_type(0x150e770, "RTTICompound");
	del_items(0x15109b8, DELIT_SIMPLE, 16);
	apply_type(0x15109b8, "RTTIBase[2]");
	set_name(0x15109b8, "HumanoidSubSystem::sBases");

	// HumanoidSubSystemResource
	set_name(0x150e7c4, "HumanoidSubSystemResource");
	apply_type(0x150e7c4, "RTTICompound");
	del_items(0x1511ca4, DELIT_SIMPLE, 8);
	apply_type(0x1511ca4, "RTTIBase[1]");
	set_name(0x1511ca4, "HumanoidSubSystemResource::sBases");

	// HumanoidWalkState
	set_name(0x150ea94, "HumanoidWalkState");
	apply_type(0x150ea94, "RTTICompound");
	del_items(0x1511040, DELIT_SIMPLE, 8);
	apply_type(0x1511040, "RTTIBase[1]");
	set_name(0x1511040, "HumanoidWalkState::sBases");

	// HumanoidWalkStateResource
	set_name(0x150eae8, "HumanoidWalkStateResource");
	apply_type(0x150eae8, "RTTICompound");
	del_items(0x15110dc, DELIT_SIMPLE, 8);
	apply_type(0x15110dc, "RTTIBase[1]");
	set_name(0x15110dc, "HumanoidWalkStateResource::sBases");
	del_items(0x15110e4, DELIT_SIMPLE, 728);
	apply_type(0x15110e4, "RTTIAttr[26]");
	set_name(0x15110e4, "HumanoidWalkStateResource::sAttrs");
	del_items(0x15113bc, DELIT_SIMPLE, 12);
	apply_type(0x15113bc, "RTTIMessageHandler[1]");
	set_name(0x15113bc, "HumanoidWalkStateResource::sMessageHandlers");

	// IBLUsageFlags
	set_name(0x14c89cc, "IBLUsageFlags");
	apply_type(0x14c89cc, "RTTICompound");
	del_items(0x14c9894, DELIT_SIMPLE, 28);
	apply_type(0x14c9894, "RTTIAttr[1]");
	set_name(0x14c9894, "IBLUsageFlags::sAttrs");

	// IParticleSysVar
	set_name(0x14c47c8, "IParticleSysVar");
	apply_type(0x14c47c8, "RTTICompound");
	del_items(0x14c4aa8, DELIT_SIMPLE, 56);
	apply_type(0x14c4aa8, "RTTIAttr[2]");
	set_name(0x14c4aa8, "IParticleSysVar::sAttrs");

	// IRange
	set_name(0x14ab414, "IRange");
	apply_type(0x14ab414, "RTTICompound");
	del_items(0x14ab950, DELIT_SIMPLE, 56);
	apply_type(0x14ab950, "RTTIAttr[2]");
	set_name(0x14ab950, "IRange::sAttrs");

	// IRect
	set_name(0x14b7d2c, "IRect");
	apply_type(0x14b7d2c, "RTTICompound");
	del_items(0x14b84a0, DELIT_SIMPLE, 112);
	apply_type(0x14b84a0, "RTTIAttr[4]");
	set_name(0x14b84a0, "IRect::sAttrs");

	// ISize
	set_name(0x14b7fcc, "ISize");
	apply_type(0x14b7fcc, "RTTICompound");
	del_items(0x14b8430, DELIT_SIMPLE, 56);
	apply_type(0x14b8430, "RTTIAttr[2]");
	set_name(0x14b8430, "ISize::sAttrs");

	// IVector2
	set_name(0x14b7d80, "IVector2");
	apply_type(0x14b7d80, "RTTICompound");
	del_items(0x14b8468, DELIT_SIMPLE, 56);
	apply_type(0x14b8468, "RTTIAttr[2]");
	set_name(0x14b8468, "IVector2::sAttrs");

	// IVector3
	set_name(0x14b7dd4, "IVector3");
	apply_type(0x14b7dd4, "RTTICompound");
	del_items(0x14b8580, DELIT_SIMPLE, 84);
	apply_type(0x14b8580, "RTTIAttr[3]");
	set_name(0x14b8580, "IVector3::sAttrs");

	// IceSawMover
	set_name(0x14fb974, "IceSawMover");
	apply_type(0x14fb974, "RTTICompound");
	del_items(0x14fff5c, DELIT_SIMPLE, 8);
	apply_type(0x14fff5c, "RTTIBase[1]");
	set_name(0x14fff5c, "IceSawMover::sBases");
	del_items(0x14fff64, DELIT_SIMPLE, 48);
	apply_type(0x14fff64, "RTTIFunction[2]");
	set_name(0x14fff64, "IceSawMover::sFunctions");

	// IceSawMoverResource
	set_name(0x14fb9c8, "IceSawMoverResource");
	apply_type(0x14fb9c8, "RTTICompound");
	del_items(0x14fff94, DELIT_SIMPLE, 8);
	apply_type(0x14fff94, "RTTIBase[1]");
	set_name(0x14fff94, "IceSawMoverResource::sBases");
	del_items(0x14fff9c, DELIT_SIMPLE, 112);
	apply_type(0x14fff9c, "RTTIAttr[4]");
	set_name(0x14fff9c, "IceSawMoverResource::sAttrs");

	// IceSawVehicle
	set_name(0x150b7d8, "IceSawVehicle");
	apply_type(0x150b7d8, "RTTICompound");
	del_items(0x150d0ec, DELIT_SIMPLE, 8);
	apply_type(0x150d0ec, "RTTIBase[1]");
	set_name(0x150d0ec, "IceSawVehicle::sBases");

	// IceSawVehicleJoystickController
	set_name(0x150b5d0, "IceSawVehicleJoystickController");
	apply_type(0x150b5d0, "RTTICompound");
	del_items(0x150d0f4, DELIT_SIMPLE, 8);
	apply_type(0x150d0f4, "RTTIBase[1]");
	set_name(0x150d0f4, "IceSawVehicleJoystickController::sBases");

	// IceSawVehicleRep
	set_name(0x150b82c, "IceSawVehicleRep");
	apply_type(0x150b82c, "RTTICompound");
	del_items(0x150d500, DELIT_SIMPLE, 8);
	apply_type(0x150d500, "RTTIBase[1]");
	set_name(0x150d500, "IceSawVehicleRep::sBases");

	// IceSawVehicleResource
	set_name(0x150bc80, "IceSawVehicleResource");
	apply_type(0x150bc80, "RTTICompound");
	del_items(0x150ce0c, DELIT_SIMPLE, 8);
	apply_type(0x150ce0c, "RTTIBase[1]");
	set_name(0x150ce0c, "IceSawVehicleResource::sBases");
	del_items(0x150ce14, DELIT_SIMPLE, 728);
	apply_type(0x150ce14, "RTTIAttr[26]");
	set_name(0x150ce14, "IceSawVehicleResource::sAttrs");

	// IdleSpeechGroup
	set_name(0x154fa18, "IdleSpeechGroup");
	apply_type(0x154fa18, "RTTICompound");
	del_items(0x154fbd4, DELIT_SIMPLE, 8);
	apply_type(0x154fbd4, "RTTIBase[1]");
	set_name(0x154fbd4, "IdleSpeechGroup::sBases");

	// IdleSpeechGroupResource
	set_name(0x154fad0, "IdleSpeechGroupResource");
	apply_type(0x154fad0, "RTTICompound");
	del_items(0x154fc14, DELIT_SIMPLE, 8);
	apply_type(0x154fc14, "RTTIBase[1]");
	set_name(0x154fc14, "IdleSpeechGroupResource::sBases");
	del_items(0x154fc1c, DELIT_SIMPLE, 84);
	apply_type(0x154fc1c, "RTTIAttr[3]");
	set_name(0x154fc1c, "IdleSpeechGroupResource::sAttrs");

	// IdleSpeechGroupResourceInfo
	set_name(0x154fa7c, "IdleSpeechGroupResourceInfo");
	apply_type(0x154fa7c, "RTTICompound");
	del_items(0x154fbdc, DELIT_SIMPLE, 56);
	apply_type(0x154fbdc, "RTTIAttr[2]");
	set_name(0x154fbdc, "IdleSpeechGroupResourceInfo::sAttrs");

	// IgnoreEntityEventInstance
	set_name(0x151a518, "IgnoreEntityEventInstance");
	apply_type(0x151a518, "RTTICompound");
	del_items(0x151c1bc, DELIT_SIMPLE, 8);
	apply_type(0x151c1bc, "RTTIBase[1]");
	set_name(0x151c1bc, "IgnoreEntityEventInstance::sBases");

	// IgnoreEntityEventResource
	set_name(0x151a4c4, "IgnoreEntityEventResource");
	apply_type(0x151a4c4, "RTTICompound");
	del_items(0x151c17c, DELIT_SIMPLE, 8);
	apply_type(0x151c17c, "RTTIBase[1]");
	set_name(0x151c17c, "IgnoreEntityEventResource::sBases");
	del_items(0x151c184, DELIT_SIMPLE, 56);
	apply_type(0x151c184, "RTTIAttr[2]");
	set_name(0x151c184, "IgnoreEntityEventResource::sAttrs");

	// ImageMap
	set_name(0x14c95cc, "ImageMap");
	apply_type(0x14c95cc, "RTTICompound");
	del_items(0x14ca120, DELIT_SIMPLE, 8);
	apply_type(0x14ca120, "RTTIBase[1]");
	set_name(0x14ca120, "ImageMap::sBases");
	del_items(0x14ca128, DELIT_SIMPLE, 112);
	apply_type(0x14ca128, "RTTIAttr[4]");
	set_name(0x14ca128, "ImageMap::sAttrs");

	// ImpactEffectEventInstance
	set_name(0x151a5c0, "ImpactEffectEventInstance");
	apply_type(0x151a5c0, "RTTICompound");
	del_items(0x151c290, DELIT_SIMPLE, 8);
	apply_type(0x151c290, "RTTIBase[1]");
	set_name(0x151c290, "ImpactEffectEventInstance::sBases");

	// ImpactEffectEventResource
	set_name(0x151a56c, "ImpactEffectEventResource");
	apply_type(0x151a56c, "RTTICompound");
	del_items(0x151c1c4, DELIT_SIMPLE, 8);
	apply_type(0x151c1c4, "RTTIBase[1]");
	set_name(0x151c1c4, "ImpactEffectEventResource::sBases");
	del_items(0x151c1cc, DELIT_SIMPLE, 196);
	apply_type(0x151c1cc, "RTTIAttr[7]");
	set_name(0x151c1cc, "ImpactEffectEventResource::sAttrs");

	// ImpactEffectInstance
	set_name(0x14bcfb0, "ImpactEffectInstance");
	apply_type(0x14bcfb0, "RTTICompound");
	del_items(0x14be290, DELIT_SIMPLE, 8);
	apply_type(0x14be290, "RTTIBase[1]");
	set_name(0x14be290, "ImpactEffectInstance::sBases");

	// ImpactEffectLight
	set_name(0x14bd0bc, "ImpactEffectLight");
	apply_type(0x14bd0bc, "RTTICompound");
	del_items(0x14bdddc, DELIT_SIMPLE, 112);
	apply_type(0x14bdddc, "RTTIAttr[4]");
	set_name(0x14bdddc, "ImpactEffectLight::sAttrs");

	// ImpactEffectParticles
	set_name(0x14bd068, "ImpactEffectParticles");
	apply_type(0x14bd068, "RTTICompound");
	del_items(0x14bdd6c, DELIT_SIMPLE, 112);
	apply_type(0x14bdd6c, "RTTIAttr[4]");
	set_name(0x14bdd6c, "ImpactEffectParticles::sAttrs");

	// ImpactEffectRegionOverride
	set_name(0x14bd184, "ImpactEffectRegionOverride");
	apply_type(0x14bd184, "RTTICompound");
	del_items(0x14bdef4, DELIT_SIMPLE, 56);
	apply_type(0x14bdef4, "RTTIAttr[2]");
	set_name(0x14bdef4, "ImpactEffectRegionOverride::sAttrs");

	// ImpactEffectResource
	set_name(0x14bd1d8, "ImpactEffectResource");
	apply_type(0x14bd1d8, "RTTICompound");
	del_items(0x14bdf2c, DELIT_SIMPLE, 8);
	apply_type(0x14bdf2c, "RTTIBase[1]");
	set_name(0x14bdf2c, "ImpactEffectResource::sBases");
	del_items(0x14bdf34, DELIT_SIMPLE, 476);
	apply_type(0x14bdf34, "RTTIAttr[17]");
	set_name(0x14bdf34, "ImpactEffectResource::sAttrs");

	// ImpactEffectSound
	set_name(0x14bd004, "ImpactEffectSound");
	apply_type(0x14bd004, "RTTICompound");
	del_items(0x14bdcfc, DELIT_SIMPLE, 112);
	apply_type(0x14bdcfc, "RTTIAttr[4]");
	set_name(0x14bdcfc, "ImpactEffectSound::sAttrs");

	// ImpactEffectSystemSettings
	set_name(0x14bd230, "ImpactEffectSystemSettings");
	apply_type(0x14bd230, "RTTICompound");
	del_items(0x14be298, DELIT_SIMPLE, 8);
	apply_type(0x14be298, "RTTIBase[1]");
	set_name(0x14be298, "ImpactEffectSystemSettings::sBases");
	del_items(0x14be2a0, DELIT_SIMPLE, 140);
	apply_type(0x14be2a0, "RTTIAttr[5]");
	set_name(0x14be2a0, "ImpactEffectSystemSettings::sAttrs");

	// ImpactEffectSystemSettingsGame
	set_name(0x14fa61c, "ImpactEffectSystemSettingsGame");
	apply_type(0x14fa61c, "RTTICompound");
	del_items(0x14fed64, DELIT_SIMPLE, 8);
	apply_type(0x14fed64, "RTTIBase[1]");
	set_name(0x14fed64, "ImpactEffectSystemSettingsGame::sBases");
	del_items(0x14fed6c, DELIT_SIMPLE, 84);
	apply_type(0x14fed6c, "RTTIAttr[3]");
	set_name(0x14fed6c, "ImpactEffectSystemSettingsGame::sAttrs");

	// ImpactEffectVariation
	set_name(0x14bd120, "ImpactEffectVariation");
	apply_type(0x14bd120, "RTTICompound");
	del_items(0x14bde4c, DELIT_SIMPLE, 168);
	apply_type(0x14bde4c, "RTTIAttr[6]");
	set_name(0x14bde4c, "ImpactEffectVariation::sAttrs");

	// IndexArrayResource
	set_name(0x14c8e70, "IndexArrayResource");
	apply_type(0x14c8e70, "RTTICompound");
	del_items(0x14c9714, DELIT_SIMPLE, 8);
	apply_type(0x14c9714, "RTTIBase[1]");
	set_name(0x14c9714, "IndexArrayResource::sBases");
	del_items(0x14c971c, DELIT_SIMPLE, 12);
	apply_type(0x14c971c, "RTTIMessageHandler[1]");
	set_name(0x14c971c, "IndexArrayResource::sMessageHandlers");

	// InertiaPathMover
	set_name(0x14fbb28, "InertiaPathMover");
	apply_type(0x14fbb28, "RTTICompound");
	del_items(0x1500068, DELIT_SIMPLE, 8);
	apply_type(0x1500068, "RTTIBase[1]");
	set_name(0x1500068, "InertiaPathMover::sBases");

	// InertiaPathMoverResource
	set_name(0x14fbb7c, "InertiaPathMoverResource");
	apply_type(0x14fbb7c, "RTTICompound");
	del_items(0x150000c, DELIT_SIMPLE, 8);
	apply_type(0x150000c, "RTTIBase[1]");
	set_name(0x150000c, "InertiaPathMoverResource::sBases");
	del_items(0x1500014, DELIT_SIMPLE, 84);
	apply_type(0x1500014, "RTTIAttr[3]");
	set_name(0x1500014, "InertiaPathMoverResource::sAttrs");

	// InfoDialogTag
	set_name(0x14c0478, "InfoDialogTag");
	apply_type(0x14c0478, "RTTICompound");
	del_items(0x14c29a8, DELIT_SIMPLE, 8);
	apply_type(0x14c29a8, "RTTIBase[1]");
	set_name(0x14c29a8, "InfoDialogTag::sBases");

	// InitAnimationVariableComponent
	set_name(0x15507b0, "InitAnimationVariableComponent");
	apply_type(0x15507b0, "RTTICompound");
	del_items(0x1550b4c, DELIT_SIMPLE, 8);
	apply_type(0x1550b4c, "RTTIBase[1]");
	set_name(0x1550b4c, "InitAnimationVariableComponent::sBases");

	// InitAnimationVariableComponentResource
	set_name(0x1550868, "InitAnimationVariableComponentResource");
	apply_type(0x1550868, "RTTICompound");
	del_items(0x1550aec, DELIT_SIMPLE, 8);
	apply_type(0x1550aec, "RTTIBase[1]");
	set_name(0x1550aec, "InitAnimationVariableComponentResource::sBases");
	del_items(0x1550af4, DELIT_SIMPLE, 84);
	apply_type(0x1550af4, "RTTIAttr[3]");
	set_name(0x1550af4, "InitAnimationVariableComponentResource::sAttrs");

	// InitAnimationVariableInfo
	set_name(0x1550814, "InitAnimationVariableInfo");
	apply_type(0x1550814, "RTTICompound");
	del_items(0x1550ab4, DELIT_SIMPLE, 56);
	apply_type(0x1550ab4, "RTTIAttr[2]");
	set_name(0x1550ab4, "InitAnimationVariableInfo::sAttrs");

	// InputTag
	set_name(0x14c0670, "InputTag");
	apply_type(0x14c0670, "RTTICompound");
	del_items(0x14c2cc4, DELIT_SIMPLE, 8);
	apply_type(0x14c2cc4, "RTTIBase[1]");
	set_name(0x14c2cc4, "InputTag::sBases");
	del_items(0x14c2ccc, DELIT_SIMPLE, 24);
	apply_type(0x14c2ccc, "RTTIFunction[1]");
	set_name(0x14c2ccc, "InputTag::sFunctions");

	// InputWidget
	set_name(0x14c0fc0, "InputWidget");
	apply_type(0x14c0fc0, "RTTICompound");
	del_items(0x14c2f14, DELIT_SIMPLE, 8);
	apply_type(0x14c2f14, "RTTIBase[1]");
	set_name(0x14c2f14, "InputWidget::sBases");

	// Instigator
	set_name(0x14e8a2c, "Instigator");
	apply_type(0x14e8a2c, "RTTICompound");
	del_items(0x14e8f30, DELIT_SIMPLE, 16);
	apply_type(0x14e8f30, "RTTIBase[2]");
	set_name(0x14e8f30, "Instigator::sBases");

	// IntPerDifficulty
	set_name(0x14ea79c, "IntPerDifficulty");
	apply_type(0x14ea79c, "RTTICompound");
	del_items(0x14ed224, DELIT_SIMPLE, 56);
	apply_type(0x14ed224, "RTTIAttr[2]");
	set_name(0x14ed224, "IntPerDifficulty::sAttrs");

	// InteractionEffectComponent
	set_name(0x150f91c, "InteractionEffectComponent");
	apply_type(0x150f91c, "RTTICompound");
	del_items(0x15123b4, DELIT_SIMPLE, 8);
	apply_type(0x15123b4, "RTTIBase[1]");
	set_name(0x15123b4, "InteractionEffectComponent::sBases");

	// InteractionEffectComponentResource
	set_name(0x150f970, "InteractionEffectComponentResource");
	apply_type(0x150f970, "RTTICompound");
	del_items(0x1512354, DELIT_SIMPLE, 8);
	apply_type(0x1512354, "RTTIBase[1]");
	set_name(0x1512354, "InteractionEffectComponentResource::sBases");
	del_items(0x151235c, DELIT_SIMPLE, 84);
	apply_type(0x151235c, "RTTIAttr[3]");
	set_name(0x151235c, "InteractionEffectComponentResource::sAttrs");

	// InteractionHighlightComponent
	set_name(0x154e414, "InteractionHighlightComponent");
	apply_type(0x154e414, "RTTICompound");
	del_items(0x154f5d8, DELIT_SIMPLE, 8);
	apply_type(0x154f5d8, "RTTIBase[1]");
	set_name(0x154f5d8, "InteractionHighlightComponent::sBases");

	// InteractionHighlightComponentRep
	set_name(0x154e468, "InteractionHighlightComponentRep");
	apply_type(0x154e468, "RTTICompound");
	del_items(0x154f67c, DELIT_SIMPLE, 8);
	apply_type(0x154f67c, "RTTIBase[1]");
	set_name(0x154f67c, "InteractionHighlightComponentRep::sBases");

	// InteractionHighlightComponentResource
	set_name(0x154e4bc, "InteractionHighlightComponentResource");
	apply_type(0x154e4bc, "RTTICompound");
	del_items(0x154f540, DELIT_SIMPLE, 8);
	apply_type(0x154f540, "RTTIBase[1]");
	set_name(0x154f540, "InteractionHighlightComponentResource::sBases");
	del_items(0x154f548, DELIT_SIMPLE, 140);
	apply_type(0x154f548, "RTTIAttr[5]");
	set_name(0x154f548, "InteractionHighlightComponentResource::sAttrs");

	// InteractionHighlightSettingsResource
	set_name(0x154e510, "InteractionHighlightSettingsResource");
	apply_type(0x154e510, "RTTICompound");
	del_items(0x154f5e8, DELIT_SIMPLE, 8);
	apply_type(0x154f5e8, "RTTIBase[1]");
	set_name(0x154f5e8, "InteractionHighlightSettingsResource::sBases");
	del_items(0x154f5f0, DELIT_SIMPLE, 140);
	apply_type(0x154f5f0, "RTTIAttr[5]");
	set_name(0x154f5f0, "InteractionHighlightSettingsResource::sAttrs");

	// InteractionIsCompletedAction
	set_name(0x1541874, "InteractionIsCompletedAction");
	apply_type(0x1541874, "RTTICompound");
	del_items(0x154321c, DELIT_SIMPLE, 8);
	apply_type(0x154321c, "RTTIBase[1]");
	set_name(0x154321c, "InteractionIsCompletedAction::sBases");
	del_items(0x1543224, DELIT_SIMPLE, 84);
	apply_type(0x1543224, "RTTIAttr[3]");
	set_name(0x1543224, "InteractionIsCompletedAction::sAttrs");

	// InteractionModeGeneric
	set_name(0x154e6b4, "InteractionModeGeneric");
	apply_type(0x154e6b4, "RTTICompound");
	del_items(0x154f2e0, DELIT_SIMPLE, 8);
	apply_type(0x154f2e0, "RTTIBase[1]");
	set_name(0x154f2e0, "InteractionModeGeneric::sBases");
	del_items(0x154f2e8, DELIT_SIMPLE, 144);
	apply_type(0x154f2e8, "RTTIFunction[6]");
	set_name(0x154f2e8, "InteractionModeGeneric::sFunctions");

	// InteractionModeGenericAiController
	set_name(0x154e910, "InteractionModeGenericAiController");
	apply_type(0x154e910, "RTTICompound");
	del_items(0x154f938, DELIT_SIMPLE, 8);
	apply_type(0x154f938, "RTTIBase[1]");
	set_name(0x154f938, "InteractionModeGenericAiController::sBases");

	// InteractionModeGenericController
	set_name(0x154e868, "InteractionModeGenericController");
	apply_type(0x154e868, "RTTICompound");
	del_items(0x154f90c, DELIT_SIMPLE, 8);
	apply_type(0x154f90c, "RTTIBase[1]");
	set_name(0x154f90c, "InteractionModeGenericController::sBases");

	// InteractionModeGenericJoystickController
	set_name(0x154e8bc, "InteractionModeGenericJoystickController");
	apply_type(0x154e8bc, "RTTICompound");
	del_items(0x154f914, DELIT_SIMPLE, 8);
	apply_type(0x154f914, "RTTIBase[1]");
	set_name(0x154f914, "InteractionModeGenericJoystickController::sBases");

	// InteractionModeGenericRep
	set_name(0x154e75c, "InteractionModeGenericRep");
	apply_type(0x154e75c, "RTTICompound");
	del_items(0x154f924, DELIT_SIMPLE, 8);
	apply_type(0x154f924, "RTTIBase[1]");
	set_name(0x154f924, "InteractionModeGenericRep::sBases");
	del_items(0x154f92c, DELIT_SIMPLE, 12);
	apply_type(0x154f92c, "RTTIMessageHandler[1]");
	set_name(0x154f92c, "InteractionModeGenericRep::sMessageHandlers");

	// InteractionModeGenericResource
	set_name(0x154e814, "InteractionModeGenericResource");
	apply_type(0x154e814, "RTTICompound");
	del_items(0x154f134, DELIT_SIMPLE, 8);
	apply_type(0x154f134, "RTTIBase[1]");
	set_name(0x154f134, "InteractionModeGenericResource::sBases");
	del_items(0x154f13c, DELIT_SIMPLE, 420);
	apply_type(0x154f13c, "RTTIAttr[15]");
	set_name(0x154f13c, "InteractionModeGenericResource::sAttrs");

	// InteractionVectorTrack
	set_name(0x154e7c0, "InteractionVectorTrack");
	apply_type(0x154e7c0, "RTTICompound");
	del_items(0x154f0d4, DELIT_SIMPLE, 84);
	apply_type(0x154f0d4, "RTTIAttr[3]");
	set_name(0x154f0d4, "InteractionVectorTrack::sAttrs");

	// InteractiveEntity
	set_name(0x1502e24, "InteractiveEntity");
	apply_type(0x1502e24, "RTTICompound");
	del_items(0x1504800, DELIT_SIMPLE, 8);
	apply_type(0x1504800, "RTTIBase[1]");
	set_name(0x1504800, "InteractiveEntity::sBases");
	del_items(0x1504808, DELIT_SIMPLE, 84);
	apply_type(0x1504808, "RTTIAttr[3]");
	set_name(0x1504808, "InteractiveEntity::sAttrs");
	del_items(0x150485c, DELIT_SIMPLE, 168);
	apply_type(0x150485c, "RTTIFunction[7]");
	set_name(0x150485c, "InteractiveEntity::sFunctions");

	// InteractiveEntityActorInstance
	set_name(0x15203e0, "InteractiveEntityActorInstance");
	apply_type(0x15203e0, "RTTICompound");
	del_items(0x15217fc, DELIT_SIMPLE, 8);
	apply_type(0x15217fc, "RTTIBase[1]");
	set_name(0x15217fc, "InteractiveEntityActorInstance::sBases");

	// InteractiveEntityActorResource
	set_name(0x152038c, "InteractiveEntityActorResource");
	apply_type(0x152038c, "RTTICompound");
	del_items(0x15217f4, DELIT_SIMPLE, 8);
	apply_type(0x15217f4, "RTTIBase[1]");
	set_name(0x15217f4, "InteractiveEntityActorResource::sBases");

	// InteractiveEntityController
	set_name(0x1502e78, "InteractiveEntityController");
	apply_type(0x1502e78, "RTTICompound");
	del_items(0x1504918, DELIT_SIMPLE, 8);
	apply_type(0x1504918, "RTTIBase[1]");
	set_name(0x1504918, "InteractiveEntityController::sBases");

	// InteractiveEntityIKTargetInfo
	set_name(0x1504dec, "InteractiveEntityIKTargetInfo");
	apply_type(0x1504dec, "RTTICompound");
	del_items(0x1505cc4, DELIT_SIMPLE, 84);
	apply_type(0x1505cc4, "RTTIAttr[3]");
	set_name(0x1505cc4, "InteractiveEntityIKTargetInfo::sAttrs");

	// InteractiveEntityRep
	set_name(0x1504ca0, "InteractiveEntityRep");
	apply_type(0x1504ca0, "RTTICompound");
	del_items(0x1505a8c, DELIT_SIMPLE, 8);
	apply_type(0x1505a8c, "RTTIBase[1]");
	set_name(0x1505a8c, "InteractiveEntityRep::sBases");

	// InteractiveEntityResource
	set_name(0x1504e40, "InteractiveEntityResource");
	apply_type(0x1504e40, "RTTICompound");
	del_items(0x1505d24, DELIT_SIMPLE, 8);
	apply_type(0x1505d24, "RTTIBase[1]");
	set_name(0x1505d24, "InteractiveEntityResource::sBases");
	del_items(0x1505d2c, DELIT_SIMPLE, 896);
	apply_type(0x1505d2c, "RTTIAttr[32]");
	set_name(0x1505d2c, "InteractiveEntityResource::sAttrs");
	del_items(0x15060ac, DELIT_SIMPLE, 24);
	apply_type(0x15060ac, "RTTIMessageHandler[2]");
	set_name(0x15060ac, "InteractiveEntityResource::sMessageHandlers");

	// InteractiveMover
	set_name(0x14fb728, "InteractiveMover");
	apply_type(0x14fb728, "RTTICompound");
	del_items(0x14ffa70, DELIT_SIMPLE, 8);
	apply_type(0x14ffa70, "RTTIBase[1]");
	set_name(0x14ffa70, "InteractiveMover::sBases");

	// InteractiveMoverResource
	set_name(0x14fb77c, "InteractiveMoverResource");
	apply_type(0x14fb77c, "RTTICompound");
	del_items(0x14ffa78, DELIT_SIMPLE, 8);
	apply_type(0x14ffa78, "RTTIBase[1]");
	set_name(0x14ffa78, "InteractiveMoverResource::sBases");

	// Inventory
	set_name(0x1512ab4, "Inventory");
	apply_type(0x1512ab4, "RTTICompound");
	del_items(0x1514690, DELIT_SIMPLE, 8);
	apply_type(0x1514690, "RTTIBase[1]");
	set_name(0x1514690, "Inventory::sBases");

	// InventoryAirSupport
	set_name(0x15175ec, "InventoryAirSupport");
	apply_type(0x15175ec, "RTTICompound");
	del_items(0x151837c, DELIT_SIMPLE, 8);
	apply_type(0x151837c, "RTTIBase[1]");
	set_name(0x151837c, "InventoryAirSupport::sBases");

	// InventoryAirSupportPickUpResource
	set_name(0x15177a0, "InventoryAirSupportPickUpResource");
	apply_type(0x15177a0, "RTTICompound");
	del_items(0x15184b8, DELIT_SIMPLE, 8);
	apply_type(0x15184b8, "RTTIBase[1]");
	set_name(0x15184b8, "InventoryAirSupportPickUpResource::sBases");

	// InventoryAirSupportResource
	set_name(0x1517640, "InventoryAirSupportResource");
	apply_type(0x1517640, "RTTICompound");
	del_items(0x151833c, DELIT_SIMPLE, 8);
	apply_type(0x151833c, "RTTIBase[1]");
	set_name(0x151833c, "InventoryAirSupportResource::sBases");
	del_items(0x1518344, DELIT_SIMPLE, 56);
	apply_type(0x1518344, "RTTIAttr[2]");
	set_name(0x1518344, "InventoryAirSupportResource::sAttrs");

	// InventoryAmmoEjector
	set_name(0x1513400, "InventoryAmmoEjector");
	apply_type(0x1513400, "RTTICompound");
	del_items(0x1515d30, DELIT_SIMPLE, 8);
	apply_type(0x1515d30, "RTTIBase[1]");
	set_name(0x1515d30, "InventoryAmmoEjector::sBases");

	// InventoryAmmoEjectorRep
	set_name(0x1513454, "InventoryAmmoEjectorRep");
	apply_type(0x1513454, "RTTICompound");
	del_items(0x1516230, DELIT_SIMPLE, 8);
	apply_type(0x1516230, "RTTIBase[1]");
	set_name(0x1516230, "InventoryAmmoEjectorRep::sBases");

	// InventoryAmmoEjectorResource
	set_name(0x15134a8, "InventoryAmmoEjectorResource");
	apply_type(0x15134a8, "RTTICompound");
	del_items(0x1515698, DELIT_SIMPLE, 8);
	apply_type(0x1515698, "RTTIBase[1]");
	set_name(0x1515698, "InventoryAmmoEjectorResource::sBases");
	del_items(0x15156a0, DELIT_SIMPLE, 1680);
	apply_type(0x15156a0, "RTTIAttr[60]");
	set_name(0x15156a0, "InventoryAmmoEjectorResource::sAttrs");

	// InventoryBoostAbility
	set_name(0x15178f0, "InventoryBoostAbility");
	apply_type(0x15178f0, "RTTICompound");
	del_items(0x1518538, DELIT_SIMPLE, 8);
	apply_type(0x1518538, "RTTIBase[1]");
	set_name(0x1518538, "InventoryBoostAbility::sBases");

	// InventoryBoostAbilityRep
	set_name(0x1517998, "InventoryBoostAbilityRep");
	apply_type(0x1517998, "RTTICompound");
	del_items(0x1518624, DELIT_SIMPLE, 8);
	apply_type(0x1518624, "RTTIBase[1]");
	set_name(0x1518624, "InventoryBoostAbilityRep::sBases");

	// InventoryBoostAbilityResource
	set_name(0x1517944, "InventoryBoostAbilityResource");
	apply_type(0x1517944, "RTTICompound");
	del_items(0x151854c, DELIT_SIMPLE, 8);
	apply_type(0x151854c, "RTTIBase[1]");
	set_name(0x151854c, "InventoryBoostAbilityResource::sBases");
	del_items(0x1518554, DELIT_SIMPLE, 196);
	apply_type(0x1518554, "RTTIAttr[7]");
	set_name(0x1518554, "InventoryBoostAbilityResource::sAttrs");
	del_items(0x1518618, DELIT_SIMPLE, 12);
	apply_type(0x1518618, "RTTIMessageHandler[1]");
	set_name(0x1518618, "InventoryBoostAbilityResource::sMessageHandlers");

	// InventoryC4
	set_name(0x1512fac, "InventoryC4");
	apply_type(0x1512fac, "RTTICompound");
	del_items(0x15155e8, DELIT_SIMPLE, 8);
	apply_type(0x15155e8, "RTTIBase[1]");
	set_name(0x15155e8, "InventoryC4::sBases");

	// InventoryC4Rep
	set_name(0x1513000, "InventoryC4Rep");
	apply_type(0x1513000, "RTTICompound");
	del_items(0x15155f8, DELIT_SIMPLE, 8);
	apply_type(0x15155f8, "RTTIBase[1]");
	set_name(0x15155f8, "InventoryC4Rep::sBases");

	// InventoryC4Resource
	set_name(0x1513054, "InventoryC4Resource");
	apply_type(0x1513054, "RTTICompound");
	del_items(0x15155a8, DELIT_SIMPLE, 8);
	apply_type(0x15155a8, "RTTIBase[1]");
	set_name(0x15155a8, "InventoryC4Resource::sBases");
	del_items(0x15155b0, DELIT_SIMPLE, 56);
	apply_type(0x15155b0, "RTTIAttr[2]");
	set_name(0x15155b0, "InventoryC4Resource::sAttrs");

	// InventoryCaptureSpawnAbility
	set_name(0x1517b3c, "InventoryCaptureSpawnAbility");
	apply_type(0x1517b3c, "RTTICompound");
	del_items(0x1518760, DELIT_SIMPLE, 8);
	apply_type(0x1518760, "RTTIBase[1]");
	set_name(0x1518760, "InventoryCaptureSpawnAbility::sBases");

	// InventoryCaptureSpawnAbilityResource
	set_name(0x1517bb0, "InventoryCaptureSpawnAbilityResource");
	apply_type(0x1517bb0, "RTTICompound");
	del_items(0x1518774, DELIT_SIMPLE, 8);
	apply_type(0x1518774, "RTTIBase[1]");
	set_name(0x1518774, "InventoryCaptureSpawnAbilityResource::sBases");
	del_items(0x151877c, DELIT_SIMPLE, 140);
	apply_type(0x151877c, "RTTIAttr[5]");
	set_name(0x151877c, "InventoryCaptureSpawnAbilityResource::sAttrs");

	// InventoryCollectable
	set_name(0x15135f8, "InventoryCollectable");
	apply_type(0x15135f8, "RTTICompound");
	del_items(0x151641c, DELIT_SIMPLE, 8);
	apply_type(0x151641c, "RTTIBase[1]");
	set_name(0x151641c, "InventoryCollectable::sBases");

	// InventoryCollectableResource
	set_name(0x151364c, "InventoryCollectableResource");
	apply_type(0x151364c, "RTTICompound");
	del_items(0x15163dc, DELIT_SIMPLE, 8);
	apply_type(0x15163dc, "RTTIBase[1]");
	set_name(0x15163dc, "InventoryCollectableResource::sBases");
	del_items(0x15163e4, DELIT_SIMPLE, 56);
	apply_type(0x15163e4, "RTTIAttr[2]");
	set_name(0x15163e4, "InventoryCollectableResource::sAttrs");

	// InventoryDetonator
	set_name(0x15130a8, "InventoryDetonator");
	apply_type(0x15130a8, "RTTICompound");
	del_items(0x1515684, DELIT_SIMPLE, 8);
	apply_type(0x1515684, "RTTIBase[1]");
	set_name(0x1515684, "InventoryDetonator::sBases");

	// InventoryDetonatorResource
	set_name(0x15130fc, "InventoryDetonatorResource");
	apply_type(0x15130fc, "RTTICompound");
	del_items(0x151560c, DELIT_SIMPLE, 8);
	apply_type(0x151560c, "RTTIBase[1]");
	set_name(0x151560c, "InventoryDetonatorResource::sBases");
	del_items(0x1515614, DELIT_SIMPLE, 112);
	apply_type(0x1515614, "RTTIAttr[4]");
	set_name(0x1515614, "InventoryDetonatorResource::sAttrs");

	// InventoryDisguiseAbility
	set_name(0x1513e34, "InventoryDisguiseAbility");
	apply_type(0x1513e34, "RTTICompound");
	del_items(0x1516f78, DELIT_SIMPLE, 8);
	apply_type(0x1516f78, "RTTIBase[1]");
	set_name(0x1516f78, "InventoryDisguiseAbility::sBases");

	// InventoryDisguiseAbilityRep
	set_name(0x1513e88, "InventoryDisguiseAbilityRep");
	apply_type(0x1513e88, "RTTICompound");
	del_items(0x1516f80, DELIT_SIMPLE, 8);
	apply_type(0x1516f80, "RTTIBase[1]");
	set_name(0x1516f80, "InventoryDisguiseAbilityRep::sBases");

	// InventoryDisguiseAbilityResource
	set_name(0x1513edc, "InventoryDisguiseAbilityResource");
	apply_type(0x1513edc, "RTTICompound");
	del_items(0x1516ab0, DELIT_SIMPLE, 8);
	apply_type(0x1516ab0, "RTTIBase[1]");
	set_name(0x1516ab0, "InventoryDisguiseAbilityResource::sBases");
	del_items(0x1516ab8, DELIT_SIMPLE, 1204);
	apply_type(0x1516ab8, "RTTIAttr[43]");
	set_name(0x1516ab8, "InventoryDisguiseAbilityResource::sAttrs");
	del_items(0x1516f6c, DELIT_SIMPLE, 12);
	apply_type(0x1516f6c, "RTTIMessageHandler[1]");
	set_name(0x1516f6c, "InventoryDisguiseAbilityResource::sMessageHandlers");

	// InventoryEntity
	set_name(0x1513844, "InventoryEntity");
	apply_type(0x1513844, "RTTICompound");
	del_items(0x15146a8, DELIT_SIMPLE, 8);
	apply_type(0x15146a8, "RTTIBase[1]");
	set_name(0x15146a8, "InventoryEntity::sBases");

	// InventoryEntityPickUpResource
	set_name(0x1518fbc, "InventoryEntityPickUpResource");
	apply_type(0x1518fbc, "RTTICompound");
	del_items(0x151afc4, DELIT_SIMPLE, 8);
	apply_type(0x151afc4, "RTTIBase[1]");
	set_name(0x151afc4, "InventoryEntityPickUpResource::sBases");
	del_items(0x151afcc, DELIT_SIMPLE, 56);
	apply_type(0x151afcc, "RTTIAttr[2]");
	set_name(0x151afcc, "InventoryEntityPickUpResource::sAttrs");

	// InventoryEntityRep
	set_name(0x1513898, "InventoryEntityRep");
	apply_type(0x1513898, "RTTICompound");
	del_items(0x1514224, DELIT_SIMPLE, 8);
	apply_type(0x1514224, "RTTIBase[1]");
	set_name(0x1514224, "InventoryEntityRep::sBases");

	// InventoryEntityResource
	set_name(0x15138fc, "InventoryEntityResource");
	apply_type(0x15138fc, "RTTICompound");
	del_items(0x1514240, DELIT_SIMPLE, 8);
	apply_type(0x1514240, "RTTIBase[1]");
	set_name(0x1514240, "InventoryEntityResource::sBases");
	del_items(0x1514248, DELIT_SIMPLE, 1064);
	apply_type(0x1514248, "RTTIAttr[38]");
	set_name(0x1514248, "InventoryEntityResource::sAttrs");
	del_items(0x1514670, DELIT_SIMPLE, 24);
	apply_type(0x1514670, "RTTIMessageHandler[2]");
	set_name(0x1514670, "InventoryEntityResource::sMessageHandlers");

	// InventoryFakeDeathAbility
	set_name(0x1517a94, "InventoryFakeDeathAbility");
	apply_type(0x1517a94, "RTTICompound");
	del_items(0x1518758, DELIT_SIMPLE, 8);
	apply_type(0x1518758, "RTTIBase[1]");
	set_name(0x1518758, "InventoryFakeDeathAbility::sBases");

	// InventoryFakeDeathAbilityResource
	set_name(0x1517ae8, "InventoryFakeDeathAbilityResource");
	apply_type(0x1517ae8, "RTTICompound");
	del_items(0x15186a8, DELIT_SIMPLE, 8);
	apply_type(0x15186a8, "RTTIBase[1]");
	set_name(0x15186a8, "InventoryFakeDeathAbilityResource::sBases");
	del_items(0x15186b0, DELIT_SIMPLE, 168);
	apply_type(0x15186b0, "RTTIAttr[6]");
	set_name(0x15186b0, "InventoryFakeDeathAbilityResource::sAttrs");

	// InventoryGravityGun
	set_name(0x1512b5c, "InventoryGravityGun");
	apply_type(0x1512b5c, "RTTICompound");
	del_items(0x151512c, DELIT_SIMPLE, 8);
	apply_type(0x151512c, "RTTIBase[1]");
	set_name(0x151512c, "InventoryGravityGun::sBases");

	// InventoryGravityGunResource
	set_name(0x1512bb0, "InventoryGravityGunResource");
	apply_type(0x1512bb0, "RTTICompound");
	del_items(0x15150ec, DELIT_SIMPLE, 8);
	apply_type(0x15150ec, "RTTIBase[1]");
	set_name(0x15150ec, "InventoryGravityGunResource::sBases");
	del_items(0x15150f4, DELIT_SIMPLE, 56);
	apply_type(0x15150f4, "RTTIAttr[2]");
	set_name(0x15150f4, "InventoryGravityGunResource::sAttrs");

	// InventoryGrenade
	set_name(0x15136a0, "InventoryGrenade");
	apply_type(0x15136a0, "RTTICompound");
	del_items(0x15164e0, DELIT_SIMPLE, 8);
	apply_type(0x15164e0, "RTTIBase[1]");
	set_name(0x15164e0, "InventoryGrenade::sBases");

	// InventoryGrenadeRep
	set_name(0x15136f4, "InventoryGrenadeRep");
	apply_type(0x15136f4, "RTTICompound");
	del_items(0x15164e8, DELIT_SIMPLE, 8);
	apply_type(0x15164e8, "RTTIBase[1]");
	set_name(0x15164e8, "InventoryGrenadeRep::sBases");

	// InventoryGrenadeResource
	set_name(0x1513748, "InventoryGrenadeResource");
	apply_type(0x1513748, "RTTICompound");
	del_items(0x1516430, DELIT_SIMPLE, 8);
	apply_type(0x1516430, "RTTIBase[1]");
	set_name(0x1516430, "InventoryGrenadeResource::sBases");
	del_items(0x1516438, DELIT_SIMPLE, 168);
	apply_type(0x1516438, "RTTIAttr[6]");
	set_name(0x1516438, "InventoryGrenadeResource::sAttrs");

	// InventoryHealAbility
	set_name(0x1513ac8, "InventoryHealAbility");
	apply_type(0x1513ac8, "RTTICompound");
	del_items(0x151675c, DELIT_SIMPLE, 8);
	apply_type(0x151675c, "RTTIBase[1]");
	set_name(0x151675c, "InventoryHealAbility::sBases");

	// InventoryHealAbilityRep
	set_name(0x1513b70, "InventoryHealAbilityRep");
	apply_type(0x1513b70, "RTTICompound");
	del_items(0x1516764, DELIT_SIMPLE, 8);
	apply_type(0x1516764, "RTTIBase[1]");
	set_name(0x1516764, "InventoryHealAbilityRep::sBases");

	// InventoryHealAbilityResource
	set_name(0x1513b1c, "InventoryHealAbilityResource");
	apply_type(0x1513b1c, "RTTICompound");
	del_items(0x1516550, DELIT_SIMPLE, 8);
	apply_type(0x1516550, "RTTIBase[1]");
	set_name(0x1516550, "InventoryHealAbilityResource::sBases");
	del_items(0x1516558, DELIT_SIMPLE, 504);
	apply_type(0x1516558, "RTTIAttr[18]");
	set_name(0x1516558, "InventoryHealAbilityResource::sAttrs");
	del_items(0x1516750, DELIT_SIMPLE, 12);
	apply_type(0x1516750, "RTTIMessageHandler[1]");
	set_name(0x1516750, "InventoryHealAbilityResource::sMessageHandlers");

	// InventoryHealth
	set_name(0x151379c, "InventoryHealth");
	apply_type(0x151379c, "RTTICompound");
	del_items(0x151653c, DELIT_SIMPLE, 8);
	apply_type(0x151653c, "RTTIBase[1]");
	set_name(0x151653c, "InventoryHealth::sBases");

	// InventoryHealthResource
	set_name(0x15137f0, "InventoryHealthResource");
	apply_type(0x15137f0, "RTTICompound");
	del_items(0x15164fc, DELIT_SIMPLE, 8);
	apply_type(0x15164fc, "RTTIBase[1]");
	set_name(0x15164fc, "InventoryHealthResource::sBases");
	del_items(0x1516504, DELIT_SIMPLE, 56);
	apply_type(0x1516504, "RTTIAttr[2]");
	set_name(0x1516504, "InventoryHealthResource::sAttrs");

	// InventoryJetpack
	set_name(0x1513150, "InventoryJetpack");
	apply_type(0x1513150, "RTTICompound");
	del_items(0x1516228, DELIT_SIMPLE, 8);
	apply_type(0x1516228, "RTTIBase[1]");
	set_name(0x1516228, "InventoryJetpack::sBases");

	// InventoryJetpackRep
	set_name(0x15131a4, "InventoryJetpackRep");
	apply_type(0x15131a4, "RTTICompound");
	del_items(0x1516238, DELIT_SIMPLE, 8);
	apply_type(0x1516238, "RTTIBase[1]");
	set_name(0x1516238, "InventoryJetpackRep::sBases");

	// InventoryJetpackResource
	set_name(0x15132b0, "InventoryJetpackResource");
	apply_type(0x15132b0, "RTTICompound");
	del_items(0x1515eb0, DELIT_SIMPLE, 8);
	apply_type(0x1515eb0, "RTTIBase[1]");
	set_name(0x1515eb0, "InventoryJetpackResource::sBases");
	del_items(0x1515eb8, DELIT_SIMPLE, 868);
	apply_type(0x1515eb8, "RTTIAttr[31]");
	set_name(0x1515eb8, "InventoryJetpackResource::sAttrs");
	del_items(0x151621c, DELIT_SIMPLE, 12);
	apply_type(0x151621c, "RTTIMessageHandler[1]");
	set_name(0x151621c, "InventoryJetpackResource::sMessageHandlers");

	// InventoryMiniDrone
	set_name(0x15177f4, "InventoryMiniDrone");
	apply_type(0x15177f4, "RTTICompound");
	del_items(0x1518528, DELIT_SIMPLE, 8);
	apply_type(0x1518528, "RTTIBase[1]");
	set_name(0x1518528, "InventoryMiniDrone::sBases");

	// InventoryMiniDronePickUpResource
	set_name(0x151789c, "InventoryMiniDronePickUpResource");
	apply_type(0x151789c, "RTTICompound");
	del_items(0x1518530, DELIT_SIMPLE, 8);
	apply_type(0x1518530, "RTTIBase[1]");
	set_name(0x1518530, "InventoryMiniDronePickUpResource::sBases");

	// InventoryMiniDroneResource
	set_name(0x1517848, "InventoryMiniDroneResource");
	apply_type(0x1517848, "RTTICompound");
	del_items(0x15184cc, DELIT_SIMPLE, 8);
	apply_type(0x15184cc, "RTTIBase[1]");
	set_name(0x15184cc, "InventoryMiniDroneResource::sBases");
	del_items(0x15184d4, DELIT_SIMPLE, 84);
	apply_type(0x15184d4, "RTTIAttr[3]");
	set_name(0x15184d4, "InventoryMiniDroneResource::sAttrs");

	// InventoryPlaceable
	set_name(0x1512ea0, "InventoryPlaceable");
	apply_type(0x1512ea0, "RTTICompound");
	del_items(0x1515268, DELIT_SIMPLE, 8);
	apply_type(0x1515268, "RTTIBase[1]");
	set_name(0x1515268, "InventoryPlaceable::sBases");

	// InventoryPlaceableRep
	set_name(0x1512ef4, "InventoryPlaceableRep");
	apply_type(0x1512ef4, "RTTICompound");
	del_items(0x1515270, DELIT_SIMPLE, 8);
	apply_type(0x1515270, "RTTIBase[1]");
	set_name(0x1515270, "InventoryPlaceableRep::sBases");

	// InventoryPlaceableResource
	set_name(0x1512f58, "InventoryPlaceableResource");
	apply_type(0x1512f58, "RTTICompound");
	del_items(0x1515148, DELIT_SIMPLE, 8);
	apply_type(0x1515148, "RTTIBase[1]");
	set_name(0x1515148, "InventoryPlaceableResource::sBases");
	del_items(0x1515150, DELIT_SIMPLE, 280);
	apply_type(0x1515150, "RTTIAttr[10]");
	set_name(0x1515150, "InventoryPlaceableResource::sAttrs");

	// InventoryPortableSpawnGrenade
	set_name(0x1513d34, "InventoryPortableSpawnGrenade");
	apply_type(0x1513d34, "RTTICompound");
	del_items(0x1516a80, DELIT_SIMPLE, 8);
	apply_type(0x1516a80, "RTTIBase[1]");
	set_name(0x1516a80, "InventoryPortableSpawnGrenade::sBases");

	// InventoryPortableSpawnGrenadeResource
	set_name(0x1513d88, "InventoryPortableSpawnGrenadeResource");
	apply_type(0x1513d88, "RTTICompound");
	del_items(0x1516a94, DELIT_SIMPLE, 8);
	apply_type(0x1516a94, "RTTIBase[1]");
	set_name(0x1516a94, "InventoryPortableSpawnGrenadeResource::sBases");

	// InventoryReviveAbility
	set_name(0x1513bc4, "InventoryReviveAbility");
	apply_type(0x1513bc4, "RTTICompound");
	del_items(0x1516a70, DELIT_SIMPLE, 8);
	apply_type(0x1516a70, "RTTIBase[1]");
	set_name(0x1516a70, "InventoryReviveAbility::sBases");

	// InventoryReviveAbilityRep
	set_name(0x1513ce0, "InventoryReviveAbilityRep");
	apply_type(0x1513ce0, "RTTICompound");
	del_items(0x1516a78, DELIT_SIMPLE, 8);
	apply_type(0x1516a78, "RTTIBase[1]");
	set_name(0x1516a78, "InventoryReviveAbilityRep::sBases");

	// InventoryReviveAbilityResource
	set_name(0x1513c8c, "InventoryReviveAbilityResource");
	apply_type(0x1513c8c, "RTTICompound");
	del_items(0x15167cc, DELIT_SIMPLE, 8);
	apply_type(0x15167cc, "RTTIBase[1]");
	set_name(0x15167cc, "InventoryReviveAbilityResource::sBases");
	del_items(0x15167d4, DELIT_SIMPLE, 644);
	apply_type(0x15167d4, "RTTIAttr[23]");
	set_name(0x15167d4, "InventoryReviveAbilityResource::sAttrs");
	del_items(0x1516a58, DELIT_SIMPLE, 24);
	apply_type(0x1516a58, "RTTIMessageHandler[2]");
	set_name(0x1516a58, "InventoryReviveAbilityResource::sMessageHandlers");

	// InventoryRocketLauncher
	set_name(0x1513304, "InventoryRocketLauncher");
	apply_type(0x1513304, "RTTICompound");
	del_items(0x1516350, DELIT_SIMPLE, 8);
	apply_type(0x1516350, "RTTIBase[1]");
	set_name(0x1516350, "InventoryRocketLauncher::sBases");

	// InventoryRocketLauncherRep
	set_name(0x1513358, "InventoryRocketLauncherRep");
	apply_type(0x1513358, "RTTICompound");
	del_items(0x1516358, DELIT_SIMPLE, 8);
	apply_type(0x1516358, "RTTIBase[1]");
	set_name(0x1516358, "InventoryRocketLauncherRep::sBases");

	// InventoryRocketLauncherResource
	set_name(0x15133ac, "InventoryRocketLauncherResource");
	apply_type(0x15133ac, "RTTICompound");
	del_items(0x151624c, DELIT_SIMPLE, 8);
	apply_type(0x151624c, "RTTIBase[1]");
	set_name(0x151624c, "InventoryRocketLauncherResource::sBases");
	del_items(0x1516254, DELIT_SIMPLE, 252);
	apply_type(0x1516254, "RTTIAttr[9]");
	set_name(0x1516254, "InventoryRocketLauncherResource::sAttrs");

	// InventorySabotageAbility
	set_name(0x15140cc, "InventorySabotageAbility");
	apply_type(0x15140cc, "RTTICompound");
	del_items(0x1517048, DELIT_SIMPLE, 8);
	apply_type(0x1517048, "RTTIBase[1]");
	set_name(0x1517048, "InventorySabotageAbility::sBases");

	// InventorySabotageAbilityResource
	set_name(0x1514120, "InventorySabotageAbilityResource");
	apply_type(0x1514120, "RTTICompound");
	del_items(0x1516fec, DELIT_SIMPLE, 8);
	apply_type(0x1516fec, "RTTIBase[1]");
	set_name(0x1516fec, "InventorySabotageAbilityResource::sBases");
	del_items(0x1516ff4, DELIT_SIMPLE, 84);
	apply_type(0x1516ff4, "RTTIAttr[3]");
	set_name(0x1516ff4, "InventorySabotageAbilityResource::sAttrs");

	// InventorySpotAndMarkAbility
	set_name(0x1514174, "InventorySpotAndMarkAbility");
	apply_type(0x1514174, "RTTICompound");
	del_items(0x1517050, DELIT_SIMPLE, 8);
	apply_type(0x1517050, "RTTIBase[1]");
	set_name(0x1517050, "InventorySpotAndMarkAbility::sBases");

	// InventorySpotAndMarkAbilityResource
	set_name(0x15141c8, "InventorySpotAndMarkAbilityResource");
	apply_type(0x15141c8, "RTTICompound");
	del_items(0x1517064, DELIT_SIMPLE, 8);
	apply_type(0x1517064, "RTTIBase[1]");
	set_name(0x1517064, "InventorySpotAndMarkAbilityResource::sBases");
	del_items(0x151706c, DELIT_SIMPLE, 168);
	apply_type(0x151706c, "RTTIAttr[6]");
	set_name(0x151706c, "InventorySpotAndMarkAbilityResource::sAttrs");
	del_items(0x1517114, DELIT_SIMPLE, 12);
	apply_type(0x1517114, "RTTIMessageHandler[1]");
	set_name(0x1517114, "InventorySpotAndMarkAbilityResource::sMessageHandlers");

	// InventoryStaminaAbility
	set_name(0x15179ec, "InventoryStaminaAbility");
	apply_type(0x15179ec, "RTTICompound");
	del_items(0x151862c, DELIT_SIMPLE, 8);
	apply_type(0x151862c, "RTTIBase[1]");
	set_name(0x151862c, "InventoryStaminaAbility::sBases");

	// InventoryStaminaAbilityResource
	set_name(0x1517a40, "InventoryStaminaAbilityResource");
	apply_type(0x1517a40, "RTTICompound");
	del_items(0x1518640, DELIT_SIMPLE, 8);
	apply_type(0x1518640, "RTTIBase[1]");
	set_name(0x1518640, "InventoryStaminaAbilityResource::sBases");
	del_items(0x1518648, DELIT_SIMPLE, 84);
	apply_type(0x1518648, "RTTIAttr[3]");
	set_name(0x1518648, "InventoryStaminaAbilityResource::sAttrs");

	// InventoryThrowable
	set_name(0x15134fc, "InventoryThrowable");
	apply_type(0x15134fc, "RTTICompound");
	del_items(0x1515594, DELIT_SIMPLE, 8);
	apply_type(0x1515594, "RTTIBase[1]");
	set_name(0x1515594, "InventoryThrowable::sBases");

	// InventoryThrowablePickUp
	set_name(0x1517544, "InventoryThrowablePickUp");
	apply_type(0x1517544, "RTTICompound");
	del_items(0x1518328, DELIT_SIMPLE, 8);
	apply_type(0x1518328, "RTTIBase[1]");
	set_name(0x1518328, "InventoryThrowablePickUp::sBases");

	// InventoryThrowablePickUpResource
	set_name(0x1517598, "InventoryThrowablePickUpResource");
	apply_type(0x1517598, "RTTICompound");
	del_items(0x1518320, DELIT_SIMPLE, 8);
	apply_type(0x1518320, "RTTIBase[1]");
	set_name(0x1518320, "InventoryThrowablePickUpResource::sBases");

	// InventoryThrowableRep
	set_name(0x1513550, "InventoryThrowableRep");
	apply_type(0x1513550, "RTTICompound");
	del_items(0x15155f0, DELIT_SIMPLE, 8);
	apply_type(0x15155f0, "RTTIBase[1]");
	set_name(0x15155f0, "InventoryThrowableRep::sBases");

	// InventoryThrowableResource
	set_name(0x15135a4, "InventoryThrowableResource");
	apply_type(0x15135a4, "RTTICompound");
	del_items(0x1515284, DELIT_SIMPLE, 8);
	apply_type(0x1515284, "RTTIBase[1]");
	set_name(0x1515284, "InventoryThrowableResource::sBases");
	del_items(0x151528c, DELIT_SIMPLE, 728);
	apply_type(0x151528c, "RTTIAttr[26]");
	set_name(0x151528c, "InventoryThrowableResource::sAttrs");
	del_items(0x1515564, DELIT_SIMPLE, 24);
	apply_type(0x1515564, "RTTIMessageHandler[2]");
	set_name(0x1515564, "InventoryThrowableResource::sMessageHandlers");

	// InventoryTurret
	set_name(0x1517178, "InventoryTurret");
	apply_type(0x1517178, "RTTICompound");
	del_items(0x151800c, DELIT_SIMPLE, 8);
	apply_type(0x151800c, "RTTIBase[1]");
	set_name(0x151800c, "InventoryTurret::sBases");

	// InventoryTurretResource
	set_name(0x15171cc, "InventoryTurretResource");
	apply_type(0x15171cc, "RTTICompound");
	del_items(0x1517fb0, DELIT_SIMPLE, 8);
	apply_type(0x1517fb0, "RTTIBase[1]");
	set_name(0x1517fb0, "InventoryTurretResource::sBases");
	del_items(0x1517fb8, DELIT_SIMPLE, 84);
	apply_type(0x1517fb8, "RTTIAttr[3]");
	set_name(0x1517fb8, "InventoryTurretResource::sAttrs");

	// InventoryWeapon
	set_name(0x1512c04, "InventoryWeapon");
	apply_type(0x1512c04, "RTTICompound");
	del_items(0x15150d8, DELIT_SIMPLE, 8);
	apply_type(0x15150d8, "RTTIBase[1]");
	set_name(0x15150d8, "InventoryWeapon::sBases");

	// InventoryWeaponPickUpResource
	set_name(0x1517cbc, "InventoryWeaponPickUpResource");
	apply_type(0x1517cbc, "RTTICompound");
	del_items(0x151829c, DELIT_SIMPLE, 8);
	apply_type(0x151829c, "RTTIBase[1]");
	set_name(0x151829c, "InventoryWeaponPickUpResource::sBases");
	del_items(0x15182a4, DELIT_SIMPLE, 112);
	apply_type(0x15182a4, "RTTIAttr[4]");
	set_name(0x15182a4, "InventoryWeaponPickUpResource::sAttrs");

	// InventoryWeaponRep
	set_name(0x1512c58, "InventoryWeaponRep");
	apply_type(0x1512c58, "RTTICompound");
	del_items(0x1515134, DELIT_SIMPLE, 8);
	apply_type(0x1515134, "RTTIBase[1]");
	set_name(0x1515134, "InventoryWeaponRep::sBases");

	// InventoryWeaponResource
	set_name(0x1512e4c, "InventoryWeaponResource");
	apply_type(0x1512e4c, "RTTICompound");
	del_items(0x1514a24, DELIT_SIMPLE, 8);
	apply_type(0x1514a24, "RTTIBase[1]");
	set_name(0x1514a24, "InventoryWeaponResource::sBases");
	del_items(0x1514a2c, DELIT_SIMPLE, 1708);
	apply_type(0x1514a2c, "RTTIAttr[61]");
	set_name(0x1514a2c, "InventoryWeaponResource::sAttrs");

	// JetpackThrusterEffectSetup
	set_name(0x151325c, "JetpackThrusterEffectSetup");
	apply_type(0x151325c, "RTTICompound");
	del_items(0x1515d70, DELIT_SIMPLE, 308);
	apply_type(0x1515d70, "RTTIAttr[11]");
	set_name(0x1515d70, "JetpackThrusterEffectSetup::sAttrs");

	// JetpackThrusterEffectSetupLocation
	set_name(0x1513208, "JetpackThrusterEffectSetupLocation");
	apply_type(0x1513208, "RTTICompound");
	del_items(0x1515d38, DELIT_SIMPLE, 56);
	apply_type(0x1515d38, "RTTIAttr[2]");
	set_name(0x1515d38, "JetpackThrusterEffectSetupLocation::sAttrs");

	// Joint
	set_name(0x14da110, "Joint");
	apply_type(0x14da110, "RTTICompound");
	del_items(0x14dad18, DELIT_SIMPLE, 140);
	apply_type(0x14dad18, "RTTIAttr[5]");
	set_name(0x14dad18, "Joint::sAttrs");

	// JoystickInputModifier
	set_name(0x153ac6c, "JoystickInputModifier");
	apply_type(0x153ac6c, "RTTICompound");
	del_items(0x153b9f8, DELIT_SIMPLE, 8);
	apply_type(0x153b9f8, "RTTIBase[1]");
	set_name(0x153b9f8, "JoystickInputModifier::sBases");

	// JoystickInputModifierResource
	set_name(0x153acd0, "JoystickInputModifierResource");
	apply_type(0x153acd0, "RTTICompound");
	del_items(0x153ba00, DELIT_SIMPLE, 8);
	apply_type(0x153ba00, "RTTIBase[1]");
	set_name(0x153ba00, "JoystickInputModifierResource::sBases");
	del_items(0x153ba08, DELIT_SIMPLE, 588);
	apply_type(0x153ba08, "RTTIAttr[21]");
	set_name(0x153ba08, "JoystickInputModifierResource::sAttrs");

	// JumpFrameEventInstance
	set_name(0x151a668, "JumpFrameEventInstance");
	apply_type(0x151a668, "RTTICompound");
	del_items(0x151c2f4, DELIT_SIMPLE, 8);
	apply_type(0x151c2f4, "RTTIBase[1]");
	set_name(0x151c2f4, "JumpFrameEventInstance::sBases");

	// JumpFrameEventResource
	set_name(0x151a614, "JumpFrameEventResource");
	apply_type(0x151a614, "RTTICompound");
	del_items(0x151c298, DELIT_SIMPLE, 8);
	apply_type(0x151c298, "RTTIBase[1]");
	set_name(0x151c298, "JumpFrameEventResource::sBases");
	del_items(0x151c2a0, DELIT_SIMPLE, 84);
	apply_type(0x151c2a0, "RTTIAttr[3]");
	set_name(0x151c2a0, "JumpFrameEventResource::sAttrs");

	// KillEntityAction
	set_name(0x14f9120, "KillEntityAction");
	apply_type(0x14f9120, "RTTICompound");
	del_items(0x14fdc58, DELIT_SIMPLE, 8);
	apply_type(0x14fdc58, "RTTIBase[1]");
	set_name(0x14fdc58, "KillEntityAction::sBases");

	// KillEventResource
	set_name(0x151a6bc, "KillEventResource");
	apply_type(0x151a6bc, "RTTICompound");
	del_items(0x151c2fc, DELIT_SIMPLE, 8);
	apply_type(0x151c2fc, "RTTIBase[1]");
	set_name(0x151c2fc, "KillEventResource::sBases");
	del_items(0x151c304, DELIT_SIMPLE, 196);
	apply_type(0x151c304, "RTTIAttr[7]");
	set_name(0x151c304, "KillEventResource::sAttrs");

	// KillPartsAction
	set_name(0x14f9078, "KillPartsAction");
	apply_type(0x14f9078, "RTTICompound");
	del_items(0x14fdba0, DELIT_SIMPLE, 8);
	apply_type(0x14fdba0, "RTTIBase[1]");
	set_name(0x14fdba0, "KillPartsAction::sBases");
	del_items(0x14fdba8, DELIT_SIMPLE, 112);
	apply_type(0x14fdba8, "RTTIAttr[4]");
	set_name(0x14fdba8, "KillPartsAction::sAttrs");

	// Ladder
	set_name(0x1504e94, "Ladder");
	apply_type(0x1504e94, "RTTICompound");
	del_items(0x150641c, DELIT_SIMPLE, 8);
	apply_type(0x150641c, "RTTIBase[1]");
	set_name(0x150641c, "Ladder::sBases");
	del_items(0x1506424, DELIT_SIMPLE, 56);
	apply_type(0x1506424, "RTTIAttr[2]");
	set_name(0x1506424, "Ladder::sAttrs");

	// LadderAiController
	set_name(0x1504ee8, "LadderAiController");
	apply_type(0x1504ee8, "RTTICompound");
	del_items(0x150646c, DELIT_SIMPLE, 8);
	apply_type(0x150646c, "RTTIBase[1]");
	set_name(0x150646c, "LadderAiController::sBases");

	// LadderClimbCycleSound
	set_name(0x1505048, "LadderClimbCycleSound");
	apply_type(0x1505048, "RTTICompound");
	del_items(0x15062d4, DELIT_SIMPLE, 28);
	apply_type(0x15062d4, "RTTIAttr[1]");
	set_name(0x15062d4, "LadderClimbCycleSound::sAttrs");

	// LadderController
	set_name(0x1504f3c, "LadderController");
	apply_type(0x1504f3c, "RTTICompound");
	del_items(0x1506464, DELIT_SIMPLE, 8);
	apply_type(0x1506464, "RTTIBase[1]");
	set_name(0x1506464, "LadderController::sBases");

	// LadderInteraction
	set_name(0x154bf10, "LadderInteraction");
	apply_type(0x154bf10, "RTTICompound");
	del_items(0x154c474, DELIT_SIMPLE, 8);
	apply_type(0x154c474, "RTTIBase[1]");
	set_name(0x154c474, "LadderInteraction::sBases");

	// LadderInteractionController
	set_name(0x154be68, "LadderInteractionController");
	apply_type(0x154be68, "RTTICompound");
	del_items(0x154c420, DELIT_SIMPLE, 8);
	apply_type(0x154c420, "RTTIBase[1]");
	set_name(0x154c420, "LadderInteractionController::sBases");

	// LadderInteractionResource
	set_name(0x154bebc, "LadderInteractionResource");
	apply_type(0x154bebc, "RTTICompound");
	del_items(0x154c434, DELIT_SIMPLE, 8);
	apply_type(0x154c434, "RTTIBase[1]");
	set_name(0x154c434, "LadderInteractionResource::sBases");
	del_items(0x154c43c, DELIT_SIMPLE, 56);
	apply_type(0x154c43c, "RTTIAttr[2]");
	set_name(0x154c43c, "LadderInteractionResource::sAttrs");

	// LadderJoystickController
	set_name(0x1504f90, "LadderJoystickController");
	apply_type(0x1504f90, "RTTICompound");
	del_items(0x1506474, DELIT_SIMPLE, 8);
	apply_type(0x1506474, "RTTIBase[1]");
	set_name(0x1506474, "LadderJoystickController::sBases");

	// LadderRep
	set_name(0x1504fe4, "LadderRep");
	apply_type(0x1504fe4, "RTTICompound");
	del_items(0x150647c, DELIT_SIMPLE, 8);
	apply_type(0x150647c, "RTTIBase[1]");
	set_name(0x150647c, "LadderRep::sBases");

	// LadderResource
	set_name(0x150509c, "LadderResource");
	apply_type(0x150509c, "RTTICompound");
	del_items(0x15062fc, DELIT_SIMPLE, 8);
	apply_type(0x15062fc, "RTTIBase[1]");
	set_name(0x15062fc, "LadderResource::sBases");
	del_items(0x1506304, DELIT_SIMPLE, 280);
	apply_type(0x1506304, "RTTIAttr[10]");
	set_name(0x1506304, "LadderResource::sAttrs");

	// LandVehicle
	set_name(0x150b42c, "LandVehicle");
	apply_type(0x150b42c, "RTTICompound");
	del_items(0x150cd20, DELIT_SIMPLE, 8);
	apply_type(0x150cd20, "RTTIBase[1]");
	set_name(0x150cd20, "LandVehicle::sBases");
	del_items(0x150cd28, DELIT_SIMPLE, 72);
	apply_type(0x150cd28, "RTTIFunction[3]");
	set_name(0x150cd28, "LandVehicle::sFunctions");

	// LandVehicleAIController
	set_name(0x150b480, "LandVehicleAIController");
	apply_type(0x150b480, "RTTICompound");
	del_items(0x150cd80, DELIT_SIMPLE, 8);
	apply_type(0x150cd80, "RTTIBase[1]");
	set_name(0x150cd80, "LandVehicleAIController::sBases");

	// LandVehicleController
	set_name(0x150b4d4, "LandVehicleController");
	apply_type(0x150b4d4, "RTTICompound");
	del_items(0x150cd78, DELIT_SIMPLE, 8);
	apply_type(0x150cd78, "RTTIBase[1]");
	set_name(0x150cd78, "LandVehicleController::sBases");

	// LandVehicleJoystickController
	set_name(0x150b57c, "LandVehicleJoystickController");
	apply_type(0x150b57c, "RTTICompound");
	del_items(0x150cd88, DELIT_SIMPLE, 8);
	apply_type(0x150cd88, "RTTIBase[1]");
	set_name(0x150cd88, "LandVehicleJoystickController::sBases");

	// LandVehicleMover
	set_name(0x14fb7d0, "LandVehicleMover");
	apply_type(0x14fb7d0, "RTTICompound");
	del_items(0x14ffa80, DELIT_SIMPLE, 8);
	apply_type(0x14ffa80, "RTTIBase[1]");
	set_name(0x14ffa80, "LandVehicleMover::sBases");

	// LandVehicleMoverResource
	set_name(0x152ab08, "LandVehicleMoverResource");
	apply_type(0x152ab08, "RTTICompound");
	del_items(0x152b430, DELIT_SIMPLE, 8);
	apply_type(0x152b430, "RTTIBase[1]");
	set_name(0x152b430, "LandVehicleMoverResource::sBases");
	del_items(0x152b438, DELIT_SIMPLE, 196);
	apply_type(0x152b438, "RTTIAttr[7]");
	set_name(0x152b438, "LandVehicleMoverResource::sAttrs");

	// LandVehicleRep
	set_name(0x150b624, "LandVehicleRep");
	apply_type(0x150b624, "RTTICompound");
	del_items(0x150d0fc, DELIT_SIMPLE, 8);
	apply_type(0x150d0fc, "RTTIBase[1]");
	set_name(0x150d0fc, "LandVehicleRep::sBases");

	// LandVehicleResource
	set_name(0x150b6dc, "LandVehicleResource");
	apply_type(0x150b6dc, "RTTICompound");
	del_items(0x150c43c, DELIT_SIMPLE, 8);
	apply_type(0x150c43c, "RTTIBase[1]");
	set_name(0x150c43c, "LandVehicleResource::sBases");
	del_items(0x150c444, DELIT_SIMPLE, 700);
	apply_type(0x150c444, "RTTIAttr[25]");
	set_name(0x150c444, "LandVehicleResource::sAttrs");

	// LaserBeamInstance
	set_name(0x14fa6d4, "LaserBeamInstance");
	apply_type(0x14fa6d4, "RTTICompound");
	del_items(0x14feec4, DELIT_SIMPLE, 8);
	apply_type(0x14feec4, "RTTIBase[1]");
	set_name(0x14feec4, "LaserBeamInstance::sBases");

	// LaserBeamResource
	set_name(0x14fa680, "LaserBeamResource");
	apply_type(0x14fa680, "RTTICompound");
	del_items(0x14fedc0, DELIT_SIMPLE, 8);
	apply_type(0x14fedc0, "RTTIBase[1]");
	set_name(0x14fedc0, "LaserBeamResource::sBases");
	del_items(0x14fedc8, DELIT_SIMPLE, 252);
	apply_type(0x14fedc8, "RTTIAttr[9]");
	set_name(0x14fedc8, "LaserBeamResource::sAttrs");

	// LaunchFromHomeSettings
	set_name(0x14eaff0, "LaunchFromHomeSettings");
	apply_type(0x14eaff0, "RTTICompound");
	del_items(0x14ee81c, DELIT_SIMPLE, 8);
	apply_type(0x14ee81c, "RTTIBase[1]");
	set_name(0x14ee81c, "LaunchFromHomeSettings::sBases");
	del_items(0x14ee824, DELIT_SIMPLE, 96);
	apply_type(0x14ee824, "RTTIFunction[4]");
	set_name(0x14ee824, "LaunchFromHomeSettings::sFunctions");

	// LayerTag
	set_name(0x14c01c8, "LayerTag");
	apply_type(0x14c01c8, "RTTICompound");
	del_items(0x14c2080, DELIT_SIMPLE, 8);
	apply_type(0x14c2080, "RTTIBase[1]");
	set_name(0x14c2080, "LayerTag::sBases");

	// LeanAndPeekAction
	set_name(0x15051d8, "LeanAndPeekAction");
	apply_type(0x15051d8, "RTTICompound");
	del_items(0x1506484, DELIT_SIMPLE, 8);
	apply_type(0x1506484, "RTTIBase[1]");
	set_name(0x1506484, "LeanAndPeekAction::sBases");
	del_items(0x150648c, DELIT_SIMPLE, 364);
	apply_type(0x150648c, "RTTIAttr[13]");
	set_name(0x150648c, "LeanAndPeekAction::sAttrs");

	// LeanAndPeekActionEventInstance
	set_name(0x151caa0, "LeanAndPeekActionEventInstance");
	apply_type(0x151caa0, "RTTICompound");
	del_items(0x151e9f4, DELIT_SIMPLE, 8);
	apply_type(0x151e9f4, "RTTIBase[1]");
	set_name(0x151e9f4, "LeanAndPeekActionEventInstance::sBases");

	// LeanAndPeekActionEventResource
	set_name(0x151ca4c, "LeanAndPeekActionEventResource");
	apply_type(0x151ca4c, "RTTICompound");
	del_items(0x151e944, DELIT_SIMPLE, 8);
	apply_type(0x151e944, "RTTIBase[1]");
	set_name(0x151e944, "LeanAndPeekActionEventResource::sBases");
	del_items(0x151e94c, DELIT_SIMPLE, 168);
	apply_type(0x151e94c, "RTTIAttr[6]");
	set_name(0x151e94c, "LeanAndPeekActionEventResource::sAttrs");

	// LeanAndPeekActorInstance
	set_name(0x1520488, "LeanAndPeekActorInstance");
	apply_type(0x1520488, "RTTICompound");
	del_items(0x152180c, DELIT_SIMPLE, 8);
	apply_type(0x152180c, "RTTIBase[1]");
	set_name(0x152180c, "LeanAndPeekActorInstance::sBases");

	// LeanAndPeekActorResource
	set_name(0x1520434, "LeanAndPeekActorResource");
	apply_type(0x1520434, "RTTICompound");
	del_items(0x1521804, DELIT_SIMPLE, 8);
	apply_type(0x1521804, "RTTIBase[1]");
	set_name(0x1521804, "LeanAndPeekActorResource::sBases");

	// LeanAndPeekArea
	set_name(0x15050f0, "LeanAndPeekArea");
	apply_type(0x15050f0, "RTTICompound");
	del_items(0x15067fc, DELIT_SIMPLE, 24);
	apply_type(0x15067fc, "RTTIBase[3]");
	set_name(0x15067fc, "LeanAndPeekArea::sBases");
	del_items(0x1506814, DELIT_SIMPLE, 644);
	apply_type(0x1506814, "RTTIAttr[23]");
	set_name(0x1506814, "LeanAndPeekArea::sAttrs");
	del_items(0x1506a98, DELIT_SIMPLE, 72);
	apply_type(0x1506a98, "RTTIFunction[3]");
	set_name(0x1506a98, "LeanAndPeekArea::sFunctions");

	// LeanAndPeekAreaRep
	set_name(0x1505144, "LeanAndPeekAreaRep");
	apply_type(0x1505144, "RTTICompound");
	del_items(0x1506ae0, DELIT_SIMPLE, 8);
	apply_type(0x1506ae0, "RTTIBase[1]");
	set_name(0x1506ae0, "LeanAndPeekAreaRep::sBases");

	// LeanAndPeekAreaResource
	set_name(0x15052b0, "LeanAndPeekAreaResource");
	apply_type(0x15052b0, "RTTICompound");
	del_items(0x150667c, DELIT_SIMPLE, 8);
	apply_type(0x150667c, "RTTIBase[1]");
	set_name(0x150667c, "LeanAndPeekAreaResource::sBases");
	del_items(0x1506684, DELIT_SIMPLE, 364);
	apply_type(0x1506684, "RTTIAttr[13]");
	set_name(0x1506684, "LeanAndPeekAreaResource::sAttrs");
	del_items(0x15067f0, DELIT_SIMPLE, 12);
	apply_type(0x15067f0, "RTTIMessageHandler[1]");
	set_name(0x15067f0, "LeanAndPeekAreaResource::sMessageHandlers");

	// LeanAndPeekEventInstance
	set_name(0x151cb48, "LeanAndPeekEventInstance");
	apply_type(0x151cb48, "RTTICompound");
	del_items(0x151ebb0, DELIT_SIMPLE, 8);
	apply_type(0x151ebb0, "RTTIBase[1]");
	set_name(0x151ebb0, "LeanAndPeekEventInstance::sBases");

	// LeanAndPeekEventResource
	set_name(0x151caf4, "LeanAndPeekEventResource");
	apply_type(0x151caf4, "RTTICompound");
	del_items(0x151eb38, DELIT_SIMPLE, 8);
	apply_type(0x151eb38, "RTTIBase[1]");
	set_name(0x151eb38, "LeanAndPeekEventResource::sBases");
	del_items(0x151eb40, DELIT_SIMPLE, 112);
	apply_type(0x151eb40, "RTTIAttr[4]");
	set_name(0x151eb40, "LeanAndPeekEventResource::sAttrs");

	// LeanAndPeekPosition
	set_name(0x150525c, "LeanAndPeekPosition");
	apply_type(0x150525c, "RTTICompound");
	del_items(0x15065f8, DELIT_SIMPLE, 8);
	apply_type(0x15065f8, "RTTIBase[1]");
	set_name(0x15065f8, "LeanAndPeekPosition::sBases");
	del_items(0x1506600, DELIT_SIMPLE, 112);
	apply_type(0x1506600, "RTTIAttr[4]");
	set_name(0x1506600, "LeanAndPeekPosition::sAttrs");

	// LegendTag
	set_name(0x14c06e4, "LegendTag");
	apply_type(0x14c06e4, "RTTICompound");
	del_items(0x14c2d8c, DELIT_SIMPLE, 8);
	apply_type(0x14c2d8c, "RTTIBase[1]");
	set_name(0x14c2d8c, "LegendTag::sBases");

	// LegendWidget
	set_name(0x14c1014, "LegendWidget");
	apply_type(0x14c1014, "RTTICompound");
	del_items(0x14c2e68, DELIT_SIMPLE, 8);
	apply_type(0x14c2e68, "RTTIBase[1]");
	set_name(0x14c2e68, "LegendWidget::sBases");

	// LegendWidgetResource
	set_name(0x14c1068, "LegendWidgetResource");
	apply_type(0x14c1068, "RTTICompound");
	del_items(0x14c2e70, DELIT_SIMPLE, 8);
	apply_type(0x14c2e70, "RTTIBase[1]");
	set_name(0x14c2e70, "LegendWidgetResource::sBases");
	del_items(0x14c2e78, DELIT_SIMPLE, 140);
	apply_type(0x14c2e78, "RTTIAttr[5]");
	set_name(0x14c2e78, "LegendWidgetResource::sAttrs");

	// LevelAsset
	set_name(0x14e0a1c, "LevelAsset");
	apply_type(0x14e0a1c, "RTTICompound");
	del_items(0x14e0cec, DELIT_SIMPLE, 8);
	apply_type(0x14e0cec, "RTTIBase[1]");
	set_name(0x14e0cec, "LevelAsset::sBases");
	del_items(0x14e0cf4, DELIT_SIMPLE, 56);
	apply_type(0x14e0cf4, "RTTIAttr[2]");
	set_name(0x14e0cf4, "LevelAsset::sAttrs");

	// LevelAssetInfo
	set_name(0x14ef9fc, "LevelAssetInfo");
	apply_type(0x14ef9fc, "RTTICompound");
	del_items(0x14f0e2c, DELIT_SIMPLE, 8);
	apply_type(0x14f0e2c, "RTTIBase[1]");
	set_name(0x14f0e2c, "LevelAssetInfo::sBases");
	del_items(0x14f0e34, DELIT_SIMPLE, 56);
	apply_type(0x14f0e34, "RTTIAttr[2]");
	set_name(0x14f0e34, "LevelAssetInfo::sAttrs");

	// LevelInfo
	set_name(0x14ef7b4, "LevelInfo");
	apply_type(0x14ef7b4, "RTTICompound");
	del_items(0x14f2bd0, DELIT_SIMPLE, 8);
	apply_type(0x14f2bd0, "RTTIBase[1]");
	set_name(0x14f2bd0, "LevelInfo::sBases");
	del_items(0x14f2bd8, DELIT_SIMPLE, 364);
	apply_type(0x14f2bd8, "RTTIAttr[13]");
	set_name(0x14f2bd8, "LevelInfo::sAttrs");

	// LevelListLevel
	set_name(0x14ef8d0, "LevelListLevel");
	apply_type(0x14ef8d0, "RTTICompound");
	del_items(0x14f0b5c, DELIT_SIMPLE, 364);
	apply_type(0x14f0b5c, "RTTIAttr[13]");
	set_name(0x14f0b5c, "LevelListLevel::sAttrs");

	// LevelListLevelNode
	set_name(0x14ef86c, "LevelListLevelNode");
	apply_type(0x14ef86c, "RTTICompound");
	del_items(0x14f0b08, DELIT_SIMPLE, 84);
	apply_type(0x14f0b08, "RTTIAttr[3]");
	set_name(0x14f0b08, "LevelListLevelNode::sAttrs");

	// LevelListResource
	set_name(0x14ef944, "LevelListResource");
	apply_type(0x14ef944, "RTTICompound");
	del_items(0x14f0cc8, DELIT_SIMPLE, 8);
	apply_type(0x14f0cc8, "RTTIBase[1]");
	set_name(0x14f0cc8, "LevelListResource::sBases");
	del_items(0x14f0cd0, DELIT_SIMPLE, 84);
	apply_type(0x14f0cd0, "RTTIAttr[3]");
	set_name(0x14f0cd0, "LevelListResource::sAttrs");
	del_items(0x14f0d24, DELIT_SIMPLE, 168);
	apply_type(0x14f0d24, "RTTIFunction[7]");
	set_name(0x14f0d24, "LevelListResource::sFunctions");
	del_items(0x14f0dcc, DELIT_SIMPLE, 12);
	apply_type(0x14f0dcc, "RTTIMessageHandler[1]");
	set_name(0x14f0dcc, "LevelListResource::sMessageHandlers");

	// LevelSection
	set_name(0x14e0af4, "LevelSection");
	apply_type(0x14e0af4, "RTTICompound");
	del_items(0x14e0c90, DELIT_SIMPLE, 8);
	apply_type(0x14e0c90, "RTTIBase[1]");
	set_name(0x14e0c90, "LevelSection::sBases");
	del_items(0x14e0c98, DELIT_SIMPLE, 84);
	apply_type(0x14e0c98, "RTTIAttr[3]");
	set_name(0x14e0c98, "LevelSection::sAttrs");

	// LevelSectionLump
	set_name(0x14e0a80, "LevelSectionLump");
	apply_type(0x14e0a80, "RTTICompound");
	del_items(0x14e0c58, DELIT_SIMPLE, 56);
	apply_type(0x14e0c58, "RTTIAttr[2]");
	set_name(0x14e0c58, "LevelSectionLump::sAttrs");

	// LevelSettings
	set_name(0x14ef808, "LevelSettings");
	apply_type(0x14ef808, "RTTICompound");
	del_items(0x14f2d44, DELIT_SIMPLE, 8);
	apply_type(0x14f2d44, "RTTIBase[1]");
	set_name(0x14f2d44, "LevelSettings::sBases");
	del_items(0x14f2d4c, DELIT_SIMPLE, 672);
	apply_type(0x14f2d4c, "RTTIAttr[24]");
	set_name(0x14f2d4c, "LevelSettings::sAttrs");

	// Lift
	set_name(0x1500dc0, "Lift");
	apply_type(0x1500dc0, "RTTICompound");
	del_items(0x1501918, DELIT_SIMPLE, 8);
	apply_type(0x1501918, "RTTIBase[1]");
	set_name(0x1501918, "Lift::sBases");
	del_items(0x1501920, DELIT_SIMPLE, 196);
	apply_type(0x1501920, "RTTIAttr[7]");
	set_name(0x1501920, "Lift::sAttrs");
	del_items(0x15019e4, DELIT_SIMPLE, 312);
	apply_type(0x15019e4, "RTTIFunction[13]");
	set_name(0x15019e4, "Lift::sFunctions");

	// LiftRep
	set_name(0x1500e14, "LiftRep");
	apply_type(0x1500e14, "RTTICompound");
	del_items(0x1501b24, DELIT_SIMPLE, 8);
	apply_type(0x1501b24, "RTTIBase[1]");
	set_name(0x1501b24, "LiftRep::sBases");

	// LiftResource
	set_name(0x1500ecc, "LiftResource");
	apply_type(0x1500ecc, "RTTICompound");
	del_items(0x150177c, DELIT_SIMPLE, 8);
	apply_type(0x150177c, "RTTIBase[1]");
	set_name(0x150177c, "LiftResource::sBases");
	del_items(0x1501784, DELIT_SIMPLE, 392);
	apply_type(0x1501784, "RTTIAttr[14]");
	set_name(0x1501784, "LiftResource::sAttrs");
	del_items(0x150190c, DELIT_SIMPLE, 12);
	apply_type(0x150190c, "RTTIMessageHandler[1]");
	set_name(0x150190c, "LiftResource::sMessageHandlers");

	// LiftWheel
	set_name(0x1500e78, "LiftWheel");
	apply_type(0x1500e78, "RTTICompound");
	del_items(0x150171c, DELIT_SIMPLE, 84);
	apply_type(0x150171c, "RTTIAttr[3]");
	set_name(0x150171c, "LiftWheel::sAttrs");

	// Light
	set_name(0x14c88c0, "Light");
	apply_type(0x14c88c0, "RTTICompound");
	del_items(0x14c9e24, DELIT_SIMPLE, 8);
	apply_type(0x14c9e24, "RTTIBase[1]");
	set_name(0x14c9e24, "Light::sBases");
	del_items(0x14c9e2c, DELIT_SIMPLE, 700);
	apply_type(0x14c9e2c, "RTTIAttr[25]");
	set_name(0x14c9e2c, "Light::sAttrs");
	del_items(0x14ca0e8, DELIT_SIMPLE, 12);
	apply_type(0x14ca0e8, "RTTIMessageHandler[1]");
	set_name(0x14ca0e8, "Light::sMessageHandlers");

	// LightAttachedCorona
	set_name(0x14bce84, "LightAttachedCorona");
	apply_type(0x14bce84, "RTTICompound");
	del_items(0x14bda2c, DELIT_SIMPLE, 8);
	apply_type(0x14bda2c, "RTTIBase[1]");
	set_name(0x14bda2c, "LightAttachedCorona::sBases");
	del_items(0x14bda34, DELIT_SIMPLE, 84);
	apply_type(0x14bda34, "RTTIAttr[3]");
	set_name(0x14bda34, "LightAttachedCorona::sAttrs");

	// LightEventInstance
	set_name(0x151cbf0, "LightEventInstance");
	apply_type(0x151cbf0, "RTTICompound");
	del_items(0x151ec68, DELIT_SIMPLE, 8);
	apply_type(0x151ec68, "RTTIBase[1]");
	set_name(0x151ec68, "LightEventInstance::sBases");

	// LightEventResource
	set_name(0x151cb9c, "LightEventResource");
	apply_type(0x151cb9c, "RTTICompound");
	del_items(0x151ebb8, DELIT_SIMPLE, 8);
	apply_type(0x151ebb8, "RTTIBase[1]");
	set_name(0x151ebb8, "LightEventResource::sBases");
	del_items(0x151ebc0, DELIT_SIMPLE, 168);
	apply_type(0x151ebc0, "RTTIAttr[6]");
	set_name(0x151ebc0, "LightEventResource::sAttrs");

	// LightProbe
	set_name(0x14c8978, "LightProbe");
	apply_type(0x14c8978, "RTTICompound");
	del_items(0x14caafc, DELIT_SIMPLE, 140);
	apply_type(0x14caafc, "RTTIAttr[5]");
	set_name(0x14caafc, "LightProbe::sAttrs");

	// LightProbeKdTreeObject
	set_name(0x14c8ad8, "LightProbeKdTreeObject");
	apply_type(0x14c8ad8, "RTTICompound");
	del_items(0x14cab88, DELIT_SIMPLE, 140);
	apply_type(0x14cab88, "RTTIAttr[5]");
	set_name(0x14cab88, "LightProbeKdTreeObject::sAttrs");

	// LightProbeSetResource
	set_name(0x14c8b2c, "LightProbeSetResource");
	apply_type(0x14c8b2c, "RTTICompound");
	del_items(0x14cac14, DELIT_SIMPLE, 8);
	apply_type(0x14cac14, "RTTIBase[1]");
	set_name(0x14cac14, "LightProbeSetResource::sBases");
	del_items(0x14cac1c, DELIT_SIMPLE, 112);
	apply_type(0x14cac1c, "RTTIAttr[4]");
	set_name(0x14cac1c, "LightProbeSetResource::sAttrs");
	del_items(0x14cac8c, DELIT_SIMPLE, 12);
	apply_type(0x14cac8c, "RTTIMessageHandler[1]");
	set_name(0x14cac8c, "LightProbeSetResource::sMessageHandlers");

	// LightResource
	set_name(0x14c8ba0, "LightResource");
	apply_type(0x14c8ba0, "RTTICompound");
	del_items(0x14ca870, DELIT_SIMPLE, 8);
	apply_type(0x14ca870, "RTTIBase[1]");
	set_name(0x14ca870, "LightResource::sBases");
	del_items(0x14ca878, DELIT_SIMPLE, 644);
	apply_type(0x14ca878, "RTTIAttr[23]");
	set_name(0x14ca878, "LightResource::sAttrs");

	// LightShadowed
	set_name(0x14c8d00, "LightShadowed");
	apply_type(0x14c8d00, "RTTICompound");
	del_items(0x14ca2dc, DELIT_SIMPLE, 8);
	apply_type(0x14ca2dc, "RTTIBase[1]");
	set_name(0x14ca2dc, "LightShadowed::sBases");
	del_items(0x14ca2e4, DELIT_SIMPLE, 280);
	apply_type(0x14ca2e4, "RTTIAttr[10]");
	set_name(0x14ca2e4, "LightShadowed::sAttrs");

	// LightShadowedResource
	set_name(0x14cb53c, "LightShadowedResource");
	apply_type(0x14cb53c, "RTTICompound");
	del_items(0x14cd528, DELIT_SIMPLE, 8);
	apply_type(0x14cd528, "RTTIBase[1]");
	set_name(0x14cd528, "LightShadowedResource::sBases");
	del_items(0x14cd530, DELIT_SIMPLE, 280);
	apply_type(0x14cd530, "RTTIAttr[10]");
	set_name(0x14cd530, "LightShadowedResource::sAttrs");

	// LightingManager
	set_name(0x14c8914, "LightingManager");
	apply_type(0x14c8914, "RTTICompound");
	del_items(0x14c96f8, DELIT_SIMPLE, 8);
	apply_type(0x14c96f8, "RTTIBase[1]");
	set_name(0x14c96f8, "LightingManager::sBases");

	// LinearBoneSpeedTrackerResource
	set_name(0x1541b34, "LinearBoneSpeedTrackerResource");
	apply_type(0x1541b34, "RTTICompound");
	del_items(0x1543154, DELIT_SIMPLE, 8);
	apply_type(0x1543154, "RTTIBase[1]");
	set_name(0x1543154, "LinearBoneSpeedTrackerResource::sBases");
	del_items(0x154315c, DELIT_SIMPLE, 56);
	apply_type(0x154315c, "RTTIAttr[2]");
	set_name(0x154315c, "LinearBoneSpeedTrackerResource::sAttrs");

	// LinearLUT_8
	set_name(0x14e16dc, "LinearLUT_8");
	apply_type(0x14e16dc, "RTTICompound");
	del_items(0x14e1730, DELIT_SIMPLE, 224);
	apply_type(0x14e1730, "RTTIAttr[8]");
	set_name(0x14e1730, "LinearLUT_8::sAttrs");

	// LinkType
	set_name(0x14d67c8, "LinkType");
	apply_type(0x14d67c8, "RTTICompound");
	del_items(0x14d75c4, DELIT_SIMPLE, 8);
	apply_type(0x14d75c4, "RTTIBase[1]");
	set_name(0x14d75c4, "LinkType::sBases");
	del_items(0x14d75cc, DELIT_SIMPLE, 112);
	apply_type(0x14d75cc, "RTTIAttr[4]");
	set_name(0x14d75cc, "LinkType::sAttrs");
	del_items(0x14d763c, DELIT_SIMPLE, 12);
	apply_type(0x14d763c, "RTTIMessageHandler[1]");
	set_name(0x14d763c, "LinkType::sMessageHandlers");

	// LinkTypeId
	set_name(0x14d6774, "LinkTypeId");
	apply_type(0x14d6774, "RTTICompound");
	del_items(0x14d75a8, DELIT_SIMPLE, 28);
	apply_type(0x14d75a8, "RTTIAttr[1]");
	set_name(0x14d75a8, "LinkTypeId::sAttrs");

	// LinkTypeMask
	set_name(0x14d681c, "LinkTypeMask");
	apply_type(0x14d681c, "RTTICompound");
	del_items(0x14d7648, DELIT_SIMPLE, 28);
	apply_type(0x14d7648, "RTTIAttr[1]");
	set_name(0x14d7648, "LinkTypeMask::sAttrs");

	// LinkedStaticMeshResource
	set_name(0x14d9c08, "LinkedStaticMeshResource");
	apply_type(0x14d9c08, "RTTICompound");
	del_items(0x14dc648, DELIT_SIMPLE, 8);
	apply_type(0x14dc648, "RTTIBase[1]");
	set_name(0x14dc648, "LinkedStaticMeshResource::sBases");
	del_items(0x14dc650, DELIT_SIMPLE, 140);
	apply_type(0x14dc650, "RTTIAttr[5]");
	set_name(0x14dc650, "LinkedStaticMeshResource::sAttrs");
	del_items(0x14dc6dc, DELIT_SIMPLE, 12);
	apply_type(0x14dc6dc, "RTTIMessageHandler[1]");
	set_name(0x14dc6dc, "LinkedStaticMeshResource::sMessageHandlers");

	// ListItemTag
	set_name(0x14c078c, "ListItemTag");
	apply_type(0x14c078c, "RTTICompound");
	del_items(0x14c2b84, DELIT_SIMPLE, 8);
	apply_type(0x14c2b84, "RTTIBase[1]");
	set_name(0x14c2b84, "ListItemTag::sBases");
	del_items(0x14c2b8c, DELIT_SIMPLE, 24);
	apply_type(0x14c2b8c, "RTTIFunction[1]");
	set_name(0x14c2b8c, "ListItemTag::sFunctions");

	// ListItemWidget
	set_name(0x14c1110, "ListItemWidget");
	apply_type(0x14c1110, "RTTICompound");
	del_items(0x14c2f24, DELIT_SIMPLE, 8);
	apply_type(0x14c2f24, "RTTIBase[1]");
	set_name(0x14c2f24, "ListItemWidget::sBases");

	// ListTag
	set_name(0x14c0738, "ListTag");
	apply_type(0x14c0738, "RTTICompound");
	del_items(0x14c2b04, DELIT_SIMPLE, 8);
	apply_type(0x14c2b04, "RTTIBase[1]");
	set_name(0x14c2b04, "ListTag::sBases");
	del_items(0x14c2b0c, DELIT_SIMPLE, 120);
	apply_type(0x14c2b0c, "RTTIFunction[5]");
	set_name(0x14c2b0c, "ListTag::sFunctions");

	// ListWidget
	set_name(0x14c10bc, "ListWidget");
	apply_type(0x14c10bc, "RTTICompound");
	del_items(0x14c3404, DELIT_SIMPLE, 8);
	apply_type(0x14c3404, "RTTIBase[1]");
	set_name(0x14c3404, "ListWidget::sBases");

	// LoadableTag
	set_name(0x14c021c, "LoadableTag");
	apply_type(0x14c021c, "RTTICompound");
	del_items(0x14c2078, DELIT_SIMPLE, 8);
	apply_type(0x14c2078, "RTTIBase[1]");
	set_name(0x14c2078, "LoadableTag::sBases");

	// LocalizedSoundEventInstance
	set_name(0x151cc98, "LocalizedSoundEventInstance");
	apply_type(0x151cc98, "RTTICompound");
	del_items(0x151ece8, DELIT_SIMPLE, 8);
	apply_type(0x151ece8, "RTTIBase[1]");
	set_name(0x151ece8, "LocalizedSoundEventInstance::sBases");

	// LocalizedSoundEventResource
	set_name(0x151cc44, "LocalizedSoundEventResource");
	apply_type(0x151cc44, "RTTICompound");
	del_items(0x151ec70, DELIT_SIMPLE, 8);
	apply_type(0x151ec70, "RTTIBase[1]");
	set_name(0x151ec70, "LocalizedSoundEventResource::sBases");
	del_items(0x151ec78, DELIT_SIMPLE, 112);
	apply_type(0x151ec78, "RTTIAttr[4]");
	set_name(0x151ec78, "LocalizedSoundEventResource::sAttrs");

	// LocalizedSpeechAsset
	set_name(0x153ad24, "LocalizedSpeechAsset");
	apply_type(0x153ad24, "RTTICompound");
	del_items(0x153bc54, DELIT_SIMPLE, 8);
	apply_type(0x153bc54, "RTTIBase[1]");
	set_name(0x153bc54, "LocalizedSpeechAsset::sBases");
	del_items(0x153bc5c, DELIT_SIMPLE, 56);
	apply_type(0x153bc5c, "RTTIAttr[2]");
	set_name(0x153bc5c, "LocalizedSpeechAsset::sAttrs");

	// LocalizedText
	set_name(0x14e104c, "LocalizedText");
	apply_type(0x14e104c, "RTTICompound");
	del_items(0x14e14f8, DELIT_SIMPLE, 8);
	apply_type(0x14e14f8, "RTTIBase[1]");
	set_name(0x14e14f8, "LocalizedText::sBases");
	del_items(0x14e1500, DELIT_SIMPLE, 28);
	apply_type(0x14e1500, "RTTIAttr[1]");
	set_name(0x14e1500, "LocalizedText::sAttrs");

	// LocalizedTextEntry
	set_name(0x14e0ff8, "LocalizedTextEntry");
	apply_type(0x14e0ff8, "RTTICompound");
	del_items(0x14e149c, DELIT_SIMPLE, 8);
	apply_type(0x14e149c, "RTTIBase[1]");
	set_name(0x14e149c, "LocalizedTextEntry::sBases");
	del_items(0x14e14a4, DELIT_SIMPLE, 84);
	apply_type(0x14e14a4, "RTTIAttr[3]");
	set_name(0x14e14a4, "LocalizedTextEntry::sAttrs");

	// Localizer
	set_name(0x14e10a0, "Localizer");
	apply_type(0x14e10a0, "RTTICompound");
	del_items(0x14e151c, DELIT_SIMPLE, 8);
	apply_type(0x14e151c, "RTTIBase[1]");
	set_name(0x14e151c, "Localizer::sBases");
	del_items(0x14e1524, DELIT_SIMPLE, 96);
	apply_type(0x14e1524, "RTTIFunction[4]");
	set_name(0x14e1524, "Localizer::sFunctions");

	// LocatorInstance
	set_name(0x1520550, "LocatorInstance");
	apply_type(0x1520550, "RTTICompound");
	del_items(0x15210e8, DELIT_SIMPLE, 16);
	apply_type(0x15210e8, "RTTIBase[2]");
	set_name(0x15210e8, "LocatorInstance::sBases");

	// LocatorResource
	set_name(0x15204fc, "LocatorResource");
	apply_type(0x15204fc, "RTTICompound");
	del_items(0x152108c, DELIT_SIMPLE, 8);
	apply_type(0x152108c, "RTTIBase[1]");
	set_name(0x152108c, "LocatorResource::sBases");
	del_items(0x1521094, DELIT_SIMPLE, 84);
	apply_type(0x1521094, "RTTIAttr[3]");
	set_name(0x1521094, "LocatorResource::sAttrs");

	// LocomotionMover
	set_name(0x14e7e30, "LocomotionMover");
	apply_type(0x14e7e30, "RTTICompound");
	del_items(0x14e9750, DELIT_SIMPLE, 8);
	apply_type(0x14e9750, "RTTIBase[1]");
	set_name(0x14e9750, "LocomotionMover::sBases");

	// LocomotionMoverResource
	set_name(0x14e7e84, "LocomotionMoverResource");
	apply_type(0x14e7e84, "RTTICompound");
	del_items(0x14e9748, DELIT_SIMPLE, 8);
	apply_type(0x14e9748, "RTTIBase[1]");
	set_name(0x14e9748, "LocomotionMoverResource::sBases");

	// LodMeshResource
	set_name(0x14bec24, "LodMeshResource");
	apply_type(0x14bec24, "RTTICompound");
	del_items(0x14bf300, DELIT_SIMPLE, 8);
	apply_type(0x14bf300, "RTTIBase[1]");
	set_name(0x14bf300, "LodMeshResource::sBases");
	del_items(0x14bf308, DELIT_SIMPLE, 84);
	apply_type(0x14bf308, "RTTIAttr[3]");
	set_name(0x14bf308, "LodMeshResource::sAttrs");

	// LodMeshResourcePart
	set_name(0x14bebd0, "LodMeshResourcePart");
	apply_type(0x14bebd0, "RTTICompound");
	del_items(0x14bf2c8, DELIT_SIMPLE, 56);
	apply_type(0x14bf2c8, "RTTIAttr[2]");
	set_name(0x14bf2c8, "LodMeshResourcePart::sAttrs");

	// LookAtEventInstance
	set_name(0x151cd40, "LookAtEventInstance");
	apply_type(0x151cd40, "RTTICompound");
	del_items(0x151edbc, DELIT_SIMPLE, 8);
	apply_type(0x151edbc, "RTTIBase[1]");
	set_name(0x151edbc, "LookAtEventInstance::sBases");

	// LookAtEventResource
	set_name(0x151ccec, "LookAtEventResource");
	apply_type(0x151ccec, "RTTICompound");
	del_items(0x151ecf0, DELIT_SIMPLE, 8);
	apply_type(0x151ecf0, "RTTIBase[1]");
	set_name(0x151ecf0, "LookAtEventResource::sBases");
	del_items(0x151ecf8, DELIT_SIMPLE, 196);
	apply_type(0x151ecf8, "RTTIAttr[7]");
	set_name(0x151ecf8, "LookAtEventResource::sAttrs");

	// LuaScriptResource
	set_name(0x15420f0, "LuaScriptResource");
	apply_type(0x15420f0, "RTTICompound");
	del_items(0x1543a80, DELIT_SIMPLE, 8);
	apply_type(0x1543a80, "RTTIBase[1]");
	set_name(0x1543a80, "LuaScriptResource::sBases");
	del_items(0x1543a88, DELIT_SIMPLE, 28);
	apply_type(0x1543a88, "RTTIAttr[1]");
	set_name(0x1543a88, "LuaScriptResource::sAttrs");
	del_items(0x1543aa4, DELIT_SIMPLE, 12);
	apply_type(0x1543aa4, "RTTIMessageHandler[1]");
	set_name(0x1543aa4, "LuaScriptResource::sMessageHandlers");

	// LumpOptimizationSettings
	set_name(0x14e1104, "LumpOptimizationSettings");
	apply_type(0x14e1104, "RTTICompound");
	del_items(0x14e12a0, DELIT_SIMPLE, 8);
	apply_type(0x14e12a0, "RTTIBase[1]");
	set_name(0x14e12a0, "LumpOptimizationSettings::sBases");
	del_items(0x14e12a8, DELIT_SIMPLE, 28);
	apply_type(0x14e12a8, "RTTIAttr[1]");
	set_name(0x14e12a8, "LumpOptimizationSettings::sAttrs");

	// LumpOptimizationSettingsGame
	set_name(0x153ad8c, "LumpOptimizationSettingsGame");
	apply_type(0x153ad8c, "RTTICompound");
	del_items(0x153bd90, DELIT_SIMPLE, 8);
	apply_type(0x153bd90, "RTTIBase[1]");
	set_name(0x153bd90, "LumpOptimizationSettingsGame::sBases");
	del_items(0x153bd98, DELIT_SIMPLE, 56);
	apply_type(0x153bd98, "RTTIAttr[2]");
	set_name(0x153bd98, "LumpOptimizationSettingsGame::sAttrs");

	// MapIcon
	set_name(0x15306b8, "MapIcon");
	apply_type(0x15306b8, "RTTICompound");
	del_items(0x15314c4, DELIT_SIMPLE, 168);
	apply_type(0x15314c4, "RTTIAttr[6]");
	set_name(0x15314c4, "MapIcon::sAttrs");

	// MapIconsResource
	set_name(0x153071c, "MapIconsResource");
	apply_type(0x153071c, "RTTICompound");
	del_items(0x153156c, DELIT_SIMPLE, 8);
	apply_type(0x153156c, "RTTIBase[1]");
	set_name(0x153156c, "MapIconsResource::sBases");
	del_items(0x1531574, DELIT_SIMPLE, 224);
	apply_type(0x1531574, "RTTIAttr[8]");
	set_name(0x1531574, "MapIconsResource::sAttrs");
	del_items(0x1531654, DELIT_SIMPLE, 12);
	apply_type(0x1531654, "RTTIMessageHandler[1]");
	set_name(0x1531654, "MapIconsResource::sMessageHandlers");

	// MapInstance
	set_name(0x15307c4, "MapInstance");
	apply_type(0x15307c4, "RTTICompound");
	del_items(0x1531c34, DELIT_SIMPLE, 8);
	apply_type(0x1531c34, "RTTIBase[1]");
	set_name(0x1531c34, "MapInstance::sBases");

	// MapResource
	set_name(0x15308f0, "MapResource");
	apply_type(0x15308f0, "RTTICompound");
	del_items(0x1531aec, DELIT_SIMPLE, 8);
	apply_type(0x1531aec, "RTTIBase[1]");
	set_name(0x1531aec, "MapResource::sBases");
	del_items(0x1531af4, DELIT_SIMPLE, 308);
	apply_type(0x1531af4, "RTTIAttr[11]");
	set_name(0x1531af4, "MapResource::sAttrs");
	del_items(0x1531c28, DELIT_SIMPLE, 12);
	apply_type(0x1531c28, "RTTIMessageHandler[1]");
	set_name(0x1531c28, "MapResource::sMessageHandlers");

	// MapScrambleResource
	set_name(0x1530770, "MapScrambleResource");
	apply_type(0x1530770, "RTTICompound");
	del_items(0x1531660, DELIT_SIMPLE, 168);
	apply_type(0x1531660, "RTTIAttr[6]");
	set_name(0x1531660, "MapScrambleResource::sAttrs");

	// MapTag
	set_name(0x153e3dc, "MapTag");
	apply_type(0x153e3dc, "RTTICompound");
	del_items(0x1540394, DELIT_SIMPLE, 8);
	apply_type(0x1540394, "RTTIBase[1]");
	set_name(0x1540394, "MapTag::sBases");

	// MapWidget
	set_name(0x153e580, "MapWidget");
	apply_type(0x153e580, "RTTICompound");
	del_items(0x15405e4, DELIT_SIMPLE, 8);
	apply_type(0x15405e4, "RTTIBase[1]");
	set_name(0x15405e4, "MapWidget::sBases");

	// MapWidgetResource
	set_name(0x153e5d4, "MapWidgetResource");
	apply_type(0x153e5d4, "RTTICompound");
	del_items(0x15405ec, DELIT_SIMPLE, 8);
	apply_type(0x15405ec, "RTTIBase[1]");
	set_name(0x15405ec, "MapWidgetResource::sBases");
	del_items(0x15405f4, DELIT_SIMPLE, 28);
	apply_type(0x15405f4, "RTTIAttr[1]");
	set_name(0x15405f4, "MapWidgetResource::sAttrs");

	// MapZone
	set_name(0x1530828, "MapZone");
	apply_type(0x1530828, "RTTICompound");
	del_items(0x1531a58, DELIT_SIMPLE, 112);
	apply_type(0x1531a58, "RTTIAttr[4]");
	set_name(0x1531a58, "MapZone::sAttrs");

	// MaterialTypeReplacement
	set_name(0x14fa5c8, "MaterialTypeReplacement");
	apply_type(0x14fa5c8, "RTTICompound");
	del_items(0x14fed2c, DELIT_SIMPLE, 56);
	apply_type(0x14fed2c, "RTTIAttr[2]");
	set_name(0x14fed2c, "MaterialTypeReplacement::sAttrs");

	// MaterialTypeResource
	set_name(0x14bd294, "MaterialTypeResource");
	apply_type(0x14bd294, "RTTICompound");
	del_items(0x14be32c, DELIT_SIMPLE, 8);
	apply_type(0x14be32c, "RTTIBase[1]");
	set_name(0x14be32c, "MaterialTypeResource::sBases");
	del_items(0x14be334, DELIT_SIMPLE, 196);
	apply_type(0x14be334, "RTTIAttr[7]");
	set_name(0x14be334, "MaterialTypeResource::sAttrs");

	// MaterialTypeResourceGame
	set_name(0x14efd4c, "MaterialTypeResourceGame");
	apply_type(0x14efd4c, "RTTICompound");
	del_items(0x14f0e6c, DELIT_SIMPLE, 8);
	apply_type(0x14f0e6c, "RTTIBase[1]");
	set_name(0x14f0e6c, "MaterialTypeResourceGame::sBases");
	del_items(0x14f0e74, DELIT_SIMPLE, 336);
	apply_type(0x14f0e74, "RTTIAttr[12]");
	set_name(0x14f0e74, "MaterialTypeResourceGame::sAttrs");

	// MedalRanksResource
	set_name(0x152b240, "MedalRanksResource");
	apply_type(0x152b240, "RTTICompound");
	del_items(0x152bf10, DELIT_SIMPLE, 168);
	apply_type(0x152bf10, "RTTIAttr[6]");
	set_name(0x152bf10, "MedalRanksResource::sAttrs");

	// MedalResource
	set_name(0x152b2a4, "MedalResource");
	apply_type(0x152b2a4, "RTTICompound");
	del_items(0x152bfb8, DELIT_SIMPLE, 168);
	apply_type(0x152bfb8, "RTTIAttr[6]");
	set_name(0x152bfb8, "MedalResource::sAttrs");

	// MedalSystemResource
	set_name(0x152b2f8, "MedalSystemResource");
	apply_type(0x152b2f8, "RTTICompound");
	del_items(0x152c060, DELIT_SIMPLE, 8);
	apply_type(0x152c060, "RTTIBase[1]");
	set_name(0x152c060, "MedalSystemResource::sBases");
	del_items(0x152c068, DELIT_SIMPLE, 56);
	apply_type(0x152c068, "RTTIAttr[2]");
	set_name(0x152c068, "MedalSystemResource::sAttrs");
	del_items(0x152c0a0, DELIT_SIMPLE, 12);
	apply_type(0x152c0a0, "RTTIMessageHandler[1]");
	set_name(0x152c0a0, "MedalSystemResource::sMessageHandlers");

	// Menu
	set_name(0x14bfa70, "Menu");
	apply_type(0x14bfa70, "RTTICompound");
	del_items(0x14c1b84, DELIT_SIMPLE, 8);
	apply_type(0x14c1b84, "RTTIBase[1]");
	set_name(0x14c1b84, "Menu::sBases");
	del_items(0x14c1b8c, DELIT_SIMPLE, 648);
	apply_type(0x14c1b8c, "RTTIFunction[27]");
	set_name(0x14c1b8c, "Menu::sFunctions");

	// MenuModule
	set_name(0x153e278, "MenuModule");
	apply_type(0x153e278, "RTTICompound");
	del_items(0x153fccc, DELIT_SIMPLE, 8);
	apply_type(0x153fccc, "RTTIBase[1]");
	set_name(0x153fccc, "MenuModule::sBases");
	del_items(0x153fcd4, DELIT_SIMPLE, 648);
	apply_type(0x153fcd4, "RTTIFunction[27]");
	set_name(0x153fcd4, "MenuModule::sFunctions");

	// MenuMovieEventInstance
	set_name(0x1519d18, "MenuMovieEventInstance");
	apply_type(0x1519d18, "RTTICompound");
	del_items(0x151bcdc, DELIT_SIMPLE, 8);
	apply_type(0x151bcdc, "RTTIBase[1]");
	set_name(0x151bcdc, "MenuMovieEventInstance::sBases");

	// MenuMovieEventResource
	set_name(0x1519cc4, "MenuMovieEventResource");
	apply_type(0x1519cc4, "RTTICompound");
	del_items(0x151bc48, DELIT_SIMPLE, 8);
	apply_type(0x151bc48, "RTTIBase[1]");
	set_name(0x151bc48, "MenuMovieEventResource::sBases");
	del_items(0x151bc50, DELIT_SIMPLE, 140);
	apply_type(0x151bc50, "RTTIAttr[5]");
	set_name(0x151bc50, "MenuMovieEventResource::sAttrs");

	// MenuNode
	set_name(0x14bffd0, "MenuNode");
	apply_type(0x14bffd0, "RTTICompound");
	del_items(0x14c1f18, DELIT_SIMPLE, 8);
	apply_type(0x14c1f18, "RTTIBase[1]");
	set_name(0x14c1f18, "MenuNode::sBases");

	// MenuResource
	set_name(0x153e1e4, "MenuResource");
	apply_type(0x153e1e4, "RTTICompound");
	del_items(0x154003c, DELIT_SIMPLE, 8);
	apply_type(0x154003c, "RTTIBase[1]");
	set_name(0x154003c, "MenuResource::sBases");
	del_items(0x1540044, DELIT_SIMPLE, 56);
	apply_type(0x1540044, "RTTIAttr[2]");
	set_name(0x1540044, "MenuResource::sAttrs");

	// MenuScreenURI
	set_name(0x153e190, "MenuScreenURI");
	apply_type(0x153e190, "RTTICompound");
	del_items(0x1540004, DELIT_SIMPLE, 56);
	apply_type(0x1540004, "RTTIAttr[2]");
	set_name(0x1540004, "MenuScreenURI::sAttrs");

	// MenuStyle
	set_name(0x14c1b30, "MenuStyle");
	apply_type(0x14c1b30, "RTTICompound");
	del_items(0x14c2250, DELIT_SIMPLE, 8);
	apply_type(0x14c2250, "RTTIBase[1]");
	set_name(0x14c2250, "MenuStyle::sBases");
	del_items(0x14c2258, DELIT_SIMPLE, 1792);
	apply_type(0x14c2258, "RTTIAttr[64]");
	set_name(0x14c2258, "MenuStyle::sAttrs");

	// MenuStyleAttributeFloat
	set_name(0x14c197c, "MenuStyleAttributeFloat");
	apply_type(0x14c197c, "RTTICompound");
	del_items(0x14c20c0, DELIT_SIMPLE, 56);
	apply_type(0x14c20c0, "RTTIAttr[2]");
	set_name(0x14c20c0, "MenuStyleAttributeFloat::sAttrs");

	// MenuStyleAttributeInt
	set_name(0x14c1928, "MenuStyleAttributeInt");
	apply_type(0x14c1928, "RTTICompound");
	del_items(0x14c2088, DELIT_SIMPLE, 56);
	apply_type(0x14c2088, "RTTIAttr[2]");
	set_name(0x14c2088, "MenuStyleAttributeInt::sAttrs");

	// MenuStyleAttributeRGBAColor
	set_name(0x14c1a24, "MenuStyleAttributeRGBAColor");
	apply_type(0x14c1a24, "RTTICompound");
	del_items(0x14c2130, DELIT_SIMPLE, 56);
	apply_type(0x14c2130, "RTTIAttr[2]");
	set_name(0x14c2130, "MenuStyleAttributeRGBAColor::sAttrs");

	// MenuStyleAttributeString
	set_name(0x14c19d0, "MenuStyleAttributeString");
	apply_type(0x14c19d0, "RTTICompound");
	del_items(0x14c20f8, DELIT_SIMPLE, 56);
	apply_type(0x14c20f8, "RTTIAttr[2]");
	set_name(0x14c20f8, "MenuStyleAttributeString::sAttrs");

	// MenuStyleSelector
	set_name(0x14c1a78, "MenuStyleSelector");
	apply_type(0x14c1a78, "RTTICompound");
	del_items(0x14c2168, DELIT_SIMPLE, 112);
	apply_type(0x14c2168, "RTTIAttr[4]");
	set_name(0x14c2168, "MenuStyleSelector::sAttrs");

	// MeshHierachyShaderOverrides
	set_name(0x14cb4e8, "MeshHierachyShaderOverrides");
	apply_type(0x14cb4e8, "RTTICompound");
	del_items(0x14cd50c, DELIT_SIMPLE, 28);
	apply_type(0x14cd50c, "RTTIAttr[1]");
	set_name(0x14cd50c, "MeshHierachyShaderOverrides::sAttrs");

	// MeshResourceBase
	set_name(0x14bec98, "MeshResourceBase");
	apply_type(0x14bec98, "RTTICompound");
	del_items(0x14bf260, DELIT_SIMPLE, 8);
	apply_type(0x14bf260, "RTTIBase[1]");
	set_name(0x14bf260, "MeshResourceBase::sBases");
	del_items(0x14bf268, DELIT_SIMPLE, 84);
	apply_type(0x14bf268, "RTTIAttr[3]");
	set_name(0x14bf268, "MeshResourceBase::sAttrs");
	del_items(0x14bf2bc, DELIT_SIMPLE, 12);
	apply_type(0x14bf2bc, "RTTIMessageHandler[1]");
	set_name(0x14bf2bc, "MeshResourceBase::sMessageHandlers");

	// MeshResourceOverrides
	set_name(0x14cb420, "MeshResourceOverrides");
	apply_type(0x14cb420, "RTTICompound");
	del_items(0x14cd480, DELIT_SIMPLE, 28);
	apply_type(0x14cd480, "RTTIAttr[1]");
	set_name(0x14cd480, "MeshResourceOverrides::sAttrs");

	// MeshResourcePath
	set_name(0x14c9004, "MeshResourcePath");
	apply_type(0x14c9004, "RTTICompound");
	del_items(0x14cad38, DELIT_SIMPLE, 56);
	apply_type(0x14cad38, "RTTIAttr[2]");
	set_name(0x14cad38, "MeshResourcePath::sAttrs");

	// MeshShaderOverrides
	set_name(0x14cb484, "MeshShaderOverrides");
	apply_type(0x14cb484, "RTTICompound");
	del_items(0x14cd49c, DELIT_SIMPLE, 112);
	apply_type(0x14cd49c, "RTTIAttr[4]");
	set_name(0x14cd49c, "MeshShaderOverrides::sAttrs");

	// MeshSwitch
	set_name(0x150fd70, "MeshSwitch");
	apply_type(0x150fd70, "RTTICompound");
	del_items(0x15124cc, DELIT_SIMPLE, 56);
	apply_type(0x15124cc, "RTTIAttr[2]");
	set_name(0x15124cc, "MeshSwitch::sAttrs");

	// MeshSwitchComponent
	set_name(0x150f9c4, "MeshSwitchComponent");
	apply_type(0x150f9c4, "RTTICompound");
	del_items(0x1512420, DELIT_SIMPLE, 8);
	apply_type(0x1512420, "RTTIBase[1]");
	set_name(0x1512420, "MeshSwitchComponent::sBases");

	// MeshSwitchComponentRep
	set_name(0x150fa18, "MeshSwitchComponentRep");
	apply_type(0x150fa18, "RTTICompound");
	del_items(0x151242c, DELIT_SIMPLE, 8);
	apply_type(0x151242c, "RTTIBase[1]");
	set_name(0x151242c, "MeshSwitchComponentRep::sBases");

	// MeshSwitchComponentResource
	set_name(0x150fa6c, "MeshSwitchComponentResource");
	apply_type(0x150fa6c, "RTTICompound");
	del_items(0x15123c0, DELIT_SIMPLE, 8);
	apply_type(0x15123c0, "RTTIBase[1]");
	set_name(0x15123c0, "MeshSwitchComponentResource::sBases");
	del_items(0x15123c8, DELIT_SIMPLE, 84);
	apply_type(0x15123c8, "RTTIAttr[3]");
	set_name(0x15123c8, "MeshSwitchComponentResource::sAttrs");

	// Mine
	set_name(0x1525e54, "Mine");
	apply_type(0x1525e54, "RTTICompound");
	del_items(0x15270f4, DELIT_SIMPLE, 8);
	apply_type(0x15270f4, "RTTIBase[1]");
	set_name(0x15270f4, "Mine::sBases");
	del_items(0x15270fc, DELIT_SIMPLE, 24);
	apply_type(0x15270fc, "RTTIFunction[1]");
	set_name(0x15270fc, "Mine::sFunctions");

	// MineRep
	set_name(0x1525ea8, "MineRep");
	apply_type(0x1525ea8, "RTTICompound");
	del_items(0x1527114, DELIT_SIMPLE, 8);
	apply_type(0x1527114, "RTTIBase[1]");
	set_name(0x1527114, "MineRep::sBases");

	// MineResource
	set_name(0x1525f0c, "MineResource");
	apply_type(0x1525f0c, "RTTICompound");
	del_items(0x1526f40, DELIT_SIMPLE, 8);
	apply_type(0x1526f40, "RTTIBase[1]");
	set_name(0x1526f40, "MineResource::sBases");
	del_items(0x1526f48, DELIT_SIMPLE, 420);
	apply_type(0x1526f48, "RTTIAttr[15]");
	set_name(0x1526f48, "MineResource::sAttrs");

	// MirrorEffect
	set_name(0x150df60, "MirrorEffect");
	apply_type(0x150df60, "RTTICompound");
	del_items(0x15109e4, DELIT_SIMPLE, 8);
	apply_type(0x15109e4, "RTTIBase[1]");
	set_name(0x15109e4, "MirrorEffect::sBases");

	// MirrorEffectResource
	set_name(0x150df0c, "MirrorEffectResource");
	apply_type(0x150df0c, "RTTICompound");
	del_items(0x15109dc, DELIT_SIMPLE, 8);
	apply_type(0x15109dc, "RTTIBase[1]");
	set_name(0x15109dc, "MirrorEffectResource::sBases");

	// MissileSilo
	set_name(0x1525f60, "MissileSilo");
	apply_type(0x1525f60, "RTTICompound");
	del_items(0x15271a0, DELIT_SIMPLE, 8);
	apply_type(0x15271a0, "RTTIBase[1]");
	set_name(0x15271a0, "MissileSilo::sBases");
	del_items(0x15271a8, DELIT_SIMPLE, 96);
	apply_type(0x15271a8, "RTTIFunction[4]");
	set_name(0x15271a8, "MissileSilo::sFunctions");

	// MissileSiloResource
	set_name(0x1525fc4, "MissileSiloResource");
	apply_type(0x1525fc4, "RTTICompound");
	del_items(0x1527128, DELIT_SIMPLE, 8);
	apply_type(0x1527128, "RTTIBase[1]");
	set_name(0x1527128, "MissileSiloResource::sBases");
	del_items(0x1527130, DELIT_SIMPLE, 112);
	apply_type(0x1527130, "RTTIAttr[4]");
	set_name(0x1527130, "MissileSiloResource::sAttrs");

	// Mission
	set_name(0x15288dc, "Mission");
	apply_type(0x15288dc, "RTTICompound");
	del_items(0x152a1e0, DELIT_SIMPLE, 8);
	apply_type(0x152a1e0, "RTTIBase[1]");
	set_name(0x152a1e0, "Mission::sBases");

	// MissionAssassination
	set_name(0x1528930, "MissionAssassination");
	apply_type(0x1528930, "RTTICompound");
	del_items(0x152a328, DELIT_SIMPLE, 8);
	apply_type(0x152a328, "RTTIBase[1]");
	set_name(0x152a328, "MissionAssassination::sBases");

	// MissionAssassinationResource
	set_name(0x1528984, "MissionAssassinationResource");
	apply_type(0x1528984, "RTTICompound");
	del_items(0x152a3a8, DELIT_SIMPLE, 8);
	apply_type(0x152a3a8, "RTTIBase[1]");
	set_name(0x152a3a8, "MissionAssassinationResource::sBases");

	// MissionBodyCount
	set_name(0x15289d8, "MissionBodyCount");
	apply_type(0x15289d8, "RTTICompound");
	del_items(0x152a3b0, DELIT_SIMPLE, 8);
	apply_type(0x152a3b0, "RTTIBase[1]");
	set_name(0x152a3b0, "MissionBodyCount::sBases");

	// MissionBodyCountResource
	set_name(0x1528a2c, "MissionBodyCountResource");
	apply_type(0x1528a2c, "RTTICompound");
	del_items(0x152a3e0, DELIT_SIMPLE, 8);
	apply_type(0x152a3e0, "RTTIBase[1]");
	set_name(0x152a3e0, "MissionBodyCountResource::sBases");

	// MissionCampaign
	set_name(0x1528a80, "MissionCampaign");
	apply_type(0x1528a80, "RTTICompound");
	del_items(0x152a3e8, DELIT_SIMPLE, 8);
	apply_type(0x152a3e8, "RTTIBase[1]");
	set_name(0x152a3e8, "MissionCampaign::sBases");

	// MissionCampaignResource
	set_name(0x1528ad4, "MissionCampaignResource");
	apply_type(0x1528ad4, "RTTICompound");
	del_items(0x152a3f0, DELIT_SIMPLE, 8);
	apply_type(0x152a3f0, "RTTIBase[1]");
	set_name(0x152a3f0, "MissionCampaignResource::sBases");
	del_items(0x152a3f8, DELIT_SIMPLE, 84);
	apply_type(0x152a3f8, "RTTIAttr[3]");
	set_name(0x152a3f8, "MissionCampaignResource::sAttrs");

	// MissionCaptureAndHold
	set_name(0x1528b28, "MissionCaptureAndHold");
	apply_type(0x1528b28, "RTTICompound");
	del_items(0x152a44c, DELIT_SIMPLE, 8);
	apply_type(0x152a44c, "RTTIBase[1]");
	set_name(0x152a44c, "MissionCaptureAndHold::sBases");

	// MissionCaptureAndHoldResource
	set_name(0x1528be0, "MissionCaptureAndHoldResource");
	apply_type(0x1528be0, "RTTICompound");
	del_items(0x152a4ac, DELIT_SIMPLE, 8);
	apply_type(0x152a4ac, "RTTIBase[1]");
	set_name(0x152a4ac, "MissionCaptureAndHoldResource::sBases");
	del_items(0x152a4b4, DELIT_SIMPLE, 224);
	apply_type(0x152a4b4, "RTTIAttr[8]");
	set_name(0x152a4b4, "MissionCaptureAndHoldResource::sAttrs");

	// MissionConstants
	set_name(0x1528c34, "MissionConstants");
	apply_type(0x1528c34, "RTTICompound");
	del_items(0x1529b28, DELIT_SIMPLE, 8);
	apply_type(0x1529b28, "RTTIBase[1]");
	set_name(0x1529b28, "MissionConstants::sBases");
	del_items(0x1529b30, DELIT_SIMPLE, 224);
	apply_type(0x1529b30, "RTTIAttr[8]");
	set_name(0x1529b30, "MissionConstants::sAttrs");

	// MissionEvent
	set_name(0x1528c98, "MissionEvent");
	apply_type(0x1528c98, "RTTICompound");
	del_items(0x1529d94, DELIT_SIMPLE, 56);
	apply_type(0x1529d94, "RTTIAttr[2]");
	set_name(0x1529d94, "MissionEvent::sAttrs");

	// MissionHistory
	set_name(0x14fb584, "MissionHistory");
	apply_type(0x14fb584, "RTTICompound");
	del_items(0x14ff954, DELIT_SIMPLE, 8);
	apply_type(0x14ff954, "RTTIBase[1]");
	set_name(0x14ff954, "MissionHistory::sBases");

	// MissionRadioMessage
	set_name(0x14fab7c, "MissionRadioMessage");
	apply_type(0x14fab7c, "RTTICompound");
	del_items(0x14fef5c, DELIT_SIMPLE, 168);
	apply_type(0x14fef5c, "RTTIAttr[6]");
	set_name(0x14fef5c, "MissionRadioMessage::sAttrs");

	// MissionResource
	set_name(0x1528d0c, "MissionResource");
	apply_type(0x1528d0c, "RTTICompound");
	del_items(0x1529dcc, DELIT_SIMPLE, 8);
	apply_type(0x1529dcc, "RTTIBase[1]");
	set_name(0x1529dcc, "MissionResource::sBases");
	del_items(0x1529dd4, DELIT_SIMPLE, 1036);
	apply_type(0x1529dd4, "RTTIAttr[37]");
	set_name(0x1529dd4, "MissionResource::sAttrs");

	// MissionScavengeAndRetrieve
	set_name(0x1529020, "MissionScavengeAndRetrieve");
	apply_type(0x1529020, "RTTICompound");
	del_items(0x152a8c8, DELIT_SIMPLE, 8);
	apply_type(0x152a8c8, "RTTIBase[1]");
	set_name(0x152a8c8, "MissionScavengeAndRetrieve::sBases");

	// MissionScavengeAndRetrieveResource
	set_name(0x1529074, "MissionScavengeAndRetrieveResource");
	apply_type(0x1529074, "RTTICompound");
	del_items(0x152a920, DELIT_SIMPLE, 8);
	apply_type(0x152a920, "RTTIBase[1]");
	set_name(0x152a920, "MissionScavengeAndRetrieveResource::sBases");
	del_items(0x152a928, DELIT_SIMPLE, 476);
	apply_type(0x152a928, "RTTIAttr[17]");
	set_name(0x152a928, "MissionScavengeAndRetrieveResource::sAttrs");

	// MissionSearchAndDestroy
	set_name(0x1528d60, "MissionSearchAndDestroy");
	apply_type(0x1528d60, "RTTICompound");
	del_items(0x152a5b8, DELIT_SIMPLE, 8);
	apply_type(0x152a5b8, "RTTIBase[1]");
	set_name(0x152a5b8, "MissionSearchAndDestroy::sBases");

	// MissionSearchAndDestroyResource
	set_name(0x1528db4, "MissionSearchAndDestroyResource");
	apply_type(0x1528db4, "RTTICompound");
	del_items(0x152a5fc, DELIT_SIMPLE, 8);
	apply_type(0x152a5fc, "RTTIBase[1]");
	set_name(0x152a5fc, "MissionSearchAndDestroyResource::sBases");
	del_items(0x152a604, DELIT_SIMPLE, 252);
	apply_type(0x152a604, "RTTIAttr[9]");
	set_name(0x152a604, "MissionSearchAndDestroyResource::sAttrs");

	// MissionSearchAndRetrieve
	set_name(0x1528e08, "MissionSearchAndRetrieve");
	apply_type(0x1528e08, "RTTICompound");
	del_items(0x152a700, DELIT_SIMPLE, 8);
	apply_type(0x152a700, "RTTIBase[1]");
	set_name(0x152a700, "MissionSearchAndRetrieve::sBases");

	// MissionSearchAndRetrieveResource
	set_name(0x1528e6c, "MissionSearchAndRetrieveResource");
	apply_type(0x1528e6c, "RTTICompound");
	del_items(0x152a744, DELIT_SIMPLE, 8);
	apply_type(0x152a744, "RTTIBase[1]");
	set_name(0x152a744, "MissionSearchAndRetrieveResource::sBases");
	del_items(0x152a74c, DELIT_SIMPLE, 364);
	apply_type(0x152a74c, "RTTIAttr[13]");
	set_name(0x152a74c, "MissionSearchAndRetrieveResource::sAttrs");

	// MissionSettings
	set_name(0x1528ed0, "MissionSettings");
	apply_type(0x1528ed0, "RTTICompound");
	del_items(0x1529c10, DELIT_SIMPLE, 8);
	apply_type(0x1529c10, "RTTIBase[1]");
	set_name(0x1529c10, "MissionSettings::sBases");
	del_items(0x1529c18, DELIT_SIMPLE, 140);
	apply_type(0x1529c18, "RTTIAttr[5]");
	set_name(0x1529c18, "MissionSettings::sAttrs");
	del_items(0x1529ca4, DELIT_SIMPLE, 240);
	apply_type(0x1529ca4, "RTTIFunction[10]");
	set_name(0x1529ca4, "MissionSettings::sFunctions");

	// MissionTest
	set_name(0x1528f24, "MissionTest");
	apply_type(0x1528f24, "RTTICompound");
	del_items(0x152a8b8, DELIT_SIMPLE, 8);
	apply_type(0x152a8b8, "RTTIBase[1]");
	set_name(0x152a8b8, "MissionTest::sBases");

	// MissionTestResource
	set_name(0x1528f78, "MissionTestResource");
	apply_type(0x1528f78, "RTTICompound");
	del_items(0x152a8c0, DELIT_SIMPLE, 8);
	apply_type(0x152a8c0, "RTTIBase[1]");
	set_name(0x152a8c0, "MissionTestResource::sBases");

	// Model
	set_name(0x14e78d8, "Model");
	apply_type(0x14e78d8, "RTTICompound");
	del_items(0x14e8fb0, DELIT_SIMPLE, 16);
	apply_type(0x14e8fb0, "RTTIBase[2]");
	set_name(0x14e8fb0, "Model::sBases");

	// ModelLodBiasEventInstance
	set_name(0x151a80c, "ModelLodBiasEventInstance");
	apply_type(0x151a80c, "RTTICompound");
	del_items(0x151c4dc, DELIT_SIMPLE, 8);
	apply_type(0x151c4dc, "RTTIBase[1]");
	set_name(0x151c4dc, "ModelLodBiasEventInstance::sBases");

	// ModelLodBiasEventResource
	set_name(0x151a7b8, "ModelLodBiasEventResource");
	apply_type(0x151a7b8, "RTTICompound");
	del_items(0x151c448, DELIT_SIMPLE, 8);
	apply_type(0x151c448, "RTTIBase[1]");
	set_name(0x151c448, "ModelLodBiasEventResource::sBases");
	del_items(0x151c450, DELIT_SIMPLE, 140);
	apply_type(0x151c450, "RTTIAttr[5]");
	set_name(0x151c450, "ModelLodBiasEventResource::sAttrs");

	// ModelPartMeshReplacementResource
	set_name(0x14e7d14, "ModelPartMeshReplacementResource");
	apply_type(0x14e7d14, "RTTICompound");
	del_items(0x14e95cc, DELIT_SIMPLE, 8);
	apply_type(0x14e95cc, "RTTIBase[1]");
	set_name(0x14e95cc, "ModelPartMeshReplacementResource::sBases");
	del_items(0x14e95d4, DELIT_SIMPLE, 112);
	apply_type(0x14e95d4, "RTTIAttr[4]");
	set_name(0x14e95d4, "ModelPartMeshReplacementResource::sAttrs");

	// ModelPartResource
	set_name(0x14e7ca0, "ModelPartResource");
	apply_type(0x14e7ca0, "RTTICompound");
	del_items(0x14e951c, DELIT_SIMPLE, 8);
	apply_type(0x14e951c, "RTTIBase[1]");
	set_name(0x14e951c, "ModelPartResource::sBases");
	del_items(0x14e9524, DELIT_SIMPLE, 168);
	apply_type(0x14e9524, "RTTIAttr[6]");
	set_name(0x14e9524, "ModelPartResource::sAttrs");

	// ModelProxy
	set_name(0x14e7b64, "ModelProxy");
	apply_type(0x14e7b64, "RTTICompound");
	del_items(0x14e9678, DELIT_SIMPLE, 8);
	apply_type(0x14e9678, "RTTIBase[1]");
	set_name(0x14e9678, "ModelProxy::sBases");

	// ModelProxyRemapEntry
	set_name(0x14e7bc8, "ModelProxyRemapEntry");
	apply_type(0x14e7bc8, "RTTICompound");
	del_items(0x14e9680, DELIT_SIMPLE, 56);
	apply_type(0x14e9680, "RTTIAttr[2]");
	set_name(0x14e9680, "ModelProxyRemapEntry::sAttrs");

	// ModelProxyResource
	set_name(0x14e7c1c, "ModelProxyResource");
	apply_type(0x14e7c1c, "RTTICompound");
	del_items(0x14e96b8, DELIT_SIMPLE, 8);
	apply_type(0x14e96b8, "RTTIBase[1]");
	set_name(0x14e96b8, "ModelProxyResource::sBases");
	del_items(0x14e96c0, DELIT_SIMPLE, 112);
	apply_type(0x14e96c0, "RTTIAttr[4]");
	set_name(0x14e96c0, "ModelProxyResource::sAttrs");

	// ModelResource
	set_name(0x14e793c, "ModelResource");
	apply_type(0x14e793c, "RTTICompound");
	del_items(0x14e8fc0, DELIT_SIMPLE, 8);
	apply_type(0x14e8fc0, "RTTIBase[1]");
	set_name(0x14e8fc0, "ModelResource::sBases");
	del_items(0x14e8fc8, DELIT_SIMPLE, 140);
	apply_type(0x14e8fc8, "RTTIAttr[5]");
	set_name(0x14e8fc8, "ModelResource::sAttrs");

	// ModifyTorqueRatioAction
	set_name(0x14f9564, "ModifyTorqueRatioAction");
	apply_type(0x14f9564, "RTTICompound");
	del_items(0x14fe174, DELIT_SIMPLE, 8);
	apply_type(0x14fe174, "RTTIBase[1]");
	set_name(0x14fe174, "ModifyTorqueRatioAction::sBases");
	del_items(0x14fe17c, DELIT_SIMPLE, 112);
	apply_type(0x14fe17c, "RTTIAttr[4]");
	set_name(0x14fe17c, "ModifyTorqueRatioAction::sAttrs");

	// Module
	set_name(0x14ead64, "Module");
	apply_type(0x14ead64, "RTTICompound");
	del_items(0x14eb270, DELIT_SIMPLE, 8);
	apply_type(0x14eb270, "RTTIBase[1]");
	set_name(0x14eb270, "Module::sBases");
	del_items(0x14eb278, DELIT_SIMPLE, 120);
	apply_type(0x14eb278, "RTTIFunction[5]");
	set_name(0x14eb278, "Module::sFunctions");

	// MortarStrike
	set_name(0x1526018, "MortarStrike");
	apply_type(0x1526018, "RTTICompound");
	del_items(0x1527334, DELIT_SIMPLE, 8);
	apply_type(0x1527334, "RTTIBase[1]");
	set_name(0x1527334, "MortarStrike::sBases");

	// MortarStrikeRep
	set_name(0x152606c, "MortarStrikeRep");
	apply_type(0x152606c, "RTTICompound");
	del_items(0x152733c, DELIT_SIMPLE, 8);
	apply_type(0x152733c, "RTTIBase[1]");
	set_name(0x152733c, "MortarStrikeRep::sBases");

	// MortarStrikeResource
	set_name(0x15260c0, "MortarStrikeResource");
	apply_type(0x15260c0, "RTTICompound");
	del_items(0x1527214, DELIT_SIMPLE, 8);
	apply_type(0x1527214, "RTTIBase[1]");
	set_name(0x1527214, "MortarStrikeResource::sBases");
	del_items(0x152721c, DELIT_SIMPLE, 280);
	apply_type(0x152721c, "RTTIAttr[10]");
	set_name(0x152721c, "MortarStrikeResource::sAttrs");

	// MotionControllerDeadzone
	set_name(0x153ae20, "MotionControllerDeadzone");
	apply_type(0x153ae20, "RTTICompound");
	del_items(0x153b7dc, DELIT_SIMPLE, 8);
	apply_type(0x153b7dc, "RTTIBase[1]");
	set_name(0x153b7dc, "MotionControllerDeadzone::sBases");
	del_items(0x153b7e4, DELIT_SIMPLE, 532);
	apply_type(0x153b7e4, "RTTIAttr[19]");
	set_name(0x153b7e4, "MotionControllerDeadzone::sAttrs");

	// MotionControllerDifficultySettingsResource
	set_name(0x14ea91c, "MotionControllerDifficultySettingsResource");
	apply_type(0x14ea91c, "RTTICompound");
	del_items(0x14ed338, DELIT_SIMPLE, 8);
	apply_type(0x14ed338, "RTTIBase[1]");
	set_name(0x14ed338, "MotionControllerDifficultySettingsResource::sBases");
	del_items(0x14ed340, DELIT_SIMPLE, 56);
	apply_type(0x14ed340, "RTTIAttr[2]");
	set_name(0x14ed340, "MotionControllerDifficultySettingsResource::sAttrs");

	// MotionSensorFunctionMapping
	set_name(0x14eac38, "MotionSensorFunctionMapping");
	apply_type(0x14eac38, "RTTICompound");
	del_items(0x14ed8ec, DELIT_SIMPLE, 56);
	apply_type(0x14ed8ec, "RTTIAttr[2]");
	set_name(0x14ed8ec, "MotionSensorFunctionMapping::sAttrs");

	// MountEventInstance
	set_name(0x151cde8, "MountEventInstance");
	apply_type(0x151cde8, "RTTICompound");
	del_items(0x151ee20, DELIT_SIMPLE, 8);
	apply_type(0x151ee20, "RTTIBase[1]");
	set_name(0x151ee20, "MountEventInstance::sBases");

	// MountEventResource
	set_name(0x151cd94, "MountEventResource");
	apply_type(0x151cd94, "RTTICompound");
	del_items(0x151edc4, DELIT_SIMPLE, 8);
	apply_type(0x151edc4, "RTTIBase[1]");
	set_name(0x151edc4, "MountEventResource::sBases");
	del_items(0x151edcc, DELIT_SIMPLE, 84);
	apply_type(0x151edcc, "RTTIAttr[3]");
	set_name(0x151edcc, "MountEventResource::sAttrs");

	// MountPlayAnimationObjectEventInstance
	set_name(0x151ce90, "MountPlayAnimationObjectEventInstance");
	apply_type(0x151ce90, "RTTICompound");
	del_items(0x151eed8, DELIT_SIMPLE, 8);
	apply_type(0x151eed8, "RTTIBase[1]");
	set_name(0x151eed8, "MountPlayAnimationObjectEventInstance::sBases");

	// MountPlayAnimationObjectEventResource
	set_name(0x151ce3c, "MountPlayAnimationObjectEventResource");
	apply_type(0x151ce3c, "RTTICompound");
	del_items(0x151ee28, DELIT_SIMPLE, 8);
	apply_type(0x151ee28, "RTTIBase[1]");
	set_name(0x151ee28, "MountPlayAnimationObjectEventResource::sBases");
	del_items(0x151ee30, DELIT_SIMPLE, 168);
	apply_type(0x151ee30, "RTTIAttr[6]");
	set_name(0x151ee30, "MountPlayAnimationObjectEventResource::sAttrs");

	// MountableEntity
	set_name(0x1505304, "MountableEntity");
	apply_type(0x1505304, "RTTICompound");
	del_items(0x150624c, DELIT_SIMPLE, 16);
	apply_type(0x150624c, "RTTIBase[2]");
	set_name(0x150624c, "MountableEntity::sBases");
	del_items(0x150625c, DELIT_SIMPLE, 120);
	apply_type(0x150625c, "RTTIFunction[5]");
	set_name(0x150625c, "MountableEntity::sFunctions");

	// MountableEntityController
	set_name(0x1505410, "MountableEntityController");
	apply_type(0x1505410, "RTTICompound");
	del_items(0x15060c4, DELIT_SIMPLE, 8);
	apply_type(0x15060c4, "RTTIBase[1]");
	set_name(0x15060c4, "MountableEntityController::sBases");

	// MountableEntityResource
	set_name(0x15053bc, "MountableEntityResource");
	apply_type(0x15053bc, "RTTICompound");
	del_items(0x1506104, DELIT_SIMPLE, 8);
	apply_type(0x1506104, "RTTIBase[1]");
	set_name(0x1506104, "MountableEntityResource::sBases");
	del_items(0x150610c, DELIT_SIMPLE, 308);
	apply_type(0x150610c, "RTTIAttr[11]");
	set_name(0x150610c, "MountableEntityResource::sAttrs");
	del_items(0x1506240, DELIT_SIMPLE, 12);
	apply_type(0x1506240, "RTTIMessageHandler[1]");
	set_name(0x1506240, "MountableEntityResource::sMessageHandlers");

	// MountedGun
	set_name(0x1505464, "MountedGun");
	apply_type(0x1505464, "RTTICompound");
	del_items(0x15071b8, DELIT_SIMPLE, 16);
	apply_type(0x15071b8, "RTTIBase[2]");
	set_name(0x15071b8, "MountedGun::sBases");
	del_items(0x15071c8, DELIT_SIMPLE, 84);
	apply_type(0x15071c8, "RTTIAttr[3]");
	set_name(0x15071c8, "MountedGun::sAttrs");
	del_items(0x150721c, DELIT_SIMPLE, 312);
	apply_type(0x150721c, "RTTIFunction[13]");
	set_name(0x150721c, "MountedGun::sFunctions");

	// MountedGunAiController
	set_name(0x15054b8, "MountedGunAiController");
	apply_type(0x15054b8, "RTTICompound");
	del_items(0x150735c, DELIT_SIMPLE, 8);
	apply_type(0x150735c, "RTTIBase[1]");
	set_name(0x150735c, "MountedGunAiController::sBases");

	// MountedGunController
	set_name(0x150550c, "MountedGunController");
	apply_type(0x150550c, "RTTICompound");
	del_items(0x1506eec, DELIT_SIMPLE, 8);
	apply_type(0x1506eec, "RTTIBase[1]");
	set_name(0x1506eec, "MountedGunController::sBases");

	// MountedGunJoystickController
	set_name(0x1505560, "MountedGunJoystickController");
	apply_type(0x1505560, "RTTICompound");
	del_items(0x1507364, DELIT_SIMPLE, 8);
	apply_type(0x1507364, "RTTIBase[1]");
	set_name(0x1507364, "MountedGunJoystickController::sBases");

	// MountedGunRep
	set_name(0x15055b4, "MountedGunRep");
	apply_type(0x15055b4, "RTTICompound");
	del_items(0x1507354, DELIT_SIMPLE, 8);
	apply_type(0x1507354, "RTTIBase[1]");
	set_name(0x1507354, "MountedGunRep::sBases");

	// MountedGunResource
	set_name(0x150566c, "MountedGunResource");
	apply_type(0x150566c, "RTTICompound");
	del_items(0x1506b30, DELIT_SIMPLE, 8);
	apply_type(0x1506b30, "RTTIBase[1]");
	set_name(0x1506b30, "MountedGunResource::sBases");
	del_items(0x1506b38, DELIT_SIMPLE, 924);
	apply_type(0x1506b38, "RTTIAttr[33]");
	set_name(0x1506b38, "MountedGunResource::sAttrs");
	del_items(0x1506ed4, DELIT_SIMPLE, 24);
	apply_type(0x1506ed4, "RTTIMessageHandler[2]");
	set_name(0x1506ed4, "MountedGunResource::sMessageHandlers");

	// MountedGunWeaponSettings
	set_name(0x15056d0, "MountedGunWeaponSettings");
	apply_type(0x15056d0, "RTTICompound");
	del_items(0x1506ef4, DELIT_SIMPLE, 8);
	apply_type(0x1506ef4, "RTTIBase[1]");
	set_name(0x1506ef4, "MountedGunWeaponSettings::sBases");
	del_items(0x1506efc, DELIT_SIMPLE, 560);
	apply_type(0x1506efc, "RTTIAttr[20]");
	set_name(0x1506efc, "MountedGunWeaponSettings::sAttrs");

	// MountedGunWeaponSettingsModelPart
	set_name(0x1505734, "MountedGunWeaponSettingsModelPart");
	apply_type(0x1505734, "RTTICompound");
	del_items(0x150712c, DELIT_SIMPLE, 140);
	apply_type(0x150712c, "RTTIAttr[5]");
	set_name(0x150712c, "MountedGunWeaponSettingsModelPart::sAttrs");

	// MoveThroughEventInstance
	set_name(0x151cf9c, "MoveThroughEventInstance");
	apply_type(0x151cf9c, "RTTICompound");
	del_items(0x151ef74, DELIT_SIMPLE, 8);
	apply_type(0x151ef74, "RTTIBase[1]");
	set_name(0x151ef74, "MoveThroughEventInstance::sBases");

	// MoveThroughEventResource
	set_name(0x151cf48, "MoveThroughEventResource");
	apply_type(0x151cf48, "RTTICompound");
	del_items(0x151ef34, DELIT_SIMPLE, 8);
	apply_type(0x151ef34, "RTTIBase[1]");
	set_name(0x151ef34, "MoveThroughEventResource::sBases");
	del_items(0x151ef3c, DELIT_SIMPLE, 56);
	apply_type(0x151ef3c, "RTTIAttr[2]");
	set_name(0x151ef3c, "MoveThroughEventResource::sAttrs");

	// MoveThroughSubGoalTarget
	set_name(0x151cef4, "MoveThroughSubGoalTarget");
	apply_type(0x151cef4, "RTTICompound");
	del_items(0x151eee0, DELIT_SIMPLE, 84);
	apply_type(0x151eee0, "RTTIAttr[3]");
	set_name(0x151eee0, "MoveThroughSubGoalTarget::sAttrs");

	// MoveToEventInstance
	set_name(0x151d044, "MoveToEventInstance");
	apply_type(0x151d044, "RTTICompound");
	del_items(0x151eb30, DELIT_SIMPLE, 8);
	apply_type(0x151eb30, "RTTIBase[1]");
	set_name(0x151eb30, "MoveToEventInstance::sBases");

	// MoveToEventResource
	set_name(0x151cff0, "MoveToEventResource");
	apply_type(0x151cff0, "RTTICompound");
	del_items(0x151ea64, DELIT_SIMPLE, 8);
	apply_type(0x151ea64, "RTTIBase[1]");
	set_name(0x151ea64, "MoveToEventResource::sBases");
	del_items(0x151ea6c, DELIT_SIMPLE, 196);
	apply_type(0x151ea6c, "RTTIAttr[7]");
	set_name(0x151ea6c, "MoveToEventResource::sAttrs");

	// MovementIKResource
	set_name(0x15429b0, "MovementIKResource");
	apply_type(0x15429b0, "RTTICompound");
	del_items(0x1542dcc, DELIT_SIMPLE, 8);
	apply_type(0x1542dcc, "RTTIBase[1]");
	set_name(0x1542dcc, "MovementIKResource::sBases");
	del_items(0x1542dd4, DELIT_SIMPLE, 896);
	apply_type(0x1542dd4, "RTTIAttr[32]");
	set_name(0x1542dd4, "MovementIKResource::sAttrs");

	// MovementRibbonResource
	set_name(0x1536e18, "MovementRibbonResource");
	apply_type(0x1536e18, "RTTICompound");
	del_items(0x1537b30, DELIT_SIMPLE, 8);
	apply_type(0x1537b30, "RTTIBase[1]");
	set_name(0x1537b30, "MovementRibbonResource::sBases");
	del_items(0x1537b38, DELIT_SIMPLE, 56);
	apply_type(0x1537b38, "RTTIAttr[2]");
	set_name(0x1537b38, "MovementRibbonResource::sAttrs");

	// Mover
	set_name(0x14e7d78, "Mover");
	apply_type(0x14e7d78, "RTTICompound");
	del_items(0x14e9730, DELIT_SIMPLE, 16);
	apply_type(0x14e9730, "RTTIBase[2]");
	set_name(0x14e9730, "Mover::sBases");

	// MoverResource
	set_name(0x14e7ddc, "MoverResource");
	apply_type(0x14e7ddc, "RTTICompound");
	del_items(0x14e9740, DELIT_SIMPLE, 8);
	apply_type(0x14e9740, "RTTIBase[1]");
	set_name(0x14e9740, "MoverResource::sBases");

	// MovieListResource
	set_name(0x14efc74, "MovieListResource");
	apply_type(0x14efc74, "RTTICompound");
	del_items(0x14f3374, DELIT_SIMPLE, 8);
	apply_type(0x14f3374, "RTTIBase[1]");
	set_name(0x14f3374, "MovieListResource::sBases");
	del_items(0x14f337c, DELIT_SIMPLE, 56);
	apply_type(0x14f337c, "RTTIAttr[2]");
	set_name(0x14f337c, "MovieListResource::sAttrs");

	// MovieResource
	set_name(0x14efc20, "MovieResource");
	apply_type(0x14efc20, "RTTICompound");
	del_items(0x14f313c, DELIT_SIMPLE, 8);
	apply_type(0x14f313c, "RTTIBase[1]");
	set_name(0x14f313c, "MovieResource::sBases");
	del_items(0x14f3144, DELIT_SIMPLE, 560);
	apply_type(0x14f3144, "RTTIAttr[20]");
	set_name(0x14f3144, "MovieResource::sAttrs");

	// MovieSkipLocation
	set_name(0x14efbac, "MovieSkipLocation");
	apply_type(0x14efbac, "RTTICompound");
	del_items(0x14f3104, DELIT_SIMPLE, 56);
	apply_type(0x14f3104, "RTTIAttr[2]");
	set_name(0x14f3104, "MovieSkipLocation::sAttrs");

	// MovieSubtitle
	set_name(0x153e12c, "MovieSubtitle");
	apply_type(0x153e12c, "RTTICompound");
	del_items(0x153ff5c, DELIT_SIMPLE, 8);
	apply_type(0x153ff5c, "RTTIBase[1]");
	set_name(0x153ff5c, "MovieSubtitle::sBases");
	del_items(0x153ff64, DELIT_SIMPLE, 84);
	apply_type(0x153ff64, "RTTIAttr[3]");
	set_name(0x153ff64, "MovieSubtitle::sAttrs");

	// MovieSubtitleResource
	set_name(0x153e0c8, "MovieSubtitleResource");
	apply_type(0x153e0c8, "RTTICompound");
	del_items(0x153ffb8, DELIT_SIMPLE, 8);
	apply_type(0x153ffb8, "RTTIBase[1]");
	set_name(0x153ffb8, "MovieSubtitleResource::sBases");
	del_items(0x153ffc0, DELIT_SIMPLE, 56);
	apply_type(0x153ffc0, "RTTIAttr[2]");
	set_name(0x153ffc0, "MovieSubtitleResource::sAttrs");
	del_items(0x153fff8, DELIT_SIMPLE, 12);
	apply_type(0x153fff8, "RTTIMessageHandler[1]");
	set_name(0x153fff8, "MovieSubtitleResource::sMessageHandlers");

	// MovieTag
	set_name(0x153e430, "MovieTag");
	apply_type(0x153e430, "RTTICompound");
	del_items(0x154040c, DELIT_SIMPLE, 8);
	apply_type(0x154040c, "RTTIBase[1]");
	set_name(0x154040c, "MovieTag::sBases");
	del_items(0x1540414, DELIT_SIMPLE, 216);
	apply_type(0x1540414, "RTTIFunction[9]");
	set_name(0x1540414, "MovieTag::sFunctions");

	// MovieWidget
	set_name(0x153e628, "MovieWidget");
	apply_type(0x153e628, "RTTICompound");
	del_items(0x1540610, DELIT_SIMPLE, 8);
	apply_type(0x1540610, "RTTIBase[1]");
	set_name(0x1540610, "MovieWidget::sBases");

	// MsgAbortAnimState
	set_name(0x14ba6cc, "MsgAbortAnimState");
	apply_type(0x14ba6cc, "RTTICompound");
	del_items(0x14bb62c, DELIT_SIMPLE, 8);
	apply_type(0x14bb62c, "RTTIBase[1]");
	set_name(0x14bb62c, "MsgAbortAnimState::sBases");

	// MsgActiveViewportsChanged
	set_name(0x14e228c, "MsgActiveViewportsChanged");
	apply_type(0x14e228c, "RTTICompound");
	del_items(0x14e4eb0, DELIT_SIMPLE, 8);
	apply_type(0x14e4eb0, "RTTIBase[1]");
	set_name(0x14e4eb0, "MsgActiveViewportsChanged::sBases");

	// MsgBase
	set_name(0x14bc738, "MsgBase");
	apply_type(0x14bc738, "RTTICompound");
	del_items(0x14bcc64, DELIT_SIMPLE, 8);
	apply_type(0x14bcc64, "RTTIBase[1]");
	set_name(0x14bcc64, "MsgBase::sBases");

	// MsgEnterAnimState
	set_name(0x14ba624, "MsgEnterAnimState");
	apply_type(0x14ba624, "RTTICompound");
	del_items(0x14bb61c, DELIT_SIMPLE, 8);
	apply_type(0x14bb61c, "RTTIBase[1]");
	set_name(0x14bb61c, "MsgEnterAnimState::sBases");

	// MsgEvent
	set_name(0x14bc8dc, "MsgEvent");
	apply_type(0x14bc8dc, "RTTICompound");
	del_items(0x14bcc8c, DELIT_SIMPLE, 8);
	apply_type(0x14bcc8c, "RTTIBase[1]");
	set_name(0x14bcc8c, "MsgEvent::sBases");

	// MsgGetAnimationInstance
	set_name(0x14ba720, "MsgGetAnimationInstance");
	apply_type(0x14ba720, "RTTICompound");
	del_items(0x14bb604, DELIT_SIMPLE, 8);
	apply_type(0x14bb604, "RTTIBase[1]");
	set_name(0x14bb604, "MsgGetAnimationInstance::sBases");

	// MsgInit
	set_name(0x14bc78c, "MsgInit");
	apply_type(0x14bc78c, "RTTICompound");
	del_items(0x14bcc6c, DELIT_SIMPLE, 8);
	apply_type(0x14bcc6c, "RTTIBase[1]");
	set_name(0x14bcc6c, "MsgInit::sBases");

	// MsgInput
	set_name(0x14bc930, "MsgInput");
	apply_type(0x14bc930, "RTTICompound");
	del_items(0x14bcce8, DELIT_SIMPLE, 8);
	apply_type(0x14bcce8, "RTTIBase[1]");
	set_name(0x14bcce8, "MsgInput::sBases");

	// MsgJoystick
	set_name(0x14bc984, "MsgJoystick");
	apply_type(0x14bc984, "RTTICompound");
	del_items(0x14bccf0, DELIT_SIMPLE, 8);
	apply_type(0x14bccf0, "RTTIBase[1]");
	set_name(0x14bccf0, "MsgJoystick::sBases");

	// MsgLeaveAnimState
	set_name(0x14ba678, "MsgLeaveAnimState");
	apply_type(0x14ba678, "RTTICompound");
	del_items(0x14bb624, DELIT_SIMPLE, 8);
	apply_type(0x14bb624, "RTTIBase[1]");
	set_name(0x14bb624, "MsgLeaveAnimState::sBases");

	// MsgPostLoad
	set_name(0x14bc888, "MsgPostLoad");
	apply_type(0x14bc888, "RTTICompound");
	del_items(0x14bcc84, DELIT_SIMPLE, 8);
	apply_type(0x14bcc84, "RTTIBase[1]");
	set_name(0x14bcc84, "MsgPostLoad::sBases");

	// MsgPostStreamingAction
	set_name(0x14e0c00, "MsgPostStreamingAction");
	apply_type(0x14e0c00, "RTTICompound");
	del_items(0x14e0d2c, DELIT_SIMPLE, 8);
	apply_type(0x14e0d2c, "RTTIBase[1]");
	set_name(0x14e0d2c, "MsgPostStreamingAction::sBases");

	// MsgPreLoad
	set_name(0x14bc834, "MsgPreLoad");
	apply_type(0x14bc834, "RTTICompound");
	del_items(0x14bcc7c, DELIT_SIMPLE, 8);
	apply_type(0x14bcc7c, "RTTIBase[1]");
	set_name(0x14bcc7c, "MsgPreLoad::sBases");

	// MsgReadBinary
	set_name(0x14b95f4, "MsgReadBinary");
	apply_type(0x14b95f4, "RTTICompound");
	del_items(0x14b96e0, DELIT_SIMPLE, 8);
	apply_type(0x14b96e0, "RTTIBase[1]");
	set_name(0x14b96e0, "MsgReadBinary::sBases");

	// MsgReadText
	set_name(0x14b9680, "MsgReadText");
	apply_type(0x14b9680, "RTTICompound");
	del_items(0x14b96e8, DELIT_SIMPLE, 8);
	apply_type(0x14b96e8, "RTTIBase[1]");
	set_name(0x14b96e8, "MsgReadText::sBases");

	// MsgStartAnimation
	set_name(0x14ba4d4, "MsgStartAnimation");
	apply_type(0x14ba4d4, "RTTICompound");
	del_items(0x14bb5f4, DELIT_SIMPLE, 8);
	apply_type(0x14bb5f4, "RTTIBase[1]");
	set_name(0x14bb5f4, "MsgStartAnimation::sBases");

	// MsgStartSound
	set_name(0x14ba57c, "MsgStartSound");
	apply_type(0x14ba57c, "RTTICompound");
	del_items(0x14bb60c, DELIT_SIMPLE, 8);
	apply_type(0x14bb60c, "RTTIBase[1]");
	set_name(0x14bb60c, "MsgStartSound::sBases");

	// MsgStopAnimation
	set_name(0x14ba528, "MsgStopAnimation");
	apply_type(0x14ba528, "RTTICompound");
	del_items(0x14bb5fc, DELIT_SIMPLE, 8);
	apply_type(0x14bb5fc, "RTTIBase[1]");
	set_name(0x14bb5fc, "MsgStopAnimation::sBases");

	// MsgUpdate
	set_name(0x14bc7e0, "MsgUpdate");
	apply_type(0x14bc7e0, "RTTICompound");
	del_items(0x14bcc74, DELIT_SIMPLE, 8);
	apply_type(0x14bcc74, "RTTIBase[1]");
	set_name(0x14bcc74, "MsgUpdate::sBases");

	// MultiAction
	set_name(0x14e2e68, "MultiAction");
	apply_type(0x14e2e68, "RTTICompound");
	del_items(0x14e6258, DELIT_SIMPLE, 8);
	apply_type(0x14e6258, "RTTIBase[1]");
	set_name(0x14e6258, "MultiAction::sBases");
	del_items(0x14e6260, DELIT_SIMPLE, 56);
	apply_type(0x14e6260, "RTTIAttr[2]");
	set_name(0x14e6260, "MultiAction::sAttrs");

	// MultiBlendedMeshInstance
	set_name(0x14bf1b0, "MultiBlendedMeshInstance");
	apply_type(0x14bf1b0, "RTTICompound");
	del_items(0x14bf9b8, DELIT_SIMPLE, 8);
	apply_type(0x14bf9b8, "RTTIBase[1]");
	set_name(0x14bf9b8, "MultiBlendedMeshInstance::sBases");
	del_items(0x14bf9c0, DELIT_SIMPLE, 112);
	apply_type(0x14bf9c0, "RTTIAttr[4]");
	set_name(0x14bf9c0, "MultiBlendedMeshInstance::sAttrs");
	del_items(0x14bfa30, DELIT_SIMPLE, 36);
	apply_type(0x14bfa30, "RTTIMessageHandler[3]");
	set_name(0x14bfa30, "MultiBlendedMeshInstance::sMessageHandlers");

	// MultiBlendedMeshResource
	set_name(0x14bf15c, "MultiBlendedMeshResource");
	apply_type(0x14bf15c, "RTTICompound");
	del_items(0x14bf96c, DELIT_SIMPLE, 8);
	apply_type(0x14bf96c, "RTTIBase[1]");
	set_name(0x14bf96c, "MultiBlendedMeshResource::sBases");
	del_items(0x14bf974, DELIT_SIMPLE, 56);
	apply_type(0x14bf974, "RTTIAttr[2]");
	set_name(0x14bf974, "MultiBlendedMeshResource::sAttrs");
	del_items(0x14bf9ac, DELIT_SIMPLE, 12);
	apply_type(0x14bf9ac, "RTTIMessageHandler[1]");
	set_name(0x14bf9ac, "MultiBlendedMeshResource::sMessageHandlers");

	// MultiMeshResource
	set_name(0x14bed50, "MultiMeshResource");
	apply_type(0x14bed50, "RTTICompound");
	del_items(0x14bf394, DELIT_SIMPLE, 8);
	apply_type(0x14bf394, "RTTIBase[1]");
	set_name(0x14bf394, "MultiMeshResource::sBases");
	del_items(0x14bf39c, DELIT_SIMPLE, 56);
	apply_type(0x14bf39c, "RTTIAttr[2]");
	set_name(0x14bf39c, "MultiMeshResource::sAttrs");

	// MultiMeshResourcePart
	set_name(0x14becfc, "MultiMeshResourcePart");
	apply_type(0x14becfc, "RTTICompound");
	del_items(0x14bf35c, DELIT_SIMPLE, 56);
	apply_type(0x14bf35c, "RTTIAttr[2]");
	set_name(0x14bf35c, "MultiMeshResourcePart::sAttrs");

	// MusicPresetEventInstance
	set_name(0x151d0ec, "MusicPresetEventInstance");
	apply_type(0x151d0ec, "RTTICompound");
	del_items(0x151efbc, DELIT_SIMPLE, 8);
	apply_type(0x151efbc, "RTTIBase[1]");
	set_name(0x151efbc, "MusicPresetEventInstance::sBases");

	// MusicPresetEventResource
	set_name(0x151d098, "MusicPresetEventResource");
	apply_type(0x151d098, "RTTICompound");
	del_items(0x151ef7c, DELIT_SIMPLE, 8);
	apply_type(0x151ef7c, "RTTIBase[1]");
	set_name(0x151ef7c, "MusicPresetEventResource::sBases");
	del_items(0x151ef84, DELIT_SIMPLE, 56);
	apply_type(0x151ef84, "RTTIAttr[2]");
	set_name(0x151ef84, "MusicPresetEventResource::sAttrs");

	// MusicResource
	set_name(0x14ddbf4, "MusicResource");
	apply_type(0x14ddbf4, "RTTICompound");
	del_items(0x14deb94, DELIT_SIMPLE, 8);
	apply_type(0x14deb94, "RTTIBase[1]");
	set_name(0x14deb94, "MusicResource::sBases");
	del_items(0x14deb9c, DELIT_SIMPLE, 56);
	apply_type(0x14deb9c, "RTTIAttr[2]");
	set_name(0x14deb9c, "MusicResource::sAttrs");
	del_items(0x14debd4, DELIT_SIMPLE, 36);
	apply_type(0x14debd4, "RTTIMessageHandler[3]");
	set_name(0x14debd4, "MusicResource::sMessageHandlers");

	// MusicSystem
	set_name(0x14de0d8, "MusicSystem");
	apply_type(0x14de0d8, "RTTICompound");
	del_items(0x14debf8, DELIT_SIMPLE, 8);
	apply_type(0x14debf8, "RTTIBase[1]");
	set_name(0x14debf8, "MusicSystem::sBases");
	del_items(0x14dec00, DELIT_SIMPLE, 144);
	apply_type(0x14dec00, "RTTIFunction[6]");
	set_name(0x14dec00, "MusicSystem::sFunctions");

	// NOSREEInteractiveEntityScriptEnable
	set_name(0x152c4a4, "NOSREEInteractiveEntityScriptEnable");
	apply_type(0x152c4a4, "RTTICompound");
	del_items(0x152d28c, DELIT_SIMPLE, 8);
	apply_type(0x152d28c, "RTTIBase[1]");
	set_name(0x152d28c, "NOSREEInteractiveEntityScriptEnable::sBases");

	// NOSREEMountableEntityScriptMount
	set_name(0x152c4f8, "NOSREEMountableEntityScriptMount");
	apply_type(0x152c4f8, "RTTICompound");
	del_items(0x152d294, DELIT_SIMPLE, 8);
	apply_type(0x152d294, "RTTIBase[1]");
	set_name(0x152d294, "NOSREEMountableEntityScriptMount::sBases");

	// NOSREESwitchScriptSwitchOn
	set_name(0x152c54c, "NOSREESwitchScriptSwitchOn");
	apply_type(0x152c54c, "RTTICompound");
	del_items(0x152d29c, DELIT_SIMPLE, 8);
	apply_type(0x152d29c, "RTTIBase[1]");
	set_name(0x152d29c, "NOSREESwitchScriptSwitchOn::sBases");

	// NamedMoveCurve
	set_name(0x14eaaa8, "NamedMoveCurve");
	apply_type(0x14eaaa8, "RTTICompound");
	del_items(0x14ed4bc, DELIT_SIMPLE, 56);
	apply_type(0x14ed4bc, "RTTIAttr[2]");
	set_name(0x14ed4bc, "NamedMoveCurve::sAttrs");

	// Net
	set_name(0x14c34c8, "Net");
	apply_type(0x14c34c8, "RTTICompound");
	del_items(0x14c3d90, DELIT_SIMPLE, 8);
	apply_type(0x14c3d90, "RTTIBase[1]");
	set_name(0x14c3d90, "Net::sBases");

	// NetATAC
	set_name(0x152c1b0, "NetATAC");
	apply_type(0x152c1b0, "RTTICompound");
	del_items(0x152d068, DELIT_SIMPLE, 8);
	apply_type(0x152d068, "RTTIBase[1]");
	set_name(0x152d068, "NetATAC::sBases");

	// NetAirSupportGrenade
	set_name(0x152d8e4, "NetAirSupportGrenade");
	apply_type(0x152d8e4, "RTTICompound");
	del_items(0x152e7e0, DELIT_SIMPLE, 8);
	apply_type(0x152e7e0, "RTTIBase[1]");
	set_name(0x152e7e0, "NetAirSupportGrenade::sBases");

	// NetAirVehicle
	set_name(0x152c204, "NetAirVehicle");
	apply_type(0x152c204, "RTTICompound");
	del_items(0x152d038, DELIT_SIMPLE, 8);
	apply_type(0x152d038, "RTTIBase[1]");
	set_name(0x152d038, "NetAirVehicle::sBases");

	// NetAttachableUseLocation
	set_name(0x152c258, "NetAttachableUseLocation");
	apply_type(0x152c258, "RTTICompound");
	del_items(0x152d0fc, DELIT_SIMPLE, 8);
	apply_type(0x152d0fc, "RTTIBase[1]");
	set_name(0x152d0fc, "NetAttachableUseLocation::sBases");

	// NetBuddyInvitationList
	set_name(0x14c351c, "NetBuddyInvitationList");
	apply_type(0x14c351c, "RTTICompound");
	del_items(0x14c3d28, DELIT_SIMPLE, 8);
	apply_type(0x14c3d28, "RTTIBase[1]");
	set_name(0x14c3d28, "NetBuddyInvitationList::sBases");

	// NetBuddyList
	set_name(0x14c3570, "NetBuddyList");
	apply_type(0x14c3570, "RTTICompound");
	del_items(0x14c3d80, DELIT_SIMPLE, 8);
	apply_type(0x14c3d80, "RTTIBase[1]");
	set_name(0x14c3d80, "NetBuddyList::sBases");

	// NetBuddyListNp
	set_name(0x14c40ec, "NetBuddyListNp");
	apply_type(0x14c40ec, "RTTICompound");
	del_items(0x14c41dc, DELIT_SIMPLE, 8);
	apply_type(0x14c41dc, "RTTIBase[1]");
	set_name(0x14c41dc, "NetBuddyListNp::sBases");

	// NetCaptureAndHoldArea
	set_name(0x152c2ac, "NetCaptureAndHoldArea");
	apply_type(0x152c2ac, "RTTICompound");
	del_items(0x152d104, DELIT_SIMPLE, 8);
	apply_type(0x152d104, "RTTIBase[1]");
	set_name(0x152d104, "NetCaptureAndHoldArea::sBases");

	// NetClanManager
	set_name(0x152e1dc, "NetClanManager");
	apply_type(0x152e1dc, "RTTICompound");
	del_items(0x152fe4c, DELIT_SIMPLE, 8);
	apply_type(0x152fe4c, "RTTIBase[1]");
	set_name(0x152fe4c, "NetClanManager::sBases");
	del_items(0x152fe54, DELIT_SIMPLE, 72);
	apply_type(0x152fe54, "RTTIFunction[3]");
	set_name(0x152fe54, "NetClanManager::sFunctions");

	// NetClanMemberList
	set_name(0x14c35c4, "NetClanMemberList");
	apply_type(0x14c35c4, "RTTICompound");
	del_items(0x14c3d88, DELIT_SIMPLE, 8);
	apply_type(0x14c3d88, "RTTIBase[1]");
	set_name(0x14c3d88, "NetClanMemberList::sBases");

	// NetControlledEntity
	set_name(0x152c300, "NetControlledEntity");
	apply_type(0x152c300, "RTTICompound");
	del_items(0x152cea4, DELIT_SIMPLE, 8);
	apply_type(0x152cea4, "RTTIBase[1]");
	set_name(0x152cea4, "NetControlledEntity::sBases");

	// NetControlledVehicle
	set_name(0x152c354, "NetControlledVehicle");
	apply_type(0x152c354, "RTTICompound");
	del_items(0x152cfb8, DELIT_SIMPLE, 8);
	apply_type(0x152cfb8, "RTTIBase[1]");
	set_name(0x152cfb8, "NetControlledVehicle::sBases");

	// NetCritter
	set_name(0x152c3a8, "NetCritter");
	apply_type(0x152c3a8, "RTTICompound");
	del_items(0x152d1d4, DELIT_SIMPLE, 8);
	apply_type(0x152d1d4, "RTTIBase[1]");
	set_name(0x152d1d4, "NetCritter::sBases");

	// NetDoor
	set_name(0x152c3fc, "NetDoor");
	apply_type(0x152c3fc, "RTTICompound");
	del_items(0x152d240, DELIT_SIMPLE, 8);
	apply_type(0x152d240, "RTTIBase[1]");
	set_name(0x152d240, "NetDoor::sBases");

	// NetEMPBlast
	set_name(0x152c5a0, "NetEMPBlast");
	apply_type(0x152c5a0, "RTTICompound");
	del_items(0x152d2f4, DELIT_SIMPLE, 8);
	apply_type(0x152d2f4, "RTTIBase[1]");
	set_name(0x152d2f4, "NetEMPBlast::sBases");

	// NetEffectEntity
	set_name(0x152c450, "NetEffectEntity");
	apply_type(0x152c450, "RTTICompound");
	del_items(0x152d284, DELIT_SIMPLE, 8);
	apply_type(0x152d284, "RTTIBase[1]");
	set_name(0x152d284, "NetEffectEntity::sBases");

	// NetElectricityGrenade
	set_name(0x153cb50, "NetElectricityGrenade");
	apply_type(0x153cb50, "RTTICompound");
	del_items(0x153e068, DELIT_SIMPLE, 8);
	apply_type(0x153e068, "RTTIBase[1]");
	set_name(0x153e068, "NetElectricityGrenade::sBases");

	// NetEntitlements
	set_name(0x152e230, "NetEntitlements");
	apply_type(0x152e230, "RTTICompound");
	del_items(0x152fe14, DELIT_SIMPLE, 8);
	apply_type(0x152fe14, "RTTIBase[1]");
	set_name(0x152fe14, "NetEntitlements::sBases");
	del_items(0x152fe1c, DELIT_SIMPLE, 48);
	apply_type(0x152fe1c, "RTTIFunction[2]");
	set_name(0x152fe1c, "NetEntitlements::sFunctions");

	// NetEntity
	set_name(0x14e30c4, "NetEntity");
	apply_type(0x14e30c4, "RTTICompound");
	del_items(0x14e5034, DELIT_SIMPLE, 8);
	apply_type(0x14e5034, "RTTIBase[1]");
	set_name(0x14e5034, "NetEntity::sBases");

	// NetExoSkeleton
	set_name(0x1526a50, "NetExoSkeleton");
	apply_type(0x1526a50, "RTTICompound");
	del_items(0x1528508, DELIT_SIMPLE, 8);
	apply_type(0x1528508, "RTTIBase[1]");
	set_name(0x1528508, "NetExoSkeleton::sBases");

	// NetExplosion
	set_name(0x152ca44, "NetExplosion");
	apply_type(0x152ca44, "RTTICompound");
	del_items(0x152d34c, DELIT_SIMPLE, 8);
	apply_type(0x152d34c, "RTTIBase[1]");
	set_name(0x152d34c, "NetExplosion::sBases");

	// NetExplosiveLocation
	set_name(0x152ca98, "NetExplosiveLocation");
	apply_type(0x152ca98, "RTTICompound");
	del_items(0x152d3e0, DELIT_SIMPLE, 8);
	apply_type(0x152d3e0, "RTTIBase[1]");
	set_name(0x152d3e0, "NetExplosiveLocation::sBases");

	// NetGame
	set_name(0x14c36c0, "NetGame");
	apply_type(0x14c36c0, "RTTICompound");
	del_items(0x14c3da0, DELIT_SIMPLE, 8);
	apply_type(0x14c3da0, "RTTIBase[1]");
	set_name(0x14c3da0, "NetGame::sBases");

	// NetGameBaseImp
	set_name(0x14c3f3c, "NetGameBaseImp");
	apply_type(0x14c3f3c, "RTTICompound");
	del_items(0x14c3fcc, DELIT_SIMPLE, 8);
	apply_type(0x14c3fcc, "RTTIBase[1]");
	set_name(0x14c3fcc, "NetGameBaseImp::sBases");

	// NetGameDetails
	set_name(0x152caec, "NetGameDetails");
	apply_type(0x152caec, "RTTICompound");
	del_items(0x152d630, DELIT_SIMPLE, 8);
	apply_type(0x152d630, "RTTIBase[1]");
	set_name(0x152d630, "NetGameDetails::sBases");

	// NetGameDetailsProvider
	set_name(0x14c3768, "NetGameDetailsProvider");
	apply_type(0x14c3768, "RTTICompound");
	del_items(0x14c3df8, DELIT_SIMPLE, 8);
	apply_type(0x14c3df8, "RTTIBase[1]");
	set_name(0x14c3df8, "NetGameDetailsProvider::sBases");

	// NetGameList
	set_name(0x14c3714, "NetGameList");
	apply_type(0x14c3714, "RTTICompound");
	del_items(0x14c3db8, DELIT_SIMPLE, 8);
	apply_type(0x14c3db8, "RTTIBase[1]");
	set_name(0x14c3db8, "NetGameList::sBases");

	// NetHumanoid
	set_name(0x152cb40, "NetHumanoid");
	apply_type(0x152cb40, "RTTICompound");
	del_items(0x152d628, DELIT_SIMPLE, 8);
	apply_type(0x152d628, "RTTIBase[1]");
	set_name(0x152d628, "NetHumanoid::sBases");

	// NetIgnoreList
	set_name(0x14c37bc, "NetIgnoreList");
	apply_type(0x14c37bc, "RTTICompound");
	del_items(0x14c3dc0, DELIT_SIMPLE, 8);
	apply_type(0x14c3dc0, "RTTIBase[1]");
	set_name(0x14c3dc0, "NetIgnoreList::sBases");

	// NetIgnoreListNp
	set_name(0x14c4140, "NetIgnoreListNp");
	apply_type(0x14c4140, "RTTICompound");
	del_items(0x14c41e4, DELIT_SIMPLE, 8);
	apply_type(0x14c41e4, "RTTIBase[1]");
	set_name(0x14c41e4, "NetIgnoreListNp::sBases");

	// NetInstigator
	set_name(0x14e8a80, "NetInstigator");
	apply_type(0x14e8a80, "RTTICompound");
	del_items(0x14e8f40, DELIT_SIMPLE, 8);
	apply_type(0x14e8f40, "RTTIBase[1]");
	set_name(0x14e8f40, "NetInstigator::sBases");

	// NetInteractiveEntity
	set_name(0x152cb94, "NetInteractiveEntity");
	apply_type(0x152cb94, "RTTICompound");
	del_items(0x152cf38, DELIT_SIMPLE, 8);
	apply_type(0x152cf38, "RTTIBase[1]");
	set_name(0x152cf38, "NetInteractiveEntity::sBases");

	// NetInterface
	set_name(0x14c3810, "NetInterface");
	apply_type(0x14c3810, "RTTICompound");
	del_items(0x14c3d18, DELIT_SIMPLE, 8);
	apply_type(0x14c3d18, "RTTIBase[1]");
	set_name(0x14c3d18, "NetInterface::sBases");

	// NetLadder
	set_name(0x152cbe8, "NetLadder");
	apply_type(0x152cbe8, "RTTICompound");
	del_items(0x152d44c, DELIT_SIMPLE, 8);
	apply_type(0x152d44c, "RTTIBase[1]");
	set_name(0x152d44c, "NetLadder::sBases");

	// NetLandVehicle
	set_name(0x152cc3c, "NetLandVehicle");
	apply_type(0x152cc3c, "RTTICompound");
	del_items(0x152d47c, DELIT_SIMPLE, 8);
	apply_type(0x152d47c, "RTTIBase[1]");
	set_name(0x152d47c, "NetLandVehicle::sBases");

	// NetLeanAndPeekArea
	set_name(0x152d644, "NetLeanAndPeekArea");
	apply_type(0x152d644, "RTTICompound");
	del_items(0x152e484, DELIT_SIMPLE, 8);
	apply_type(0x152e484, "RTTIBase[1]");
	set_name(0x152e484, "NetLeanAndPeekArea::sBases");

	// NetLift
	set_name(0x152d698, "NetLift");
	apply_type(0x152d698, "RTTICompound");
	del_items(0x152e518, DELIT_SIMPLE, 8);
	apply_type(0x152e518, "RTTIBase[1]");
	set_name(0x152e518, "NetLift::sBases");

	// NetLobby
	set_name(0x14c3864, "NetLobby");
	apply_type(0x14c3864, "RTTICompound");
	del_items(0x14c3dd0, DELIT_SIMPLE, 8);
	apply_type(0x14c3dd0, "RTTIBase[1]");
	set_name(0x14c3dd0, "NetLobby::sBases");

	// NetLobbyList
	set_name(0x14c38b8, "NetLobbyList");
	apply_type(0x14c38b8, "RTTICompound");
	del_items(0x14c3dd8, DELIT_SIMPLE, 8);
	apply_type(0x14c3dd8, "RTTIBase[1]");
	set_name(0x14c3dd8, "NetLobbyList::sBases");

	// NetLocationLagQuality
	set_name(0x152df7c, "NetLocationLagQuality");
	apply_type(0x152df7c, "RTTICompound");
	del_items(0x152fdf4, DELIT_SIMPLE, 8);
	apply_type(0x152fdf4, "RTTIBase[1]");
	set_name(0x152fdf4, "NetLocationLagQuality::sBases");
	del_items(0x152fdfc, DELIT_SIMPLE, 24);
	apply_type(0x152fdfc, "RTTIFunction[1]");
	set_name(0x152fdfc, "NetLocationLagQuality::sFunctions");

	// NetMailClanInvite
	set_name(0x152e0e0, "NetMailClanInvite");
	apply_type(0x152e0e0, "RTTICompound");
	del_items(0x152ff94, DELIT_SIMPLE, 8);
	apply_type(0x152ff94, "RTTIBase[1]");
	set_name(0x152ff94, "NetMailClanInvite::sBases");

	// NetMailCustomInvite
	set_name(0x152e188, "NetMailCustomInvite");
	apply_type(0x152e188, "RTTICompound");
	del_items(0x152ff9c, DELIT_SIMPLE, 8);
	apply_type(0x152ff9c, "RTTIBase[1]");
	set_name(0x152ff9c, "NetMailCustomInvite::sBases");

	// NetMailInvite
	set_name(0x152e08c, "NetMailInvite");
	apply_type(0x152e08c, "RTTICompound");
	del_items(0x152fda4, DELIT_SIMPLE, 8);
	apply_type(0x152fda4, "RTTIBase[1]");
	set_name(0x152fda4, "NetMailInvite::sBases");
	del_items(0x152fdac, DELIT_SIMPLE, 72);
	apply_type(0x152fdac, "RTTIFunction[3]");
	set_name(0x152fdac, "NetMailInvite::sFunctions");

	// NetMailPartyInvite
	set_name(0x152e134, "NetMailPartyInvite");
	apply_type(0x152e134, "RTTICompound");
	del_items(0x152ff8c, DELIT_SIMPLE, 8);
	apply_type(0x152ff8c, "RTTIBase[1]");
	set_name(0x152ff8c, "NetMailPartyInvite::sBases");

	// NetMenuLogin
	set_name(0x153e820, "NetMenuLogin");
	apply_type(0x153e820, "RTTICompound");
	del_items(0x154024c, DELIT_SIMPLE, 8);
	apply_type(0x154024c, "RTTIBase[1]");
	set_name(0x154024c, "NetMenuLogin::sBases");
	del_items(0x1540254, DELIT_SIMPLE, 168);
	apply_type(0x1540254, "RTTIFunction[7]");
	set_name(0x1540254, "NetMenuLogin::sFunctions");

	// NetMine
	set_name(0x152d6ec, "NetMine");
	apply_type(0x152d6ec, "RTTICompound");
	del_items(0x152e55c, DELIT_SIMPLE, 8);
	apply_type(0x152e55c, "RTTIBase[1]");
	set_name(0x152e55c, "NetMine::sBases");

	// NetMissionManager
	set_name(0x152dfd0, "NetMissionManager");
	apply_type(0x152dfd0, "RTTICompound");
	del_items(0x152ff28, DELIT_SIMPLE, 8);
	apply_type(0x152ff28, "RTTIBase[1]");
	set_name(0x152ff28, "NetMissionManager::sBases");

	// NetMountableEntity
	set_name(0x152d740, "NetMountableEntity");
	apply_type(0x152d740, "RTTICompound");
	del_items(0x152e58c, DELIT_SIMPLE, 8);
	apply_type(0x152e58c, "RTTIBase[1]");
	set_name(0x152e58c, "NetMountableEntity::sBases");

	// NetMountedGun
	set_name(0x152d794, "NetMountedGun");
	apply_type(0x152d794, "RTTICompound");
	del_items(0x152e60c, DELIT_SIMPLE, 8);
	apply_type(0x152e60c, "RTTIBase[1]");
	set_name(0x152e60c, "NetMountedGun::sBases");

	// NetNpManager
	set_name(0x14c390c, "NetNpManager");
	apply_type(0x14c390c, "RTTICompound");
	del_items(0x14c3df0, DELIT_SIMPLE, 8);
	apply_type(0x14c3df0, "RTTIBase[1]");
	set_name(0x14c3df0, "NetNpManager::sBases");

	// NetOwnershipRequiredEntityEvent
	set_name(0x14e311c, "NetOwnershipRequiredEntityEvent");
	apply_type(0x14e311c, "RTTICompound");
	del_items(0x14e503c, DELIT_SIMPLE, 16);
	apply_type(0x14e503c, "RTTIBase[2]");
	set_name(0x14e503c, "NetOwnershipRequiredEntityEvent::sBases");

	// NetParty
	set_name(0x14c3c68, "NetParty");
	apply_type(0x14c3c68, "RTTICompound");
	del_items(0x14c3dc8, DELIT_SIMPLE, 8);
	apply_type(0x14c3dc8, "RTTIBase[1]");
	set_name(0x14c3dc8, "NetParty::sBases");

	// NetPartyMember
	set_name(0x152decc, "NetPartyMember");
	apply_type(0x152decc, "RTTICompound");
	del_items(0x152f8e4, DELIT_SIMPLE, 8);
	apply_type(0x152f8e4, "RTTIBase[1]");
	set_name(0x152f8e4, "NetPartyMember::sBases");

	// NetPickUp
	set_name(0x152d7e8, "NetPickUp");
	apply_type(0x152d7e8, "RTTICompound");
	del_items(0x152e678, DELIT_SIMPLE, 8);
	apply_type(0x152e678, "RTTIBase[1]");
	set_name(0x152e678, "NetPickUp::sBases");

	// NetPlayAnimationObject
	set_name(0x152d83c, "NetPlayAnimationObject");
	apply_type(0x152d83c, "RTTICompound");
	del_items(0x152e6bc, DELIT_SIMPLE, 8);
	apply_type(0x152e6bc, "RTTIBase[1]");
	set_name(0x152e6bc, "NetPlayAnimationObject::sBases");

	// NetPlayer
	set_name(0x14c3960, "NetPlayer");
	apply_type(0x14c3960, "RTTICompound");
	del_items(0x14c3d30, DELIT_SIMPLE, 8);
	apply_type(0x14c3d30, "RTTIBase[1]");
	set_name(0x14c3d30, "NetPlayer::sBases");
	del_items(0x14c3d38, DELIT_SIMPLE, 72);
	apply_type(0x14c3d38, "RTTIFunction[3]");
	set_name(0x14c3d38, "NetPlayer::sFunctions");

	// NetPlayerList
	set_name(0x14c39b4, "NetPlayerList");
	apply_type(0x14c39b4, "RTTICompound");
	del_items(0x14c3d20, DELIT_SIMPLE, 8);
	apply_type(0x14c3d20, "RTTIBase[1]");
	set_name(0x14c3d20, "NetPlayerList::sBases");

	// NetPlayerParty
	set_name(0x152de24, "NetPlayerParty");
	apply_type(0x152de24, "RTTICompound");
	del_items(0x152ed64, DELIT_SIMPLE, 8);
	apply_type(0x152ed64, "RTTIBase[1]");
	set_name(0x152ed64, "NetPlayerParty::sBases");
	del_items(0x152ed6c, DELIT_SIMPLE, 2088);
	apply_type(0x152ed6c, "RTTIFunction[87]");
	set_name(0x152ed6c, "NetPlayerParty::sFunctions");

	// NetPortableSpawnGrenade
	set_name(0x152d890, "NetPortableSpawnGrenade");
	apply_type(0x152d890, "RTTICompound");
	del_items(0x152e79c, DELIT_SIMPLE, 8);
	apply_type(0x152e79c, "RTTIBase[1]");
	set_name(0x152e79c, "NetPortableSpawnGrenade::sBases");

	// NetPortableTurret
	set_name(0x152d938, "NetPortableTurret");
	apply_type(0x152d938, "RTTICompound");
	del_items(0x152e8cc, DELIT_SIMPLE, 8);
	apply_type(0x152e8cc, "RTTIBase[1]");
	set_name(0x152e8cc, "NetPortableTurret::sBases");

	// NetReplicatedObject
	set_name(0x14c3a08, "NetReplicatedObject");
	apply_type(0x14c3a08, "RTTICompound");
	del_items(0x14c3e00, DELIT_SIMPLE, 8);
	apply_type(0x14c3e00, "RTTIBase[1]");
	set_name(0x14c3e00, "NetReplicatedObject::sBases");

	// NetReplicatedPlayerParty
	set_name(0x152de78, "NetReplicatedPlayerParty");
	apply_type(0x152de78, "RTTICompound");
	del_items(0x152fa04, DELIT_SIMPLE, 8);
	apply_type(0x152fa04, "RTTIBase[1]");
	set_name(0x152fa04, "NetReplicatedPlayerParty::sBases");

	// NetRequest
	set_name(0x14c3a68, "NetRequest");
	apply_type(0x14c3a68, "RTTICompound");
	del_items(0x14c3db0, DELIT_SIMPLE, 8);
	apply_type(0x14c3db0, "RTTIBase[1]");
	set_name(0x14c3db0, "NetRequest::sBases");

	// NetRequestGameID
	set_name(0x14c3abc, "NetRequestGameID");
	apply_type(0x14c3abc, "RTTICompound");
	del_items(0x14c3e1c, DELIT_SIMPLE, 8);
	apply_type(0x14c3e1c, "RTTIBase[1]");
	set_name(0x14c3e1c, "NetRequestGameID::sBases");

	// NetRespawnEntity
	set_name(0x152d98c, "NetRespawnEntity");
	apply_type(0x152d98c, "RTTICompound");
	del_items(0x152e938, DELIT_SIMPLE, 8);
	apply_type(0x152e938, "RTTIBase[1]");
	set_name(0x152e938, "NetRespawnEntity::sBases");

	// NetSearchAndRetrieveObject
	set_name(0x152d9e0, "NetSearchAndRetrieveObject");
	apply_type(0x152d9e0, "RTTICompound");
	del_items(0x152e9b8, DELIT_SIMPLE, 8);
	apply_type(0x152e9b8, "RTTIBase[1]");
	set_name(0x152e9b8, "NetSearchAndRetrieveObject::sBases");

	// NetSemaphore
	set_name(0x14c3b10, "NetSemaphore");
	apply_type(0x14c3b10, "RTTICompound");
	del_items(0x14c3e24, DELIT_SIMPLE, 8);
	apply_type(0x14c3e24, "RTTIBase[1]");
	set_name(0x14c3e24, "NetSemaphore::sBases");

	// NetSentryBot
	set_name(0x152da34, "NetSentryBot");
	apply_type(0x152da34, "RTTICompound");
	del_items(0x152e9e8, DELIT_SIMPLE, 8);
	apply_type(0x152e9e8, "RTTIBase[1]");
	set_name(0x152e9e8, "NetSentryBot::sBases");

	// NetSequence
	set_name(0x152da88, "NetSequence");
	apply_type(0x152da88, "RTTICompound");
	del_items(0x152eaa4, DELIT_SIMPLE, 8);
	apply_type(0x152eaa4, "RTTIBase[1]");
	set_name(0x152eaa4, "NetSequence::sBases");

	// NetSignalGrenade
	set_name(0x152dadc, "NetSignalGrenade");
	apply_type(0x152dadc, "RTTICompound");
	del_items(0x152e758, DELIT_SIMPLE, 8);
	apply_type(0x152e758, "RTTIBase[1]");
	set_name(0x152e758, "NetSignalGrenade::sBases");

	// NetSoldier
	set_name(0x152db30, "NetSoldier");
	apply_type(0x152db30, "RTTICompound");
	del_items(0x152eb10, DELIT_SIMPLE, 8);
	apply_type(0x152eb10, "RTTIBase[1]");
	set_name(0x152eb10, "NetSoldier::sBases");

	// NetSpawnArea
	set_name(0x152db84, "NetSpawnArea");
	apply_type(0x152db84, "RTTICompound");
	del_items(0x152eb18, DELIT_SIMPLE, 8);
	apply_type(0x152eb18, "RTTIBase[1]");
	set_name(0x152eb18, "NetSpawnArea::sBases");

	// NetStateMachine
	set_name(0x14c3b6c, "NetStateMachine");
	apply_type(0x14c3b6c, "RTTICompound");
	del_items(0x14c3e7c, DELIT_SIMPLE, 8);
	apply_type(0x14c3e7c, "RTTIBase[1]");
	set_name(0x14c3e7c, "NetStateMachine::sBases");

	// NetStateMachineGame
	set_name(0x152df24, "NetStateMachineGame");
	apply_type(0x152df24, "RTTICompound");
	del_items(0x152f594, DELIT_SIMPLE, 8);
	apply_type(0x152f594, "RTTIBase[1]");
	set_name(0x152f594, "NetStateMachineGame::sBases");
	del_items(0x152f59c, DELIT_SIMPLE, 840);
	apply_type(0x152f59c, "RTTIFunction[35]");
	set_name(0x152f59c, "NetStateMachineGame::sFunctions");

	// NetSwitch
	set_name(0x152dbd8, "NetSwitch");
	apply_type(0x152dbd8, "RTTICompound");
	del_items(0x152ebfc, DELIT_SIMPLE, 8);
	apply_type(0x152ebfc, "RTTIBase[1]");
	set_name(0x152ebfc, "NetSwitch::sBases");

	// NetTestInteraction
	set_name(0x152dd7c, "NetTestInteraction");
	apply_type(0x152dd7c, "RTTICompound");
	del_items(0x152ed18, DELIT_SIMPLE, 8);
	apply_type(0x152ed18, "RTTIBase[1]");
	set_name(0x152ed18, "NetTestInteraction::sBases");

	// NetThrowable
	set_name(0x152dc2c, "NetThrowable");
	apply_type(0x152dc2c, "RTTICompound");
	del_items(0x152e714, DELIT_SIMPLE, 8);
	apply_type(0x152e714, "RTTIBase[1]");
	set_name(0x152e714, "NetThrowable::sBases");

	// NetTurret
	set_name(0x152dc80, "NetTurret");
	apply_type(0x152dc80, "RTTICompound");
	del_items(0x152e860, DELIT_SIMPLE, 8);
	apply_type(0x152e860, "RTTIBase[1]");
	set_name(0x152e860, "NetTurret::sBases");

	// NetUniquePickUp
	set_name(0x152dcd4, "NetUniquePickUp");
	apply_type(0x152dcd4, "RTTICompound");
	del_items(0x152ec68, DELIT_SIMPLE, 8);
	apply_type(0x152ec68, "RTTIBase[1]");
	set_name(0x152ec68, "NetUniquePickUp::sBases");

	// NetUniverse
	set_name(0x14c3bc0, "NetUniverse");
	apply_type(0x14c3bc0, "RTTICompound");
	del_items(0x14c3da8, DELIT_SIMPLE, 8);
	apply_type(0x14c3da8, "RTTIBase[1]");
	set_name(0x14c3da8, "NetUniverse::sBases");

	// NetUniverseList
	set_name(0x14c3c14, "NetUniverseList");
	apply_type(0x14c3c14, "RTTICompound");
	del_items(0x14c3d98, DELIT_SIMPLE, 8);
	apply_type(0x14c3d98, "RTTIBase[1]");
	set_name(0x14c3d98, "NetUniverseList::sBases");

	// NetValve
	set_name(0x152dd28, "NetValve");
	apply_type(0x152dd28, "RTTICompound");
	del_items(0x152ecc0, DELIT_SIMPLE, 8);
	apply_type(0x152ecc0, "RTTIBase[1]");
	set_name(0x152ecc0, "NetValve::sBases");

	// NetWeaponPickUp
	set_name(0x152ddd0, "NetWeaponPickUp");
	apply_type(0x152ddd0, "RTTICompound");
	del_items(0x152ed5c, DELIT_SIMPLE, 8);
	apply_type(0x152ed5c, "RTTIBase[1]");
	set_name(0x152ed5c, "NetWeaponPickUp::sBases");

	// NetWindManager
	set_name(0x152e038, "NetWindManager");
	apply_type(0x152e038, "RTTICompound");
	del_items(0x152ff34, DELIT_SIMPLE, 8);
	apply_type(0x152ff34, "RTTIBase[1]");
	set_name(0x152ff34, "NetWindManager::sBases");

	// NodeSectionMapping
	set_name(0x14ef6fc, "NodeSectionMapping");
	apply_type(0x14ef6fc, "RTTICompound");
	del_items(0x14f2b44, DELIT_SIMPLE, 84);
	apply_type(0x14f2b44, "RTTIAttr[3]");
	set_name(0x14f2b44, "NodeSectionMapping::sAttrs");

	// OSDEventParserResource
	set_name(0x1501568, "OSDEventParserResource");
	apply_type(0x1501568, "RTTICompound");
	del_items(0x1502280, DELIT_SIMPLE, 8);
	apply_type(0x1502280, "RTTIBase[1]");
	set_name(0x1502280, "OSDEventParserResource::sBases");
	del_items(0x1502288, DELIT_SIMPLE, 364);
	apply_type(0x1502288, "RTTIAttr[13]");
	set_name(0x1502288, "OSDEventParserResource::sAttrs");

	// OSDEventSettings
	set_name(0x15014f4, "OSDEventSettings");
	apply_type(0x15014f4, "RTTICompound");
	del_items(0x15021ec, DELIT_SIMPLE, 8);
	apply_type(0x15021ec, "RTTIBase[1]");
	set_name(0x15021ec, "OSDEventSettings::sBases");
	del_items(0x15021f4, DELIT_SIMPLE, 140);
	apply_type(0x15021f4, "RTTIAttr[5]");
	set_name(0x15021f4, "OSDEventSettings::sAttrs");

	// ObjectAttributeAnimatorInstance
	set_name(0x14bae20, "ObjectAttributeAnimatorInstance");
	apply_type(0x14bae20, "RTTICompound");
	del_items(0x14bbcbc, DELIT_SIMPLE, 8);
	apply_type(0x14bbcbc, "RTTIBase[1]");
	set_name(0x14bbcbc, "ObjectAttributeAnimatorInstance::sBases");
	del_items(0x14bbcc4, DELIT_SIMPLE, 56);
	apply_type(0x14bbcc4, "RTTIAttr[2]");
	set_name(0x14bbcc4, "ObjectAttributeAnimatorInstance::sAttrs");

	// ObjectAttributeAnimatorManager
	set_name(0x14baf90, "ObjectAttributeAnimatorManager");
	apply_type(0x14baf90, "RTTICompound");
	del_items(0x14bc0f4, DELIT_SIMPLE, 8);
	apply_type(0x14bc0f4, "RTTIBase[1]");
	set_name(0x14bc0f4, "ObjectAttributeAnimatorManager::sBases");
	del_items(0x14bc0fc, DELIT_SIMPLE, 12);
	apply_type(0x14bc0fc, "RTTIMessageHandler[1]");
	set_name(0x14bc0fc, "ObjectAttributeAnimatorManager::sMessageHandlers");

	// ObjectAttributeAnimatorResource
	set_name(0x14bae94, "ObjectAttributeAnimatorResource");
	apply_type(0x14bae94, "RTTICompound");
	del_items(0x14bb880, DELIT_SIMPLE, 8);
	apply_type(0x14bb880, "RTTIBase[1]");
	set_name(0x14bb880, "ObjectAttributeAnimatorResource::sBases");
	del_items(0x14bb888, DELIT_SIMPLE, 56);
	apply_type(0x14bb888, "RTTIAttr[2]");
	set_name(0x14bb888, "ObjectAttributeAnimatorResource::sAttrs");

	// ObjectAttributeAnimatorResourceBase
	set_name(0x14bc650, "ObjectAttributeAnimatorResourceBase");
	apply_type(0x14bc650, "RTTICompound");
	del_items(0x14bcc9c, DELIT_SIMPLE, 8);
	apply_type(0x14bcc9c, "RTTIBase[1]");
	set_name(0x14bcc9c, "ObjectAttributeAnimatorResourceBase::sBases");
	del_items(0x14bcca4, DELIT_SIMPLE, 56);
	apply_type(0x14bcca4, "RTTIAttr[2]");
	set_name(0x14bcca4, "ObjectAttributeAnimatorResourceBase::sAttrs");
	del_items(0x14bccdc, DELIT_SIMPLE, 12);
	apply_type(0x14bccdc, "RTTIMessageHandler[1]");
	set_name(0x14bccdc, "ObjectAttributeAnimatorResourceBase::sMessageHandlers");

	// ObjectAttributeAnimatorSetInstance
	set_name(0x14baee8, "ObjectAttributeAnimatorSetInstance");
	apply_type(0x14baee8, "RTTICompound");
	del_items(0x14bc074, DELIT_SIMPLE, 8);
	apply_type(0x14bc074, "RTTIBase[1]");
	set_name(0x14bc074, "ObjectAttributeAnimatorSetInstance::sBases");
	del_items(0x14bc07c, DELIT_SIMPLE, 56);
	apply_type(0x14bc07c, "RTTIAttr[2]");
	set_name(0x14bc07c, "ObjectAttributeAnimatorSetInstance::sAttrs");

	// ObjectAttributeAnimatorSetResource
	set_name(0x14baf3c, "ObjectAttributeAnimatorSetResource");
	apply_type(0x14baf3c, "RTTICompound");
	del_items(0x14bc0b4, DELIT_SIMPLE, 8);
	apply_type(0x14bc0b4, "RTTIBase[1]");
	set_name(0x14bc0b4, "ObjectAttributeAnimatorSetResource::sBases");
	del_items(0x14bc0bc, DELIT_SIMPLE, 56);
	apply_type(0x14bc0bc, "RTTIAttr[2]");
	set_name(0x14bc0bc, "ObjectAttributeAnimatorSetResource::sAttrs");

	// ObjectEvent
	set_name(0x14beabc, "ObjectEvent");
	apply_type(0x14beabc, "RTTICompound");

	// ObjectManager
	set_name(0x14bc9d8, "ObjectManager");
	apply_type(0x14bc9d8, "RTTICompound");
	del_items(0x14bcc94, DELIT_SIMPLE, 8);
	apply_type(0x14bcc94, "RTTIBase[1]");
	set_name(0x14bcc94, "ObjectManager::sBases");

	// ObjectiveCount
	set_name(0x14fb530, "ObjectiveCount");
	apply_type(0x14fb530, "RTTICompound");
	del_items(0x14ff91c, DELIT_SIMPLE, 56);
	apply_type(0x14ff91c, "RTTIAttr[2]");
	set_name(0x14ff91c, "ObjectiveCount::sAttrs");

	// ObjectiveSystem
	set_name(0x14efe04, "ObjectiveSystem");
	apply_type(0x14efe04, "RTTICompound");
	del_items(0x14f0fc4, DELIT_SIMPLE, 8);
	apply_type(0x14f0fc4, "RTTIBase[1]");
	set_name(0x14f0fc4, "ObjectiveSystem::sBases");
	del_items(0x14f0fcc, DELIT_SIMPLE, 576);
	apply_type(0x14f0fcc, "RTTIFunction[24]");
	set_name(0x14f0fcc, "ObjectiveSystem::sFunctions");

	// ObstacleComponent
	set_name(0x14e2664, "ObstacleComponent");
	apply_type(0x14e2664, "RTTICompound");
	del_items(0x14e576c, DELIT_SIMPLE, 8);
	apply_type(0x14e576c, "RTTIBase[1]");
	set_name(0x14e576c, "ObstacleComponent::sBases");

	// ObstacleComponentResource
	set_name(0x14e26b8, "ObstacleComponentResource");
	apply_type(0x14e26b8, "RTTICompound");
	del_items(0x14e570c, DELIT_SIMPLE, 8);
	apply_type(0x14e570c, "RTTIBase[1]");
	set_name(0x14e570c, "ObstacleComponentResource::sBases");
	del_items(0x14e5714, DELIT_SIMPLE, 84);
	apply_type(0x14e5714, "RTTIAttr[3]");
	set_name(0x14e5714, "ObstacleComponentResource::sAttrs");

	// Occluder
	set_name(0x14cdf34, "Occluder");
	apply_type(0x14cdf34, "RTTICompound");
	del_items(0x14ce0d0, DELIT_SIMPLE, 8);
	apply_type(0x14ce0d0, "RTTIBase[1]");
	set_name(0x14ce0d0, "Occluder::sBases");
	del_items(0x14ce0d8, DELIT_SIMPLE, 140);
	apply_type(0x14ce0d8, "RTTIAttr[5]");
	set_name(0x14ce0d8, "Occluder::sAttrs");

	// OmniLight
	set_name(0x14c8d54, "OmniLight");
	apply_type(0x14c8d54, "RTTICompound");
	del_items(0x14ca7c8, DELIT_SIMPLE, 8);
	apply_type(0x14ca7c8, "RTTIBase[1]");
	set_name(0x14ca7c8, "OmniLight::sBases");
	del_items(0x14ca7d0, DELIT_SIMPLE, 140);
	apply_type(0x14ca7d0, "RTTIAttr[5]");
	set_name(0x14ca7d0, "OmniLight::sAttrs");
	del_items(0x14ca85c, DELIT_SIMPLE, 12);
	apply_type(0x14ca85c, "RTTIMessageHandler[1]");
	set_name(0x14ca85c, "OmniLight::sMessageHandlers");

	// OmniLightResource
	set_name(0x14c9058, "OmniLightResource");
	apply_type(0x14c9058, "RTTICompound");
	del_items(0x14caca4, DELIT_SIMPLE, 8);
	apply_type(0x14caca4, "RTTIBase[1]");
	set_name(0x14caca4, "OmniLightResource::sBases");
	del_items(0x14cacac, DELIT_SIMPLE, 140);
	apply_type(0x14cacac, "RTTIAttr[5]");
	set_name(0x14cacac, "OmniLightResource::sAttrs");

	// OperationsBlackOutEventInstance
	set_name(0x151c950, "OperationsBlackOutEventInstance");
	apply_type(0x151c950, "RTTICompound");
	del_items(0x151e8a0, DELIT_SIMPLE, 8);
	apply_type(0x151e8a0, "RTTIBase[1]");
	set_name(0x151e8a0, "OperationsBlackOutEventInstance::sBases");

	// OperationsBlackOutEventResource
	set_name(0x151c8fc, "OperationsBlackOutEventResource");
	apply_type(0x151c8fc, "RTTICompound");
	del_items(0x151e87c, DELIT_SIMPLE, 8);
	apply_type(0x151e87c, "RTTIBase[1]");
	set_name(0x151e87c, "OperationsBlackOutEventResource::sBases");
	del_items(0x151e884, DELIT_SIMPLE, 28);
	apply_type(0x151e884, "RTTIAttr[1]");
	set_name(0x151e884, "OperationsBlackOutEventResource::sAttrs");

	// OrientationHelper
	set_name(0x14da1d8, "OrientationHelper");
	apply_type(0x14da1d8, "RTTICompound");
	del_items(0x14dab50, DELIT_SIMPLE, 84);
	apply_type(0x14dab50, "RTTIAttr[3]");
	set_name(0x14dab50, "OrientationHelper::sAttrs");

	// OrientedBox
	set_name(0x14adc5c, "OrientedBox");
	apply_type(0x14adc5c, "RTTICompound");
	del_items(0x14ae3dc, DELIT_SIMPLE, 56);
	apply_type(0x14ae3dc, "RTTIAttr[2]");
	set_name(0x14ae3dc, "OrientedBox::sAttrs");

	// OuijaBoardInteraction
	set_name(0x154b928, "OuijaBoardInteraction");
	apply_type(0x154b928, "RTTICompound");
	del_items(0x154c158, DELIT_SIMPLE, 8);
	apply_type(0x154c158, "RTTIBase[1]");
	set_name(0x154c158, "OuijaBoardInteraction::sBases");

	// OuijaBoardInteractionResource
	set_name(0x154b97c, "OuijaBoardInteractionResource");
	apply_type(0x154b97c, "RTTICompound");
	del_items(0x154c150, DELIT_SIMPLE, 8);
	apply_type(0x154c150, "RTTIBase[1]");
	set_name(0x154c150, "OuijaBoardInteractionResource::sBases");

	// PBDBodyResource
	set_name(0x14bd3d0, "PBDBodyResource");
	apply_type(0x14bd3d0, "RTTICompound");
	del_items(0x14be4d8, DELIT_SIMPLE, 8);
	apply_type(0x14be4d8, "RTTIBase[1]");
	set_name(0x14be4d8, "PBDBodyResource::sBases");
	del_items(0x14be4e0, DELIT_SIMPLE, 140);
	apply_type(0x14be4e0, "RTTIAttr[5]");
	set_name(0x14be4e0, "PBDBodyResource::sAttrs");

	// PBDConstraintDesc
	set_name(0x14bd308, "PBDConstraintDesc");
	apply_type(0x14bd308, "RTTICompound");
	del_items(0x14be3f8, DELIT_SIMPLE, 168);
	apply_type(0x14be3f8, "RTTIAttr[6]");
	set_name(0x14be3f8, "PBDConstraintDesc::sAttrs");

	// PBDDeformedSkinnedMesh
	set_name(0x14bd478, "PBDDeformedSkinnedMesh");
	apply_type(0x14bd478, "RTTICompound");
	del_items(0x14be588, DELIT_SIMPLE, 8);
	apply_type(0x14be588, "RTTIBase[1]");
	set_name(0x14be588, "PBDDeformedSkinnedMesh::sBases");
	del_items(0x14be590, DELIT_SIMPLE, 112);
	apply_type(0x14be590, "RTTIAttr[4]");
	set_name(0x14be590, "PBDDeformedSkinnedMesh::sAttrs");

	// PBDPoseMapper
	set_name(0x14bd424, "PBDPoseMapper");
	apply_type(0x14bd424, "RTTICompound");
	del_items(0x14be56c, DELIT_SIMPLE, 28);
	apply_type(0x14be56c, "RTTIAttr[1]");
	set_name(0x14be56c, "PBDPoseMapper::sAttrs");

	// PBDVertexDesc
	set_name(0x14bd36c, "PBDVertexDesc");
	apply_type(0x14bd36c, "RTTICompound");
	del_items(0x14be4a0, DELIT_SIMPLE, 56);
	apply_type(0x14be4a0, "RTTIAttr[2]");
	set_name(0x14be4a0, "PBDVertexDesc::sAttrs");

	// PanelTag
	set_name(0x14c07e0, "PanelTag");
	apply_type(0x14c07e0, "RTTICompound");
	del_items(0x14c29e0, DELIT_SIMPLE, 8);
	apply_type(0x14c29e0, "RTTIBase[1]");
	set_name(0x14c29e0, "PanelTag::sBases");

	// PanelWidget
	set_name(0x14c1164, "PanelWidget");
	apply_type(0x14c1164, "RTTICompound");
	del_items(0x14c321c, DELIT_SIMPLE, 8);
	apply_type(0x14c321c, "RTTIBase[1]");
	set_name(0x14c321c, "PanelWidget::sBases");

	// PanicSystem
	set_name(0x1548260, "PanicSystem");
	apply_type(0x1548260, "RTTICompound");
	del_items(0x1549ca0, DELIT_SIMPLE, 8);
	apply_type(0x1549ca0, "RTTIBase[1]");
	set_name(0x1549ca0, "PanicSystem::sBases");

	// PanicSystemResource
	set_name(0x15482c4, "PanicSystemResource");
	apply_type(0x15482c4, "RTTICompound");
	del_items(0x1549ca8, DELIT_SIMPLE, 8);
	apply_type(0x1549ca8, "RTTIBase[1]");
	set_name(0x1549ca8, "PanicSystemResource::sBases");
	del_items(0x1549cb0, DELIT_SIMPLE, 392);
	apply_type(0x1549cb0, "RTTIAttr[14]");
	set_name(0x1549cb0, "PanicSystemResource::sAttrs");

	// ParTimeLevelInfo
	set_name(0x152b188, "ParTimeLevelInfo");
	apply_type(0x152b188, "RTTICompound");
	del_items(0x152bd94, DELIT_SIMPLE, 8);
	apply_type(0x152bd94, "RTTIBase[1]");
	set_name(0x152bd94, "ParTimeLevelInfo::sBases");
	del_items(0x152bd9c, DELIT_SIMPLE, 56);
	apply_type(0x152bd9c, "RTTIAttr[2]");
	set_name(0x152bd9c, "ParTimeLevelInfo::sAttrs");

	// ParTimeNodeInfo
	set_name(0x152b0b0, "ParTimeNodeInfo");
	apply_type(0x152b0b0, "RTTICompound");
	del_items(0x152bcc0, DELIT_SIMPLE, 8);
	apply_type(0x152bcc0, "RTTIBase[1]");
	set_name(0x152bcc0, "ParTimeNodeInfo::sBases");
	del_items(0x152bcc8, DELIT_SIMPLE, 84);
	apply_type(0x152bcc8, "RTTIAttr[3]");
	set_name(0x152bcc8, "ParTimeNodeInfo::sAttrs");

	// PartialSkeletonAnimationResource
	set_name(0x14d9410, "PartialSkeletonAnimationResource");
	apply_type(0x14d9410, "RTTICompound");
	del_items(0x14db7ac, DELIT_SIMPLE, 8);
	apply_type(0x14db7ac, "RTTIBase[1]");
	set_name(0x14db7ac, "PartialSkeletonAnimationResource::sBases");
	del_items(0x14db7b4, DELIT_SIMPLE, 140);
	apply_type(0x14db7b4, "RTTIAttr[5]");
	set_name(0x14db7b4, "PartialSkeletonAnimationResource::sAttrs");

	// ParticleEmitter
	set_name(0x14c4470, "ParticleEmitter");
	apply_type(0x14c4470, "RTTICompound");
	del_items(0x14c4bc0, DELIT_SIMPLE, 8);
	apply_type(0x14c4bc0, "RTTIBase[1]");
	set_name(0x14c4bc0, "ParticleEmitter::sBases");
	del_items(0x14c4bc8, DELIT_SIMPLE, 1372);
	apply_type(0x14c4bc8, "RTTIAttr[49]");
	set_name(0x14c4bc8, "ParticleEmitter::sAttrs");
	del_items(0x14c5124, DELIT_SIMPLE, 12);
	apply_type(0x14c5124, "RTTIMessageHandler[1]");
	set_name(0x14c5124, "ParticleEmitter::sMessageHandlers");

	// ParticleEventInstance
	set_name(0x151d1f8, "ParticleEventInstance");
	apply_type(0x151d1f8, "RTTICompound");
	del_items(0x151f0e4, DELIT_SIMPLE, 8);
	apply_type(0x151f0e4, "RTTIBase[1]");
	set_name(0x151f0e4, "ParticleEventInstance::sBases");

	// ParticleEventResource
	set_name(0x151d1a4, "ParticleEventResource");
	apply_type(0x151d1a4, "RTTICompound");
	del_items(0x151effc, DELIT_SIMPLE, 8);
	apply_type(0x151effc, "RTTIBase[1]");
	set_name(0x151effc, "ParticleEventResource::sBases");
	del_items(0x151f004, DELIT_SIMPLE, 224);
	apply_type(0x151f004, "RTTIAttr[8]");
	set_name(0x151f004, "ParticleEventResource::sAttrs");

	// ParticleEventVirtualEmitter
	set_name(0x151d150, "ParticleEventVirtualEmitter");
	apply_type(0x151d150, "RTTICompound");
	del_items(0x151efc4, DELIT_SIMPLE, 56);
	apply_type(0x151efc4, "RTTIAttr[2]");
	set_name(0x151efc4, "ParticleEventVirtualEmitter::sAttrs");

	// ParticleModifierSettings
	set_name(0x14c4a54, "ParticleModifierSettings");
	apply_type(0x14c4a54, "RTTICompound");
	del_items(0x14c5168, DELIT_SIMPLE, 1008);
	apply_type(0x14c5168, "RTTIAttr[36]");
	set_name(0x14c5168, "ParticleModifierSettings::sAttrs");

	// ParticlePropertySettings
	set_name(0x14c46a0, "ParticlePropertySettings");
	apply_type(0x14c46a0, "RTTICompound");
	del_items(0x14c561c, DELIT_SIMPLE, 1092);
	apply_type(0x14c561c, "RTTIAttr[39]");
	set_name(0x14c561c, "ParticlePropertySettings::sAttrs");

	// ParticleShaderVariable
	set_name(0x14c461c, "ParticleShaderVariable");
	apply_type(0x14c461c, "RTTICompound");
	del_items(0x14c55c8, DELIT_SIMPLE, 84);
	apply_type(0x14c55c8, "RTTIAttr[3]");
	set_name(0x14c55c8, "ParticleShaderVariable::sAttrs");

	// ParticleSysValue
	set_name(0x14c48d0, "ParticleSysValue");
	apply_type(0x14c48d0, "RTTICompound");
	del_items(0x14c5130, DELIT_SIMPLE, 56);
	apply_type(0x14c5130, "RTTIAttr[2]");
	set_name(0x14c5130, "ParticleSysValue::sAttrs");

	// ParticleSysVar
	set_name(0x14c484c, "ParticleSysVar");
	apply_type(0x14c484c, "RTTICompound");
	del_items(0x14c4ae0, DELIT_SIMPLE, 112);
	apply_type(0x14c4ae0, "RTTIAttr[4]");
	set_name(0x14c4ae0, "ParticleSysVar::sAttrs");

	// ParticleSystemInstance
	set_name(0x14c4514, "ParticleSystemInstance");
	apply_type(0x14c4514, "RTTICompound");
	del_items(0x14c60e4, DELIT_SIMPLE, 8);
	apply_type(0x14c60e4, "RTTIBase[1]");
	set_name(0x14c60e4, "ParticleSystemInstance::sBases");
	del_items(0x14c60ec, DELIT_SIMPLE, 140);
	apply_type(0x14c60ec, "RTTIAttr[5]");
	set_name(0x14c60ec, "ParticleSystemInstance::sAttrs");
	del_items(0x14c6178, DELIT_SIMPLE, 72);
	apply_type(0x14c6178, "RTTIFunction[3]");
	set_name(0x14c6178, "ParticleSystemInstance::sFunctions");
	del_items(0x14c61c0, DELIT_SIMPLE, 24);
	apply_type(0x14c61c0, "RTTIMessageHandler[2]");
	set_name(0x14c61c0, "ParticleSystemInstance::sMessageHandlers");

	// ParticleSystemInstanceGame
	set_name(0x14fa728, "ParticleSystemInstanceGame");
	apply_type(0x14fa728, "RTTICompound");
	del_items(0x14feecc, DELIT_SIMPLE, 8);
	apply_type(0x14feecc, "RTTIBase[1]");
	set_name(0x14feecc, "ParticleSystemInstanceGame::sBases");

	// ParticleSystemManager
	set_name(0x14c6300, "ParticleSystemManager");
	apply_type(0x14c6300, "RTTICompound");
	del_items(0x14c6354, DELIT_SIMPLE, 8);
	apply_type(0x14c6354, "RTTIBase[1]");
	set_name(0x14c6354, "ParticleSystemManager::sBases");
	del_items(0x14c635c, DELIT_SIMPLE, 12);
	apply_type(0x14c635c, "RTTIMessageHandler[1]");
	set_name(0x14c635c, "ParticleSystemManager::sMessageHandlers");

	// ParticleSystemResource
	set_name(0x14c4744, "ParticleSystemResource");
	apply_type(0x14c4744, "RTTICompound");
	del_items(0x14c5a60, DELIT_SIMPLE, 8);
	apply_type(0x14c5a60, "RTTIBase[1]");
	set_name(0x14c5a60, "ParticleSystemResource::sBases");
	del_items(0x14c5a68, DELIT_SIMPLE, 1624);
	apply_type(0x14c5a68, "RTTIAttr[58]");
	set_name(0x14c5a68, "ParticleSystemResource::sAttrs");
	del_items(0x14c60c0, DELIT_SIMPLE, 24);
	apply_type(0x14c60c0, "RTTIMessageHandler[2]");
	set_name(0x14c60c0, "ParticleSystemResource::sMessageHandlers");

	// ParticleSystemSpeedModifierEventInstance
	set_name(0x151d2a0, "ParticleSystemSpeedModifierEventInstance");
	apply_type(0x151d2a0, "RTTICompound");
	del_items(0x151f12c, DELIT_SIMPLE, 8);
	apply_type(0x151f12c, "RTTIBase[1]");
	set_name(0x151f12c, "ParticleSystemSpeedModifierEventInstance::sBases");

	// ParticleSystemSpeedModifierEventResource
	set_name(0x151d24c, "ParticleSystemSpeedModifierEventResource");
	apply_type(0x151d24c, "RTTICompound");
	del_items(0x151f0ec, DELIT_SIMPLE, 8);
	apply_type(0x151f0ec, "RTTIBase[1]");
	set_name(0x151f0ec, "ParticleSystemSpeedModifierEventResource::sBases");
	del_items(0x151f0f4, DELIT_SIMPLE, 56);
	apply_type(0x151f0f4, "RTTIAttr[2]");
	set_name(0x151f0f4, "ParticleSystemSpeedModifierEventResource::sAttrs");

	// ParticleVertexAttribute
	set_name(0x14c4598, "ParticleVertexAttribute");
	apply_type(0x14c4598, "RTTICompound");
	del_items(0x14c5558, DELIT_SIMPLE, 112);
	apply_type(0x14c5558, "RTTIAttr[4]");
	set_name(0x14c5558, "ParticleVertexAttribute::sAttrs");

	// PathInstance
	set_name(0x14ba7c8, "PathInstance");
	apply_type(0x14ba7c8, "RTTICompound");
	del_items(0x14bbd3c, DELIT_SIMPLE, 8);
	apply_type(0x14bbd3c, "RTTIBase[1]");
	set_name(0x14bbd3c, "PathInstance::sBases");
	del_items(0x14bbd44, DELIT_SIMPLE, 112);
	apply_type(0x14bbd44, "RTTIAttr[4]");
	set_name(0x14bbd44, "PathInstance::sAttrs");

	// PathMover
	set_name(0x14e7ed8, "PathMover");
	apply_type(0x14e7ed8, "RTTICompound");
	del_items(0x14e9758, DELIT_SIMPLE, 8);
	apply_type(0x14e9758, "RTTIBase[1]");
	set_name(0x14e9758, "PathMover::sBases");
	del_items(0x14e9760, DELIT_SIMPLE, 384);
	apply_type(0x14e9760, "RTTIFunction[16]");
	set_name(0x14e9760, "PathMover::sFunctions");

	// PathMoverResource
	set_name(0x14e7f2c, "PathMoverResource");
	apply_type(0x14e7f2c, "RTTICompound");
	del_items(0x14e98e0, DELIT_SIMPLE, 8);
	apply_type(0x14e98e0, "RTTIBase[1]");
	set_name(0x14e98e0, "PathMoverResource::sBases");
	del_items(0x14e98e8, DELIT_SIMPLE, 168);
	apply_type(0x14e98e8, "RTTIAttr[6]");
	set_name(0x14e98e8, "PathMoverResource::sAttrs");

	// PathResource
	set_name(0x14ba8a0, "PathResource");
	apply_type(0x14ba8a0, "RTTICompound");
	del_items(0x14bbe24, DELIT_SIMPLE, 8);
	apply_type(0x14bbe24, "RTTIBase[1]");
	set_name(0x14bbe24, "PathResource::sBases");
	del_items(0x14bbe2c, DELIT_SIMPLE, 56);
	apply_type(0x14bbe2c, "RTTIAttr[2]");
	set_name(0x14bbe2c, "PathResource::sAttrs");

	// PausableEventInstance
	set_name(0x151d348, "PausableEventInstance");
	apply_type(0x151d348, "RTTICompound");
	del_items(0x151ea3c, DELIT_SIMPLE, 8);
	apply_type(0x151ea3c, "RTTIBase[1]");
	set_name(0x151ea3c, "PausableEventInstance::sBases");

	// PausableEventResource
	set_name(0x151d2f4, "PausableEventResource");
	apply_type(0x151d2f4, "RTTICompound");
	del_items(0x151e9fc, DELIT_SIMPLE, 8);
	apply_type(0x151e9fc, "RTTIBase[1]");
	set_name(0x151e9fc, "PausableEventResource::sBases");
	del_items(0x151ea04, DELIT_SIMPLE, 56);
	apply_type(0x151ea04, "RTTIAttr[2]");
	set_name(0x151ea04, "PausableEventResource::sAttrs");

	// PauseEventInstance
	set_name(0x151d3f0, "PauseEventInstance");
	apply_type(0x151d3f0, "RTTICompound");
	del_items(0x151f13c, DELIT_SIMPLE, 8);
	apply_type(0x151f13c, "RTTIBase[1]");
	set_name(0x151f13c, "PauseEventInstance::sBases");

	// PauseEventResource
	set_name(0x151d39c, "PauseEventResource");
	apply_type(0x151d39c, "RTTICompound");
	del_items(0x151f134, DELIT_SIMPLE, 8);
	apply_type(0x151f134, "RTTIBase[1]");
	set_name(0x151f134, "PauseEventResource::sBases");

	// PauseUntilBoundEventInstance
	set_name(0x151d498, "PauseUntilBoundEventInstance");
	apply_type(0x151d498, "RTTICompound");
	del_items(0x151f184, DELIT_SIMPLE, 8);
	apply_type(0x151f184, "RTTIBase[1]");
	set_name(0x151f184, "PauseUntilBoundEventInstance::sBases");

	// PauseUntilBoundEventResource
	set_name(0x151d444, "PauseUntilBoundEventResource");
	apply_type(0x151d444, "RTTICompound");
	del_items(0x151f144, DELIT_SIMPLE, 8);
	apply_type(0x151f144, "RTTIBase[1]");
	set_name(0x151f144, "PauseUntilBoundEventResource::sBases");
	del_items(0x151f14c, DELIT_SIMPLE, 56);
	apply_type(0x151f14c, "RTTIAttr[2]");
	set_name(0x151f14c, "PauseUntilBoundEventResource::sAttrs");

	// PegBase
	set_name(0x14e0e68, "PegBase");
	apply_type(0x14e0e68, "RTTICompound");
	del_items(0x14e12c4, DELIT_SIMPLE, 84);
	apply_type(0x14e12c4, "RTTIAttr[3]");
	set_name(0x14e12c4, "PegBase::sAttrs");

	// PetrusiteEjector
	set_name(0x153c508, "PetrusiteEjector");
	apply_type(0x153c508, "RTTICompound");
	del_items(0x153d7bc, DELIT_SIMPLE, 8);
	apply_type(0x153d7bc, "RTTIBase[1]");
	set_name(0x153d7bc, "PetrusiteEjector::sBases");

	// PetrusiteEjectorRep
	set_name(0x153c55c, "PetrusiteEjectorRep");
	apply_type(0x153c55c, "RTTICompound");
	del_items(0x153d978, DELIT_SIMPLE, 8);
	apply_type(0x153d978, "RTTIBase[1]");
	set_name(0x153d978, "PetrusiteEjectorRep::sBases");

	// PetrusiteEjectorResource
	set_name(0x153c5b0, "PetrusiteEjectorResource");
	apply_type(0x153c5b0, "RTTICompound");
	del_items(0x153d7c8, DELIT_SIMPLE, 8);
	apply_type(0x153d7c8, "RTTIBase[1]");
	set_name(0x153d7c8, "PetrusiteEjectorResource::sBases");
	del_items(0x153d7d0, DELIT_SIMPLE, 420);
	apply_type(0x153d7d0, "RTTIAttr[15]");
	set_name(0x153d7d0, "PetrusiteEjectorResource::sAttrs");

	// PhonemeBoneAnimatorResource
	set_name(0x153ac18, "PhonemeBoneAnimatorResource");
	apply_type(0x153ac18, "RTTICompound");
	del_items(0x153b780, DELIT_SIMPLE, 8);
	apply_type(0x153b780, "RTTIBase[1]");
	set_name(0x153b780, "PhonemeBoneAnimatorResource::sBases");
	del_items(0x153b788, DELIT_SIMPLE, 84);
	apply_type(0x153b788, "RTTIAttr[3]");
	set_name(0x153b788, "PhonemeBoneAnimatorResource::sAttrs");

	// PhonemeBoneChannel
	set_name(0x153abb4, "PhonemeBoneChannel");
	apply_type(0x153abb4, "RTTICompound");
	del_items(0x153b708, DELIT_SIMPLE, 8);
	apply_type(0x153b708, "RTTIBase[1]");
	set_name(0x153b708, "PhonemeBoneChannel::sBases");
	del_items(0x153b710, DELIT_SIMPLE, 112);
	apply_type(0x153b710, "RTTIAttr[4]");
	set_name(0x153b710, "PhonemeBoneChannel::sAttrs");

	// PhonemeBoneTarget
	set_name(0x153aadc, "PhonemeBoneTarget");
	apply_type(0x153aadc, "RTTICompound");
	del_items(0x153b660, DELIT_SIMPLE, 112);
	apply_type(0x153b660, "RTTIAttr[4]");
	set_name(0x153b660, "PhonemeBoneTarget::sAttrs");

	// PhonemeChannel
	set_name(0x14e36ec, "PhonemeChannel");
	apply_type(0x14e36ec, "RTTICompound");
	del_items(0x14e6ed4, DELIT_SIMPLE, 8);
	apply_type(0x14e6ed4, "RTTIBase[1]");
	set_name(0x14e6ed4, "PhonemeChannel::sBases");
	del_items(0x14e6edc, DELIT_SIMPLE, 112);
	apply_type(0x14e6edc, "RTTIAttr[4]");
	set_name(0x14e6edc, "PhonemeChannel::sAttrs");

	// PhonemeFloatShaderTarget
	set_name(0x153ab40, "PhonemeFloatShaderTarget");
	apply_type(0x153ab40, "RTTICompound");
	del_items(0x153b6d0, DELIT_SIMPLE, 56);
	apply_type(0x153b6d0, "RTTIAttr[2]");
	set_name(0x153b6d0, "PhonemeFloatShaderTarget::sAttrs");

	// PhonemeTarget
	set_name(0x14e3678, "PhonemeTarget");
	apply_type(0x14e3678, "RTTICompound");
	del_items(0x14e6e80, DELIT_SIMPLE, 84);
	apply_type(0x14e6e80, "RTTIAttr[3]");
	set_name(0x14e6e80, "PhonemeTarget::sAttrs");

	// PhysicsBallAndSocketConstraintResource
	set_name(0x14c7cfc, "PhysicsBallAndSocketConstraintResource");
	apply_type(0x14c7cfc, "RTTICompound");
	del_items(0x14c8070, DELIT_SIMPLE, 8);
	apply_type(0x14c8070, "RTTIBase[1]");
	set_name(0x14c8070, "PhysicsBallAndSocketConstraintResource::sBases");
	del_items(0x14c8078, DELIT_SIMPLE, 56);
	apply_type(0x14c8078, "RTTIAttr[2]");
	set_name(0x14c8078, "PhysicsBallAndSocketConstraintResource::sAttrs");

	// PhysicsBoxPhantom
	set_name(0x14c6508, "PhysicsBoxPhantom");
	apply_type(0x14c6508, "RTTICompound");
	del_items(0x14c6ce0, DELIT_SIMPLE, 8);
	apply_type(0x14c6ce0, "RTTIBase[1]");
	set_name(0x14c6ce0, "PhysicsBoxPhantom::sBases");

	// PhysicsCharacterMover
	set_name(0x14c857c, "PhysicsCharacterMover");
	apply_type(0x14c857c, "RTTICompound");
	del_items(0x14c85d0, DELIT_SIMPLE, 8);
	apply_type(0x14c85d0, "RTTIBase[1]");
	set_name(0x14c85d0, "PhysicsCharacterMover::sBases");

	// PhysicsCharacterMoverProxy
	set_name(0x14c8524, "PhysicsCharacterMoverProxy");
	apply_type(0x14c8524, "RTTICompound");
	del_items(0x14c85e0, DELIT_SIMPLE, 8);
	apply_type(0x14c85e0, "RTTIBase[1]");
	set_name(0x14c85e0, "PhysicsCharacterMoverProxy::sBases");

	// PhysicsCharacterMoverResource
	set_name(0x14c67d4, "PhysicsCharacterMoverResource");
	apply_type(0x14c67d4, "RTTICompound");
	del_items(0x14c7274, DELIT_SIMPLE, 8);
	apply_type(0x14c7274, "RTTIBase[1]");
	set_name(0x14c7274, "PhysicsCharacterMoverResource::sBases");
	del_items(0x14c727c, DELIT_SIMPLE, 252);
	apply_type(0x14c727c, "RTTIAttr[9]");
	set_name(0x14c727c, "PhysicsCharacterMoverResource::sAttrs");

	// PhysicsCharacterMoverRigidBody
	set_name(0x14c84d0, "PhysicsCharacterMoverRigidBody");
	apply_type(0x14c84d0, "RTTICompound");
	del_items(0x14c85d8, DELIT_SIMPLE, 8);
	apply_type(0x14c85d8, "RTTIBase[1]");
	set_name(0x14c85d8, "PhysicsCharacterMoverRigidBody::sBases");

	// PhysicsCollisionInstance
	set_name(0x14c640c, "PhysicsCollisionInstance");
	apply_type(0x14c640c, "RTTICompound");
	del_items(0x14c69c0, DELIT_SIMPLE, 8);
	apply_type(0x14c69c0, "RTTIBase[1]");
	set_name(0x14c69c0, "PhysicsCollisionInstance::sBases");
	del_items(0x14c69c8, DELIT_SIMPLE, 196);
	apply_type(0x14c69c8, "RTTIAttr[7]");
	set_name(0x14c69c8, "PhysicsCollisionInstance::sAttrs");
	del_items(0x14c6a8c, DELIT_SIMPLE, 12);
	apply_type(0x14c6a8c, "RTTIMessageHandler[1]");
	set_name(0x14c6a8c, "PhysicsCollisionInstance::sMessageHandlers");

	// PhysicsCollisionResource
	set_name(0x14c6698, "PhysicsCollisionResource");
	apply_type(0x14c6698, "RTTICompound");
	del_items(0x14c6aac, DELIT_SIMPLE, 8);
	apply_type(0x14c6aac, "RTTIBase[1]");
	set_name(0x14c6aac, "PhysicsCollisionResource::sBases");
	del_items(0x14c6ab4, DELIT_SIMPLE, 532);
	apply_type(0x14c6ab4, "RTTIAttr[19]");
	set_name(0x14c6ab4, "PhysicsCollisionResource::sAttrs");
	del_items(0x14c6cc8, DELIT_SIMPLE, 24);
	apply_type(0x14c6cc8, "RTTIMessageHandler[2]");
	set_name(0x14c6cc8, "PhysicsCollisionResource::sMessageHandlers");

	// PhysicsConstraintInstance
	set_name(0x14c7c44, "PhysicsConstraintInstance");
	apply_type(0x14c7c44, "RTTICompound");
	del_items(0x14c8010, DELIT_SIMPLE, 8);
	apply_type(0x14c8010, "RTTIBase[1]");
	set_name(0x14c8010, "PhysicsConstraintInstance::sBases");
	del_items(0x14c8018, DELIT_SIMPLE, 12);
	apply_type(0x14c8018, "RTTIMessageHandler[1]");
	set_name(0x14c8018, "PhysicsConstraintInstance::sMessageHandlers");

	// PhysicsConstraintResource
	set_name(0x14c7ca8, "PhysicsConstraintResource");
	apply_type(0x14c7ca8, "RTTICompound");
	del_items(0x14c8024, DELIT_SIMPLE, 8);
	apply_type(0x14c8024, "RTTIBase[1]");
	set_name(0x14c8024, "PhysicsConstraintResource::sBases");
	del_items(0x14c802c, DELIT_SIMPLE, 56);
	apply_type(0x14c802c, "RTTIAttr[2]");
	set_name(0x14c802c, "PhysicsConstraintResource::sAttrs");
	del_items(0x14c8064, DELIT_SIMPLE, 12);
	apply_type(0x14c8064, "RTTIMessageHandler[1]");
	set_name(0x14c8064, "PhysicsConstraintResource::sMessageHandlers");

	// PhysicsContactEffectSystemSettings
	set_name(0x14e89d0, "PhysicsContactEffectSystemSettings");
	apply_type(0x14e89d0, "RTTICompound");
	del_items(0x14e9f84, DELIT_SIMPLE, 8);
	apply_type(0x14e9f84, "RTTIBase[1]");
	set_name(0x14e9f84, "PhysicsContactEffectSystemSettings::sBases");
	del_items(0x14e9f8c, DELIT_SIMPLE, 196);
	apply_type(0x14e9f8c, "RTTIAttr[7]");
	set_name(0x14e9f8c, "PhysicsContactEffectSystemSettings::sAttrs");

	// PhysicsDamageImpulseModifier
	set_name(0x14e808c, "PhysicsDamageImpulseModifier");
	apply_type(0x14e808c, "RTTICompound");
	del_items(0x14e99a0, DELIT_SIMPLE, 56);
	apply_type(0x14e99a0, "RTTIAttr[2]");
	set_name(0x14e99a0, "PhysicsDamageImpulseModifier::sAttrs");

	// PhysicsFixedConstraintResource
	set_name(0x14c7d50, "PhysicsFixedConstraintResource");
	apply_type(0x14c7d50, "RTTICompound");
	del_items(0x14c80b0, DELIT_SIMPLE, 8);
	apply_type(0x14c80b0, "RTTIBase[1]");
	set_name(0x14c80b0, "PhysicsFixedConstraintResource::sBases");

	// PhysicsHingeConstraintResource
	set_name(0x14c7f04, "PhysicsHingeConstraintResource");
	apply_type(0x14c7f04, "RTTICompound");
	del_items(0x14c8404, DELIT_SIMPLE, 8);
	apply_type(0x14c8404, "RTTIBase[1]");
	set_name(0x14c8404, "PhysicsHingeConstraintResource::sBases");
	del_items(0x14c840c, DELIT_SIMPLE, 84);
	apply_type(0x14c840c, "RTTIAttr[3]");
	set_name(0x14c840c, "PhysicsHingeConstraintResource::sAttrs");

	// PhysicsImpulseEventInstance
	set_name(0x151d540, "PhysicsImpulseEventInstance");
	apply_type(0x151d540, "RTTICompound");
	del_items(0x151f23c, DELIT_SIMPLE, 8);
	apply_type(0x151f23c, "RTTIBase[1]");
	set_name(0x151f23c, "PhysicsImpulseEventInstance::sBases");

	// PhysicsImpulseEventResource
	set_name(0x151d4ec, "PhysicsImpulseEventResource");
	apply_type(0x151d4ec, "RTTICompound");
	del_items(0x151f18c, DELIT_SIMPLE, 8);
	apply_type(0x151f18c, "RTTIBase[1]");
	set_name(0x151f18c, "PhysicsImpulseEventResource::sBases");
	del_items(0x151f194, DELIT_SIMPLE, 168);
	apply_type(0x151f194, "RTTIAttr[6]");
	set_name(0x151f194, "PhysicsImpulseEventResource::sAttrs");

	// PhysicsInstance
	set_name(0x14c65c0, "PhysicsInstance");
	apply_type(0x14c65c0, "RTTICompound");
	del_items(0x14c68d0, DELIT_SIMPLE, 8);
	apply_type(0x14c68d0, "RTTIBase[1]");
	set_name(0x14c68d0, "PhysicsInstance::sBases");
	del_items(0x14c68d8, DELIT_SIMPLE, 112);
	apply_type(0x14c68d8, "RTTIAttr[4]");
	set_name(0x14c68d8, "PhysicsInstance::sAttrs");

	// PhysicsLimitedHingeConstraintResource
	set_name(0x14c7da4, "PhysicsLimitedHingeConstraintResource");
	apply_type(0x14c7da4, "RTTICompound");
	del_items(0x14c80b8, DELIT_SIMPLE, 8);
	apply_type(0x14c80b8, "RTTIBase[1]");
	set_name(0x14c80b8, "PhysicsLimitedHingeConstraintResource::sBases");
	del_items(0x14c80c0, DELIT_SIMPLE, 196);
	apply_type(0x14c80c0, "RTTIAttr[7]");
	set_name(0x14c80c0, "PhysicsLimitedHingeConstraintResource::sAttrs");

	// PhysicsModelMover
	set_name(0x14e7f80, "PhysicsModelMover");
	apply_type(0x14e7f80, "RTTICompound");
	del_items(0x14e9990, DELIT_SIMPLE, 8);
	apply_type(0x14e9990, "RTTIBase[1]");
	set_name(0x14e9990, "PhysicsModelMover::sBases");

	// PhysicsModelMoverResource
	set_name(0x14e7fd4, "PhysicsModelMoverResource");
	apply_type(0x14e7fd4, "RTTICompound");
	del_items(0x14e9998, DELIT_SIMPLE, 8);
	apply_type(0x14e9998, "RTTIBase[1]");
	set_name(0x14e9998, "PhysicsModelMoverResource::sBases");

	// PhysicsMover
	set_name(0x14e8028, "PhysicsMover");
	apply_type(0x14e8028, "RTTICompound");
	del_items(0x14e9b4c, DELIT_SIMPLE, 8);
	apply_type(0x14e9b4c, "RTTIBase[1]");
	set_name(0x14e9b4c, "PhysicsMover::sBases");

	// PhysicsMoverResource
	set_name(0x14e80e0, "PhysicsMoverResource");
	apply_type(0x14e80e0, "RTTICompound");
	del_items(0x14e99d8, DELIT_SIMPLE, 8);
	apply_type(0x14e99d8, "RTTIBase[1]");
	set_name(0x14e99d8, "PhysicsMoverResource::sBases");
	del_items(0x14e99e0, DELIT_SIMPLE, 364);
	apply_type(0x14e99e0, "RTTIAttr[13]");
	set_name(0x14e99e0, "PhysicsMoverResource::sAttrs");

	// PhysicsPhantom
	set_name(0x14c64b4, "PhysicsPhantom");
	apply_type(0x14c64b4, "RTTICompound");

	// PhysicsPrismaticConstraintResource
	set_name(0x14c7e5c, "PhysicsPrismaticConstraintResource");
	apply_type(0x14c7e5c, "RTTICompound");
	del_items(0x14c82f8, DELIT_SIMPLE, 8);
	apply_type(0x14c82f8, "RTTIBase[1]");
	set_name(0x14c82f8, "PhysicsPrismaticConstraintResource::sBases");
	del_items(0x14c8300, DELIT_SIMPLE, 168);
	apply_type(0x14c8300, "RTTIAttr[6]");
	set_name(0x14c8300, "PhysicsPrismaticConstraintResource::sAttrs");

	// PhysicsRagdollBodyControlData
	set_name(0x14c7548, "PhysicsRagdollBodyControlData");
	apply_type(0x14c7548, "RTTICompound");
	del_items(0x14c7808, DELIT_SIMPLE, 336);
	apply_type(0x14c7808, "RTTIAttr[12]");
	set_name(0x14c7808, "PhysicsRagdollBodyControlData::sAttrs");

	// PhysicsRagdollBodyControllerResource
	set_name(0x14c75ac, "PhysicsRagdollBodyControllerResource");
	apply_type(0x14c75ac, "RTTICompound");
	del_items(0x14c7958, DELIT_SIMPLE, 8);
	apply_type(0x14c7958, "RTTIBase[1]");
	set_name(0x14c7958, "PhysicsRagdollBodyControllerResource::sBases");
	del_items(0x14c7960, DELIT_SIMPLE, 420);
	apply_type(0x14c7960, "RTTIAttr[15]");
	set_name(0x14c7960, "PhysicsRagdollBodyControllerResource::sAttrs");

	// PhysicsRagdollConstraintResource
	set_name(0x14c7e08, "PhysicsRagdollConstraintResource");
	apply_type(0x14c7e08, "RTTICompound");
	del_items(0x14c8184, DELIT_SIMPLE, 8);
	apply_type(0x14c8184, "RTTIBase[1]");
	set_name(0x14c8184, "PhysicsRagdollConstraintResource::sBases");
	del_items(0x14c818c, DELIT_SIMPLE, 364);
	apply_type(0x14c818c, "RTTIAttr[13]");
	set_name(0x14c818c, "PhysicsRagdollConstraintResource::sAttrs");

	// PhysicsRagdollInstance
	set_name(0x14c741c, "PhysicsRagdollInstance");
	apply_type(0x14c741c, "RTTICompound");
	del_items(0x14c7c3c, DELIT_SIMPLE, 8);
	apply_type(0x14c7c3c, "RTTIBase[1]");
	set_name(0x14c7c3c, "PhysicsRagdollInstance::sBases");

	// PhysicsRagdollMotorControlData
	set_name(0x14c7480, "PhysicsRagdollMotorControlData");
	apply_type(0x14c7480, "RTTICompound");
	del_items(0x14c773c, DELIT_SIMPLE, 140);
	apply_type(0x14c773c, "RTTIAttr[5]");
	set_name(0x14c773c, "PhysicsRagdollMotorControlData::sAttrs");

	// PhysicsRagdollMotorsResource
	set_name(0x14c74e4, "PhysicsRagdollMotorsResource");
	apply_type(0x14c74e4, "RTTICompound");
	del_items(0x14c77c8, DELIT_SIMPLE, 8);
	apply_type(0x14c77c8, "RTTIBase[1]");
	set_name(0x14c77c8, "PhysicsRagdollMotorsResource::sBases");
	del_items(0x14c77d0, DELIT_SIMPLE, 56);
	apply_type(0x14c77d0, "RTTIAttr[2]");
	set_name(0x14c77d0, "PhysicsRagdollMotorsResource::sAttrs");

	// PhysicsRagdollResource
	set_name(0x14c7610, "PhysicsRagdollResource");
	apply_type(0x14c7610, "RTTICompound");
	del_items(0x14c7b04, DELIT_SIMPLE, 8);
	apply_type(0x14c7b04, "RTTIBase[1]");
	set_name(0x14c7b04, "PhysicsRagdollResource::sBases");
	del_items(0x14c7b0c, DELIT_SIMPLE, 280);
	apply_type(0x14c7b0c, "RTTIAttr[10]");
	set_name(0x14c7b0c, "PhysicsRagdollResource::sAttrs");
	del_items(0x14c7c24, DELIT_SIMPLE, 24);
	apply_type(0x14c7c24, "RTTIMessageHandler[2]");
	set_name(0x14c7c24, "PhysicsRagdollResource::sMessageHandlers");

	// PhysicsResource
	set_name(0x14c6624, "PhysicsResource");
	apply_type(0x14c6624, "RTTICompound");
	del_items(0x14c6948, DELIT_SIMPLE, 8);
	apply_type(0x14c6948, "RTTIBase[1]");
	set_name(0x14c6948, "PhysicsResource::sBases");
	del_items(0x14c6950, DELIT_SIMPLE, 112);
	apply_type(0x14c6950, "RTTIAttr[4]");
	set_name(0x14c6950, "PhysicsResource::sAttrs");

	// PhysicsRigidBodyPhantomProxy
	set_name(0x14c7f58, "PhysicsRigidBodyPhantomProxy");
	apply_type(0x14c7f58, "RTTICompound");
	del_items(0x14c8474, DELIT_SIMPLE, 8);
	apply_type(0x14c8474, "RTTIBase[1]");
	set_name(0x14c8474, "PhysicsRigidBodyPhantomProxy::sBases");

	// PhysicsSkeleton
	set_name(0x14c7674, "PhysicsSkeleton");
	apply_type(0x14c7674, "RTTICompound");
	del_items(0x14c76c8, DELIT_SIMPLE, 8);
	apply_type(0x14c76c8, "RTTIBase[1]");
	set_name(0x14c76c8, "PhysicsSkeleton::sBases");
	del_items(0x14c76d0, DELIT_SIMPLE, 84);
	apply_type(0x14c76d0, "RTTIAttr[3]");
	set_name(0x14c76d0, "PhysicsSkeleton::sAttrs");
	del_items(0x14c7724, DELIT_SIMPLE, 24);
	apply_type(0x14c7724, "RTTIMessageHandler[2]");
	set_name(0x14c7724, "PhysicsSkeleton::sMessageHandlers");

	// PhysicsSpherePhantom
	set_name(0x14c655c, "PhysicsSpherePhantom");
	apply_type(0x14c655c, "RTTICompound");
	del_items(0x14c6ce8, DELIT_SIMPLE, 8);
	apply_type(0x14c6ce8, "RTTIBase[1]");
	set_name(0x14c6ce8, "PhysicsSpherePhantom::sBases");

	// PhysicsStiffSpringConstraintResource
	set_name(0x14c7eb0, "PhysicsStiffSpringConstraintResource");
	apply_type(0x14c7eb0, "RTTICompound");
	del_items(0x14c83a8, DELIT_SIMPLE, 8);
	apply_type(0x14c83a8, "RTTIBase[1]");
	set_name(0x14c83a8, "PhysicsStiffSpringConstraintResource::sBases");
	del_items(0x14c83b0, DELIT_SIMPLE, 84);
	apply_type(0x14c83b0, "RTTIAttr[3]");
	set_name(0x14c83b0, "PhysicsStiffSpringConstraintResource::sAttrs");

	// PhysicsVehicleInstance
	set_name(0x14c6460, "PhysicsVehicleInstance");
	apply_type(0x14c6460, "RTTICompound");
	del_items(0x14c7258, DELIT_SIMPLE, 8);
	apply_type(0x14c7258, "RTTIBase[1]");
	set_name(0x14c7258, "PhysicsVehicleInstance::sBases");
	del_items(0x14c7260, DELIT_SIMPLE, 12);
	apply_type(0x14c7260, "RTTIMessageHandler[1]");
	set_name(0x14c7260, "PhysicsVehicleInstance::sMessageHandlers");

	// PhysicsVehicleResource
	set_name(0x14c6770, "PhysicsVehicleResource");
	apply_type(0x14c6770, "RTTICompound");
	del_items(0x14c6ea8, DELIT_SIMPLE, 8);
	apply_type(0x14c6ea8, "RTTIBase[1]");
	set_name(0x14c6ea8, "PhysicsVehicleResource::sBases");
	del_items(0x14c6eb0, DELIT_SIMPLE, 924);
	apply_type(0x14c6eb0, "RTTIAttr[33]");
	set_name(0x14c6eb0, "PhysicsVehicleResource::sAttrs");
	del_items(0x14c724c, DELIT_SIMPLE, 12);
	apply_type(0x14c724c, "RTTIMessageHandler[1]");
	set_name(0x14c724c, "PhysicsVehicleResource::sMessageHandlers");

	// PhysicsVehicleWheelInfo
	set_name(0x14c670c, "PhysicsVehicleWheelInfo");
	apply_type(0x14c670c, "RTTICompound");
	del_items(0x14c6d04, DELIT_SIMPLE, 420);
	apply_type(0x14c6d04, "RTTIAttr[15]");
	set_name(0x14c6d04, "PhysicsVehicleWheelInfo::sAttrs");

	// PhysicsWaterPool
	set_name(0x14c6828, "PhysicsWaterPool");
	apply_type(0x14c6828, "RTTICompound");
	del_items(0x14c6cf0, DELIT_SIMPLE, 8);
	apply_type(0x14c6cf0, "RTTIBase[1]");
	set_name(0x14c6cf0, "PhysicsWaterPool::sBases");
	del_items(0x14c6cf8, DELIT_SIMPLE, 12);
	apply_type(0x14c6cf8, "RTTIMessageHandler[1]");
	set_name(0x14c6cf8, "PhysicsWaterPool::sMessageHandlers");

	// PhysicsWaterPoolResource
	set_name(0x14c687c, "PhysicsWaterPoolResource");
	apply_type(0x14c687c, "RTTICompound");
	del_items(0x14c7378, DELIT_SIMPLE, 8);
	apply_type(0x14c7378, "RTTIBase[1]");
	set_name(0x14c7378, "PhysicsWaterPoolResource::sBases");
	del_items(0x14c7380, DELIT_SIMPLE, 140);
	apply_type(0x14c7380, "RTTIAttr[5]");
	set_name(0x14c7380, "PhysicsWaterPoolResource::sAttrs");

	// PhysicsWorld
	set_name(0x14c861c, "PhysicsWorld");
	apply_type(0x14c861c, "RTTICompound");
	del_items(0x14c8674, DELIT_SIMPLE, 8);
	apply_type(0x14c8674, "RTTIBase[1]");
	set_name(0x14c8674, "PhysicsWorld::sBases");
	del_items(0x14c867c, DELIT_SIMPLE, 48);
	apply_type(0x14c867c, "RTTIFunction[2]");
	set_name(0x14c867c, "PhysicsWorld::sFunctions");

	// PickUp
	set_name(0x1517d64, "PickUp");
	apply_type(0x1517d64, "RTTICompound");
	del_items(0x1518014, DELIT_SIMPLE, 16);
	apply_type(0x1518014, "RTTIBase[2]");
	set_name(0x1518014, "PickUp::sBases");
	del_items(0x1518024, DELIT_SIMPLE, 112);
	apply_type(0x1518024, "RTTIAttr[4]");
	set_name(0x1518024, "PickUp::sAttrs");
	del_items(0x1518094, DELIT_SIMPLE, 24);
	apply_type(0x1518094, "RTTIFunction[1]");
	set_name(0x1518094, "PickUp::sFunctions");

	// PickUpDropAmmoPickUp
	set_name(0x1518ab4, "PickUpDropAmmoPickUp");
	apply_type(0x1518ab4, "RTTICompound");
	del_items(0x151aaac, DELIT_SIMPLE, 112);
	apply_type(0x151aaac, "RTTIAttr[4]");
	set_name(0x151aaac, "PickUpDropAmmoPickUp::sAttrs");

	// PickUpDropEntity
	set_name(0x15189fc, "PickUpDropEntity");
	apply_type(0x15189fc, "RTTICompound");
	del_items(0x151aa04, DELIT_SIMPLE, 8);
	apply_type(0x151aa04, "RTTIBase[1]");
	set_name(0x151aa04, "PickUpDropEntity::sBases");

	// PickUpDropEntityResource
	set_name(0x1518a50, "PickUpDropEntityResource");
	apply_type(0x1518a50, "RTTICompound");
	del_items(0x151aa18, DELIT_SIMPLE, 8);
	apply_type(0x151aa18, "RTTIBase[1]");
	set_name(0x151aa18, "PickUpDropEntityResource::sBases");
	del_items(0x151aa20, DELIT_SIMPLE, 140);
	apply_type(0x151aa20, "RTTIAttr[5]");
	set_name(0x151aa20, "PickUpDropEntityResource::sAttrs");

	// PickUpDropRandomPickUp
	set_name(0x1518b18, "PickUpDropRandomPickUp");
	apply_type(0x1518b18, "RTTICompound");
	del_items(0x151ab1c, DELIT_SIMPLE, 84);
	apply_type(0x151ab1c, "RTTIAttr[3]");
	set_name(0x151ab1c, "PickUpDropRandomPickUp::sAttrs");

	// PickUpDropResourceWithOdds
	set_name(0x1518b7c, "PickUpDropResourceWithOdds");
	apply_type(0x1518b7c, "RTTICompound");
	del_items(0x151ab70, DELIT_SIMPLE, 84);
	apply_type(0x151ab70, "RTTIAttr[3]");
	set_name(0x151ab70, "PickUpDropResourceWithOdds::sAttrs");

	// PickUpDropSettings
	set_name(0x1518be0, "PickUpDropSettings");
	apply_type(0x1518be0, "RTTICompound");
	del_items(0x151abc4, DELIT_SIMPLE, 8);
	apply_type(0x151abc4, "RTTIBase[1]");
	set_name(0x151abc4, "PickUpDropSettings::sBases");
	del_items(0x151abcc, DELIT_SIMPLE, 112);
	apply_type(0x151abcc, "RTTIAttr[4]");
	set_name(0x151abcc, "PickUpDropSettings::sAttrs");

	// PickUpResource
	set_name(0x1518c54, "PickUpResource");
	apply_type(0x1518c54, "RTTICompound");
	del_items(0x151ac3c, DELIT_SIMPLE, 8);
	apply_type(0x151ac3c, "RTTIBase[1]");
	set_name(0x151ac3c, "PickUpResource::sBases");
	del_items(0x151ac44, DELIT_SIMPLE, 336);
	apply_type(0x151ac44, "RTTIAttr[12]");
	set_name(0x151ac44, "PickUpResource::sAttrs");

	// PilotLightSettings
	set_name(0x15247dc, "PilotLightSettings");
	apply_type(0x15247dc, "RTTICompound");
	del_items(0x1525624, DELIT_SIMPLE, 56);
	apply_type(0x1525624, "RTTIAttr[2]");
	set_name(0x1525624, "PilotLightSettings::sAttrs");

	// PipePuzzleEntity
	set_name(0x154b58c, "PipePuzzleEntity");
	apply_type(0x154b58c, "RTTICompound");
	del_items(0x154c0e4, DELIT_SIMPLE, 8);
	apply_type(0x154c0e4, "RTTIBase[1]");
	set_name(0x154c0e4, "PipePuzzleEntity::sBases");

	// PipePuzzleEntityController
	set_name(0x154b688, "PipePuzzleEntityController");
	apply_type(0x154b688, "RTTICompound");
	del_items(0x154c0ec, DELIT_SIMPLE, 8);
	apply_type(0x154c0ec, "RTTIBase[1]");
	set_name(0x154c0ec, "PipePuzzleEntityController::sBases");

	// PipePuzzleEntityResource
	set_name(0x154b634, "PipePuzzleEntityResource");
	apply_type(0x154b634, "RTTICompound");
	del_items(0x154c0dc, DELIT_SIMPLE, 8);
	apply_type(0x154c0dc, "RTTIBase[1]");
	set_name(0x154c0dc, "PipePuzzleEntityResource::sBases");

	// PipePuzzleUser
	set_name(0x154b5e0, "PipePuzzleUser");
	apply_type(0x154b5e0, "RTTICompound");
	del_items(0x154c0c8, DELIT_SIMPLE, 8);
	apply_type(0x154c0c8, "RTTIBase[1]");
	set_name(0x154c0c8, "PipePuzzleUser::sBases");

	// PivotFollowCameraEntity
	set_name(0x15013b8, "PivotFollowCameraEntity");
	apply_type(0x15013b8, "RTTICompound");
	del_items(0x15021dc, DELIT_SIMPLE, 8);
	apply_type(0x15021dc, "RTTIBase[1]");
	set_name(0x15021dc, "PivotFollowCameraEntity::sBases");

	// PivotFollowCameraEntityResource
	set_name(0x150141c, "PivotFollowCameraEntityResource");
	apply_type(0x150141c, "RTTICompound");
	del_items(0x150212c, DELIT_SIMPLE, 8);
	apply_type(0x150212c, "RTTIBase[1]");
	set_name(0x150212c, "PivotFollowCameraEntityResource::sBases");
	del_items(0x1502134, DELIT_SIMPLE, 168);
	apply_type(0x1502134, "RTTIAttr[6]");
	set_name(0x1502134, "PivotFollowCameraEntityResource::sAttrs");

	// PlaceOnLocatorEventInstance
	set_name(0x151d5e8, "PlaceOnLocatorEventInstance");
	apply_type(0x151d5e8, "RTTICompound");
	del_items(0x151e774, DELIT_SIMPLE, 8);
	apply_type(0x151e774, "RTTIBase[1]");
	set_name(0x151e774, "PlaceOnLocatorEventInstance::sBases");

	// PlaceOnLocatorEventResource
	set_name(0x151d594, "PlaceOnLocatorEventResource");
	apply_type(0x151d594, "RTTICompound");
	del_items(0x151e6c4, DELIT_SIMPLE, 8);
	apply_type(0x151e6c4, "RTTIBase[1]");
	set_name(0x151e6c4, "PlaceOnLocatorEventResource::sBases");
	del_items(0x151e6cc, DELIT_SIMPLE, 168);
	apply_type(0x151e6cc, "RTTIAttr[6]");
	set_name(0x151e6cc, "PlaceOnLocatorEventResource::sAttrs");

	// Placeable
	set_name(0x1526114, "Placeable");
	apply_type(0x1526114, "RTTICompound");
	del_items(0x15270ec, DELIT_SIMPLE, 8);
	apply_type(0x15270ec, "RTTIBase[1]");
	set_name(0x15270ec, "Placeable::sBases");

	// PlaceableResource
	set_name(0x1526178, "PlaceableResource");
	apply_type(0x1526178, "RTTICompound");
	del_items(0x1526ebc, DELIT_SIMPLE, 8);
	apply_type(0x1526ebc, "RTTIBase[1]");
	set_name(0x1526ebc, "PlaceableResource::sBases");
	del_items(0x1526ec4, DELIT_SIMPLE, 112);
	apply_type(0x1526ec4, "RTTIAttr[4]");
	set_name(0x1526ec4, "PlaceableResource::sAttrs");

	// PlaneEq
	set_name(0x14adcdc, "PlaneEq");
	apply_type(0x14adcdc, "RTTICompound");
	del_items(0x14ade40, DELIT_SIMPLE, 56);
	apply_type(0x14ade40, "RTTIAttr[2]");
	set_name(0x14ade40, "PlaneEq::sAttrs");

	// PlayAnimationObject
	set_name(0x15057dc, "PlayAnimationObject");
	apply_type(0x15057dc, "RTTICompound");
	del_items(0x1507378, DELIT_SIMPLE, 8);
	apply_type(0x1507378, "RTTIBase[1]");
	set_name(0x1507378, "PlayAnimationObject::sBases");
	del_items(0x1507380, DELIT_SIMPLE, 84);
	apply_type(0x1507380, "RTTIAttr[3]");
	set_name(0x1507380, "PlayAnimationObject::sAttrs");
	del_items(0x15073d4, DELIT_SIMPLE, 24);
	apply_type(0x15073d4, "RTTIFunction[1]");
	set_name(0x15073d4, "PlayAnimationObject::sFunctions");

	// PlayAnimationObjectActorInstance
	set_name(0x15205f8, "PlayAnimationObjectActorInstance");
	apply_type(0x15205f8, "RTTICompound");
	del_items(0x1521854, DELIT_SIMPLE, 8);
	apply_type(0x1521854, "RTTIBase[1]");
	set_name(0x1521854, "PlayAnimationObjectActorInstance::sBases");

	// PlayAnimationObjectActorResource
	set_name(0x15205a4, "PlayAnimationObjectActorResource");
	apply_type(0x15205a4, "RTTICompound");
	del_items(0x1521814, DELIT_SIMPLE, 8);
	apply_type(0x1521814, "RTTIBase[1]");
	set_name(0x1521814, "PlayAnimationObjectActorResource::sBases");
	del_items(0x152181c, DELIT_SIMPLE, 56);
	apply_type(0x152181c, "RTTIAttr[2]");
	set_name(0x152181c, "PlayAnimationObjectActorResource::sAttrs");

	// PlayAnimationObjectAiController
	set_name(0x1505830, "PlayAnimationObjectAiController");
	apply_type(0x1505830, "RTTICompound");
	del_items(0x15073ec, DELIT_SIMPLE, 8);
	apply_type(0x15073ec, "RTTIBase[1]");
	set_name(0x15073ec, "PlayAnimationObjectAiController::sBases");

	// PlayAnimationObjectRep
	set_name(0x1507994, "PlayAnimationObjectRep");
	apply_type(0x1507994, "RTTICompound");
	del_items(0x1508b88, DELIT_SIMPLE, 8);
	apply_type(0x1508b88, "RTTIBase[1]");
	set_name(0x1508b88, "PlayAnimationObjectRep::sBases");

	// PlayAnimationObjectResource
	set_name(0x15079f8, "PlayAnimationObjectResource");
	apply_type(0x15079f8, "RTTICompound");
	del_items(0x15089c0, DELIT_SIMPLE, 8);
	apply_type(0x15089c0, "RTTIBase[1]");
	set_name(0x15089c0, "PlayAnimationObjectResource::sBases");
	del_items(0x15089c8, DELIT_SIMPLE, 448);
	apply_type(0x15089c8, "RTTIAttr[16]");
	set_name(0x15089c8, "PlayAnimationObjectResource::sAttrs");

	// PlaySingleAnimationObject
	set_name(0x1505884, "PlaySingleAnimationObject");
	apply_type(0x1505884, "RTTICompound");
	del_items(0x150745c, DELIT_SIMPLE, 16);
	apply_type(0x150745c, "RTTIBase[2]");
	set_name(0x150745c, "PlaySingleAnimationObject::sBases");

	// PlaySingleAnimationObjectResource
	set_name(0x15058d8, "PlaySingleAnimationObjectResource");
	apply_type(0x15058d8, "RTTICompound");
	del_items(0x1507400, DELIT_SIMPLE, 8);
	apply_type(0x1507400, "RTTIBase[1]");
	set_name(0x1507400, "PlaySingleAnimationObjectResource::sBases");
	del_items(0x1507408, DELIT_SIMPLE, 84);
	apply_type(0x1507408, "RTTIAttr[3]");
	set_name(0x1507408, "PlaySingleAnimationObjectResource::sAttrs");

	// Player
	set_name(0x14e1f54, "Player");
	apply_type(0x14e1f54, "RTTICompound");
	del_items(0x14e43cc, DELIT_SIMPLE, 8);
	apply_type(0x14e43cc, "RTTIBase[1]");
	set_name(0x14e43cc, "Player::sBases");
	del_items(0x14e43d4, DELIT_SIMPLE, 216);
	apply_type(0x14e43d4, "RTTIFunction[9]");
	set_name(0x14e43d4, "Player::sFunctions");

	// PlayerActorInstance
	set_name(0x15206b0, "PlayerActorInstance");
	apply_type(0x15206b0, "RTTICompound");
	del_items(0x1521508, DELIT_SIMPLE, 8);
	apply_type(0x1521508, "RTTIBase[1]");
	set_name(0x1521508, "PlayerActorInstance::sBases");

	// PlayerActorResource
	set_name(0x152065c, "PlayerActorResource");
	apply_type(0x152065c, "RTTICompound");
	del_items(0x1521500, DELIT_SIMPLE, 8);
	apply_type(0x1521500, "RTTIBase[1]");
	set_name(0x1521500, "PlayerActorResource::sBases");

	// PlayerBoxLookAtUseLocationInfo
	set_name(0x154e0cc, "PlayerBoxLookAtUseLocationInfo");
	apply_type(0x154e0cc, "RTTICompound");
	del_items(0x154ec58, DELIT_SIMPLE, 8);
	apply_type(0x154ec58, "RTTIBase[1]");
	set_name(0x154ec58, "PlayerBoxLookAtUseLocationInfo::sBases");
	del_items(0x154ec60, DELIT_SIMPLE, 84);
	apply_type(0x154ec60, "RTTIAttr[3]");
	set_name(0x154ec60, "PlayerBoxLookAtUseLocationInfo::sAttrs");

	// PlayerCharacter
	set_name(0x1548014, "PlayerCharacter");
	apply_type(0x1548014, "RTTICompound");
	del_items(0x15494c8, DELIT_SIMPLE, 8);
	apply_type(0x15494c8, "RTTIBase[1]");
	set_name(0x15494c8, "PlayerCharacter::sBases");
	del_items(0x15494d0, DELIT_SIMPLE, 1512);
	apply_type(0x15494d0, "RTTIFunction[63]");
	set_name(0x15494d0, "PlayerCharacter::sFunctions");
	del_items(0x1549ab8, DELIT_SIMPLE, 12);
	apply_type(0x1549ab8, "RTTIMessageHandler[1]");
	set_name(0x1549ab8, "PlayerCharacter::sMessageHandlers");

	// PlayerCharacterJoystickController
	set_name(0x15481b8, "PlayerCharacterJoystickController");
	apply_type(0x15481b8, "RTTICompound");
	del_items(0x1549ad4, DELIT_SIMPLE, 8);
	apply_type(0x1549ad4, "RTTIBase[1]");
	set_name(0x1549ad4, "PlayerCharacterJoystickController::sBases");

	// PlayerCharacterMover
	set_name(0x1548110, "PlayerCharacterMover");
	apply_type(0x1548110, "RTTICompound");
	del_items(0x1549acc, DELIT_SIMPLE, 8);
	apply_type(0x1549acc, "RTTIBase[1]");
	set_name(0x1549acc, "PlayerCharacterMover::sBases");

	// PlayerCharacterMoverResource
	set_name(0x1548164, "PlayerCharacterMoverResource");
	apply_type(0x1548164, "RTTICompound");
	del_items(0x1549e48, DELIT_SIMPLE, 8);
	apply_type(0x1549e48, "RTTIBase[1]");
	set_name(0x1549e48, "PlayerCharacterMoverResource::sBases");
	del_items(0x1549e50, DELIT_SIMPLE, 224);
	apply_type(0x1549e50, "RTTIAttr[8]");
	set_name(0x1549e50, "PlayerCharacterMoverResource::sAttrs");

	// PlayerCharacterRep
	set_name(0x15480bc, "PlayerCharacterRep");
	apply_type(0x15480bc, "RTTICompound");
	del_items(0x1549ac4, DELIT_SIMPLE, 8);
	apply_type(0x1549ac4, "RTTIBase[1]");
	set_name(0x1549ac4, "PlayerCharacterRep::sBases");

	// PlayerCharacterResource
	set_name(0x1548068, "PlayerCharacterResource");
	apply_type(0x1548068, "RTTICompound");
	del_items(0x1549194, DELIT_SIMPLE, 8);
	apply_type(0x1549194, "RTTIBase[1]");
	set_name(0x1549194, "PlayerCharacterResource::sBases");
	del_items(0x154919c, DELIT_SIMPLE, 812);
	apply_type(0x154919c, "RTTIAttr[29]");
	set_name(0x154919c, "PlayerCharacterResource::sAttrs");

	// PlayerGame
	set_name(0x14efe6c, "PlayerGame");
	apply_type(0x14efe6c, "RTTICompound");
	del_items(0x14f120c, DELIT_SIMPLE, 8);
	apply_type(0x14f120c, "RTTIBase[1]");
	set_name(0x14f120c, "PlayerGame::sBases");
	del_items(0x14f1214, DELIT_SIMPLE, 984);
	apply_type(0x14f1214, "RTTIFunction[41]");
	set_name(0x14f1214, "PlayerGame::sFunctions");

	// PlayerHeldItem
	set_name(0x154a514, "PlayerHeldItem");
	apply_type(0x154a514, "RTTICompound");
	del_items(0x154ac60, DELIT_SIMPLE, 8);
	apply_type(0x154ac60, "RTTIBase[1]");
	set_name(0x154ac60, "PlayerHeldItem::sBases");

	// PlayerHeldItemMover
	set_name(0x154a370, "PlayerHeldItemMover");
	apply_type(0x154a370, "RTTICompound");
	del_items(0x154abf0, DELIT_SIMPLE, 8);
	apply_type(0x154abf0, "RTTIBase[1]");
	set_name(0x154abf0, "PlayerHeldItemMover::sBases");

	// PlayerHeldItemMoverResource
	set_name(0x154a3c4, "PlayerHeldItemMoverResource");
	apply_type(0x154a3c4, "RTTICompound");
	del_items(0x154ac68, DELIT_SIMPLE, 8);
	apply_type(0x154ac68, "RTTIBase[1]");
	set_name(0x154ac68, "PlayerHeldItemMoverResource::sBases");
	del_items(0x154ac70, DELIT_SIMPLE, 28);
	apply_type(0x154ac70, "RTTIAttr[1]");
	set_name(0x154ac70, "PlayerHeldItemMoverResource::sAttrs");

	// PlayerHeldItemRep
	set_name(0x154a568, "PlayerHeldItemRep");
	apply_type(0x154a568, "RTTICompound");
	del_items(0x154ac94, DELIT_SIMPLE, 8);
	apply_type(0x154ac94, "RTTIBase[1]");
	set_name(0x154ac94, "PlayerHeldItemRep::sBases");

	// PlayerHeldItemResource
	set_name(0x154a5bc, "PlayerHeldItemResource");
	apply_type(0x154a5bc, "RTTICompound");
	del_items(0x154ac20, DELIT_SIMPLE, 8);
	apply_type(0x154ac20, "RTTIBase[1]");
	set_name(0x154ac20, "PlayerHeldItemResource::sBases");
	del_items(0x154ac28, DELIT_SIMPLE, 56);
	apply_type(0x154ac28, "RTTIAttr[2]");
	set_name(0x154ac28, "PlayerHeldItemResource::sAttrs");

	// PlayerInteraction
	set_name(0x154df28, "PlayerInteraction");
	apply_type(0x154df28, "RTTICompound");

	// PlayerInteractionActivation
	set_name(0x154df7c, "PlayerInteractionActivation");
	apply_type(0x154df7c, "RTTICompound");
	del_items(0x154ec24, DELIT_SIMPLE, 8);
	apply_type(0x154ec24, "RTTIBase[1]");
	set_name(0x154ec24, "PlayerInteractionActivation::sBases");

	// PlayerInteractionActivationAutoUse
	set_name(0x154e120, "PlayerInteractionActivationAutoUse");
	apply_type(0x154e120, "RTTICompound");
	del_items(0x154edc0, DELIT_SIMPLE, 8);
	apply_type(0x154edc0, "RTTIBase[1]");
	set_name(0x154edc0, "PlayerInteractionActivationAutoUse::sBases");

	// PlayerInteractionActivationAutoUseResource
	set_name(0x154e174, "PlayerInteractionActivationAutoUseResource");
	apply_type(0x154e174, "RTTICompound");
	del_items(0x154edc8, DELIT_SIMPLE, 8);
	apply_type(0x154edc8, "RTTIBase[1]");
	set_name(0x154edc8, "PlayerInteractionActivationAutoUseResource::sBases");

	// PlayerInteractionActivationResource
	set_name(0x154dfd0, "PlayerInteractionActivationResource");
	apply_type(0x154dfd0, "RTTICompound");
	del_items(0x154ecb4, DELIT_SIMPLE, 8);
	apply_type(0x154ecb4, "RTTIBase[1]");
	set_name(0x154ecb4, "PlayerInteractionActivationResource::sBases");

	// PlayerInteractionUser
	set_name(0x154e1c8, "PlayerInteractionUser");
	apply_type(0x154e1c8, "RTTICompound");
	del_items(0x154edd0, DELIT_SIMPLE, 8);
	apply_type(0x154edd0, "RTTIBase[1]");
	set_name(0x154edd0, "PlayerInteractionUser::sBases");

	// PlayerLookAtTargetEventInstance
	set_name(0x151d690, "PlayerLookAtTargetEventInstance");
	apply_type(0x151d690, "RTTICompound");
	del_items(0x151f310, DELIT_SIMPLE, 8);
	apply_type(0x151f310, "RTTIBase[1]");
	set_name(0x151f310, "PlayerLookAtTargetEventInstance::sBases");

	// PlayerLookAtTargetEventResource
	set_name(0x151d63c, "PlayerLookAtTargetEventResource");
	apply_type(0x151d63c, "RTTICompound");
	del_items(0x151f244, DELIT_SIMPLE, 8);
	apply_type(0x151f244, "RTTIBase[1]");
	set_name(0x151f244, "PlayerLookAtTargetEventResource::sBases");
	del_items(0x151f24c, DELIT_SIMPLE, 196);
	apply_type(0x151f24c, "RTTIAttr[7]");
	set_name(0x151f24c, "PlayerLookAtTargetEventResource::sAttrs");

	// PlayerLookatInteractionActivation
	set_name(0x154e564, "PlayerLookatInteractionActivation");
	apply_type(0x154e564, "RTTICompound");
	del_items(0x154f830, DELIT_SIMPLE, 8);
	apply_type(0x154f830, "RTTIBase[1]");
	set_name(0x154f830, "PlayerLookatInteractionActivation::sBases");

	// PlayerLookatInteractionActivationResource
	set_name(0x154e60c, "PlayerLookatInteractionActivationResource");
	apply_type(0x154e60c, "RTTICompound");
	del_items(0x154f8e8, DELIT_SIMPLE, 8);
	apply_type(0x154f8e8, "RTTIBase[1]");
	set_name(0x154f8e8, "PlayerLookatInteractionActivationResource::sBases");

	// PlayerLookatInteractionEntity
	set_name(0x154e5b8, "PlayerLookatInteractionEntity");
	apply_type(0x154e5b8, "RTTICompound");
	del_items(0x154f838, DELIT_SIMPLE, 8);
	apply_type(0x154f838, "RTTIBase[1]");
	set_name(0x154f838, "PlayerLookatInteractionEntity::sBases");
	del_items(0x154f840, DELIT_SIMPLE, 168);
	apply_type(0x154f840, "RTTIAttr[6]");
	set_name(0x154f840, "PlayerLookatInteractionEntity::sAttrs");

	// PlayerLookatInteractionEntityResource
	set_name(0x154e660, "PlayerLookatInteractionEntityResource");
	apply_type(0x154e660, "RTTICompound");
	del_items(0x154f8fc, DELIT_SIMPLE, 8);
	apply_type(0x154f8fc, "RTTIBase[1]");
	set_name(0x154f8fc, "PlayerLookatInteractionEntityResource::sBases");

	// PlayerOrAiAction
	set_name(0x14f8b7c, "PlayerOrAiAction");
	apply_type(0x14f8b7c, "RTTICompound");
	del_items(0x14fd55c, DELIT_SIMPLE, 8);
	apply_type(0x14fd55c, "RTTIBase[1]");
	set_name(0x14fd55c, "PlayerOrAiAction::sBases");
	del_items(0x14fd564, DELIT_SIMPLE, 84);
	apply_type(0x14fd564, "RTTIAttr[3]");
	set_name(0x14fd564, "PlayerOrAiAction::sAttrs");

	// PlayerPointLookAtUseLocationInfo
	set_name(0x154e078, "PlayerPointLookAtUseLocationInfo");
	apply_type(0x154e078, "RTTICompound");
	del_items(0x154ec34, DELIT_SIMPLE, 8);
	apply_type(0x154ec34, "RTTIBase[1]");
	set_name(0x154ec34, "PlayerPointLookAtUseLocationInfo::sBases");
	del_items(0x154ec3c, DELIT_SIMPLE, 28);
	apply_type(0x154ec3c, "RTTIAttr[1]");
	set_name(0x154ec3c, "PlayerPointLookAtUseLocationInfo::sAttrs");

	// PlayerProfile
	set_name(0x14eadb8, "PlayerProfile");
	apply_type(0x14eadb8, "RTTICompound");
	del_items(0x14ebebc, DELIT_SIMPLE, 8);
	apply_type(0x14ebebc, "RTTIBase[1]");
	set_name(0x14ebebc, "PlayerProfile::sBases");

	// PlayerRank
	set_name(0x14f047c, "PlayerRank");
	apply_type(0x14f047c, "RTTICompound");
	del_items(0x14f2688, DELIT_SIMPLE, 224);
	apply_type(0x14f2688, "RTTIAttr[8]");
	set_name(0x14f2688, "PlayerRank::sAttrs");

	// PlayerRanksResource
	set_name(0x14f04d0, "PlayerRanksResource");
	apply_type(0x14f04d0, "RTTICompound");
	del_items(0x14f2768, DELIT_SIMPLE, 8);
	apply_type(0x14f2768, "RTTIBase[1]");
	set_name(0x14f2768, "PlayerRanksResource::sBases");
	del_items(0x14f2770, DELIT_SIMPLE, 112);
	apply_type(0x14f2770, "RTTIAttr[4]");
	set_name(0x14f2770, "PlayerRanksResource::sAttrs");
	del_items(0x14f27e0, DELIT_SIMPLE, 192);
	apply_type(0x14f27e0, "RTTIFunction[8]");
	set_name(0x14f27e0, "PlayerRanksResource::sFunctions");
	del_items(0x14f28a0, DELIT_SIMPLE, 12);
	apply_type(0x14f28a0, "RTTIMessageHandler[1]");
	set_name(0x14f28a0, "PlayerRanksResource::sMessageHandlers");

	// PlayerScore
	set_name(0x14f0418, "PlayerScore");
	apply_type(0x14f0418, "RTTICompound");
	del_items(0x14f18f8, DELIT_SIMPLE, 8);
	apply_type(0x14f18f8, "RTTIBase[1]");
	set_name(0x14f18f8, "PlayerScore::sBases");

	// PlayerTurnAndPitchResource
	set_name(0x154820c, "PlayerTurnAndPitchResource");
	apply_type(0x154820c, "RTTICompound");
	del_items(0x1549f30, DELIT_SIMPLE, 8);
	apply_type(0x1549f30, "RTTIBase[1]");
	set_name(0x1549f30, "PlayerTurnAndPitchResource::sBases");
	del_items(0x1549f38, DELIT_SIMPLE, 28);
	apply_type(0x1549f38, "RTTIAttr[1]");
	set_name(0x1549f38, "PlayerTurnAndPitchResource::sAttrs");

	// PlayerUseLocationInfo
	set_name(0x154e024, "PlayerUseLocationInfo");
	apply_type(0x154e024, "RTTICompound");
	del_items(0x154ec2c, DELIT_SIMPLE, 8);
	apply_type(0x154ec2c, "RTTIBase[1]");
	set_name(0x154ec2c, "PlayerUseLocationInfo::sBases");

	// PortableSpawnGrenade
	set_name(0x1513de0, "PortableSpawnGrenade");
	apply_type(0x1513de0, "RTTICompound");
	del_items(0x1516a9c, DELIT_SIMPLE, 8);
	apply_type(0x1516a9c, "RTTIBase[1]");
	set_name(0x1516a9c, "PortableSpawnGrenade::sBases");

	// PortableSpawnGrenadeResource
	set_name(0x1517124, "PortableSpawnGrenadeResource");
	apply_type(0x1517124, "RTTICompound");
	del_items(0x1517dc4, DELIT_SIMPLE, 8);
	apply_type(0x1517dc4, "RTTIBase[1]");
	set_name(0x1517dc4, "PortableSpawnGrenadeResource::sBases");
	del_items(0x1517dcc, DELIT_SIMPLE, 168);
	apply_type(0x1517dcc, "RTTIAttr[6]");
	set_name(0x1517dcc, "PortableSpawnGrenadeResource::sAttrs");

	// PortableTurret
	set_name(0x1517220, "PortableTurret");
	apply_type(0x1517220, "RTTICompound");
	del_items(0x15180ac, DELIT_SIMPLE, 8);
	apply_type(0x15180ac, "RTTIBase[1]");
	set_name(0x15180ac, "PortableTurret::sBases");

	// PortableTurretRep
	set_name(0x1517274, "PortableTurretRep");
	apply_type(0x1517274, "RTTICompound");
	del_items(0x151818c, DELIT_SIMPLE, 8);
	apply_type(0x151818c, "RTTIBase[1]");
	set_name(0x151818c, "PortableTurretRep::sBases");

	// PortableTurretResource
	set_name(0x15172e8, "PortableTurretResource");
	apply_type(0x15172e8, "RTTICompound");
	del_items(0x15180c0, DELIT_SIMPLE, 8);
	apply_type(0x15180c0, "RTTIBase[1]");
	set_name(0x15180c0, "PortableTurretResource::sBases");
	del_items(0x15180c8, DELIT_SIMPLE, 196);
	apply_type(0x15180c8, "RTTIAttr[7]");
	set_name(0x15180c8, "PortableTurretResource::sAttrs");

	// Portal
	set_name(0x14cdf90, "Portal");
	apply_type(0x14cdf90, "RTTICompound");
	del_items(0x14ce258, DELIT_SIMPLE, 8);
	apply_type(0x14ce258, "RTTIBase[1]");
	set_name(0x14ce258, "Portal::sBases");
	del_items(0x14ce260, DELIT_SIMPLE, 224);
	apply_type(0x14ce260, "RTTIAttr[8]");
	set_name(0x14ce260, "Portal::sAttrs");

	// Pose
	set_name(0x14d9c5c, "Pose");
	apply_type(0x14d9c5c, "RTTICompound");
	del_items(0x14daf4c, DELIT_SIMPLE, 28);
	apply_type(0x14daf4c, "RTTIAttr[1]");
	set_name(0x14daf4c, "Pose::sAttrs");
	del_items(0x14daf68, DELIT_SIMPLE, 12);
	apply_type(0x14daf68, "RTTIMessageHandler[1]");
	set_name(0x14daf68, "Pose::sMessageHandlers");

	// PoseMatchingResource
	set_name(0x14e7870, "PoseMatchingResource");
	apply_type(0x14e7870, "RTTICompound");
	del_items(0x14e9454, DELIT_SIMPLE, 8);
	apply_type(0x14e9454, "RTTIBase[1]");
	set_name(0x14e9454, "PoseMatchingResource::sBases");
	del_items(0x14e945c, DELIT_SIMPLE, 168);
	apply_type(0x14e945c, "RTTIAttr[6]");
	set_name(0x14e945c, "PoseMatchingResource::sAttrs");
	del_items(0x14e9504, DELIT_SIMPLE, 12);
	apply_type(0x14e9504, "RTTIMessageHandler[1]");
	set_name(0x14e9504, "PoseMatchingResource::sMessageHandlers");

	// PositionEventInstance
	set_name(0x151d748, "PositionEventInstance");
	apply_type(0x151d748, "RTTICompound");
	del_items(0x151ea5c, DELIT_SIMPLE, 8);
	apply_type(0x151ea5c, "RTTIBase[1]");
	set_name(0x151ea5c, "PositionEventInstance::sBases");

	// PositionEventResource
	set_name(0x151d6f4, "PositionEventResource");
	apply_type(0x151d6f4, "RTTICompound");
	del_items(0x151ea54, DELIT_SIMPLE, 8);
	apply_type(0x151ea54, "RTTIBase[1]");
	set_name(0x151ea54, "PositionEventResource::sBases");

	// PositionLocatorInstance
	set_name(0x1520768, "PositionLocatorInstance");
	apply_type(0x1520768, "RTTICompound");
	del_items(0x15218d4, DELIT_SIMPLE, 8);
	apply_type(0x15218d4, "RTTIBase[1]");
	set_name(0x15218d4, "PositionLocatorInstance::sBases");

	// PositionLocatorResource
	set_name(0x1520714, "PositionLocatorResource");
	apply_type(0x1520714, "RTTICompound");
	del_items(0x152185c, DELIT_SIMPLE, 8);
	apply_type(0x152185c, "RTTIBase[1]");
	set_name(0x152185c, "PositionLocatorResource::sBases");
	del_items(0x1521864, DELIT_SIMPLE, 112);
	apply_type(0x1521864, "RTTIAttr[4]");
	set_name(0x1521864, "PositionLocatorResource::sAttrs");

	// PostProcessEffectorInstance
	set_name(0x14cbfc8, "PostProcessEffectorInstance");
	apply_type(0x14cbfc8, "RTTICompound");
	del_items(0x14cd0ec, DELIT_SIMPLE, 8);
	apply_type(0x14cd0ec, "RTTIBase[1]");
	set_name(0x14cd0ec, "PostProcessEffectorInstance::sBases");
	del_items(0x14cd0f4, DELIT_SIMPLE, 112);
	apply_type(0x14cd0f4, "RTTIAttr[4]");
	set_name(0x14cd0f4, "PostProcessEffectorInstance::sAttrs");

	// PostProcessEffectorManager
	set_name(0x14cbf00, "PostProcessEffectorManager");
	apply_type(0x14cbf00, "RTTICompound");
	del_items(0x14ccf8c, DELIT_SIMPLE, 8);
	apply_type(0x14ccf8c, "RTTIBase[1]");
	set_name(0x14ccf8c, "PostProcessEffectorManager::sBases");

	// PostProcessEffectorResource
	set_name(0x14cbf74, "PostProcessEffectorResource");
	apply_type(0x14cbf74, "RTTICompound");
	del_items(0x14ccf94, DELIT_SIMPLE, 8);
	apply_type(0x14ccf94, "RTTIBase[1]");
	set_name(0x14ccf94, "PostProcessEffectorResource::sBases");
	del_items(0x14ccf9c, DELIT_SIMPLE, 336);
	apply_type(0x14ccf9c, "RTTIAttr[12]");
	set_name(0x14ccf9c, "PostProcessEffectorResource::sAttrs");

	// PostProcessMotionBlurScaleEventInstance
	set_name(0x151d7f0, "PostProcessMotionBlurScaleEventInstance");
	apply_type(0x151d7f0, "RTTICompound");
	del_items(0x151f374, DELIT_SIMPLE, 8);
	apply_type(0x151f374, "RTTIBase[1]");
	set_name(0x151f374, "PostProcessMotionBlurScaleEventInstance::sBases");

	// PostProcessMotionBlurScaleEventResource
	set_name(0x151d79c, "PostProcessMotionBlurScaleEventResource");
	apply_type(0x151d79c, "RTTICompound");
	del_items(0x151f318, DELIT_SIMPLE, 8);
	apply_type(0x151f318, "RTTIBase[1]");
	set_name(0x151f318, "PostProcessMotionBlurScaleEventResource::sBases");
	del_items(0x151f320, DELIT_SIMPLE, 84);
	apply_type(0x151f320, "RTTIAttr[3]");
	set_name(0x151f320, "PostProcessMotionBlurScaleEventResource::sAttrs");

	// PostProcessSettingsResource
	set_name(0x14cbeac, "PostProcessSettingsResource");
	apply_type(0x14cbeac, "RTTICompound");
	del_items(0x14cce6c, DELIT_SIMPLE, 8);
	apply_type(0x14cce6c, "RTTIBase[1]");
	set_name(0x14cce6c, "PostProcessSettingsResource::sBases");
	del_items(0x14cce74, DELIT_SIMPLE, 280);
	apply_type(0x14cce74, "RTTIAttr[10]");
	set_name(0x14cce74, "PostProcessSettingsResource::sAttrs");

	// PostureSwitchEventInstance
	set_name(0x151d898, "PostureSwitchEventInstance");
	apply_type(0x151d898, "RTTICompound");
	del_items(0x151f3d8, DELIT_SIMPLE, 8);
	apply_type(0x151f3d8, "RTTIBase[1]");
	set_name(0x151f3d8, "PostureSwitchEventInstance::sBases");

	// PostureSwitchEventResource
	set_name(0x151d844, "PostureSwitchEventResource");
	apply_type(0x151d844, "RTTICompound");
	del_items(0x151f37c, DELIT_SIMPLE, 8);
	apply_type(0x151f37c, "RTTIBase[1]");
	set_name(0x151f37c, "PostureSwitchEventResource::sBases");
	del_items(0x151f384, DELIT_SIMPLE, 84);
	apply_type(0x151f384, "RTTIAttr[3]");
	set_name(0x151f384, "PostureSwitchEventResource::sAttrs");

	// PrepareCharacterFacialSequenceEventInstance
	set_name(0x151a00c, "PrepareCharacterFacialSequenceEventInstance");
	apply_type(0x151a00c, "RTTICompound");
	del_items(0x151beac, DELIT_SIMPLE, 8);
	apply_type(0x151beac, "RTTIBase[1]");
	set_name(0x151beac, "PrepareCharacterFacialSequenceEventInstance::sBases");

	// PrepareCharacterFacialSequenceEventResource
	set_name(0x1519fb8, "PrepareCharacterFacialSequenceEventResource");
	apply_type(0x1519fb8, "RTTICompound");
	del_items(0x151be6c, DELIT_SIMPLE, 8);
	apply_type(0x151be6c, "RTTIBase[1]");
	set_name(0x151be6c, "PrepareCharacterFacialSequenceEventResource::sBases");
	del_items(0x151be74, DELIT_SIMPLE, 56);
	apply_type(0x151be74, "RTTIAttr[2]");
	set_name(0x151be74, "PrepareCharacterFacialSequenceEventResource::sAttrs");

	// PrimitiveBlendShapeMask
	set_name(0x14d9e74, "PrimitiveBlendShapeMask");
	apply_type(0x14d9e74, "RTTICompound");
	del_items(0x14dc440, DELIT_SIMPLE, 112);
	apply_type(0x14dc440, "RTTIAttr[4]");
	set_name(0x14dc440, "PrimitiveBlendShapeMask::sAttrs");

	// PrimitiveDeltaDeformation
	set_name(0x14d9fa0, "PrimitiveDeltaDeformation");
	apply_type(0x14d9fa0, "RTTICompound");
	del_items(0x14dc520, DELIT_SIMPLE, 28);
	apply_type(0x14dc520, "RTTIAttr[1]");
	set_name(0x14dc520, "PrimitiveDeltaDeformation::sAttrs");

	// PrimitiveResource
	set_name(0x14c8f38, "PrimitiveResource");
	apply_type(0x14c8f38, "RTTICompound");
	del_items(0x14c9cfc, DELIT_SIMPLE, 8);
	apply_type(0x14c9cfc, "RTTIBase[1]");
	set_name(0x14c9cfc, "PrimitiveResource::sBases");
	del_items(0x14c9d04, DELIT_SIMPLE, 224);
	apply_type(0x14c9d04, "RTTIAttr[8]");
	set_name(0x14c9d04, "PrimitiveResource::sAttrs");

	// PrimitiveResourceFlags
	set_name(0x14c8ec4, "PrimitiveResourceFlags");
	apply_type(0x14c8ec4, "RTTICompound");
	del_items(0x14c9ce0, DELIT_SIMPLE, 28);
	apply_type(0x14c9ce0, "RTTIAttr[1]");
	set_name(0x14c9ce0, "PrimitiveResourceFlags::sAttrs");

	// PrimitiveSkinInfo
	set_name(0x14d9ed8, "PrimitiveSkinInfo");
	apply_type(0x14d9ed8, "RTTICompound");
	del_items(0x14dc4b0, DELIT_SIMPLE, 112);
	apply_type(0x14dc4b0, "RTTIAttr[4]");
	set_name(0x14dc4b0, "PrimitiveSkinInfo::sAttrs");

	// ProbabilityAction
	set_name(0x14e2f10, "ProbabilityAction");
	apply_type(0x14e2f10, "RTTICompound");
	del_items(0x14e62d8, DELIT_SIMPLE, 8);
	apply_type(0x14e62d8, "RTTIBase[1]");
	set_name(0x14e62d8, "ProbabilityAction::sBases");
	del_items(0x14e62e0, DELIT_SIMPLE, 56);
	apply_type(0x14e62e0, "RTTIAttr[2]");
	set_name(0x14e62e0, "ProbabilityAction::sAttrs");

	// ProgressBarTag
	set_name(0x14c0888, "ProgressBarTag");
	apply_type(0x14c0888, "RTTICompound");
	del_items(0x14c2d04, DELIT_SIMPLE, 8);
	apply_type(0x14c2d04, "RTTIBase[1]");
	set_name(0x14c2d04, "ProgressBarTag::sBases");

	// ProgressBarWidget
	set_name(0x14c120c, "ProgressBarWidget");
	apply_type(0x14c120c, "RTTICompound");
	del_items(0x14c3414, DELIT_SIMPLE, 8);
	apply_type(0x14c3414, "RTTIBase[1]");
	set_name(0x14c3414, "ProgressBarWidget::sBases");

	// ProjMatrix
	set_name(0x14b7e7c, "ProjMatrix");
	apply_type(0x14b7e7c, "RTTICompound");
	del_items(0x14b8234, DELIT_SIMPLE, 112);
	apply_type(0x14b8234, "RTTIAttr[4]");
	set_name(0x14b8234, "ProjMatrix::sAttrs");

	// ProjectedMeshInstance
	set_name(0x14bd4dc, "ProjectedMeshInstance");
	apply_type(0x14bd4dc, "RTTICompound");
	del_items(0x14be600, DELIT_SIMPLE, 8);
	apply_type(0x14be600, "RTTIBase[1]");
	set_name(0x14be600, "ProjectedMeshInstance::sBases");
	del_items(0x14be608, DELIT_SIMPLE, 336);
	apply_type(0x14be608, "RTTIAttr[12]");
	set_name(0x14be608, "ProjectedMeshInstance::sAttrs");
	del_items(0x14be758, DELIT_SIMPLE, 24);
	apply_type(0x14be758, "RTTIMessageHandler[2]");
	set_name(0x14be758, "ProjectedMeshInstance::sMessageHandlers");

	// PromptSpeechGroup
	set_name(0x154f9c4, "PromptSpeechGroup");
	apply_type(0x154f9c4, "RTTICompound");
	del_items(0x154fbcc, DELIT_SIMPLE, 8);
	apply_type(0x154fbcc, "RTTIBase[1]");
	set_name(0x154fbcc, "PromptSpeechGroup::sBases");

	// ProximityComponent
	set_name(0x150f65c, "ProximityComponent");
	apply_type(0x150f65c, "RTTICompound");
	del_items(0x15122ac, DELIT_SIMPLE, 8);
	apply_type(0x15122ac, "RTTIBase[1]");
	set_name(0x15122ac, "ProximityComponent::sBases");

	// ProximityComponentResource
	set_name(0x150f6b0, "ProximityComponentResource");
	apply_type(0x150f6b0, "RTTICompound");
	del_items(0x151224c, DELIT_SIMPLE, 8);
	apply_type(0x151224c, "RTTIBase[1]");
	set_name(0x151224c, "ProximityComponentResource::sBases");
	del_items(0x1512254, DELIT_SIMPLE, 84);
	apply_type(0x1512254, "RTTIAttr[3]");
	set_name(0x1512254, "ProximityComponentResource::sAttrs");

	// ProxyMountedGunController
	set_name(0x1505788, "ProxyMountedGunController");
	apply_type(0x1505788, "RTTICompound");
	del_items(0x1507370, DELIT_SIMPLE, 8);
	apply_type(0x1507370, "RTTIBase[1]");
	set_name(0x1507370, "ProxyMountedGunController::sBases");

	// QTEPlayerInteraction
	set_name(0x154b490, "QTEPlayerInteraction");
	apply_type(0x154b490, "RTTICompound");
	del_items(0x154c0a4, DELIT_SIMPLE, 8);
	apply_type(0x154c0a4, "RTTIBase[1]");
	set_name(0x154c0a4, "QTEPlayerInteraction::sBases");

	// QTEPlayerInteractionController
	set_name(0x154b538, "QTEPlayerInteractionController");
	apply_type(0x154b538, "RTTICompound");
	del_items(0x154c0ac, DELIT_SIMPLE, 8);
	apply_type(0x154c0ac, "RTTIBase[1]");
	set_name(0x154c0ac, "QTEPlayerInteractionController::sBases");

	// QTEPlayerInteractionResource
	set_name(0x154b4e4, "QTEPlayerInteractionResource");
	apply_type(0x154b4e4, "RTTICompound");
	del_items(0x154c0c0, DELIT_SIMPLE, 8);
	apply_type(0x154c0c0, "RTTIBase[1]");
	set_name(0x154c0c0, "QTEPlayerInteractionResource::sBases");

	// RGBAColor
	set_name(0x14ab530, "RGBAColor");
	apply_type(0x14ab530, "RTTICompound");
	del_items(0x14ab824, DELIT_SIMPLE, 112);
	apply_type(0x14ab824, "RTTIAttr[4]");
	set_name(0x14ab824, "RGBAColor::sAttrs");

	// RTTIObject
	set_name(0x14b9084, "RTTIObject");
	apply_type(0x14b9084, "RTTICompound");

	// RTTIRefObject
	set_name(0x14b90d8, "RTTIRefObject");
	apply_type(0x14b90d8, "RTTICompound");
	del_items(0x14b96d8, DELIT_SIMPLE, 8);
	apply_type(0x14b96d8, "RTTIBase[1]");
	set_name(0x14b96d8, "RTTIRefObject::sBases");

	// RadioMessage
	set_name(0x14efed0, "RadioMessage");
	apply_type(0x14efed0, "RTTICompound");
	del_items(0x14f3a20, DELIT_SIMPLE, 8);
	apply_type(0x14f3a20, "RTTIBase[1]");
	set_name(0x14f3a20, "RadioMessage::sBases");
	del_items(0x14f3a28, DELIT_SIMPLE, 196);
	apply_type(0x14f3a28, "RTTIAttr[7]");
	set_name(0x14f3a28, "RadioMessage::sAttrs");
	del_items(0x14f3aec, DELIT_SIMPLE, 48);
	apply_type(0x14f3aec, "RTTIFunction[2]");
	set_name(0x14f3aec, "RadioMessage::sFunctions");
	del_items(0x14f3b1c, DELIT_SIMPLE, 12);
	apply_type(0x14f3b1c, "RTTIMessageHandler[1]");
	set_name(0x14f3b1c, "RadioMessage::sMessageHandlers");

	// RadioMessageListenerResource
	set_name(0x14fabd0, "RadioMessageListenerResource");
	apply_type(0x14fabd0, "RTTICompound");
	del_items(0x14ff004, DELIT_SIMPLE, 8);
	apply_type(0x14ff004, "RTTIBase[1]");
	set_name(0x14ff004, "RadioMessageListenerResource::sBases");
	del_items(0x14ff00c, DELIT_SIMPLE, 84);
	apply_type(0x14ff00c, "RTTIAttr[3]");
	set_name(0x14ff00c, "RadioMessageListenerResource::sAttrs");
	del_items(0x14ff060, DELIT_SIMPLE, 12);
	apply_type(0x14ff060, "RTTIMessageHandler[1]");
	set_name(0x14ff060, "RadioMessageListenerResource::sMessageHandlers");

	// RagdollMover
	set_name(0x14e8134, "RagdollMover");
	apply_type(0x14e8134, "RTTICompound");
	del_items(0x14e9b54, DELIT_SIMPLE, 8);
	apply_type(0x14e9b54, "RTTIBase[1]");
	set_name(0x14e9b54, "RagdollMover::sBases");

	// RagdollMoverResource
	set_name(0x14e8188, "RagdollMoverResource");
	apply_type(0x14e8188, "RTTICompound");
	del_items(0x14e9b5c, DELIT_SIMPLE, 8);
	apply_type(0x14e9b5c, "RTTIBase[1]");
	set_name(0x14e9b5c, "RagdollMoverResource::sBases");

	// RandomAction
	set_name(0x14e2ebc, "RandomAction");
	apply_type(0x14e2ebc, "RTTICompound");
	del_items(0x14e6298, DELIT_SIMPLE, 8);
	apply_type(0x14e6298, "RTTIBase[1]");
	set_name(0x14e6298, "RandomAction::sBases");
	del_items(0x14e62a0, DELIT_SIMPLE, 56);
	apply_type(0x14e62a0, "RTTIAttr[2]");
	set_name(0x14e62a0, "RandomAction::sAttrs");

	// RandomFireResource
	set_name(0x1512d20, "RandomFireResource");
	apply_type(0x1512d20, "RTTICompound");
	del_items(0x1514974, DELIT_SIMPLE, 8);
	apply_type(0x1514974, "RTTIBase[1]");
	set_name(0x1514974, "RandomFireResource::sBases");
	del_items(0x151497c, DELIT_SIMPLE, 168);
	apply_type(0x151497c, "RTTIAttr[6]");
	set_name(0x151497c, "RandomFireResource::sAttrs");

	// RandomMatrixListResource
	set_name(0x14e8b8c, "RandomMatrixListResource");
	apply_type(0x14e8b8c, "RTTICompound");
	del_items(0x14ea0b4, DELIT_SIMPLE, 8);
	apply_type(0x14ea0b4, "RTTIBase[1]");
	set_name(0x14ea0b4, "RandomMatrixListResource::sBases");
	del_items(0x14ea0bc, DELIT_SIMPLE, 56);
	apply_type(0x14ea0bc, "RTTIAttr[2]");
	set_name(0x14ea0bc, "RandomMatrixListResource::sAttrs");

	// RandomMatrixResource
	set_name(0x14e8b38, "RandomMatrixResource");
	apply_type(0x14e8b38, "RTTICompound");
	del_items(0x14ea058, DELIT_SIMPLE, 8);
	apply_type(0x14ea058, "RTTIBase[1]");
	set_name(0x14ea058, "RandomMatrixResource::sBases");
	del_items(0x14ea060, DELIT_SIMPLE, 84);
	apply_type(0x14ea060, "RTTIAttr[3]");
	set_name(0x14ea060, "RandomMatrixResource::sAttrs");

	// RandomMatrixResourceBase
	set_name(0x14e8ae4, "RandomMatrixResourceBase");
	apply_type(0x14e8ae4, "RTTICompound");
	del_items(0x14ea050, DELIT_SIMPLE, 8);
	apply_type(0x14ea050, "RTTIBase[1]");
	set_name(0x14ea050, "RandomMatrixResourceBase::sBases");

	// RandomSimpleSoundResource
	set_name(0x14ddc98, "RandomSimpleSoundResource");
	apply_type(0x14ddc98, "RTTICompound");
	del_items(0x14dead4, DELIT_SIMPLE, 8);
	apply_type(0x14dead4, "RTTIBase[1]");
	set_name(0x14dead4, "RandomSimpleSoundResource::sBases");
	del_items(0x14deadc, DELIT_SIMPLE, 112);
	apply_type(0x14deadc, "RTTIAttr[4]");
	set_name(0x14deadc, "RandomSimpleSoundResource::sAttrs");
	del_items(0x14deb4c, DELIT_SIMPLE, 12);
	apply_type(0x14deb4c, "RTTIMessageHandler[1]");
	set_name(0x14deb4c, "RandomSimpleSoundResource::sMessageHandlers");

	// RandomVectorResource
	set_name(0x14e8bf0, "RandomVectorResource");
	apply_type(0x14e8bf0, "RTTICompound");
	del_items(0x14ea0f4, DELIT_SIMPLE, 8);
	apply_type(0x14ea0f4, "RTTIBase[1]");
	set_name(0x14ea0f4, "RandomVectorResource::sBases");
	del_items(0x14ea0fc, DELIT_SIMPLE, 84);
	apply_type(0x14ea0fc, "RTTIAttr[3]");
	set_name(0x14ea0fc, "RandomVectorResource::sAttrs");

	// RankUpGraphTag
	set_name(0x153e484, "RankUpGraphTag");
	apply_type(0x153e484, "RTTICompound");
	del_items(0x15404ec, DELIT_SIMPLE, 8);
	apply_type(0x15404ec, "RTTIBase[1]");
	set_name(0x15404ec, "RankUpGraphTag::sBases");

	// RankUpGraphWidget
	set_name(0x153e67c, "RankUpGraphWidget");
	apply_type(0x153e67c, "RTTICompound");
	del_items(0x154061c, DELIT_SIMPLE, 8);
	apply_type(0x154061c, "RTTIBase[1]");
	set_name(0x154061c, "RankUpGraphWidget::sBases");

	// RankingUnlockableResource
	set_name(0x152aec8, "RankingUnlockableResource");
	apply_type(0x152aec8, "RTTICompound");
	del_items(0x152baf0, DELIT_SIMPLE, 8);
	apply_type(0x152baf0, "RTTIBase[1]");
	set_name(0x152baf0, "RankingUnlockableResource::sBases");
	del_items(0x152baf8, DELIT_SIMPLE, 56);
	apply_type(0x152baf8, "RTTIAttr[2]");
	set_name(0x152baf8, "RankingUnlockableResource::sAttrs");

	// RegionAssetFilter
	set_name(0x14ef760, "RegionAssetFilter");
	apply_type(0x14ef760, "RTTICompound");
	del_items(0x14f2b98, DELIT_SIMPLE, 56);
	apply_type(0x14f2b98, "RTTIAttr[2]");
	set_name(0x14f2b98, "RegionAssetFilter::sAttrs");

	// RegionalAction
	set_name(0x14f8d74, "RegionalAction");
	apply_type(0x14f8d74, "RTTICompound");
	del_items(0x14fd6dc, DELIT_SIMPLE, 8);
	apply_type(0x14fd6dc, "RTTIBase[1]");
	set_name(0x14fd6dc, "RegionalAction::sBases");
	del_items(0x14fd6e4, DELIT_SIMPLE, 56);
	apply_type(0x14fd6e4, "RTTIAttr[2]");
	set_name(0x14fd6e4, "RegionalAction::sAttrs");

	// RegularSkinnedMeshResource
	set_name(0x14d9d78, "RegularSkinnedMeshResource");
	apply_type(0x14d9d78, "RTTICompound");
	del_items(0x14dc5b4, DELIT_SIMPLE, 8);
	apply_type(0x14dc5b4, "RTTIBase[1]");
	set_name(0x14dc5b4, "RegularSkinnedMeshResource::sBases");
	del_items(0x14dc5bc, DELIT_SIMPLE, 140);
	apply_type(0x14dc5bc, "RTTIAttr[5]");
	set_name(0x14dc5bc, "RegularSkinnedMeshResource::sAttrs");

	// RegularSkinnedMeshResourceBase
	set_name(0x14d9cc0, "RegularSkinnedMeshResourceBase");
	apply_type(0x14d9cc0, "RTTICompound");
	del_items(0x14dc244, DELIT_SIMPLE, 8);
	apply_type(0x14dc244, "RTTIBase[1]");
	set_name(0x14dc244, "RegularSkinnedMeshResourceBase::sBases");
	del_items(0x14dc24c, DELIT_SIMPLE, 308);
	apply_type(0x14dc24c, "RTTIAttr[11]");
	set_name(0x14dc24c, "RegularSkinnedMeshResourceBase::sAttrs");
	del_items(0x14dc380, DELIT_SIMPLE, 24);
	apply_type(0x14dc380, "RTTIMessageHandler[2]");
	set_name(0x14dc380, "RegularSkinnedMeshResourceBase::sMessageHandlers");

	// RegularSkinnedMeshResourceSkinInfo
	set_name(0x14d9d24, "RegularSkinnedMeshResourceSkinInfo");
	apply_type(0x14d9d24, "RTTICompound");
	del_items(0x14dc574, DELIT_SIMPLE, 8);
	apply_type(0x14dc574, "RTTIBase[1]");
	set_name(0x14dc574, "RegularSkinnedMeshResourceSkinInfo::sBases");
	del_items(0x14dc57c, DELIT_SIMPLE, 56);
	apply_type(0x14dc57c, "RTTIAttr[2]");
	set_name(0x14dc57c, "RegularSkinnedMeshResourceSkinInfo::sAttrs");

	// RemoveActorEventInstance
	set_name(0x151d940, "RemoveActorEventInstance");
	apply_type(0x151d940, "RTTICompound");
	del_items(0x151f420, DELIT_SIMPLE, 8);
	apply_type(0x151f420, "RTTIBase[1]");
	set_name(0x151f420, "RemoveActorEventInstance::sBases");

	// RemoveActorEventResource
	set_name(0x151d8ec, "RemoveActorEventResource");
	apply_type(0x151d8ec, "RTTICompound");
	del_items(0x151f3e0, DELIT_SIMPLE, 8);
	apply_type(0x151f3e0, "RTTIBase[1]");
	set_name(0x151f3e0, "RemoveActorEventResource::sBases");
	del_items(0x151f3e8, DELIT_SIMPLE, 56);
	apply_type(0x151f3e8, "RTTIAttr[2]");
	set_name(0x151f3e8, "RemoveActorEventResource::sAttrs");

	// RemoveEntitiesEventInstance
	set_name(0x151d9e8, "RemoveEntitiesEventInstance");
	apply_type(0x151d9e8, "RTTICompound");
	del_items(0x151f484, DELIT_SIMPLE, 8);
	apply_type(0x151f484, "RTTIBase[1]");
	set_name(0x151f484, "RemoveEntitiesEventInstance::sBases");

	// RemoveEntitiesEventResource
	set_name(0x151d994, "RemoveEntitiesEventResource");
	apply_type(0x151d994, "RTTICompound");
	del_items(0x151f428, DELIT_SIMPLE, 8);
	apply_type(0x151f428, "RTTIBase[1]");
	set_name(0x151f428, "RemoveEntitiesEventResource::sBases");
	del_items(0x151f430, DELIT_SIMPLE, 84);
	apply_type(0x151f430, "RTTIAttr[3]");
	set_name(0x151f430, "RemoveEntitiesEventResource::sAttrs");

	// RemoveEntityFromWorldAction
	set_name(0x14f95b8, "RemoveEntityFromWorldAction");
	apply_type(0x14f95b8, "RTTICompound");
	del_items(0x14fe1ec, DELIT_SIMPLE, 8);
	apply_type(0x14fe1ec, "RTTIBase[1]");
	set_name(0x14fe1ec, "RemoveEntityFromWorldAction::sBases");

	// RenderEffectInstance
	set_name(0x14c9130, "RenderEffectInstance");
	apply_type(0x14c9130, "RTTICompound");
	del_items(0x14c9c24, DELIT_SIMPLE, 8);
	apply_type(0x14c9c24, "RTTIBase[1]");
	set_name(0x14c9c24, "RenderEffectInstance::sBases");
	del_items(0x14c9c2c, DELIT_SIMPLE, 56);
	apply_type(0x14c9c2c, "RTTIAttr[2]");
	set_name(0x14c9c2c, "RenderEffectInstance::sAttrs");
	del_items(0x14c9c64, DELIT_SIMPLE, 24);
	apply_type(0x14c9c64, "RTTIMessageHandler[2]");
	set_name(0x14c9c64, "RenderEffectInstance::sMessageHandlers");

	// RenderEffectInstanceImp0
	set_name(0x14c9184, "RenderEffectInstanceImp0");
	apply_type(0x14c9184, "RTTICompound");
	del_items(0x14c9cd8, DELIT_SIMPLE, 8);
	apply_type(0x14c9cd8, "RTTIBase[1]");
	set_name(0x14c9cd8, "RenderEffectInstanceImp0::sBases");

	// RenderEffectInstanceImp1
	set_name(0x14c91d8, "RenderEffectInstanceImp1");
	apply_type(0x14c91d8, "RTTICompound");
	del_items(0x14c9ca0, DELIT_SIMPLE, 8);
	apply_type(0x14c9ca0, "RTTIBase[1]");
	set_name(0x14c9ca0, "RenderEffectInstanceImp1::sBases");

	// RenderEffectInstanceImp2
	set_name(0x14c922c, "RenderEffectInstanceImp2");
	apply_type(0x14c922c, "RTTICompound");
	del_items(0x14c9ca8, DELIT_SIMPLE, 8);
	apply_type(0x14c9ca8, "RTTIBase[1]");
	set_name(0x14c9ca8, "RenderEffectInstanceImp2::sBases");

	// RenderEffectInstanceImp3
	set_name(0x14c9280, "RenderEffectInstanceImp3");
	apply_type(0x14c9280, "RTTICompound");
	del_items(0x14c9cb0, DELIT_SIMPLE, 8);
	apply_type(0x14c9cb0, "RTTIBase[1]");
	set_name(0x14c9cb0, "RenderEffectInstanceImp3::sBases");

	// RenderEffectInstanceImp4
	set_name(0x14c92d4, "RenderEffectInstanceImp4");
	apply_type(0x14c92d4, "RTTICompound");
	del_items(0x14c9cb8, DELIT_SIMPLE, 8);
	apply_type(0x14c9cb8, "RTTIBase[1]");
	set_name(0x14c9cb8, "RenderEffectInstanceImp4::sBases");

	// RenderEffectInstanceImp5
	set_name(0x14c9328, "RenderEffectInstanceImp5");
	apply_type(0x14c9328, "RTTICompound");
	del_items(0x14c9cc0, DELIT_SIMPLE, 8);
	apply_type(0x14c9cc0, "RTTIBase[1]");
	set_name(0x14c9cc0, "RenderEffectInstanceImp5::sBases");

	// RenderEffectInstanceImp6
	set_name(0x14c937c, "RenderEffectInstanceImp6");
	apply_type(0x14c937c, "RTTICompound");
	del_items(0x14c9cc8, DELIT_SIMPLE, 8);
	apply_type(0x14c9cc8, "RTTIBase[1]");
	set_name(0x14c9cc8, "RenderEffectInstanceImp6::sBases");

	// RenderEffectInstanceImp7
	set_name(0x14c93d0, "RenderEffectInstanceImp7");
	apply_type(0x14c93d0, "RTTICompound");
	del_items(0x14c9cd0, DELIT_SIMPLE, 8);
	apply_type(0x14c9cd0, "RTTIBase[1]");
	set_name(0x14c9cd0, "RenderEffectInstanceImp7::sBases");

	// RenderEffectResource
	set_name(0x14c90dc, "RenderEffectResource");
	apply_type(0x14c90dc, "RTTICompound");
	del_items(0x14c9afc, DELIT_SIMPLE, 8);
	apply_type(0x14c9afc, "RTTIBase[1]");
	set_name(0x14c9afc, "RenderEffectResource::sBases");
	del_items(0x14c9b04, DELIT_SIMPLE, 252);
	apply_type(0x14c9b04, "RTTIAttr[9]");
	set_name(0x14c9b04, "RenderEffectResource::sAttrs");
	del_items(0x14c9c00, DELIT_SIMPLE, 24);
	apply_type(0x14c9c00, "RTTIMessageHandler[2]");
	set_name(0x14c9c00, "RenderEffectResource::sMessageHandlers");

	// RenderEffectShaderOverrides
	set_name(0x14cb3cc, "RenderEffectShaderOverrides");
	apply_type(0x14cb3cc, "RTTICompound");
	del_items(0x14cd42c, DELIT_SIMPLE, 84);
	apply_type(0x14cd42c, "RTTIAttr[3]");
	set_name(0x14cd42c, "RenderEffectShaderOverrides::sAttrs");

	// RenderPass
	set_name(0x14c9444, "RenderPass");
	apply_type(0x14c9444, "RTTICompound");
	del_items(0x14c9760, DELIT_SIMPLE, 308);
	apply_type(0x14c9760, "RTTIAttr[11]");
	set_name(0x14c9760, "RenderPass::sAttrs");

	// RenderTechnique
	set_name(0x14c94b0, "RenderTechnique");
	apply_type(0x14c94b0, "RTTICompound");
	del_items(0x14c9a1c, DELIT_SIMPLE, 224);
	apply_type(0x14c9a1c, "RTTIAttr[8]");
	set_name(0x14c9a1c, "RenderTechnique::sAttrs");

	// RenderZone
	set_name(0x14c9504, "RenderZone");
	apply_type(0x14c9504, "RTTICompound");
	del_items(0x14cad7c, DELIT_SIMPLE, 8);
	apply_type(0x14cad7c, "RTTIBase[1]");
	set_name(0x14cad7c, "RenderZone::sBases");
	del_items(0x14cad84, DELIT_SIMPLE, 420);
	apply_type(0x14cad84, "RTTIAttr[15]");
	set_name(0x14cad84, "RenderZone::sAttrs");

	// RenderZoneManager
	set_name(0x14c9558, "RenderZoneManager");
	apply_type(0x14c9558, "RTTICompound");
	del_items(0x14caf28, DELIT_SIMPLE, 8);
	apply_type(0x14caf28, "RTTIBase[1]");
	set_name(0x14caf28, "RenderZoneManager::sBases");

	// RenderingPrimitiveResource
	set_name(0x14c8fb0, "RenderingPrimitiveResource");
	apply_type(0x14c8fb0, "RTTICompound");
	del_items(0x14c9de4, DELIT_SIMPLE, 8);
	apply_type(0x14c9de4, "RTTIBase[1]");
	set_name(0x14c9de4, "RenderingPrimitiveResource::sBases");
	del_items(0x14c9dec, DELIT_SIMPLE, 56);
	apply_type(0x14c9dec, "RTTIAttr[2]");
	set_name(0x14c9dec, "RenderingPrimitiveResource::sAttrs");

	// RepairSuspensionAction
	set_name(0x14f9510, "RepairSuspensionAction");
	apply_type(0x14f9510, "RTTICompound");
	del_items(0x14fe134, DELIT_SIMPLE, 8);
	apply_type(0x14fe134, "RTTIBase[1]");
	set_name(0x14fe134, "RepairSuspensionAction::sBases");
	del_items(0x14fe13c, DELIT_SIMPLE, 56);
	apply_type(0x14fe13c, "RTTIAttr[2]");
	set_name(0x14fe13c, "RepairSuspensionAction::sAttrs");

	// RepairWheelAction
	set_name(0x14f9468, "RepairWheelAction");
	apply_type(0x14f9468, "RTTICompound");
	del_items(0x14fe0b4, DELIT_SIMPLE, 8);
	apply_type(0x14fe0b4, "RTTIBase[1]");
	set_name(0x14fe0b4, "RepairWheelAction::sBases");
	del_items(0x14fe0bc, DELIT_SIMPLE, 56);
	apply_type(0x14fe0bc, "RTTIAttr[2]");
	set_name(0x14fe0bc, "RepairWheelAction::sAttrs");

	// Resource
	set_name(0x14bca90, "Resource");
	apply_type(0x14bca90, "RTTICompound");
	del_items(0x14bcb98, DELIT_SIMPLE, 8);
	apply_type(0x14bcb98, "RTTIBase[1]");
	set_name(0x14bcb98, "Resource::sBases");
	del_items(0x14bcba0, DELIT_SIMPLE, 84);
	apply_type(0x14bcba0, "RTTIAttr[3]");
	set_name(0x14bcba0, "Resource::sAttrs");

	// RespawnEntity
	set_name(0x1500f20, "RespawnEntity");
	apply_type(0x1500f20, "RTTICompound");
	del_items(0x1501c04, DELIT_SIMPLE, 8);
	apply_type(0x1501c04, "RTTIBase[1]");
	set_name(0x1501c04, "RespawnEntity::sBases");
	del_items(0x1501c0c, DELIT_SIMPLE, 84);
	apply_type(0x1501c0c, "RTTIAttr[3]");
	set_name(0x1501c0c, "RespawnEntity::sAttrs");

	// RespawnEntityResource
	set_name(0x1500f74, "RespawnEntityResource");
	apply_type(0x1500f74, "RTTICompound");
	del_items(0x1501b38, DELIT_SIMPLE, 8);
	apply_type(0x1501b38, "RTTIBase[1]");
	set_name(0x1501b38, "RespawnEntityResource::sBases");
	del_items(0x1501b40, DELIT_SIMPLE, 196);
	apply_type(0x1501b40, "RTTIAttr[7]");
	set_name(0x1501b40, "RespawnEntityResource::sAttrs");

	// RespawnEntityWithBoundingBox
	set_name(0x1500fc8, "RespawnEntityWithBoundingBox");
	apply_type(0x1500fc8, "RTTICompound");
	del_items(0x1501c60, DELIT_SIMPLE, 8);
	apply_type(0x1501c60, "RTTIBase[1]");
	set_name(0x1501c60, "RespawnEntityWithBoundingBox::sBases");

	// RespawnEntityWithBoundingBoxResource
	set_name(0x150101c, "RespawnEntityWithBoundingBoxResource");
	apply_type(0x150101c, "RTTICompound");
	del_items(0x1501c68, DELIT_SIMPLE, 8);
	apply_type(0x1501c68, "RTTIBase[1]");
	set_name(0x1501c68, "RespawnEntityWithBoundingBoxResource::sBases");
	del_items(0x1501c70, DELIT_SIMPLE, 56);
	apply_type(0x1501c70, "RTTIAttr[2]");
	set_name(0x1501c70, "RespawnEntityWithBoundingBoxResource::sAttrs");

	// ResponseCurve
	set_name(0x14cfa8c, "ResponseCurve");
	apply_type(0x14cfa8c, "RTTICompound");
	del_items(0x14d105c, DELIT_SIMPLE, 84);
	apply_type(0x14d105c, "RTTIAttr[3]");
	set_name(0x14d105c, "ResponseCurve::sAttrs");

	// ReverbEffect
	set_name(0x14dd084, "ReverbEffect");
	apply_type(0x14dd084, "RTTICompound");

	// ReverbPresetResource
	set_name(0x14dd148, "ReverbPresetResource");
	apply_type(0x14dd148, "RTTICompound");
	del_items(0x14df718, DELIT_SIMPLE, 8);
	apply_type(0x14df718, "RTTIBase[1]");
	set_name(0x14df718, "ReverbPresetResource::sBases");
	del_items(0x14df720, DELIT_SIMPLE, 392);
	apply_type(0x14df720, "RTTIAttr[14]");
	set_name(0x14df720, "ReverbPresetResource::sAttrs");

	// ReverbZone
	set_name(0x14dcf5c, "ReverbZone");
	apply_type(0x14dcf5c, "RTTICompound");
	del_items(0x14e0964, DELIT_SIMPLE, 8);
	apply_type(0x14e0964, "RTTIBase[1]");
	set_name(0x14e0964, "ReverbZone::sBases");

	// ReviveAmmoSettings
	set_name(0x1513c28, "ReviveAmmoSettings");
	apply_type(0x1513c28, "RTTICompound");
	del_items(0x151676c, DELIT_SIMPLE, 84);
	apply_type(0x151676c, "RTTIAttr[3]");
	set_name(0x151676c, "ReviveAmmoSettings::sAttrs");

	// RewardPickUp
	set_name(0x1518ca8, "RewardPickUp");
	apply_type(0x1518ca8, "RTTICompound");
	del_items(0x151ae60, DELIT_SIMPLE, 8);
	apply_type(0x151ae60, "RTTIBase[1]");
	set_name(0x151ae60, "RewardPickUp::sBases");
	del_items(0x151ae68, DELIT_SIMPLE, 56);
	apply_type(0x151ae68, "RTTIAttr[2]");
	set_name(0x151ae68, "RewardPickUp::sAttrs");

	// RewardPickUpResource
	set_name(0x1518cfc, "RewardPickUpResource");
	apply_type(0x1518cfc, "RTTICompound");
	del_items(0x151aeac, DELIT_SIMPLE, 8);
	apply_type(0x151aeac, "RTTIBase[1]");
	set_name(0x151aeac, "RewardPickUpResource::sBases");

	// RibbonListResource
	set_name(0x1536d70, "RibbonListResource");
	apply_type(0x1536d70, "RTTICompound");
	del_items(0x1537ab0, DELIT_SIMPLE, 8);
	apply_type(0x1537ab0, "RTTIBase[1]");
	set_name(0x1537ab0, "RibbonListResource::sBases");
	del_items(0x1537ab8, DELIT_SIMPLE, 28);
	apply_type(0x1537ab8, "RTTIAttr[1]");
	set_name(0x1537ab8, "RibbonListResource::sAttrs");

	// RibbonResource
	set_name(0x1536dc4, "RibbonResource");
	apply_type(0x1536dc4, "RTTICompound");
	del_items(0x1537ad4, DELIT_SIMPLE, 8);
	apply_type(0x1537ad4, "RTTIBase[1]");
	set_name(0x1537ad4, "RibbonResource::sBases");
	del_items(0x1537adc, DELIT_SIMPLE, 84);
	apply_type(0x1537adc, "RTTIAttr[3]");
	set_name(0x1537adc, "RibbonResource::sAttrs");

	// Rocket
	set_name(0x15261cc, "Rocket");
	apply_type(0x15261cc, "RTTICompound");
	del_items(0x1527454, DELIT_SIMPLE, 8);
	apply_type(0x1527454, "RTTIBase[1]");
	set_name(0x1527454, "Rocket::sBases");

	// RocketMover
	set_name(0x152ab60, "RocketMover");
	apply_type(0x152ab60, "RTTICompound");
	del_items(0x152b73c, DELIT_SIMPLE, 8);
	apply_type(0x152b73c, "RTTIBase[1]");
	set_name(0x152b73c, "RocketMover::sBases");

	// RocketMoverResource
	set_name(0x152abb4, "RocketMoverResource");
	apply_type(0x152abb4, "RTTICompound");
	del_items(0x152b504, DELIT_SIMPLE, 8);
	apply_type(0x152b504, "RTTIBase[1]");
	set_name(0x152b504, "RocketMoverResource::sBases");
	del_items(0x152b50c, DELIT_SIMPLE, 560);
	apply_type(0x152b50c, "RTTIAttr[20]");
	set_name(0x152b50c, "RocketMoverResource::sAttrs");

	// RocketPodMover
	set_name(0x14fb824, "RocketPodMover");
	apply_type(0x14fb824, "RTTICompound");
	del_items(0x14ffa88, DELIT_SIMPLE, 8);
	apply_type(0x14ffa88, "RTTIBase[1]");
	set_name(0x14ffa88, "RocketPodMover::sBases");

	// RocketPodMoverResource
	set_name(0x14fb878, "RocketPodMoverResource");
	apply_type(0x14fb878, "RTTICompound");
	del_items(0x14ffa90, DELIT_SIMPLE, 8);
	apply_type(0x14ffa90, "RTTIBase[1]");
	set_name(0x14ffa90, "RocketPodMoverResource::sBases");
	del_items(0x14ffa98, DELIT_SIMPLE, 56);
	apply_type(0x14ffa98, "RTTIAttr[2]");
	set_name(0x14ffa98, "RocketPodMoverResource::sAttrs");

	// RocketRep
	set_name(0x1526220, "RocketRep");
	apply_type(0x1526220, "RTTICompound");
	del_items(0x152745c, DELIT_SIMPLE, 8);
	apply_type(0x152745c, "RTTIBase[1]");
	set_name(0x152745c, "RocketRep::sBases");

	// RocketResource
	set_name(0x1526274, "RocketResource");
	apply_type(0x1526274, "RTTICompound");
	del_items(0x1527350, DELIT_SIMPLE, 8);
	apply_type(0x1527350, "RTTIBase[1]");
	set_name(0x1527350, "RocketResource::sBases");
	del_items(0x1527358, DELIT_SIMPLE, 252);
	apply_type(0x1527358, "RTTIAttr[9]");
	set_name(0x1527358, "RocketResource::sAttrs");

	// RollBone
	set_name(0x14e3a60, "RollBone");
	apply_type(0x14e3a60, "RTTICompound");
	del_items(0x14e6fb8, DELIT_SIMPLE, 8);
	apply_type(0x14e6fb8, "RTTIBase[1]");
	set_name(0x14e6fb8, "RollBone::sBases");
	del_items(0x14e6fc0, DELIT_SIMPLE, 168);
	apply_type(0x14e6fc0, "RTTIAttr[6]");
	set_name(0x14e6fc0, "RollBone::sAttrs");

	// RotMatrix
	set_name(0x14b7f24, "RotMatrix");
	apply_type(0x14b7f24, "RTTICompound");
	del_items(0x14b867c, DELIT_SIMPLE, 84);
	apply_type(0x14b867c, "RTTIAttr[3]");
	set_name(0x14b867c, "RotMatrix::sAttrs");

	// RumbleEventInstance
	set_name(0x151a764, "RumbleEventInstance");
	apply_type(0x151a764, "RTTICompound");
	del_items(0x151c440, DELIT_SIMPLE, 8);
	apply_type(0x151c440, "RTTIBase[1]");
	set_name(0x151c440, "RumbleEventInstance::sBases");

	// RumbleEventResource
	set_name(0x151a710, "RumbleEventResource");
	apply_type(0x151a710, "RTTICompound");
	del_items(0x151c3c8, DELIT_SIMPLE, 8);
	apply_type(0x151c3c8, "RTTIBase[1]");
	set_name(0x151c3c8, "RumbleEventResource::sBases");
	del_items(0x151c3d0, DELIT_SIMPLE, 112);
	apply_type(0x151c3d0, "RTTIAttr[4]");
	set_name(0x151c3d0, "RumbleEventResource::sAttrs");

	// RumbleResource
	set_name(0x14bd540, "RumbleResource");
	apply_type(0x14bd540, "RTTICompound");
	del_items(0x14be110, DELIT_SIMPLE, 8);
	apply_type(0x14be110, "RTTIBase[1]");
	set_name(0x14be110, "RumbleResource::sBases");
	del_items(0x14be118, DELIT_SIMPLE, 364);
	apply_type(0x14be118, "RTTIAttr[13]");
	set_name(0x14be118, "RumbleResource::sAttrs");
	del_items(0x14be284, DELIT_SIMPLE, 12);
	apply_type(0x14be284, "RTTIMessageHandler[1]");
	set_name(0x14be284, "RumbleResource::sMessageHandlers");

	// SHVector4x9
	set_name(0x14b7f78, "SHVector4x9");
	apply_type(0x14b7f78, "RTTICompound");
	del_items(0x14b86f4, DELIT_SIMPLE, 252);
	apply_type(0x14b86f4, "RTTIAttr[9]");
	set_name(0x14b86f4, "SHVector4x9::sAttrs");

	// SHVectorFixedPoint
	set_name(0x14c8a20, "SHVectorFixedPoint");
	apply_type(0x14c8a20, "RTTICompound");
	del_items(0x14c98b0, DELIT_SIMPLE, 112);
	apply_type(0x14c98b0, "RTTIAttr[4]");
	set_name(0x14c98b0, "SHVectorFixedPoint::sAttrs");

	// SKDTree
	set_name(0x14addec, "SKDTree");
	apply_type(0x14addec, "RTTICompound");
	del_items(0x14ae484, DELIT_SIMPLE, 84);
	apply_type(0x14ae484, "RTTIAttr[3]");
	set_name(0x14ae484, "SKDTree::sAttrs");

	// SKDTreeNode
	set_name(0x14add98, "SKDTreeNode");
	apply_type(0x14add98, "RTTICompound");
	del_items(0x14ae414, DELIT_SIMPLE, 112);
	apply_type(0x14ae414, "RTTIAttr[4]");
	set_name(0x14ae414, "SKDTreeNode::sAttrs");

	// SKDTreeResource
	set_name(0x14bef14, "SKDTreeResource");
	apply_type(0x14bef14, "RTTICompound");
	del_items(0x14bf204, DELIT_SIMPLE, 8);
	apply_type(0x14bf204, "RTTIBase[1]");
	set_name(0x14bf204, "SKDTreeResource::sBases");
	del_items(0x14bf20c, DELIT_SIMPLE, 56);
	apply_type(0x14bf20c, "RTTIAttr[2]");
	set_name(0x14bf20c, "SKDTreeResource::sAttrs");

	// SMGGameModule
	set_name(0x15421ec, "SMGGameModule");
	apply_type(0x15421ec, "RTTICompound");
	del_items(0x1542c9c, DELIT_SIMPLE, 8);
	apply_type(0x1542c9c, "RTTIBase[1]");
	set_name(0x1542c9c, "SMGGameModule::sBases");

	// SMGGameScriptInterface
	set_name(0x15417cc, "SMGGameScriptInterface");
	apply_type(0x15417cc, "RTTICompound");
	del_items(0x1542a54, DELIT_SIMPLE, 8);
	apply_type(0x1542a54, "RTTIBase[1]");
	set_name(0x1542a54, "SMGGameScriptInterface::sBases");
	del_items(0x1542a5c, DELIT_SIMPLE, 576);
	apply_type(0x1542a5c, "RTTIFunction[24]");
	set_name(0x1542a5c, "SMGGameScriptInterface::sFunctions");

	// SMGGesture
	set_name(0x1541ecc, "SMGGesture");
	apply_type(0x1541ecc, "RTTICompound");
	del_items(0x154360c, DELIT_SIMPLE, 8);
	apply_type(0x154360c, "RTTIBase[1]");
	set_name(0x154360c, "SMGGesture::sBases");
	del_items(0x1543614, DELIT_SIMPLE, 252);
	apply_type(0x1543614, "RTTIAttr[9]");
	set_name(0x1543614, "SMGGesture::sAttrs");
	del_items(0x1543710, DELIT_SIMPLE, 12);
	apply_type(0x1543710, "RTTIMessageHandler[1]");
	set_name(0x1543710, "SMGGesture::sMessageHandlers");

	// SMGGestureCollection
	set_name(0x1541f30, "SMGGestureCollection");
	apply_type(0x1541f30, "RTTICompound");
	del_items(0x154371c, DELIT_SIMPLE, 8);
	apply_type(0x154371c, "RTTIBase[1]");
	set_name(0x154371c, "SMGGestureCollection::sBases");
	del_items(0x1543724, DELIT_SIMPLE, 56);
	apply_type(0x1543724, "RTTIAttr[2]");
	set_name(0x1543724, "SMGGestureCollection::sAttrs");
	del_items(0x154375c, DELIT_SIMPLE, 12);
	apply_type(0x154375c, "RTTIMessageHandler[1]");
	set_name(0x154375c, "SMGGestureCollection::sMessageHandlers");

	// SMGMenuModule
	set_name(0x154293c, "SMGMenuModule");
	apply_type(0x154293c, "RTTICompound");
	del_items(0x1544164, DELIT_SIMPLE, 8);
	apply_type(0x1544164, "RTTIBase[1]");
	set_name(0x1544164, "SMGMenuModule::sBases");
	del_items(0x154416c, DELIT_SIMPLE, 96);
	apply_type(0x154416c, "RTTIFunction[4]");
	set_name(0x154416c, "SMGMenuModule::sFunctions");

	// SMGPlayerProfile
	set_name(0x15428e8, "SMGPlayerProfile");
	apply_type(0x15428e8, "RTTICompound");
	del_items(0x15431d4, DELIT_SIMPLE, 8);
	apply_type(0x15431d4, "RTTIBase[1]");
	set_name(0x15431d4, "SMGPlayerProfile::sBases");

	// SPoint3
	set_name(0x15e74d0, "SPoint3");
	apply_type(0x15e74d0, "RTTICompound");
	del_items(0x14b8170, DELIT_SIMPLE, 84);
	apply_type(0x14b8170, "RTTIAttr[3]");
	set_name(0x14b8170, "SPoint3::sAttrs");

	// SSAOSettingsResource
	set_name(0x14cbe00, "SSAOSettingsResource");
	apply_type(0x14cbe00, "RTTICompound");
	del_items(0x14cce2c, DELIT_SIMPLE, 8);
	apply_type(0x14cce2c, "RTTIBase[1]");
	set_name(0x14cce2c, "SSAOSettingsResource::sBases");
	del_items(0x14cce34, DELIT_SIMPLE, 56);
	apply_type(0x14cce34, "RTTIAttr[2]");
	set_name(0x14cce34, "SSAOSettingsResource::sAttrs");

	// SabotageComponent
	set_name(0x1513f30, "SabotageComponent");
	apply_type(0x1513f30, "RTTICompound");
	del_items(0x1516fcc, DELIT_SIMPLE, 8);
	apply_type(0x1516fcc, "RTTIBase[1]");
	set_name(0x1516fcc, "SabotageComponent::sBases");

	// SabotageComponentRep
	set_name(0x1513f84, "SabotageComponentRep");
	apply_type(0x1513f84, "RTTICompound");
	del_items(0x1516fd8, DELIT_SIMPLE, 8);
	apply_type(0x1516fd8, "RTTIBase[1]");
	set_name(0x1516fd8, "SabotageComponentRep::sBases");

	// SabotageComponentResource
	set_name(0x1514078, "SabotageComponentResource");
	apply_type(0x1514078, "RTTICompound");
	del_items(0x1516f88, DELIT_SIMPLE, 8);
	apply_type(0x1516f88, "RTTIBase[1]");
	set_name(0x1516f88, "SabotageComponentResource::sBases");
	del_items(0x1516f90, DELIT_SIMPLE, 56);
	apply_type(0x1516f90, "RTTIAttr[2]");
	set_name(0x1516f90, "SabotageComponentResource::sAttrs");

	// Saw
	set_name(0x1522694, "Saw");
	apply_type(0x1522694, "RTTICompound");
	del_items(0x1522fd0, DELIT_SIMPLE, 8);
	apply_type(0x1522fd0, "RTTIBase[1]");
	set_name(0x1522fd0, "Saw::sBases");

	// SawRep
	set_name(0x15226e8, "SawRep");
	apply_type(0x15226e8, "RTTICompound");
	del_items(0x1524064, DELIT_SIMPLE, 8);
	apply_type(0x1524064, "RTTIBase[1]");
	set_name(0x1524064, "SawRep::sBases");

	// SawResource
	set_name(0x152273c, "SawResource");
	apply_type(0x152273c, "RTTICompound");
	del_items(0x1522e3c, DELIT_SIMPLE, 8);
	apply_type(0x1522e3c, "RTTIBase[1]");
	set_name(0x1522e3c, "SawResource::sBases");
	del_items(0x1522e44, DELIT_SIMPLE, 392);
	apply_type(0x1522e44, "RTTIAttr[14]");
	set_name(0x1522e44, "SawResource::sAttrs");

	// ScaleableTimedEventResource
	set_name(0x151da3c, "ScaleableTimedEventResource");
	apply_type(0x151da3c, "RTTICompound");
	del_items(0x151e578, DELIT_SIMPLE, 8);
	apply_type(0x151e578, "RTTIBase[1]");
	set_name(0x151e578, "ScaleableTimedEventResource::sBases");
	del_items(0x151e580, DELIT_SIMPLE, 84);
	apply_type(0x151e580, "RTTIAttr[3]");
	set_name(0x151e580, "ScaleableTimedEventResource::sAttrs");

	// ScenarioMissionListResource
	set_name(0x1528fcc, "ScenarioMissionListResource");
	apply_type(0x1528fcc, "RTTICompound");
	del_items(0x152a594, DELIT_SIMPLE, 8);
	apply_type(0x152a594, "RTTIBase[1]");
	set_name(0x152a594, "ScenarioMissionListResource::sBases");
	del_items(0x152a59c, DELIT_SIMPLE, 28);
	apply_type(0x152a59c, "RTTIAttr[1]");
	set_name(0x152a59c, "ScenarioMissionListResource::sAttrs");

	// ScoreCounterTag
	set_name(0x153e4d8, "ScoreCounterTag");
	apply_type(0x153e4d8, "RTTICompound");
	del_items(0x1540404, DELIT_SIMPLE, 8);
	apply_type(0x1540404, "RTTIBase[1]");
	set_name(0x1540404, "ScoreCounterTag::sBases");

	// ScoreCounterWidget
	set_name(0x153e6d0, "ScoreCounterWidget");
	apply_type(0x153e6d0, "RTTICompound");
	del_items(0x1540624, DELIT_SIMPLE, 8);
	apply_type(0x1540624, "RTTIBase[1]");
	set_name(0x1540624, "ScoreCounterWidget::sBases");

	// ScoreCounterWidgetResource
	set_name(0x153e724, "ScoreCounterWidgetResource");
	apply_type(0x153e724, "RTTICompound");
	del_items(0x154062c, DELIT_SIMPLE, 8);
	apply_type(0x154062c, "RTTIBase[1]");
	set_name(0x154062c, "ScoreCounterWidgetResource::sBases");
	del_items(0x1540634, DELIT_SIMPLE, 84);
	apply_type(0x1540634, "RTTIAttr[3]");
	set_name(0x1540634, "ScoreCounterWidgetResource::sAttrs");

	// ScoreProcessor
	set_name(0x14f0918, "ScoreProcessor");
	apply_type(0x14f0918, "RTTICompound");
	del_items(0x14f257c, DELIT_SIMPLE, 8);
	apply_type(0x14f257c, "RTTIBase[1]");
	set_name(0x14f257c, "ScoreProcessor::sBases");
	del_items(0x14f2584, DELIT_SIMPLE, 24);
	apply_type(0x14f2584, "RTTIFunction[1]");
	set_name(0x14f2584, "ScoreProcessor::sFunctions");

	// ScoreProcessorReplicatedObject
	set_name(0x14f0860, "ScoreProcessorReplicatedObject");
	apply_type(0x14f0860, "RTTICompound");
	del_items(0x14f477c, DELIT_SIMPLE, 8);
	apply_type(0x14f477c, "RTTIBase[1]");
	set_name(0x14f477c, "ScoreProcessorReplicatedObject::sBases");

	// ScoreProcessorResource
	set_name(0x14f096c, "ScoreProcessorResource");
	apply_type(0x14f096c, "RTTICompound");
	del_items(0x14f2648, DELIT_SIMPLE, 8);
	apply_type(0x14f2648, "RTTIBase[1]");
	set_name(0x14f2648, "ScoreProcessorResource::sBases");
	del_items(0x14f2650, DELIT_SIMPLE, 56);
	apply_type(0x14f2650, "RTTIAttr[2]");
	set_name(0x14f2650, "ScoreProcessorResource::sAttrs");

	// ScoreStatRequirement
	set_name(0x14f0270, "ScoreStatRequirement");
	apply_type(0x14f0270, "RTTICompound");
	del_items(0x14f3d68, DELIT_SIMPLE, 168);
	apply_type(0x14f3d68, "RTTIAttr[6]");
	set_name(0x14f3d68, "ScoreStatRequirement::sAttrs");

	// ScoringResource
	set_name(0x14f0650, "ScoringResource");
	apply_type(0x14f0650, "RTTICompound");
	del_items(0x14f4044, DELIT_SIMPLE, 8);
	apply_type(0x14f4044, "RTTIBase[1]");
	set_name(0x14f4044, "ScoringResource::sBases");
	del_items(0x14f404c, DELIT_SIMPLE, 1624);
	apply_type(0x14f404c, "RTTIAttr[58]");
	set_name(0x14f404c, "ScoringResource::sAttrs");

	// ScreenEffectEventInstance
	set_name(0x151dae4, "ScreenEffectEventInstance");
	apply_type(0x151dae4, "RTTICompound");
	del_items(0x151f520, DELIT_SIMPLE, 8);
	apply_type(0x151f520, "RTTIBase[1]");
	set_name(0x151f520, "ScreenEffectEventInstance::sBases");

	// ScreenEffectEventResource
	set_name(0x151da90, "ScreenEffectEventResource");
	apply_type(0x151da90, "RTTICompound");
	del_items(0x151f48c, DELIT_SIMPLE, 8);
	apply_type(0x151f48c, "RTTIBase[1]");
	set_name(0x151f48c, "ScreenEffectEventResource::sBases");
	del_items(0x151f494, DELIT_SIMPLE, 140);
	apply_type(0x151f494, "RTTIAttr[5]");
	set_name(0x151f494, "ScreenEffectEventResource::sAttrs");

	// ScreenEffectResource
	set_name(0x14faab4, "ScreenEffectResource");
	apply_type(0x14faab4, "RTTICompound");
	del_items(0x14feedc, DELIT_SIMPLE, 8);
	apply_type(0x14feedc, "RTTIBase[1]");
	set_name(0x14feedc, "ScreenEffectResource::sBases");
	del_items(0x14feee4, DELIT_SIMPLE, 84);
	apply_type(0x14feee4, "RTTIAttr[3]");
	set_name(0x14feee4, "ScreenEffectResource::sAttrs");

	// ScriptCountdownTimer
	set_name(0x14ce420, "ScriptCountdownTimer");
	apply_type(0x14ce420, "RTTICompound");
	del_items(0x14ce638, DELIT_SIMPLE, 16);
	apply_type(0x14ce638, "RTTIBase[2]");
	set_name(0x14ce638, "ScriptCountdownTimer::sBases");
	del_items(0x14ce648, DELIT_SIMPLE, 84);
	apply_type(0x14ce648, "RTTIAttr[3]");
	set_name(0x14ce648, "ScriptCountdownTimer::sAttrs");
	del_items(0x14ce69c, DELIT_SIMPLE, 240);
	apply_type(0x14ce69c, "RTTIFunction[10]");
	set_name(0x14ce69c, "ScriptCountdownTimer::sFunctions");

	// ScriptCountdownTimerGame
	set_name(0x1537a08, "ScriptCountdownTimerGame");
	apply_type(0x1537a08, "RTTICompound");
	del_items(0x153980c, DELIT_SIMPLE, 8);
	apply_type(0x153980c, "RTTIBase[1]");
	set_name(0x153980c, "ScriptCountdownTimerGame::sBases");
	del_items(0x1539814, DELIT_SIMPLE, 48);
	apply_type(0x1539814, "RTTIFunction[2]");
	set_name(0x1539814, "ScriptCountdownTimerGame::sFunctions");

	// ScriptFunctionAction
	set_name(0x14f8c24, "ScriptFunctionAction");
	apply_type(0x14f8c24, "RTTICompound");
	del_items(0x14fd5f8, DELIT_SIMPLE, 8);
	apply_type(0x14fd5f8, "RTTIBase[1]");
	set_name(0x14fd5f8, "ScriptFunctionAction::sBases");
	del_items(0x14fd600, DELIT_SIMPLE, 56);
	apply_type(0x14fd600, "RTTIAttr[2]");
	set_name(0x14fd600, "ScriptFunctionAction::sAttrs");

	// ScriptInterface
	set_name(0x1537a5c, "ScriptInterface");
	apply_type(0x1537a5c, "RTTICompound");
	del_items(0x1539844, DELIT_SIMPLE, 8);
	apply_type(0x1539844, "RTTIBase[1]");
	set_name(0x1539844, "ScriptInterface::sBases");

	// ScriptLogicComponent
	set_name(0x1550a0c, "ScriptLogicComponent");
	apply_type(0x1550a0c, "RTTICompound");
	del_items(0x1550c04, DELIT_SIMPLE, 8);
	apply_type(0x1550c04, "RTTIBase[1]");
	set_name(0x1550c04, "ScriptLogicComponent::sBases");

	// ScriptLogicComponentResource
	set_name(0x1550a60, "ScriptLogicComponentResource");
	apply_type(0x1550a60, "RTTICompound");
	del_items(0x1550bdc, DELIT_SIMPLE, 8);
	apply_type(0x1550bdc, "RTTIBase[1]");
	set_name(0x1550bdc, "ScriptLogicComponentResource::sBases");
	del_items(0x1550be4, DELIT_SIMPLE, 28);
	apply_type(0x1550be4, "RTTIAttr[1]");
	set_name(0x1550be4, "ScriptLogicComponentResource::sAttrs");

	// ScriptMessage
	set_name(0x14ce474, "ScriptMessage");
	apply_type(0x14ce474, "RTTICompound");
	del_items(0x14ce78c, DELIT_SIMPLE, 8);
	apply_type(0x14ce78c, "RTTIBase[1]");
	set_name(0x14ce78c, "ScriptMessage::sBases");
	del_items(0x14ce794, DELIT_SIMPLE, 192);
	apply_type(0x14ce794, "RTTIFunction[8]");
	set_name(0x14ce794, "ScriptMessage::sFunctions");

	// ScriptMessageAction
	set_name(0x14f9804, "ScriptMessageAction");
	apply_type(0x14f9804, "RTTICompound");
	del_items(0x14fe400, DELIT_SIMPLE, 8);
	apply_type(0x14fe400, "RTTIBase[1]");
	set_name(0x14fe400, "ScriptMessageAction::sBases");
	del_items(0x14fe408, DELIT_SIMPLE, 56);
	apply_type(0x14fe408, "RTTIAttr[2]");
	set_name(0x14fe408, "ScriptMessageAction::sAttrs");

	// ScriptMessageQueue
	set_name(0x14ce51c, "ScriptMessageQueue");
	apply_type(0x14ce51c, "RTTICompound");
	del_items(0x14ce85c, DELIT_SIMPLE, 8);
	apply_type(0x14ce85c, "RTTIBase[1]");
	set_name(0x14ce85c, "ScriptMessageQueue::sBases");
	del_items(0x14ce864, DELIT_SIMPLE, 96);
	apply_type(0x14ce864, "RTTIFunction[4]");
	set_name(0x14ce864, "ScriptMessageQueue::sFunctions");
	del_items(0x14ce8c4, DELIT_SIMPLE, 12);
	apply_type(0x14ce8c4, "RTTIMessageHandler[1]");
	set_name(0x14ce8c4, "ScriptMessageQueue::sMessageHandlers");

	// ScriptNodeManager
	set_name(0x14ce570, "ScriptNodeManager");
	apply_type(0x14ce570, "RTTICompound");
	del_items(0x14ce8d0, DELIT_SIMPLE, 8);
	apply_type(0x14ce8d0, "RTTIBase[1]");
	set_name(0x14ce8d0, "ScriptNodeManager::sBases");
	del_items(0x14ce8d8, DELIT_SIMPLE, 144);
	apply_type(0x14ce8d8, "RTTIFunction[6]");
	set_name(0x14ce8d8, "ScriptNodeManager::sFunctions");

	// ScriptPauseEventInstance
	set_name(0x151db8c, "ScriptPauseEventInstance");
	apply_type(0x151db8c, "RTTICompound");
	del_items(0x151f568, DELIT_SIMPLE, 8);
	apply_type(0x151f568, "RTTIBase[1]");
	set_name(0x151f568, "ScriptPauseEventInstance::sBases");

	// ScriptPauseEventResource
	set_name(0x151db38, "ScriptPauseEventResource");
	apply_type(0x151db38, "RTTICompound");
	del_items(0x151f528, DELIT_SIMPLE, 8);
	apply_type(0x151f528, "RTTIBase[1]");
	set_name(0x151f528, "ScriptPauseEventResource::sBases");
	del_items(0x151f530, DELIT_SIMPLE, 56);
	apply_type(0x151f530, "RTTIAttr[2]");
	set_name(0x151f530, "ScriptPauseEventResource::sAttrs");

	// ScriptPropertyAction
	set_name(0x14f8c78, "ScriptPropertyAction");
	apply_type(0x14f8c78, "RTTICompound");
	del_items(0x14fd638, DELIT_SIMPLE, 8);
	apply_type(0x14fd638, "RTTIBase[1]");
	set_name(0x14fd638, "ScriptPropertyAction::sBases");
	del_items(0x14fd640, DELIT_SIMPLE, 84);
	apply_type(0x14fd640, "RTTIAttr[3]");
	set_name(0x14fd640, "ScriptPropertyAction::sAttrs");

	// ScriptPropertyComponent
	set_name(0x150fb78, "ScriptPropertyComponent");
	apply_type(0x150fb78, "RTTICompound");
	del_items(0x151244c, DELIT_SIMPLE, 8);
	apply_type(0x151244c, "RTTIBase[1]");
	set_name(0x151244c, "ScriptPropertyComponent::sBases");

	// ScriptSound
	set_name(0x14dd774, "ScriptSound");
	apply_type(0x14dd774, "RTTICompound");
	del_items(0x14df8a8, DELIT_SIMPLE, 16);
	apply_type(0x14df8a8, "RTTIBase[2]");
	set_name(0x14df8a8, "ScriptSound::sBases");
	del_items(0x14df8b8, DELIT_SIMPLE, 48);
	apply_type(0x14df8b8, "RTTIFunction[2]");
	set_name(0x14df8b8, "ScriptSound::sFunctions");

	// ScriptTag
	set_name(0x14c0270, "ScriptTag");
	apply_type(0x14c0270, "RTTICompound");
	del_items(0x14c2c9c, DELIT_SIMPLE, 8);
	apply_type(0x14c2c9c, "RTTIBase[1]");
	set_name(0x14c2c9c, "ScriptTag::sBases");

	// ScriptedPickUpResource
	set_name(0x1518d50, "ScriptedPickUpResource");
	apply_type(0x1518d50, "RTTICompound");
	del_items(0x151aec0, DELIT_SIMPLE, 8);
	apply_type(0x151aec0, "RTTIBase[1]");
	set_name(0x151aec0, "ScriptedPickUpResource::sBases");

	// ScriptedSoundInstance
	set_name(0x14dd290, "ScriptedSoundInstance");
	apply_type(0x14dd290, "RTTICompound");
	del_items(0x14df5d0, DELIT_SIMPLE, 8);
	apply_type(0x14df5d0, "RTTIBase[1]");
	set_name(0x14df5d0, "ScriptedSoundInstance::sBases");

	// ScriptedSoundResource
	set_name(0x14dd1ec, "ScriptedSoundResource");
	apply_type(0x14dd1ec, "RTTICompound");
	del_items(0x14deb58, DELIT_SIMPLE, 8);
	apply_type(0x14deb58, "RTTIBase[1]");
	set_name(0x14deb58, "ScriptedSoundResource::sBases");
	del_items(0x14deb60, DELIT_SIMPLE, 28);
	apply_type(0x14deb60, "RTTIAttr[1]");
	set_name(0x14deb60, "ScriptedSoundResource::sAttrs");
	del_items(0x14deb7c, DELIT_SIMPLE, 12);
	apply_type(0x14deb7c, "RTTIMessageHandler[1]");
	set_name(0x14deb7c, "ScriptedSoundResource::sMessageHandlers");

	// ScriptedWeapon
	set_name(0x15263d4, "ScriptedWeapon");
	apply_type(0x15263d4, "RTTICompound");
	del_items(0x1527894, DELIT_SIMPLE, 8);
	apply_type(0x1527894, "RTTIBase[1]");
	set_name(0x1527894, "ScriptedWeapon::sBases");

	// ScriptedWeaponResource
	set_name(0x1526438, "ScriptedWeaponResource");
	apply_type(0x1526438, "RTTICompound");
	del_items(0x15278a8, DELIT_SIMPLE, 8);
	apply_type(0x15278a8, "RTTIBase[1]");
	set_name(0x15278a8, "ScriptedWeaponResource::sBases");
	del_items(0x15278b0, DELIT_SIMPLE, 56);
	apply_type(0x15278b0, "RTTIAttr[2]");
	set_name(0x15278b0, "ScriptedWeaponResource::sAttrs");

	// ScrollbarWidget
	set_name(0x14c12b4, "ScrollbarWidget");
	apply_type(0x14c12b4, "RTTICompound");
	del_items(0x14c3298, DELIT_SIMPLE, 8);
	apply_type(0x14c3298, "RTTIBase[1]");
	set_name(0x14c3298, "ScrollbarWidget::sBases");

	// ScrollingPanelTag
	set_name(0x14c0834, "ScrollingPanelTag");
	apply_type(0x14c0834, "RTTICompound");
	del_items(0x14c29e8, DELIT_SIMPLE, 8);
	apply_type(0x14c29e8, "RTTIBase[1]");
	set_name(0x14c29e8, "ScrollingPanelTag::sBases");

	// ScrollingPanelWidget
	set_name(0x14c11b8, "ScrollingPanelWidget");
	apply_type(0x14c11b8, "RTTICompound");
	del_items(0x14c340c, DELIT_SIMPLE, 8);
	apply_type(0x14c340c, "RTTIBase[1]");
	set_name(0x14c340c, "ScrollingPanelWidget::sBases");

	// SearchAndRetrieveBase
	set_name(0x151733c, "SearchAndRetrieveBase");
	apply_type(0x151733c, "RTTICompound");
	del_items(0x1518278, DELIT_SIMPLE, 8);
	apply_type(0x1518278, "RTTIBase[1]");
	set_name(0x1518278, "SearchAndRetrieveBase::sBases");

	// SearchAndRetrieveBaseRep
	set_name(0x1517390, "SearchAndRetrieveBaseRep");
	apply_type(0x1517390, "RTTICompound");
	del_items(0x1518280, DELIT_SIMPLE, 8);
	apply_type(0x1518280, "RTTIBase[1]");
	set_name(0x1518280, "SearchAndRetrieveBaseRep::sBases");

	// SearchAndRetrieveBaseResource
	set_name(0x15173e4, "SearchAndRetrieveBaseResource");
	apply_type(0x15173e4, "RTTICompound");
	del_items(0x15181a0, DELIT_SIMPLE, 8);
	apply_type(0x15181a0, "RTTIBase[1]");
	set_name(0x15181a0, "SearchAndRetrieveBaseResource::sBases");
	del_items(0x15181a8, DELIT_SIMPLE, 196);
	apply_type(0x15181a8, "RTTIAttr[7]");
	set_name(0x15181a8, "SearchAndRetrieveBaseResource::sAttrs");
	del_items(0x151826c, DELIT_SIMPLE, 12);
	apply_type(0x151826c, "RTTIMessageHandler[1]");
	set_name(0x151826c, "SearchAndRetrieveBaseResource::sMessageHandlers");

	// SearchAndRetrieveObject
	set_name(0x1517438, "SearchAndRetrieveObject");
	apply_type(0x1517438, "RTTICompound");
	del_items(0x1517f9c, DELIT_SIMPLE, 8);
	apply_type(0x1517f9c, "RTTIBase[1]");
	set_name(0x1517f9c, "SearchAndRetrieveObject::sBases");

	// SearchAndRetrieveObjectRep
	set_name(0x151748c, "SearchAndRetrieveObjectRep");
	apply_type(0x151748c, "RTTICompound");
	del_items(0x1518288, DELIT_SIMPLE, 8);
	apply_type(0x1518288, "RTTIBase[1]");
	set_name(0x1518288, "SearchAndRetrieveObjectRep::sBases");

	// SearchAndRetrieveObjectResource
	set_name(0x15174f0, "SearchAndRetrieveObjectResource");
	apply_type(0x15174f0, "RTTICompound");
	del_items(0x1517e80, DELIT_SIMPLE, 8);
	apply_type(0x1517e80, "RTTIBase[1]");
	set_name(0x1517e80, "SearchAndRetrieveObjectResource::sBases");
	del_items(0x1517e88, DELIT_SIMPLE, 252);
	apply_type(0x1517e88, "RTTIAttr[9]");
	set_name(0x1517e88, "SearchAndRetrieveObjectResource::sAttrs");
	del_items(0x1517f84, DELIT_SIMPLE, 24);
	apply_type(0x1517f84, "RTTIMessageHandler[2]");
	set_name(0x1517f84, "SearchAndRetrieveObjectResource::sMessageHandlers");

	// SectionAssetInfo
	set_name(0x14ef9a8, "SectionAssetInfo");
	apply_type(0x14ef9a8, "RTTICompound");
	del_items(0x14f0dd8, DELIT_SIMPLE, 84);
	apply_type(0x14f0dd8, "RTTIAttr[3]");
	set_name(0x14f0dd8, "SectionAssetInfo::sAttrs");

	// SelectByVariableInfo
	set_name(0x14d9acc, "SelectByVariableInfo");
	apply_type(0x14d9acc, "RTTICompound");
	del_items(0x14dc18c, DELIT_SIMPLE, 84);
	apply_type(0x14dc18c, "RTTIAttr[3]");
	set_name(0x14dc18c, "SelectByVariableInfo::sAttrs");

	// SelectByVariableSkeletonAnimationResource
	set_name(0x14d97dc, "SelectByVariableSkeletonAnimationResource");
	apply_type(0x14d97dc, "RTTICompound");
	del_items(0x14dc1e0, DELIT_SIMPLE, 8);
	apply_type(0x14dc1e0, "RTTIBase[1]");
	set_name(0x14dc1e0, "SelectByVariableSkeletonAnimationResource::sBases");
	del_items(0x14dc1e8, DELIT_SIMPLE, 84);
	apply_type(0x14dc1e8, "RTTIAttr[3]");
	set_name(0x14dc1e8, "SelectByVariableSkeletonAnimationResource::sAttrs");

	// SelectItemTag
	set_name(0x14c0930, "SelectItemTag");
	apply_type(0x14c0930, "RTTICompound");
	del_items(0x14c2c44, DELIT_SIMPLE, 8);
	apply_type(0x14c2c44, "RTTIBase[1]");
	set_name(0x14c2c44, "SelectItemTag::sBases");

	// SelectTag
	set_name(0x14c0984, "SelectTag");
	apply_type(0x14c0984, "RTTICompound");
	del_items(0x14c2bac, DELIT_SIMPLE, 8);
	apply_type(0x14c2bac, "RTTIBase[1]");
	set_name(0x14c2bac, "SelectTag::sBases");
	del_items(0x14c2bb4, DELIT_SIMPLE, 144);
	apply_type(0x14c2bb4, "RTTIFunction[6]");
	set_name(0x14c2bb4, "SelectTag::sFunctions");

	// SelectWidget
	set_name(0x14c1308, "SelectWidget");
	apply_type(0x14c1308, "RTTICompound");
	del_items(0x14c2f2c, DELIT_SIMPLE, 8);
	apply_type(0x14c2f2c, "RTTIBase[1]");
	set_name(0x14c2f2c, "SelectWidget::sBases");

	// SendMessageToScriptEventInstance
	set_name(0x151dc34, "SendMessageToScriptEventInstance");
	apply_type(0x151dc34, "RTTICompound");
	del_items(0x151f5b0, DELIT_SIMPLE, 8);
	apply_type(0x151f5b0, "RTTIBase[1]");
	set_name(0x151f5b0, "SendMessageToScriptEventInstance::sBases");

	// SendMessageToScriptEventResource
	set_name(0x151dbe0, "SendMessageToScriptEventResource");
	apply_type(0x151dbe0, "RTTICompound");
	del_items(0x151f570, DELIT_SIMPLE, 8);
	apply_type(0x151f570, "RTTIBase[1]");
	set_name(0x151f570, "SendMessageToScriptEventResource::sBases");
	del_items(0x151f578, DELIT_SIMPLE, 56);
	apply_type(0x151f578, "RTTIAttr[2]");
	set_name(0x151f578, "SendMessageToScriptEventResource::sAttrs");

	// SentenceGroup
	set_name(0x154097c, "SentenceGroup");
	apply_type(0x154097c, "RTTICompound");
	del_items(0x1540d94, DELIT_SIMPLE, 8);
	apply_type(0x1540d94, "RTTIBase[1]");
	set_name(0x1540d94, "SentenceGroup::sBases");
	del_items(0x1540d9c, DELIT_SIMPLE, 112);
	apply_type(0x1540d9c, "RTTIAttr[4]");
	set_name(0x1540d9c, "SentenceGroup::sAttrs");
	del_items(0x1540e0c, DELIT_SIMPLE, 96);
	apply_type(0x1540e0c, "RTTIFunction[4]");
	set_name(0x1540e0c, "SentenceGroup::sFunctions");

	// SentryBot
	set_name(0x1507d50, "SentryBot");
	apply_type(0x1507d50, "RTTICompound");
	del_items(0x1509520, DELIT_SIMPLE, 8);
	apply_type(0x1509520, "RTTIBase[1]");
	set_name(0x1509520, "SentryBot::sBases");

	// SentryBotAiController
	set_name(0x1507da4, "SentryBotAiController");
	apply_type(0x1507da4, "RTTICompound");
	del_items(0x1509530, DELIT_SIMPLE, 8);
	apply_type(0x1509530, "RTTIBase[1]");
	set_name(0x1509530, "SentryBotAiController::sBases");

	// SentryBotController
	set_name(0x1507df8, "SentryBotController");
	apply_type(0x1507df8, "RTTICompound");
	del_items(0x1509528, DELIT_SIMPLE, 8);
	apply_type(0x1509528, "RTTIBase[1]");
	set_name(0x1509528, "SentryBotController::sBases");

	// SentryBotResource
	set_name(0x1507e5c, "SentryBotResource");
	apply_type(0x1507e5c, "RTTICompound");
	del_items(0x1508fb0, DELIT_SIMPLE, 8);
	apply_type(0x1508fb0, "RTTIBase[1]");
	set_name(0x1508fb0, "SentryBotResource::sBases");
	del_items(0x1508fb8, DELIT_SIMPLE, 1372);
	apply_type(0x1508fb8, "RTTIAttr[49]");
	set_name(0x1508fb8, "SentryBotResource::sAttrs");
	del_items(0x1509514, DELIT_SIMPLE, 12);
	apply_type(0x1509514, "RTTIMessageHandler[1]");
	set_name(0x1509514, "SentryBotResource::sMessageHandlers");

	// SentryBotSetting
	set_name(0x15176f8, "SentryBotSetting");
	apply_type(0x15176f8, "RTTICompound");
	del_items(0x151838c, DELIT_SIMPLE, 56);
	apply_type(0x151838c, "RTTIAttr[2]");
	set_name(0x151838c, "SentryBotSetting::sAttrs");

	// Sequence
	set_name(0x15209b4, "Sequence");
	apply_type(0x15209b4, "RTTICompound");
	del_items(0x15210f8, DELIT_SIMPLE, 8);
	apply_type(0x15210f8, "RTTIBase[1]");
	set_name(0x15210f8, "Sequence::sBases");
	del_items(0x1521100, DELIT_SIMPLE, 192);
	apply_type(0x1521100, "RTTIFunction[8]");
	set_name(0x1521100, "Sequence::sFunctions");

	// SequenceCameraEntity
	set_name(0x1520ac0, "SequenceCameraEntity");
	apply_type(0x1520ac0, "RTTICompound");
	del_items(0x1521a60, DELIT_SIMPLE, 8);
	apply_type(0x1521a60, "RTTIBase[1]");
	set_name(0x1521a60, "SequenceCameraEntity::sBases");

	// SequenceCameraEntityRep
	set_name(0x1520b14, "SequenceCameraEntityRep");
	apply_type(0x1520b14, "RTTICompound");
	del_items(0x1521a68, DELIT_SIMPLE, 8);
	apply_type(0x1521a68, "RTTIBase[1]");
	set_name(0x1521a68, "SequenceCameraEntityRep::sBases");

	// SequenceCameraEntityResource
	set_name(0x1520b68, "SequenceCameraEntityResource");
	apply_type(0x1520b68, "RTTICompound");
	del_items(0x1521994, DELIT_SIMPLE, 8);
	apply_type(0x1521994, "RTTIBase[1]");
	set_name(0x1521994, "SequenceCameraEntityResource::sBases");
	del_items(0x152199c, DELIT_SIMPLE, 196);
	apply_type(0x152199c, "RTTIAttr[7]");
	set_name(0x152199c, "SequenceCameraEntityResource::sAttrs");

	// SequenceInfoMission
	set_name(0x1520c10, "SequenceInfoMission");
	apply_type(0x1520c10, "RTTICompound");
	del_items(0x1521aec, DELIT_SIMPLE, 8);
	apply_type(0x1521aec, "RTTIBase[1]");
	set_name(0x1521aec, "SequenceInfoMission::sBases");
	del_items(0x1521af4, DELIT_SIMPLE, 96);
	apply_type(0x1521af4, "RTTIFunction[4]");
	set_name(0x1521af4, "SequenceInfoMission::sFunctions");

	// SequenceInfoPlayer
	set_name(0x1520c64, "SequenceInfoPlayer");
	apply_type(0x1520c64, "RTTICompound");
	del_items(0x1521a84, DELIT_SIMPLE, 8);
	apply_type(0x1521a84, "RTTIBase[1]");
	set_name(0x1521a84, "SequenceInfoPlayer::sBases");
	del_items(0x1521a8c, DELIT_SIMPLE, 96);
	apply_type(0x1521a8c, "RTTIFunction[4]");
	set_name(0x1521a8c, "SequenceInfoPlayer::sFunctions");

	// SequenceRep
	set_name(0x1520a08, "SequenceRep");
	apply_type(0x1520a08, "RTTICompound");
	del_items(0x15211c0, DELIT_SIMPLE, 8);
	apply_type(0x15211c0, "RTTIBase[1]");
	set_name(0x15211c0, "SequenceRep::sBases");

	// SequenceResource
	set_name(0x1520a6c, "SequenceResource");
	apply_type(0x1520a6c, "RTTICompound");
	del_items(0x1520ea8, DELIT_SIMPLE, 8);
	apply_type(0x1520ea8, "RTTIBase[1]");
	set_name(0x1520ea8, "SequenceResource::sBases");
	del_items(0x1520eb0, DELIT_SIMPLE, 476);
	apply_type(0x1520eb0, "RTTIAttr[17]");
	set_name(0x1520eb0, "SequenceResource::sAttrs");

	// SequentialAnimationInfo
	set_name(0x14d9a68, "SequentialAnimationInfo");
	apply_type(0x14d9a68, "RTTICompound");
	del_items(0x14dbd84, DELIT_SIMPLE, 84);
	apply_type(0x14dbd84, "RTTIAttr[3]");
	set_name(0x14dbd84, "SequentialAnimationInfo::sAttrs");

	// SequentialSkeletonAnimationResource
	set_name(0x14d95b4, "SequentialSkeletonAnimationResource");
	apply_type(0x14d95b4, "RTTICompound");
	del_items(0x14dbdd8, DELIT_SIMPLE, 8);
	apply_type(0x14dbdd8, "RTTIBase[1]");
	set_name(0x14dbdd8, "SequentialSkeletonAnimationResource::sBases");
	del_items(0x14dbde0, DELIT_SIMPLE, 112);
	apply_type(0x14dbde0, "RTTIAttr[4]");
	set_name(0x14dbde0, "SequentialSkeletonAnimationResource::sAttrs");
	del_items(0x14dbe50, DELIT_SIMPLE, 12);
	apply_type(0x14dbe50, "RTTIMessageHandler[1]");
	set_name(0x14dbe50, "SequentialSkeletonAnimationResource::sMessageHandlers");

	// SetAnimationVariableAction
	set_name(0x14e2fb8, "SetAnimationVariableAction");
	apply_type(0x14e2fb8, "RTTICompound");
	del_items(0x14e6390, DELIT_SIMPLE, 8);
	apply_type(0x14e6390, "RTTIBase[1]");
	set_name(0x14e6390, "SetAnimationVariableAction::sBases");
	del_items(0x14e6398, DELIT_SIMPLE, 112);
	apply_type(0x14e6398, "RTTIAttr[4]");
	set_name(0x14e6398, "SetAnimationVariableAction::sAttrs");

	// SetControllerConfigAction
	set_name(0x154191c, "SetControllerConfigAction");
	apply_type(0x154191c, "RTTICompound");
	del_items(0x15432b8, DELIT_SIMPLE, 8);
	apply_type(0x15432b8, "RTTIBase[1]");
	set_name(0x15432b8, "SetControllerConfigAction::sBases");
	del_items(0x15432c0, DELIT_SIMPLE, 84);
	apply_type(0x15432c0, "RTTIAttr[3]");
	set_name(0x15432c0, "SetControllerConfigAction::sAttrs");

	// SetFirstPersonEventInstance
	set_name(0x1541da0, "SetFirstPersonEventInstance");
	apply_type(0x1541da0, "RTTICompound");
	del_items(0x1543594, DELIT_SIMPLE, 8);
	apply_type(0x1543594, "RTTIBase[1]");
	set_name(0x1543594, "SetFirstPersonEventInstance::sBases");

	// SetFirstPersonEventResource
	set_name(0x1541d4c, "SetFirstPersonEventResource");
	apply_type(0x1541d4c, "RTTICompound");
	del_items(0x1543554, DELIT_SIMPLE, 8);
	apply_type(0x1543554, "RTTIBase[1]");
	set_name(0x1543554, "SetFirstPersonEventResource::sBases");
	del_items(0x154355c, DELIT_SIMPLE, 56);
	apply_type(0x154355c, "RTTIAttr[2]");
	set_name(0x154355c, "SetFirstPersonEventResource::sAttrs");

	// SetLightIntensityAction
	set_name(0x14f975c, "SetLightIntensityAction");
	apply_type(0x14f975c, "RTTICompound");
	del_items(0x14fe348, DELIT_SIMPLE, 8);
	apply_type(0x14fe348, "RTTIBase[1]");
	set_name(0x14fe348, "SetLightIntensityAction::sBases");
	del_items(0x14fe350, DELIT_SIMPLE, 112);
	apply_type(0x14fe350, "RTTIAttr[4]");
	set_name(0x14fe350, "SetLightIntensityAction::sAttrs");

	// SetMoverAction
	set_name(0x14f8e1c, "SetMoverAction");
	apply_type(0x14f8e1c, "RTTICompound");
	del_items(0x14fd75c, DELIT_SIMPLE, 8);
	apply_type(0x14fd75c, "RTTIBase[1]");
	set_name(0x14fd75c, "SetMoverAction::sBases");
	del_items(0x14fd764, DELIT_SIMPLE, 56);
	apply_type(0x14fd764, "RTTIAttr[2]");
	set_name(0x14fd764, "SetMoverAction::sAttrs");

	// SetPropertyEventInstance
	set_name(0x151dcdc, "SetPropertyEventInstance");
	apply_type(0x151dcdc, "RTTICompound");
	del_items(0x151f64c, DELIT_SIMPLE, 8);
	apply_type(0x151f64c, "RTTIBase[1]");
	set_name(0x151f64c, "SetPropertyEventInstance::sBases");

	// SetPropertyEventResource
	set_name(0x151dc88, "SetPropertyEventResource");
	apply_type(0x151dc88, "RTTICompound");
	del_items(0x151f5b8, DELIT_SIMPLE, 8);
	apply_type(0x151f5b8, "RTTIBase[1]");
	set_name(0x151f5b8, "SetPropertyEventResource::sBases");
	del_items(0x151f5c0, DELIT_SIMPLE, 140);
	apply_type(0x151f5c0, "RTTIAttr[5]");
	set_name(0x151f5c0, "SetPropertyEventResource::sAttrs");

	// SetVoiceIDEventInstance
	set_name(0x1541c50, "SetVoiceIDEventInstance");
	apply_type(0x1541c50, "RTTICompound");
	del_items(0x1543504, DELIT_SIMPLE, 8);
	apply_type(0x1543504, "RTTIBase[1]");
	set_name(0x1543504, "SetVoiceIDEventInstance::sBases");

	// SetVoiceIDEventResource
	set_name(0x1541bfc, "SetVoiceIDEventResource");
	apply_type(0x1541bfc, "RTTICompound");
	del_items(0x15434a8, DELIT_SIMPLE, 8);
	apply_type(0x15434a8, "RTTIBase[1]");
	set_name(0x15434a8, "SetVoiceIDEventResource::sBases");
	del_items(0x15434b0, DELIT_SIMPLE, 84);
	apply_type(0x15434b0, "RTTIAttr[3]");
	set_name(0x15434b0, "SetVoiceIDEventResource::sAttrs");

	// SetVolumeEventInstance
	set_name(0x151979c, "SetVolumeEventInstance");
	apply_type(0x151979c, "RTTICompound");
	del_items(0x151b8b4, DELIT_SIMPLE, 8);
	apply_type(0x151b8b4, "RTTIBase[1]");
	set_name(0x151b8b4, "SetVolumeEventInstance::sBases");

	// SetVolumeEventResource
	set_name(0x1519748, "SetVolumeEventResource");
	apply_type(0x1519748, "RTTICompound");
	del_items(0x151b858, DELIT_SIMPLE, 8);
	apply_type(0x151b858, "RTTIBase[1]");
	set_name(0x151b858, "SetVolumeEventResource::sBases");
	del_items(0x151b860, DELIT_SIMPLE, 84);
	apply_type(0x151b860, "RTTIAttr[3]");
	set_name(0x151b860, "SetVolumeEventResource::sAttrs");

	// ShaderAnimationAction
	set_name(0x14f92c4, "ShaderAnimationAction");
	apply_type(0x14f92c4, "RTTICompound");
	del_items(0x14fde94, DELIT_SIMPLE, 8);
	apply_type(0x14fde94, "RTTIBase[1]");
	set_name(0x14fde94, "ShaderAnimationAction::sBases");
	del_items(0x14fde9c, DELIT_SIMPLE, 112);
	apply_type(0x14fde9c, "RTTIAttr[4]");
	set_name(0x14fde9c, "ShaderAnimationAction::sAttrs");

	// ShaderAnimatorComponent
	set_name(0x150fbcc, "ShaderAnimatorComponent");
	apply_type(0x150fbcc, "RTTICompound");
	del_items(0x15124b8, DELIT_SIMPLE, 8);
	apply_type(0x15124b8, "RTTIBase[1]");
	set_name(0x15124b8, "ShaderAnimatorComponent::sBases");

	// ShaderAnimatorComponentRep
	set_name(0x150fc20, "ShaderAnimatorComponentRep");
	apply_type(0x150fc20, "RTTICompound");
	del_items(0x15124c4, DELIT_SIMPLE, 8);
	apply_type(0x15124c4, "RTTIBase[1]");
	set_name(0x15124c4, "ShaderAnimatorComponentRep::sBases");

	// ShaderAnimatorComponentResource
	set_name(0x150fc74, "ShaderAnimatorComponentResource");
	apply_type(0x150fc74, "RTTICompound");
	del_items(0x1512458, DELIT_SIMPLE, 8);
	apply_type(0x1512458, "RTTIBase[1]");
	set_name(0x1512458, "ShaderAnimatorComponentResource::sBases");
	del_items(0x1512460, DELIT_SIMPLE, 84);
	apply_type(0x1512460, "RTTIAttr[3]");
	set_name(0x1512460, "ShaderAnimatorComponentResource::sAttrs");

	// ShaderAnimatorInstance
	set_name(0x14badac, "ShaderAnimatorInstance");
	apply_type(0x14badac, "RTTICompound");
	del_items(0x14bc06c, DELIT_SIMPLE, 8);
	apply_type(0x14bc06c, "RTTIBase[1]");
	set_name(0x14bc06c, "ShaderAnimatorInstance::sBases");

	// ShaderAnimatorResourceBase
	set_name(0x14bac08, "ShaderAnimatorResourceBase");
	apply_type(0x14bac08, "RTTICompound");
	del_items(0x14bbb3c, DELIT_SIMPLE, 8);
	apply_type(0x14bbb3c, "RTTIBase[1]");
	set_name(0x14bbb3c, "ShaderAnimatorResourceBase::sBases");
	del_items(0x14bbb44, DELIT_SIMPLE, 56);
	apply_type(0x14bbb44, "RTTIAttr[2]");
	set_name(0x14bbb44, "ShaderAnimatorResourceBase::sAttrs");

	// ShaderFVector3AnimatorResource
	set_name(0x14bacb0, "ShaderFVector3AnimatorResource");
	apply_type(0x14bacb0, "RTTICompound");
	del_items(0x14bbbbc, DELIT_SIMPLE, 8);
	apply_type(0x14bbbbc, "RTTIBase[1]");
	set_name(0x14bbbbc, "ShaderFVector3AnimatorResource::sBases");
	del_items(0x14bbbc4, DELIT_SIMPLE, 56);
	apply_type(0x14bbbc4, "RTTIAttr[2]");
	set_name(0x14bbbc4, "ShaderFVector3AnimatorResource::sAttrs");

	// ShaderFVector4AnimatorResource
	set_name(0x14bad04, "ShaderFVector4AnimatorResource");
	apply_type(0x14bad04, "RTTICompound");
	del_items(0x14bbbfc, DELIT_SIMPLE, 8);
	apply_type(0x14bbbfc, "RTTIBase[1]");
	set_name(0x14bbbfc, "ShaderFVector4AnimatorResource::sBases");
	del_items(0x14bbc04, DELIT_SIMPLE, 56);
	apply_type(0x14bbc04, "RTTIAttr[2]");
	set_name(0x14bbc04, "ShaderFVector4AnimatorResource::sAttrs");

	// ShaderFloatAnimatorResource
	set_name(0x14bac5c, "ShaderFloatAnimatorResource");
	apply_type(0x14bac5c, "RTTICompound");
	del_items(0x14bbb7c, DELIT_SIMPLE, 8);
	apply_type(0x14bbb7c, "RTTIBase[1]");
	set_name(0x14bbb7c, "ShaderFloatAnimatorResource::sBases");
	del_items(0x14bbb84, DELIT_SIMPLE, 56);
	apply_type(0x14bbb84, "RTTIAttr[2]");
	set_name(0x14bbb84, "ShaderFloatAnimatorResource::sAttrs");

	// ShaderFromFileResource
	set_name(0x14cb1cc, "ShaderFromFileResource");
	apply_type(0x14cb1cc, "RTTICompound");
	del_items(0x14cd424, DELIT_SIMPLE, 8);
	apply_type(0x14cd424, "RTTIBase[1]");
	set_name(0x14cd424, "ShaderFromFileResource::sBases");

	// ShaderProjMatrixAnimatorResource
	set_name(0x14bad58, "ShaderProjMatrixAnimatorResource");
	apply_type(0x14bad58, "RTTICompound");
	del_items(0x14bbc3c, DELIT_SIMPLE, 8);
	apply_type(0x14bbc3c, "RTTIBase[1]");
	set_name(0x14bbc3c, "ShaderProjMatrixAnimatorResource::sBases");
	del_items(0x14bbc44, DELIT_SIMPLE, 112);
	apply_type(0x14bbc44, "RTTIAttr[4]");
	set_name(0x14bbc44, "ShaderProjMatrixAnimatorResource::sAttrs");

	// ShaderResource
	set_name(0x14cb230, "ShaderResource");
	apply_type(0x14cb230, "RTTICompound");
	del_items(0x14cc224, DELIT_SIMPLE, 8);
	apply_type(0x14cc224, "RTTIBase[1]");
	set_name(0x14cc224, "ShaderResource::sBases");
	del_items(0x14cc22c, DELIT_SIMPLE, 12);
	apply_type(0x14cc22c, "RTTIMessageHandler[1]");
	set_name(0x14cc22c, "ShaderResource::sMessageHandlers");

	// ShaderVariable
	set_name(0x14cb720, "ShaderVariable");
	apply_type(0x14cb720, "RTTICompound");
	del_items(0x14cc2b0, DELIT_SIMPLE, 112);
	apply_type(0x14cc2b0, "RTTIAttr[4]");
	set_name(0x14cc2b0, "ShaderVariable::sAttrs");

	// ShakeResource
	set_name(0x14e1188, "ShakeResource");
	apply_type(0x14e1188, "RTTICompound");
	del_items(0x14e1584, DELIT_SIMPLE, 8);
	apply_type(0x14e1584, "RTTIBase[1]");
	set_name(0x14e1584, "ShakeResource::sBases");
	del_items(0x14e158c, DELIT_SIMPLE, 336);
	apply_type(0x14e158c, "RTTIAttr[12]");
	set_name(0x14e158c, "ShakeResource::sAttrs");

	// Shape2D
	set_name(0x14bee5c, "Shape2D");
	apply_type(0x14bee5c, "RTTICompound");
	del_items(0x14bf5c0, DELIT_SIMPLE, 8);
	apply_type(0x14bf5c0, "RTTIBase[1]");
	set_name(0x14bf5c0, "Shape2D::sBases");
	del_items(0x14bf5c8, DELIT_SIMPLE, 140);
	apply_type(0x14bf5c8, "RTTIAttr[5]");
	set_name(0x14bf5c8, "Shape2D::sAttrs");
	del_items(0x14bf654, DELIT_SIMPLE, 12);
	apply_type(0x14bf654, "RTTIMessageHandler[1]");
	set_name(0x14bf654, "Shape2D::sMessageHandlers");

	// Shape2DExtrusion
	set_name(0x14beeb0, "Shape2DExtrusion");
	apply_type(0x14beeb0, "RTTICompound");
	del_items(0x14bf668, DELIT_SIMPLE, 8);
	apply_type(0x14bf668, "RTTIBase[1]");
	set_name(0x14bf668, "Shape2DExtrusion::sBases");
	del_items(0x14bf670, DELIT_SIMPLE, 56);
	apply_type(0x14bf670, "RTTIAttr[2]");
	set_name(0x14bf670, "Shape2DExtrusion::sAttrs");

	// SharedObjectiveSystem
	set_name(0x14efda0, "SharedObjectiveSystem");
	apply_type(0x14efda0, "RTTICompound");
	del_items(0x14f36b0, DELIT_SIMPLE, 8);
	apply_type(0x14f36b0, "RTTIBase[1]");
	set_name(0x14f36b0, "SharedObjectiveSystem::sBases");
	del_items(0x14f36b8, DELIT_SIMPLE, 600);
	apply_type(0x14f36b8, "RTTIFunction[25]");
	set_name(0x14f36b8, "SharedObjectiveSystem::sFunctions");

	// ShimmyModeController
	set_name(0x1548478, "ShimmyModeController");
	apply_type(0x1548478, "RTTICompound");
	del_items(0x1549e40, DELIT_SIMPLE, 8);
	apply_type(0x1549e40, "RTTIBase[1]");
	set_name(0x1549e40, "ShimmyModeController::sBases");

	// ShimmyModeMover
	set_name(0x1548424, "ShimmyModeMover");
	apply_type(0x1548424, "RTTICompound");
	del_items(0x1549c98, DELIT_SIMPLE, 8);
	apply_type(0x1549c98, "RTTIBase[1]");
	set_name(0x1549c98, "ShimmyModeMover::sBases");

	// ShimmyModeResource
	set_name(0x15484dc, "ShimmyModeResource");
	apply_type(0x15484dc, "RTTICompound");
	del_items(0x1549b94, DELIT_SIMPLE, 8);
	apply_type(0x1549b94, "RTTIBase[1]");
	set_name(0x1549b94, "ShimmyModeResource::sBases");
	del_items(0x1549b9c, DELIT_SIMPLE, 252);
	apply_type(0x1549b9c, "RTTIAttr[9]");
	set_name(0x1549b9c, "ShimmyModeResource::sAttrs");

	// ShootableBox
	set_name(0x154a770, "ShootableBox");
	apply_type(0x154a770, "RTTICompound");
	del_items(0x154ad34, DELIT_SIMPLE, 8);
	apply_type(0x154ad34, "RTTIBase[1]");
	set_name(0x154ad34, "ShootableBox::sBases");

	// ShootableBoxMover
	set_name(0x154a818, "ShootableBoxMover");
	apply_type(0x154a818, "RTTICompound");
	del_items(0x154ad3c, DELIT_SIMPLE, 8);
	apply_type(0x154ad3c, "RTTIBase[1]");
	set_name(0x154ad3c, "ShootableBoxMover::sBases");

	// ShootableBoxMoverResource
	set_name(0x154a86c, "ShootableBoxMoverResource");
	apply_type(0x154a86c, "RTTICompound");
	del_items(0x154ad44, DELIT_SIMPLE, 8);
	apply_type(0x154ad44, "RTTIBase[1]");
	set_name(0x154ad44, "ShootableBoxMoverResource::sBases");

	// ShootableBoxResource
	set_name(0x154a7c4, "ShootableBoxResource");
	apply_type(0x154a7c4, "RTTICompound");
	del_items(0x154ad2c, DELIT_SIMPLE, 8);
	apply_type(0x154ad2c, "RTTIBase[1]");
	set_name(0x154ad2c, "ShootableBoxResource::sBases");

	// ShootableObjectHighlightComponent
	set_name(0x154a988, "ShootableObjectHighlightComponent");
	apply_type(0x154a988, "RTTICompound");
	del_items(0x154adf4, DELIT_SIMPLE, 8);
	apply_type(0x154adf4, "RTTIBase[1]");
	set_name(0x154adf4, "ShootableObjectHighlightComponent::sBases");

	// ShootableObjectHighlightComponentRep
	set_name(0x154a9dc, "ShootableObjectHighlightComponentRep");
	apply_type(0x154a9dc, "RTTICompound");
	del_items(0x154ae7c, DELIT_SIMPLE, 8);
	apply_type(0x154ae7c, "RTTIBase[1]");
	set_name(0x154ae7c, "ShootableObjectHighlightComponentRep::sBases");

	// ShootableObjectHighlightComponentResource
	set_name(0x154aa30, "ShootableObjectHighlightComponentResource");
	apply_type(0x154aa30, "RTTICompound");
	del_items(0x154ad94, DELIT_SIMPLE, 8);
	apply_type(0x154ad94, "RTTIBase[1]");
	set_name(0x154ad94, "ShootableObjectHighlightComponentResource::sBases");
	del_items(0x154ad9c, DELIT_SIMPLE, 84);
	apply_type(0x154ad9c, "RTTIAttr[3]");
	set_name(0x154ad9c, "ShootableObjectHighlightComponentResource::sAttrs");

	// ShootableObjectHighlightSettingsResource
	set_name(0x154aa84, "ShootableObjectHighlightSettingsResource");
	apply_type(0x154aa84, "RTTICompound");
	del_items(0x154ae04, DELIT_SIMPLE, 8);
	apply_type(0x154ae04, "RTTIBase[1]");
	set_name(0x154ae04, "ShootableObjectHighlightSettingsResource::sBases");
	del_items(0x154ae0c, DELIT_SIMPLE, 112);
	apply_type(0x154ae0c, "RTTIAttr[4]");
	set_name(0x154ae0c, "ShootableObjectHighlightSettingsResource::sAttrs");

	// ShotGunEjectorResource
	set_name(0x152648c, "ShotGunEjectorResource");
	apply_type(0x152648c, "RTTICompound");
	del_items(0x15278e8, DELIT_SIMPLE, 8);
	apply_type(0x15278e8, "RTTIBase[1]");
	set_name(0x15278e8, "ShotGunEjectorResource::sBases");
	del_items(0x15278f0, DELIT_SIMPLE, 140);
	apply_type(0x15278f0, "RTTIAttr[5]");
	set_name(0x15278f0, "ShotGunEjectorResource::sAttrs");

	// ShowHUDOverlayEventInstance
	set_name(0x151dd84, "ShowHUDOverlayEventInstance");
	apply_type(0x151dd84, "RTTICompound");
	del_items(0x151f6b0, DELIT_SIMPLE, 8);
	apply_type(0x151f6b0, "RTTIBase[1]");
	set_name(0x151f6b0, "ShowHUDOverlayEventInstance::sBases");

	// ShowHUDOverlayEventResource
	set_name(0x151dd30, "ShowHUDOverlayEventResource");
	apply_type(0x151dd30, "RTTICompound");
	del_items(0x151f654, DELIT_SIMPLE, 8);
	apply_type(0x151f654, "RTTIBase[1]");
	set_name(0x151f654, "ShowHUDOverlayEventResource::sBases");
	del_items(0x151f65c, DELIT_SIMPLE, 84);
	apply_type(0x151f65c, "RTTIAttr[3]");
	set_name(0x151f65c, "ShowHUDOverlayEventResource::sAttrs");

	// SignalGrenade
	set_name(0x15264e0, "SignalGrenade");
	apply_type(0x15264e0, "RTTICompound");
	del_items(0x1527a58, DELIT_SIMPLE, 8);
	apply_type(0x1527a58, "RTTIBase[1]");
	set_name(0x1527a58, "SignalGrenade::sBases");
	del_items(0x1527a60, DELIT_SIMPLE, 24);
	apply_type(0x1527a60, "RTTIFunction[1]");
	set_name(0x1527a60, "SignalGrenade::sFunctions");

	// SignalGrenadeResource
	set_name(0x1526534, "SignalGrenadeResource");
	apply_type(0x1526534, "RTTICompound");
	del_items(0x152798c, DELIT_SIMPLE, 8);
	apply_type(0x152798c, "RTTIBase[1]");
	set_name(0x152798c, "SignalGrenadeResource::sBases");
	del_items(0x1527994, DELIT_SIMPLE, 196);
	apply_type(0x1527994, "RTTIAttr[7]");
	set_name(0x1527994, "SignalGrenadeResource::sAttrs");

	// SimpleAnimatingSkinnedMeshInstance
	set_name(0x14da058, "SimpleAnimatingSkinnedMeshInstance");
	apply_type(0x14da058, "RTTICompound");
	del_items(0x14dc734, DELIT_SIMPLE, 8);
	apply_type(0x14dc734, "RTTIBase[1]");
	set_name(0x14dc734, "SimpleAnimatingSkinnedMeshInstance::sBases");
	del_items(0x14dc73c, DELIT_SIMPLE, 56);
	apply_type(0x14dc73c, "RTTIAttr[2]");
	set_name(0x14dc73c, "SimpleAnimatingSkinnedMeshInstance::sAttrs");
	del_items(0x14dc774, DELIT_SIMPLE, 24);
	apply_type(0x14dc774, "RTTIMessageHandler[2]");
	set_name(0x14dc774, "SimpleAnimatingSkinnedMeshInstance::sMessageHandlers");

	// SimpleParticleSystem
	set_name(0x1526588, "SimpleParticleSystem");
	apply_type(0x1526588, "RTTICompound");
	del_items(0x1527a78, DELIT_SIMPLE, 8);
	apply_type(0x1527a78, "RTTIBase[1]");
	set_name(0x1527a78, "SimpleParticleSystem::sBases");

	// SimpleParticleSystemResource
	set_name(0x15265ec, "SimpleParticleSystemResource");
	apply_type(0x15265ec, "RTTICompound");
	del_items(0x1527a80, DELIT_SIMPLE, 8);
	apply_type(0x1527a80, "RTTIBase[1]");
	set_name(0x1527a80, "SimpleParticleSystemResource::sBases");
	del_items(0x1527a88, DELIT_SIMPLE, 280);
	apply_type(0x1527a88, "RTTIAttr[10]");
	set_name(0x1527a88, "SimpleParticleSystemResource::sAttrs");

	// SimplePathMover
	set_name(0x14fb8cc, "SimplePathMover");
	apply_type(0x14fb8cc, "RTTICompound");
	del_items(0x14ffad0, DELIT_SIMPLE, 8);
	apply_type(0x14ffad0, "RTTIBase[1]");
	set_name(0x14ffad0, "SimplePathMover::sBases");
	del_items(0x14ffad8, DELIT_SIMPLE, 120);
	apply_type(0x14ffad8, "RTTIFunction[5]");
	set_name(0x14ffad8, "SimplePathMover::sFunctions");

	// SimplePathMoverResource
	set_name(0x14fb920, "SimplePathMoverResource");
	apply_type(0x14fb920, "RTTICompound");
	del_items(0x14ffb50, DELIT_SIMPLE, 8);
	apply_type(0x14ffb50, "RTTIBase[1]");
	set_name(0x14ffb50, "SimplePathMoverResource::sBases");

	// SimplePolygon
	set_name(0x14add34, "SimplePolygon");
	apply_type(0x14add34, "RTTICompound");
	del_items(0x14adee8, DELIT_SIMPLE, 28);
	apply_type(0x14adee8, "RTTIAttr[1]");
	set_name(0x14adee8, "SimplePolygon::sAttrs");

	// SimpleSimulatedSkinnedMeshInstance
	set_name(0x14da0ac, "SimpleSimulatedSkinnedMeshInstance");
	apply_type(0x14da0ac, "RTTICompound");
	del_items(0x14dc78c, DELIT_SIMPLE, 8);
	apply_type(0x14dc78c, "RTTIBase[1]");
	set_name(0x14dc78c, "SimpleSimulatedSkinnedMeshInstance::sBases");
	del_items(0x14dc794, DELIT_SIMPLE, 112);
	apply_type(0x14dc794, "RTTIAttr[4]");
	set_name(0x14dc794, "SimpleSimulatedSkinnedMeshInstance::sAttrs");
	del_items(0x14dc804, DELIT_SIMPLE, 24);
	apply_type(0x14dc804, "RTTIMessageHandler[2]");
	set_name(0x14dc804, "SimpleSimulatedSkinnedMeshInstance::sMessageHandlers");

	// SimpleSkeletonAnimationResource
	set_name(0x14da53c, "SimpleSkeletonAnimationResource");
	apply_type(0x14da53c, "RTTICompound");
	del_items(0x14db76c, DELIT_SIMPLE, 8);
	apply_type(0x14db76c, "RTTIBase[1]");
	set_name(0x14db76c, "SimpleSkeletonAnimationResource::sBases");
	del_items(0x14db774, DELIT_SIMPLE, 56);
	apply_type(0x14db774, "RTTIAttr[2]");
	set_name(0x14db774, "SimpleSkeletonAnimationResource::sAttrs");

	// SimpleSoundInstance
	set_name(0x14ddec4, "SimpleSoundInstance");
	apply_type(0x14ddec4, "RTTICompound");
	del_items(0x14df5d8, DELIT_SIMPLE, 8);
	apply_type(0x14df5d8, "RTTIBase[1]");
	set_name(0x14df5d8, "SimpleSoundInstance::sBases");
	del_items(0x14df5e0, DELIT_SIMPLE, 12);
	apply_type(0x14df5e0, "RTTIMessageHandler[1]");
	set_name(0x14df5e0, "SimpleSoundInstance::sMessageHandlers");

	// SimpleSoundResource
	set_name(0x14dd8bc, "SimpleSoundResource");
	apply_type(0x14dd8bc, "RTTICompound");
	del_items(0x14de948, DELIT_SIMPLE, 8);
	apply_type(0x14de948, "RTTIBase[1]");
	set_name(0x14de948, "SimpleSoundResource::sBases");
	del_items(0x14de950, DELIT_SIMPLE, 364);
	apply_type(0x14de950, "RTTIAttr[13]");
	set_name(0x14de950, "SimpleSoundResource::sAttrs");
	del_items(0x14deabc, DELIT_SIMPLE, 12);
	apply_type(0x14deabc, "RTTIMessageHandler[1]");
	set_name(0x14deabc, "SimpleSoundResource::sMessageHandlers");

	// SimpleTrackAnimatorEntity
	set_name(0x150592c, "SimpleTrackAnimatorEntity");
	apply_type(0x150592c, "RTTICompound");
	del_items(0x15076d4, DELIT_SIMPLE, 16);
	apply_type(0x15076d4, "RTTIBase[2]");
	set_name(0x15076d4, "SimpleTrackAnimatorEntity::sBases");

	// SimpleTrackAnimatorEntityResource
	set_name(0x1505a38, "SimpleTrackAnimatorEntityResource");
	apply_type(0x1505a38, "RTTICompound");
	del_items(0x1507608, DELIT_SIMPLE, 8);
	apply_type(0x1507608, "RTTIBase[1]");
	set_name(0x1507608, "SimpleTrackAnimatorEntityResource::sBases");
	del_items(0x1507610, DELIT_SIMPLE, 196);
	apply_type(0x1507610, "RTTIAttr[7]");
	set_name(0x1507610, "SimpleTrackAnimatorEntityResource::sAttrs");

	// SimpleTrackAnimatorRep
	set_name(0x1505980, "SimpleTrackAnimatorRep");
	apply_type(0x1505980, "RTTICompound");
	del_items(0x150746c, DELIT_SIMPLE, 8);
	apply_type(0x150746c, "RTTIBase[1]");
	set_name(0x150746c, "SimpleTrackAnimatorRep::sBases");

	// SimpleVehicleController
	set_name(0x150b528, "SimpleVehicleController");
	apply_type(0x150b528, "RTTICompound");
	del_items(0x150cd70, DELIT_SIMPLE, 8);
	apply_type(0x150cd70, "RTTIBase[1]");
	set_name(0x150cd70, "SimpleVehicleController::sBases");

	// SingleWeightSkinSpan
	set_name(0x14d9dcc, "SingleWeightSkinSpan");
	apply_type(0x14d9dcc, "RTTICompound");
	del_items(0x14dc398, DELIT_SIMPLE, 56);
	apply_type(0x14dc398, "RTTIAttr[2]");
	set_name(0x14dc398, "SingleWeightSkinSpan::sAttrs");

	// Skeleton
	set_name(0x14da174, "Skeleton");
	apply_type(0x14da174, "RTTICompound");
	del_items(0x14dada4, DELIT_SIMPLE, 8);
	apply_type(0x14dada4, "RTTIBase[1]");
	set_name(0x14dada4, "Skeleton::sBases");
	del_items(0x14dadac, DELIT_SIMPLE, 336);
	apply_type(0x14dadac, "RTTIAttr[12]");
	set_name(0x14dadac, "Skeleton::sAttrs");
	del_items(0x14daefc, DELIT_SIMPLE, 12);
	apply_type(0x14daefc, "RTTIMessageHandler[1]");
	set_name(0x14daefc, "Skeleton::sMessageHandlers");

	// SkeletonAnimChannel
	set_name(0x14da304, "SkeletonAnimChannel");
	apply_type(0x14da304, "RTTICompound");
	del_items(0x14dacfc, DELIT_SIMPLE, 28);
	apply_type(0x14dacfc, "RTTIAttr[1]");
	set_name(0x14dacfc, "SkeletonAnimChannel::sAttrs");

	// SkeletonAnimationManager
	set_name(0x14da400, "SkeletonAnimationManager");
	apply_type(0x14da400, "RTTICompound");
	del_items(0x14dc23c, DELIT_SIMPLE, 8);
	apply_type(0x14dc23c, "RTTIBase[1]");
	set_name(0x14dc23c, "SkeletonAnimationManager::sBases");

	// SkeletonAnimationResource
	set_name(0x14da4e8, "SkeletonAnimationResource");
	apply_type(0x14da4e8, "RTTICompound");
	del_items(0x14db6f4, DELIT_SIMPLE, 8);
	apply_type(0x14db6f4, "RTTIBase[1]");
	set_name(0x14db6f4, "SkeletonAnimationResource::sBases");
	del_items(0x14db6fc, DELIT_SIMPLE, 112);
	apply_type(0x14db6fc, "RTTIAttr[4]");
	set_name(0x14db6fc, "SkeletonAnimationResource::sAttrs");

	// SkeletonBaseAnimationResource
	set_name(0x14da474, "SkeletonBaseAnimationResource");
	apply_type(0x14da474, "RTTICompound");
	del_items(0x14db6ec, DELIT_SIMPLE, 8);
	apply_type(0x14db6ec, "RTTIBase[1]");
	set_name(0x14db6ec, "SkeletonBaseAnimationResource::sBases");

	// SkeletonHelpers
	set_name(0x14da23c, "SkeletonHelpers");
	apply_type(0x14da23c, "RTTICompound");
	del_items(0x14daba4, DELIT_SIMPLE, 8);
	apply_type(0x14daba4, "RTTIBase[1]");
	set_name(0x14daba4, "SkeletonHelpers::sBases");
	del_items(0x14dabac, DELIT_SIMPLE, 28);
	apply_type(0x14dabac, "RTTIAttr[1]");
	set_name(0x14dabac, "SkeletonHelpers::sAttrs");

	// SkeletonTargetDesc
	set_name(0x14da5e4, "SkeletonTargetDesc");
	apply_type(0x14da5e4, "RTTICompound");
	del_items(0x14db594, DELIT_SIMPLE, 56);
	apply_type(0x14db594, "RTTIAttr[2]");
	set_name(0x14db594, "SkeletonTargetDesc::sAttrs");

	// SkeletonTargetLink
	set_name(0x14da648, "SkeletonTargetLink");
	apply_type(0x14da648, "RTTICompound");
	del_items(0x14db620, DELIT_SIMPLE, 84);
	apply_type(0x14db620, "RTTIAttr[3]");
	set_name(0x14db620, "SkeletonTargetLink::sAttrs");

	// SkeletonTargetTree
	set_name(0x14da6ac, "SkeletonTargetTree");
	apply_type(0x14da6ac, "RTTICompound");
	del_items(0x14db674, DELIT_SIMPLE, 8);
	apply_type(0x14db674, "RTTIBase[1]");
	set_name(0x14db674, "SkeletonTargetTree::sBases");
	del_items(0x14db67c, DELIT_SIMPLE, 112);
	apply_type(0x14db67c, "RTTIAttr[4]");
	set_name(0x14db67c, "SkeletonTargetTree::sAttrs");

	// SkinSpan
	set_name(0x14d9e20, "SkinSpan");
	apply_type(0x14d9e20, "RTTICompound");
	del_items(0x14dc3d0, DELIT_SIMPLE, 112);
	apply_type(0x14dc3d0, "RTTIAttr[4]");
	set_name(0x14dc3d0, "SkinSpan::sAttrs");

	// SkinnedCollisionBoxToPartMapping
	set_name(0x14e2ac4, "SkinnedCollisionBoxToPartMapping");
	apply_type(0x14e2ac4, "RTTICompound");
	del_items(0x14e59b8, DELIT_SIMPLE, 56);
	apply_type(0x14e59b8, "RTTIAttr[2]");
	set_name(0x14e59b8, "SkinnedCollisionBoxToPartMapping::sAttrs");

	// SkinnedMeshBoneBindings
	set_name(0x14da7c8, "SkinnedMeshBoneBindings");
	apply_type(0x14da7c8, "RTTICompound");
	del_items(0x14dc6e8, DELIT_SIMPLE, 8);
	apply_type(0x14dc6e8, "RTTIBase[1]");
	set_name(0x14dc6e8, "SkinnedMeshBoneBindings::sBases");
	del_items(0x14dc6f0, DELIT_SIMPLE, 56);
	apply_type(0x14dc6f0, "RTTIAttr[2]");
	set_name(0x14dc6f0, "SkinnedMeshBoneBindings::sAttrs");
	del_items(0x14dc728, DELIT_SIMPLE, 12);
	apply_type(0x14dc728, "RTTIMessageHandler[1]");
	set_name(0x14dc728, "SkinnedMeshBoneBindings::sMessageHandlers");

	// SkinnedMeshBoneBoundingBoxes
	set_name(0x14daad8, "SkinnedMeshBoneBoundingBoxes");
	apply_type(0x14daad8, "RTTICompound");
	del_items(0x14db48c, DELIT_SIMPLE, 8);
	apply_type(0x14db48c, "RTTIBase[1]");
	set_name(0x14db48c, "SkinnedMeshBoneBoundingBoxes::sBases");
	del_items(0x14db494, DELIT_SIMPLE, 112);
	apply_type(0x14db494, "RTTIAttr[4]");
	set_name(0x14db494, "SkinnedMeshBoneBoundingBoxes::sAttrs");

	// SkinnedMeshInstance
	set_name(0x14da81c, "SkinnedMeshInstance");
	apply_type(0x14da81c, "RTTICompound");
	del_items(0x14db504, DELIT_SIMPLE, 8);
	apply_type(0x14db504, "RTTIBase[1]");
	set_name(0x14db504, "SkinnedMeshInstance::sBases");
	del_items(0x14db50c, DELIT_SIMPLE, 112);
	apply_type(0x14db50c, "RTTIAttr[4]");
	set_name(0x14db50c, "SkinnedMeshInstance::sAttrs");
	del_items(0x14db57c, DELIT_SIMPLE, 24);
	apply_type(0x14db57c, "RTTIMessageHandler[2]");
	set_name(0x14db57c, "SkinnedMeshInstance::sMessageHandlers");

	// SkinnedMeshResource
	set_name(0x14da880, "SkinnedMeshResource");
	apply_type(0x14da880, "RTTICompound");
	del_items(0x14db44c, DELIT_SIMPLE, 8);
	apply_type(0x14db44c, "RTTIBase[1]");
	set_name(0x14db44c, "SkinnedMeshResource::sBases");
	del_items(0x14db454, DELIT_SIMPLE, 56);
	apply_type(0x14db454, "RTTIAttr[2]");
	set_name(0x14db454, "SkinnedMeshResource::sAttrs");

	// SkinnedModel
	set_name(0x14e7990, "SkinnedModel");
	apply_type(0x14e7990, "RTTICompound");
	del_items(0x14e9644, DELIT_SIMPLE, 8);
	apply_type(0x14e9644, "RTTIBase[1]");
	set_name(0x14e9644, "SkinnedModel::sBases");

	// SkinnedModelLOD
	set_name(0x14e7a58, "SkinnedModelLOD");
	apply_type(0x14e7a58, "RTTICompound");
	del_items(0x14e9054, DELIT_SIMPLE, 8);
	apply_type(0x14e9054, "RTTIBase[1]");
	set_name(0x14e9054, "SkinnedModelLOD::sBases");
	del_items(0x14e905c, DELIT_SIMPLE, 168);
	apply_type(0x14e905c, "RTTIAttr[6]");
	set_name(0x14e905c, "SkinnedModelLOD::sAttrs");

	// SkinnedModelResource
	set_name(0x14e79f4, "SkinnedModelResource");
	apply_type(0x14e79f4, "RTTICompound");
	del_items(0x14e9104, DELIT_SIMPLE, 8);
	apply_type(0x14e9104, "RTTIBase[1]");
	set_name(0x14e9104, "SkinnedModelResource::sBases");
	del_items(0x14e910c, DELIT_SIMPLE, 560);
	apply_type(0x14e910c, "RTTIAttr[20]");
	set_name(0x14e910c, "SkinnedModelResource::sAttrs");

	// SkinnedPoint
	set_name(0x14daa10, "SkinnedPoint");
	apply_type(0x14daa10, "RTTICompound");
	del_items(0x14db2f4, DELIT_SIMPLE, 280);
	apply_type(0x14db2f4, "RTTIAttr[10]");
	set_name(0x14db2f4, "SkinnedPoint::sAttrs");

	// SkinnedPointsResource
	set_name(0x14daa74, "SkinnedPointsResource");
	apply_type(0x14daa74, "RTTICompound");
	del_items(0x14db40c, DELIT_SIMPLE, 8);
	apply_type(0x14db40c, "RTTIBase[1]");
	set_name(0x14db40c, "SkinnedPointsResource::sBases");
	del_items(0x14db414, DELIT_SIMPLE, 56);
	apply_type(0x14db414, "RTTIAttr[2]");
	set_name(0x14db414, "SkinnedPointsResource::sAttrs");

	// SkipSequenceEventInstance
	set_name(0x151de2c, "SkipSequenceEventInstance");
	apply_type(0x151de2c, "RTTICompound");
	del_items(0x151f6f8, DELIT_SIMPLE, 8);
	apply_type(0x151f6f8, "RTTIBase[1]");
	set_name(0x151f6f8, "SkipSequenceEventInstance::sBases");

	// SkipSequenceEventResource
	set_name(0x151ddd8, "SkipSequenceEventResource");
	apply_type(0x151ddd8, "RTTICompound");
	del_items(0x151f6b8, DELIT_SIMPLE, 8);
	apply_type(0x151f6b8, "RTTIBase[1]");
	set_name(0x151f6b8, "SkipSequenceEventResource::sBases");
	del_items(0x151f6c0, DELIT_SIMPLE, 56);
	apply_type(0x151f6c0, "RTTIAttr[2]");
	set_name(0x151f6c0, "SkipSequenceEventResource::sAttrs");

	// SlideToEventInstance
	set_name(0x151ded4, "SlideToEventInstance");
	apply_type(0x151ded4, "RTTICompound");
	del_items(0x151f794, DELIT_SIMPLE, 8);
	apply_type(0x151f794, "RTTIBase[1]");
	set_name(0x151f794, "SlideToEventInstance::sBases");

	// SlideToEventResource
	set_name(0x151de80, "SlideToEventResource");
	apply_type(0x151de80, "RTTICompound");
	del_items(0x151f700, DELIT_SIMPLE, 8);
	apply_type(0x151f700, "RTTIBase[1]");
	set_name(0x151f700, "SlideToEventResource::sBases");
	del_items(0x151f708, DELIT_SIMPLE, 140);
	apply_type(0x151f708, "RTTIAttr[5]");
	set_name(0x151f708, "SlideToEventResource::sAttrs");

	// SliderTag
	set_name(0x14c09d8, "SliderTag");
	apply_type(0x14c09d8, "RTTICompound");
	del_items(0x14c2acc, DELIT_SIMPLE, 8);
	apply_type(0x14c2acc, "RTTIBase[1]");
	set_name(0x14c2acc, "SliderTag::sBases");
	del_items(0x14c2ad4, DELIT_SIMPLE, 48);
	apply_type(0x14c2ad4, "RTTIFunction[2]");
	set_name(0x14c2ad4, "SliderTag::sFunctions");

	// SliderWidget
	set_name(0x14c135c, "SliderWidget");
	apply_type(0x14c135c, "RTTICompound");
	del_items(0x14c2f34, DELIT_SIMPLE, 8);
	apply_type(0x14c2f34, "RTTIBase[1]");
	set_name(0x14c2f34, "SliderWidget::sBases");

	// SmartSpawnArea
	set_name(0x1521f74, "SmartSpawnArea");
	apply_type(0x1521f74, "RTTICompound");
	del_items(0x1522af4, DELIT_SIMPLE, 8);
	apply_type(0x1522af4, "RTTIBase[1]");
	set_name(0x1522af4, "SmartSpawnArea::sBases");

	// SmartSpawnAreaResource
	set_name(0x1521fc8, "SmartSpawnAreaResource");
	apply_type(0x1521fc8, "RTTICompound");
	del_items(0x1522aec, DELIT_SIMPLE, 8);
	apply_type(0x1522aec, "RTTIBase[1]");
	set_name(0x1522aec, "SmartSpawnAreaResource::sBases");

	// SmoothedSoundState
	set_name(0x14ddaac, "SmoothedSoundState");
	apply_type(0x14ddaac, "RTTICompound");

	// Soldier
	set_name(0x150dfb4, "Soldier");
	apply_type(0x150dfb4, "RTTICompound");
	del_items(0x1510d10, DELIT_SIMPLE, 8);
	apply_type(0x1510d10, "RTTIBase[1]");
	set_name(0x1510d10, "Soldier::sBases");
	del_items(0x1510d18, DELIT_SIMPLE, 192);
	apply_type(0x1510d18, "RTTIFunction[8]");
	set_name(0x1510d18, "Soldier::sFunctions");
	del_items(0x1510dd8, DELIT_SIMPLE, 12);
	apply_type(0x1510dd8, "RTTIMessageHandler[1]");
	set_name(0x1510dd8, "Soldier::sMessageHandlers");

	// SoldierAIController
	set_name(0x150e008, "SoldierAIController");
	apply_type(0x150e008, "RTTICompound");
	del_items(0x1511038, DELIT_SIMPLE, 8);
	apply_type(0x1511038, "RTTIBase[1]");
	set_name(0x1511038, "SoldierAIController::sBases");

	// SoldierController
	set_name(0x150e05c, "SoldierController");
	apply_type(0x150e05c, "RTTICompound");
	del_items(0x1510df8, DELIT_SIMPLE, 8);
	apply_type(0x1510df8, "RTTIBase[1]");
	set_name(0x1510df8, "SoldierController::sBases");

	// SoldierJoystickController
	set_name(0x150e0b0, "SoldierJoystickController");
	apply_type(0x150e0b0, "RTTICompound");
	del_items(0x1510e00, DELIT_SIMPLE, 8);
	apply_type(0x1510e00, "RTTIBase[1]");
	set_name(0x1510e00, "SoldierJoystickController::sBases");

	// SoldierRep
	set_name(0x150e104, "SoldierRep");
	apply_type(0x150e104, "RTTICompound");
	del_items(0x1510de4, DELIT_SIMPLE, 8);
	apply_type(0x1510de4, "RTTIBase[1]");
	set_name(0x1510de4, "SoldierRep::sBases");
	del_items(0x1510dec, DELIT_SIMPLE, 12);
	apply_type(0x1510dec, "RTTIMessageHandler[1]");
	set_name(0x1510dec, "SoldierRep::sMessageHandlers");

	// SoldierResource
	set_name(0x150e168, "SoldierResource");
	apply_type(0x150e168, "RTTICompound");
	del_items(0x15109f8, DELIT_SIMPLE, 8);
	apply_type(0x15109f8, "RTTIBase[1]");
	set_name(0x15109f8, "SoldierResource::sBases");
	del_items(0x1510a00, DELIT_SIMPLE, 784);
	apply_type(0x1510a00, "RTTIAttr[28]");
	set_name(0x1510a00, "SoldierResource::sAttrs");

	// SoundBankResource
	set_name(0x14dd334, "SoundBankResource");
	apply_type(0x14dd334, "RTTICompound");
	del_items(0x14df674, DELIT_SIMPLE, 8);
	apply_type(0x14df674, "RTTIBase[1]");
	set_name(0x14df674, "SoundBankResource::sBases");
	del_items(0x14df67c, DELIT_SIMPLE, 36);
	apply_type(0x14df67c, "RTTIMessageHandler[3]");
	set_name(0x14df67c, "SoundBankResource::sMessageHandlers");

	// SoundCollection
	set_name(0x14dd980, "SoundCollection");
	apply_type(0x14dd980, "RTTICompound");
	del_items(0x14df600, DELIT_SIMPLE, 8);
	apply_type(0x14df600, "RTTIBase[1]");
	set_name(0x14df600, "SoundCollection::sBases");
	del_items(0x14df608, DELIT_SIMPLE, 84);
	apply_type(0x14df608, "RTTIAttr[3]");
	set_name(0x14df608, "SoundCollection::sAttrs");
	del_items(0x14df65c, DELIT_SIMPLE, 24);
	apply_type(0x14df65c, "RTTIMessageHandler[2]");
	set_name(0x14df65c, "SoundCollection::sMessageHandlers");

	// SoundEventInstance
	set_name(0x151df7c, "SoundEventInstance");
	apply_type(0x151df7c, "RTTICompound");
	del_items(0x151f7c0, DELIT_SIMPLE, 8);
	apply_type(0x151f7c0, "RTTIBase[1]");
	set_name(0x151f7c0, "SoundEventInstance::sBases");

	// SoundEventResource
	set_name(0x151df28, "SoundEventResource");
	apply_type(0x151df28, "RTTICompound");
	del_items(0x151f79c, DELIT_SIMPLE, 8);
	apply_type(0x151f79c, "RTTIBase[1]");
	set_name(0x151f79c, "SoundEventResource::sBases");
	del_items(0x151f7a4, DELIT_SIMPLE, 28);
	apply_type(0x151f7a4, "RTTIAttr[1]");
	set_name(0x151f7a4, "SoundEventResource::sAttrs");

	// SoundInstance
	set_name(0x14dd4dc, "SoundInstance");
	apply_type(0x14dd4dc, "RTTICompound");
	del_items(0x14df5ac, DELIT_SIMPLE, 8);
	apply_type(0x14df5ac, "RTTIBase[1]");
	set_name(0x14df5ac, "SoundInstance::sBases");
	del_items(0x14df5b4, DELIT_SIMPLE, 24);
	apply_type(0x14df5b4, "RTTIMessageHandler[2]");
	set_name(0x14df5b4, "SoundInstance::sMessageHandlers");

	// SoundInstanceBase
	set_name(0x14dd3d8, "SoundInstanceBase");
	apply_type(0x14dd3d8, "RTTICompound");
	del_items(0x14de774, DELIT_SIMPLE, 8);
	apply_type(0x14de774, "RTTIBase[1]");
	set_name(0x14de774, "SoundInstanceBase::sBases");

	// SoundInstanceManager
	set_name(0x14dd580, "SoundInstanceManager");
	apply_type(0x14dd580, "RTTICompound");
	del_items(0x14df5ec, DELIT_SIMPLE, 8);
	apply_type(0x14df5ec, "RTTIBase[1]");
	set_name(0x14df5ec, "SoundInstanceManager::sBases");
	del_items(0x14df5f4, DELIT_SIMPLE, 12);
	apply_type(0x14df5f4, "RTTIMessageHandler[1]");
	set_name(0x14df5f4, "SoundInstanceManager::sMessageHandlers");

	// SoundManager
	set_name(0x14dd62c, "SoundManager");
	apply_type(0x14dd62c, "RTTICompound");
	del_items(0x14df554, DELIT_SIMPLE, 8);
	apply_type(0x14df554, "RTTIBase[1]");
	set_name(0x14df554, "SoundManager::sBases");
	del_items(0x14df55c, DELIT_SIMPLE, 56);
	apply_type(0x14df55c, "RTTIAttr[2]");
	set_name(0x14df55c, "SoundManager::sAttrs");
	del_items(0x14df594, DELIT_SIMPLE, 12);
	apply_type(0x14df594, "RTTIMessageHandler[1]");
	set_name(0x14df594, "SoundManager::sMessageHandlers");

	// SoundMixEventInstance
	set_name(0x151e024, "SoundMixEventInstance");
	apply_type(0x151e024, "RTTICompound");
	del_items(0x151f840, DELIT_SIMPLE, 8);
	apply_type(0x151f840, "RTTIBase[1]");
	set_name(0x151f840, "SoundMixEventInstance::sBases");

	// SoundMixEventResource
	set_name(0x151dfd0, "SoundMixEventResource");
	apply_type(0x151dfd0, "RTTICompound");
	del_items(0x151f7c8, DELIT_SIMPLE, 8);
	apply_type(0x151f7c8, "RTTIBase[1]");
	set_name(0x151f7c8, "SoundMixEventResource::sBases");
	del_items(0x151f7d0, DELIT_SIMPLE, 112);
	apply_type(0x151f7d0, "RTTIAttr[4]");
	set_name(0x151f7d0, "SoundMixEventResource::sAttrs");

	// SoundMixResource
	set_name(0x14dc8d0, "SoundMixResource");
	apply_type(0x14dc8d0, "RTTICompound");
	del_items(0x14dec90, DELIT_SIMPLE, 8);
	apply_type(0x14dec90, "RTTIBase[1]");
	set_name(0x14dec90, "SoundMixResource::sBases");
	del_items(0x14dec98, DELIT_SIMPLE, 896);
	apply_type(0x14dec98, "RTTIAttr[32]");
	set_name(0x14dec98, "SoundMixResource::sAttrs");

	// SoundResource
	set_name(0x14dd6d0, "SoundResource");
	apply_type(0x14dd6d0, "RTTICompound");
	del_items(0x14de780, DELIT_SIMPLE, 8);
	apply_type(0x14de780, "RTTIBase[1]");
	set_name(0x14de780, "SoundResource::sBases");
	del_items(0x14de788, DELIT_SIMPLE, 448);
	apply_type(0x14de788, "RTTIAttr[16]");
	set_name(0x14de788, "SoundResource::sAttrs");

	// SoundStateMachineEventSettings
	set_name(0x14fb454, "SoundStateMachineEventSettings");
	apply_type(0x14fb454, "RTTICompound");
	del_items(0x14ff0a4, DELIT_SIMPLE, 196);
	apply_type(0x14ff0a4, "RTTIAttr[7]");
	set_name(0x14ff0a4, "SoundStateMachineEventSettings::sAttrs");

	// SoundStateMachineResource
	set_name(0x14fb4b8, "SoundStateMachineResource");
	apply_type(0x14fb4b8, "RTTICompound");
	del_items(0x14ff168, DELIT_SIMPLE, 8);
	apply_type(0x14ff168, "RTTIBase[1]");
	set_name(0x14ff168, "SoundStateMachineResource::sBases");
	del_items(0x14ff170, DELIT_SIMPLE, 84);
	apply_type(0x14ff170, "RTTIAttr[3]");
	set_name(0x14ff170, "SoundStateMachineResource::sAttrs");

	// SoundStateMachineStateSettings
	set_name(0x14fb3f0, "SoundStateMachineStateSettings");
	apply_type(0x14fb3f0, "RTTICompound");
	del_items(0x14ff06c, DELIT_SIMPLE, 56);
	apply_type(0x14ff06c, "RTTIAttr[2]");
	set_name(0x14ff06c, "SoundStateMachineStateSettings::sAttrs");

	// SoundSystem
	set_name(0x14dd818, "SoundSystem");
	apply_type(0x14dd818, "RTTICompound");
	del_items(0x14df8e8, DELIT_SIMPLE, 8);
	apply_type(0x14df8e8, "RTTIBase[1]");
	set_name(0x14df8e8, "SoundSystem::sBases");
	del_items(0x14df8f0, DELIT_SIMPLE, 120);
	apply_type(0x14df8f0, "RTTIFunction[5]");
	set_name(0x14df8f0, "SoundSystem::sFunctions");

	// SoundSystemSettings
	set_name(0x14dda28, "SoundSystemSettings");
	apply_type(0x14dda28, "RTTICompound");
	del_items(0x14df9fc, DELIT_SIMPLE, 8);
	apply_type(0x14df9fc, "RTTIBase[1]");
	set_name(0x14df9fc, "SoundSystemSettings::sBases");
	del_items(0x14dfa04, DELIT_SIMPLE, 2156);
	apply_type(0x14dfa04, "RTTIAttr[77]");
	set_name(0x14dfa04, "SoundSystemSettings::sAttrs");

	// SoundZoneDeactivationEventInstance
	set_name(0x151e174, "SoundZoneDeactivationEventInstance");
	apply_type(0x151e174, "RTTICompound");
	del_items(0x151f8ec, DELIT_SIMPLE, 8);
	apply_type(0x151f8ec, "RTTIBase[1]");
	set_name(0x151f8ec, "SoundZoneDeactivationEventInstance::sBases");

	// SoundZoneDeactivationEventResource
	set_name(0x151e120, "SoundZoneDeactivationEventResource");
	apply_type(0x151e120, "RTTICompound");
	del_items(0x151f890, DELIT_SIMPLE, 8);
	apply_type(0x151f890, "RTTIBase[1]");
	set_name(0x151f890, "SoundZoneDeactivationEventResource::sBases");
	del_items(0x151f898, DELIT_SIMPLE, 84);
	apply_type(0x151f898, "RTTIAttr[3]");
	set_name(0x151f898, "SoundZoneDeactivationEventResource::sAttrs");

	// SoundZoneInstance
	set_name(0x14dca38, "SoundZoneInstance");
	apply_type(0x14dca38, "RTTICompound");
	del_items(0x14e04c4, DELIT_SIMPLE, 8);
	apply_type(0x14e04c4, "RTTIBase[1]");
	set_name(0x14e04c4, "SoundZoneInstance::sBases");
	del_items(0x14e04cc, DELIT_SIMPLE, 56);
	apply_type(0x14e04cc, "RTTIAttr[2]");
	set_name(0x14e04cc, "SoundZoneInstance::sAttrs");
	del_items(0x14e0504, DELIT_SIMPLE, 12);
	apply_type(0x14e0504, "RTTIMessageHandler[1]");
	set_name(0x14e0504, "SoundZoneInstance::sMessageHandlers");

	// SoundZoneManager
	set_name(0x14dcadc, "SoundZoneManager");
	apply_type(0x14dcadc, "RTTICompound");
	del_items(0x14e0510, DELIT_SIMPLE, 8);
	apply_type(0x14e0510, "RTTIBase[1]");
	set_name(0x14e0510, "SoundZoneManager::sBases");
	del_items(0x14e0518, DELIT_SIMPLE, 12);
	apply_type(0x14e0518, "RTTIMessageHandler[1]");
	set_name(0x14e0518, "SoundZoneManager::sMessageHandlers");

	// SoundZoneResource
	set_name(0x14dc974, "SoundZoneResource");
	apply_type(0x14dc974, "RTTICompound");
	del_items(0x14e0270, DELIT_SIMPLE, 8);
	apply_type(0x14e0270, "RTTIBase[1]");
	set_name(0x14e0270, "SoundZoneResource::sBases");
	del_items(0x14e0278, DELIT_SIMPLE, 588);
	apply_type(0x14e0278, "RTTIAttr[21]");
	set_name(0x14e0278, "SoundZoneResource::sAttrs");

	// SpawnArea
	set_name(0x1521ebc, "SpawnArea");
	apply_type(0x1521ebc, "RTTICompound");
	del_items(0x1522ad0, DELIT_SIMPLE, 8);
	apply_type(0x1522ad0, "RTTIBase[1]");
	set_name(0x1522ad0, "SpawnArea::sBases");

	// SpawnAreaResource
	set_name(0x1521f20, "SpawnAreaResource");
	apply_type(0x1521f20, "RTTICompound");
	del_items(0x152279c, DELIT_SIMPLE, 8);
	apply_type(0x152279c, "RTTIBase[1]");
	set_name(0x152279c, "SpawnAreaResource::sBases");
	del_items(0x15227a4, DELIT_SIMPLE, 168);
	apply_type(0x15227a4, "RTTIAttr[6]");
	set_name(0x15227a4, "SpawnAreaResource::sAttrs");

	// SpawnEffectAnimatedShader
	set_name(0x150fe38, "SpawnEffectAnimatedShader");
	apply_type(0x150fe38, "RTTICompound");
	del_items(0x1512558, DELIT_SIMPLE, 56);
	apply_type(0x1512558, "RTTIAttr[2]");
	set_name(0x1512558, "SpawnEffectAnimatedShader::sAttrs");

	// SpawnEffectComponent
	set_name(0x150fcc8, "SpawnEffectComponent");
	apply_type(0x150fcc8, "RTTICompound");
	del_items(0x15125f0, DELIT_SIMPLE, 8);
	apply_type(0x15125f0, "RTTIBase[1]");
	set_name(0x15125f0, "SpawnEffectComponent::sBases");

	// SpawnEffectComponentAction
	set_name(0x1541970, "SpawnEffectComponentAction");
	apply_type(0x1541970, "RTTICompound");
	del_items(0x1543314, DELIT_SIMPLE, 8);
	apply_type(0x1543314, "RTTIBase[1]");
	set_name(0x1543314, "SpawnEffectComponentAction::sBases");
	del_items(0x154331c, DELIT_SIMPLE, 56);
	apply_type(0x154331c, "RTTIAttr[2]");
	set_name(0x154331c, "SpawnEffectComponentAction::sAttrs");

	// SpawnEffectComponentRep
	set_name(0x150fd1c, "SpawnEffectComponentRep");
	apply_type(0x150fd1c, "RTTICompound");
	del_items(0x15125fc, DELIT_SIMPLE, 8);
	apply_type(0x15125fc, "RTTIBase[1]");
	set_name(0x15125fc, "SpawnEffectComponentRep::sBases");

	// SpawnEffectComponentResource
	set_name(0x150fe8c, "SpawnEffectComponentResource");
	apply_type(0x150fe8c, "RTTICompound");
	del_items(0x1512590, DELIT_SIMPLE, 8);
	apply_type(0x1512590, "RTTIBase[1]");
	set_name(0x1512590, "SpawnEffectComponentResource::sBases");
	del_items(0x1512598, DELIT_SIMPLE, 84);
	apply_type(0x1512598, "RTTIAttr[3]");
	set_name(0x1512598, "SpawnEffectComponentResource::sAttrs");

	// SpawnEffectTimedMeshSwitch
	set_name(0x150fdd4, "SpawnEffectTimedMeshSwitch");
	apply_type(0x150fdd4, "RTTICompound");
	del_items(0x1512504, DELIT_SIMPLE, 84);
	apply_type(0x1512504, "RTTIAttr[3]");
	set_name(0x1512504, "SpawnEffectTimedMeshSwitch::sAttrs");

	// SpawnSelectTag
	set_name(0x153e52c, "SpawnSelectTag");
	apply_type(0x153e52c, "RTTICompound");
	del_items(0x154039c, DELIT_SIMPLE, 8);
	apply_type(0x154039c, "RTTIBase[1]");
	set_name(0x154039c, "SpawnSelectTag::sBases");
	del_items(0x15403a4, DELIT_SIMPLE, 96);
	apply_type(0x15403a4, "RTTIFunction[4]");
	set_name(0x15403a4, "SpawnSelectTag::sFunctions");

	// SpawnSelectWidget
	set_name(0x153e778, "SpawnSelectWidget");
	apply_type(0x153e778, "RTTICompound");
	del_items(0x1540688, DELIT_SIMPLE, 8);
	apply_type(0x1540688, "RTTIBase[1]");
	set_name(0x1540688, "SpawnSelectWidget::sBases");

	// SpawnSelectWidgetResource
	set_name(0x153e7cc, "SpawnSelectWidgetResource");
	apply_type(0x153e7cc, "RTTICompound");
	del_items(0x1540690, DELIT_SIMPLE, 8);
	apply_type(0x1540690, "RTTIBase[1]");
	set_name(0x1540690, "SpawnSelectWidgetResource::sBases");
	del_items(0x1540698, DELIT_SIMPLE, 168);
	apply_type(0x1540698, "RTTIAttr[6]");
	set_name(0x1540698, "SpawnSelectWidgetResource::sAttrs");

	// SpeakEventInstance
	set_name(0x151e220, "SpeakEventInstance");
	apply_type(0x151e220, "RTTICompound");
	del_items(0x151f96c, DELIT_SIMPLE, 8);
	apply_type(0x151f96c, "RTTIBase[1]");
	set_name(0x151f96c, "SpeakEventInstance::sBases");

	// SpeakEventResource
	set_name(0x151e1cc, "SpeakEventResource");
	apply_type(0x151e1cc, "RTTICompound");
	del_items(0x151f8f4, DELIT_SIMPLE, 8);
	apply_type(0x151f8f4, "RTTIBase[1]");
	set_name(0x151f8f4, "SpeakEventResource::sBases");
	del_items(0x151f8fc, DELIT_SIMPLE, 112);
	apply_type(0x151f8fc, "RTTIAttr[4]");
	set_name(0x151f8fc, "SpeakEventResource::sAttrs");

	// Spear
	set_name(0x15262c8, "Spear");
	apply_type(0x15262c8, "RTTICompound");
	del_items(0x1527464, DELIT_SIMPLE, 8);
	apply_type(0x1527464, "RTTIBase[1]");
	set_name(0x1527464, "Spear::sBases");

	// SpearRep
	set_name(0x152631c, "SpearRep");
	apply_type(0x152631c, "RTTICompound");
	del_items(0x152746c, DELIT_SIMPLE, 8);
	apply_type(0x152746c, "RTTIBase[1]");
	set_name(0x152746c, "SpearRep::sBases");

	// SpearResource
	set_name(0x1526380, "SpearResource");
	apply_type(0x1526380, "RTTICompound");
	del_items(0x1527480, DELIT_SIMPLE, 8);
	apply_type(0x1527480, "RTTIBase[1]");
	set_name(0x1527480, "SpearResource::sBases");
	del_items(0x1527488, DELIT_SIMPLE, 1036);
	apply_type(0x1527488, "RTTIAttr[37]");
	set_name(0x1527488, "SpearResource::sAttrs");

	// SpectatorCameraEntity
	set_name(0x1502990, "SpectatorCameraEntity");
	apply_type(0x1502990, "RTTICompound");
	del_items(0x1504598, DELIT_SIMPLE, 8);
	apply_type(0x1504598, "RTTIBase[1]");
	set_name(0x1504598, "SpectatorCameraEntity::sBases");

	// SpectatorCameraEntityResource
	set_name(0x15029e4, "SpectatorCameraEntityResource");
	apply_type(0x15029e4, "RTTICompound");
	del_items(0x15045ac, DELIT_SIMPLE, 8);
	apply_type(0x15045ac, "RTTIBase[1]");
	set_name(0x15045ac, "SpectatorCameraEntityResource::sBases");
	del_items(0x15045b4, DELIT_SIMPLE, 280);
	apply_type(0x15045b4, "RTTIAttr[10]");
	set_name(0x15045b4, "SpectatorCameraEntityResource::sAttrs");

	// SplineInteractionController
	set_name(0x154be14, "SplineInteractionController");
	apply_type(0x154be14, "RTTICompound");
	del_items(0x154c418, DELIT_SIMPLE, 8);
	apply_type(0x154c418, "RTTIBase[1]");
	set_name(0x154c418, "SplineInteractionController::sBases");

	// SplineInteractionEntity
	set_name(0x154bcc4, "SplineInteractionEntity");
	apply_type(0x154bcc4, "RTTICompound");
	del_items(0x154c390, DELIT_SIMPLE, 8);
	apply_type(0x154c390, "RTTIBase[1]");
	set_name(0x154c390, "SplineInteractionEntity::sBases");

	// SplineInteractionEntityResource
	set_name(0x154bd18, "SplineInteractionEntityResource");
	apply_type(0x154bd18, "RTTICompound");
	del_items(0x154c36c, DELIT_SIMPLE, 8);
	apply_type(0x154c36c, "RTTIBase[1]");
	set_name(0x154c36c, "SplineInteractionEntityResource::sBases");
	del_items(0x154c374, DELIT_SIMPLE, 28);
	apply_type(0x154c374, "RTTIAttr[1]");
	set_name(0x154c374, "SplineInteractionEntityResource::sAttrs");

	// SplineInteractionMover
	set_name(0x154bd6c, "SplineInteractionMover");
	apply_type(0x154bd6c, "RTTICompound");
	del_items(0x154c410, DELIT_SIMPLE, 8);
	apply_type(0x154c410, "RTTIBase[1]");
	set_name(0x154c410, "SplineInteractionMover::sBases");

	// SplineInteractionMoverResource
	set_name(0x154bdc0, "SplineInteractionMoverResource");
	apply_type(0x154bdc0, "RTTICompound");
	del_items(0x154c398, DELIT_SIMPLE, 8);
	apply_type(0x154c398, "RTTIBase[1]");
	set_name(0x154c398, "SplineInteractionMoverResource::sBases");
	del_items(0x154c3a0, DELIT_SIMPLE, 112);
	apply_type(0x154c3a0, "RTTIAttr[4]");
	set_name(0x154c3a0, "SplineInteractionMoverResource::sAttrs");

	// SpotLight
	set_name(0x14c8bf4, "SpotLight");
	apply_type(0x14c8bf4, "RTTICompound");
	del_items(0x14ca3fc, DELIT_SIMPLE, 8);
	apply_type(0x14ca3fc, "RTTIBase[1]");
	set_name(0x14ca3fc, "SpotLight::sBases");
	del_items(0x14ca404, DELIT_SIMPLE, 224);
	apply_type(0x14ca404, "RTTIAttr[8]");
	set_name(0x14ca404, "SpotLight::sAttrs");
	del_items(0x14ca4e4, DELIT_SIMPLE, 12);
	apply_type(0x14ca4e4, "RTTIMessageHandler[1]");
	set_name(0x14ca4e4, "SpotLight::sMessageHandlers");

	// SpotLightResource
	set_name(0x14cb5a0, "SpotLightResource");
	apply_type(0x14cb5a0, "RTTICompound");
	del_items(0x14cd648, DELIT_SIMPLE, 8);
	apply_type(0x14cd648, "RTTIBase[1]");
	set_name(0x14cd648, "SpotLightResource::sBases");
	del_items(0x14cd650, DELIT_SIMPLE, 196);
	apply_type(0x14cd650, "RTTIAttr[7]");
	set_name(0x14cd650, "SpotLightResource::sAttrs");

	// Spring
	set_name(0x15409d0, "Spring");
	apply_type(0x15409d0, "RTTICompound");
	del_items(0x1540ee4, DELIT_SIMPLE, 8);
	apply_type(0x1540ee4, "RTTIBase[1]");
	set_name(0x1540ee4, "Spring::sBases");

	// SpringResource
	set_name(0x1540a34, "SpringResource");
	apply_type(0x1540a34, "RTTICompound");
	del_items(0x1540e6c, DELIT_SIMPLE, 8);
	apply_type(0x1540e6c, "RTTIBase[1]");
	set_name(0x1540e6c, "SpringResource::sBases");
	del_items(0x1540e74, DELIT_SIMPLE, 112);
	apply_type(0x1540e74, "RTTIAttr[4]");
	set_name(0x1540e74, "SpringResource::sAttrs");

	// StartAnimationAction
	set_name(0x14f9270, "StartAnimationAction");
	apply_type(0x14f9270, "RTTICompound");
	del_items(0x14fde38, DELIT_SIMPLE, 8);
	apply_type(0x14fde38, "RTTIBase[1]");
	set_name(0x14fde38, "StartAnimationAction::sBases");
	del_items(0x14fde40, DELIT_SIMPLE, 84);
	apply_type(0x14fde40, "RTTIAttr[3]");
	set_name(0x14fde40, "StartAnimationAction::sAttrs");

	// StartSequenceEventInstance
	set_name(0x151e2c8, "StartSequenceEventInstance");
	apply_type(0x151e2c8, "RTTICompound");
	del_items(0x151f9d0, DELIT_SIMPLE, 8);
	apply_type(0x151f9d0, "RTTIBase[1]");
	set_name(0x151f9d0, "StartSequenceEventInstance::sBases");

	// StartSequenceEventResource
	set_name(0x151e274, "StartSequenceEventResource");
	apply_type(0x151e274, "RTTICompound");
	del_items(0x151f974, DELIT_SIMPLE, 8);
	apply_type(0x151f974, "RTTIBase[1]");
	set_name(0x151f974, "StartSequenceEventResource::sBases");
	del_items(0x151f97c, DELIT_SIMPLE, 84);
	apply_type(0x151f97c, "RTTIAttr[3]");
	set_name(0x151f97c, "StartSequenceEventResource::sAttrs");

	// Stat
	set_name(0x14f08c4, "Stat");
	apply_type(0x14f08c4, "RTTICompound");
	del_items(0x14f25a0, DELIT_SIMPLE, 168);
	apply_type(0x14f25a0, "RTTIAttr[6]");
	set_name(0x14f25a0, "Stat::sAttrs");

	// StatChangeRibbonResource
	set_name(0x1536e6c, "StatChangeRibbonResource");
	apply_type(0x1536e6c, "RTTICompound");
	del_items(0x1537b70, DELIT_SIMPLE, 8);
	apply_type(0x1537b70, "RTTIBase[1]");
	set_name(0x1537b70, "StatChangeRibbonResource::sBases");
	del_items(0x1537b78, DELIT_SIMPLE, 112);
	apply_type(0x1537b78, "RTTIAttr[4]");
	set_name(0x1537b78, "StatChangeRibbonResource::sAttrs");

	// StatResource
	set_name(0x153e99c, "StatResource");
	apply_type(0x153e99c, "RTTICompound");
	del_items(0x1540740, DELIT_SIMPLE, 112);
	apply_type(0x1540740, "RTTIAttr[4]");
	set_name(0x1540740, "StatResource::sAttrs");

	// StateBasedDestructibilityResource
	set_name(0x14e2b7c, "StateBasedDestructibilityResource");
	apply_type(0x14e2b7c, "RTTICompound");
	del_items(0x14e5e90, DELIT_SIMPLE, 8);
	apply_type(0x14e5e90, "RTTIBase[1]");
	set_name(0x14e5e90, "StateBasedDestructibilityResource::sBases");

	// StateDiagramSkeletonAnimationResource
	set_name(0x14da590, "StateDiagramSkeletonAnimationResource");
	apply_type(0x14da590, "RTTICompound");
	del_items(0x14dc81c, DELIT_SIMPLE, 8);
	apply_type(0x14dc81c, "RTTIBase[1]");
	set_name(0x14dc81c, "StateDiagramSkeletonAnimationResource::sBases");
	del_items(0x14dc824, DELIT_SIMPLE, 56);
	apply_type(0x14dc824, "RTTIAttr[2]");
	set_name(0x14dc824, "StateDiagramSkeletonAnimationResource::sAttrs");

	// StateObject
	set_name(0x14cdec4, "StateObject");
	apply_type(0x14cdec4, "RTTICompound");

	// StateSwitch
	set_name(0x14b9974, "StateSwitch");
	apply_type(0x14b9974, "RTTICompound");
	del_items(0x14bb360, DELIT_SIMPLE, 336);
	apply_type(0x14bb360, "RTTIAttr[12]");
	set_name(0x14bb360, "StateSwitch::sAttrs");

	// StaticMeshActorResource
	set_name(0x15207bc, "StaticMeshActorResource");
	apply_type(0x15207bc, "RTTICompound");
	del_items(0x15218ec, DELIT_SIMPLE, 8);
	apply_type(0x15218ec, "RTTIBase[1]");
	set_name(0x15218ec, "StaticMeshActorResource::sBases");
	del_items(0x15218f4, DELIT_SIMPLE, 56);
	apply_type(0x15218f4, "RTTIAttr[2]");
	set_name(0x15218f4, "StaticMeshActorResource::sAttrs");

	// StaticMeshInstance
	set_name(0x14bef68, "StaticMeshInstance");
	apply_type(0x14bef68, "RTTICompound");
	del_items(0x14bf6b0, DELIT_SIMPLE, 8);
	apply_type(0x14bf6b0, "RTTIBase[1]");
	set_name(0x14bf6b0, "StaticMeshInstance::sBases");
	del_items(0x14bf6b8, DELIT_SIMPLE, 252);
	apply_type(0x14bf6b8, "RTTIAttr[9]");
	set_name(0x14bf6b8, "StaticMeshInstance::sAttrs");
	del_items(0x14bf7b4, DELIT_SIMPLE, 24);
	apply_type(0x14bf7b4, "RTTIMessageHandler[2]");
	set_name(0x14bf7b4, "StaticMeshInstance::sMessageHandlers");

	// StaticMeshResource
	set_name(0x14befdc, "StaticMeshResource");
	apply_type(0x14befdc, "RTTICompound");
	del_items(0x14bf484, DELIT_SIMPLE, 8);
	apply_type(0x14bf484, "RTTIBase[1]");
	set_name(0x14bf484, "StaticMeshResource::sBases");
	del_items(0x14bf48c, DELIT_SIMPLE, 308);
	apply_type(0x14bf48c, "RTTIAttr[11]");
	set_name(0x14bf48c, "StaticMeshResource::sAttrs");

	// StaticModel
	set_name(0x14e7aac, "StaticModel");
	apply_type(0x14e7aac, "RTTICompound");
	del_items(0x14e9670, DELIT_SIMPLE, 8);
	apply_type(0x14e9670, "RTTIBase[1]");
	set_name(0x14e9670, "StaticModel::sBases");

	// StaticModelActorBaseInstance
	set_name(0x15208b8, "StaticModelActorBaseInstance");
	apply_type(0x15208b8, "RTTICompound");
	del_items(0x15218e4, DELIT_SIMPLE, 8);
	apply_type(0x15218e4, "RTTIBase[1]");
	set_name(0x15218e4, "StaticModelActorBaseInstance::sBases");

	// StaticModelActorBaseResource
	set_name(0x1520864, "StaticModelActorBaseResource");
	apply_type(0x1520864, "RTTICompound");
	del_items(0x15218dc, DELIT_SIMPLE, 8);
	apply_type(0x15218dc, "RTTIBase[1]");
	set_name(0x15218dc, "StaticModelActorBaseResource::sBases");

	// StaticModelActorResource
	set_name(0x1520810, "StaticModelActorResource");
	apply_type(0x1520810, "RTTICompound");
	del_items(0x152192c, DELIT_SIMPLE, 8);
	apply_type(0x152192c, "RTTIBase[1]");
	set_name(0x152192c, "StaticModelActorResource::sBases");
	del_items(0x1521934, DELIT_SIMPLE, 56);
	apply_type(0x1521934, "RTTIAttr[2]");
	set_name(0x1521934, "StaticModelActorResource::sAttrs");

	// StaticModelEntityResource
	set_name(0x1520bbc, "StaticModelEntityResource");
	apply_type(0x1520bbc, "RTTICompound");
	del_items(0x1521a7c, DELIT_SIMPLE, 8);
	apply_type(0x1521a7c, "RTTIBase[1]");
	set_name(0x1521a7c, "StaticModelEntityResource::sBases");

	// StaticModelResource
	set_name(0x14e7b10, "StaticModelResource");
	apply_type(0x14e7b10, "RTTICompound");
	del_items(0x14e964c, DELIT_SIMPLE, 8);
	apply_type(0x14e964c, "RTTIBase[1]");
	set_name(0x14e964c, "StaticModelResource::sBases");
	del_items(0x14e9654, DELIT_SIMPLE, 28);
	apply_type(0x14e9654, "RTTIAttr[1]");
	set_name(0x14e9654, "StaticModelResource::sAttrs");

	// StopEmitElectricityAction
	set_name(0x14f99fc, "StopEmitElectricityAction");
	apply_type(0x14f99fc, "RTTICompound");
	del_items(0x14fe710, DELIT_SIMPLE, 8);
	apply_type(0x14fe710, "RTTIBase[1]");
	set_name(0x14fe710, "StopEmitElectricityAction::sBases");

	// StopSequenceEventInstance
	set_name(0x151e370, "StopSequenceEventInstance");
	apply_type(0x151e370, "RTTICompound");
	del_items(0x151f9e0, DELIT_SIMPLE, 8);
	apply_type(0x151f9e0, "RTTIBase[1]");
	set_name(0x151f9e0, "StopSequenceEventInstance::sBases");

	// StopSequenceEventResource
	set_name(0x151e31c, "StopSequenceEventResource");
	apply_type(0x151e31c, "RTTICompound");
	del_items(0x151f9d8, DELIT_SIMPLE, 8);
	apply_type(0x151f9d8, "RTTIBase[1]");
	set_name(0x151f9d8, "StopSequenceEventResource::sBases");

	// StreamOverride
	set_name(0x14c8da8, "StreamOverride");
	apply_type(0x14c8da8, "RTTICompound");
	del_items(0x14c9728, DELIT_SIMPLE, 56);
	apply_type(0x14c9728, "RTTIAttr[2]");
	set_name(0x14c9728, "StreamOverride::sAttrs");

	// StreamedOutEntity
	set_name(0x14e2168, "StreamedOutEntity");
	apply_type(0x14e2168, "RTTICompound");
	del_items(0x14e5430, DELIT_SIMPLE, 16);
	apply_type(0x14e5430, "RTTIBase[2]");
	set_name(0x14e5430, "StreamedOutEntity::sBases");
	del_items(0x14e5440, DELIT_SIMPLE, 168);
	apply_type(0x14e5440, "RTTIFunction[7]");
	set_name(0x14e5440, "StreamedOutEntity::sFunctions");

	// StreamingHintTrigger
	set_name(0x14e0b48, "StreamingHintTrigger");
	apply_type(0x14e0b48, "RTTICompound");
	del_items(0x14e0d34, DELIT_SIMPLE, 8);
	apply_type(0x14e0d34, "RTTIBase[1]");
	set_name(0x14e0d34, "StreamingHintTrigger::sBases");
	del_items(0x14e0d3c, DELIT_SIMPLE, 140);
	apply_type(0x14e0d3c, "RTTIAttr[5]");
	set_name(0x14e0d3c, "StreamingHintTrigger::sAttrs");

	// StreamingSectionManager
	set_name(0x14e0b9c, "StreamingSectionManager");
	apply_type(0x14e0b9c, "RTTICompound");
	del_items(0x14e0dd0, DELIT_SIMPLE, 8);
	apply_type(0x14e0dd0, "RTTIBase[1]");
	set_name(0x14e0dd0, "StreamingSectionManager::sBases");

	// SubGoalPausableEventInstance
	set_name(0x151e418, "SubGoalPausableEventInstance");
	apply_type(0x151e418, "RTTICompound");
	del_items(0x151ea4c, DELIT_SIMPLE, 8);
	apply_type(0x151ea4c, "RTTIBase[1]");
	set_name(0x151ea4c, "SubGoalPausableEventInstance::sBases");

	// SubGoalPausableEventResource
	set_name(0x151e3c4, "SubGoalPausableEventResource");
	apply_type(0x151e3c4, "RTTICompound");
	del_items(0x151ea44, DELIT_SIMPLE, 8);
	apply_type(0x151ea44, "RTTIBase[1]");
	set_name(0x151ea44, "SubGoalPausableEventResource::sBases");

	// SubmixPresetEventInstance
	set_name(0x151e0cc, "SubmixPresetEventInstance");
	apply_type(0x151e0cc, "RTTICompound");
	del_items(0x151f888, DELIT_SIMPLE, 8);
	apply_type(0x151f888, "RTTIBase[1]");
	set_name(0x151f888, "SubmixPresetEventInstance::sBases");

	// SubmixPresetEventResource
	set_name(0x151e078, "SubmixPresetEventResource");
	apply_type(0x151e078, "RTTICompound");
	del_items(0x151f848, DELIT_SIMPLE, 8);
	apply_type(0x151f848, "RTTIBase[1]");
	set_name(0x151f848, "SubmixPresetEventResource::sBases");
	del_items(0x151f850, DELIT_SIMPLE, 56);
	apply_type(0x151f850, "RTTIAttr[2]");
	set_name(0x151f850, "SubmixPresetEventResource::sAttrs");

	// SubmixPresetResource
	set_name(0x14dde20, "SubmixPresetResource");
	apply_type(0x14dde20, "RTTICompound");
	del_items(0x14df018, DELIT_SIMPLE, 8);
	apply_type(0x14df018, "RTTIBase[1]");
	set_name(0x14df018, "SubmixPresetResource::sBases");
	del_items(0x14df020, DELIT_SIMPLE, 1232);
	apply_type(0x14df020, "RTTIAttr[44]");
	set_name(0x14df020, "SubmixPresetResource::sAttrs");

	// Subtitle
	set_name(0x14efb48, "Subtitle");
	apply_type(0x14efb48, "RTTICompound");
	del_items(0x14f30b0, DELIT_SIMPLE, 84);
	apply_type(0x14f30b0, "RTTIAttr[3]");
	set_name(0x14f30b0, "Subtitle::sAttrs");

	// SunCascadeSettings
	set_name(0x14c8c58, "SunCascadeSettings");
	apply_type(0x14c8c58, "RTTICompound");
	del_items(0x14ca4f8, DELIT_SIMPLE, 140);
	apply_type(0x14ca4f8, "RTTIAttr[5]");
	set_name(0x14ca4f8, "SunCascadeSettings::sAttrs");

	// SunLight
	set_name(0x14c8cac, "SunLight");
	apply_type(0x14c8cac, "RTTICompound");
	del_items(0x14ca584, DELIT_SIMPLE, 8);
	apply_type(0x14ca584, "RTTIBase[1]");
	set_name(0x14ca584, "SunLight::sBases");
	del_items(0x14ca58c, DELIT_SIMPLE, 560);
	apply_type(0x14ca58c, "RTTIAttr[20]");
	set_name(0x14ca58c, "SunLight::sAttrs");
	del_items(0x14ca7bc, DELIT_SIMPLE, 12);
	apply_type(0x14ca7bc, "RTTIMessageHandler[1]");
	set_name(0x14ca7bc, "SunLight::sMessageHandlers");

	// SunLightResource
	set_name(0x14cb5f4, "SunLightResource");
	apply_type(0x14cb5f4, "RTTICompound");
	del_items(0x14cd714, DELIT_SIMPLE, 8);
	apply_type(0x14cd714, "RTTIBase[1]");
	set_name(0x14cd714, "SunLightResource::sBases");
	del_items(0x14cd71c, DELIT_SIMPLE, 560);
	apply_type(0x14cd71c, "RTTIAttr[20]");
	set_name(0x14cd71c, "SunLightResource::sAttrs");

	// SurfaceFormat
	set_name(0x14aecf4, "SurfaceFormat");
	apply_type(0x14aecf4, "RTTICompound");
	del_items(0x14aee0c, DELIT_SIMPLE, 84);
	apply_type(0x14aee0c, "RTTIAttr[3]");
	set_name(0x14aee0c, "SurfaceFormat::sAttrs");

	// SuspendPlayerControlEventInstance
	set_name(0x151e4c0, "SuspendPlayerControlEventInstance");
	apply_type(0x151e4c0, "RTTICompound");
	del_items(0x151fa98, DELIT_SIMPLE, 8);
	apply_type(0x151fa98, "RTTIBase[1]");
	set_name(0x151fa98, "SuspendPlayerControlEventInstance::sBases");

	// SuspendPlayerControlEventResource
	set_name(0x151e46c, "SuspendPlayerControlEventResource");
	apply_type(0x151e46c, "RTTICompound");
	del_items(0x151f9e8, DELIT_SIMPLE, 8);
	apply_type(0x151f9e8, "RTTIBase[1]");
	set_name(0x151f9e8, "SuspendPlayerControlEventResource::sBases");
	del_items(0x151f9f0, DELIT_SIMPLE, 168);
	apply_type(0x151f9f0, "RTTIAttr[6]");
	set_name(0x151f9f0, "SuspendPlayerControlEventResource::sAttrs");

	// SuspensionUnit
	set_name(0x150bc2c, "SuspensionUnit");
	apply_type(0x150bc2c, "RTTICompound");
	del_items(0x150cd90, DELIT_SIMPLE, 112);
	apply_type(0x150cd90, "RTTIAttr[4]");
	set_name(0x150cd90, "SuspensionUnit::sAttrs");

	// Switch
	set_name(0x15082c0, "Switch");
	apply_type(0x15082c0, "RTTICompound");
	del_items(0x150a048, DELIT_SIMPLE, 8);
	apply_type(0x150a048, "RTTIBase[1]");
	set_name(0x150a048, "Switch::sBases");
	del_items(0x150a050, DELIT_SIMPLE, 216);
	apply_type(0x150a050, "RTTIFunction[9]");
	set_name(0x150a050, "Switch::sFunctions");

	// SwitchCoverHeightAction
	set_name(0x14f960c, "SwitchCoverHeightAction");
	apply_type(0x14f960c, "RTTICompound");
	del_items(0x14fe1f4, DELIT_SIMPLE, 8);
	apply_type(0x14fe1f4, "RTTIBase[1]");
	set_name(0x14fe1f4, "SwitchCoverHeightAction::sBases");
	del_items(0x14fe1fc, DELIT_SIMPLE, 56);
	apply_type(0x14fe1fc, "RTTIAttr[2]");
	set_name(0x14fe1fc, "SwitchCoverHeightAction::sAttrs");

	// SwitchMeshResource
	set_name(0x14bee08, "SwitchMeshResource");
	apply_type(0x14bee08, "RTTICompound");
	del_items(0x14bf40c, DELIT_SIMPLE, 8);
	apply_type(0x14bf40c, "RTTIBase[1]");
	set_name(0x14bf40c, "SwitchMeshResource::sBases");
	del_items(0x14bf414, DELIT_SIMPLE, 112);
	apply_type(0x14bf414, "RTTIAttr[4]");
	set_name(0x14bf414, "SwitchMeshResource::sAttrs");

	// SwitchMeshResourcePart
	set_name(0x14bedb4, "SwitchMeshResourcePart");
	apply_type(0x14bedb4, "RTTICompound");
	del_items(0x14bf3d4, DELIT_SIMPLE, 56);
	apply_type(0x14bf3d4, "RTTIAttr[2]");
	set_name(0x14bf3d4, "SwitchMeshResourcePart::sAttrs");

	// SwitchObstacleTypeAction
	set_name(0x14f9660, "SwitchObstacleTypeAction");
	apply_type(0x14f9660, "RTTICompound");
	del_items(0x14fe234, DELIT_SIMPLE, 8);
	apply_type(0x14fe234, "RTTIBase[1]");
	set_name(0x14fe234, "SwitchObstacleTypeAction::sBases");
	del_items(0x14fe23c, DELIT_SIMPLE, 56);
	apply_type(0x14fe23c, "RTTIAttr[2]");
	set_name(0x14fe23c, "SwitchObstacleTypeAction::sAttrs");

	// SwitchRep
	set_name(0x1508378, "SwitchRep");
	apply_type(0x1508378, "RTTICompound");
	del_items(0x150a128, DELIT_SIMPLE, 8);
	apply_type(0x150a128, "RTTIBase[1]");
	set_name(0x150a128, "SwitchRep::sBases");

	// SwitchResource
	set_name(0x1508324, "SwitchResource");
	apply_type(0x1508324, "RTTICompound");
	del_items(0x1509ef0, DELIT_SIMPLE, 8);
	apply_type(0x1509ef0, "RTTIBase[1]");
	set_name(0x1509ef0, "SwitchResource::sBases");
	del_items(0x1509ef8, DELIT_SIMPLE, 336);
	apply_type(0x1509ef8, "RTTIAttr[12]");
	set_name(0x1509ef8, "SwitchResource::sAttrs");

	// SwitchStateAction
	set_name(0x14f8dc8, "SwitchStateAction");
	apply_type(0x14f8dc8, "RTTICompound");
	del_items(0x14fd71c, DELIT_SIMPLE, 8);
	apply_type(0x14fd71c, "RTTIBase[1]");
	set_name(0x14fd71c, "SwitchStateAction::sBases");
	del_items(0x14fd724, DELIT_SIMPLE, 56);
	apply_type(0x14fd724, "RTTIAttr[2]");
	set_name(0x14fd724, "SwitchStateAction::sAttrs");

	// TabTag
	set_name(0x14c0ad4, "TabTag");
	apply_type(0x14c0ad4, "RTTICompound");
	del_items(0x14c2c5c, DELIT_SIMPLE, 8);
	apply_type(0x14c2c5c, "RTTIBase[1]");
	set_name(0x14c2c5c, "TabTag::sBases");

	// TabWidget
	set_name(0x14c14ac, "TabWidget");
	apply_type(0x14c14ac, "RTTICompound");
	del_items(0x14c2fc4, DELIT_SIMPLE, 8);
	apply_type(0x14c2fc4, "RTTIBase[1]");
	set_name(0x14c2fc4, "TabWidget::sBases");

	// TabboxTag
	set_name(0x14c0a2c, "TabboxTag");
	apply_type(0x14c0a2c, "RTTICompound");
	del_items(0x14c2c4c, DELIT_SIMPLE, 8);
	apply_type(0x14c2c4c, "RTTIBase[1]");
	set_name(0x14c2c4c, "TabboxTag::sBases");

	// TabboxWidget
	set_name(0x14c13b0, "TabboxWidget");
	apply_type(0x14c13b0, "RTTICompound");
	del_items(0x14c2f3c, DELIT_SIMPLE, 8);
	apply_type(0x14c2f3c, "RTTIBase[1]");
	set_name(0x14c2f3c, "TabboxWidget::sBases");

	// TabboxWidgetResource
	set_name(0x14c1404, "TabboxWidgetResource");
	apply_type(0x14c1404, "RTTICompound");
	del_items(0x14c2f44, DELIT_SIMPLE, 8);
	apply_type(0x14c2f44, "RTTIBase[1]");
	set_name(0x14c2f44, "TabboxWidgetResource::sBases");
	del_items(0x14c2f4c, DELIT_SIMPLE, 112);
	apply_type(0x14c2f4c, "RTTIAttr[4]");
	set_name(0x14c2f4c, "TabboxWidgetResource::sAttrs");

	// TabpaneTag
	set_name(0x14c0a80, "TabpaneTag");
	apply_type(0x14c0a80, "RTTICompound");
	del_items(0x14c2c54, DELIT_SIMPLE, 8);
	apply_type(0x14c2c54, "RTTIBase[1]");
	set_name(0x14c2c54, "TabpaneTag::sBases");

	// TabpaneWidget
	set_name(0x14c1458, "TabpaneWidget");
	apply_type(0x14c1458, "RTTICompound");
	del_items(0x14c2fbc, DELIT_SIMPLE, 8);
	apply_type(0x14c2fbc, "RTTIBase[1]");
	set_name(0x14c2fbc, "TabpaneWidget::sBases");

	// Tag
	set_name(0x14c0024, "Tag");
	apply_type(0x14c0024, "RTTICompound");
	del_items(0x14c1f20, DELIT_SIMPLE, 8);
	apply_type(0x14c1f20, "RTTIBase[1]");
	set_name(0x14c1f20, "Tag::sBases");
	del_items(0x14c1f28, DELIT_SIMPLE, 336);
	apply_type(0x14c1f28, "RTTIFunction[14]");
	set_name(0x14c1f28, "Tag::sFunctions");

	// TagEvent
	set_name(0x14bfc34, "TagEvent");
	apply_type(0x14bfc34, "RTTICompound");
	del_items(0x14c1e18, DELIT_SIMPLE, 8);
	apply_type(0x14c1e18, "RTTIBase[1]");
	set_name(0x14c1e18, "TagEvent::sBases");
	del_items(0x14c1e20, DELIT_SIMPLE, 120);
	apply_type(0x14c1e20, "RTTIFunction[5]");
	set_name(0x14c1e20, "TagEvent::sFunctions");

	// TagEventFocusOff
	set_name(0x14bfe2c, "TagEventFocusOff");
	apply_type(0x14bfe2c, "RTTICompound");
	del_items(0x14c1ed8, DELIT_SIMPLE, 8);
	apply_type(0x14c1ed8, "RTTIBase[1]");
	set_name(0x14c1ed8, "TagEventFocusOff::sBases");

	// TagEventFocusOn
	set_name(0x14bfdd8, "TagEventFocusOn");
	apply_type(0x14bfdd8, "RTTICompound");
	del_items(0x14c1ed0, DELIT_SIMPLE, 8);
	apply_type(0x14c1ed0, "RTTIBase[1]");
	set_name(0x14c1ed0, "TagEventFocusOn::sBases");

	// TagEventInit
	set_name(0x14bfd84, "TagEventInit");
	apply_type(0x14bfd84, "RTTICompound");
	del_items(0x14c1ec8, DELIT_SIMPLE, 8);
	apply_type(0x14c1ec8, "RTTIBase[1]");
	set_name(0x14c1ec8, "TagEventInit::sBases");

	// TagEventInput
	set_name(0x14bfc88, "TagEventInput");
	apply_type(0x14bfc88, "RTTICompound");
	del_items(0x14c1e98, DELIT_SIMPLE, 8);
	apply_type(0x14c1e98, "RTTIBase[1]");
	set_name(0x14c1e98, "TagEventInput::sBases");
	del_items(0x14c1ea0, DELIT_SIMPLE, 24);
	apply_type(0x14c1ea0, "RTTIFunction[1]");
	set_name(0x14c1ea0, "TagEventInput::sFunctions");

	// TagEventMenuStateChanged
	set_name(0x14bff7c, "TagEventMenuStateChanged");
	apply_type(0x14bff7c, "RTTICompound");
	del_items(0x14c1f10, DELIT_SIMPLE, 8);
	apply_type(0x14c1f10, "RTTIBase[1]");
	set_name(0x14c1f10, "TagEventMenuStateChanged::sBases");

	// TagEventPageOff
	set_name(0x14bfd30, "TagEventPageOff");
	apply_type(0x14bfd30, "RTTICompound");
	del_items(0x14c1ec0, DELIT_SIMPLE, 8);
	apply_type(0x14c1ec0, "RTTIBase[1]");
	set_name(0x14c1ec0, "TagEventPageOff::sBases");

	// TagEventPageOn
	set_name(0x14bfcdc, "TagEventPageOn");
	apply_type(0x14bfcdc, "RTTICompound");
	del_items(0x14c1eb8, DELIT_SIMPLE, 8);
	apply_type(0x14c1eb8, "RTTIBase[1]");
	set_name(0x14c1eb8, "TagEventPageOn::sBases");

	// TagEventPostInit
	set_name(0x14bff28, "TagEventPostInit");
	apply_type(0x14bff28, "RTTICompound");
	del_items(0x14c1f08, DELIT_SIMPLE, 8);
	apply_type(0x14c1f08, "RTTIBase[1]");
	set_name(0x14c1f08, "TagEventPostInit::sBases");

	// TagEventVKBClose
	set_name(0x14bfed4, "TagEventVKBClose");
	apply_type(0x14bfed4, "RTTICompound");
	del_items(0x14c1ee8, DELIT_SIMPLE, 8);
	apply_type(0x14c1ee8, "RTTIBase[1]");
	set_name(0x14c1ee8, "TagEventVKBClose::sBases");
	del_items(0x14c1ef0, DELIT_SIMPLE, 24);
	apply_type(0x14c1ef0, "RTTIFunction[1]");
	set_name(0x14c1ef0, "TagEventVKBClose::sFunctions");

	// TagEventValueChanged
	set_name(0x14bfe80, "TagEventValueChanged");
	apply_type(0x14bfe80, "RTTICompound");
	del_items(0x14c1ee0, DELIT_SIMPLE, 8);
	apply_type(0x14c1ee0, "RTTIBase[1]");
	set_name(0x14c1ee0, "TagEventValueChanged::sBases");

	// Tank
	set_name(0x150b730, "Tank");
	apply_type(0x150b730, "RTTICompound");
	del_items(0x150d310, DELIT_SIMPLE, 8);
	apply_type(0x150d310, "RTTIBase[1]");
	set_name(0x150d310, "Tank::sBases");
	del_items(0x150d318, DELIT_SIMPLE, 48);
	apply_type(0x150d318, "RTTIFunction[2]");
	set_name(0x150d318, "Tank::sFunctions");

	// TankJoystickController
	set_name(0x150b97c, "TankJoystickController");
	apply_type(0x150b97c, "RTTICompound");
	del_items(0x150d6c8, DELIT_SIMPLE, 8);
	apply_type(0x150d6c8, "RTTIBase[1]");
	set_name(0x150d6c8, "TankJoystickController::sBases");

	// TankRep
	set_name(0x150ba78, "TankRep");
	apply_type(0x150ba78, "RTTICompound");
	del_items(0x150d6e0, DELIT_SIMPLE, 8);
	apply_type(0x150d6e0, "RTTIBase[1]");
	set_name(0x150d6e0, "TankRep::sBases");

	// TankResource
	set_name(0x150bb74, "TankResource");
	apply_type(0x150bb74, "RTTICompound");
	del_items(0x150d110, DELIT_SIMPLE, 8);
	apply_type(0x150d110, "RTTIBase[1]");
	set_name(0x150d110, "TankResource::sBases");
	del_items(0x150d118, DELIT_SIMPLE, 504);
	apply_type(0x150d118, "RTTIAttr[18]");
	set_name(0x150d118, "TankResource::sAttrs");

	// TargetBoneSetFlags
	set_name(0x14da710, "TargetBoneSetFlags");
	apply_type(0x14da710, "RTTICompound");
	del_items(0x14db5cc, DELIT_SIMPLE, 56);
	apply_type(0x14db5cc, "RTTIAttr[2]");
	set_name(0x14db5cc, "TargetBoneSetFlags::sAttrs");

	// TemplateTag
	set_name(0x14c02c4, "TemplateTag");
	apply_type(0x14c02c4, "RTTICompound");
	del_items(0x14c2ce4, DELIT_SIMPLE, 8);
	apply_type(0x14c2ce4, "RTTIBase[1]");
	set_name(0x14c2ce4, "TemplateTag::sBases");
	del_items(0x14c2cec, DELIT_SIMPLE, 24);
	apply_type(0x14c2cec, "RTTIFunction[1]");
	set_name(0x14c2cec, "TemplateTag::sFunctions");

	// TerrainAimReticuleResource
	set_name(0x1526650, "TerrainAimReticuleResource");
	apply_type(0x1526650, "RTTICompound");
	del_items(0x1527ba0, DELIT_SIMPLE, 8);
	apply_type(0x1527ba0, "RTTIBase[1]");
	set_name(0x1527ba0, "TerrainAimReticuleResource::sBases");
	del_items(0x1527ba8, DELIT_SIMPLE, 140);
	apply_type(0x1527ba8, "RTTIAttr[5]");
	set_name(0x1527ba8, "TerrainAimReticuleResource::sAttrs");

	// TestInteraction
	set_name(0x1508768, "TestInteraction");
	apply_type(0x1508768, "RTTICompound");
	del_items(0x150a914, DELIT_SIMPLE, 8);
	apply_type(0x150a914, "RTTIBase[1]");
	set_name(0x150a914, "TestInteraction::sBases");
	del_items(0x150a91c, DELIT_SIMPLE, 216);
	apply_type(0x150a91c, "RTTIFunction[9]");
	set_name(0x150a91c, "TestInteraction::sFunctions");

	// TestInteractionAiController
	set_name(0x150890c, "TestInteractionAiController");
	apply_type(0x150890c, "RTTICompound");
	del_items(0x150aa10, DELIT_SIMPLE, 8);
	apply_type(0x150aa10, "RTTIBase[1]");
	set_name(0x150aa10, "TestInteractionAiController::sBases");

	// TestInteractionController
	set_name(0x1508864, "TestInteractionController");
	apply_type(0x1508864, "RTTICompound");
	del_items(0x150a9f8, DELIT_SIMPLE, 8);
	apply_type(0x150a9f8, "RTTIBase[1]");
	set_name(0x150a9f8, "TestInteractionController::sBases");

	// TestInteractionJoystickController
	set_name(0x15088b8, "TestInteractionJoystickController");
	apply_type(0x15088b8, "RTTICompound");
	del_items(0x150aa08, DELIT_SIMPLE, 8);
	apply_type(0x150aa08, "RTTIBase[1]");
	set_name(0x150aa08, "TestInteractionJoystickController::sBases");

	// TestInteractionRep
	set_name(0x15087bc, "TestInteractionRep");
	apply_type(0x15087bc, "RTTICompound");
	del_items(0x150aa00, DELIT_SIMPLE, 8);
	apply_type(0x150aa00, "RTTIBase[1]");
	set_name(0x150aa00, "TestInteractionRep::sBases");

	// TestInteractionResource
	set_name(0x1508810, "TestInteractionResource");
	apply_type(0x1508810, "RTTICompound");
	del_items(0x150a714, DELIT_SIMPLE, 8);
	apply_type(0x150a714, "RTTIBase[1]");
	set_name(0x150a714, "TestInteractionResource::sBases");
	del_items(0x150a71c, DELIT_SIMPLE, 504);
	apply_type(0x150a71c, "RTTIAttr[18]");
	set_name(0x150a71c, "TestInteractionResource::sAttrs");

	// TextAreaTag
	set_name(0x14c0b28, "TextAreaTag");
	apply_type(0x14c0b28, "RTTICompound");
	del_items(0x14c2ba4, DELIT_SIMPLE, 8);
	apply_type(0x14c2ba4, "RTTIBase[1]");
	set_name(0x14c2ba4, "TextAreaTag::sBases");

	// TextAreaWidget
	set_name(0x14c15a8, "TextAreaWidget");
	apply_type(0x14c15a8, "RTTICompound");
	del_items(0x14c2fd4, DELIT_SIMPLE, 8);
	apply_type(0x14c2fd4, "RTTIBase[1]");
	set_name(0x14c2fd4, "TextAreaWidget::sBases");

	// TextTag
	set_name(0x14c0b7c, "TextTag");
	apply_type(0x14c0b7c, "RTTICompound");
	del_items(0x14c29c0, DELIT_SIMPLE, 8);
	apply_type(0x14c29c0, "RTTIBase[1]");
	set_name(0x14c29c0, "TextTag::sBases");
	del_items(0x14c29c8, DELIT_SIMPLE, 24);
	apply_type(0x14c29c8, "RTTIFunction[1]");
	set_name(0x14c29c8, "TextTag::sFunctions");

	// TextWidget
	set_name(0x14c1554, "TextWidget");
	apply_type(0x14c1554, "RTTICompound");
	del_items(0x14c2fcc, DELIT_SIMPLE, 8);
	apply_type(0x14c2fcc, "RTTIBase[1]");
	set_name(0x14c2fcc, "TextWidget::sBases");

	// Texture
	set_name(0x14cb178, "Texture");
	apply_type(0x14cb178, "RTTICompound");
	del_items(0x14cc14c, DELIT_SIMPLE, 8);
	apply_type(0x14cc14c, "RTTIBase[1]");
	set_name(0x14cc14c, "Texture::sBases");
	del_items(0x14cc154, DELIT_SIMPLE, 12);
	apply_type(0x14cc154, "RTTIMessageHandler[1]");
	set_name(0x14cc154, "Texture::sMessageHandlers");

	// TextureBinding
	set_name(0x14cb658, "TextureBinding");
	apply_type(0x14cb658, "RTTICompound");
	del_items(0x14cc238, DELIT_SIMPLE, 112);
	apply_type(0x14cc238, "RTTIAttr[4]");
	set_name(0x14cc238, "TextureBinding::sAttrs");

	// TextureBindingWithHandle
	set_name(0x14cb6bc, "TextureBindingWithHandle");
	apply_type(0x14cb6bc, "RTTICompound");
	del_items(0x14cc2a8, DELIT_SIMPLE, 8);
	apply_type(0x14cc2a8, "RTTIBase[1]");
	set_name(0x14cc2a8, "TextureBindingWithHandle::sBases");

	// TextureLUT
	set_name(0x14cb114, "TextureLUT");
	apply_type(0x14cb114, "RTTICompound");
	del_items(0x14cc894, DELIT_SIMPLE, 8);
	apply_type(0x14cc894, "RTTIBase[1]");
	set_name(0x14cc894, "TextureLUT::sBases");
	del_items(0x14cc89c, DELIT_SIMPLE, 112);
	apply_type(0x14cc89c, "RTTIAttr[4]");
	set_name(0x14cc89c, "TextureLUT::sAttrs");
	del_items(0x14cc90c, DELIT_SIMPLE, 12);
	apply_type(0x14cc90c, "RTTIMessageHandler[1]");
	set_name(0x14cc90c, "TextureLUT::sMessageHandlers");

	// TextureLUTEntry
	set_name(0x14cb0b0, "TextureLUTEntry");
	apply_type(0x14cb0b0, "RTTICompound");
	del_items(0x14cc840, DELIT_SIMPLE, 84);
	apply_type(0x14cc840, "RTTIAttr[3]");
	set_name(0x14cc840, "TextureLUTEntry::sAttrs");

	// TextureMatrix
	set_name(0x14b8074, "TextureMatrix");
	apply_type(0x14b8074, "RTTICompound");
	del_items(0x14b85d4, DELIT_SIMPLE, 84);
	apply_type(0x14b85d4, "RTTIAttr[3]");
	set_name(0x14b85d4, "TextureMatrix::sAttrs");

	// TextureTag
	set_name(0x14c0bd0, "TextureTag");
	apply_type(0x14c0bd0, "RTTICompound");
	del_items(0x14c2a8c, DELIT_SIMPLE, 8);
	apply_type(0x14c2a8c, "RTTIBase[1]");
	set_name(0x14c2a8c, "TextureTag::sBases");

	// TextureWidget
	set_name(0x14c1500, "TextureWidget");
	apply_type(0x14c1500, "RTTICompound");
	del_items(0x14c2fdc, DELIT_SIMPLE, 8);
	apply_type(0x14c2fdc, "RTTIBase[1]");
	set_name(0x14c2fdc, "TextureWidget::sBases");

	// TextureWidgetElement
	set_name(0x14c177c, "TextureWidgetElement");
	apply_type(0x14c177c, "RTTICompound");
	del_items(0x14c32a0, DELIT_SIMPLE, 168);
	apply_type(0x14c32a0, "RTTIAttr[6]");
	set_name(0x14c32a0, "TextureWidgetElement::sAttrs");

	// TextureWidgetResource
	set_name(0x14c17e0, "TextureWidgetResource");
	apply_type(0x14c17e0, "RTTICompound");
	del_items(0x14c3348, DELIT_SIMPLE, 8);
	apply_type(0x14c3348, "RTTIBase[1]");
	set_name(0x14c3348, "TextureWidgetResource::sBases");
	del_items(0x14c3350, DELIT_SIMPLE, 168);
	apply_type(0x14c3350, "RTTIAttr[6]");
	set_name(0x14c3350, "TextureWidgetResource::sAttrs");
	del_items(0x14c33f8, DELIT_SIMPLE, 12);
	apply_type(0x14c33f8, "RTTIMessageHandler[1]");
	set_name(0x14c33f8, "TextureWidgetResource::sMessageHandlers");

	// Throwable
	set_name(0x152875c, "Throwable");
	apply_type(0x152875c, "RTTICompound");
	del_items(0x15295fc, DELIT_SIMPLE, 8);
	apply_type(0x15295fc, "RTTIBase[1]");
	set_name(0x15295fc, "Throwable::sBases");

	// ThrowableMortarBeacon
	set_name(0x1517c04, "ThrowableMortarBeacon");
	apply_type(0x1517c04, "RTTICompound");
	del_items(0x1518808, DELIT_SIMPLE, 8);
	apply_type(0x1518808, "RTTIBase[1]");
	set_name(0x1518808, "ThrowableMortarBeacon::sBases");

	// ThrowableMortarBeaconResource
	set_name(0x1517c58, "ThrowableMortarBeaconResource");
	apply_type(0x1517c58, "RTTICompound");
	del_items(0x151881c, DELIT_SIMPLE, 8);
	apply_type(0x151881c, "RTTIBase[1]");
	set_name(0x151881c, "ThrowableMortarBeaconResource::sBases");
	del_items(0x1518824, DELIT_SIMPLE, 308);
	apply_type(0x1518824, "RTTIAttr[11]");
	set_name(0x1518824, "ThrowableMortarBeaconResource::sAttrs");

	// ThrowableMover
	set_name(0x152ad58, "ThrowableMover");
	apply_type(0x152ad58, "RTTICompound");
	del_items(0x152b4fc, DELIT_SIMPLE, 8);
	apply_type(0x152b4fc, "RTTIBase[1]");
	set_name(0x152b4fc, "ThrowableMover::sBases");

	// ThrowableMoverResource
	set_name(0x152c0b4, "ThrowableMoverResource");
	apply_type(0x152c0b4, "RTTICompound");
	del_items(0x152cc90, DELIT_SIMPLE, 8);
	apply_type(0x152cc90, "RTTIBase[1]");
	set_name(0x152cc90, "ThrowableMoverResource::sBases");
	del_items(0x152cc98, DELIT_SIMPLE, 168);
	apply_type(0x152cc98, "RTTIAttr[6]");
	set_name(0x152cc98, "ThrowableMoverResource::sAttrs");
	del_items(0x152cd40, DELIT_SIMPLE, 12);
	apply_type(0x152cd40, "RTTIMessageHandler[1]");
	set_name(0x152cd40, "ThrowableMoverResource::sMessageHandlers");

	// ThrowableRep
	set_name(0x15287b0, "ThrowableRep");
	apply_type(0x15287b0, "RTTICompound");
	del_items(0x1529604, DELIT_SIMPLE, 8);
	apply_type(0x1529604, "RTTIBase[1]");
	set_name(0x1529604, "ThrowableRep::sBases");

	// ThrowableResource
	set_name(0x1528814, "ThrowableResource");
	apply_type(0x1528814, "RTTICompound");
	del_items(0x1529204, DELIT_SIMPLE, 8);
	apply_type(0x1529204, "RTTIBase[1]");
	set_name(0x1529204, "ThrowableResource::sBases");
	del_items(0x152920c, DELIT_SIMPLE, 1008);
	apply_type(0x152920c, "RTTIAttr[36]");
	set_name(0x152920c, "ThrowableResource::sAttrs");

	// TimeMappedSkeletonAnimationResource
	set_name(0x14d9464, "TimeMappedSkeletonAnimationResource");
	apply_type(0x14d9464, "RTTICompound");
	del_items(0x14db894, DELIT_SIMPLE, 8);
	apply_type(0x14db894, "RTTIBase[1]");
	set_name(0x14db894, "TimeMappedSkeletonAnimationResource::sBases");
	del_items(0x14db89c, DELIT_SIMPLE, 196);
	apply_type(0x14db89c, "RTTIAttr[7]");
	set_name(0x14db89c, "TimeMappedSkeletonAnimationResource::sAttrs");
	del_items(0x14db960, DELIT_SIMPLE, 12);
	apply_type(0x14db960, "RTTIMessageHandler[1]");
	set_name(0x14db960, "TimeMappedSkeletonAnimationResource::sMessageHandlers");

	// TimeMappingInfo
	set_name(0x14d9840, "TimeMappingInfo");
	apply_type(0x14d9840, "RTTICompound");
	del_items(0x14db840, DELIT_SIMPLE, 84);
	apply_type(0x14db840, "RTTIAttr[3]");
	set_name(0x14db840, "TimeMappingInfo::sAttrs");

	// TimeWarpFactor
	set_name(0x151a128, "TimeWarpFactor");
	apply_type(0x151a128, "RTTICompound");
	del_items(0x151bfc0, DELIT_SIMPLE, 56);
	apply_type(0x151bfc0, "RTTIAttr[2]");
	set_name(0x151bfc0, "TimeWarpFactor::sAttrs");

	// TimeWarpTag
	set_name(0x14d96d0, "TimeWarpTag");
	apply_type(0x14d96d0, "RTTICompound");
	del_items(0x14dbfa0, DELIT_SIMPLE, 112);
	apply_type(0x14dbfa0, "RTTIAttr[4]");
	set_name(0x14dbfa0, "TimeWarpTag::sAttrs");

	// TimeWarpedSkeletonAnimationResource
	set_name(0x14d9724, "TimeWarpedSkeletonAnimationResource");
	apply_type(0x14d9724, "RTTICompound");
	del_items(0x14dc010, DELIT_SIMPLE, 8);
	apply_type(0x14dc010, "RTTIBase[1]");
	set_name(0x14dc010, "TimeWarpedSkeletonAnimationResource::sBases");
	del_items(0x14dc018, DELIT_SIMPLE, 140);
	apply_type(0x14dc018, "RTTIAttr[5]");
	set_name(0x14dc018, "TimeWarpedSkeletonAnimationResource::sAttrs");

	// TimedEventInstance
	set_name(0x151faf8, "TimedEventInstance");
	apply_type(0x151faf8, "RTTICompound");
	del_items(0x1520e94, DELIT_SIMPLE, 8);
	apply_type(0x1520e94, "RTTIBase[1]");
	set_name(0x1520e94, "TimedEventInstance::sBases");

	// TimedEventResource
	set_name(0x151faa4, "TimedEventResource");
	apply_type(0x151faa4, "RTTICompound");
	del_items(0x1520e38, DELIT_SIMPLE, 8);
	apply_type(0x1520e38, "RTTIBase[1]");
	set_name(0x1520e38, "TimedEventResource::sBases");
	del_items(0x1520e40, DELIT_SIMPLE, 84);
	apply_type(0x1520e40, "RTTIAttr[3]");
	set_name(0x1520e40, "TimedEventResource::sAttrs");

	// TimerTag
	set_name(0x14c0318, "TimerTag");
	apply_type(0x14c0318, "RTTICompound");
	del_items(0x14c2c64, DELIT_SIMPLE, 8);
	apply_type(0x14c2c64, "RTTIBase[1]");
	set_name(0x14c2c64, "TimerTag::sBases");
	del_items(0x14c2c6c, DELIT_SIMPLE, 48);
	apply_type(0x14c2c6c, "RTTIFunction[2]");
	set_name(0x14c2c6c, "TimerTag::sFunctions");

	// ToggleAnimationAction
	set_name(0x15418c8, "ToggleAnimationAction");
	apply_type(0x15418c8, "RTTICompound");
	del_items(0x1543278, DELIT_SIMPLE, 8);
	apply_type(0x1543278, "RTTIBase[1]");
	set_name(0x1543278, "ToggleAnimationAction::sBases");
	del_items(0x1543280, DELIT_SIMPLE, 56);
	apply_type(0x1543280, "RTTIAttr[2]");
	set_name(0x1543280, "ToggleAnimationAction::sAttrs");

	// Torch
	set_name(0x154a610, "Torch");
	apply_type(0x154a610, "RTTICompound");
	del_items(0x154acfc, DELIT_SIMPLE, 8);
	apply_type(0x154acfc, "RTTIBase[1]");
	set_name(0x154acfc, "Torch::sBases");

	// TorchResource
	set_name(0x154a674, "TorchResource");
	apply_type(0x154a674, "RTTICompound");
	del_items(0x154aca8, DELIT_SIMPLE, 8);
	apply_type(0x154aca8, "RTTIBase[1]");
	set_name(0x154aca8, "TorchResource::sBases");

	// TrackAnimatorUserExitOptions
	set_name(0x15059e4, "TrackAnimatorUserExitOptions");
	apply_type(0x15059e4, "RTTICompound");
	del_items(0x1507474, DELIT_SIMPLE, 392);
	apply_type(0x1507474, "RTTIAttr[14]");
	set_name(0x1507474, "TrackAnimatorUserExitOptions::sAttrs");

	// TransMatrix
	set_name(0x14b80c8, "TransMatrix");
	apply_type(0x14b80c8, "RTTICompound");
	del_items(0x14b8628, DELIT_SIMPLE, 84);
	apply_type(0x14b8628, "RTTIAttr[3]");
	set_name(0x14b8628, "TransMatrix::sAttrs");

	// TriStateIcon
	set_name(0x15350ec, "TriStateIcon");
	apply_type(0x15350ec, "RTTICompound");
	del_items(0x1535598, DELIT_SIMPLE, 84);
	apply_type(0x1535598, "RTTIAttr[3]");
	set_name(0x1535598, "TriStateIcon::sAttrs");

	// TroopCarrier
	set_name(0x150b880, "TroopCarrier");
	apply_type(0x150b880, "RTTICompound");
	del_items(0x150d688, DELIT_SIMPLE, 8);
	apply_type(0x150d688, "RTTIBase[1]");
	set_name(0x150d688, "TroopCarrier::sBases");
	del_items(0x150d690, DELIT_SIMPLE, 48);
	apply_type(0x150d690, "RTTIFunction[2]");
	set_name(0x150d690, "TroopCarrier::sFunctions");

	// TroopCarrierAIController
	set_name(0x150b928, "TroopCarrierAIController");
	apply_type(0x150b928, "RTTICompound");
	del_items(0x150d6c0, DELIT_SIMPLE, 8);
	apply_type(0x150d6c0, "RTTIBase[1]");
	set_name(0x150d6c0, "TroopCarrierAIController::sBases");

	// TroopCarrierResource
	set_name(0x150b8d4, "TroopCarrierResource");
	apply_type(0x150b8d4, "RTTICompound");
	del_items(0x150d514, DELIT_SIMPLE, 8);
	apply_type(0x150d514, "RTTIBase[1]");
	set_name(0x150d514, "TroopCarrierResource::sBases");
	del_items(0x150d51c, DELIT_SIMPLE, 364);
	apply_type(0x150d51c, "RTTIAttr[13]");
	set_name(0x150d51c, "TroopCarrierResource::sAttrs");

	// Trophy
	set_name(0x14f06b4, "Trophy");
	apply_type(0x14f06b4, "RTTICompound");
	del_items(0x14f46a4, DELIT_SIMPLE, 140);
	apply_type(0x14f46a4, "RTTIAttr[5]");
	set_name(0x14f46a4, "Trophy::sAttrs");

	// TrophyResource
	set_name(0x14f0708, "TrophyResource");
	apply_type(0x14f0708, "RTTICompound");
	del_items(0x14f4730, DELIT_SIMPLE, 8);
	apply_type(0x14f4730, "RTTIBase[1]");
	set_name(0x14f4730, "TrophyResource::sBases");
	del_items(0x14f4738, DELIT_SIMPLE, 56);
	apply_type(0x14f4738, "RTTIAttr[2]");
	set_name(0x14f4738, "TrophyResource::sAttrs");
	del_items(0x14f4770, DELIT_SIMPLE, 12);
	apply_type(0x14f4770, "RTTIMessageHandler[1]");
	set_name(0x14f4770, "TrophyResource::sMessageHandlers");

	// TrophySystem
	set_name(0x14f075c, "TrophySystem");
	apply_type(0x14f075c, "RTTICompound");
	del_items(0x14f3910, DELIT_SIMPLE, 8);
	apply_type(0x14f3910, "RTTIBase[1]");
	set_name(0x14f3910, "TrophySystem::sBases");
	del_items(0x14f3918, DELIT_SIMPLE, 264);
	apply_type(0x14f3918, "RTTIFunction[11]");
	set_name(0x14f3918, "TrophySystem::sFunctions");

	// Turret
	set_name(0x15083cc, "Turret");
	apply_type(0x15083cc, "RTTICompound");
	del_items(0x150a3e0, DELIT_SIMPLE, 8);
	apply_type(0x150a3e0, "RTTIBase[1]");
	set_name(0x150a3e0, "Turret::sBases");
	del_items(0x150a3e8, DELIT_SIMPLE, 72);
	apply_type(0x150a3e8, "RTTIFunction[3]");
	set_name(0x150a3e8, "Turret::sFunctions");

	// TurretAiController
	set_name(0x1508474, "TurretAiController");
	apply_type(0x1508474, "RTTICompound");
	del_items(0x150a440, DELIT_SIMPLE, 8);
	apply_type(0x150a440, "RTTIBase[1]");
	set_name(0x150a440, "TurretAiController::sBases");

	// TurretController
	set_name(0x15084c8, "TurretController");
	apply_type(0x15084c8, "RTTICompound");
	del_items(0x150a430, DELIT_SIMPLE, 8);
	apply_type(0x150a430, "RTTIBase[1]");
	set_name(0x150a430, "TurretController::sBases");

	// TurretRep
	set_name(0x1508420, "TurretRep");
	apply_type(0x1508420, "RTTICompound");
	del_items(0x150a438, DELIT_SIMPLE, 8);
	apply_type(0x150a438, "RTTIBase[1]");
	set_name(0x150a438, "TurretRep::sBases");

	// TurretResource
	set_name(0x150851c, "TurretResource");
	apply_type(0x150851c, "RTTICompound");
	del_items(0x150a13c, DELIT_SIMPLE, 8);
	apply_type(0x150a13c, "RTTIBase[1]");
	set_name(0x150a13c, "TurretResource::sBases");
	del_items(0x150a144, DELIT_SIMPLE, 644);
	apply_type(0x150a144, "RTTIAttr[23]");
	set_name(0x150a144, "TurretResource::sAttrs");
	del_items(0x150a3c8, DELIT_SIMPLE, 24);
	apply_type(0x150a3c8, "RTTIMessageHandler[2]");
	set_name(0x150a3c8, "TurretResource::sMessageHandlers");

	// TutorialSystem
	set_name(0x1542840, "TutorialSystem");
	apply_type(0x1542840, "RTTICompound");
	del_items(0x1542a04, DELIT_SIMPLE, 8);
	apply_type(0x1542a04, "RTTIBase[1]");
	set_name(0x1542a04, "TutorialSystem::sBases");
	del_items(0x1542a0c, DELIT_SIMPLE, 72);
	apply_type(0x1542a0c, "RTTIFunction[3]");
	set_name(0x1542a0c, "TutorialSystem::sFunctions");

	// TwoBoneIkControl
	set_name(0x14da2a0, "TwoBoneIkControl");
	apply_type(0x14da2a0, "RTTICompound");
	del_items(0x14dabc8, DELIT_SIMPLE, 308);
	apply_type(0x14dabc8, "RTTIAttr[11]");
	set_name(0x14dabc8, "TwoBoneIkControl::sAttrs");

	// TwoJointIkBendConfig
	set_name(0x14e34c4, "TwoJointIkBendConfig");
	apply_type(0x14e34c4, "RTTICompound");
	del_items(0x14e6c8c, DELIT_SIMPLE, 364);
	apply_type(0x14e6c8c, "RTTIAttr[13]");
	set_name(0x14e6c8c, "TwoJointIkBendConfig::sAttrs");

	// Typeface
	set_name(0x14c96a4, "Typeface");
	apply_type(0x14c96a4, "RTTICompound");
	del_items(0x14ca29c, DELIT_SIMPLE, 8);
	apply_type(0x14ca29c, "RTTIBase[1]");
	set_name(0x14ca29c, "Typeface::sBases");
	del_items(0x14ca2a4, DELIT_SIMPLE, 56);
	apply_type(0x14ca2a4, "RTTIAttr[2]");
	set_name(0x14ca2a4, "Typeface::sAttrs");

	// TypefaceStyle
	set_name(0x14c9640, "TypefaceStyle");
	apply_type(0x14c9640, "RTTICompound");
	del_items(0x14ca198, DELIT_SIMPLE, 8);
	apply_type(0x14ca198, "RTTIBase[1]");
	set_name(0x14ca198, "TypefaceStyle::sBases");
	del_items(0x14ca1a0, DELIT_SIMPLE, 252);
	apply_type(0x14ca1a0, "RTTIAttr[9]");
	set_name(0x14ca1a0, "TypefaceStyle::sAttrs");

	// UDTrophyManager
	set_name(0x1542198, "UDTrophyManager");
	apply_type(0x1542198, "RTTICompound");
	del_items(0x1543ad4, DELIT_SIMPLE, 8);
	apply_type(0x1543ad4, "RTTIBase[1]");
	set_name(0x1543ad4, "UDTrophyManager::sBases");

	// UDTrophyResource
	set_name(0x1542144, "UDTrophyResource");
	apply_type(0x1542144, "RTTICompound");
	del_items(0x1543ab0, DELIT_SIMPLE, 8);
	apply_type(0x1543ab0, "RTTIBase[1]");
	set_name(0x1543ab0, "UDTrophyResource::sBases");
	del_items(0x1543ab8, DELIT_SIMPLE, 28);
	apply_type(0x1543ab8, "RTTIAttr[1]");
	set_name(0x1543ab8, "UDTrophyResource::sAttrs");

	// UIRect
	set_name(0x14b811c, "UIRect");
	apply_type(0x14b811c, "RTTICompound");
	del_items(0x14b87f0, DELIT_SIMPLE, 8);
	apply_type(0x14b87f0, "RTTIBase[1]");
	set_name(0x14b87f0, "UIRect::sBases");

	// UniqueComponent
	set_name(0x150fac0, "UniqueComponent");
	apply_type(0x150fac0, "RTTICompound");
	del_items(0x1512434, DELIT_SIMPLE, 8);
	apply_type(0x1512434, "RTTIBase[1]");
	set_name(0x1512434, "UniqueComponent::sBases");

	// UniqueComponentResource
	set_name(0x150fb24, "UniqueComponentResource");
	apply_type(0x150fb24, "RTTICompound");
	del_items(0x1512440, DELIT_SIMPLE, 8);
	apply_type(0x1512440, "RTTIBase[1]");
	set_name(0x1512440, "UniqueComponentResource::sBases");

	// UniquePickUp
	set_name(0x1518da4, "UniquePickUp");
	apply_type(0x1518da4, "RTTICompound");
	del_items(0x151af4c, DELIT_SIMPLE, 8);
	apply_type(0x151af4c, "RTTIBase[1]");
	set_name(0x151af4c, "UniquePickUp::sBases");
	del_items(0x151af54, DELIT_SIMPLE, 72);
	apply_type(0x151af54, "RTTIFunction[3]");
	set_name(0x151af54, "UniquePickUp::sFunctions");

	// UniquePickUpResource
	set_name(0x1518df8, "UniquePickUpResource");
	apply_type(0x1518df8, "RTTICompound");
	del_items(0x151aed4, DELIT_SIMPLE, 8);
	apply_type(0x151aed4, "RTTIBase[1]");
	set_name(0x151aed4, "UniquePickUpResource::sBases");
	del_items(0x151aedc, DELIT_SIMPLE, 112);
	apply_type(0x151aedc, "RTTIAttr[4]");
	set_name(0x151aedc, "UniquePickUpResource::sAttrs");

	// UnlockClueAction
	set_name(0x1541a6c, "UnlockClueAction");
	apply_type(0x1541a6c, "RTTICompound");
	del_items(0x15433d4, DELIT_SIMPLE, 8);
	apply_type(0x15433d4, "RTTIBase[1]");
	set_name(0x15433d4, "UnlockClueAction::sBases");
	del_items(0x15433dc, DELIT_SIMPLE, 140);
	apply_type(0x15433dc, "RTTIAttr[5]");
	set_name(0x15433dc, "UnlockClueAction::sAttrs");

	// UnlockableFeatureManager
	set_name(0x152adac, "UnlockableFeatureManager");
	apply_type(0x152adac, "RTTICompound");
	del_items(0x152ba3c, DELIT_SIMPLE, 8);
	apply_type(0x152ba3c, "RTTIBase[1]");
	set_name(0x152ba3c, "UnlockableFeatureManager::sBases");

	// UnlockableFeatureManagerResource
	set_name(0x152ae00, "UnlockableFeatureManagerResource");
	apply_type(0x152ae00, "RTTICompound");
	del_items(0x152baa0, DELIT_SIMPLE, 8);
	apply_type(0x152baa0, "RTTIBase[1]");
	set_name(0x152baa0, "UnlockableFeatureManagerResource::sBases");
	del_items(0x152baa8, DELIT_SIMPLE, 56);
	apply_type(0x152baa8, "RTTIAttr[2]");
	set_name(0x152baa8, "UnlockableFeatureManagerResource::sAttrs");

	// UnlockableFeaturePickUpResource
	set_name(0x152af70, "UnlockableFeaturePickUpResource");
	apply_type(0x152af70, "RTTICompound");
	del_items(0x152bbb4, DELIT_SIMPLE, 8);
	apply_type(0x152bbb4, "RTTIBase[1]");
	set_name(0x152bbb4, "UnlockableFeaturePickUpResource::sBases");
	del_items(0x152bbbc, DELIT_SIMPLE, 56);
	apply_type(0x152bbbc, "RTTIAttr[2]");
	set_name(0x152bbbc, "UnlockableFeaturePickUpResource::sAttrs");

	// UnlockableFeatureResource
	set_name(0x152ae74, "UnlockableFeatureResource");
	apply_type(0x152ae74, "RTTICompound");
	del_items(0x152ba44, DELIT_SIMPLE, 8);
	apply_type(0x152ba44, "RTTIBase[1]");
	set_name(0x152ba44, "UnlockableFeatureResource::sBases");
	del_items(0x152ba4c, DELIT_SIMPLE, 84);
	apply_type(0x152ba4c, "RTTIAttr[3]");
	set_name(0x152ba4c, "UnlockableFeatureResource::sAttrs");

	// UnmountEventInstance
	set_name(0x151fba0, "UnmountEventInstance");
	apply_type(0x151fba0, "RTTICompound");
	del_items(0x1521240, DELIT_SIMPLE, 8);
	apply_type(0x1521240, "RTTIBase[1]");
	set_name(0x1521240, "UnmountEventInstance::sBases");

	// UnmountEventResource
	set_name(0x151fb4c, "UnmountEventResource");
	apply_type(0x151fb4c, "RTTICompound");
	del_items(0x15211c8, DELIT_SIMPLE, 8);
	apply_type(0x15211c8, "RTTIBase[1]");
	set_name(0x15211c8, "UnmountEventResource::sBases");
	del_items(0x15211d0, DELIT_SIMPLE, 112);
	apply_type(0x15211d0, "RTTIAttr[4]");
	set_name(0x15211d0, "UnmountEventResource::sAttrs");

	// UseLocation
	set_name(0x14e2090, "UseLocation");
	apply_type(0x14e2090, "RTTICompound");
	del_items(0x14e5638, DELIT_SIMPLE, 8);
	apply_type(0x14e5638, "RTTIBase[1]");
	set_name(0x14e5638, "UseLocation::sBases");
	del_items(0x14e5640, DELIT_SIMPLE, 84);
	apply_type(0x14e5640, "RTTIAttr[3]");
	set_name(0x14e5640, "UseLocation::sAttrs");

	// UseLocationGame
	set_name(0x14eff4c, "UseLocationGame");
	apply_type(0x14eff4c, "RTTICompound");
	del_items(0x14f36a8, DELIT_SIMPLE, 8);
	apply_type(0x14f36a8, "RTTIBase[1]");
	set_name(0x14f36a8, "UseLocationGame::sBases");

	// UseLocationInfo
	set_name(0x1504d88, "UseLocationInfo");
	apply_type(0x1504d88, "RTTICompound");
	del_items(0x1505b74, DELIT_SIMPLE, 336);
	apply_type(0x1505b74, "RTTIAttr[12]");
	set_name(0x1505b74, "UseLocationInfo::sAttrs");

	// UseLocationInventoryItem
	set_name(0x14f0024, "UseLocationInventoryItem");
	apply_type(0x14f0024, "RTTICompound");
	del_items(0x14f3b3c, DELIT_SIMPLE, 8);
	apply_type(0x14f3b3c, "RTTIBase[1]");
	set_name(0x14f3b3c, "UseLocationInventoryItem::sBases");

	// UseLocationInventoryItemResource
	set_name(0x14f0078, "UseLocationInventoryItemResource");
	apply_type(0x14f0078, "RTTICompound");
	del_items(0x14f3b44, DELIT_SIMPLE, 8);
	apply_type(0x14f3b44, "RTTIBase[1]");
	set_name(0x14f3b44, "UseLocationInventoryItemResource::sBases");
	del_items(0x14f3b4c, DELIT_SIMPLE, 112);
	apply_type(0x14f3b4c, "RTTIAttr[4]");
	set_name(0x14f3b4c, "UseLocationInventoryItemResource::sAttrs");

	// UseLocationResource
	set_name(0x14e2114, "UseLocationResource");
	apply_type(0x14e2114, "RTTICompound");
	del_items(0x14e5694, DELIT_SIMPLE, 8);
	apply_type(0x14e5694, "RTTIBase[1]");
	set_name(0x14e5694, "UseLocationResource::sBases");
	del_items(0x14e569c, DELIT_SIMPLE, 112);
	apply_type(0x14e569c, "RTTIAttr[4]");
	set_name(0x14e569c, "UseLocationResource::sAttrs");

	// UseLocationResourceGame
	set_name(0x14effd0, "UseLocationResourceGame");
	apply_type(0x14effd0, "RTTICompound");
	del_items(0x14f34f0, DELIT_SIMPLE, 8);
	apply_type(0x14f34f0, "RTTIBase[1]");
	set_name(0x14f34f0, "UseLocationResourceGame::sBases");
	del_items(0x14f34f8, DELIT_SIMPLE, 420);
	apply_type(0x14f34f8, "RTTIAttr[15]");
	set_name(0x14f34f8, "UseLocationResourceGame::sAttrs");
	del_items(0x14f369c, DELIT_SIMPLE, 12);
	apply_type(0x14f369c, "RTTIMessageHandler[1]");
	set_name(0x14f369c, "UseLocationResourceGame::sMessageHandlers");

	// UsedEntityScoreSettings
	set_name(0x14f0598, "UsedEntityScoreSettings");
	apply_type(0x14f0598, "RTTICompound");
	del_items(0x14f3f54, DELIT_SIMPLE, 8);
	apply_type(0x14f3f54, "RTTIBase[1]");
	set_name(0x14f3f54, "UsedEntityScoreSettings::sBases");
	del_items(0x14f3f5c, DELIT_SIMPLE, 84);
	apply_type(0x14f3f5c, "RTTIAttr[3]");
	set_name(0x14f3f5c, "UsedEntityScoreSettings::sAttrs");

	// UserDamageModifier
	set_name(0x1505368, "UserDamageModifier");
	apply_type(0x1505368, "RTTICompound");
	del_items(0x15060cc, DELIT_SIMPLE, 56);
	apply_type(0x15060cc, "RTTIAttr[2]");
	set_name(0x15060cc, "UserDamageModifier::sAttrs");

	// UserModeInfo
	set_name(0x1504d14, "UserModeInfo");
	apply_type(0x1504d14, "RTTICompound");
	del_items(0x1505a94, DELIT_SIMPLE, 224);
	apply_type(0x1505a94, "RTTIAttr[8]");
	set_name(0x1505a94, "UserModeInfo::sAttrs");

	// Valve
	set_name(0x1508570, "Valve");
	apply_type(0x1508570, "RTTICompound");
	del_items(0x150a61c, DELIT_SIMPLE, 8);
	apply_type(0x150a61c, "RTTIBase[1]");
	set_name(0x150a61c, "Valve::sBases");
	del_items(0x150a624, DELIT_SIMPLE, 192);
	apply_type(0x150a624, "RTTIFunction[8]");
	set_name(0x150a624, "Valve::sFunctions");

	// ValveAiController
	set_name(0x1508714, "ValveAiController");
	apply_type(0x1508714, "RTTICompound");
	del_items(0x150a700, DELIT_SIMPLE, 8);
	apply_type(0x150a700, "RTTIBase[1]");
	set_name(0x150a700, "ValveAiController::sBases");

	// ValveController
	set_name(0x150866c, "ValveController");
	apply_type(0x150866c, "RTTICompound");
	del_items(0x150a6e8, DELIT_SIMPLE, 8);
	apply_type(0x150a6e8, "RTTIBase[1]");
	set_name(0x150a6e8, "ValveController::sBases");

	// ValveJoystickController
	set_name(0x15086c0, "ValveJoystickController");
	apply_type(0x15086c0, "RTTICompound");
	del_items(0x150a6f8, DELIT_SIMPLE, 8);
	apply_type(0x150a6f8, "RTTIBase[1]");
	set_name(0x150a6f8, "ValveJoystickController::sBases");

	// ValveRep
	set_name(0x15085c4, "ValveRep");
	apply_type(0x15085c4, "RTTICompound");
	del_items(0x150a6f0, DELIT_SIMPLE, 8);
	apply_type(0x150a6f0, "RTTIBase[1]");
	set_name(0x150a6f0, "ValveRep::sBases");

	// ValveResource
	set_name(0x1508618, "ValveResource");
	apply_type(0x1508618, "RTTICompound");
	del_items(0x150a454, DELIT_SIMPLE, 8);
	apply_type(0x150a454, "RTTIBase[1]");
	set_name(0x150a454, "ValveResource::sBases");
	del_items(0x150a45c, DELIT_SIMPLE, 448);
	apply_type(0x150a45c, "RTTIAttr[16]");
	set_name(0x150a45c, "ValveResource::sAttrs");

	// VariableBindingNG
	set_name(0x14cb774, "VariableBindingNG");
	apply_type(0x14cb774, "RTTICompound");
	del_items(0x14cc320, DELIT_SIMPLE, 8);
	apply_type(0x14cc320, "RTTIBase[1]");
	set_name(0x14cc320, "VariableBindingNG::sBases");
	del_items(0x14cc328, DELIT_SIMPLE, 28);
	apply_type(0x14cc328, "RTTIAttr[1]");
	set_name(0x14cc328, "VariableBindingNG::sAttrs");

	// VariableBindingNGWithHandle
	set_name(0x14cb7d8, "VariableBindingNGWithHandle");
	apply_type(0x14cb7d8, "RTTICompound");
	del_items(0x14cc344, DELIT_SIMPLE, 8);
	apply_type(0x14cc344, "RTTIBase[1]");
	set_name(0x14cc344, "VariableBindingNGWithHandle::sBases");

	// VehicleInternalCameraEntity
	set_name(0x1502894, "VehicleInternalCameraEntity");
	apply_type(0x1502894, "RTTICompound");
	del_items(0x1504588, DELIT_SIMPLE, 8);
	apply_type(0x1504588, "RTTIBase[1]");
	set_name(0x1504588, "VehicleInternalCameraEntity::sBases");

	// VehicleInternalCameraEntityRep
	set_name(0x15028e8, "VehicleInternalCameraEntityRep");
	apply_type(0x15028e8, "RTTICompound");
	del_items(0x1504590, DELIT_SIMPLE, 8);
	apply_type(0x1504590, "RTTIBase[1]");
	set_name(0x1504590, "VehicleInternalCameraEntityRep::sBases");

	// VehicleInternalCameraEntityResource
	set_name(0x150293c, "VehicleInternalCameraEntityResource");
	apply_type(0x150293c, "RTTICompound");
	del_items(0x150452c, DELIT_SIMPLE, 8);
	apply_type(0x150452c, "RTTIBase[1]");
	set_name(0x150452c, "VehicleInternalCameraEntityResource::sBases");
	del_items(0x1504534, DELIT_SIMPLE, 84);
	apply_type(0x1504534, "RTTIAttr[3]");
	set_name(0x1504534, "VehicleInternalCameraEntityResource::sAttrs");

	// VehicleOnRails
	set_name(0x150bcd4, "VehicleOnRails");
	apply_type(0x150bcd4, "RTTICompound");
	del_items(0x150dbe0, DELIT_SIMPLE, 8);
	apply_type(0x150dbe0, "RTTIBase[1]");
	set_name(0x150dbe0, "VehicleOnRails::sBases");

	// VehicleOnRailsRep
	set_name(0x150be44, "VehicleOnRailsRep");
	apply_type(0x150be44, "RTTICompound");
	del_items(0x150dbe8, DELIT_SIMPLE, 8);
	apply_type(0x150dbe8, "RTTIBase[1]");
	set_name(0x150dbe8, "VehicleOnRailsRep::sBases");

	// VehicleOnRailsResource
	set_name(0x150bdf0, "VehicleOnRailsResource");
	apply_type(0x150bdf0, "RTTICompound");
	del_items(0x150d91c, DELIT_SIMPLE, 8);
	apply_type(0x150d91c, "RTTIBase[1]");
	set_name(0x150d91c, "VehicleOnRailsResource::sBases");
	del_items(0x150d924, DELIT_SIMPLE, 700);
	apply_type(0x150d924, "RTTIAttr[25]");
	set_name(0x150d924, "VehicleOnRailsResource::sAttrs");

	// VehicleRocketLauncher
	set_name(0x152201c, "VehicleRocketLauncher");
	apply_type(0x152201c, "RTTICompound");
	del_items(0x1522e2c, DELIT_SIMPLE, 8);
	apply_type(0x1522e2c, "RTTIBase[1]");
	set_name(0x1522e2c, "VehicleRocketLauncher::sBases");

	// VehicleRocketLauncherRep
	set_name(0x1522070, "VehicleRocketLauncherRep");
	apply_type(0x1522070, "RTTICompound");
	del_items(0x1522e34, DELIT_SIMPLE, 8);
	apply_type(0x1522e34, "RTTIBase[1]");
	set_name(0x1522e34, "VehicleRocketLauncherRep::sBases");

	// VehicleRocketLauncherResource
	set_name(0x15220c4, "VehicleRocketLauncherResource");
	apply_type(0x15220c4, "RTTICompound");
	del_items(0x1522d60, DELIT_SIMPLE, 8);
	apply_type(0x1522d60, "RTTIBase[1]");
	set_name(0x1522d60, "VehicleRocketLauncherResource::sBases");
	del_items(0x1522d68, DELIT_SIMPLE, 196);
	apply_type(0x1522d68, "RTTIAttr[7]");
	set_name(0x1522d68, "VehicleRocketLauncherResource::sAttrs");

	// VehicleWeapon
	set_name(0x1522118, "VehicleWeapon");
	apply_type(0x1522118, "RTTICompound");
	del_items(0x1522d4c, DELIT_SIMPLE, 8);
	apply_type(0x1522d4c, "RTTIBase[1]");
	set_name(0x1522d4c, "VehicleWeapon::sBases");

	// VehicleWeaponPickUpResource
	set_name(0x1518e4c, "VehicleWeaponPickUpResource");
	apply_type(0x1518e4c, "RTTICompound");
	del_items(0x151afb0, DELIT_SIMPLE, 8);
	apply_type(0x151afb0, "RTTIBase[1]");
	set_name(0x151afb0, "VehicleWeaponPickUpResource::sBases");

	// VehicleWeaponResource
	set_name(0x152217c, "VehicleWeaponResource");
	apply_type(0x152217c, "RTTICompound");
	del_items(0x1522b08, DELIT_SIMPLE, 8);
	apply_type(0x1522b08, "RTTIBase[1]");
	set_name(0x1522b08, "VehicleWeaponResource::sBases");
	del_items(0x1522b10, DELIT_SIMPLE, 560);
	apply_type(0x1522b10, "RTTIAttr[20]");
	set_name(0x1522b10, "VehicleWeaponResource::sAttrs");
	del_items(0x1522d40, DELIT_SIMPLE, 12);
	apply_type(0x1522d40, "RTTIMessageHandler[1]");
	set_name(0x1522d40, "VehicleWeaponResource::sMessageHandlers");

	// VertexArrayResource
	set_name(0x14c8e0c, "VertexArrayResource");
	apply_type(0x14c8e0c, "RTTICompound");
	del_items(0x14c9700, DELIT_SIMPLE, 8);
	apply_type(0x14c9700, "RTTIBase[1]");
	set_name(0x14c9700, "VertexArrayResource::sBases");
	del_items(0x14c9708, DELIT_SIMPLE, 12);
	apply_type(0x14c9708, "RTTIMessageHandler[1]");
	set_name(0x14c9708, "VertexArrayResource::sMessageHandlers");

	// VertexDeltaDeformation
	set_name(0x14d9f3c, "VertexDeltaDeformation");
	apply_type(0x14d9f3c, "RTTICompound");
	del_items(0x14db268, DELIT_SIMPLE, 140);
	apply_type(0x14db268, "RTTIAttr[5]");
	set_name(0x14db268, "VertexDeltaDeformation::sAttrs");

	// VertexSkin
	set_name(0x14da948, "VertexSkin");
	apply_type(0x14da948, "RTTICompound");
	del_items(0x14dafc8, DELIT_SIMPLE, 308);
	apply_type(0x14dafc8, "RTTIAttr[11]");
	set_name(0x14dafc8, "VertexSkin::sAttrs");

	// VertexSkinNBT
	set_name(0x14da9ac, "VertexSkinNBT");
	apply_type(0x14da9ac, "RTTICompound");
	del_items(0x14db0fc, DELIT_SIMPLE, 364);
	apply_type(0x14db0fc, "RTTIAttr[13]");
	set_name(0x14db0fc, "VertexSkinNBT::sAttrs");

	// ViewDependentEntity
	set_name(0x1513978, "ViewDependentEntity");
	apply_type(0x1513978, "RTTICompound");
	del_items(0x1514688, DELIT_SIMPLE, 8);
	apply_type(0x1514688, "RTTIBase[1]");
	set_name(0x1514688, "ViewDependentEntity::sBases");

	// ViewDependentEntityRep
	set_name(0x15139cc, "ViewDependentEntityRep");
	apply_type(0x15139cc, "RTTICompound");
	del_items(0x151421c, DELIT_SIMPLE, 8);
	apply_type(0x151421c, "RTTIBase[1]");
	set_name(0x151421c, "ViewDependentEntityRep::sBases");

	// ViewDependentEntityResource
	set_name(0x1513a20, "ViewDependentEntityResource");
	apply_type(0x1513a20, "RTTICompound");
	del_items(0x1514238, DELIT_SIMPLE, 8);
	apply_type(0x1514238, "RTTIBase[1]");
	set_name(0x1514238, "ViewDependentEntityResource::sBases");

	// ViewTag
	set_name(0x14c037c, "ViewTag");
	apply_type(0x14c037c, "RTTICompound");
	del_items(0x14c2a3c, DELIT_SIMPLE, 8);
	apply_type(0x14c2a3c, "RTTIBase[1]");
	set_name(0x14c2a3c, "ViewTag::sBases");
	del_items(0x14c2a44, DELIT_SIMPLE, 72);
	apply_type(0x14c2a44, "RTTIFunction[3]");
	set_name(0x14c2a44, "ViewTag::sFunctions");

	// ViewportSetup
	set_name(0x152e3a4, "ViewportSetup");
	apply_type(0x152e3a4, "RTTICompound");
	del_items(0x15304f8, DELIT_SIMPLE, 392);
	apply_type(0x15304f8, "RTTIAttr[14]");
	set_name(0x15304f8, "ViewportSetup::sAttrs");

	// ViewportSetupsResource
	set_name(0x152e340, "ViewportSetupsResource");
	apply_type(0x152e340, "RTTICompound");
	del_items(0x15304ac, DELIT_SIMPLE, 8);
	apply_type(0x15304ac, "RTTIBase[1]");
	set_name(0x15304ac, "ViewportSetupsResource::sBases");
	del_items(0x15304b4, DELIT_SIMPLE, 56);
	apply_type(0x15304b4, "RTTIAttr[2]");
	set_name(0x15304b4, "ViewportSetupsResource::sAttrs");
	del_items(0x15304ec, DELIT_SIMPLE, 12);
	apply_type(0x15304ec, "RTTIMessageHandler[1]");
	set_name(0x15304ec, "ViewportSetupsResource::sMessageHandlers");

	// VignetteSettingsResource
	set_name(0x14cbd34, "VignetteSettingsResource");
	apply_type(0x14cbd34, "RTTICompound");
	del_items(0x14ccc78, DELIT_SIMPLE, 8);
	apply_type(0x14ccc78, "RTTIBase[1]");
	set_name(0x14ccc78, "VignetteSettingsResource::sBases");
	del_items(0x14ccc80, DELIT_SIMPLE, 168);
	apply_type(0x14ccc80, "RTTIAttr[6]");
	set_name(0x14ccc80, "VignetteSettingsResource::sAttrs");

	// VirtualSoundEmitterNode
	set_name(0x14dd000, "VirtualSoundEmitterNode");
	apply_type(0x14dd000, "RTTICompound");
	del_items(0x14e096c, DELIT_SIMPLE, 8);
	apply_type(0x14e096c, "RTTIBase[1]");
	set_name(0x14e096c, "VirtualSoundEmitterNode::sBases");

	// VisualTag
	set_name(0x14c0078, "VisualTag");
	apply_type(0x14c0078, "RTTICompound");
	del_items(0x14c2958, DELIT_SIMPLE, 8);
	apply_type(0x14c2958, "RTTIBase[1]");
	set_name(0x14c2958, "VisualTag::sBases");
	del_items(0x14c2960, DELIT_SIMPLE, 72);
	apply_type(0x14c2960, "RTTIFunction[3]");
	set_name(0x14c2960, "VisualTag::sFunctions");

	// VolumeDuckerResource
	set_name(0x14ddb50, "VolumeDuckerResource");
	apply_type(0x14ddb50, "RTTICompound");
	del_items(0x14df968, DELIT_SIMPLE, 8);
	apply_type(0x14df968, "RTTIBase[1]");
	set_name(0x14df968, "VolumeDuckerResource::sBases");
	del_items(0x14df970, DELIT_SIMPLE, 140);
	apply_type(0x14df970, "RTTIAttr[5]");
	set_name(0x14df970, "VolumeDuckerResource::sAttrs");

	// WASPGrenade
	set_name(0x15266a4, "WASPGrenade");
	apply_type(0x15266a4, "RTTICompound");
	del_items(0x1527d60, DELIT_SIMPLE, 8);
	apply_type(0x1527d60, "RTTIBase[1]");
	set_name(0x1527d60, "WASPGrenade::sBases");

	// WASPGrenadeResource
	set_name(0x15266f8, "WASPGrenadeResource");
	apply_type(0x15266f8, "RTTICompound");
	del_items(0x1527c40, DELIT_SIMPLE, 8);
	apply_type(0x1527c40, "RTTIBase[1]");
	set_name(0x1527c40, "WASPGrenadeResource::sBases");
	del_items(0x1527c48, DELIT_SIMPLE, 280);
	apply_type(0x1527c48, "RTTIAttr[10]");
	set_name(0x1527c48, "WASPGrenadeResource::sAttrs");

	// WWiseAudioEventResource
	set_name(0x151a860, "WWiseAudioEventResource");
	apply_type(0x151a860, "RTTICompound");
	del_items(0x151c4e4, DELIT_SIMPLE, 8);
	apply_type(0x151c4e4, "RTTIBase[1]");
	set_name(0x151c4e4, "WWiseAudioEventResource::sBases");
	del_items(0x151c4ec, DELIT_SIMPLE, 56);
	apply_type(0x151c4ec, "RTTIAttr[2]");
	set_name(0x151c4ec, "WWiseAudioEventResource::sAttrs");

	// WWiseEventAction
	set_name(0x1541a18, "WWiseEventAction");
	apply_type(0x1541a18, "RTTICompound");
	del_items(0x1543394, DELIT_SIMPLE, 8);
	apply_type(0x1543394, "RTTIBase[1]");
	set_name(0x1543394, "WWiseEventAction::sBases");
	del_items(0x154339c, DELIT_SIMPLE, 56);
	apply_type(0x154339c, "RTTIAttr[2]");
	set_name(0x154339c, "WWiseEventAction::sAttrs");

	// WWiseSoundBankHandle
	set_name(0x14de17c, "WWiseSoundBankHandle");
	apply_type(0x14de17c, "RTTICompound");
	del_items(0x14e0528, DELIT_SIMPLE, 8);
	apply_type(0x14e0528, "RTTIBase[1]");
	set_name(0x14e0528, "WWiseSoundBankHandle::sBases");

	// WWiseSoundBankResource
	set_name(0x14de4b4, "WWiseSoundBankResource");
	apply_type(0x14de4b4, "RTTICompound");
	del_items(0x14e0634, DELIT_SIMPLE, 8);
	apply_type(0x14e0634, "RTTIBase[1]");
	set_name(0x14e0634, "WWiseSoundBankResource::sBases");
	del_items(0x14e063c, DELIT_SIMPLE, 36);
	apply_type(0x14e063c, "RTTIMessageHandler[3]");
	set_name(0x14e063c, "WWiseSoundBankResource::sMessageHandlers");

	// WWiseSoundEventInstance
	set_name(0x151a9b0, "WWiseSoundEventInstance");
	apply_type(0x151a9b0, "RTTICompound");
	del_items(0x151c654, DELIT_SIMPLE, 8);
	apply_type(0x151c654, "RTTIBase[1]");
	set_name(0x151c654, "WWiseSoundEventInstance::sBases");

	// WWiseSoundEventResource
	set_name(0x151a95c, "WWiseSoundEventResource");
	apply_type(0x151a95c, "RTTICompound");
	del_items(0x151c588, DELIT_SIMPLE, 8);
	apply_type(0x151c588, "RTTIBase[1]");
	set_name(0x151c588, "WWiseSoundEventResource::sBases");
	del_items(0x151c590, DELIT_SIMPLE, 196);
	apply_type(0x151c590, "RTTIAttr[7]");
	set_name(0x151c590, "WWiseSoundEventResource::sAttrs");

	// WWiseSoundInstance
	set_name(0x14de410, "WWiseSoundInstance");
	apply_type(0x14de410, "RTTICompound");
	del_items(0x14e0588, DELIT_SIMPLE, 8);
	apply_type(0x14e0588, "RTTIBase[1]");
	set_name(0x14e0588, "WWiseSoundInstance::sBases");
	del_items(0x14e0590, DELIT_SIMPLE, 120);
	apply_type(0x14e0590, "RTTIFunction[5]");
	set_name(0x14e0590, "WWiseSoundInstance::sFunctions");
	del_items(0x14e0608, DELIT_SIMPLE, 24);
	apply_type(0x14e0608, "RTTIMessageHandler[2]");
	set_name(0x14e0608, "WWiseSoundInstance::sMessageHandlers");

	// WWiseSoundInstanceBase
	set_name(0x14de2c4, "WWiseSoundInstanceBase");
	apply_type(0x14de2c4, "RTTICompound");
	del_items(0x14e0530, DELIT_SIMPLE, 8);
	apply_type(0x14e0530, "RTTIBase[1]");
	set_name(0x14e0530, "WWiseSoundInstanceBase::sBases");

	// WWiseSoundInstanceManager
	set_name(0x14de36c, "WWiseSoundInstanceManager");
	apply_type(0x14de36c, "RTTICompound");
	del_items(0x14e0620, DELIT_SIMPLE, 8);
	apply_type(0x14e0620, "RTTIBase[1]");
	set_name(0x14e0620, "WWiseSoundInstanceManager::sBases");
	del_items(0x14e0628, DELIT_SIMPLE, 12);
	apply_type(0x14e0628, "RTTIMessageHandler[1]");
	set_name(0x14e0628, "WWiseSoundInstanceManager::sMessageHandlers");

	// WWiseSoundManager
	set_name(0x14de220, "WWiseSoundManager");
	apply_type(0x14de220, "RTTICompound");
	del_items(0x14e0538, DELIT_SIMPLE, 8);
	apply_type(0x14e0538, "RTTIBase[1]");
	set_name(0x14e0538, "WWiseSoundManager::sBases");
	del_items(0x14e0540, DELIT_SIMPLE, 56);
	apply_type(0x14e0540, "RTTIAttr[2]");
	set_name(0x14e0540, "WWiseSoundManager::sAttrs");
	del_items(0x14e0578, DELIT_SIMPLE, 12);
	apply_type(0x14e0578, "RTTIMessageHandler[1]");
	set_name(0x14e0578, "WWiseSoundManager::sMessageHandlers");

	// WWiseSoundSwitchComponent
	set_name(0x1550964, "WWiseSoundSwitchComponent");
	apply_type(0x1550964, "RTTICompound");
	del_items(0x1550bd0, DELIT_SIMPLE, 8);
	apply_type(0x1550bd0, "RTTIBase[1]");
	set_name(0x1550bd0, "WWiseSoundSwitchComponent::sBases");

	// WWiseSoundSwitchResource
	set_name(0x15509b8, "WWiseSoundSwitchResource");
	apply_type(0x15509b8, "RTTICompound");
	del_items(0x1550b8c, DELIT_SIMPLE, 8);
	apply_type(0x1550b8c, "RTTIBase[1]");
	set_name(0x1550b8c, "WWiseSoundSwitchResource::sBases");
	del_items(0x1550b94, DELIT_SIMPLE, 56);
	apply_type(0x1550b94, "RTTIAttr[2]");
	set_name(0x1550b94, "WWiseSoundSwitchResource::sAttrs");

	// WWiseSoundZoneInstance
	set_name(0x14de558, "WWiseSoundZoneInstance");
	apply_type(0x14de558, "RTTICompound");
	del_items(0x14e08ec, DELIT_SIMPLE, 8);
	apply_type(0x14e08ec, "RTTIBase[1]");
	set_name(0x14e08ec, "WWiseSoundZoneInstance::sBases");
	del_items(0x14e08f4, DELIT_SIMPLE, 56);
	apply_type(0x14e08f4, "RTTIAttr[2]");
	set_name(0x14e08f4, "WWiseSoundZoneInstance::sAttrs");
	del_items(0x14e092c, DELIT_SIMPLE, 12);
	apply_type(0x14e092c, "RTTIMessageHandler[1]");
	set_name(0x14e092c, "WWiseSoundZoneInstance::sMessageHandlers");

	// WWiseSoundZoneManager
	set_name(0x14de720, "WWiseSoundZoneManager");
	apply_type(0x14de720, "RTTICompound");
	del_items(0x14e0938, DELIT_SIMPLE, 8);
	apply_type(0x14e0938, "RTTIBase[1]");
	set_name(0x14e0938, "WWiseSoundZoneManager::sBases");
	del_items(0x14e0940, DELIT_SIMPLE, 12);
	apply_type(0x14e0940, "RTTIMessageHandler[1]");
	set_name(0x14e0940, "WWiseSoundZoneManager::sMessageHandlers");

	// WWiseSoundZoneResource
	set_name(0x14de5fc, "WWiseSoundZoneResource");
	apply_type(0x14de5fc, "RTTICompound");
	del_items(0x14e0660, DELIT_SIMPLE, 8);
	apply_type(0x14e0660, "RTTIBase[1]");
	set_name(0x14e0660, "WWiseSoundZoneResource::sBases");
	del_items(0x14e0668, DELIT_SIMPLE, 644);
	apply_type(0x14e0668, "RTTIAttr[23]");
	set_name(0x14e0668, "WWiseSoundZoneResource::sAttrs");

	// WWiseStateEventInstance
	set_name(0x151a908, "WWiseStateEventInstance");
	apply_type(0x151a908, "RTTICompound");
	del_items(0x151c580, DELIT_SIMPLE, 8);
	apply_type(0x151c580, "RTTIBase[1]");
	set_name(0x151c580, "WWiseStateEventInstance::sBases");

	// WWiseStateEventResource
	set_name(0x151a8b4, "WWiseStateEventResource");
	apply_type(0x151a8b4, "RTTICompound");
	del_items(0x151c524, DELIT_SIMPLE, 8);
	apply_type(0x151c524, "RTTIBase[1]");
	set_name(0x151c524, "WWiseStateEventResource::sBases");
	del_items(0x151c52c, DELIT_SIMPLE, 84);
	apply_type(0x151c52c, "RTTIAttr[3]");
	set_name(0x151c52c, "WWiseStateEventResource::sAttrs");

	// WaterEffectComponent
	set_name(0x150eb3c, "WaterEffectComponent");
	apply_type(0x150eb3c, "RTTICompound");
	del_items(0x1511d6c, DELIT_SIMPLE, 8);
	apply_type(0x1511d6c, "RTTIBase[1]");
	set_name(0x1511d6c, "WaterEffectComponent::sBases");

	// WaterEffectComponentRep
	set_name(0x150eb90, "WaterEffectComponentRep");
	apply_type(0x150eb90, "RTTICompound");
	del_items(0x1511d78, DELIT_SIMPLE, 8);
	apply_type(0x1511d78, "RTTIBase[1]");
	set_name(0x1511d78, "WaterEffectComponentRep::sBases");

	// WaterEffectComponentResource
	set_name(0x150ebe4, "WaterEffectComponentResource");
	apply_type(0x150ebe4, "RTTICompound");
	del_items(0x1511d80, DELIT_SIMPLE, 8);
	apply_type(0x1511d80, "RTTIBase[1]");
	set_name(0x1511d80, "WaterEffectComponentResource::sBases");
	del_items(0x1511d88, DELIT_SIMPLE, 224);
	apply_type(0x1511d88, "RTTIAttr[8]");
	set_name(0x1511d88, "WaterEffectComponentResource::sAttrs");

	// WaterInstance
	set_name(0x14cdac0, "WaterInstance");
	apply_type(0x14cdac0, "RTTICompound");
	del_items(0x14cdc90, DELIT_SIMPLE, 8);
	apply_type(0x14cdc90, "RTTIBase[1]");
	set_name(0x14cdc90, "WaterInstance::sBases");
	del_items(0x14cdc98, DELIT_SIMPLE, 308);
	apply_type(0x14cdc98, "RTTIAttr[11]");
	set_name(0x14cdc98, "WaterInstance::sAttrs");
	del_items(0x14cddcc, DELIT_SIMPLE, 36);
	apply_type(0x14cddcc, "RTTIMessageHandler[3]");
	set_name(0x14cddcc, "WaterInstance::sMessageHandlers");

	// WaterProximityEffect
	set_name(0x150deb8, "WaterProximityEffect");
	apply_type(0x150deb8, "RTTICompound");
	del_items(0x1510408, DELIT_SIMPLE, 8);
	apply_type(0x1510408, "RTTIBase[1]");
	set_name(0x1510408, "WaterProximityEffect::sBases");

	// WaterProximityEffectResource
	set_name(0x150de64, "WaterProximityEffectResource");
	apply_type(0x150de64, "RTTICompound");
	del_items(0x150ffe8, DELIT_SIMPLE, 8);
	apply_type(0x150ffe8, "RTTIBase[1]");
	set_name(0x150ffe8, "WaterProximityEffectResource::sBases");
	del_items(0x150fff0, DELIT_SIMPLE, 112);
	apply_type(0x150fff0, "RTTIAttr[4]");
	set_name(0x150fff0, "WaterProximityEffectResource::sAttrs");

	// WaterResource
	set_name(0x14cda68, "WaterResource");
	apply_type(0x14cda68, "RTTICompound");
	del_items(0x14cdbfc, DELIT_SIMPLE, 8);
	apply_type(0x14cdbfc, "RTTIBase[1]");
	set_name(0x14cdbfc, "WaterResource::sBases");
	del_items(0x14cdc04, DELIT_SIMPLE, 140);
	apply_type(0x14cdc04, "RTTIAttr[5]");
	set_name(0x14cdc04, "WaterResource::sAttrs");

	// WaterSystemManager
	set_name(0x14cd9a0, "WaterSystemManager");
	apply_type(0x14cd9a0, "RTTICompound");
	del_items(0x14cde58, DELIT_SIMPLE, 8);
	apply_type(0x14cde58, "RTTIBase[1]");
	set_name(0x14cde58, "WaterSystemManager::sBases");
	del_items(0x14cde60, DELIT_SIMPLE, 12);
	apply_type(0x14cde60, "RTTIMessageHandler[1]");
	set_name(0x14cde60, "WaterSystemManager::sMessageHandlers");

	// WaterSystemResource
	set_name(0x14cda04, "WaterSystemResource");
	apply_type(0x14cda04, "RTTICompound");
	del_items(0x14cddf0, DELIT_SIMPLE, 8);
	apply_type(0x14cddf0, "RTTIBase[1]");
	set_name(0x14cddf0, "WaterSystemResource::sBases");
	del_items(0x14cddf8, DELIT_SIMPLE, 84);
	apply_type(0x14cddf8, "RTTIAttr[3]");
	set_name(0x14cddf8, "WaterSystemResource::sAttrs");
	del_items(0x14cde4c, DELIT_SIMPLE, 12);
	apply_type(0x14cde4c, "RTTIMessageHandler[1]");
	set_name(0x14cde4c, "WaterSystemResource::sMessageHandlers");

	// WeakResourceReference
	set_name(0x1540a98, "WeakResourceReference");
	apply_type(0x1540a98, "RTTICompound");
	del_items(0x1540eec, DELIT_SIMPLE, 8);
	apply_type(0x1540eec, "RTTIBase[1]");
	set_name(0x1540eec, "WeakResourceReference::sBases");
	del_items(0x1540ef4, DELIT_SIMPLE, 56);
	apply_type(0x1540ef4, "RTTIAttr[2]");
	set_name(0x1540ef4, "WeakResourceReference::sAttrs");

	// WeaponPickUp
	set_name(0x1518ea0, "WeaponPickUp");
	apply_type(0x1518ea0, "RTTICompound");
	del_items(0x151af9c, DELIT_SIMPLE, 8);
	apply_type(0x151af9c, "RTTIBase[1]");
	set_name(0x151af9c, "WeaponPickUp::sBases");

	// WeaponPickUpResource
	set_name(0x1518f68, "WeaponPickUpResource");
	apply_type(0x1518f68, "RTTICompound");
	del_items(0x151adcc, DELIT_SIMPLE, 8);
	apply_type(0x151adcc, "RTTIBase[1]");
	set_name(0x151adcc, "WeaponPickUpResource::sBases");
	del_items(0x151add4, DELIT_SIMPLE, 140);
	apply_type(0x151add4, "RTTIAttr[5]");
	set_name(0x151add4, "WeaponPickUpResource::sAttrs");

	// WeaponRack
	set_name(0x1528640, "WeaponRack");
	apply_type(0x1528640, "RTTICompound");
	del_items(0x1529154, DELIT_SIMPLE, 8);
	apply_type(0x1529154, "RTTIBase[1]");
	set_name(0x1529154, "WeaponRack::sBases");
	del_items(0x152915c, DELIT_SIMPLE, 168);
	apply_type(0x152915c, "RTTIAttr[6]");
	set_name(0x152915c, "WeaponRack::sAttrs");

	// WeaponRackItem
	set_name(0x15286b4, "WeaponRackItem");
	apply_type(0x15286b4, "RTTICompound");
	del_items(0x15290c8, DELIT_SIMPLE, 8);
	apply_type(0x15290c8, "RTTIBase[1]");
	set_name(0x15290c8, "WeaponRackItem::sBases");
	del_items(0x15290d0, DELIT_SIMPLE, 56);
	apply_type(0x15290d0, "RTTIAttr[2]");
	set_name(0x15290d0, "WeaponRackItem::sAttrs");

	// WeaponRackResource
	set_name(0x1528708, "WeaponRackResource");
	apply_type(0x1528708, "RTTICompound");
	del_items(0x1529114, DELIT_SIMPLE, 8);
	apply_type(0x1529114, "RTTIBase[1]");
	set_name(0x1529114, "WeaponRackResource::sBases");
	del_items(0x152911c, DELIT_SIMPLE, 56);
	apply_type(0x152911c, "RTTIAttr[2]");
	set_name(0x152911c, "WeaponRackResource::sAttrs");

	// WeaponScoreMultipliers
	set_name(0x14f05fc, "WeaponScoreMultipliers");
	apply_type(0x14f05fc, "RTTICompound");
	del_items(0x14f3fb0, DELIT_SIMPLE, 8);
	apply_type(0x14f3fb0, "RTTIBase[1]");
	set_name(0x14f3fb0, "WeaponScoreMultipliers::sBases");
	del_items(0x14f3fb8, DELIT_SIMPLE, 140);
	apply_type(0x14f3fb8, "RTTIAttr[5]");
	set_name(0x14f3fb8, "WeaponScoreMultipliers::sAttrs");

	// WeaponSwitchEventInstance
	set_name(0x151fc48, "WeaponSwitchEventInstance");
	apply_type(0x151fc48, "RTTICompound");
	del_items(0x1521430, DELIT_SIMPLE, 8);
	apply_type(0x1521430, "RTTIBase[1]");
	set_name(0x1521430, "WeaponSwitchEventInstance::sBases");

	// WeaponSwitchEventResource
	set_name(0x151fbf4, "WeaponSwitchEventResource");
	apply_type(0x151fbf4, "RTTICompound");
	del_items(0x152139c, DELIT_SIMPLE, 8);
	apply_type(0x152139c, "RTTIBase[1]");
	set_name(0x152139c, "WeaponSwitchEventResource::sBases");
	del_items(0x15213a4, DELIT_SIMPLE, 140);
	apply_type(0x15213a4, "RTTIAttr[5]");
	set_name(0x15213a4, "WeaponSwitchEventResource::sAttrs");

	// WheelInfo
	set_name(0x150bd38, "WheelInfo");
	apply_type(0x150bd38, "RTTICompound");
	del_items(0x150d6fc, DELIT_SIMPLE, 252);
	apply_type(0x150d6fc, "RTTIAttr[9]");
	set_name(0x150d6fc, "WheelInfo::sAttrs");

	// WheelLogic
	set_name(0x150bd9c, "WheelLogic");
	apply_type(0x150bd9c, "RTTICompound");
	del_items(0x150d7f8, DELIT_SIMPLE, 280);
	apply_type(0x150d7f8, "RTTIAttr[10]");
	set_name(0x150d7f8, "WheelLogic::sAttrs");

	// WheelMapping
	set_name(0x150b688, "WheelMapping");
	apply_type(0x150b688, "RTTICompound");
	del_items(0x150c318, DELIT_SIMPLE, 280);
	apply_type(0x150c318, "RTTIAttr[10]");
	set_name(0x150c318, "WheelMapping::sAttrs");

	// Widget
	set_name(0x14c0c24, "Widget");
	apply_type(0x14c0c24, "RTTICompound");
	del_items(0x14c2e60, DELIT_SIMPLE, 8);
	apply_type(0x14c2e60, "RTTIBase[1]");
	set_name(0x14c2e60, "Widget::sBases");

	// WidgetAnimationResource
	set_name(0x14c1670, "WidgetAnimationResource");
	apply_type(0x14c1670, "RTTICompound");
	del_items(0x14c2dcc, DELIT_SIMPLE, 8);
	apply_type(0x14c2dcc, "RTTIBase[1]");
	set_name(0x14c2dcc, "WidgetAnimationResource::sBases");
	del_items(0x14c2dd4, DELIT_SIMPLE, 140);
	apply_type(0x14c2dd4, "RTTIAttr[5]");
	set_name(0x14c2dd4, "WidgetAnimationResource::sAttrs");

	// WidgetAnimationSettings
	set_name(0x14c160c, "WidgetAnimationSettings");
	apply_type(0x14c160c, "RTTICompound");
	del_items(0x14c2d94, DELIT_SIMPLE, 56);
	apply_type(0x14c2d94, "RTTIAttr[2]");
	set_name(0x14c2d94, "WidgetAnimationSettings::sAttrs");

	// WidgetDecorationBracket
	set_name(0x14c1adc, "WidgetDecorationBracket");
	apply_type(0x14c1adc, "RTTICompound");
	del_items(0x14c21d8, DELIT_SIMPLE, 8);
	apply_type(0x14c21d8, "RTTIBase[1]");
	set_name(0x14c21d8, "WidgetDecorationBracket::sBases");
	del_items(0x14c21e0, DELIT_SIMPLE, 112);
	apply_type(0x14c21e0, "RTTIAttr[4]");
	set_name(0x14c21e0, "WidgetDecorationBracket::sAttrs");

	// WindBox
	set_name(0x14bd598, "WindBox");
	apply_type(0x14bd598, "RTTICompound");
	del_items(0x14be90c, DELIT_SIMPLE, 8);
	apply_type(0x14be90c, "RTTIBase[1]");
	set_name(0x14be90c, "WindBox::sBases");
	del_items(0x14be914, DELIT_SIMPLE, 392);
	apply_type(0x14be914, "RTTIAttr[14]");
	set_name(0x14be914, "WindBox::sAttrs");
	del_items(0x14bea9c, DELIT_SIMPLE, 24);
	apply_type(0x14bea9c, "RTTIMessageHandler[2]");
	set_name(0x14bea9c, "WindBox::sMessageHandlers");

	// WindGust
	set_name(0x14bd5ec, "WindGust");
	apply_type(0x14bd5ec, "RTTICompound");
	del_items(0x14be77c, DELIT_SIMPLE, 8);
	apply_type(0x14be77c, "RTTIBase[1]");
	set_name(0x14be77c, "WindGust::sBases");

	// WindGustResource
	set_name(0x14bd640, "WindGustResource");
	apply_type(0x14bd640, "RTTICompound");
	del_items(0x14be784, DELIT_SIMPLE, 8);
	apply_type(0x14be784, "RTTIBase[1]");
	set_name(0x14be784, "WindGustResource::sBases");
	del_items(0x14be78c, DELIT_SIMPLE, 364);
	apply_type(0x14be78c, "RTTIAttr[13]");
	set_name(0x14be78c, "WindGustResource::sAttrs");
	del_items(0x14be8f8, DELIT_SIMPLE, 12);
	apply_type(0x14be8f8, "RTTIMessageHandler[1]");
	set_name(0x14be8f8, "WindGustResource::sMessageHandlers");

	// WindManager
	set_name(0x14bd694, "WindManager");
	apply_type(0x14bd694, "RTTICompound");
	del_items(0x14be904, DELIT_SIMPLE, 8);
	apply_type(0x14be904, "RTTIBase[1]");
	set_name(0x14be904, "WindManager::sBases");

	// WipeCompletionRegion
	set_name(0x154af4c, "WipeCompletionRegion");
	apply_type(0x154af4c, "RTTICompound");
	del_items(0x154b0ac, DELIT_SIMPLE, 8);
	apply_type(0x154b0ac, "RTTIBase[1]");
	set_name(0x154b0ac, "WipeCompletionRegion::sBases");
	del_items(0x154b0b4, DELIT_SIMPLE, 112);
	apply_type(0x154b0b4, "RTTIAttr[4]");
	set_name(0x154b0b4, "WipeCompletionRegion::sAttrs");

	// WipeEnableAction
	set_name(0x1541ac0, "WipeEnableAction");
	apply_type(0x1541ac0, "RTTICompound");
	del_items(0x1543468, DELIT_SIMPLE, 8);
	apply_type(0x1543468, "RTTIBase[1]");
	set_name(0x1543468, "WipeEnableAction::sBases");
	del_items(0x1543470, DELIT_SIMPLE, 56);
	apply_type(0x1543470, "RTTIAttr[2]");
	set_name(0x1543470, "WipeEnableAction::sAttrs");

	// WipeEntity
	set_name(0x154ae84, "WipeEntity");
	apply_type(0x154ae84, "RTTICompound");
	del_items(0x154b250, DELIT_SIMPLE, 8);
	apply_type(0x154b250, "RTTIBase[1]");
	set_name(0x154b250, "WipeEntity::sBases");
	del_items(0x154b258, DELIT_SIMPLE, 96);
	apply_type(0x154b258, "RTTIFunction[4]");
	set_name(0x154b258, "WipeEntity::sFunctions");

	// WipeEntityResource
	set_name(0x154aed8, "WipeEntityResource");
	apply_type(0x154aed8, "RTTICompound");
	del_items(0x154b130, DELIT_SIMPLE, 8);
	apply_type(0x154b130, "RTTIBase[1]");
	set_name(0x154b130, "WipeEntityResource::sBases");
	del_items(0x154b138, DELIT_SIMPLE, 280);
	apply_type(0x154b138, "RTTIAttr[10]");
	set_name(0x154b138, "WipeEntityResource::sAttrs");

	// WorldNode
	set_name(0x14e1918, "WorldNode");
	apply_type(0x14e1918, "RTTICompound");
	del_items(0x14e196c, DELIT_SIMPLE, 8);
	apply_type(0x14e196c, "RTTIBase[1]");
	set_name(0x14e196c, "WorldNode::sBases");
	del_items(0x14e1974, DELIT_SIMPLE, 56);
	apply_type(0x14e1974, "RTTIAttr[2]");
	set_name(0x14e1974, "WorldNode::sAttrs");
	del_items(0x14e19ac, DELIT_SIMPLE, 48);
	apply_type(0x14e19ac, "RTTIFunction[2]");
	set_name(0x14e19ac, "WorldNode::sFunctions");

	// Zone
	set_name(0x14ce024, "Zone");
	apply_type(0x14ce024, "RTTICompound");
	del_items(0x14ce164, DELIT_SIMPLE, 8);
	apply_type(0x14ce164, "RTTIBase[1]");
	set_name(0x14ce164, "Zone::sBases");
	del_items(0x14ce16c, DELIT_SIMPLE, 224);
	apply_type(0x14ce16c, "RTTIAttr[8]");
	set_name(0x14ce16c, "Zone::sAttrs");
	del_items(0x14ce24c, DELIT_SIMPLE, 12);
	apply_type(0x14ce24c, "RTTIMessageHandler[1]");
	set_name(0x14ce24c, "Zone::sMessageHandlers");

	// ZoneVisibilityInfo
	set_name(0x14ce07c, "ZoneVisibilityInfo");
	apply_type(0x14ce07c, "RTTICompound");
	del_items(0x14ce340, DELIT_SIMPLE, 8);
	apply_type(0x14ce340, "RTTIBase[1]");
	set_name(0x14ce340, "ZoneVisibilityInfo::sBases");
	del_items(0x14ce348, DELIT_SIMPLE, 56);
	apply_type(0x14ce348, "RTTIAttr[2]");
	set_name(0x14ce348, "ZoneVisibilityInfo::sAttrs");
	del_items(0x14ce380, DELIT_SIMPLE, 24);
	apply_type(0x14ce380, "RTTIMessageHandler[2]");
	set_name(0x14ce380, "ZoneVisibilityInfo::sMessageHandlers");

	// ZoomSetting
	set_name(0x1528888, "ZoomSetting");
	apply_type(0x1528888, "RTTICompound");
	del_items(0x152960c, DELIT_SIMPLE, 8);
	apply_type(0x152960c, "RTTIBase[1]");
	set_name(0x152960c, "ZoomSetting::sBases");
	del_items(0x1529614, DELIT_SIMPLE, 1288);
	apply_type(0x1529614, "RTTIAttr[46]");
	set_name(0x1529614, "ZoomSetting::sAttrs");
	del_items(0x1529b1c, DELIT_SIMPLE, 12);
	apply_type(0x1529b1c, "RTTIMessageHandler[1]");
	set_name(0x1529b1c, "ZoomSetting::sMessageHandlers");

	// AIWaypointType
	set_name(0x14d7210, "AIWaypointType");
	apply_type(0x14d7210, "RTTIEnum");

	// CharacterBodyType
	set_name(0x1547b60, "CharacterBodyType");
	apply_type(0x1547b60, "RTTIEnum");

	// ControllerConfigs
	set_name(0x14eae0c, "ControllerConfigs");
	apply_type(0x14eae0c, "RTTIEnum");

	// EAICover
	set_name(0x14d7220, "EAICover");
	apply_type(0x14d7220, "RTTIEnum");

	// EAIDangerAreaType
	set_name(0x14cedb8, "EAIDangerAreaType");
	apply_type(0x14cedb8, "RTTIEnum");

	// EAlphaDepth
	set_name(0x14b43b8, "EAlphaDepth");
	apply_type(0x14b43b8, "RTTIEnum");

	// EAnimationDirection
	set_name(0x14e8d70, "EAnimationDirection");
	apply_type(0x14e8d70, "RTTIEnum");

	// EAnimationExpressions
	set_name(0x153a92c, "EAnimationExpressions");
	apply_type(0x153a92c, "RTTIEnum");

	// EAnimationPoseMatchingReactionType
	set_name(0x14e8e48, "EAnimationPoseMatchingReactionType");
	apply_type(0x14e8e48, "RTTIEnum");

	// EAxis
	set_name(0x14ea980, "EAxis");
	apply_type(0x14ea980, "RTTIEnum");

	// EAxisFunction
	set_name(0x14ea9b0, "EAxisFunction");
	apply_type(0x14ea9b0, "RTTIEnum");

	// EAxisType
	set_name(0x14c4974, "EAxisType");
	apply_type(0x14c4974, "RTTIEnum");

	// EBlendPause
	set_name(0x14ba2c4, "EBlendPause");
	apply_type(0x14ba2c4, "RTTIEnum");

	// EBlendType
	set_name(0x14ba2d4, "EBlendType");
	apply_type(0x14ba2d4, "RTTIEnum");

	// EBodyResourceFlags
	set_name(0x14d2e24, "EBodyResourceFlags");
	apply_type(0x14d2e24, "RTTIEnum");

	// EButton
	set_name(0x14ea970, "EButton");
	apply_type(0x14ea970, "RTTIEnum");

	// ECareer
	set_name(0x153e874, "ECareer");
	apply_type(0x153e874, "RTTIEnum");

	// ECarryModes
	set_name(0x14fae5c, "ECarryModes");
	apply_type(0x14fae5c, "RTTIEnum");

	// ECharacterFacialExpression
	set_name(0x1547d68, "ECharacterFacialExpression");
	apply_type(0x1547d68, "RTTIEnum");

	// ECloseCombatEnvironmentDirection
	set_name(0x150f260, "ECloseCombatEnvironmentDirection");
	apply_type(0x150f260, "RTTIEnum");

	// ECloseCombatEnvironmentType
	set_name(0x150f250, "ECloseCombatEnvironmentType");
	apply_type(0x150f250, "RTTIEnum");

	// ECloseCombatVariation
	set_name(0x14fae8c, "ECloseCombatVariation");
	apply_type(0x14fae8c, "RTTIEnum");

	// EColorizeBlendMode
	set_name(0x14cbac0, "EColorizeBlendMode");
	apply_type(0x14cbac0, "RTTIEnum");

	// EComparator
	set_name(0x14f0250, "EComparator");
	apply_type(0x14f0250, "RTTIEnum");

	// EComparisonType
	set_name(0x14eb054, "EComparisonType");
	apply_type(0x14eb054, "RTTIEnum");

	// EConnectionFlags
	set_name(0x14f0124, "EConnectionFlags");
	apply_type(0x14f0124, "RTTIEnum");

	// EControlType
	set_name(0x1502ca4, "EControlType");
	apply_type(0x1502ca4, "RTTIEnum");

	// ECoverHeight
	set_name(0x14e2224, "ECoverHeight");
	apply_type(0x14e2224, "RTTIEnum");

	// ECrashMoverTargeting
	set_name(0x14fbc24, "ECrashMoverTargeting");
	apply_type(0x14fbc24, "RTTIEnum");

	// ECrosshairPartType
	set_name(0x1531020, "ECrosshairPartType");
	apply_type(0x1531020, "RTTIEnum");

	// ECull
	set_name(0x14b43a8, "ECull");
	apply_type(0x14b43a8, "RTTIEnum");

	// EDecalAlignment
	set_name(0x14bcf2c, "EDecalAlignment");
	apply_type(0x14bcf2c, "RTTIEnum");

	// EDecalProjectionMode
	set_name(0x14bcf3c, "EDecalProjectionMode");
	apply_type(0x14bcf3c, "RTTIEnum");

	// EDevelopmentStatus
	set_name(0x14ad95c, "EDevelopmentStatus");
	apply_type(0x14ad95c, "RTTIEnum");

	// EDeviceFunction
	set_name(0x14ea9a0, "EDeviceFunction");
	apply_type(0x14ea9a0, "RTTIEnum");

	// EDifficulty
	set_name(0x14ea718, "EDifficulty");
	apply_type(0x14ea718, "RTTIEnum");

	// EDrawPartType
	set_name(0x14cc0b0, "EDrawPartType");
	apply_type(0x14cc0b0, "RTTIEnum");

	// EEmitterForce
	set_name(0x14c42c8, "EEmitterForce");
	apply_type(0x14c42c8, "RTTIEnum");

	// EEmitterShape
	set_name(0x14c42e8, "EEmitterShape");
	apply_type(0x14c42e8, "RTTIEnum");

	// EEntityStreamingBehavior
	set_name(0x14e2344, "EEntityStreamingBehavior");
	apply_type(0x14e2344, "RTTIEnum");

	// EFacialExpression
	set_name(0x1502cb4, "EFacialExpression");
	apply_type(0x1502cb4, "RTTIEnum");

	// EFaction
	set_name(0x14eaf28, "EFaction");
	apply_type(0x14eaf28, "RTTIEnum");

	// EFalloffType
	set_name(0x14c88a0, "EFalloffType");
	apply_type(0x14c88a0, "RTTIEnum");

	// EFilter
	set_name(0x14b4388, "EFilter");
	apply_type(0x14b4388, "RTTIEnum");

	// EFloating
	set_name(0x14c18a8, "EFloating");
	apply_type(0x14c18a8, "RTTIEnum");

	// EFunctionHoldType
	set_name(0x14eb064, "EFunctionHoldType");
	apply_type(0x14eb064, "RTTIEnum");

	// EGameMode
	set_name(0x14eaf38, "EGameMode");
	apply_type(0x14eaf38, "RTTIEnum");

	// EGestureBodyParts
	set_name(0x1520d0c, "EGestureBodyParts");
	apply_type(0x1520d0c, "RTTIEnum");

	// EGestureDirection
	set_name(0x14cf810, "EGestureDirection");
	apply_type(0x14cf810, "RTTIEnum");

	// EGestureType
	set_name(0x14eb044, "EGestureType");
	apply_type(0x14eb044, "RTTIEnum");

	// EHUDSnap
	set_name(0x1530a70, "EHUDSnap");
	apply_type(0x1530a70, "RTTIEnum");

	// EHUDUnits
	set_name(0x1530a80, "EHUDUnits");
	apply_type(0x1530a80, "RTTIEnum");

	// EHealthBarFormat
	set_name(0x1531460, "EHealthBarFormat");
	apply_type(0x1531460, "RTTIEnum");

	// EHomeBaseVisibility
	set_name(0x1528e5c, "EHomeBaseVisibility");
	apply_type(0x1528e5c, "RTTIEnum");

	// EHumanoidHitDirection
	set_name(0x14faeec, "EHumanoidHitDirection");
	apply_type(0x14faeec, "RTTIEnum");

	// EHumanoidHitLocation
	set_name(0x14faecc, "EHumanoidHitLocation");
	apply_type(0x14faecc, "RTTIEnum");

	// EHumanoidHitResponseType
	set_name(0x14faefc, "EHumanoidHitResponseType");
	apply_type(0x14faefc, "RTTIEnum");

	// EHumanoidRunningState
	set_name(0x14faeac, "EHumanoidRunningState");
	apply_type(0x14faeac, "RTTIEnum");

	// EIconType
	set_name(0x1530944, "EIconType");
	apply_type(0x1530944, "RTTIEnum");

	// EInitialDoorState
	set_name(0x1502d18, "EInitialDoorState");
	apply_type(0x1502d18, "RTTIEnum");

	// EInventoryAmmoStackType
	set_name(0x1534260, "EInventoryAmmoStackType");
	apply_type(0x1534260, "RTTIEnum");

	// EInventoryGroup
	set_name(0x1513960, "EInventoryGroup");
	apply_type(0x1513960, "RTTIEnum");

	// EItemFaction
	set_name(0x1513950, "EItemFaction");
	apply_type(0x1513950, "RTTIEnum");

	// ELayerOperation
	set_name(0x14b4398, "ELayerOperation");
	apply_type(0x14b4398, "RTTIEnum");

	// ELeanAndPeekAction
	set_name(0x14fae7c, "ELeanAndPeekAction");
	apply_type(0x14fae7c, "RTTIEnum");

	// ELeanAndPeekDirection
	set_name(0x14fae6c, "ELeanAndPeekDirection");
	apply_type(0x14fae6c, "RTTIEnum");

	// ELegendButton
	set_name(0x14c06d4, "ELegendButton");
	apply_type(0x14c06d4, "RTTIEnum");

	// ELightInfluenceAccuracy
	set_name(0x14c8890, "ELightInfluenceAccuracy");
	apply_type(0x14c8890, "RTTIEnum");

	// ELightSourceAction
	set_name(0x155005c, "ELightSourceAction");
	apply_type(0x155005c, "RTTIEnum");

	// ELitFlags
	set_name(0x14c8880, "ELitFlags");
	apply_type(0x14c8880, "RTTIEnum");

	// ELocationType
	set_name(0x14e1158, "ELocationType");
	apply_type(0x14e1158, "RTTIEnum");

	// ELookAtLocation
	set_name(0x154eb18, "ELookAtLocation");
	apply_type(0x154eb18, "RTTIEnum");

	// ELookDirection
	set_name(0x14cf820, "ELookDirection");
	apply_type(0x14cf820, "RTTIEnum");

	// ELoopMode
	set_name(0x14ba2b4, "ELoopMode");
	apply_type(0x14ba2b4, "RTTIEnum");

	// EMCCrosshairLimit
	set_name(0x153adf0, "EMCCrosshairLimit");
	apply_type(0x153adf0, "RTTIEnum");

	// EMCDeadzoneShape
	set_name(0x153ade0, "EMCDeadzoneShape");
	apply_type(0x153ade0, "RTTIEnum");

	// EMCDeadzoneType
	set_name(0x153ae00, "EMCDeadzoneType");
	apply_type(0x153ae00, "RTTIEnum");

	// EMapIconID
	set_name(0x1530688, "EMapIconID");
	apply_type(0x1530688, "RTTIEnum");

	// EMapIconLevelIndication
	set_name(0x1530698, "EMapIconLevelIndication");
	apply_type(0x1530698, "RTTIEnum");

	// EMaterialDebugType
	set_name(0x14bd284, "EMaterialDebugType");
	apply_type(0x14bd284, "RTTIEnum");

	// EMeshEmitterSpawnOrder
	set_name(0x14c4308, "EMeshEmitterSpawnOrder");
	apply_type(0x14c4308, "RTTIEnum");

	// EMineMode
	set_name(0x1525efc, "EMineMode");
	apply_type(0x1525efc, "RTTIEnum");

	// EMissionType
	set_name(0x14fb510, "EMissionType");
	apply_type(0x14fb510, "RTTIEnum");

	// EMotionFunction
	set_name(0x14ea9c0, "EMotionFunction");
	apply_type(0x14ea9c0, "RTTIEnum");

	// EMotionSensor
	set_name(0x14ea990, "EMotionSensor");
	apply_type(0x14ea990, "RTTIEnum");

	// EMountDismountLocation
	set_name(0x1504cf4, "EMountDismountLocation");
	apply_type(0x1504cf4, "RTTIEnum");

	// EMoveAttackChoice
	set_name(0x14cfba4, "EMoveAttackChoice");
	apply_type(0x14cfba4, "RTTIEnum");

	// EMovePathChoice
	set_name(0x14cfb54, "EMovePathChoice");
	apply_type(0x14cfb54, "RTTIEnum");

	// EMovePostureChoice
	set_name(0x14cfb84, "EMovePostureChoice");
	apply_type(0x14cfb84, "RTTIEnum");

	// EMoveReloadChoice
	set_name(0x14cfb94, "EMoveReloadChoice");
	apply_type(0x14cfb94, "RTTIEnum");

	// EMoveScanChoice
	set_name(0x14cfb74, "EMoveScanChoice");
	apply_type(0x14cfb74, "RTTIEnum");

	// EMovieListType
	set_name(0x14efb28, "EMovieListType");
	apply_type(0x14efb28, "RTTIEnum");

	// ENoProjectileTraceType
	set_name(0x151a060, "ENoProjectileTraceType");
	apply_type(0x151a060, "RTTIEnum");

	// EOSDEventID
	set_name(0x15014d4, "EOSDEventID");
	apply_type(0x15014d4, "RTTIEnum");

	// EObstacleAvoidanceGroup
	set_name(0x14d699c, "EObstacleAvoidanceGroup");
	apply_type(0x14d699c, "RTTIEnum");

	// EOperator
	set_name(0x153e96c, "EOperator");
	apply_type(0x153e96c, "RTTIEnum");

	// EPBDConstraintDescType
	set_name(0x14bd2e8, "EPBDConstraintDescType");
	apply_type(0x14bd2e8, "RTTIEnum");

	// EPartMotionType
	set_name(0x14e7c70, "EPartMotionType");
	apply_type(0x14e7c70, "RTTIEnum");

	// EParticleEmitRateUnits
	set_name(0x14c4934, "EParticleEmitRateUnits");
	apply_type(0x14c4934, "RTTIEnum");

	// EParticleFadeMode
	set_name(0x14c4954, "EParticleFadeMode");
	apply_type(0x14c4954, "RTTIEnum");

	// EParticleShape
	set_name(0x14c4994, "EParticleShape");
	apply_type(0x14c4994, "RTTIEnum");

	// EParticleSystemUpdateMode
	set_name(0x14c49f4, "EParticleSystemUpdateMode");
	apply_type(0x14c49f4, "RTTIEnum");

	// EParticleVertexAttributeSource
	set_name(0x14c49d4, "EParticleVertexAttributeSource");
	apply_type(0x14c49d4, "RTTIEnum");

	// EPathLOFBlockMode
	set_name(0x14cfb64, "EPathLOFBlockMode");
	apply_type(0x14cfb64, "RTTIEnum");

	// EPathMode
	set_name(0x14ba81c, "EPathMode");
	apply_type(0x14ba81c, "RTTIEnum");

	// EPhysicsMotionType
	set_name(0x14c65b0, "EPhysicsMotionType");
	apply_type(0x14c65b0, "RTTIEnum");

	// EPhysicsQualityType
	set_name(0x14c63fc, "EPhysicsQualityType");
	apply_type(0x14c63fc, "RTTIEnum");

	// EPhysicsRagdollConstraintSpace
	set_name(0x14c7df8, "EPhysicsRagdollConstraintSpace");
	apply_type(0x14c7df8, "RTTIEnum");

	// EPhysicsShapeType
	set_name(0x14c6678, "EPhysicsShapeType");
	apply_type(0x14c6678, "RTTIEnum");

	// EPickUpableBy
	set_name(0x1518c34, "EPickUpableBy");
	apply_type(0x1518c34, "RTTIEnum");

	// EPixelFormat
	set_name(0x14ae594, "EPixelFormat");
	apply_type(0x14ae594, "RTTIEnum");

	// EPlaceHolderAttrType
	set_name(0x14e1fac, "EPlaceHolderAttrType");
	apply_type(0x14e1fac, "RTTIEnum");

	// EPlayerScoreEntityStat
	set_name(0x14f03f8, "EPlayerScoreEntityStat");
	apply_type(0x14f03f8, "RTTIEnum");

	// EPlayerScoreStat
	set_name(0x14f03e8, "EPlayerScoreStat");
	apply_type(0x14f03e8, "RTTIEnum");

	// EPositionAimMode
	set_name(0x14ead44, "EPositionAimMode");
	apply_type(0x14ead44, "RTTIEnum");

	// EPostProcessBlendMode
	set_name(0x14c9434, "EPostProcessBlendMode");
	apply_type(0x14c9434, "RTTIEnum");

	// EPrimitiveSkinInfoType
	set_name(0x14da8d4, "EPrimitiveSkinInfoType");
	apply_type(0x14da8d4, "RTTIEnum");

	// EProjColorOperation
	set_name(0x14bd4cc, "EProjColorOperation");
	apply_type(0x14bd4cc, "RTTIEnum");

	// ERegion
	set_name(0x14b8fbc, "ERegion");
	apply_type(0x14b8fbc, "RTTIEnum");

	// ERelativeUseLocationPosition
	set_name(0x1504d68, "ERelativeUseLocationPosition");
	apply_type(0x1504d68, "RTTIEnum");

	// ERenderEffectType
	set_name(0x14c90ac, "ERenderEffectType");
	apply_type(0x14c90ac, "RTTIEnum");

	// ERenderTechniqueType
	set_name(0x14c9424, "ERenderTechniqueType");
	apply_type(0x14c9424, "RTTIEnum");

	// ESelfDamage
	set_name(0x14ef614, "ESelfDamage");
	apply_type(0x14ef614, "RTTIEnum");

	// ESelfShadowMode
	set_name(0x14c49b4, "ESelfShadowMode");
	apply_type(0x14c49b4, "RTTIEnum");

	// ESentenceGroupType
	set_name(0x154096c, "ESentenceGroupType");
	apply_type(0x154096c, "RTTIEnum");

	// EShaderVariableType
	set_name(0x14c86b0, "EShaderVariableType");
	apply_type(0x14c86b0, "RTTIEnum");

	// EShadowCastMode
	set_name(0x14cc0a0, "EShadowCastMode");
	apply_type(0x14cc0a0, "RTTIEnum");

	// EShadowCull
	set_name(0x14cc090, "EShadowCull");
	apply_type(0x14cc090, "RTTIEnum");

	// ESkillContext
	set_name(0x14d2e14, "ESkillContext");
	apply_type(0x14d2e14, "RTTIEnum");

	// ESkipLocationType
	set_name(0x14efb18, "ESkipLocationType");
	apply_type(0x14efb18, "RTTIEnum");

	// ESortMode
	set_name(0x14cc080, "ESortMode");
	apply_type(0x14cc080, "RTTIEnum");

	// ESortOrder
	set_name(0x14cc070, "ESortOrder");
	apply_type(0x14cc070, "RTTIEnum");

	// ESoundAttenuationType
	set_name(0x14dd43c, "ESoundAttenuationType");
	apply_type(0x14dd43c, "RTTIEnum");

	// ESoundFileFormat
	set_name(0x14dd920, "ESoundFileFormat");
	apply_type(0x14dd920, "RTTIEnum");

	// ESoundFilterMode
	set_name(0x14ddcfc, "ESoundFilterMode");
	apply_type(0x14ddcfc, "RTTIEnum");

	// ESoundMasterVolumeGroup
	set_name(0x14dd47c, "ESoundMasterVolumeGroup");
	apply_type(0x14dd47c, "RTTIEnum");

	// ESoundReverbMode
	set_name(0x14dd0e8, "ESoundReverbMode");
	apply_type(0x14dd0e8, "RTTIEnum");

	// ESoundSubmixBus
	set_name(0x14ddd1c, "ESoundSubmixBus");
	apply_type(0x14ddd1c, "RTTIEnum");

	// ESoundZoneShapeType
	set_name(0x14dc9d8, "ESoundZoneShapeType");
	apply_type(0x14dc9d8, "RTTIEnum");

	// ESpearPickupCondition
	set_name(0x1526370, "ESpearPickupCondition");
	apply_type(0x1526370, "RTTIEnum");

	// EStacking
	set_name(0x14c18b8, "EStacking");
	apply_type(0x14c18b8, "RTTIEnum");

	// EStance
	set_name(0x14fae4c, "EStance");
	apply_type(0x14fae4c, "RTTIEnum");

	// EStatType
	set_name(0x153e97c, "EStatType");
	apply_type(0x153e97c, "RTTIEnum");

	// EStateSwitchType
	set_name(0x14b9954, "EStateSwitchType");
	apply_type(0x14b9954, "RTTIEnum");

	// ESteeringType
	set_name(0x14c66ec, "ESteeringType");
	apply_type(0x14c66ec, "RTTIEnum");

	// EStencilSkin
	set_name(0x14cc0d0, "EStencilSkin");
	apply_type(0x14cc0d0, "RTTIEnum");

	// EStreamingAction
	set_name(0x14e0bf0, "EStreamingAction");
	apply_type(0x14e0bf0, "RTTIEnum");

	// ESunMSAAQuality
	set_name(0x14c8c48, "ESunMSAAQuality");
	apply_type(0x14c8c48, "RTTIEnum");

	// ESwayChange
	set_name(0x1522234, "ESwayChange");
	apply_type(0x1522234, "RTTIEnum");

	// ETargetArrowPosition
	set_name(0x15352e8, "ETargetArrowPosition");
	apply_type(0x15352e8, "RTTIEnum");

	// ETargetArrowType
	set_name(0x14eff3c, "ETargetArrowType");
	apply_type(0x14eff3c, "RTTIEnum");

	// ETextAlignment
	set_name(0x14fad84, "ETextAlignment");
	apply_type(0x14fad84, "RTTIEnum");

	// ETextHAlignment
	set_name(0x14c1888, "ETextHAlignment");
	apply_type(0x14c1888, "RTTIEnum");

	// ETextOrientation
	set_name(0x14c18e8, "ETextOrientation");
	apply_type(0x14c18e8, "RTTIEnum");

	// ETextOverflow
	set_name(0x14c18d8, "ETextOverflow");
	apply_type(0x14c18d8, "RTTIEnum");

	// ETextTransform
	set_name(0x14c1908, "ETextTransform");
	apply_type(0x14c1908, "RTTIEnum");

	// ETextWhiteSpace
	set_name(0x14c18c8, "ETextWhiteSpace");
	apply_type(0x14c18c8, "RTTIEnum");

	// ETextureRepeat
	set_name(0x14c18f8, "ETextureRepeat");
	apply_type(0x14c18f8, "RTTIEnum");

	// ETrajectorySolveMethod
	set_name(0x1525c70, "ETrajectorySolveMethod");
	apply_type(0x1525c70, "RTTIEnum");

	// ETriState
	set_name(0x14ead54, "ETriState");
	apply_type(0x14ead54, "RTTIEnum");

	// EUseLocationType
	set_name(0x14effa0, "EUseLocationType");
	apply_type(0x14effa0, "RTTIEnum");

	// EVerticalAlignment
	set_name(0x14c1898, "EVerticalAlignment");
	apply_type(0x14c1898, "RTTIEnum");

	// EViewLayer
	set_name(0x14cc0c0, "EViewLayer");
	apply_type(0x14cc0c0, "RTTIEnum");

	// EViewLayerOverride
	set_name(0x14e23b8, "EViewLayerOverride");
	apply_type(0x14e23b8, "RTTIEnum");

	// EWWiseSoundZoneEffectMode
	set_name(0x14de6c0, "EWWiseSoundZoneEffectMode");
	apply_type(0x14de6c0, "RTTIEnum");

	// EWWiseSoundZoneListenerDistance
	set_name(0x14de6a0, "EWWiseSoundZoneListenerDistance");
	apply_type(0x14de6a0, "RTTIEnum");

	// EWWiseSoundZoneShape
	set_name(0x14de680, "EWWiseSoundZoneShape");
	apply_type(0x14de680, "RTTIEnum");

	// EWWiseSoundZoneTriggerMode
	set_name(0x14de660, "EWWiseSoundZoneTriggerMode");
	apply_type(0x14de660, "RTTIEnum");

	// EWeaponFunction
	set_name(0x1540aec, "EWeaponFunction");
	apply_type(0x1540aec, "RTTIEnum");

	// EWidgetAnimationTrigger
	set_name(0x14c1660, "EWidgetAnimationTrigger");
	apply_type(0x14c1660, "RTTIEnum");

	// EWidgetLayer
	set_name(0x14c1918, "EWidgetLayer");
	apply_type(0x14c1918, "RTTIEnum");

	// LinkTypeGroup
	set_name(0x14d6870, "LinkTypeGroup");
	apply_type(0x14d6870, "RTTIEnum");

	// eCharacterBodyResourceFlags
	set_name(0x15457e0, "eCharacterBodyResourceFlags");
	apply_type(0x15457e0, "RTTIEnum");

	// eClueID
	set_name(0x1542540, "eClueID");
	apply_type(0x1542540, "RTTIEnum");

	// eClueLineID
	set_name(0x1542390, "eClueLineID");
	apply_type(0x1542390, "RTTIEnum");

	// eCluePageID
	set_name(0x1542468, "eCluePageID");
	apply_type(0x1542468, "RTTIEnum");

	// eClueRevelationID
	set_name(0x1542618, "eClueRevelationID");
	apply_type(0x1542618, "RTTIEnum");

	// eSMGGestureType
	set_name(0x1541e9c, "eSMGGestureType");
	apply_type(0x1541e9c, "RTTIEnum");

	// CommandLine
	set_name(0x14b9544, "CommandLine");
	apply_type(0x14b9544, "RTTIAtom");

	// Filename
	set_name(0x14b9500, "Filename");
	apply_type(0x14b9500, "RTTIAtom");

	// HalfFloat
	set_name(0x14b7ce8, "HalfFloat");
	apply_type(0x14b7ce8, "RTTIAtom");

	// MaterialType
	set_name(0x14bc43c, "MaterialType");
	apply_type(0x14bc43c, "RTTIAtom");

	// PhysicsCollisionFilterInfo
	set_name(0x14c85e8, "PhysicsCollisionFilterInfo");
	apply_type(0x14c85e8, "RTTIAtom");

	// RenderDataPriority
	set_name(0x14b4480, "RenderDataPriority");
	apply_type(0x14b4480, "RTTIAtom");

	// SScalar
	set_name(0x14b87fc, "SScalar");
	apply_type(0x14b87fc, "RTTIAtom");

	// String
	set_name(0x14b94bc, "String");
	apply_type(0x14b94bc, "RTTIAtom");

	// WString
	set_name(0x14b9578, "WString");
	apply_type(0x14b9578, "RTTIAtom");

	// bool
	set_name(0x14b912c, "bool");
	apply_type(0x14b912c, "RTTIAtom");

	// double
	set_name(0x14b9488, "double");
	apply_type(0x14b9488, "RTTIAtom");

	// float
	set_name(0x14b9444, "float");
	apply_type(0x14b9444, "RTTIAtom");

	// int
	set_name(0x14b9194, "int");
	apply_type(0x14b9194, "RTTIAtom");

	// int128
	set_name(0x14b93dc, "int128");
	apply_type(0x14b93dc, "RTTIAtom");

	// int16
	set_name(0x14b9284, "int16");
	apply_type(0x14b9284, "RTTIAtom");

	// int32
	set_name(0x14b930c, "int32");
	apply_type(0x14b930c, "RTTIAtom");

	// int64
	set_name(0x14b9374, "int64");
	apply_type(0x14b9374, "RTTIAtom");

	// int8
	set_name(0x14b920c, "int8");
	apply_type(0x14b920c, "RTTIAtom");

	// uint
	set_name(0x14b91d8, "uint");
	apply_type(0x14b91d8, "RTTIAtom");

	// uint128
	set_name(0x14b9410, "uint128");
	apply_type(0x14b9410, "RTTIAtom");

	// uint16
	set_name(0x14b92c8, "uint16");
	apply_type(0x14b92c8, "RTTIAtom");

	// uint32
	set_name(0x14b9340, "uint32");
	apply_type(0x14b9340, "RTTIAtom");

	// uint64
	set_name(0x14b93a8, "uint64");
	apply_type(0x14b93a8, "RTTIAtom");

	// uint8
	set_name(0x14b9240, "uint8");
	apply_type(0x14b9240, "RTTIAtom");

	// wchar
	set_name(0x14b9160, "wchar");
	apply_type(0x14b9160, "RTTIAtom");

	// Ref<AIAnimationBehaviour>
	set_name(0x1544588, "Ref_AIAnimationBehaviour");
	apply_type(0x1544588, "RTTIPointer");

	// Ref<AIArea>
	set_name(0x14d6354, "Ref_AIArea");
	apply_type(0x14d6354, "RTTIPointer");

	// Ref<AIAreaGraph>
	set_name(0x14d642c, "Ref_AIAreaGraph");
	apply_type(0x14d642c, "RTTIPointer");

	// Ref<AIAtmosphereBoxResource>
	set_name(0x14ceb84, "Ref_AIAtmosphereBoxResource");
	apply_type(0x14ceb84, "RTTIPointer");

	// Ref<AIBehaviour>
	set_name(0x154445c, "Ref_AIBehaviour");
	apply_type(0x154445c, "RTTIPointer");

	// Ref<AIBrainDataResource>
	set_name(0x15442dc, "Ref_AIBrainDataResource");
	apply_type(0x15442dc, "RTTIPointer");

	// Ref<AIBrainFragmentResource>
	set_name(0x1544394, "Ref_AIBrainFragmentResource");
	apply_type(0x1544394, "RTTIPointer");

	// Ref<AICommunicationBehaviour>
	set_name(0x15446b4, "Ref_AICommunicationBehaviour");
	apply_type(0x15446b4, "RTTIPointer");

	// Ref<AIContextResource>
	set_name(0x14cfae0, "Ref_AIContextResource");
	apply_type(0x14cfae0, "RTTIPointer");

	// Ref<AICoverManager>
	set_name(0x14d7230, "Ref_AICoverManager");
	apply_type(0x14d7230, "RTTIPointer");

	// Ref<AIFaction>
	set_name(0x14cf088, "Ref_AIFaction");
	apply_type(0x14cf088, "RTTIPointer");

	// Ref<AIFleeDangerAreaPositionPickerResource>
	set_name(0x14d6c28, "Ref_AIFleeDangerAreaPositionPickerResource");
	apply_type(0x14d6c28, "RTTIPointer");

	// Ref<AIHTNPlannerResource>
	set_name(0x14d3f14, "Ref_AIHTNPlannerResource");
	apply_type(0x14d3f14, "RTTIPointer");

	// Ref<AIIdleBehaviour>
	set_name(0x1544650, "Ref_AIIdleBehaviour");
	apply_type(0x1544650, "RTTIPointer");

	// Ref<AIIndividualConfig>
	set_name(0x14cfc08, "Ref_AIIndividualConfig");
	apply_type(0x14cfc08, "RTTIPointer");

	// Ref<AIIndividualHookResource>
	set_name(0x14cfcc0, "Ref_AIIndividualHookResource");
	apply_type(0x14cfcc0, "RTTIPointer");

	// Ref<AILeadEscortBehaviour>
	set_name(0x1544718, "Ref_AILeadEscortBehaviour");
	apply_type(0x1544718, "RTTIPointer");

	// Ref<AILookBehaviour>
	set_name(0x15445ec, "Ref_AILookBehaviour");
	apply_type(0x15445ec, "RTTIPointer");

	// Ref<AILookContext>
	set_name(0x154477c, "Ref_AILookContext");
	apply_type(0x154477c, "RTTIPointer");

	// Ref<AILookContextGroup>
	set_name(0x15447f0, "Ref_AILookContextGroup");
	apply_type(0x15447f0, "RTTIPointer");

	// Ref<AIMarkerLocatorResource>
	set_name(0x151fc9c, "Ref_AIMarkerLocatorResource");
	apply_type(0x151fc9c, "RTTIPointer");

	// Ref<AIMovementBehaviour>
	set_name(0x1544524, "Ref_AIMovementBehaviour");
	apply_type(0x1544524, "RTTIPointer");

	// Ref<AIMovementContext>
	set_name(0x1544854, "Ref_AIMovementContext");
	apply_type(0x1544854, "RTTIPointer");

	// Ref<AINearestWaypoint>
	set_name(0x14d6a00, "Ref_AINearestWaypoint");
	apply_type(0x14d6a00, "RTTIPointer");

	// Ref<AIPerception>
	set_name(0x14cf5f8, "Ref_AIPerception");
	apply_type(0x14cf5f8, "RTTIPointer");

	// Ref<AIPositionPickerResource>
	set_name(0x14d6ab8, "Ref_AIPositionPickerResource");
	apply_type(0x14d6ab8, "RTTIPointer");

	// Ref<AIScanContextResource>
	set_name(0x14cfd78, "Ref_AIScanContextResource");
	apply_type(0x14cfd78, "RTTIPointer");

	// Ref<AISkillDriveResource>
	set_name(0x14d2e34, "Ref_AISkillDriveResource");
	apply_type(0x14d2e34, "RTTIPointer");

	// Ref<AISkillResource>
	set_name(0x14cfddc, "Ref_AISkillResource");
	apply_type(0x14cfddc, "RTTIPointer");

	// Ref<AISquadHookResource>
	set_name(0x14d3df4, "Ref_AISquadHookResource");
	apply_type(0x14d3df4, "RTTIPointer");

	// Ref<AISquadResource>
	set_name(0x14d3e58, "Ref_AISquadResource");
	apply_type(0x14d3e58, "RTTIPointer");

	// Ref<AIStaticCoverMap>
	set_name(0x14d73f4, "Ref_AIStaticCoverMap");
	apply_type(0x14d73f4, "RTTIPointer");

	// Ref<AIStrategyResource>
	set_name(0x14f80c8, "Ref_AIStrategyResource");
	apply_type(0x14f80c8, "RTTIPointer");

	// Ref<AIWaypointAreaRadiusTable>
	set_name(0x14d6f10, "Ref_AIWaypointAreaRadiusTable");
	apply_type(0x14d6f10, "RTTIPointer");

	// Ref<AIWaypointGrid>
	set_name(0x14d701c, "Ref_AIWaypointGrid");
	apply_type(0x14d701c, "RTTIPointer");

	// Ref<AIWaypointNeighbors>
	set_name(0x14d7148, "Ref_AIWaypointNeighbors");
	apply_type(0x14d7148, "RTTIPointer");

	// Ref<AIWeaponOperationResource>
	set_name(0x14ce9d0, "Ref_AIWeaponOperationResource");
	apply_type(0x14ce9d0, "RTTIPointer");

	// Ref<AIWeaponPreference>
	set_name(0x14d2450, "Ref_AIWeaponPreference");
	apply_type(0x14d2450, "RTTIPointer");

	// Ref<AIWeaponPreferenceSettings>
	set_name(0x14d24c4, "Ref_AIWeaponPreferenceSettings");
	apply_type(0x14d24c4, "RTTIPointer");

	// Ref<AOEUseLocationActions>
	set_name(0x154fe78, "Ref_AOEUseLocationActions");
	apply_type(0x154fe78, "RTTIPointer");

	// Ref<AOEUseLocationInfo>
	set_name(0x154fe14, "Ref_AOEUseLocationInfo");
	apply_type(0x154fe14, "RTTIPointer");

	// Ref<AOEUseLocationInfoActionPair>
	set_name(0x154fedc, "Ref_AOEUseLocationInfoActionPair");
	apply_type(0x154fedc, "RTTIPointer");

	// Ref<AbilityAnimatedByParentResource>
	set_name(0x14e3218, "Ref_AbilityAnimatedByParentResource");
	apply_type(0x14e3218, "RTTIPointer");

	// Ref<AbilityAnimationResource>
	set_name(0x14e32d0, "Ref_AbilityAnimationResource");
	apply_type(0x14e32d0, "RTTIPointer");

	// Ref<AbilityFootPlacementResource>
	set_name(0x14e3450, "Ref_AbilityFootPlacementResource");
	apply_type(0x14e3450, "RTTIPointer");

	// Ref<AbilityHeldItemOverideResource>
	set_name(0x14e3e90, "Ref_AbilityHeldItemOverideResource");
	apply_type(0x14e3e90, "RTTIPointer");

	// Ref<AbilityPhonemeAnimationResource>
	set_name(0x14e3740, "Ref_AbilityPhonemeAnimationResource");
	apply_type(0x14e3740, "RTTIPointer");

	// Ref<AbilityRagdollResource>
	set_name(0x14e3924, "Ref_AbilityRagdollResource");
	apply_type(0x14e3924, "RTTIPointer");

	// Ref<AbilityResource>
	set_name(0x14e3988, "Ref_AbilityResource");
	apply_type(0x14e3988, "RTTIPointer");

	// Ref<AbilityShaderAnimationResource>
	set_name(0x14e3c78, "Ref_AbilityShaderAnimationResource");
	apply_type(0x14e3c78, "RTTIPointer");

	// Ref<AbilitySimpleAnimationResource>
	set_name(0x14e3398, "Ref_AbilitySimpleAnimationResource");
	apply_type(0x14e3398, "RTTIPointer");

	// Ref<AbilityTwoBoneIKResource>
	set_name(0x14e3b5c, "Ref_AbilityTwoBoneIKResource");
	apply_type(0x14e3b5c, "RTTIPointer");

	// Ref<AbilityWindAnimationResource>
	set_name(0x14e3d30, "Ref_AbilityWindAnimationResource");
	apply_type(0x14e3d30, "RTTIPointer");

	// Ref<AccuracySettings>
	set_name(0x15221d0, "Ref_AccuracySettings");
	apply_type(0x15221d0, "RTTIPointer");

	// Ref<ActionModeResource>
	set_name(0x15483c0, "Ref_ActionModeResource");
	apply_type(0x15483c0, "RTTIPointer");

	// Ref<ActorResource>
	set_name(0x151fd54, "Ref_ActorResource");
	apply_type(0x151fd54, "RTTIPointer");

	// Ref<AimDeviationResource>
	set_name(0x1522298, "Ref_AimDeviationResource");
	apply_type(0x1522298, "RTTIPointer");

	// Ref<AimLagSettings>
	set_name(0x1512cac, "Ref_AimLagSettings");
	apply_type(0x1512cac, "RTTIPointer");

	// Ref<AirVehiclePendulumResource>
	set_name(0x1507aa0, "Ref_AirVehiclePendulumResource");
	apply_type(0x1507aa0, "RTTIPointer");

	// Ref<AmmoEjectorResource>
	set_name(0x15223f8, "Ref_AmmoEjectorResource");
	apply_type(0x15223f8, "RTTIPointer");

	// Ref<AmmoResource>
	set_name(0x1522524, "Ref_AmmoResource");
	apply_type(0x1522524, "RTTIPointer");

	// Ref<AngularBoneSpeedTrackerResource>
	set_name(0x1541b88, "Ref_AngularBoneSpeedTrackerResource");
	apply_type(0x1541b88, "RTTIPointer");

	// Ref<AnimatedEntityActorResource>
	set_name(0x151fe1c, "Ref_AnimatedEntityActorResource");
	apply_type(0x151fe1c, "RTTIPointer");

	// Ref<AnimatedScreenEffectResource>
	set_name(0x14fab08, "Ref_AnimatedScreenEffectResource");
	apply_type(0x14fab08, "RTTIPointer");

	// Ref<AnimationDiagramState>
	set_name(0x154206c, "Ref_AnimationDiagramState");
	apply_type(0x154206c, "RTTIPointer");

	// Ref<AnimationDiagramStateAnimationArray>
	set_name(0x1541ff8, "Ref_AnimationDiagramStateAnimationArray");
	apply_type(0x1541ff8, "RTTIPointer");

	// Ref<AnimationDiagramStateAnimationInfo>
	set_name(0x1541f84, "Ref_AnimationDiagramStateAnimationInfo");
	apply_type(0x1541f84, "RTTIPointer");

	// Ref<AnimationEventResource>
	set_name(0x14b970c, "Ref_AnimationEventResource");
	apply_type(0x14b970c, "RTTIPointer");

	// Ref<AnimationMotionBase>
	set_name(0x1540850, "Ref_AnimationMotionBase");
	apply_type(0x1540850, "RTTIPointer");

	// Ref<AnimationOverrideActivationResource>
	set_name(0x154ff50, "Ref_AnimationOverrideActivationResource");
	apply_type(0x154ff50, "RTTIPointer");

	// Ref<AnimationPoseMatchingConfigData>
	set_name(0x14e8d0c, "Ref_AnimationPoseMatchingConfigData");
	apply_type(0x14e8d0c, "RTTIPointer");

	// Ref<AnimationPoseMatchingDataBase>
	set_name(0x14e8de4, "Ref_AnimationPoseMatchingDataBase");
	apply_type(0x14e8de4, "RTTIPointer");

	// Ref<AnimationPoseMatchingHelperResource>
	set_name(0x14e8ebc, "Ref_AnimationPoseMatchingHelperResource");
	apply_type(0x14e8ebc, "RTTIPointer");

	// Ref<AnimationResource>
	set_name(0x14b9770, "Ref_AnimationResource");
	apply_type(0x14b9770, "RTTIPointer");

	// Ref<AnimationState>
	set_name(0x14b9a4c, "Ref_AnimationState");
	apply_type(0x14b9a4c, "RTTIPointer");

	// Ref<AnimationStateEvents>
	set_name(0x14b99c8, "Ref_AnimationStateEvents");
	apply_type(0x14b99c8, "RTTIPointer");

	// Ref<AnimationStateManager>
	set_name(0x14b9c50, "Ref_AnimationStateManager");
	apply_type(0x14b9c50, "RTTIPointer");

	// Ref<AnimationTrackLinearBool>
	set_name(0x14ba188, "Ref_AnimationTrackLinearBool");
	apply_type(0x14ba188, "RTTIPointer");

	// Ref<AnimationTrackLinearFQuat>
	set_name(0x14ba1ec, "Ref_AnimationTrackLinearFQuat");
	apply_type(0x14ba1ec, "RTTIPointer");

	// Ref<AnimationTrackLinearFVector3>
	set_name(0x14ba0c0, "Ref_AnimationTrackLinearFVector3");
	apply_type(0x14ba0c0, "RTTIPointer");

	// Ref<AnimationTrackLinearFVector4>
	set_name(0x14ba124, "Ref_AnimationTrackLinearFVector4");
	apply_type(0x14ba124, "RTTIPointer");

	// Ref<AnimationTrackLinearFloat>
	set_name(0x14ba05c, "Ref_AnimationTrackLinearFloat");
	apply_type(0x14ba05c, "RTTIPointer");

	// Ref<AnimationTrackLinearRGBAColor>
	set_name(0x14ba250, "Ref_AnimationTrackLinearRGBAColor");
	apply_type(0x14ba250, "RTTIPointer");

	// Ref<Asset>
	set_name(0x14bc120, "Ref_Asset");
	apply_type(0x14bc120, "RTTIPointer");

	// Ref<AttachableExplosiveResource>
	set_name(0x15225dc, "Ref_AttachableExplosiveResource");
	apply_type(0x15225dc, "RTTIPointer");

	// Ref<AutoAimHull>
	set_name(0x153a7ac, "Ref_AutoAimHull");
	apply_type(0x153a7ac, "RTTIPointer");

	// Ref<AutoSelectSkeletonAnimationResource>
	set_name(0x14d9778, "Ref_AutoSelectSkeletonAnimationResource");
	apply_type(0x14d9778, "RTTIPointer");

	// Ref<BaseConcreteAsset>
	set_name(0x14bc194, "Ref_BaseConcreteAsset");
	apply_type(0x14bc194, "RTTIPointer");

	// Ref<BeyondCameraResource>
	set_name(0x154aff4, "Ref_BeyondCameraResource");
	apply_type(0x154aff4, "RTTIPointer");

	// Ref<BlendExpression>
	set_name(0x14ba348, "Ref_BlendExpression");
	apply_type(0x14ba348, "RTTIPointer");

	// Ref<BlendSkeletonAnimationResource>
	set_name(0x14d965c, "Ref_BlendSkeletonAnimationResource");
	apply_type(0x14d965c, "RTTIPointer");

	// Ref<BlendedMeshResource>
	set_name(0x14bf030, "Ref_BlendedMeshResource");
	apply_type(0x14bf030, "RTTIPointer");

	// Ref<BloodPuddleSettings>
	set_name(0x14fb2c4, "Ref_BloodPuddleSettings");
	apply_type(0x14fb2c4, "RTTIPointer");

	// Ref<BloomSettingsResource>
	set_name(0x14cb9f4, "Ref_BloomSettingsResource");
	apply_type(0x14cb9f4, "RTTIPointer");

	// Ref<BlurSettingsResource>
	set_name(0x14cba5c, "Ref_BlurSettingsResource");
	apply_type(0x14cba5c, "RTTIPointer");

	// Ref<BoneAttachedParticleSystemResource>
	set_name(0x14e77fc, "Ref_BoneAttachedParticleSystemResource");
	apply_type(0x14e77fc, "RTTIPointer");

	// Ref<ButtonIconCollection>
	set_name(0x15309b8, "Ref_ButtonIconCollection");
	apply_type(0x15309b8, "RTTIPointer");

	// Ref<CameraEntityResource>
	set_name(0x14e2600, "Ref_CameraEntityResource");
	apply_type(0x14e2600, "RTTIPointer");

	// Ref<CaptureAndHoldAreaFactionSettings>
	set_name(0x1521da0, "Ref_CaptureAndHoldAreaFactionSettings");
	apply_type(0x1521da0, "RTTIPointer");

	// Ref<Career>
	set_name(0x153e8f8, "Ref_Career");
	apply_type(0x153e8f8, "RTTIPointer");

	// Ref<CareerAbilityResource>
	set_name(0x14eee04, "Ref_CareerAbilityResource");
	apply_type(0x14eee04, "RTTIPointer");

	// Ref<CareerUnlock>
	set_name(0x153e884, "Ref_CareerUnlock");
	apply_type(0x153e884, "RTTIPointer");

	// Ref<CharacterEyeAnimatorResource>
	set_name(0x1547eb4, "Ref_CharacterEyeAnimatorResource");
	apply_type(0x1547eb4, "RTTIPointer");

	// Ref<CharacterFacialExpressionAnimation>
	set_name(0x1547d78, "Ref_CharacterFacialExpressionAnimation");
	apply_type(0x1547d78, "RTTIPointer");

	// Ref<CharacterHeadResource>
	set_name(0x1547e50, "Ref_CharacterHeadResource");
	apply_type(0x1547e50, "RTTIPointer");

	// Ref<CharacterPhysicsMoverResource>
	set_name(0x15410d8, "Ref_CharacterPhysicsMoverResource");
	apply_type(0x15410d8, "RTTIPointer");

	// Ref<CircleSettingsResource>
	set_name(0x14cbcbc, "Ref_CircleSettingsResource");
	apply_type(0x14cbcbc, "RTTIPointer");

	// Ref<ClueLineResource>
	set_name(0x15423a0, "Ref_ClueLineResource");
	apply_type(0x15423a0, "RTTIPointer");

	// Ref<CluePageResource>
	set_name(0x1542478, "Ref_CluePageResource");
	apply_type(0x1542478, "RTTIPointer");

	// Ref<ClueResource>
	set_name(0x1542550, "Ref_ClueResource");
	apply_type(0x1542550, "RTTIPointer");

	// Ref<ClueRevelationResource>
	set_name(0x1542628, "Ref_ClueRevelationResource");
	apply_type(0x1542628, "RTTIPointer");

	// Ref<ClusterGrenadeFragmentResource>
	set_name(0x1525d8c, "Ref_ClusterGrenadeFragmentResource");
	apply_type(0x1525d8c, "RTTIPointer");

	// Ref<CollisionHullToRagdollMappingResource>
	set_name(0x14e38c0, "Ref_CollisionHullToRagdollMappingResource");
	apply_type(0x14e38c0, "RTTIPointer");

	// Ref<ColorizeSettingsResource>
	set_name(0x14cbbec, "Ref_ColorizeSettingsResource");
	apply_type(0x14cbbec, "RTTIPointer");

	// Ref<CommunicationMessageEvent>
	set_name(0x1547328, "Ref_CommunicationMessageEvent");
	apply_type(0x1547328, "RTTIPointer");

	// Ref<ConcreteAsset>
	set_name(0x14bc208, "Ref_ConcreteAsset");
	apply_type(0x14bc208, "RTTIPointer");

	// Ref<ControlledEntityActorResource>
	set_name(0x1520024, "Ref_ControlledEntityActorResource");
	apply_type(0x1520024, "RTTIPointer");

	// Ref<CoreObject>
	set_name(0x14bc6c4, "Ref_CoreObject");
	apply_type(0x14bc6c4, "RTTIPointer");

	// Ref<CoronaResource>
	set_name(0x14bce10, "Ref_CoronaResource");
	apply_type(0x14bce10, "RTTIPointer");

	// Ref<CrashMoverResource>
	set_name(0x14fbc34, "Ref_CrashMoverResource");
	apply_type(0x14fbc34, "RTTIPointer");

	// Ref<CurveResource>
	set_name(0x14e0e04, "Ref_CurveResource");
	apply_type(0x14e0e04, "RTTIPointer");

	// Ref<DLCResource>
	set_name(0x14efa50, "Ref_DLCResource");
	apply_type(0x14efa50, "RTTIPointer");

	// Ref<DamageAreaResource>
	set_name(0x14f9c48, "Ref_DamageAreaResource");
	apply_type(0x14f9c48, "RTTIPointer");

	// Ref<DamageModelResource>
	set_name(0x14f9d74, "Ref_DamageModelResource");
	apply_type(0x14f9d74, "RTTIPointer");

	// Ref<DamageTypeGroup>
	set_name(0x14faf0c, "Ref_DamageTypeGroup");
	apply_type(0x14faf0c, "RTTIPointer");

	// Ref<DamageTypeResource>
	set_name(0x14e1e8c, "Ref_DamageTypeResource");
	apply_type(0x14e1e8c, "RTTIPointer");

	// Ref<DecalResource>
	set_name(0x14bcf4c, "Ref_DecalResource");
	apply_type(0x14bcf4c, "RTTIPointer");

	// Ref<DepthOfFieldSettingsResource>
	set_name(0x14cb928, "Ref_DepthOfFieldSettingsResource");
	apply_type(0x14cb928, "RTTIPointer");

	// Ref<Destructibility>
	set_name(0x14e2808, "Ref_Destructibility");
	apply_type(0x14e2808, "RTTIPointer");

	// Ref<DestructibilityConstraintState>
	set_name(0x14e2c44, "Ref_DestructibilityConstraintState");
	apply_type(0x14e2c44, "RTTIPointer");

	// Ref<DestructibilityPartState>
	set_name(0x14e2bd0, "Ref_DestructibilityPartState");
	apply_type(0x14e2bd0, "RTTIPointer");

	// Ref<DestructibilityPartStateResource>
	set_name(0x14e28d0, "Ref_DestructibilityPartStateResource");
	apply_type(0x14e28d0, "RTTIPointer");

	// Ref<DestructibilityResource>
	set_name(0x14e2b18, "Ref_DestructibilityResource");
	apply_type(0x14e2b18, "RTTIPointer");

	// Ref<DestructibilityState>
	set_name(0x14e2cb8, "Ref_DestructibilityState");
	apply_type(0x14e2cb8, "RTTIPointer");

	// Ref<DestructionLogicAction>
	set_name(0x14e2e04, "Ref_DestructionLogicAction");
	apply_type(0x14e2e04, "RTTIPointer");

	// Ref<DifficultyFloatResource>
	set_name(0x14ea7f0, "Ref_DifficultyFloatResource");
	apply_type(0x14ea7f0, "RTTIPointer");

	// Ref<DifficultyRangeResource>
	set_name(0x14ea854, "Ref_DifficultyRangeResource");
	apply_type(0x14ea854, "RTTIPointer");

	// Ref<EffectComponentResource>
	set_name(0x150f854, "Ref_EffectComponentResource");
	apply_type(0x150f854, "RTTIPointer");

	// Ref<EffectEntityResource>
	set_name(0x1500ca4, "Ref_EffectEntityResource");
	apply_type(0x1500ca4, "RTTIPointer");

	// Ref<ElectricityDrawSettings>
	set_name(0x153c908, "Ref_ElectricityDrawSettings");
	apply_type(0x153c908, "RTTIPointer");

	// Ref<ElectricityDrawSettingsModifierResource>
	set_name(0x153be28, "Ref_ElectricityDrawSettingsModifierResource");
	apply_type(0x153be28, "RTTIPointer");

	// Ref<ElectricityEmitNodeResource>
	set_name(0x153c094, "Ref_ElectricityEmitNodeResource");
	apply_type(0x153c094, "RTTIPointer");

	// Ref<ElectricityEmitSettings>
	set_name(0x153c97c, "Ref_ElectricityEmitSettings");
	apply_type(0x153c97c, "RTTIPointer");

	// Ref<ElectricityGridNodeResource>
	set_name(0x153c14c, "Ref_ElectricityGridNodeResource");
	apply_type(0x153c14c, "RTTIPointer");

	// Ref<ElectricityNodeResource>
	set_name(0x153be8c, "Ref_ElectricityNodeResource");
	apply_type(0x153be8c, "RTTIPointer");

	// Ref<ElectricitySpawnEntityResource>
	set_name(0x153ca34, "Ref_ElectricitySpawnEntityResource");
	apply_type(0x153ca34, "RTTIPointer");

	// Ref<EnergyProjectileResource>
	set_name(0x153c7a8, "Ref_EnergyProjectileResource");
	apply_type(0x153c7a8, "RTTIPointer");

	// Ref<EntityActorResource>
	set_name(0x152022c, "Ref_EntityActorResource");
	apply_type(0x152022c, "RTTIPointer");

	// Ref<EntityComponentResource>
	set_name(0x14e24e4, "Ref_EntityComponentResource");
	apply_type(0x14e24e4, "RTTIPointer");

	// Ref<EntityResource>
	set_name(0x14e23c8, "Ref_EntityResource");
	apply_type(0x14e23c8, "RTTIPointer");

	// Ref<EntityStickerResource>
	set_name(0x1500d5c, "Ref_EntityStickerResource");
	apply_type(0x1500d5c, "RTTIPointer");

	// Ref<EventResource>
	set_name(0x1519be0, "Ref_EventResource");
	apply_type(0x1519be0, "RTTIPointer");

	// Ref<ExplosionResource>
	set_name(0x1524628, "Ref_ExplosionResource");
	apply_type(0x1524628, "RTTIPointer");

	// Ref<ExposureSettingsResource>
	set_name(0x14cbd8c, "Ref_ExposureSettingsResource");
	apply_type(0x14cbd8c, "RTTIPointer");

	// Ref<FacialAnimationResource>
	set_name(0x153a9a0, "Ref_FacialAnimationResource");
	apply_type(0x153a9a0, "RTTIPointer");

	// Ref<FacialExpressionAnimatorResource>
	set_name(0x153aa04, "Ref_FacialExpressionAnimatorResource");
	apply_type(0x153aa04, "RTTIPointer");

	// Ref<FirearmResource>
	set_name(0x154a914, "Ref_FirearmResource");
	apply_type(0x154a914, "RTTIPointer");

	// Ref<FirstPersonAnimatedOverlayResource>
	set_name(0x153a8c8, "Ref_FirstPersonAnimatedOverlayResource");
	apply_type(0x153a8c8, "RTTIPointer");

	// Ref<FirstPersonAnimationResource>
	set_name(0x153a864, "Ref_FirstPersonAnimationResource");
	apply_type(0x153a864, "RTTIPointer");

	// Ref<FirstPersonHitEffectsResource>
	set_name(0x14faf70, "Ref_FirstPersonHitEffectsResource");
	apply_type(0x14faf70, "RTTIPointer");

	// Ref<FontResource>
	set_name(0x14c881c, "Ref_FontResource");
	apply_type(0x14c881c, "RTTIPointer");

	// Ref<GameInputJoystickResource>
	set_name(0x14eaa34, "Ref_GameInputJoystickResource");
	apply_type(0x14eaa34, "RTTIPointer");

	// Ref<GameInputMotionControllerResource>
	set_name(0x14eaafc, "Ref_GameInputMotionControllerResource");
	apply_type(0x14eaafc, "RTTIPointer");

	// Ref<GestureCollectionResource>
	set_name(0x1520d80, "Ref_GestureCollectionResource");
	apply_type(0x1520d80, "RTTIPointer");

	// Ref<GlobalDamageModifier>
	set_name(0x14ef688, "Ref_GlobalDamageModifier");
	apply_type(0x14ef688, "RTTIPointer");

	// Ref<Gradient>
	set_name(0x14e0f84, "Ref_Gradient");
	apply_type(0x14e0f84, "RTTIPointer");

	// Ref<GrainSettingsResource>
	set_name(0x14cb990, "Ref_GrainSettingsResource");
	apply_type(0x14cb990, "RTTIPointer");

	// Ref<GrenadeEjectorResource>
	set_name(0x1525c80, "Ref_GrenadeEjectorResource");
	apply_type(0x1525c80, "RTTIPointer");

	// Ref<HUDCrosshairParts>
	set_name(0x15310e8, "Ref_HUDCrosshairParts");
	apply_type(0x15310e8, "RTTIPointer");

	// Ref<HUDCrosshairSettings>
	set_name(0x153114c, "Ref_HUDCrosshairSettings");
	apply_type(0x153114c, "RTTIPointer");

	// Ref<HUDElementResource>
	set_name(0x1530a90, "Ref_HUDElementResource");
	apply_type(0x1530a90, "RTTIPointer");

	// Ref<HUDInventoryEntitySettings>
	set_name(0x15341fc, "Ref_HUDInventoryEntitySettings");
	apply_type(0x15341fc, "RTTIPointer");

	// Ref<HUDResource>
	set_name(0x1530b04, "Ref_HUDResource");
	apply_type(0x1530b04, "RTTIPointer");

	// Ref<HUDScoreEventActivateAnimation>
	set_name(0x15375b4, "Ref_HUDScoreEventActivateAnimation");
	apply_type(0x15375b4, "RTTIPointer");

	// Ref<HUDScoreEventAnimation>
	set_name(0x1537550, "Ref_HUDScoreEventAnimation");
	apply_type(0x1537550, "RTTIPointer");

	// Ref<HUDTimerSettings>
	set_name(0x1530f68, "Ref_HUDTimerSettings");
	apply_type(0x1530f68, "RTTIPointer");

	// Ref<HelghastGogglesComponentResource>
	set_name(0x150f4fc, "Ref_HelghastGogglesComponentResource");
	apply_type(0x150f4fc, "RTTIPointer");

	// Ref<HitResponseAttachedParticlesResource>
	set_name(0x14fafd4, "Ref_HitResponseAttachedParticlesResource");
	apply_type(0x14fafd4, "RTTIPointer");

	// Ref<HumanoidCinematicDeathSystemResource>
	set_name(0x150e86c, "Ref_HumanoidCinematicDeathSystemResource");
	apply_type(0x150e86c, "RTTIPointer");

	// Ref<HumanoidDeadStateResource>
	set_name(0x150e360, "Ref_HumanoidDeadStateResource");
	apply_type(0x150e360, "RTTIPointer");

	// Ref<HumanoidDirectionalStaggerStateResource>
	set_name(0x150e418, "Ref_HumanoidDirectionalStaggerStateResource");
	apply_type(0x150e418, "RTTIPointer");

	// Ref<HumanoidHitResponseBehaviour>
	set_name(0x14fb0f0, "Ref_HumanoidHitResponseBehaviour");
	apply_type(0x14fb0f0, "RTTIPointer");

	// Ref<HumanoidHitResponseBehaviourOutput>
	set_name(0x14fb08c, "Ref_HumanoidHitResponseBehaviourOutput");
	apply_type(0x14fb08c, "RTTIPointer");

	// Ref<HumanoidSubStateUsingInteractiveEntityResource>
	set_name(0x150ea20, "Ref_HumanoidSubStateUsingInteractiveEntityResource");
	apply_type(0x150ea20, "RTTIPointer");

	// Ref<ImageMap>
	set_name(0x14c95ac, "Ref_ImageMap");
	apply_type(0x14c95ac, "RTTIPointer");

	// Ref<IndexArrayResource>
	set_name(0x14c8e60, "Ref_IndexArrayResource");
	apply_type(0x14c8e60, "RTTIPointer");

	// Ref<InventoryCaptureSpawnAbilityResource>
	set_name(0x1517b90, "Ref_InventoryCaptureSpawnAbilityResource");
	apply_type(0x1517b90, "RTTIPointer");

	// Ref<InventoryReviveAbilityResource>
	set_name(0x1513c7c, "Ref_InventoryReviveAbilityResource");
	apply_type(0x1513c7c, "RTTIPointer");

	// Ref<InventoryWeaponPickUpResource>
	set_name(0x1517cac, "Ref_InventoryWeaponPickUpResource");
	apply_type(0x1517cac, "RTTIPointer");

	// Ref<JoystickInputModifierResource>
	set_name(0x153acc0, "Ref_JoystickInputModifierResource");
	apply_type(0x153acc0, "RTTIPointer");

	// Ref<LaserBeamResource>
	set_name(0x14fa670, "Ref_LaserBeamResource");
	apply_type(0x14fa670, "RTTIPointer");

	// Ref<LeanAndPeekAction>
	set_name(0x15051b8, "Ref_LeanAndPeekAction");
	apply_type(0x15051b8, "RTTIPointer");

	// Ref<LeanAndPeekPosition>
	set_name(0x150523c, "Ref_LeanAndPeekPosition");
	apply_type(0x150523c, "RTTIPointer");

	// Ref<LevelListResource>
	set_name(0x14ef924, "Ref_LevelListResource");
	apply_type(0x14ef924, "RTTIPointer");

	// Ref<LevelSection>
	set_name(0x14e0ad4, "Ref_LevelSection");
	apply_type(0x14e0ad4, "RTTIPointer");

	// Ref<LightAttachedCorona>
	set_name(0x14bce74, "Ref_LightAttachedCorona");
	apply_type(0x14bce74, "RTTIPointer");

	// Ref<LightResource>
	set_name(0x14c8b80, "Ref_LightResource");
	apply_type(0x14c8b80, "RTTIPointer");

	// Ref<LinearBoneSpeedTrackerResource>
	set_name(0x1541b14, "Ref_LinearBoneSpeedTrackerResource");
	apply_type(0x1541b14, "RTTIPointer");

	// Ref<LocatorResource>
	set_name(0x15204dc, "Ref_LocatorResource");
	apply_type(0x15204dc, "RTTIPointer");

	// Ref<LuaScriptResource>
	set_name(0x15420e0, "Ref_LuaScriptResource");
	apply_type(0x15420e0, "RTTIPointer");

	// Ref<LumpOptimizationSettings>
	set_name(0x14e10f4, "Ref_LumpOptimizationSettings");
	apply_type(0x14e10f4, "RTTIPointer");

	// Ref<MapIconsResource>
	set_name(0x153070c, "Ref_MapIconsResource");
	apply_type(0x153070c, "RTTIPointer");

	// Ref<MapResource>
	set_name(0x15308e0, "Ref_MapResource");
	apply_type(0x15308e0, "RTTIPointer");

	// Ref<MeshResourceBase>
	set_name(0x14bec78, "Ref_MeshResourceBase");
	apply_type(0x14bec78, "RTTIPointer");

	// Ref<MissionResource>
	set_name(0x1528cec, "Ref_MissionResource");
	apply_type(0x1528cec, "RTTIPointer");

	// Ref<Model>
	set_name(0x14e78c8, "Ref_Model");
	apply_type(0x14e78c8, "RTTIPointer");

	// Ref<ModelPartMeshReplacementResource>
	set_name(0x14e7cf4, "Ref_ModelPartMeshReplacementResource");
	apply_type(0x14e7cf4, "RTTIPointer");

	// Ref<ModelPartResource>
	set_name(0x14e7c80, "Ref_ModelPartResource");
	apply_type(0x14e7c80, "RTTIPointer");

	// Ref<ModelResource>
	set_name(0x14e792c, "Ref_ModelResource");
	apply_type(0x14e792c, "RTTIPointer");

	// Ref<MotionControllerDeadzone>
	set_name(0x153ae10, "Ref_MotionControllerDeadzone");
	apply_type(0x153ae10, "RTTIPointer");

	// Ref<MountedGunWeaponSettings>
	set_name(0x15056c0, "Ref_MountedGunWeaponSettings");
	apply_type(0x15056c0, "RTTIPointer");

	// Ref<MovementIKResource>
	set_name(0x1542990, "Ref_MovementIKResource");
	apply_type(0x1542990, "RTTIPointer");

	// Ref<Mover>
	set_name(0x14e7d68, "Ref_Mover");
	apply_type(0x14e7d68, "RTTIPointer");

	// Ref<MoverResource>
	set_name(0x14e7dcc, "Ref_MoverResource");
	apply_type(0x14e7dcc, "RTTIPointer");

	// Ref<MovieResource>
	set_name(0x14efc00, "Ref_MovieResource");
	apply_type(0x14efc00, "RTTIPointer");

	// Ref<MultiBlendedMeshResource>
	set_name(0x14bf14c, "Ref_MultiBlendedMeshResource");
	apply_type(0x14bf14c, "RTTIPointer");

	// Ref<OSDEventParserResource>
	set_name(0x1501548, "Ref_OSDEventParserResource");
	apply_type(0x1501548, "RTTIPointer");

	// Ref<ObjectAttributeAnimatorInstance>
	set_name(0x14bae00, "Ref_ObjectAttributeAnimatorInstance");
	apply_type(0x14bae00, "RTTIPointer");

	// Ref<ObjectAttributeAnimatorResource>
	set_name(0x14bae74, "Ref_ObjectAttributeAnimatorResource");
	apply_type(0x14bae74, "RTTIPointer");

	// Ref<ObjectAttributeAnimatorResourceBase>
	set_name(0x14bc640, "Ref_ObjectAttributeAnimatorResourceBase");
	apply_type(0x14bc640, "RTTIPointer");

	// Ref<PBDBodyResource>
	set_name(0x14bd3c0, "Ref_PBDBodyResource");
	apply_type(0x14bd3c0, "RTTIPointer");

	// Ref<PanicSystemResource>
	set_name(0x15482b4, "Ref_PanicSystemResource");
	apply_type(0x15482b4, "RTTIPointer");

	// Ref<ParTimeLevelInfo>
	set_name(0x152b168, "Ref_ParTimeLevelInfo");
	apply_type(0x152b168, "RTTIPointer");

	// Ref<ParticleEmitter>
	set_name(0x14c4450, "Ref_ParticleEmitter");
	apply_type(0x14c4450, "RTTIPointer");

	// Ref<ParticleSystemResource>
	set_name(0x14c4724, "Ref_ParticleSystemResource");
	apply_type(0x14c4724, "RTTIPointer");

	// Ref<PathResource>
	set_name(0x14ba890, "Ref_PathResource");
	apply_type(0x14ba890, "RTTIPointer");

	// Ref<PhonemeBoneAnimatorResource>
	set_name(0x153ac08, "Ref_PhonemeBoneAnimatorResource");
	apply_type(0x153ac08, "RTTIPointer");

	// Ref<PhonemeBoneChannel>
	set_name(0x153ab94, "Ref_PhonemeBoneChannel");
	apply_type(0x153ab94, "RTTIPointer");

	// Ref<PhonemeChannel>
	set_name(0x14e36cc, "Ref_PhonemeChannel");
	apply_type(0x14e36cc, "RTTIPointer");

	// Ref<PhysicsCharacterMoverResource>
	set_name(0x14c67c4, "Ref_PhysicsCharacterMoverResource");
	apply_type(0x14c67c4, "RTTIPointer");

	// Ref<PhysicsCollisionResource>
	set_name(0x14c6688, "Ref_PhysicsCollisionResource");
	apply_type(0x14c6688, "RTTIPointer");

	// Ref<PhysicsConstraintResource>
	set_name(0x14c7c98, "Ref_PhysicsConstraintResource");
	apply_type(0x14c7c98, "RTTIPointer");

	// Ref<PhysicsRagdollBodyControllerResource>
	set_name(0x14c759c, "Ref_PhysicsRagdollBodyControllerResource");
	apply_type(0x14c759c, "RTTIPointer");

	// Ref<PhysicsRagdollMotorsResource>
	set_name(0x14c74d4, "Ref_PhysicsRagdollMotorsResource");
	apply_type(0x14c74d4, "RTTIPointer");

	// Ref<PhysicsRagdollResource>
	set_name(0x14c7600, "Ref_PhysicsRagdollResource");
	apply_type(0x14c7600, "RTTIPointer");

	// Ref<PhysicsResource>
	set_name(0x14c6614, "Ref_PhysicsResource");
	apply_type(0x14c6614, "RTTIPointer");

	// Ref<PhysicsSkeleton>
	set_name(0x14c7664, "Ref_PhysicsSkeleton");
	apply_type(0x14c7664, "RTTIPointer");

	// Ref<PhysicsVehicleResource>
	set_name(0x14c6760, "Ref_PhysicsVehicleResource");
	apply_type(0x14c6760, "RTTIPointer");

	// Ref<PickUpDropSettings>
	set_name(0x1518bd0, "Ref_PickUpDropSettings");
	apply_type(0x1518bd0, "RTTIPointer");

	// Ref<PickUpResource>
	set_name(0x1518c44, "Ref_PickUpResource");
	apply_type(0x1518c44, "RTTIPointer");

	// Ref<PlaceableResource>
	set_name(0x1526168, "Ref_PlaceableResource");
	apply_type(0x1526168, "RTTIPointer");

	// Ref<PlayAnimationObjectResource>
	set_name(0x15079e8, "Ref_PlayAnimationObjectResource");
	apply_type(0x15079e8, "RTTIPointer");

	// Ref<PlayerActorResource>
	set_name(0x152064c, "Ref_PlayerActorResource");
	apply_type(0x152064c, "RTTIPointer");

	// Ref<PortableTurretResource>
	set_name(0x15172c8, "Ref_PortableTurretResource");
	apply_type(0x15172c8, "RTTIPointer");

	// Ref<PoseMatchingResource>
	set_name(0x14e7860, "Ref_PoseMatchingResource");
	apply_type(0x14e7860, "RTTIPointer");

	// Ref<PositionEventResource>
	set_name(0x151d6e4, "Ref_PositionEventResource");
	apply_type(0x151d6e4, "RTTIPointer");

	// Ref<PositionLocatorResource>
	set_name(0x1520704, "Ref_PositionLocatorResource");
	apply_type(0x1520704, "RTTIPointer");

	// Ref<PostProcessEffectorResource>
	set_name(0x14cbf54, "Ref_PostProcessEffectorResource");
	apply_type(0x14cbf54, "RTTIPointer");

	// Ref<PostProcessSettingsResource>
	set_name(0x14cbe9c, "Ref_PostProcessSettingsResource");
	apply_type(0x14cbe9c, "RTTIPointer");

	// Ref<PrimitiveResource>
	set_name(0x14c8f18, "Ref_PrimitiveResource");
	apply_type(0x14c8f18, "RTTIPointer");

	// Ref<RandomFireResource>
	set_name(0x1512d10, "Ref_RandomFireResource");
	apply_type(0x1512d10, "RTTIPointer");

	// Ref<RandomMatrixResourceBase>
	set_name(0x14e8ad4, "Ref_RandomMatrixResourceBase");
	apply_type(0x14e8ad4, "RTTIPointer");

	// Ref<RandomVectorResource>
	set_name(0x14e8be0, "Ref_RandomVectorResource");
	apply_type(0x14e8be0, "RTTIPointer");

	// Ref<RegularSkinnedMeshResourceBase>
	set_name(0x14d9cb0, "Ref_RegularSkinnedMeshResourceBase");
	apply_type(0x14d9cb0, "RTTIPointer");

	// Ref<RegularSkinnedMeshResourceSkinInfo>
	set_name(0x14d9d14, "Ref_RegularSkinnedMeshResourceSkinInfo");
	apply_type(0x14d9d14, "RTTIPointer");

	// Ref<RenderEffectResource>
	set_name(0x14c90bc, "Ref_RenderEffectResource");
	apply_type(0x14c90bc, "RTTIPointer");

	// Ref<RenderingPrimitiveResource>
	set_name(0x14c8f90, "Ref_RenderingPrimitiveResource");
	apply_type(0x14c8f90, "RTTIPointer");

	// Ref<Resource>
	set_name(0x14bca80, "Ref_Resource");
	apply_type(0x14bca80, "RTTIPointer");

	// Ref<ReverbPresetResource>
	set_name(0x14dd128, "Ref_ReverbPresetResource");
	apply_type(0x14dd128, "RTTIPointer");

	// Ref<RumbleResource>
	set_name(0x14bd530, "Ref_RumbleResource");
	apply_type(0x14bd530, "RTTIPointer");

	// Ref<SKDTreeResource>
	set_name(0x14bef04, "Ref_SKDTreeResource");
	apply_type(0x14bef04, "RTTIPointer");

	// Ref<SMGGesture>
	set_name(0x1541eac, "Ref_SMGGesture");
	apply_type(0x1541eac, "RTTIPointer");

	// Ref<SMGGestureCollection>
	set_name(0x1541f20, "Ref_SMGGestureCollection");
	apply_type(0x1541f20, "RTTIPointer");

	// Ref<SSAOSettingsResource>
	set_name(0x14cbdf0, "Ref_SSAOSettingsResource");
	apply_type(0x14cbdf0, "RTTIPointer");

	// Ref<SabotageComponentResource>
	set_name(0x1514068, "Ref_SabotageComponentResource");
	apply_type(0x1514068, "RTTIPointer");

	// Ref<ScreenEffectResource>
	set_name(0x14faaa4, "Ref_ScreenEffectResource");
	apply_type(0x14faaa4, "RTTIPointer");

	// Ref<ScriptedWeaponResource>
	set_name(0x1526428, "Ref_ScriptedWeaponResource");
	apply_type(0x1526428, "RTTIPointer");

	// Ref<SearchAndRetrieveObjectResource>
	set_name(0x15174e0, "Ref_SearchAndRetrieveObjectResource");
	apply_type(0x15174e0, "RTTIPointer");

	// Ref<SentryBotResource>
	set_name(0x1507e4c, "Ref_SentryBotResource");
	apply_type(0x1507e4c, "RTTIPointer");

	// Ref<SequenceResource>
	set_name(0x1520a5c, "Ref_SequenceResource");
	apply_type(0x1520a5c, "RTTIPointer");

	// Ref<ShaderAnimatorResourceBase>
	set_name(0x14babe8, "Ref_ShaderAnimatorResourceBase");
	apply_type(0x14babe8, "RTTIPointer");

	// Ref<ShaderResource>
	set_name(0x14cb220, "Ref_ShaderResource");
	apply_type(0x14cb220, "RTTIPointer");

	// Ref<ShakeResource>
	set_name(0x14e1168, "Ref_ShakeResource");
	apply_type(0x14e1168, "RTTIPointer");

	// Ref<ShimmyModeResource>
	set_name(0x15484cc, "Ref_ShimmyModeResource");
	apply_type(0x15484cc, "RTTIPointer");

	// Ref<SimpleParticleSystemResource>
	set_name(0x15265dc, "Ref_SimpleParticleSystemResource");
	apply_type(0x15265dc, "RTTIPointer");

	// Ref<SimpleSoundResource>
	set_name(0x14dd89c, "Ref_SimpleSoundResource");
	apply_type(0x14dd89c, "RTTIPointer");

	// Ref<Skeleton>
	set_name(0x14da164, "Ref_Skeleton");
	apply_type(0x14da164, "RTTIPointer");

	// Ref<SkeletonAnimationResource>
	set_name(0x14da4c8, "Ref_SkeletonAnimationResource");
	apply_type(0x14da4c8, "RTTIPointer");

	// Ref<SkeletonBaseAnimationResource>
	set_name(0x14da454, "Ref_SkeletonBaseAnimationResource");
	apply_type(0x14da454, "RTTIPointer");

	// Ref<SkeletonHelpers>
	set_name(0x14da22c, "Ref_SkeletonHelpers");
	apply_type(0x14da22c, "RTTIPointer");

	// Ref<SkeletonTargetTree>
	set_name(0x14da69c, "Ref_SkeletonTargetTree");
	apply_type(0x14da69c, "RTTIPointer");

	// Ref<SkinnedMeshBoneBindings>
	set_name(0x14da7b8, "Ref_SkinnedMeshBoneBindings");
	apply_type(0x14da7b8, "RTTIPointer");

	// Ref<SkinnedMeshBoneBoundingBoxes>
	set_name(0x14daac8, "Ref_SkinnedMeshBoneBoundingBoxes");
	apply_type(0x14daac8, "RTTIPointer");

	// Ref<SkinnedMeshResource>
	set_name(0x14da870, "Ref_SkinnedMeshResource");
	apply_type(0x14da870, "RTTIPointer");

	// Ref<SkinnedModelResource>
	set_name(0x14e79e4, "Ref_SkinnedModelResource");
	apply_type(0x14e79e4, "RTTIPointer");

	// Ref<SkinnedPointsResource>
	set_name(0x14daa64, "Ref_SkinnedPointsResource");
	apply_type(0x14daa64, "RTTIPointer");

	// Ref<SoldierResource>
	set_name(0x150e158, "Ref_SoldierResource");
	apply_type(0x150e158, "RTTIPointer");

	// Ref<SoundMixResource>
	set_name(0x14dc8b0, "Ref_SoundMixResource");
	apply_type(0x14dc8b0, "RTTIPointer");

	// Ref<SoundResource>
	set_name(0x14dd6b0, "Ref_SoundResource");
	apply_type(0x14dd6b0, "RTTIPointer");

	// Ref<SoundStateMachineResource>
	set_name(0x14fb4a8, "Ref_SoundStateMachineResource");
	apply_type(0x14fb4a8, "RTTIPointer");

	// Ref<SoundZoneResource>
	set_name(0x14dc954, "Ref_SoundZoneResource");
	apply_type(0x14dc954, "RTTIPointer");

	// Ref<SpawnAreaResource>
	set_name(0x1521f10, "Ref_SpawnAreaResource");
	apply_type(0x1521f10, "RTTIPointer");

	// Ref<SpotLightResource>
	set_name(0x14cb590, "Ref_SpotLightResource");
	apply_type(0x14cb590, "RTTIPointer");

	// Ref<SpringResource>
	set_name(0x1540a24, "Ref_SpringResource");
	apply_type(0x1540a24, "RTTIPointer");

	// Ref<StaticMeshResource>
	set_name(0x14befbc, "Ref_StaticMeshResource");
	apply_type(0x14befbc, "RTTIPointer");

	// Ref<StaticModelResource>
	set_name(0x14e7b00, "Ref_StaticModelResource");
	apply_type(0x14e7b00, "RTTIPointer");

	// Ref<SubmixPresetResource>
	set_name(0x14dde00, "Ref_SubmixPresetResource");
	apply_type(0x14dde00, "RTTIPointer");

	// Ref<SwitchResource>
	set_name(0x1508314, "Ref_SwitchResource");
	apply_type(0x1508314, "RTTIPointer");

	// Ref<TerrainAimReticuleResource>
	set_name(0x1526640, "Ref_TerrainAimReticuleResource");
	apply_type(0x1526640, "RTTIPointer");

	// Ref<Texture>
	set_name(0x14cb168, "Ref_Texture");
	apply_type(0x14cb168, "RTTIPointer");

	// Ref<TextureLUT>
	set_name(0x14cb104, "Ref_TextureLUT");
	apply_type(0x14cb104, "RTTIPointer");

	// Ref<TextureWidgetResource>
	set_name(0x14c17d0, "Ref_TextureWidgetResource");
	apply_type(0x14c17d0, "RTTIPointer");

	// Ref<ThrowableResource>
	set_name(0x1528804, "Ref_ThrowableResource");
	apply_type(0x1528804, "RTTIPointer");

	// Ref<TorchResource>
	set_name(0x154a664, "Ref_TorchResource");
	apply_type(0x154a664, "RTTIPointer");

	// Ref<Typeface>
	set_name(0x14c9694, "Ref_Typeface");
	apply_type(0x14c9694, "RTTIPointer");

	// Ref<TypefaceStyle>
	set_name(0x14c9620, "Ref_TypefaceStyle");
	apply_type(0x14c9620, "RTTIPointer");

	// Ref<UniqueComponentResource>
	set_name(0x150fb14, "Ref_UniqueComponentResource");
	apply_type(0x150fb14, "RTTIPointer");

	// Ref<UnlockableFeatureResource>
	set_name(0x152ae54, "Ref_UnlockableFeatureResource");
	apply_type(0x152ae54, "RTTIPointer");

	// Ref<UseLocation>
	set_name(0x14e2080, "Ref_UseLocation");
	apply_type(0x14e2080, "RTTIPointer");

	// Ref<UseLocationResource>
	set_name(0x14e20f4, "Ref_UseLocationResource");
	apply_type(0x14e20f4, "RTTIPointer");

	// Ref<UseLocationResourceGame>
	set_name(0x14effb0, "Ref_UseLocationResourceGame");
	apply_type(0x14effb0, "RTTIPointer");

	// Ref<VehicleWeaponResource>
	set_name(0x152216c, "Ref_VehicleWeaponResource");
	apply_type(0x152216c, "RTTIPointer");

	// Ref<VertexArrayResource>
	set_name(0x14c8dfc, "Ref_VertexArrayResource");
	apply_type(0x14c8dfc, "RTTIPointer");

	// Ref<VignetteSettingsResource>
	set_name(0x14cbd24, "Ref_VignetteSettingsResource");
	apply_type(0x14cbd24, "RTTIPointer");

	// Ref<WWiseSoundBankResource>
	set_name(0x14de494, "Ref_WWiseSoundBankResource");
	apply_type(0x14de494, "RTTIPointer");

	// Ref<WWiseSoundZoneResource>
	set_name(0x14de5dc, "Ref_WWiseSoundZoneResource");
	apply_type(0x14de5dc, "RTTIPointer");

	// Ref<WaterResource>
	set_name(0x14cda58, "Ref_WaterResource");
	apply_type(0x14cda58, "RTTIPointer");

	// Ref<WaterSystemResource>
	set_name(0x14cd9f4, "Ref_WaterSystemResource");
	apply_type(0x14cd9f4, "RTTIPointer");

	// Ref<WeakResourceReference>
	set_name(0x1540a88, "Ref_WeakResourceReference");
	apply_type(0x1540a88, "RTTIPointer");

	// Ref<WeaponPickUpResource>
	set_name(0x1518f58, "Ref_WeaponPickUpResource");
	apply_type(0x1518f58, "RTTIPointer");

	// Ref<WeaponRackItem>
	set_name(0x1528694, "Ref_WeaponRackItem");
	apply_type(0x1528694, "RTTIPointer");

	// Ref<WidgetDecorationBracket>
	set_name(0x14c1acc, "Ref_WidgetDecorationBracket");
	apply_type(0x14c1acc, "RTTIPointer");

	// Ref<WipeCompletionRegion>
	set_name(0x154af2c, "Ref_WipeCompletionRegion");
	apply_type(0x154af2c, "RTTIPointer");

	// Ref<Zone>
	set_name(0x14ce004, "Ref_Zone");
	apply_type(0x14ce004, "RTTIPointer");

	// Ref<ZoomSetting>
	set_name(0x1528868, "Ref_ZoomSetting");
	apply_type(0x1528868, "RTTIPointer");

	// cptr<AIFaction>
	set_name(0x14cf068, "cptr_AIFaction");
	apply_type(0x14cf068, "RTTIPointer");

	// cptr<AILinkTypeInfo>
	set_name(0x14d6880, "cptr_AILinkTypeInfo");
	apply_type(0x14d6880, "RTTIPointer");

	// cptr<AnimationState>
	set_name(0x14b9a2c, "cptr_AnimationState");
	apply_type(0x14b9a2c, "RTTIPointer");

	// cptr<CoreObject>
	set_name(0x14bc6a4, "cptr_CoreObject");
	apply_type(0x14bc6a4, "RTTIPointer");

	// cptr<CreateEntityAction>
	set_name(0x14f8e70, "cptr_CreateEntityAction");
	apply_type(0x14f8e70, "RTTIPointer");

	// cptr<DamageTypeResource>
	set_name(0x14e1e7c, "cptr_DamageTypeResource");
	apply_type(0x14e1e7c, "RTTIPointer");

	// cptr<DestructionLogicAction>
	set_name(0x14e2de4, "cptr_DestructionLogicAction");
	apply_type(0x14e2de4, "RTTIPointer");

	// cptr<Entity>
	set_name(0x14e21c0, "cptr_Entity");
	apply_type(0x14e21c0, "RTTIPointer");

	// cptr<EntityRep>
	set_name(0x14e22e0, "cptr_EntityRep");
	apply_type(0x14e22e0, "RTTIPointer");

	// cptr<GestureAction>
	set_name(0x14eb14c, "cptr_GestureAction");
	apply_type(0x14eb14c, "RTTIPointer");

	// cptr<GestureNode>
	set_name(0x14eb0e8, "cptr_GestureNode");
	apply_type(0x14eb0e8, "RTTIPointer");

	// cptr<GestureResource>
	set_name(0x14eb074, "cptr_GestureResource");
	apply_type(0x14eb074, "RTTIPointer");

	// cptr<InventoryEntityResource>
	set_name(0x15138ec, "cptr_InventoryEntityResource");
	apply_type(0x15138ec, "RTTIPointer");

	// cptr<InventoryPlaceableResource>
	set_name(0x1512f48, "cptr_InventoryPlaceableResource");
	apply_type(0x1512f48, "RTTIPointer");

	// cptr<InventoryWeaponResource>
	set_name(0x1512e3c, "cptr_InventoryWeaponResource");
	apply_type(0x1512e3c, "RTTIPointer");

	// cptr<LeanAndPeekAction>
	set_name(0x1505198, "cptr_LeanAndPeekAction");
	apply_type(0x1505198, "RTTIPointer");

	// cptr<LeanAndPeekPosition>
	set_name(0x150522c, "cptr_LeanAndPeekPosition");
	apply_type(0x150522c, "RTTIPointer");

	// cptr<Light>
	set_name(0x14c88b0, "cptr_Light");
	apply_type(0x14c88b0, "RTTIPointer");

	// cptr<MeshHierachyShaderOverrides>
	set_name(0x14cb4d8, "cptr_MeshHierachyShaderOverrides");
	apply_type(0x14cb4d8, "RTTIPointer");

	// cptr<MissileSiloResource>
	set_name(0x1525fb4, "cptr_MissileSiloResource");
	apply_type(0x1525fb4, "RTTIPointer");

	// cptr<NetEntity>
	set_name(0x14e30b4, "cptr_NetEntity");
	apply_type(0x14e30b4, "RTTIPointer");

	// cptr<PivotFollowCameraEntityResource>
	set_name(0x150140c, "cptr_PivotFollowCameraEntityResource");
	apply_type(0x150140c, "RTTIPointer");

	// cptr<RadioMessage>
	set_name(0x14efec0, "cptr_RadioMessage");
	apply_type(0x14efec0, "RTTIPointer");

	// cptr<UseLocationResource>
	set_name(0x14e20e4, "cptr_UseLocationResource");
	apply_type(0x14e20e4, "RTTIPointer");

	// cptr<Zone>
	set_name(0x14cdfe4, "cptr_Zone");
	apply_type(0x14cdfe4, "RTTIPointer");

	// Array<AIAreaPortal>
	set_name(0x14d63c8, "Array_AIAreaPortal");
	apply_type(0x14d63c8, "RTTIContainer");

	// Array<AIFormationPosition>
	set_name(0x14d3330, "Array_AIFormationPosition");
	apply_type(0x14d3330, "RTTIContainer");

	// Array<AIPlayerBehaviorCategory>
	set_name(0x14d629c, "Array_AIPlayerBehaviorCategory");
	apply_type(0x14d629c, "RTTIContainer");

	// Array<AISequencedAimRow>
	set_name(0x14cf704, "Array_AISequencedAimRow");
	apply_type(0x14cf704, "RTTIContainer");

	// Array<AIStatement>
	set_name(0x14ced00, "Array_AIStatement");
	apply_type(0x14ced00, "RTTIContainer");

	// Array<AIStaticCoverMapObjectMappingEntry>
	set_name(0x14d72e8, "Array_AIStaticCoverMapObjectMappingEntry");
	apply_type(0x14d72e8, "RTTIContainer");

	// Array<AIWaypoint>
	set_name(0x14d6e48, "Array_AIWaypoint");
	apply_type(0x14d6e48, "RTTIContainer");

	// Array<AIWaypointAreaRadius>
	set_name(0x14d6eac, "Array_AIWaypointAreaRadius");
	apply_type(0x14d6eac, "RTTIContainer");

	// Array<AIWaypointNeighborIds>
	set_name(0x14d7080, "Array_AIWaypointNeighborIds");
	apply_type(0x14d7080, "RTTIContainer");

	// Array<AIWaypointNeighborLinkTypeInfo>
	set_name(0x14d70e4, "Array_AIWaypointNeighborLinkTypeInfo");
	apply_type(0x14d70e4, "RTTIContainer");

	// Array<AIWaypointNeighborTravel>
	set_name(0x14d71ac, "Array_AIWaypointNeighborTravel");
	apply_type(0x14d71ac, "RTTIContainer");

	// Array<AbilityRagdollConstraintMotorData>
	set_name(0x14e37f8, "Array_AbilityRagdollConstraintMotorData");
	apply_type(0x14e37f8, "RTTIContainer");

	// Array<AbilityShaderAnimationResourceLink>
	set_name(0x14e3c14, "Array_AbilityShaderAnimationResourceLink");
	apply_type(0x14e3c14, "RTTIContainer");

	// Array<Achievement>
	set_name(0x14f02c4, "Array_Achievement");
	apply_type(0x14f02c4, "RTTIContainer");

	// Array<ActionPerAnimationEvent>
	set_name(0x150ed34, "Array_ActionPerAnimationEvent");
	apply_type(0x150ed34, "RTTIContainer");

	// Array<AlphaPeg>
	set_name(0x14e0f20, "Array_AlphaPeg");
	apply_type(0x14e0f20, "RTTIContainer");

	// Array<AmmoBeltAnimationSettings>
	set_name(0x1505608, "Array_AmmoBeltAnimationSettings");
	apply_type(0x1505608, "RTTIContainer");

	// Array<AmmoBoxResourceReloadSettings>
	set_name(0x1502ae0, "Array_AmmoBoxResourceReloadSettings");
	apply_type(0x1502ae0, "RTTIContainer");

	// Array<AmmoPickupSetting>
	set_name(0x1518ef4, "Array_AmmoPickupSetting");
	apply_type(0x1518ef4, "RTTIContainer");

	// Array<AnimationEvent>
	set_name(0x14b97d4, "Array_AnimationEvent");
	apply_type(0x14b97d4, "RTTIContainer");

	// Array<AnimationExpressionCouple>
	set_name(0x153a93c, "Array_AnimationExpressionCouple");
	apply_type(0x153a93c, "RTTIContainer");

	// Array<AnimationPoseMatchingAnimationData>
	set_name(0x14e8d80, "Array_AnimationPoseMatchingAnimationData");
	apply_type(0x14e8d80, "RTTIContainer");

	// Array<AnimationPoseMatchingBoneData>
	set_name(0x14e8c44, "Array_AnimationPoseMatchingBoneData");
	apply_type(0x14e8c44, "RTTIContainer");

	// Array<AnimationPoseMatchingPose>
	set_name(0x14e8ca8, "Array_AnimationPoseMatchingPose");
	apply_type(0x14e8ca8, "RTTIContainer");

	// Array<AnimationSoundEvent>
	set_name(0x14b9838, "Array_AnimationSoundEvent");
	apply_type(0x14b9838, "RTTIContainer");

	// Array<AnimationStateGroup>
	set_name(0x14b9ac0, "Array_AnimationStateGroup");
	apply_type(0x14b9ac0, "RTTIContainer");

	// Array<AnimationTrackKeyFrame_FQuat>
	set_name(0x14b9f40, "Array_AnimationTrackKeyFrame_FQuat");
	apply_type(0x14b9f40, "RTTIContainer");

	// Array<AnimationTrackKeyFrame_FVector3>
	set_name(0x14b9e78, "Array_AnimationTrackKeyFrame_FVector3");
	apply_type(0x14b9e78, "RTTIContainer");

	// Array<AnimationTrackKeyFrame_FVector4>
	set_name(0x14b9edc, "Array_AnimationTrackKeyFrame_FVector4");
	apply_type(0x14b9edc, "RTTIContainer");

	// Array<AnimationTrackKeyFrame_RGBAColor>
	set_name(0x14b9fa4, "Array_AnimationTrackKeyFrame_RGBAColor");
	apply_type(0x14b9fa4, "RTTIContainer");

	// Array<AnimationTrackKeyFrame_bool>
	set_name(0x14b9db0, "Array_AnimationTrackKeyFrame_bool");
	apply_type(0x14b9db0, "RTTIContainer");

	// Array<AnimationTrackKeyFrame_float>
	set_name(0x14b9e14, "Array_AnimationTrackKeyFrame_float");
	apply_type(0x14b9e14, "RTTIContainer");

	// Array<AnimationWWiseSoundEvent>
	set_name(0x14b989c, "Array_AnimationWWiseSoundEvent");
	apply_type(0x14b989c, "RTTIContainer");

	// Array<AttachedLightBinding>
	set_name(0x150efa0, "Array_AttachedLightBinding");
	apply_type(0x150efa0, "RTTIContainer");

	// Array<AttachmentPConstraint>
	set_name(0x14e88c0, "Array_AttachmentPConstraint");
	apply_type(0x14e88c0, "RTTIContainer");

	// Array<AttackerToVictimDamageModifier>
	set_name(0x14ef624, "Array_AttackerToVictimDamageModifier");
	apply_type(0x14ef624, "RTTIContainer");

	// Array<AutoSelectNodeEntry>
	set_name(0x14e8e58, "Array_AutoSelectNodeEntry");
	apply_type(0x14e8e58, "RTTIContainer");

	// Array<AxisFunctionMapping>
	set_name(0x14eabc4, "Array_AxisFunctionMapping");
	apply_type(0x14eabc4, "RTTIContainer");

	// Array<BadgeIcon>
	set_name(0x1531300, "Array_BadgeIcon");
	apply_type(0x1531300, "RTTIContainer");

	// Array<BaselineTimes>
	set_name(0x152b104, "Array_BaselineTimes");
	apply_type(0x152b104, "RTTIContainer");

	// Array<BeyondUseLocationInfo>
	set_name(0x154ea0c, "Array_BeyondUseLocationInfo");
	apply_type(0x154ea0c, "RTTIContainer");

	// Array<BlendExpressionByteCode>
	set_name(0x14ba2e4, "Array_BlendExpressionByteCode");
	apply_type(0x14ba2e4, "RTTIContainer");

	// Array<BlendTargetDeformation>
	set_name(0x14d9ff4, "Array_BlendTargetDeformation");
	apply_type(0x14d9ff4, "RTTIContainer");

	// Array<BlendedMeshEntry>
	set_name(0x14bf0e8, "Array_BlendedMeshEntry");
	apply_type(0x14bf0e8, "RTTIContainer");

	// Array<BloodSplatterProperties>
	set_name(0x1533fa0, "Array_BloodSplatterProperties");
	apply_type(0x1533fa0, "RTTIContainer");

	// Array<BoneAttachedParticleSystemLink>
	set_name(0x14e7798, "Array_BoneAttachedParticleSystemLink");
	apply_type(0x14e7798, "RTTIContainer");

	// Array<BoundingBox3>
	set_name(0x14ada6c, "Array_BoundingBox3");
	apply_type(0x14ada6c, "RTTIContainer");

	// Array<BoundingSphere>
	set_name(0x14adad0, "Array_BoundingSphere");
	apply_type(0x14adad0, "RTTIContainer");

	// Array<BrutalMeleeDeathSoundOverride>
	set_name(0x150f2d4, "Array_BrutalMeleeDeathSoundOverride");
	apply_type(0x150f2d4, "RTTIContainer");

	// Array<BrutalMeleeRegionSettings>
	set_name(0x150f39c, "Array_BrutalMeleeRegionSettings");
	apply_type(0x150f39c, "RTTIContainer");

	// Array<ButtonFunctionMapping>
	set_name(0x14eab60, "Array_ButtonFunctionMapping");
	apply_type(0x14eab60, "RTTIContainer");

	// Array<ButtonIcon>
	set_name(0x1530954, "Array_ButtonIcon");
	apply_type(0x1530954, "RTTIContainer");

	// Array<ButtonPressureDefinition>
	set_name(0x14ea9d0, "Array_ButtonPressureDefinition");
	apply_type(0x14ea9d0, "RTTIContainer");

	// Array<CaHObjective>
	set_name(0x1528b7c, "Array_CaHObjective");
	apply_type(0x1528b7c, "RTTIContainer");

	// Array<CaptureAndHoldMapZone>
	set_name(0x153087c, "Array_CaptureAndHoldMapZone");
	apply_type(0x153087c, "RTTIContainer");

	// Array<CharacterHeadLOD>
	set_name(0x1547dec, "Array_CharacterHeadLOD");
	apply_type(0x1547dec, "RTTIContainer");

	// Array<ChildEntityDescription>
	set_name(0x14e2354, "Array_ChildEntityDescription");
	apply_type(0x14e2354, "RTTIContainer");

	// Array<CircleSettings>
	set_name(0x14cbc58, "Array_CircleSettings");
	apply_type(0x14cbc58, "RTTIContainer");

	// Array<CloseCombatEffect>
	set_name(0x150f270, "Array_CloseCombatEffect");
	apply_type(0x150f270, "RTTIContainer");

	// Array<CloseCombatStrike>
	set_name(0x1512d74, "Array_CloseCombatStrike");
	apply_type(0x1512d74, "RTTIContainer");

	// Array<CloseCombatVariation>
	set_name(0x1512dd8, "Array_CloseCombatVariation");
	apply_type(0x1512dd8, "RTTIContainer");

	// Array<CollisionHullToRagdollMapping>
	set_name(0x14e385c, "Array_CollisionHullToRagdollMapping");
	apply_type(0x14e385c, "RTTIContainer");

	// Array<ColorPeg>
	set_name(0x14e0ebc, "Array_ColorPeg");
	apply_type(0x14e0ebc, "RTTIContainer");

	// Array<ColorizeSettings>
	set_name(0x14cbad0, "Array_ColorizeSettings");
	apply_type(0x14cbad0, "RTTIContainer");

	// Array<ComponentPerAnimationEvent>
	set_name(0x150ee40, "Array_ComponentPerAnimationEvent");
	apply_type(0x150ee40, "RTTIContainer");

	// Array<CompositeAnimationInfo>
	set_name(0x14d99a0, "Array_CompositeAnimationInfo");
	apply_type(0x14d99a0, "RTTIContainer");

	// Array<CompoundStatResource>
	set_name(0x153e9f0, "Array_CompoundStatResource");
	apply_type(0x153e9f0, "RTTIContainer");

	// Array<CompressedPathElement>
	set_name(0x14ba82c, "Array_CompressedPathElement");
	apply_type(0x14ba82c, "RTTIContainer");

	// Array<ControllerLegend>
	set_name(0x14eac8c, "Array_ControllerLegend");
	apply_type(0x14eac8c, "RTTIContainer");

	// Array<ConvexHullTriangle>
	set_name(0x14adb38, "Array_ConvexHullTriangle");
	apply_type(0x14adb38, "RTTIContainer");

	// Array<CoverConnection>
	set_name(0x14f0134, "Array_CoverConnection");
	apply_type(0x14f0134, "RTTIContainer");

	// Array<CoverWall>
	set_name(0x14f0198, "Array_CoverWall");
	apply_type(0x14f0198, "RTTIContainer");

	// Array<DamageModifierPerDamageType>
	set_name(0x14f9cac, "Array_DamageModifierPerDamageType");
	apply_type(0x14f9cac, "RTTIContainer");

	// Array<DamageModifierResource>
	set_name(0x14f9d10, "Array_DamageModifierResource");
	apply_type(0x14f9d10, "RTTIContainer");

	// Array<DamagePassOnData>
	set_name(0x14e2998, "Array_DamagePassOnData");
	apply_type(0x14e2998, "RTTIContainer");

	// Array<DestructibilityConstraint>
	set_name(0x14e2a60, "Array_DestructibilityConstraint");
	apply_type(0x14e2a60, "RTTIContainer");

	// Array<DestructibilityHitReaction>
	set_name(0x14e286c, "Array_DestructibilityHitReaction");
	apply_type(0x14e286c, "RTTIContainer");

	// Array<DestructibilityPart>
	set_name(0x14e29fc, "Array_DestructibilityPart");
	apply_type(0x14e29fc, "RTTIContainer");

	// Array<DestructibilityTimeLineKey>
	set_name(0x14e2d2c, "Array_DestructibilityTimeLineKey");
	apply_type(0x14e2d2c, "RTTIContainer");

	// Array<DestructiblePartToHitLocationMapping>
	set_name(0x14fb328, "Array_DestructiblePartToHitLocationMapping");
	apply_type(0x14fb328, "RTTIContainer");

	// Array<DirectionalAnimationInfo>
	set_name(0x14d98e8, "Array_DirectionalAnimationInfo");
	apply_type(0x14d98e8, "RTTIContainer");

	// Array<DisabledBrutalMeleeAnimation>
	set_name(0x150f338, "Array_DisabledBrutalMeleeAnimation");
	apply_type(0x150f338, "RTTIContainer");

	// Array<EControlType>
	set_name(0x1502c94, "Array_EControlType");
	apply_type(0x1502c94, "RTTIContainer");

	// Array<EDifficulty>
	set_name(0x14ea708, "Array_EDifficulty");
	apply_type(0x14ea708, "RTTIContainer");

	// Array<EFaction>
	set_name(0x14eaf18, "Array_EFaction");
	apply_type(0x14eaf18, "RTTIContainer");

	// Array<EHumanoidHitDirection>
	set_name(0x14faedc, "Array_EHumanoidHitDirection");
	apply_type(0x14faedc, "RTTIContainer");

	// Array<EHumanoidHitLocation>
	set_name(0x14faebc, "Array_EHumanoidHitLocation");
	apply_type(0x14faebc, "RTTIContainer");

	// Array<ELegendButton>
	set_name(0x14c06c4, "Array_ELegendButton");
	apply_type(0x14c06c4, "RTTIContainer");

	// Array<EOSDEventID>
	set_name(0x15014c4, "Array_EOSDEventID");
	apply_type(0x15014c4, "RTTIContainer");

	// Array<EPlayerScoreStat>
	set_name(0x14f03d8, "Array_EPlayerScoreStat");
	apply_type(0x14f03d8, "RTTIContainer");

	// Array<ERegion>
	set_name(0x14b8fac, "Array_ERegion");
	apply_type(0x14b8fac, "RTTIContainer");

	// Array<ESoundMasterVolumeGroup>
	set_name(0x14dd46c, "Array_ESoundMasterVolumeGroup");
	apply_type(0x14dd46c, "RTTIContainer");

	// Array<ESoundSubmixBus>
	set_name(0x14ddd0c, "Array_ESoundSubmixBus");
	apply_type(0x14ddd0c, "RTTIContainer");

	// Array<EjectLocation>
	set_name(0x15224c0, "Array_EjectLocation");
	apply_type(0x15224c0, "RTTIContainer");

	// Array<EmitterVertex>
	set_name(0x14c4318, "Array_EmitterVertex");
	apply_type(0x14c4318, "RTTIContainer");

	// Array<EntityPlaceHolderAttr>
	set_name(0x14e1fbc, "Array_EntityPlaceHolderAttr");
	apply_type(0x14e1fbc, "RTTIContainer");

	// Array<EntityScoreSettings>
	set_name(0x14f0524, "Array_EntityScoreSettings");
	apply_type(0x14f0524, "RTTIContainer");

	// Array<ExplosiveLocationIndicatorLight>
	set_name(0x1508054, "Array_ExplosiveLocationIndicatorLight");
	apply_type(0x1508054, "RTTIContainer");

	// Array<ExternalAnimationEvent>
	set_name(0x14b9b24, "Array_ExternalAnimationEvent");
	apply_type(0x14b9b24, "RTTIContainer");

	// Array<ExternalAnimationSoundEvent>
	set_name(0x14b9b88, "Array_ExternalAnimationSoundEvent");
	apply_type(0x14b9b88, "RTTIContainer");

	// Array<ExternalAnimationWWiseSoundEvent>
	set_name(0x14b9bec, "Array_ExternalAnimationWWiseSoundEvent");
	apply_type(0x14b9bec, "RTTIContainer");

	// Array<ExtraAmmoSettings>
	set_name(0x14eee68, "Array_ExtraAmmoSettings");
	apply_type(0x14eee68, "RTTIContainer");

	// Array<ExtraDamageSettings>
	set_name(0x14eef74, "Array_ExtraDamageSettings");
	apply_type(0x14eef74, "RTTIContainer");

	// Array<FPDestructibilityEffect>
	set_name(0x15268f0, "Array_FPDestructibilityEffect");
	apply_type(0x15268f0, "RTTIContainer");

	// Array<FPMoverSuspension>
	set_name(0x14fba70, "Array_FPMoverSuspension");
	apply_type(0x14fba70, "RTTIContainer");

	// Array<FRange>
	set_name(0x14ab468, "Array_FRange");
	apply_type(0x14ab468, "RTTIContainer");

	// Array<FVector2>
	set_name(0x14b7bcc, "Array_FVector2");
	apply_type(0x14b7bcc, "RTTIContainer");

	// Array<FVector3>
	set_name(0x14b7c30, "Array_FVector3");
	apply_type(0x14b7c30, "RTTIContainer");

	// Array<FacialExpressionLOD>
	set_name(0x153aa68, "Array_FacialExpressionLOD");
	apply_type(0x153aa68, "RTTIContainer");

	// Array<Filename>
	set_name(0x14b9534, "Array_Filename");
	apply_type(0x14b9534, "RTTIContainer");

	// Array<FloatPerDifficulty>
	set_name(0x14ea728, "Array_FloatPerDifficulty");
	apply_type(0x14ea728, "RTTIContainer");

	// Array<FogSettings>
	set_name(0x14cbb34, "Array_FogSettings");
	apply_type(0x14cbb34, "RTTIContainer");

	// Array<FontCharGlyphInfo>
	set_name(0x14b4240, "Array_FontCharGlyphInfo");
	apply_type(0x14b4240, "RTTIContainer");

	// Array<FontKerningPair>
	set_name(0x14b42a4, "Array_FontKerningPair");
	apply_type(0x14b42a4, "RTTIContainer");

	// Array<GainTemporaryModifier>
	set_name(0x14c7fac, "Array_GainTemporaryModifier");
	apply_type(0x14c7fac, "RTTIContainer");

	// Array<Gesture>
	set_name(0x1520d1c, "Array_Gesture");
	apply_type(0x1520d1c, "RTTIContainer");

	// Array<GlyphContour>
	set_name(0x14b408c, "Array_GlyphContour");
	apply_type(0x14b408c, "RTTIContainer");

	// Array<GlyphContourCmd>
	set_name(0x14b4028, "Array_GlyphContourCmd");
	apply_type(0x14b4028, "RTTIContainer");

	// Array<GroupedObjectFilter>
	set_name(0x153ae74, "Array_GroupedObjectFilter");
	apply_type(0x153ae74, "RTTIContainer");

	// Array<HUDAnimatedIconAnimationTracks>
	set_name(0x1530e5c, "Array_HUDAnimatedIconAnimationTracks");
	apply_type(0x1530e5c, "RTTIContainer");

	// Array<HUDCrosshairPart>
	set_name(0x1531030, "Array_HUDCrosshairPart");
	apply_type(0x1531030, "RTTIContainer");

	// Array<HUDPartIcon>
	set_name(0x14fac78, "Array_HUDPartIcon");
	apply_type(0x14fac78, "RTTIContainer");

	// Array<HUDPartText>
	set_name(0x14fad94, "Array_HUDPartText");
	apply_type(0x14fad94, "RTTIContainer");

	// Array<HeldItemsHolderSlot>
	set_name(0x154b384, "Array_HeldItemsHolderSlot");
	apply_type(0x154b384, "RTTIContainer");

	// Array<HumanoidBodyVariant>
	set_name(0x14fb260, "Array_HumanoidBodyVariant");
	apply_type(0x14fb260, "RTTIContainer");

	// Array<IRect>
	set_name(0x14b7d1c, "Array_IRect");
	apply_type(0x14b7d1c, "RTTIContainer");

	// Array<IdleSpeechGroupResourceInfo>
	set_name(0x154fa6c, "Array_IdleSpeechGroupResourceInfo");
	apply_type(0x154fa6c, "RTTIContainer");

	// Array<ImpactEffectParticles>
	set_name(0x14bd058, "Array_ImpactEffectParticles");
	apply_type(0x14bd058, "RTTIContainer");

	// Array<ImpactEffectRegionOverride>
	set_name(0x14bd174, "Array_ImpactEffectRegionOverride");
	apply_type(0x14bd174, "RTTIContainer");

	// Array<ImpactEffectVariation>
	set_name(0x14bd110, "Array_ImpactEffectVariation");
	apply_type(0x14bd110, "RTTIContainer");

	// Array<InitAnimationVariableInfo>
	set_name(0x1550804, "Array_InitAnimationVariableInfo");
	apply_type(0x1550804, "RTTIContainer");

	// Array<IntPerDifficulty>
	set_name(0x14ea78c, "Array_IntPerDifficulty");
	apply_type(0x14ea78c, "RTTIContainer");

	// Array<InteractionVectorTrack>
	set_name(0x154e7b0, "Array_InteractionVectorTrack");
	apply_type(0x154e7b0, "RTTIContainer");

	// Array<InteractiveEntityIKTargetInfo>
	set_name(0x1504ddc, "Array_InteractiveEntityIKTargetInfo");
	apply_type(0x1504ddc, "RTTIContainer");

	// Array<JetpackThrusterEffectSetupLocation>
	set_name(0x15131f8, "Array_JetpackThrusterEffectSetupLocation");
	apply_type(0x15131f8, "RTTIContainer");

	// Array<Joint>
	set_name(0x14da100, "Array_Joint");
	apply_type(0x14da100, "RTTIContainer");

	// Array<LadderClimbCycleSound>
	set_name(0x1505038, "Array_LadderClimbCycleSound");
	apply_type(0x1505038, "RTTIContainer");

	// Array<LevelListLevel>
	set_name(0x14ef8c0, "Array_LevelListLevel");
	apply_type(0x14ef8c0, "RTTIContainer");

	// Array<LevelListLevelNode>
	set_name(0x14ef85c, "Array_LevelListLevelNode");
	apply_type(0x14ef85c, "RTTIContainer");

	// Array<LevelSectionLump>
	set_name(0x14e0a70, "Array_LevelSectionLump");
	apply_type(0x14e0a70, "RTTIContainer");

	// Array<LiftWheel>
	set_name(0x1500e68, "Array_LiftWheel");
	apply_type(0x1500e68, "RTTIContainer");

	// Array<LightProbe>
	set_name(0x14c8968, "Array_LightProbe");
	apply_type(0x14c8968, "RTTIContainer");

	// Array<LightProbeKdTreeObject>
	set_name(0x14c8ac8, "Array_LightProbeKdTreeObject");
	apply_type(0x14c8ac8, "RTTIContainer");

	// Array<LocalizedTextEntry>
	set_name(0x14e0fe8, "Array_LocalizedTextEntry");
	apply_type(0x14e0fe8, "RTTIContainer");

	// Array<LodMeshResourcePart>
	set_name(0x14bebc0, "Array_LodMeshResourcePart");
	apply_type(0x14bebc0, "RTTIContainer");

	// Array<MapIcon>
	set_name(0x15306a8, "Array_MapIcon");
	apply_type(0x15306a8, "RTTIContainer");

	// Array<MapZone>
	set_name(0x1530818, "Array_MapZone");
	apply_type(0x1530818, "RTTIContainer");

	// Array<MaterialTypeReplacement>
	set_name(0x14fa5b8, "Array_MaterialTypeReplacement");
	apply_type(0x14fa5b8, "RTTIContainer");

	// Array<MedalRanksResource>
	set_name(0x152b230, "Array_MedalRanksResource");
	apply_type(0x152b230, "RTTIContainer");

	// Array<MedalResource>
	set_name(0x152b294, "Array_MedalResource");
	apply_type(0x152b294, "RTTIContainer");

	// Array<MenuScreenURI>
	set_name(0x153e180, "Array_MenuScreenURI");
	apply_type(0x153e180, "RTTIContainer");

	// Array<MeshShaderOverrides>
	set_name(0x14cb474, "Array_MeshShaderOverrides");
	apply_type(0x14cb474, "RTTIContainer");

	// Array<MissionEvent>
	set_name(0x1528c88, "Array_MissionEvent");
	apply_type(0x1528c88, "RTTIContainer");

	// Array<MissionRadioMessage>
	set_name(0x14fab6c, "Array_MissionRadioMessage");
	apply_type(0x14fab6c, "RTTIContainer");

	// Array<MissionSettings>
	set_name(0x1528ec0, "Array_MissionSettings");
	apply_type(0x1528ec0, "RTTIContainer");

	// Array<ModelProxyRemapEntry>
	set_name(0x14e7bb8, "Array_ModelProxyRemapEntry");
	apply_type(0x14e7bb8, "RTTIContainer");

	// Array<MotionSensorFunctionMapping>
	set_name(0x14eac28, "Array_MotionSensorFunctionMapping");
	apply_type(0x14eac28, "RTTIContainer");

	// Array<MountedGunWeaponSettingsModelPart>
	set_name(0x1505724, "Array_MountedGunWeaponSettingsModelPart");
	apply_type(0x1505724, "RTTIContainer");

	// Array<MoveThroughSubGoalTarget>
	set_name(0x151cee4, "Array_MoveThroughSubGoalTarget");
	apply_type(0x151cee4, "RTTIContainer");

	// Array<MovieSkipLocation>
	set_name(0x14efb9c, "Array_MovieSkipLocation");
	apply_type(0x14efb9c, "RTTIContainer");

	// Array<MovieSubtitle>
	set_name(0x153e11c, "Array_MovieSubtitle");
	apply_type(0x153e11c, "RTTIContainer");

	// Array<MultiMeshResourcePart>
	set_name(0x14becec, "Array_MultiMeshResourcePart");
	apply_type(0x14becec, "RTTIContainer");

	// Array<NamedMoveCurve>
	set_name(0x14eaa98, "Array_NamedMoveCurve");
	apply_type(0x14eaa98, "RTTIContainer");

	// Array<NodeSectionMapping>
	set_name(0x14ef6ec, "Array_NodeSectionMapping");
	apply_type(0x14ef6ec, "RTTIContainer");

	// Array<OSDEventSettings>
	set_name(0x15014e4, "Array_OSDEventSettings");
	apply_type(0x15014e4, "RTTIContainer");

	// Array<ObjectiveCount>
	set_name(0x14fb520, "Array_ObjectiveCount");
	apply_type(0x14fb520, "RTTIContainer");

	// Array<OrientationHelper>
	set_name(0x14da1c8, "Array_OrientationHelper");
	apply_type(0x14da1c8, "RTTIContainer");

	// Array<PBDConstraintDesc>
	set_name(0x14bd2f8, "Array_PBDConstraintDesc");
	apply_type(0x14bd2f8, "RTTIContainer");

	// Array<PBDVertexDesc>
	set_name(0x14bd35c, "Array_PBDVertexDesc");
	apply_type(0x14bd35c, "RTTIContainer");

	// Array<ParTimeNodeInfo>
	set_name(0x152b0a0, "Array_ParTimeNodeInfo");
	apply_type(0x152b0a0, "RTTIContainer");

	// Array<ParticleEventVirtualEmitter>
	set_name(0x151d140, "Array_ParticleEventVirtualEmitter");
	apply_type(0x151d140, "RTTIContainer");

	// Array<ParticleShaderVariable>
	set_name(0x14c45ec, "Array_ParticleShaderVariable");
	apply_type(0x14c45ec, "RTTIContainer");

	// Array<ParticleVertexAttribute>
	set_name(0x14c4568, "Array_ParticleVertexAttribute");
	apply_type(0x14c4568, "RTTIContainer");

	// Array<PhonemeBoneTarget>
	set_name(0x153aacc, "Array_PhonemeBoneTarget");
	apply_type(0x153aacc, "RTTIContainer");

	// Array<PhonemeFloatShaderTarget>
	set_name(0x153ab30, "Array_PhonemeFloatShaderTarget");
	apply_type(0x153ab30, "RTTIContainer");

	// Array<PhonemeTarget>
	set_name(0x14e3668, "Array_PhonemeTarget");
	apply_type(0x14e3668, "RTTIContainer");

	// Array<PhysicsDamageImpulseModifier>
	set_name(0x14e807c, "Array_PhysicsDamageImpulseModifier");
	apply_type(0x14e807c, "RTTIContainer");

	// Array<PhysicsRagdollBodyControlData>
	set_name(0x14c7538, "Array_PhysicsRagdollBodyControlData");
	apply_type(0x14c7538, "RTTIContainer");

	// Array<PhysicsRagdollMotorControlData>
	set_name(0x14c7470, "Array_PhysicsRagdollMotorControlData");
	apply_type(0x14c7470, "RTTIContainer");

	// Array<PhysicsVehicleWheelInfo>
	set_name(0x14c66fc, "Array_PhysicsVehicleWheelInfo");
	apply_type(0x14c66fc, "RTTIContainer");

	// Array<PickUpDropAmmoPickUp>
	set_name(0x1518aa4, "Array_PickUpDropAmmoPickUp");
	apply_type(0x1518aa4, "RTTIContainer");

	// Array<PickUpDropRandomPickUp>
	set_name(0x1518b08, "Array_PickUpDropRandomPickUp");
	apply_type(0x1518b08, "RTTIContainer");

	// Array<PickUpDropResourceWithOdds>
	set_name(0x1518b6c, "Array_PickUpDropResourceWithOdds");
	apply_type(0x1518b6c, "RTTIContainer");

	// Array<PlayerRank>
	set_name(0x14f046c, "Array_PlayerRank");
	apply_type(0x14f046c, "RTTIContainer");

	// Array<PrimitiveDeltaDeformation>
	set_name(0x14d9f90, "Array_PrimitiveDeltaDeformation");
	apply_type(0x14d9f90, "RTTIContainer");

	// Array<PrimitiveSkinInfo>
	set_name(0x14d9ec8, "Array_PrimitiveSkinInfo");
	apply_type(0x14d9ec8, "RTTIContainer");

	// Array<ProjMatrix>
	set_name(0x14b7e6c, "Array_ProjMatrix");
	apply_type(0x14b7e6c, "RTTIContainer");

	// Array<RGBAColor>
	set_name(0x14ab520, "Array_RGBAColor");
	apply_type(0x14ab520, "RTTIContainer");

	// Array<Ref<AIArea>>
	set_name(0x14d6364, "Array_Ref_AIArea");
	apply_type(0x14d6364, "RTTIContainer");

	// Array<Ref<AIBehaviour>>
	set_name(0x154446c, "Array_Ref_AIBehaviour");
	apply_type(0x154446c, "RTTIContainer");

	// Array<Ref<AIBrainFragmentResource>>
	set_name(0x15443a4, "Array_Ref_AIBrainFragmentResource");
	apply_type(0x15443a4, "RTTIContainer");

	// Array<Ref<AIContextResource>>
	set_name(0x14cfaf0, "Array_Ref_AIContextResource");
	apply_type(0x14cfaf0, "RTTIContainer");

	// Array<Ref<AIFaction>>
	set_name(0x14cf098, "Array_Ref_AIFaction");
	apply_type(0x14cf098, "RTTIContainer");

	// Array<Ref<AILookContext>>
	set_name(0x154478c, "Array_Ref_AILookContext");
	apply_type(0x154478c, "RTTIContainer");

	// Array<Ref<AIMovementContext>>
	set_name(0x1544864, "Array_Ref_AIMovementContext");
	apply_type(0x1544864, "RTTIContainer");

	// Array<Ref<AIPositionPickerResource>>
	set_name(0x14d6ac8, "Array_Ref_AIPositionPickerResource");
	apply_type(0x14d6ac8, "RTTIContainer");

	// Array<Ref<AIStaticCoverMap>>
	set_name(0x14d7404, "Array_Ref_AIStaticCoverMap");
	apply_type(0x14d7404, "RTTIContainer");

	// Array<Ref<AIWeaponPreference>>
	set_name(0x14d2460, "Array_Ref_AIWeaponPreference");
	apply_type(0x14d2460, "RTTIContainer");

	// Array<Ref<AIWeaponPreferenceSettings>>
	set_name(0x14d24d4, "Array_Ref_AIWeaponPreferenceSettings");
	apply_type(0x14d24d4, "RTTIContainer");

	// Array<Ref<AOEUseLocationInfoActionPair>>
	set_name(0x154feec, "Array_Ref_AOEUseLocationInfoActionPair");
	apply_type(0x154feec, "RTTIContainer");

	// Array<Ref<AbilityAnimationResource>>
	set_name(0x14e32e0, "Array_Ref_AbilityAnimationResource");
	apply_type(0x14e32e0, "RTTIContainer");

	// Array<Ref<AbilityResource>>
	set_name(0x14e3998, "Array_Ref_AbilityResource");
	apply_type(0x14e3998, "RTTIContainer");

	// Array<Ref<ActorResource>>
	set_name(0x151fd64, "Array_Ref_ActorResource");
	apply_type(0x151fd64, "RTTIContainer");

	// Array<Ref<AmmoEjectorResource>>
	set_name(0x1522408, "Array_Ref_AmmoEjectorResource");
	apply_type(0x1522408, "RTTIContainer");

	// Array<Ref<AngularBoneSpeedTrackerResource>>
	set_name(0x1541b98, "Array_Ref_AngularBoneSpeedTrackerResource");
	apply_type(0x1541b98, "RTTIContainer");

	// Array<Ref<AnimationDiagramState>>
	set_name(0x154207c, "Array_Ref_AnimationDiagramState");
	apply_type(0x154207c, "RTTIContainer");

	// Array<Ref<AnimationDiagramStateAnimationArray>>
	set_name(0x1542008, "Array_Ref_AnimationDiagramStateAnimationArray");
	apply_type(0x1542008, "RTTIContainer");

	// Array<Ref<AnimationDiagramStateAnimationInfo>>
	set_name(0x1541f94, "Array_Ref_AnimationDiagramStateAnimationInfo");
	apply_type(0x1541f94, "RTTIContainer");

	// Array<Ref<AnimationMotionBase>>
	set_name(0x1540860, "Array_Ref_AnimationMotionBase");
	apply_type(0x1540860, "RTTIContainer");

	// Array<Ref<AnimationState>>
	set_name(0x14b9a5c, "Array_Ref_AnimationState");
	apply_type(0x14b9a5c, "RTTIContainer");

	// Array<Ref<Asset>>
	set_name(0x14bc130, "Array_Ref_Asset");
	apply_type(0x14bc130, "RTTIContainer");

	// Array<Ref<BaseConcreteAsset>>
	set_name(0x14bc1a4, "Array_Ref_BaseConcreteAsset");
	apply_type(0x14bc1a4, "RTTIContainer");

	// Array<Ref<CaptureAndHoldAreaFactionSettings>>
	set_name(0x1521db0, "Array_Ref_CaptureAndHoldAreaFactionSettings");
	apply_type(0x1521db0, "RTTIContainer");

	// Array<Ref<Career>>
	set_name(0x153e908, "Array_Ref_Career");
	apply_type(0x153e908, "RTTIContainer");

	// Array<Ref<CareerUnlock>>
	set_name(0x153e894, "Array_Ref_CareerUnlock");
	apply_type(0x153e894, "RTTIContainer");

	// Array<Ref<CharacterFacialExpressionAnimation>>
	set_name(0x1547d88, "Array_Ref_CharacterFacialExpressionAnimation");
	apply_type(0x1547d88, "RTTIContainer");

	// Array<Ref<ClueLineResource>>
	set_name(0x15423b0, "Array_Ref_ClueLineResource");
	apply_type(0x15423b0, "RTTIContainer");

	// Array<Ref<CluePageResource>>
	set_name(0x1542488, "Array_Ref_CluePageResource");
	apply_type(0x1542488, "RTTIContainer");

	// Array<Ref<ClueResource>>
	set_name(0x1542560, "Array_Ref_ClueResource");
	apply_type(0x1542560, "RTTIContainer");

	// Array<Ref<ClueRevelationResource>>
	set_name(0x1542638, "Array_Ref_ClueRevelationResource");
	apply_type(0x1542638, "RTTIContainer");

	// Array<Ref<ClusterGrenadeFragmentResource>>
	set_name(0x1525d9c, "Array_Ref_ClusterGrenadeFragmentResource");
	apply_type(0x1525d9c, "RTTIContainer");

	// Array<Ref<CommunicationMessageEvent>>
	set_name(0x1547338, "Array_Ref_CommunicationMessageEvent");
	apply_type(0x1547338, "RTTIContainer");

	// Array<Ref<ConcreteAsset>>
	set_name(0x14bc218, "Array_Ref_ConcreteAsset");
	apply_type(0x14bc218, "RTTIContainer");

	// Array<Ref<CoreObject>>
	set_name(0x14bc6d4, "Array_Ref_CoreObject");
	apply_type(0x14bc6d4, "RTTIContainer");

	// Array<Ref<DLCResource>>
	set_name(0x14efa60, "Array_Ref_DLCResource");
	apply_type(0x14efa60, "RTTIContainer");

	// Array<Ref<DamageTypeResource>>
	set_name(0x14e1e9c, "Array_Ref_DamageTypeResource");
	apply_type(0x14e1e9c, "RTTIContainer");

	// Array<Ref<DestructibilityConstraintState>>
	set_name(0x14e2c54, "Array_Ref_DestructibilityConstraintState");
	apply_type(0x14e2c54, "RTTIContainer");

	// Array<Ref<DestructibilityPartState>>
	set_name(0x14e2be0, "Array_Ref_DestructibilityPartState");
	apply_type(0x14e2be0, "RTTIContainer");

	// Array<Ref<DestructibilityPartStateResource>>
	set_name(0x14e28e0, "Array_Ref_DestructibilityPartStateResource");
	apply_type(0x14e28e0, "RTTIContainer");

	// Array<Ref<DestructibilityState>>
	set_name(0x14e2cc8, "Array_Ref_DestructibilityState");
	apply_type(0x14e2cc8, "RTTIContainer");

	// Array<Ref<DifficultyRangeResource>>
	set_name(0x14ea864, "Array_Ref_DifficultyRangeResource");
	apply_type(0x14ea864, "RTTIContainer");

	// Array<Ref<EffectComponentResource>>
	set_name(0x150f864, "Array_Ref_EffectComponentResource");
	apply_type(0x150f864, "RTTIContainer");

	// Array<Ref<ElectricityDrawSettings>>
	set_name(0x153c918, "Array_Ref_ElectricityDrawSettings");
	apply_type(0x153c918, "RTTIContainer");

	// Array<Ref<ElectricityGridNodeResource>>
	set_name(0x153c15c, "Array_Ref_ElectricityGridNodeResource");
	apply_type(0x153c15c, "RTTIContainer");

	// Array<Ref<ElectricitySpawnEntityResource>>
	set_name(0x153ca44, "Array_Ref_ElectricitySpawnEntityResource");
	apply_type(0x153ca44, "RTTIContainer");

	// Array<Ref<EntityComponentResource>>
	set_name(0x14e24f4, "Array_Ref_EntityComponentResource");
	apply_type(0x14e24f4, "RTTIContainer");

	// Array<Ref<EntityResource>>
	set_name(0x14e23d8, "Array_Ref_EntityResource");
	apply_type(0x14e23d8, "RTTIContainer");

	// Array<Ref<EventResource>>
	set_name(0x1519bf0, "Array_Ref_EventResource");
	apply_type(0x1519bf0, "RTTIContainer");

	// Array<Ref<FirearmResource>>
	set_name(0x154a924, "Array_Ref_FirearmResource");
	apply_type(0x154a924, "RTTIContainer");

	// Array<Ref<HUDElementResource>>
	set_name(0x1530aa0, "Array_Ref_HUDElementResource");
	apply_type(0x1530aa0, "RTTIContainer");

	// Array<Ref<HumanoidHitResponseBehaviour>>
	set_name(0x14fb100, "Array_Ref_HumanoidHitResponseBehaviour");
	apply_type(0x14fb100, "RTTIContainer");

	// Array<Ref<HumanoidSubStateUsingInteractiveEntityResource>>
	set_name(0x150ea30, "Array_Ref_HumanoidSubStateUsingInteractiveEntityResource");
	apply_type(0x150ea30, "RTTIContainer");

	// Array<Ref<ImageMap>>
	set_name(0x14c95bc, "Array_Ref_ImageMap");
	apply_type(0x14c95bc, "RTTIContainer");

	// Array<Ref<InventoryCaptureSpawnAbilityResource>>
	set_name(0x1517ba0, "Array_Ref_InventoryCaptureSpawnAbilityResource");
	apply_type(0x1517ba0, "RTTIContainer");

	// Array<Ref<LeanAndPeekAction>>
	set_name(0x15051c8, "Array_Ref_LeanAndPeekAction");
	apply_type(0x15051c8, "RTTIContainer");

	// Array<Ref<LeanAndPeekPosition>>
	set_name(0x150524c, "Array_Ref_LeanAndPeekPosition");
	apply_type(0x150524c, "RTTIContainer");

	// Array<Ref<LevelListResource>>
	set_name(0x14ef934, "Array_Ref_LevelListResource");
	apply_type(0x14ef934, "RTTIContainer");

	// Array<Ref<LevelSection>>
	set_name(0x14e0ae4, "Array_Ref_LevelSection");
	apply_type(0x14e0ae4, "RTTIContainer");

	// Array<Ref<LightResource>>
	set_name(0x14c8b90, "Array_Ref_LightResource");
	apply_type(0x14c8b90, "RTTIContainer");

	// Array<Ref<LinearBoneSpeedTrackerResource>>
	set_name(0x1541b24, "Array_Ref_LinearBoneSpeedTrackerResource");
	apply_type(0x1541b24, "RTTIContainer");

	// Array<Ref<LocatorResource>>
	set_name(0x15204ec, "Array_Ref_LocatorResource");
	apply_type(0x15204ec, "RTTIContainer");

	// Array<Ref<MeshResourceBase>>
	set_name(0x14bec88, "Array_Ref_MeshResourceBase");
	apply_type(0x14bec88, "RTTIContainer");

	// Array<Ref<MissionResource>>
	set_name(0x1528cfc, "Array_Ref_MissionResource");
	apply_type(0x1528cfc, "RTTIContainer");

	// Array<Ref<ModelPartMeshReplacementResource>>
	set_name(0x14e7d04, "Array_Ref_ModelPartMeshReplacementResource");
	apply_type(0x14e7d04, "RTTIContainer");

	// Array<Ref<ModelPartResource>>
	set_name(0x14e7c90, "Array_Ref_ModelPartResource");
	apply_type(0x14e7c90, "RTTIContainer");

	// Array<Ref<MovementIKResource>>
	set_name(0x15429a0, "Array_Ref_MovementIKResource");
	apply_type(0x15429a0, "RTTIContainer");

	// Array<Ref<MovieResource>>
	set_name(0x14efc10, "Array_Ref_MovieResource");
	apply_type(0x14efc10, "RTTIContainer");

	// Array<Ref<OSDEventParserResource>>
	set_name(0x1501558, "Array_Ref_OSDEventParserResource");
	apply_type(0x1501558, "RTTIContainer");

	// Array<Ref<ObjectAttributeAnimatorInstance>>
	set_name(0x14bae10, "Array_Ref_ObjectAttributeAnimatorInstance");
	apply_type(0x14bae10, "RTTIContainer");

	// Array<Ref<ObjectAttributeAnimatorResource>>
	set_name(0x14bae84, "Array_Ref_ObjectAttributeAnimatorResource");
	apply_type(0x14bae84, "RTTIContainer");

	// Array<Ref<ParTimeLevelInfo>>
	set_name(0x152b178, "Array_Ref_ParTimeLevelInfo");
	apply_type(0x152b178, "RTTIContainer");

	// Array<Ref<ParticleEmitter>>
	set_name(0x14c4460, "Array_Ref_ParticleEmitter");
	apply_type(0x14c4460, "RTTIContainer");

	// Array<Ref<ParticleSystemResource>>
	set_name(0x14c4734, "Array_Ref_ParticleSystemResource");
	apply_type(0x14c4734, "RTTIContainer");

	// Array<Ref<PhonemeBoneChannel>>
	set_name(0x153aba4, "Array_Ref_PhonemeBoneChannel");
	apply_type(0x153aba4, "RTTIContainer");

	// Array<Ref<PhonemeChannel>>
	set_name(0x14e36dc, "Array_Ref_PhonemeChannel");
	apply_type(0x14e36dc, "RTTIContainer");

	// Array<Ref<PortableTurretResource>>
	set_name(0x15172d8, "Array_Ref_PortableTurretResource");
	apply_type(0x15172d8, "RTTIContainer");

	// Array<Ref<PostProcessEffectorResource>>
	set_name(0x14cbf64, "Array_Ref_PostProcessEffectorResource");
	apply_type(0x14cbf64, "RTTIContainer");

	// Array<Ref<PrimitiveResource>>
	set_name(0x14c8f28, "Array_Ref_PrimitiveResource");
	apply_type(0x14c8f28, "RTTIContainer");

	// Array<Ref<RenderEffectResource>>
	set_name(0x14c90cc, "Array_Ref_RenderEffectResource");
	apply_type(0x14c90cc, "RTTIContainer");

	// Array<Ref<RenderingPrimitiveResource>>
	set_name(0x14c8fa0, "Array_Ref_RenderingPrimitiveResource");
	apply_type(0x14c8fa0, "RTTIContainer");

	// Array<Ref<SMGGesture>>
	set_name(0x1541ebc, "Array_Ref_SMGGesture");
	apply_type(0x1541ebc, "RTTIContainer");

	// Array<Ref<ShaderAnimatorResourceBase>>
	set_name(0x14babf8, "Array_Ref_ShaderAnimatorResourceBase");
	apply_type(0x14babf8, "RTTIContainer");

	// Array<Ref<ShakeResource>>
	set_name(0x14e1178, "Array_Ref_ShakeResource");
	apply_type(0x14e1178, "RTTIContainer");

	// Array<Ref<SimpleSoundResource>>
	set_name(0x14dd8ac, "Array_Ref_SimpleSoundResource");
	apply_type(0x14dd8ac, "RTTIContainer");

	// Array<Ref<SkeletonAnimationResource>>
	set_name(0x14da4d8, "Array_Ref_SkeletonAnimationResource");
	apply_type(0x14da4d8, "RTTIContainer");

	// Array<Ref<SkeletonBaseAnimationResource>>
	set_name(0x14da464, "Array_Ref_SkeletonBaseAnimationResource");
	apply_type(0x14da464, "RTTIContainer");

	// Array<Ref<SoundResource>>
	set_name(0x14dd6c0, "Array_Ref_SoundResource");
	apply_type(0x14dd6c0, "RTTIContainer");

	// Array<Ref<StaticMeshResource>>
	set_name(0x14befcc, "Array_Ref_StaticMeshResource");
	apply_type(0x14befcc, "RTTIContainer");

	// Array<Ref<TypefaceStyle>>
	set_name(0x14c9630, "Array_Ref_TypefaceStyle");
	apply_type(0x14c9630, "RTTIContainer");

	// Array<Ref<UnlockableFeatureResource>>
	set_name(0x152ae64, "Array_Ref_UnlockableFeatureResource");
	apply_type(0x152ae64, "RTTIContainer");

	// Array<Ref<UseLocationResource>>
	set_name(0x14e2104, "Array_Ref_UseLocationResource");
	apply_type(0x14e2104, "RTTIContainer");

	// Array<Ref<UseLocationResourceGame>>
	set_name(0x14effc0, "Array_Ref_UseLocationResourceGame");
	apply_type(0x14effc0, "RTTIContainer");

	// Array<Ref<WeaponRackItem>>
	set_name(0x15286a4, "Array_Ref_WeaponRackItem");
	apply_type(0x15286a4, "RTTIContainer");

	// Array<Ref<WipeCompletionRegion>>
	set_name(0x154af3c, "Array_Ref_WipeCompletionRegion");
	apply_type(0x154af3c, "RTTIContainer");

	// Array<Ref<Zone>>
	set_name(0x14ce014, "Array_Ref_Zone");
	apply_type(0x14ce014, "RTTIContainer");

	// Array<Ref<ZoomSetting>>
	set_name(0x1528878, "Array_Ref_ZoomSetting");
	apply_type(0x1528878, "RTTIContainer");

	// Array<RegionAssetFilter>
	set_name(0x14ef750, "Array_RegionAssetFilter");
	apply_type(0x14ef750, "RTTIContainer");

	// Array<RenderEffectShaderOverrides>
	set_name(0x14cb3bc, "Array_RenderEffectShaderOverrides");
	apply_type(0x14cb3bc, "RTTIContainer");

	// Array<RenderTechnique>
	set_name(0x14c94a0, "Array_RenderTechnique");
	apply_type(0x14c94a0, "RTTIContainer");

	// Array<ReviveAmmoSettings>
	set_name(0x1513c18, "Array_ReviveAmmoSettings");
	apply_type(0x1513c18, "RTTIContainer");

	// Array<RollBone>
	set_name(0x14e3a50, "Array_RollBone");
	apply_type(0x14e3a50, "RTTIContainer");

	// Array<SKDTreeNode>
	set_name(0x14add88, "Array_SKDTreeNode");
	apply_type(0x14add88, "RTTIContainer");

	// Array<ScoreStatRequirement>
	set_name(0x14f0260, "Array_ScoreStatRequirement");
	apply_type(0x14f0260, "RTTIContainer");

	// Array<SectionAssetInfo>
	set_name(0x14ef998, "Array_SectionAssetInfo");
	apply_type(0x14ef998, "RTTIContainer");

	// Array<SelectByVariableInfo>
	set_name(0x14d9abc, "Array_SelectByVariableInfo");
	apply_type(0x14d9abc, "RTTIContainer");

	// Array<SentryBotSetting>
	set_name(0x15176e8, "Array_SentryBotSetting");
	apply_type(0x15176e8, "RTTIContainer");

	// Array<SequentialAnimationInfo>
	set_name(0x14d9a58, "Array_SequentialAnimationInfo");
	apply_type(0x14d9a58, "RTTIContainer");

	// Array<SkeletonAnimChannel>
	set_name(0x14da2f4, "Array_SkeletonAnimChannel");
	apply_type(0x14da2f4, "RTTIContainer");

	// Array<SkeletonTargetLink>
	set_name(0x14da638, "Array_SkeletonTargetLink");
	apply_type(0x14da638, "RTTIContainer");

	// Array<SkinnedModelLOD>
	set_name(0x14e7a48, "Array_SkinnedModelLOD");
	apply_type(0x14e7a48, "RTTIContainer");

	// Array<SkinnedPoint>
	set_name(0x14daa00, "Array_SkinnedPoint");
	apply_type(0x14daa00, "RTTIContainer");

	// Array<SoundStateMachineEventSettings>
	set_name(0x14fb444, "Array_SoundStateMachineEventSettings");
	apply_type(0x14fb444, "RTTIContainer");

	// Array<SoundStateMachineStateSettings>
	set_name(0x14fb3e0, "Array_SoundStateMachineStateSettings");
	apply_type(0x14fb3e0, "RTTIContainer");

	// Array<SpawnEffectAnimatedShader>
	set_name(0x150fe28, "Array_SpawnEffectAnimatedShader");
	apply_type(0x150fe28, "RTTIContainer");

	// Array<SpawnEffectTimedMeshSwitch>
	set_name(0x150fdc4, "Array_SpawnEffectTimedMeshSwitch");
	apply_type(0x150fdc4, "RTTIContainer");

	// Array<Stat>
	set_name(0x14f08b4, "Array_Stat");
	apply_type(0x14f08b4, "RTTIContainer");

	// Array<StatResource>
	set_name(0x153e98c, "Array_StatResource");
	apply_type(0x153e98c, "RTTIContainer");

	// Array<StateSwitch>
	set_name(0x14b9964, "Array_StateSwitch");
	apply_type(0x14b9964, "RTTIContainer");

	// Array<String>
	set_name(0x14b94f0, "Array_String");
	apply_type(0x14b94f0, "RTTIContainer");

	// Array<Subtitle>
	set_name(0x14efb38, "Array_Subtitle");
	apply_type(0x14efb38, "RTTIContainer");

	// Array<SuspensionUnit>
	set_name(0x150bc1c, "Array_SuspensionUnit");
	apply_type(0x150bc1c, "RTTIContainer");

	// Array<SwitchMeshResourcePart>
	set_name(0x14beda4, "Array_SwitchMeshResourcePart");
	apply_type(0x14beda4, "RTTIContainer");

	// Array<TargetBoneSetFlags>
	set_name(0x14da700, "Array_TargetBoneSetFlags");
	apply_type(0x14da700, "RTTIContainer");

	// Array<TextureBindingWithHandle>
	set_name(0x14cb6ac, "Array_TextureBindingWithHandle");
	apply_type(0x14cb6ac, "RTTIContainer");

	// Array<TextureLUTEntry>
	set_name(0x14cb0a0, "Array_TextureLUTEntry");
	apply_type(0x14cb0a0, "RTTIContainer");

	// Array<TextureWidgetElement>
	set_name(0x14c176c, "Array_TextureWidgetElement");
	apply_type(0x14c176c, "RTTIContainer");

	// Array<TimeMappingInfo>
	set_name(0x14d9830, "Array_TimeMappingInfo");
	apply_type(0x14d9830, "RTTIContainer");

	// Array<TimeWarpFactor>
	set_name(0x151a118, "Array_TimeWarpFactor");
	apply_type(0x151a118, "RTTIContainer");

	// Array<TimeWarpTag>
	set_name(0x14d96c0, "Array_TimeWarpTag");
	apply_type(0x14d96c0, "RTTIContainer");

	// Array<TrackAnimatorUserExitOptions>
	set_name(0x15059d4, "Array_TrackAnimatorUserExitOptions");
	apply_type(0x15059d4, "RTTIContainer");

	// Array<TriStateIcon>
	set_name(0x15350dc, "Array_TriStateIcon");
	apply_type(0x15350dc, "RTTIContainer");

	// Array<Trophy>
	set_name(0x14f06a4, "Array_Trophy");
	apply_type(0x14f06a4, "RTTIContainer");

	// Array<TwoBoneIkControl>
	set_name(0x14da290, "Array_TwoBoneIkControl");
	apply_type(0x14da290, "RTTIContainer");

	// Array<TwoJointIkBendConfig>
	set_name(0x14e34b4, "Array_TwoJointIkBendConfig");
	apply_type(0x14e34b4, "RTTIContainer");

	// Array<UseLocationInfo>
	set_name(0x1504d78, "Array_UseLocationInfo");
	apply_type(0x1504d78, "RTTIContainer");

	// Array<UsedEntityScoreSettings>
	set_name(0x14f0588, "Array_UsedEntityScoreSettings");
	apply_type(0x14f0588, "RTTIContainer");

	// Array<UserDamageModifier>
	set_name(0x1505358, "Array_UserDamageModifier");
	apply_type(0x1505358, "RTTIContainer");

	// Array<UserModeInfo>
	set_name(0x1504d04, "Array_UserModeInfo");
	apply_type(0x1504d04, "RTTIContainer");

	// Array<VariableBindingNGWithHandle>
	set_name(0x14cb7c8, "Array_VariableBindingNGWithHandle");
	apply_type(0x14cb7c8, "RTTIContainer");

	// Array<VertexDeltaDeformation>
	set_name(0x14d9f2c, "Array_VertexDeltaDeformation");
	apply_type(0x14d9f2c, "RTTIContainer");

	// Array<VertexSkin>
	set_name(0x14da938, "Array_VertexSkin");
	apply_type(0x14da938, "RTTIContainer");

	// Array<VertexSkinNBT>
	set_name(0x14da99c, "Array_VertexSkinNBT");
	apply_type(0x14da99c, "RTTIContainer");

	// Array<ViewportSetup>
	set_name(0x152e394, "Array_ViewportSetup");
	apply_type(0x152e394, "RTTIContainer");

	// Array<WString>
	set_name(0x14b95ac, "Array_WString");
	apply_type(0x14b95ac, "RTTIContainer");

	// Array<WeaponScoreMultipliers>
	set_name(0x14f05ec, "Array_WeaponScoreMultipliers");
	apply_type(0x14f05ec, "RTTIContainer");

	// Array<WheelInfo>
	set_name(0x150bd28, "Array_WheelInfo");
	apply_type(0x150bd28, "RTTIContainer");

	// Array<WheelLogic>
	set_name(0x150bd8c, "Array_WheelLogic");
	apply_type(0x150bd8c, "RTTIContainer");

	// Array<WheelMapping>
	set_name(0x150b678, "Array_WheelMapping");
	apply_type(0x150b678, "RTTIContainer");

	// Array<WidgetAnimationSettings>
	set_name(0x14c15fc, "Array_WidgetAnimationSettings");
	apply_type(0x14c15fc, "RTTIContainer");

	// Array<cptr<AIFaction>>
	set_name(0x14cf078, "Array_cptr_AIFaction");
	apply_type(0x14cf078, "RTTIContainer");

	// Array<cptr<AILinkTypeInfo>>
	set_name(0x14d6890, "Array_cptr_AILinkTypeInfo");
	apply_type(0x14d6890, "RTTIContainer");

	// Array<cptr<AnimationState>>
	set_name(0x14b9a3c, "Array_cptr_AnimationState");
	apply_type(0x14b9a3c, "RTTIContainer");

	// Array<cptr<CoreObject>>
	set_name(0x14bc6b4, "Array_cptr_CoreObject");
	apply_type(0x14bc6b4, "RTTIContainer");

	// Array<cptr<DestructionLogicAction>>
	set_name(0x14e2df4, "Array_cptr_DestructionLogicAction");
	apply_type(0x14e2df4, "RTTIContainer");

	// Array<cptr<GestureAction>>
	set_name(0x14eb15c, "Array_cptr_GestureAction");
	apply_type(0x14eb15c, "RTTIContainer");

	// Array<cptr<GestureResource>>
	set_name(0x14eb084, "Array_cptr_GestureResource");
	apply_type(0x14eb084, "RTTIContainer");

	// Array<cptr<LeanAndPeekAction>>
	set_name(0x15051a8, "Array_cptr_LeanAndPeekAction");
	apply_type(0x15051a8, "RTTIContainer");

	// Array<cptr<Zone>>
	set_name(0x14cdff4, "Array_cptr_Zone");
	apply_type(0x14cdff4, "RTTIContainer");

	// Array<float>
	set_name(0x14b9478, "Array_float");
	apply_type(0x14b9478, "RTTIContainer");

	// Array<int16>
	set_name(0x14b92b8, "Array_int16");
	apply_type(0x14b92b8, "RTTIContainer");

	// Array<int>
	set_name(0x14b91c8, "Array_int");
	apply_type(0x14b91c8, "RTTIContainer");

	// Array<uint16>
	set_name(0x14b92fc, "Array_uint16");
	apply_type(0x14b92fc, "RTTIContainer");

	// Array<uint8>
	set_name(0x14b9274, "Array_uint8");
	apply_type(0x14b9274, "RTTIContainer");

	// TinyArray<ShaderVariable>
	set_name(0x14cb710, "TinyArray_ShaderVariable");
	apply_type(0x14cb710, "RTTIContainer");

	// TinyArray<TextureBinding>
	set_name(0x14cb648, "TinyArray_TextureBinding");
	apply_type(0x14cb648, "RTTIContainer");
}