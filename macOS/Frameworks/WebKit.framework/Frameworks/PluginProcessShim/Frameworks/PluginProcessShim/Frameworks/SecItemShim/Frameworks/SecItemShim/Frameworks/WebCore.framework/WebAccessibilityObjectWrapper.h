//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/WebAccessibilityObjectWrapperBase.h>

__attribute__((visibility("hidden")))
@interface WebAccessibilityObjectWrapper : WebAccessibilityObjectWrapperBase
{
}

- (id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (unsigned long long)accessibilityArrayAttributeCount:(id)arg1;
- (unsigned long long)accessibilityIndexOfChild:(id)arg1;
- (BOOL)accessibilityShouldUseUniqueId;
- (BOOL)accessibilitySupportsOverriddenAttributes;
- (id)accessibilityAttributeValue:(id)arg1 forParameter:(id)arg2;
- (id)doAXRTFForRange:(struct _NSRange)arg1;
- (id)_textMarkerForIndex:(long long)arg1;
- (long long)_indexForTextMarker:(id)arg1;
- (struct _NSRange)_convertToNSRange:(struct Range *)arg1;
- (id)doAXAttributedStringForRange:(struct _NSRange)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)_accessibilityParentForSubview:(id)arg1;
- (void)_accessibilitySetTestValue:(id)arg1 forAttribute:(id)arg2;
- (void)_accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (void)accessibilityPerformAction:(id)arg1;
- (void)_accessibilityScrollToGlobalPoint:(struct CGPoint)arg1;
- (void)_accessibilityScrollToMakeVisibleWithSubFocus:(struct CGRect)arg1;
- (void)accessibilityScrollToVisible;
- (void)accessibilityShowContextMenu;
- (void)accessibilityPerformShowMenuAction;
- (void)_accessibilityPerformDecrementAction;
- (void)accessibilityPerformDecrementAction;
- (void)_accessibilityPerformIncrementAction;
- (void)accessibilityPerformIncrementAction;
- (void)_accessibilityPerformPressAction;
- (void)accessibilityPerformPressAction;
- (id)accessibilityParameterizedAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityPlatformMathSuperscriptKey;
- (id)accessibilityPlatformMathSubscriptKey;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)valueDescriptionForMeter;
- (id)scrollViewParent;
- (id)computedRoleString;
- (id)roleDescription;
- (id)subrole;
- (id)role;
- (id)position;
- (id)primaryScreenHeight;
- (id)path;
- (id)bezierPathFromPath:(struct CGPath *)arg1;
- (struct CGPoint)convertPointToScreenSpace:(struct FloatPoint *)arg1;
- (id)associatedPluginParent;
- (id)textMarkerRangeForSelection;
- (id)remoteAccessibilityParentObject;
- (id)renderWidgetChildren;
- (struct VisiblePositionRange)visiblePositionRangeForTextMarkerRange:(id)arg1;
- (id)accessibilityAttributeNames;
- (id)additionalAccessibilityAttributeNames;
- (id)accessibilityActionNames;
- (id)textMarkerRangeFromVisiblePositions:(const struct VisiblePosition *)arg1 endPosition:(const struct VisiblePosition *)arg2;
- (id)doAXAttributedStringForTextMarkerRange:(id)arg1 spellCheck:(BOOL)arg2;
- (struct VisiblePosition)visiblePositionForTextMarker:(id)arg1;
- (id)textMarkerForFirstPositionInTextControl:(struct HTMLTextFormControlElement *)arg1;
- (id)textMarkerForVisiblePosition:(const struct VisiblePosition *)arg1;
- (struct CharacterOffset)characterOffsetForTextMarker:(id)arg1;
- (RefPtr_033e7b31)rangeForTextMarkerRange:(id)arg1;
- (id)textMarkerForCharacterOffset:(struct CharacterOffset *)arg1;
- (id)previousTextMarkerForCharacterOffset:(struct CharacterOffset *)arg1;
- (id)nextTextMarkerForCharacterOffset:(struct CharacterOffset *)arg1;
- (id)startOrEndTextMarkerForRange:(RefPtr_033e7b31)arg1 isStart:(BOOL)arg2;
- (id)textMarkerRangeFromRange:(RefPtr_033e7b31)arg1;
- (struct AccessibilityObject *)accessibilityObjectForTextMarker:(id)arg1;
- (struct IntRect)screenToContents:(const struct IntRect *)arg1;
- (id)attachmentView;
- (void)detach;
- (void)unregisterUniqueIdForUIElement;

@end

