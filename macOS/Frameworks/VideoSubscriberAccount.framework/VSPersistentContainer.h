//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentContainer;

__attribute__((visibility("hidden")))
@interface VSPersistentContainer : NSObject
{
    long long _modelVersion;
    NSManagedObjectContext *_viewContext;
    NSPersistentContainer *_persistentContainer;
}

+ (id)defaultDirectoryURL;
@property(retain, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property(retain, nonatomic) NSManagedObjectContext *viewContext; // @synthesize viewContext=_viewContext;
@property(readonly, nonatomic) long long modelVersion; // @synthesize modelVersion=_modelVersion;
- (void).cxx_destruct;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)developerIdentityProviderFetchRequest;
- (id)insertDeveloperIdentityProviderInContext:(id)arg1;
- (id)init;
- (id)initWithModelVersion:(long long)arg1;

@end

