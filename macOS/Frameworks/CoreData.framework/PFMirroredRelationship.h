//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PFMirroredRelationship : NSObject
{
}

+ (id)mirroredRelationshipWithDeletedRecordType:(id)arg1 recordName:(id)arg2 andManagedObjectModel:(id)arg3;
+ (id)mirroredRelationshipWithManyToManyRecord:(id)arg1 values:(id)arg2 andManagedObjectModel:(id)arg3;
+ (id)mirroredRelationshipWithManagedObject:(id)arg1 withRecordName:(id)arg2 relatedToObjectWithRecordName:(id)arg3 byRelationship:(id)arg4;
- (BOOL)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id *)arg3;

@end

