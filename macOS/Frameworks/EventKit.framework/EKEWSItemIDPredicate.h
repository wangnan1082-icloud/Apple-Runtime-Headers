//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKGeneralLookupPredicate.h>

@class NSString;

@interface EKEWSItemIDPredicate : EKGeneralLookupPredicate
{
    NSString *_itemID;
}

- (void).cxx_destruct;
- (id)description;
- (id)predicateFormat;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemID:(id)arg1;
- (id)predicateForCoreData;

@end
