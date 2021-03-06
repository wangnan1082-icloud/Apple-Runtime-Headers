//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReader/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface SCRTextPosition : NSObject <NSCopying>
{
}

+ (id)highestPositionAmongPositions:(id)arg1;
+ (id)lowestPositionAmongPositions:(id)arg1;
+ (id)nameOfType:(unsigned long long)arg1;
+ (id)invalidPosition;
+ (id)positionWithMarker:(const struct __AXTextMarker *)arg1 uiElement:(id)arg2;
+ (id)positionWithIndex:(unsigned long long)arg1;
+ (id)NotFound;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const struct __AXTextMarker *)axTextMarkerValue;
- (unsigned long long)indexValue;
- (id)positionOffsetBy:(long long)arg1 withinLimit:(id)arg2;
- (long long)offsetFromPosition:(id)arg1;
- (BOOL)isCompatibleWithPosition:(id)arg1;
- (id)descriptionWithoutType;
- (id)description;
@property(readonly, nonatomic) BOOL isValid; // @dynamic isValid;

// Remaining properties
@property(readonly, nonatomic) unsigned long long type; // @dynamic type;

@end

