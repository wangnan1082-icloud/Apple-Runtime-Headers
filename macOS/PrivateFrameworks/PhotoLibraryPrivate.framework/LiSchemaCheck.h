//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryPrivate/LiSchemaAddTable-Protocol.h>

@class NSMutableDictionary;

@interface LiSchemaCheck : NSObject <LiSchemaAddTable>
{
    NSMutableDictionary *_tableDeclarationsByName;
}

- (void).cxx_destruct;
- (BOOL)schemaIsCorrectForLibrary:(id)arg1;
- (BOOL)tableIsDeprecated:(id)arg1;
- (BOOL)tableExists:(id)arg1;
- (void)addTableDeclaration:(id)arg1;

@end

