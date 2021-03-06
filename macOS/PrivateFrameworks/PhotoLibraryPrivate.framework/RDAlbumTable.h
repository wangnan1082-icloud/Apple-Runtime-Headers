//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDTable.h>

@class LiKeyPath;

@interface RDAlbumTable : RDTable
{
    LiKeyPath *_albumTypeKeyPath;
    LiKeyPath *_albumSubclassKeyPath;
    LiKeyPath *_nameKeyPath;
    LiKeyPath *_folderUuidKeyPath;
    LiKeyPath *_queryFolderUuidKeyPath;
    LiKeyPath *_posterVersionUuidKeyPath;
    LiKeyPath *_selectedTrackPathUuidKeyPath;
    LiKeyPath *_sortKeyPathKeyPath;
    LiKeyPath *_sortAscendingKeyPath;
    LiKeyPath *_customSortAvailableKeyPath;
    LiKeyPath *_createDateKeyPath;
    LiKeyPath *_isFavoriteKeyPath;
    LiKeyPath *_isInTrashKeyPath;
    LiKeyPath *_inTrashDateKeyPath;
    LiKeyPath *_isHiddenKeyPath;
    LiKeyPath *_isMagicKeyPath;
    LiKeyPath *_colorLabelIndexKeyPath;
    LiKeyPath *_faceSortKeyPathKeyPath;
    LiKeyPath *_personIdKeyPath;
    LiKeyPath *_recentUserChangeDateKeyPath;
    LiKeyPath *_filterDataKeyPath;
    LiKeyPath *_queryDataKeyPath;
    LiKeyPath *_viewDataKeyPath;
    LiKeyPath *_slideshowDataKeyPath;
    LiKeyPath *_printProjectUuidKeyPath;
    LiKeyPath *_printProjectTypeKeyPath;
    LiKeyPath *_printProjectThumbnailScaleKeyPath;
    LiKeyPath *_printProjectProductCodeKeyPath;
    LiKeyPath *_streamAlbumIdentifierKeyPath;
    LiKeyPath *_streamRelationshipStateKeyPath;
    LiKeyPath *_streamOwnerPersonIdKeyPath;
    LiKeyPath *_streamOwnerEmailKeyPath;
    LiKeyPath *_streamOwnerFullNameKeyPath;
    LiKeyPath *_streamLastInterestingChangeDateKeyPath;
    LiKeyPath *_streamLastContributionDateKeyPath;
    LiKeyPath *_isFamilyStreamKeyPath;
    LiKeyPath *_isPinnedKeyPath;
    LiKeyPath *_cloudLibraryStateKeyPath;
    LiKeyPath *_hasBeenSyncedKeyPath;
    LiKeyPath *_cloudIdentifierKeyPath;
    LiKeyPath *_isCloudQuarantinedKeyPath;
    LiKeyPath *_cloudSortTypeKeyPath;
    LiKeyPath *_cloudAlbumTypeKeyPath;
    LiKeyPath *_projectExtensionIdentifierKeyPath;
    LiKeyPath *_projectExtensionDataKeyPath;
    LiKeyPath *_projectDocumentTypeKeyPath;
    LiKeyPath *_projectExtensionRenderedPreviewUuidKeyPath;
}

+ (SEL)deletedModelIdsMulticasterSelector;
+ (SEL)updatedModelKeyPathsMulticasterSelector;
+ (SEL)createdModelMulticasterSelector;
+ (id)tableClassName;
+ (id)tableName;
+ (id)modelName;
+ (Class)modelClass;
@property(readonly, nonatomic) LiKeyPath *projectExtensionRenderedPreviewUuidKeyPath; // @synthesize projectExtensionRenderedPreviewUuidKeyPath=_projectExtensionRenderedPreviewUuidKeyPath;
@property(readonly, nonatomic) LiKeyPath *projectDocumentTypeKeyPath; // @synthesize projectDocumentTypeKeyPath=_projectDocumentTypeKeyPath;
@property(readonly, nonatomic) LiKeyPath *projectExtensionDataKeyPath; // @synthesize projectExtensionDataKeyPath=_projectExtensionDataKeyPath;
@property(readonly, nonatomic) LiKeyPath *projectExtensionIdentifierKeyPath; // @synthesize projectExtensionIdentifierKeyPath=_projectExtensionIdentifierKeyPath;
@property(readonly, nonatomic) LiKeyPath *cloudAlbumTypeKeyPath; // @synthesize cloudAlbumTypeKeyPath=_cloudAlbumTypeKeyPath;
@property(readonly, nonatomic) LiKeyPath *cloudSortTypeKeyPath; // @synthesize cloudSortTypeKeyPath=_cloudSortTypeKeyPath;
@property(readonly, nonatomic) LiKeyPath *isCloudQuarantinedKeyPath; // @synthesize isCloudQuarantinedKeyPath=_isCloudQuarantinedKeyPath;
@property(readonly, nonatomic) LiKeyPath *cloudIdentifierKeyPath; // @synthesize cloudIdentifierKeyPath=_cloudIdentifierKeyPath;
@property(readonly, nonatomic) LiKeyPath *hasBeenSyncedKeyPath; // @synthesize hasBeenSyncedKeyPath=_hasBeenSyncedKeyPath;
@property(readonly, nonatomic) LiKeyPath *cloudLibraryStateKeyPath; // @synthesize cloudLibraryStateKeyPath=_cloudLibraryStateKeyPath;
@property(readonly, nonatomic) LiKeyPath *isPinnedKeyPath; // @synthesize isPinnedKeyPath=_isPinnedKeyPath;
@property(readonly, nonatomic) LiKeyPath *isFamilyStreamKeyPath; // @synthesize isFamilyStreamKeyPath=_isFamilyStreamKeyPath;
@property(readonly, nonatomic) LiKeyPath *streamLastContributionDateKeyPath; // @synthesize streamLastContributionDateKeyPath=_streamLastContributionDateKeyPath;
@property(readonly, nonatomic) LiKeyPath *streamLastInterestingChangeDateKeyPath; // @synthesize streamLastInterestingChangeDateKeyPath=_streamLastInterestingChangeDateKeyPath;
@property(readonly, nonatomic) LiKeyPath *streamOwnerFullNameKeyPath; // @synthesize streamOwnerFullNameKeyPath=_streamOwnerFullNameKeyPath;
@property(readonly, nonatomic) LiKeyPath *streamOwnerEmailKeyPath; // @synthesize streamOwnerEmailKeyPath=_streamOwnerEmailKeyPath;
@property(readonly, nonatomic) LiKeyPath *streamOwnerPersonIdKeyPath; // @synthesize streamOwnerPersonIdKeyPath=_streamOwnerPersonIdKeyPath;
@property(readonly, nonatomic) LiKeyPath *streamRelationshipStateKeyPath; // @synthesize streamRelationshipStateKeyPath=_streamRelationshipStateKeyPath;
@property(readonly, nonatomic) LiKeyPath *streamAlbumIdentifierKeyPath; // @synthesize streamAlbumIdentifierKeyPath=_streamAlbumIdentifierKeyPath;
@property(readonly, nonatomic) LiKeyPath *printProjectProductCodeKeyPath; // @synthesize printProjectProductCodeKeyPath=_printProjectProductCodeKeyPath;
@property(readonly, nonatomic) LiKeyPath *printProjectThumbnailScaleKeyPath; // @synthesize printProjectThumbnailScaleKeyPath=_printProjectThumbnailScaleKeyPath;
@property(readonly, nonatomic) LiKeyPath *printProjectTypeKeyPath; // @synthesize printProjectTypeKeyPath=_printProjectTypeKeyPath;
@property(readonly, nonatomic) LiKeyPath *printProjectUuidKeyPath; // @synthesize printProjectUuidKeyPath=_printProjectUuidKeyPath;
@property(readonly, nonatomic) LiKeyPath *slideshowDataKeyPath; // @synthesize slideshowDataKeyPath=_slideshowDataKeyPath;
@property(readonly, nonatomic) LiKeyPath *viewDataKeyPath; // @synthesize viewDataKeyPath=_viewDataKeyPath;
@property(readonly, nonatomic) LiKeyPath *queryDataKeyPath; // @synthesize queryDataKeyPath=_queryDataKeyPath;
@property(readonly, nonatomic) LiKeyPath *filterDataKeyPath; // @synthesize filterDataKeyPath=_filterDataKeyPath;
@property(readonly, nonatomic) LiKeyPath *recentUserChangeDateKeyPath; // @synthesize recentUserChangeDateKeyPath=_recentUserChangeDateKeyPath;
@property(readonly, nonatomic) LiKeyPath *personIdKeyPath; // @synthesize personIdKeyPath=_personIdKeyPath;
@property(readonly, nonatomic) LiKeyPath *faceSortKeyPathKeyPath; // @synthesize faceSortKeyPathKeyPath=_faceSortKeyPathKeyPath;
@property(readonly, nonatomic) LiKeyPath *colorLabelIndexKeyPath; // @synthesize colorLabelIndexKeyPath=_colorLabelIndexKeyPath;
@property(readonly, nonatomic) LiKeyPath *isMagicKeyPath; // @synthesize isMagicKeyPath=_isMagicKeyPath;
@property(readonly, nonatomic) LiKeyPath *isHiddenKeyPath; // @synthesize isHiddenKeyPath=_isHiddenKeyPath;
@property(readonly, nonatomic) LiKeyPath *inTrashDateKeyPath; // @synthesize inTrashDateKeyPath=_inTrashDateKeyPath;
@property(readonly, nonatomic) LiKeyPath *isInTrashKeyPath; // @synthesize isInTrashKeyPath=_isInTrashKeyPath;
@property(readonly, nonatomic) LiKeyPath *isFavoriteKeyPath; // @synthesize isFavoriteKeyPath=_isFavoriteKeyPath;
@property(readonly, nonatomic) LiKeyPath *createDateKeyPath; // @synthesize createDateKeyPath=_createDateKeyPath;
@property(readonly, nonatomic) LiKeyPath *customSortAvailableKeyPath; // @synthesize customSortAvailableKeyPath=_customSortAvailableKeyPath;
@property(readonly, nonatomic) LiKeyPath *sortAscendingKeyPath; // @synthesize sortAscendingKeyPath=_sortAscendingKeyPath;
@property(readonly, nonatomic) LiKeyPath *sortKeyPathKeyPath; // @synthesize sortKeyPathKeyPath=_sortKeyPathKeyPath;
@property(readonly, nonatomic) LiKeyPath *selectedTrackPathUuidKeyPath; // @synthesize selectedTrackPathUuidKeyPath=_selectedTrackPathUuidKeyPath;
@property(readonly, nonatomic) LiKeyPath *posterVersionUuidKeyPath; // @synthesize posterVersionUuidKeyPath=_posterVersionUuidKeyPath;
@property(readonly, nonatomic) LiKeyPath *queryFolderUuidKeyPath; // @synthesize queryFolderUuidKeyPath=_queryFolderUuidKeyPath;
@property(readonly, nonatomic) LiKeyPath *folderUuidKeyPath; // @synthesize folderUuidKeyPath=_folderUuidKeyPath;
@property(readonly, nonatomic) LiKeyPath *nameKeyPath; // @synthesize nameKeyPath=_nameKeyPath;
@property(readonly, nonatomic) LiKeyPath *albumSubclassKeyPath; // @synthesize albumSubclassKeyPath=_albumSubclassKeyPath;
@property(readonly, nonatomic) LiKeyPath *albumTypeKeyPath; // @synthesize albumTypeKeyPath=_albumTypeKeyPath;
- (void).cxx_destruct;
- (void)declareProperties;
- (id)initWithTableId:(unsigned long long)arg1 tableType:(unsigned char)arg2 withLibrary:(id)arg3;
- (id)notifyUpdateKeyPathAtoms;
- (unsigned long long *)faultedKeyPath;
- (id)iLMBPropertyPaths;
- (id)gridPropertyPaths;

@end

