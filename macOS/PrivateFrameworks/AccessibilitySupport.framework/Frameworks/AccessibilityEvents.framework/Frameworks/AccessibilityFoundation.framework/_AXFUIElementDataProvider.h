//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityFoundation/NSCopying-Protocol.h>

@class NSString;

@interface _AXFUIElementDataProvider : NSObject <NSCopying>
{
    BOOL _valid;
    NSString *_applicationIdentifier;
}

@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (struct ProcessSerialNumber)realApplicationProcessSerialNumber;
- (int)realApplicationProcessIdentifier;
- (id)applicationElement;
- (struct ProcessSerialNumber)applicationProcessSerialNumber;
- (int)applicationProcessIdentifier;
- (id)transportData;
- (unsigned long long)transportType;
- (id)copyAXFUIElementAtPoint:(struct CGPoint)arg1;
- (id)copyAXFUIElementAtPoint:(struct CGPoint)arg1 includeIgnored:(BOOL)arg2;
- (void)setAttribute:(id)arg1 withAXFUIElementValues:(id)arg2;
- (id)copyAXFUIElementsForAttribute:(id)arg1;
- (id)copyAXFUIElementsForParameterizedAttribute:(id)arg1 parameter:(void *)arg2;
- (id)copyAXFUIElementForParameterizedAttribute:(id)arg1 parameter:(void *)arg2;
- (void)setAttribute:(id)arg1 withAXFUIElementValue:(id)arg2;
- (id)copyAXFUIElementForAttribute:(id)arg1;
- (void)performAction:(id)arg1;
- (BOOL)supportsAction:(id)arg1;
- (id)copyDescriptionForAction:(id)arg1;
- (id)copyActionNames;
- (void)setAttribute:(id)arg1 withValue:(void *)arg2;
- (BOOL)canSetAttributeValue:(id)arg1;
- (id)copyArrayForAttribute:(id)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)countForAttribute:(id)arg1;
- (void *)copyParameterizedAttributeValue:(id)arg1 parameter:(void *)arg2;
- (void *)copyAttributeValue:(id)arg1;
- (BOOL)supportsAttribute:(id)arg1;
- (id)copyParameterizedAttributeNames;
- (id)copyAttributeNames;
- (id)initWithApplicationIdentifier:(id)arg1;
- (id)init;
- (BOOL)isIPCDataProvider;

@end

