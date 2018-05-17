//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSAttributedString, NSDictionary, NSMutableDictionary;

@interface NSExtensionItem : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_userInfo;
}

+ (BOOL)supportsSecureCoding;
- (id)_matchingDictionaryRepresentation;
- (id)description;
@property(copy) NSDictionary *userInfo;
@property(copy) NSArray *attachments; // @dynamic attachments;
@property(copy) NSAttributedString *attributedContentText; // @dynamic attributedContentText;
@property(copy) NSAttributedString *attributedTitle; // @dynamic attributedTitle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
