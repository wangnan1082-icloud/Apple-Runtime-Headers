//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TVLJSObject.h"

@class SKProduct;

@interface TVLJSSKProduct : NSObject <TVLJSObject>
{
    struct OpaqueJSValue *_jsObjectRef;
    SKProduct *_product;
}

+ (id)productFromJSValue:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2;
+ (void)addClassDefinitionInContext:(struct OpaqueJSContext *)arg1;
@property(readonly, nonatomic) SKProduct *product; // @synthesize product=_product;
- (void)_jsFinalize;
- (struct OpaqueJSValue *)jsObjectRef;
- (void)dealloc;
- (id)initWithProduct:(id)arg1 context:(struct OpaqueJSContext *)arg2;
- (id)init;

@end
