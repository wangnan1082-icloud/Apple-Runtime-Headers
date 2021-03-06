//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCoding-Protocol.h>
#import <AppKit/NSCopying-Protocol.h>
#import <AppKit/NSSecureCoding-Protocol.h>

@class NSSet;

@interface NSUserInterfaceCompressionOptions : NSObject <NSSecureCoding, NSCopying, NSCoding>
{
    NSSet *_identifiers;
}

+ (id)standardOptions;
+ (id)breakEqualWidthsOption;
+ (id)reduceMetricsOption;
+ (id)hideTextOption;
+ (id)hideImagesOption;
+ (BOOL)supportsSecureCoding;
- (id)description;
- (id)optionsByAddingOptions:(id)arg1;
- (id)optionsByRemovingOptions:(id)arg1;
@property(readonly, getter=isEmpty) BOOL empty;
- (BOOL)intersectsOptions:(id)arg1;
- (BOOL)containsOptions:(id)arg1;
- (id)identifiers;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCompressionOptions:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

