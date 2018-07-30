//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface INEvent : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_eventType;
    NSArray *_eventDescriptors;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *eventDescriptors; // @synthesize eventDescriptors=_eventDescriptors;
@property(readonly, copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned int)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithEventType:(id)arg1 eventDescriptors:(id)arg2;

@end
