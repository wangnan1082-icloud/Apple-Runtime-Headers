//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface UNNotificationAttachmentOptions : NSObject <NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
+ (struct CGRect)santizedClippingRect:(struct CGRect)arg1;
+ (Class)optionsClassForFamily:(unsigned int)arg1;
+ (id)optionsClasses;
+ (id)optionsForFamily:(unsigned int)arg1 fromOptionsDictionary:(id)arg2;
+ (id)optionsFromOptionsDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
