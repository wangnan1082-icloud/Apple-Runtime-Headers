//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface CKArchivedAnchoredPackage : NSObject <NSSecureCoding>
{
    NSString *_anchorPath;
    NSString *_packagePath;
    NSString *_UUID;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) NSString *packagePath; // @synthesize packagePath=_packagePath;
@property(retain, nonatomic) NSString *anchorPath; // @synthesize anchorPath=_anchorPath;
- (void).cxx_destruct;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
