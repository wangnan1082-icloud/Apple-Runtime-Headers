//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PMLTransformerProtocol.h"

@class NSDictionary;

@interface SGStringMappingTransformer : NSObject <PMLTransformerProtocol>
{
    NSDictionary *_mappings;
}

+ (id)withMappings:(id)arg1;
@property(retain) NSDictionary *mappings; // @synthesize mappings=_mappings;
- (void).cxx_destruct;
- (id)transform:(id)arg1;
- (id)initWithMappings:(id)arg1;

@end
