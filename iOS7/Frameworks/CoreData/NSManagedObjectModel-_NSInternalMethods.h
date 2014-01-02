/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSManagedObjectModel.h>

@interface NSManagedObjectModel (_NSInternalMethods)
+ (id)_modelPathsFromBundles:(id)arg1;
+ (void)_deepCollectEntitiesInArray:(id)arg1 entity:(id)arg2;
- (id)_versionIdentifiersAsArray;
- (void)_restoreValidation;
- (void)_stripForMigration;
- (id)_entitiesByVersionHash;
- (void)_addVersionIdentifiers:(id)arg1;
- (id)_sortedEntitiesForConfiguration:(id)arg1;
- (void)_setLocalizationPolicy:(id)arg1;
- (id)_localizationPolicy;
- (void)_removeEntities:(id)arg1 fromConfiguration:(id)arg2;
- (void)_addEntities:(id)arg1 toConfiguration:(id)arg2;
- (id)_configurationsByName;
- (void)_removeEntity:(id)arg1;
- (void)_removeEntityNamed:(id)arg1;
- (id)_entityForName:(id)arg1;
- (void)_throwIfNotEditable;
- (void)_setIsEditable:(_Bool)arg1;
- (void)_setIsEditable:(_Bool)arg1 optimizationStyle:(unsigned long long)arg2;
- (id)_precomputedKeysForEntity:(id)arg1;
- (_Bool)_hasPrecomputedKeyOrder;
- (_Bool)_isOptimizedForEncoding;
- (void)_createCachesAndOptimizeState;
- (void)_flattenProperties;
- (_Bool)isEditable;
- (id)_initWithEntities:(id)arg1;
- (id)_entityVersionHashesByNameInStyle:(unsigned long long)arg1;
- (_Bool)_isConfiguration:(id)arg1 inStyle:(unsigned long long)arg2 compatibleWithStoreMetadata:(id)arg3;
@end
