//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSCERefNamingContext : NSObject <NSCopying>
{
    struct TSUPreserveFlags _preserveFlags;
    _Bool _suppressIdenticalEndReference;
    _Bool _useSymbolicNames;
    _Bool _allowTableName;
    _Bool _allowSpanningColumnReferenceBodyQualifier;
    _Bool _quoteComponents;
    _Bool _forceEscaping;
    _Bool _forFormulaPlainText;
    _Bool _usedSymbolicName;
    NSString *_contextSheetName;
    UUIDData_5fbc143e _hostTableUID;
}

@property(nonatomic) _Bool usedSymbolicName; // @synthesize usedSymbolicName=_usedSymbolicName;
@property(nonatomic) _Bool forFormulaPlainText; // @synthesize forFormulaPlainText=_forFormulaPlainText;
@property(nonatomic) _Bool forceEscaping; // @synthesize forceEscaping=_forceEscaping;
@property(nonatomic) _Bool quoteComponents; // @synthesize quoteComponents=_quoteComponents;
@property(nonatomic) _Bool allowSpanningColumnReferenceBodyQualifier; // @synthesize allowSpanningColumnReferenceBodyQualifier=_allowSpanningColumnReferenceBodyQualifier;
@property(nonatomic) _Bool allowTableName; // @synthesize allowTableName=_allowTableName;
@property(nonatomic) _Bool useSymbolicNames; // @synthesize useSymbolicNames=_useSymbolicNames;
@property(nonatomic) _Bool suppressIdenticalEndReference; // @synthesize suppressIdenticalEndReference=_suppressIdenticalEndReference;
@property(nonatomic) UUIDData_5fbc143e hostTableUID; // @synthesize hostTableUID=_hostTableUID;
@property(nonatomic) struct TSUPreserveFlags preserveFlags; // @synthesize preserveFlags=_preserveFlags;
@property(retain, nonatomic) NSString *contextSheetName; // @synthesize contextSheetName=_contextSheetName;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reset;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

