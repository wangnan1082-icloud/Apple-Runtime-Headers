//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSJavaConfiguration : NSObject
{
    NSString *_vendorName;
}

+ (id)vendorNames;
+ (id)configurationForVendor:(id)arg1;
+ (id)defaultConfiguration;
- (id)valueForKey:(id)arg1 expandEnvironmentVariables:(BOOL)arg2;
- (id)valueForKey:(id)arg1;
- (id)vendorName;
- (void)dealloc;
- (id)initWithVendor:(id)arg1;
- (id)init;

@end

