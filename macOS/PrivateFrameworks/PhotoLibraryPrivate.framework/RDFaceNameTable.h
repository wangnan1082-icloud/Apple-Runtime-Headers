//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDTable.h>

@class LiKeyPath;

@interface RDFaceNameTable : RDTable
{
    LiKeyPath *_faceKeyKeyPath;
    LiKeyPath *_keyVersionUuidKeyPath;
    LiKeyPath *_nameKeyPath;
    LiKeyPath *_fullNameKeyPath;
    LiKeyPath *_emailKeyPath;
    LiKeyPath *_similarFacesCachedKeyPath;
    LiKeyPath *_similarFacesOpenKeyPath;
    LiKeyPath *_manualOrderKeyPath;
    LiKeyPath *_lastUsedDateKeyPath;
    LiKeyPath *_attrsKeyPath;
}

+ (id)tableClassName;
+ (id)tableName;
+ (id)modelName;
+ (Class)modelClass;
@property(readonly, nonatomic) LiKeyPath *attrsKeyPath; // @synthesize attrsKeyPath=_attrsKeyPath;
@property(readonly, nonatomic) LiKeyPath *lastUsedDateKeyPath; // @synthesize lastUsedDateKeyPath=_lastUsedDateKeyPath;
@property(readonly, nonatomic) LiKeyPath *manualOrderKeyPath; // @synthesize manualOrderKeyPath=_manualOrderKeyPath;
@property(readonly, nonatomic) LiKeyPath *similarFacesOpenKeyPath; // @synthesize similarFacesOpenKeyPath=_similarFacesOpenKeyPath;
@property(readonly, nonatomic) LiKeyPath *similarFacesCachedKeyPath; // @synthesize similarFacesCachedKeyPath=_similarFacesCachedKeyPath;
@property(readonly, nonatomic) LiKeyPath *emailKeyPath; // @synthesize emailKeyPath=_emailKeyPath;
@property(readonly, nonatomic) LiKeyPath *fullNameKeyPath; // @synthesize fullNameKeyPath=_fullNameKeyPath;
@property(readonly, nonatomic) LiKeyPath *nameKeyPath; // @synthesize nameKeyPath=_nameKeyPath;
@property(readonly, nonatomic) LiKeyPath *keyVersionUuidKeyPath; // @synthesize keyVersionUuidKeyPath=_keyVersionUuidKeyPath;
@property(readonly, nonatomic) LiKeyPath *faceKeyKeyPath; // @synthesize faceKeyKeyPath=_faceKeyKeyPath;
- (void).cxx_destruct;
- (void)declareProperties;
- (id)initWithTableId:(unsigned long long)arg1 tableType:(unsigned char)arg2 withLibrary:(id)arg3;
- (id)notifyUpdateKeyPathAtoms;
- (unsigned long long *)faultedKeyPath;

@end

