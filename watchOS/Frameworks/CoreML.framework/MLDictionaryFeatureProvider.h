//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLFeatureProvider.h"
#import "NSFastEnumeration.h"

@class NSDictionary, NSSet;

@interface MLDictionaryFeatureProvider : NSObject <MLFeatureProvider, NSFastEnumeration>
{
    NSDictionary *_dictionary;
}

@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithFeatureValueDictionary:(id)arg1;
- (id)initWithFeatureProvider:(id)arg1;
- (id)initWithFeatureProvider:(id)arg1 featureNames:(id)arg2;

@end
