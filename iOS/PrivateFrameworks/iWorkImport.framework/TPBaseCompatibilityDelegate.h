//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSKCompatibilityDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TPBaseCompatibilityDelegate : NSObject <TSKCompatibilityDelegate>
{
}

- (id)unsupportedExportMessageStringForType:(id)arg1;
- (id)backwardsCompatibleTypeForType:(id)arg1;
- (_Bool)isExportSupportedForType:(id)arg1 exporterOptions:(id)arg2 documentRoot:(id)arg3;
- (id)nestedDocumentFilename;
- (id)needNewerVersionIndexXmlContentString;
- (id)indexXmlFilename;
- (_Bool)isSageDocumentType:(id)arg1;
- (_Bool)isTCMessageExceptionErrorDomain:(id)arg1;
- (id)exportableTypes;
- (Class)exportOptionsControllerClass;
- (Class)exporterClassForType:(id)arg1 options:(id)arg2;
- (Class)importerClassForType:(id)arg1 path:(id)arg2;
- (id)EPUBExportLanguageCodes;
- (id)EPUBExportCategories;
- (id)newExportableDocumentTypesForFlag:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
