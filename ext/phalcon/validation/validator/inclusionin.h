
extern zend_class_entry *phalcon_validation_validator_inclusionin_ce;

ZEPHIR_INIT_CLASS(Phalcon_Validation_Validator_InclusionIn);

PHP_METHOD(Phalcon_Validation_Validator_InclusionIn, validate);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalcon_validation_validator_inclusionin_validate, 0, 0, 2)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_validation_validator_inclusionin_method_entry) {
	PHP_ME(Phalcon_Validation_Validator_InclusionIn, validate, arginfo_phalcon_validation_validator_inclusionin_validate, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
